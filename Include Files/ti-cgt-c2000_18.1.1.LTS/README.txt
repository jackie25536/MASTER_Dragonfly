                       C2000 C/C++ CODE GENERATION TOOLS
                            18.1.0.LTS Release Notes
                                   January 2018

================================================================================
Contents
================================================================================
1)  Support Information

2)  New Features

* Features Included from v17.9.0.STS:
2.1) C++ ABI Compatibility

2.2) CLA code size improvements

* Features Included from v17.3.0.STS:
2.3) C2000/CLA: Optimization of volatile bitfield assignments

2.4) CLA: Prefer direct addressing with --cla_support=cla[12]

* Features Included from v16.12.0.STS:
2.5) Improved stack usage with inline functions

-------------------------------------------------------------------------------
1.  Support Information
-------------------------------------------------------------------------------

-------------------------------------------------------------------------------
1.1) List of Fixed and Known Defects
-------------------------------------------------------------------------------

As of the 16.12.0.STS release, the DefectHistory.txt file has been replaced
with the two files Open_defects.html and Closed_defects.html. For open bugs, a
status of Open or Accepted means that the bug has not been examined yet,
whereas a status of Planned means that an evaluation or fix is in progress.

-------------------------------------------------------------------------------
1.2) Compiler Wiki
-------------------------------------------------------------------------------

A Wiki has been established to assist developers in using TI Embedded
Processor Software and Tools.  Developers are encouraged to read and
contribute to the articles.  Registered users can update missing or
incorrect information.  There is a large section of compiler-related
material.  Please visit:

http://processors.wiki.ti.com/index.php?title=Category:Compiler

-------------------------------------------------------------------------------
1.3) Compiler Documentation Errata
-------------------------------------------------------------------------------

Errata for the "TI C2000 Optimizing Compiler User's Guide" and the
"TI C2000 Assembly Language User's Guide" is available online at the
Texas Instruments Embedded Processors CG Wiki:

http://processors.wiki.ti.com/index.php?title=Category:Compiler

under the 'Compiler Documentation Errata' link.

-------------------------------------------------------------------------------
1.4) TI E2E Community
-------------------------------------------------------------------------------

Questions concerning TI Code Generation Tools can be posted to the TI E2E
Community forums.  The "Development Tools" forum can be found at:

http://e2e.ti.com/support/development_tools/f/default.aspx

-------------------------------------------------------------------------------
1.5) Defect Tracking Database
-------------------------------------------------------------------------------

Compiler defect reports can be tracked at the Development Tools bug
database, SDOWP. The log in page for SDOWP, as well as a link to create
an account with the defect tracking database is found at:

https://cqweb.ext.ti.com/pages/SDO-Web.html

A my.ti.com account is required to access this page.  To find an issue
in SDOWP, enter your bug id in the "Find Record ID" box once logged in.
To find tables of all compiler issues click the queries under the folder:

"Public Queries" -> "Development Tools" -> "TI C-C++ Compiler"

With your SDOWP account you can save your own queries in your
"Personal Queries" folder.

-------------------------------------------------------------------------------
1.6) Long Term Support release
-------------------------------------------------------------------------------

The C2000 CGT v18.1.0.LTS release is a long term support (LTS) release. This
release will be supported for roughly 2 years with periodic bug fix updates.

-------------------------------------------------------------------------------
2.  New Features
-------------------------------------------------------------------------------

-------------------------------------------------------------------------------
2.1) C++ ABI Compatibility
-------------------------------------------------------------------------------

This release contains the first planned updates in preparation for the support
of C++14 (International Standard ISO/IEC 14882:2014(E)). As part of this
update, it is necessary to make changes which might cause errors when building
C++ projects containing C++ object files compiled with older versions of the
compiler.

These errors will usually include linktime errors involving undefined symbols.
If you see undefined symbol errors during a link, pass the "--no_demangle"
option to the compiler. If the undefined symbol's name starts with _Z or _ZVT,
then it's possible that there is a C++ object file or library built with an
older version of the tools being used. These will need to be compiled with the
v18.1.0.LTS tools to work properly.


-------------------------------------------------------------------------------
2.2) CLA code size improvements
-------------------------------------------------------------------------------

Improvements in instruction scheduling have reduced code size 1 to 2% for  
generated CLA code. The improvements are due to better flexibility in 
scheduling of CLA auxiliary register usage as well as improved modeling of
the CLA pipeline's write-followed-by-read restriction especially around 
branches and calls. These improvements are enabled by default during 
code generation.


-------------------------------------------------------------------------------
2.3) C2000/CLA: Optimization of volatile bitfield assignments
-------------------------------------------------------------------------------

Prior to this release, asignments to volatile bitfields would follow the read,
modify, write methodology, even when such an operation is not needed. Consider
the following code segment:

short a;
struct str16 {
   short x:16;
};
volatile struct str16 str16_vol;

void foo(void)
{
   str16_vol.x = a;
}

Prior to this optimization, str16_vol.x would be read before being assigned
to, resulting in the C2000 assembly:

        MOVW      DP,#_str16_vol
        MOV       AL,@_str16_vol
        MOV       AL,@_a
        MOV       @_str16_vol,AL

The initial MOVW is unnecessary. With this release, such a move will not be
generated on either C2000 or CLA.

-------------------------------------------------------------------------------
2.4) CLA: Prefer direct addressing with --cla_support=cla[12]
-------------------------------------------------------------------------------

When accessing and object multiple times in succession, earlier versions of
the compiler would generate inefficient indirect addressing operations. For
example, the following code:

struct { short x; short y; } dst_struct;
dst_struct.y = 0;

Might generate the following assembly:

        MMOVI16   MAR1,#_dst_struct
        MNOP
        MNOP
        MMOVZ16   MR0,#0
        MMOV16    *MAR1+[#1],MR0

In this release, the following assembly will be genereated instead:

        MMOVZ16   MR0,#0
        MMOV16    @_dst_struct+1,MR0


-------------------------------------------------------------------------------
2.5) Improved stack usage with inline functions
-------------------------------------------------------------------------------

The new compiler improves stack usage by sharing aggregate data originally
defined in inline functions. Example:

struct ARGS { int f1,f2,f3,f4,f5; };

static inline void func1()
{
   struct ARGS a = {1, 2, 3, 4, 5};
   foo(&a);
}

static inline void func2()
{
   struct ARGS b = {1, 2, 3, 4, 5};
   foo(&b);
}

void func3()
{
   func1();
   func2();
}


In previous compilers, if func1 and func2 are inlined, the structs a
and b would not share the same stack location. This version of the
compiler will now share stack memory for local aggregates defined in
inline functions.

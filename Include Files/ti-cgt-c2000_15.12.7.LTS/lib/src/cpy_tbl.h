/*****************************************************************************/
/* cpy_tbl.h  v15.12.7                                                       */
/*                                                                           */
/* Copyright (c) 2003-2017 Texas Instruments Incorporated                    */
/* http://www.ti.com/                                                        */
/*                                                                           */
/*  Redistribution and  use in source  and binary forms, with  or without    */
/*  modification,  are permitted provided  that the  following conditions    */
/*  are met:                                                                 */
/*                                                                           */
/*     Redistributions  of source  code must  retain the  above copyright    */
/*     notice, this list of conditions and the following disclaimer.         */
/*                                                                           */
/*     Redistributions in binary form  must reproduce the above copyright    */
/*     notice, this  list of conditions  and the following  disclaimer in    */
/*     the  documentation  and/or   other  materials  provided  with  the    */
/*     distribution.                                                         */
/*                                                                           */
/*     Neither the  name of Texas Instruments Incorporated  nor the names    */
/*     of its  contributors may  be used to  endorse or  promote products    */
/*     derived  from   this  software  without   specific  prior  written    */
/*     permission.                                                           */
/*                                                                           */
/*  THIS SOFTWARE  IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS    */
/*  "AS IS"  AND ANY  EXPRESS OR IMPLIED  WARRANTIES, INCLUDING,  BUT NOT    */
/*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR    */
/*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT    */
/*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,    */
/*  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL  DAMAGES  (INCLUDING, BUT  NOT    */
/*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,    */
/*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY    */
/*  THEORY OF  LIABILITY, WHETHER IN CONTRACT, STRICT  LIABILITY, OR TORT    */
/*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE    */
/*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.     */
/*                                                                           */
/*                                                                           */
/* Specification of copy table data structures which can be automatically    */
/* generated by the linker (using the table() operator in the LCF).          */
/*****************************************************************************/
#ifndef _CPY_TBL
#define _CPY_TBL

#if defined(__TMS320C28XX_CLA__)
#error "Header file <cpy_tbl.h> not supported by CLA compiler"
#endif

#ifdef __cplusplus
extern "C" namespace std {
#endif /* __cplusplus */

/*****************************************************************************/
/* Copy Record Data Structure                                                */
/*****************************************************************************/
typedef struct copy_record
{
   unsigned int		 src_pgid;
   unsigned int		 dst_pgid;
   unsigned long	 src_addr;
   unsigned long	 dst_addr;
   unsigned long	 size;
} COPY_RECORD;

/*****************************************************************************/
/* Copy Table Data Structure                                                 */
/*****************************************************************************/
typedef struct copy_table 
{
   unsigned int		 rec_size;
   unsigned int		 num_recs;
   COPY_RECORD		 recs[1];
} COPY_TABLE;

/*****************************************************************************/
/* Prototypes for near and far general purpose copy routines.                */
/*****************************************************************************/
extern void copy_in(COPY_TABLE *tp);
extern void far_copy_in(COPY_TABLE *tp);

#ifdef __cplusplus
} /* extern "C" namespace std */
#endif /* __cplusplus */

/*****************************************************************************/
/* Prototypes for utilities used by copy_in() to move code/data between      */
/* program and data memory (see cpy_utils.asm for source).                   */
/*****************************************************************************/
extern void ddcopy(unsigned long src, unsigned long dst, unsigned long size);
extern void dpcopy(unsigned long src, unsigned long dst, unsigned long size);
extern void pdcopy(unsigned long src, unsigned long dst, unsigned long size);
extern void ppcopy(unsigned long src, unsigned long dst, unsigned long size);
#endif /* !_CPY_TBL */

#if defined(__cplusplus) && !defined(_CPP_STYLE_HEADER)
using std::COPY_RECORD;
using std::COPY_TABLE;
using std::copy_in;
using std::far_copy_in;
#endif /* _CPP_STYLE_HEADER */
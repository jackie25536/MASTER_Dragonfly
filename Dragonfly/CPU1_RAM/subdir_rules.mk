################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
ADC.obj: ../ADC.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="ADC.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DAC.obj: ../DAC.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="DAC.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Dragonfly.obj: ../Dragonfly.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="Dragonfly.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F28379D_GPIO.obj: ../F28379D_GPIO.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F28379D_GPIO.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F28379D_PWM.obj: ../F28379D_PWM.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F28379D_PWM.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_CodeStartBranch.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_CodeStartBranch.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_CodeStartBranch.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_DefaultISR.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_DefaultISR.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_DefaultISR.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_EPwm.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_EPwm.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_EPwm.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_GlobalVariableDefs.obj: D:/FIRM/Include\ Files/F2837xD_headers/source/F2837xD_GlobalVariableDefs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_GlobalVariableDefs.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_Gpio.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_Gpio.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_Gpio.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_Ipc.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_Ipc.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_Ipc.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_PieCtrl.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_PieCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_PieCtrl.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_PieVect.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_PieVect.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_PieVect.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_SysCtrl.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_SysCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_SysCtrl.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

F2837xD_usDelay.obj: D:/FIRM/Include\ Files/F2837xD_common/source/F2837xD_usDelay.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="F2837xD_usDelay.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

alg.obj: ../alg.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS8/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="D:/FIRM/Include Files/ti-cgt-c2000_18.1.1.LTS/include" --include_path="D:/FIRM/Include Files/ti-cgt-c2000_15.12.7.LTS/include" --include_path="D:/FIRM/Include Files/F2837xD_common/include" --include_path="D:/FIRM/Include Files/F2837xD_headers/include" --advice:performance=all --define=CPU1 -g --diag_suppress=10063 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="alg.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



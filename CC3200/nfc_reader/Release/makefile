################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5

GEN_OPTS__FLAG := --cmd_file="C:/Users/Alejandro/workspace_v6_1/ti_rtos_config/Default/configPkg/compiler.opt"
GEN_CMDS__FLAG := -l"C:/Users/Alejandro/workspace_v6_1/ti_rtos_config/Default/configPkg/linker.cmd"

ORDERED_OBJS += \
"./LCD.obj" \
"./button_if.obj" \
"./gpio_if.obj" \
"./jsmn.obj" \
"./main.obj" \
"./network_if.obj" \
"./pinmux.obj" \
"./timer_if.obj" \
"./uart_if.obj" \
"../cc3200v1p32.cmd" \
$(GEN_CMDS__FLAG) \
-l"libc.a" \
-l"F:/MICRO2/EPM/CC3200StarterProject-1.0.0/cc3200/src/Debug/libparse.a" \
-l"C:/ti/CC3200SDK_1.1.0/cc3200-sdk/example/nfc_reader/ccs/../../../oslib/ccs/ti_rtos/ti_rtos.a" \
-l"C:/ti/CC3200SDK_1.1.0/cc3200-sdk/example/nfc_reader/ccs/../../../driverlib/ccs/Release/driverlib.a" \
-l"C:/ti/CC3200SDK_1.1.0/cc3200-sdk/example/nfc_reader/ccs/../../../simplelink/ccs/OS/simplelink.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
nfc_reader.out \

EXE_OUTPUTS__QUOTED += \
"nfc_reader.out" \

BIN_OUTPUTS += \
nfc_reader.bin \

BIN_OUTPUTS__QUOTED += \
"nfc_reader.bin" \


# All Target
all: nfc_reader.out

dependents:
	-cd C:/Users/Alejandro/workspace_v6_1/ti_rtos_config/Default && $(MAKE) all

# Tool invocations
nfc_reader.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS) C:/Users/Alejandro/workspace_v6_1/ti_rtos_config/Default/configPkg/linker.cmd
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib --abi=eabi -me -g --define=cc3200 --define=__CCS__ --define=ENABLE14443A --define=ENABLE_HOST --define=ENABLE15693 --define=TRF7970A --define=ccs --define=SL_PLATFORM_MULTI_THREADED --define=USE_TIRTOS --diag_warning=225 --display_error_number --diag_wrap=off -z -m"nfc_reader.map" --heap_size=0x0 --stack_size=0x512 -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/lib" -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" --reread_libs --warn_sections --diag_wrap=off --display_error_number --xml_link_info="nfc_reader_linkInfo.xml" --rom_model -o "nfc_reader.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

nfc_reader.bin: $(EXE_OUTPUTS)
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armhex"  -o "nfc_reader.bin" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "LCD.pp" "button_if.pp" "gpio_if.pp" "jsmn.pp" "main.pp" "network_if.pp" "pinmux.pp" "timer_if.pp" "uart_if.pp" 
	-$(RM) "LCD.obj" "button_if.obj" "gpio_if.obj" "jsmn.obj" "main.obj" "network_if.obj" "pinmux.obj" "timer_if.obj" "uart_if.obj" 
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-"C:/ti/ccsv6/utils/tiobj2bin/tiobj2bin" "nfc_reader.out" "nfc_reader.bin" "C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armofd" "C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armhex" "C:/ti/ccsv6/utils/tiobj2bin/mkhex4bin"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build
C:/Users/Alejandro/workspace_v6_1/ti_rtos_config/Default/configPkg/linker.cmd:

-include ../makefile.targets


//-----------------------------------------------------------------------------
// GA403 Fan Tables
//-----------------------------------------------------------------------------
# Performance
CPU Temps Ramp Up        47 62 65 68 70 72 74 76
CPU Temps Ramp Down      42 56 62 64 66 68 71 73

GPU Temps Ramp Up        47 61 63 68 68 71 71 73
GPU Temps Ramp Down      42 52 58 61 63 65 67 69

SYS Temps Ramp Up        47 59 62 65 67 69 71 73
SYS Temps Ramp Down      42 54 57 60 61 62 63 64

CPU RPM                  2200 2800 2900 3100 3300 3800 4200 4700
GPU RPM                  2500 3000 3200 3400 3600 4000 4500 5000
SYS RPM                  2600 3700 3900 3900 *5400* 5500 6800 8000 

# Alt-Performance
CPU Temps Ramp Up        47 62 65 68 70 72 74 76
CPU Temps Ramp Down      42 56 62 64 66 68 71 73

GPU Temps Ramp Up        47 61 63 68 68 71 71 73
GPU Temps Ramp Down      42 52 58 61 63 65 67 69

SYS Temps Ramp Up        47 59 62 65 67 69 71 73
SYS Temps Ramp Down      42 54 57 60 61 62 63 64

CPU RPM                  2200 2800 2900 3100 3300 3800 4200 4700
GPU RPM                  2500 3000 3200 3400 3600 4000 4500 5000
SYS RPM                  2600 3700 3900 3900 *4700* 5500 6800 8000

# Turbo
CPU Temps Ramp Up        20 64 66 68 70 72 74 76
CPU Temps Ramp Down      18 57 64 66 68 70 72 74

GPU Temps Ramp Up        25 61 64 66 68 70 72 74
GPU Temps Ramp Down      23 54 61 63 65 67 69 71

SYS Temps Ramp Up        20 55 57 59 61 63 65 67
SYS Temps Ramp Down      18 50 54 56 57 59 60 62

(4th temp?) Ramp Up      25 51 53 55 57 59 61 63
(4th temp?) Ramp Down    23 47 50 53 55 56 59 60

CPU RPM                  2800 2900 3100 3800 4200 4500 4900 5600
GPU RPM                  3000 3200 3400 4000 4500 4800 5200 5900
SYS RPM                  3700 3900 3900 5500 6800 7000 7900 7900
  
# Silent
CPU Temps Ramp Up        43 69 70 72 74 76 78
CPU Temps Ramp Down      39 64 65 67 69 71 73

GPU Temps Ramp Up        44 67 68 70 70 70 70
GPU Temps Ramp Down      39 59 60 62 64 66 68

SYS Temps Ramp Up        43 59 60 62 64 70 70
SYS Temps Ramp Down      39 55 56 58 60 62 64

CPU RPM                  2200 2500 2800 2900 3100 3300 3800
GPU RPM                  2500 2700 3000 3200 3400 3600 4000
SYS RPM                  2600 2700 3700 3900 3900 5400 5500

# Alt-Silent
CPU Temps Ramp Up        43 69 70 72
CPU Temps Ramp Down      39 64 65 67

GPU Temps Ramp Up        44 67 68 70
GPU Temps Ramp Down      39 59 60 62

SYS Temps Ramp Up        43 59 60 62
SYS Temps Ramp Down      39 55 56 58

CPU RPM                  2200 2500 2800 2900
GPU RPM                  2500 2700 3000 3200
SYS RPM                  2600 2700 3700 3900

//-----------------------------------------------------------------------------
// Get CPU Fan RPM
//-----------------------------------------------------------------------------

void Fan_Update_CPU_TACH(void)
{
    char raw_ticks;

  // NOPs for timing delay
    FUN_RAM_015e21();
    __asm("nop"); __asm("nop"); __asm("nop"); __asm("nop");

    // Mask bits 0, 2, 3
    byte TACH_Switch = REG_TSWCTLR & 0x0D;

    // Check Bit 2
    if (!(TACH_Switch & 0x04)) {
        FUN_RAM_01a6c7();
        
        raw_ticks = MainEC_CPU_Fan_TACH_LO;
        if (MainEC_CPU_Fan_TACH_LO == 0) {
            raw_ticks = MainEC_CPU_Fan_TACH_HI;
        }

        // Stall Check
        if ((raw_ticks == 0) || (func_0x01a6d3(), raw_ticks == 0)) {
            // Retry logic
            if (raw_ticks == 0) {
                DAT_RAM_00045f &= 0xEF; // Clear bit 4
            }
            CPU_TACH_LO = 0;
            CPU_TACH_HI = 0;
        }
        else if ((TACH_Switch & 0x08) != 0) {
            // Set bit 4
            DAT_RAM_00045f |= 0x10;
            
            // Calculate RPM
            Init_Fan_Control(MainEC_CPU_Fan_TACH_LO);
            FUN_RAM_01a734();
            func_0x015e15();
            FUN_RAM_015dfd();
            
            CPU_TACH_LO = extraout_R6;
            CPU_TACH_HI = extraout_R7;
            
            REG_TSWCTLR = TACH_Switch;
            return;
        }
    }
    return;
}

//-----------------------------------------------------------------------------
// Get GPU Fan RPM
//-----------------------------------------------------------------------------

void Fan_Update_GPU_TACH(void)
{
    char raw_ticks;

    // NOPs for timing delay
    FUN_RAM_015e21();
    __asm("nop"); __asm("nop"); __asm("nop"); __asm("nop");

    // Mask bits 0-2
    byte TACH_Switch = REG_TSWCTLR & 0x07;

    // If Bit 0 is clear, read TACH
    if (!(REG_TSWCTLR & 0x01)) {
        FUN_RAM_01a6c7(); // Trigger read?
        
        raw_ticks = MainEC_GPU_Fan_TACH_LO;
        if (MainEC_GPU_Fan_TACH_LO == 0) {
            raw_ticks = MainEC_GPU_Fan_TACH_HI;
        }

        // Stall Check
        if ((raw_ticks == 0) || (func_0x01a6d3(), raw_ticks == 0)) {
            // ... (Retry logic same as SYS fan)
            if (raw_ticks == 0) {
                DAT_RAM_00045f &= 0xDF; // Clear valid bit 5
            }
            GPU_TACH_LO = 0;
            GPU_TACH_HI = 0;
        }
        else if ((TACH_Switch & 0x02) != 0) {
            // Set valid bit 5 (0x20)
            DAT_RAM_00045f |= 0x20;
            
            // Calculate RPM
            Init_Fan_Control(MainEC_GPU_Fan_TACH_LO);
            FUN_RAM_01a734();
            func_0x015e15();
            FUN_RAM_015dfd();
            
            GPU_TACH_LO = extraout_R6;
            GPU_TACH_HI = extraout_R7;
            
            REG_TSWCTLR = TACH_Switch;
            return;
        }
    }
    return;
}

//-----------------------------------------------------------------------------
// Get SYS Fan RPM
//-----------------------------------------------------------------------------

void Fan_Update_SYS_TACH(void)
{
    char raw_ticks;
    
    // Setup for reading
    FUN_RAM_015e21();
    
    // NOPs for timing delay
    __asm("nop"); __asm("nop"); __asm("nop"); __asm("nop");
    
    // Mask lower 2 bits of mode register
    byte TACH_Switch = DAT_RAM_00184f & 0x03;

    // If Bit 0 is NOT set, proceed with read
    if (!(DAT_RAM_00184f & 0x01)) {
        // Read Hardware Registers
        MainEC_SYS_Fan_TACH_LO = REG_F3TLRR;
        MainEC_SYS_Fan_TACH_HI = REG_F3TMRR;
        
        raw_ticks = REG_F3TLRR;
        
        // Handle overflow/stall (if Low byte is 0, check High byte)
        if (REG_F3TLRR == 0) {
            raw_ticks = REG_F3TMRR;
        }

        // If ticks are 0, fan is stalled/stopped
        if ((raw_ticks == 0) || (func_0x01a6d3(), raw_ticks == 0)) {
             // Fallback to cached values
             raw_ticks = MainEC_SYS_Fan_TACH_LO;
             if (MainEC_SYS_Fan_TACH_LO == 0) {
                 raw_ticks = MainEC_SYS_Fan_TACH_HI;
             }
             // If still 0, clear valid flag in status register 0x485
             if (raw_ticks == 0) {
                 DAT_RAM_000485 &= 0xFE;
             }
             SYS_Fan_TACH_LO = 0;
             SYS_Fan_TACH_HI = 0;
        }
        else if ((TACH_Switch & 0x02) != 0) {
             // Valid Reading: Set Flag bit 0
             DAT_RAM_000485 |= 0x01;
             
             // Calculate RPM from ticks
             FUN_RAM_01a9a6(MainEC_SYS_Fan_TACH_LO, 0);
             FUN_RAM_01a734();
             FUN_RAM_01a9a6();
             FUN_RAM_015dfd();
             
             // Update Globals
             SYS_Fan_TACH_LO = extraout_R6;
             SYS_Fan_TACH_HI = extraout_R7;
             
             // Restore Mode
             DAT_RAM_00184f = TACH_Switch;
             return;
        }
    }
    return;
}

//-----------------------------------------------------------------------------
// Thermal Decision Engine
//-----------------------------------------------------------------------------

#include <stdint.h>
#include <stdbool.h>

// --- Type Definitions ---
typedef uint8_t  byte;
typedef uint16_t ushort;

// --- Global External Variables & Registers ---
extern byte System_STA_Flags;       // Global Status (Bit 2=CPU, Bit 1=GPU, Bit 3=SYS)
extern byte Temp_CPU_Current;
extern byte Temp_GPU_Current;
extern byte Fan_Step_CPU;           // Target step for CPU
extern byte Fan_Step_GPU;           // Target step for GPU
extern byte Fan_Step_SYS;         // SYS Fan Step
extern byte Fan_Step_CPU_Manual;    // Manual override target
extern byte Current_CPU_Fan_Lvl;    // Current duty cycle CPU
extern byte Current_GPU_Fan_Lvl;    // Current duty cycle GPU
extern byte CPU_Hysteresis_Timer;
extern byte GPU_Hysteresis_Timer;
extern byte Fan_Mode_Table;         // 0=Perf, 1=Turbo, 2=Silent, 3=Turbo
extern byte GPU_Fan_Duty_Bias;      // Bias offset for GPU
extern byte CPU_Fan_Duty_Bias;      // Bias offset for CPU
extern byte GPU_Related_Flag_30e;   // Config flag
extern byte System_Plugged_IN;      // Power state
extern byte Manual_Mode_Toggle;     // User override switch
extern byte TACH_Switch;            // Hardware TACH Mux

// --- RAM/Registers (Direct Addressing) ---
extern byte DAT_RAM_0094e7;         // Error Log
extern byte DAT_RAM_000717;         // GPU/sys Lookup Buffer
extern byte DAT_RAM_0003a0;         // Min Fan Limit Flag
extern byte GPU_STATUS_359;         // GPU Power State
extern byte DAT_RAM_003281;         // Power Management Flags
extern byte DAT_RAM_0004e4;         // Final Target Storage 1
extern byte DAT_RAM_0004e5;         // Final Target Storage 2

// --- Diagnostic / Factory Mode Flags ---
extern byte DAT_RAM_009596;         // Diag State A
extern byte DAT_RAM_009597;         // Diag State B
extern byte DAT_RAM_009598;         // Diag Step
extern byte DAT_RAM_009500;         // Diag Control 0
extern byte DAT_RAM_009501;         // Diag Control 1
extern byte DAT_RAM_009594;         // Diag Data 1
extern byte DAT_RAM_009595;         // Diag Data 2
extern byte DAT_RAM_00959d;         // Diag Temp Storage
extern byte DAT_RAM_00959e;         // Diag Result 1
extern byte DAT_RAM_00959f;         // Diag Result 2

// --- Hardware PWM Registers ---
extern byte REG_PM4STS;             // PWM 4 Status
extern byte REG_PM4DO;              // PWM 4 Data Out
extern byte DAT_SFR_9c;             // Special Function Register 0x9C

short Thermal_Decision_Main(byte thermal_mask, char hysteresis_offset)
{
    // Register Variables
    byte reg_R0, reg_R1, reg_B;
    byte acc_val;
    ushort dptr_addr;
    short s_ret_val;
    byte ret_hi, ret_lo; // Return value high/low bytes
    
    // Scratchpad variables for logic comparisons
    byte scratch_cmp;
    byte scratch_val;
    bool is_negative;

    // *--- 1. Initial Safety Check ---*
    FUN_RAM_01a64d();
    // Check psw equivalent for valid state
    if (Get_PSW_Flag() < 0) {
        thunk_FUN_RAM_014002();
        thunk_FUN_RAM_01ae2f();
        return 0; // Error exit
    }
    
    FUN_RAM_01a783();

    // *--- 2. CPU Thermal Logic ---*
    Current_CPU_Fan_Lvl = Current_Calculation_Constant;
    dptr_addr = 0x4c2;
    acc_val = System_STA_Flags;

    // Check Bit 2: CPU Thermal Enabled?
    if (!(System_STA_Flags & 0x04)) {
    LAB_CPU_BYPASS:
        FUN_RAM_019912(ret_lo);
        if (acc_val != 0) {
            DAT_RAM_0094e7 |= 0x08; // Log Error
            return (short)((ret_hi << 8) | ret_lo);
        }
        // Load default safety values
        *(byte *)dptr_addr = *(byte *)(reg_R1 + 0x7f0000);
        FUN_RAM_015baf();
        return (short)((ret_hi << 8) | ret_lo);
    }

    // Read CPU Sensors
    func_0x01a859();
    FUN_RAM_01a640();
    func_0x01a7fd();
    FUN_RAM_0194f0();
    
    // Check CPU Temp Threshold
    is_negative = (Temp_CPU_Current < scratch_val);

    // --- CPU Hysteresis ---
    if (!is_negative) {
        // Temperature is hovering near threshold
        dptr_addr = 0x70c;
        byte threshold_check = (byte)(-(scratch_val >> 7)); // Logic to determine back-off
        
        bool timer_check = (CPU_Hysteresis_Timer < threshold_check);
        byte next_timer = CPU_Hysteresis_Timer + (scratch_val >> 7);

        if (timer_check) {
            CPU_Hysteresis_Timer++;
            // Calculate back-off to prevent flickering
            acc_val = reg_R1 - (threshold_check >> 7);
            byte bypass_calc = (thermal_mask - ((acc_val != 0) ? 1 : 0)) - acc_val;
            goto LAB_CPU_BYPASS;
        }

        // Timer finished, change
        func_0x01a89d();
        dptr_addr = 0x696;
        Current_Calculation_Constant = next_timer;
        FUN_RAM_01a64d();
        
        if (timer_check) {
            func_0x01a867();
             if (timer_check) {
                  *(char *)dptr_addr -= 1;
             }
             func_0x01a5fc();
             thunk_FUN_RAM_01ae2f();
             return (short)((ret_hi << 8) | ret_lo);
        }
        thunk_FUN_RAM_014002();
        thunk_FUN_RAM_01ae2f();
        return (short)((ret_hi << 8) | ret_lo);
    }

    // --- CPU Fan Step Calculation ---
    if (Fan_Mode_Table == 0 || Fan_Mode_Table == 2) {
    LAB_RESET_CPU_TABLE:
        CPU_Hysteresis_Timer = 0;
        CPU_Fan_Duty_Bias = 0;
    } else {
        FUN_RAM_01a619();
        func_0x01a957();
        // Check if temp dropped significantly
        if (Temp_CPU_Current < (byte)(scratch_val + 1)) goto LAB_RESET_CPU_TABLE;

        // Iterate Table
        scratch_cmp = 0;
        acc_val = CPU_Fan_Duty_Bias;
        func_0x01a89d();
        dptr_addr = 0x696;
        Current_Calculation_Constant = acc_val;

        while (FUN_RAM_01a64d(), scratch_cmp < 0) {
            thunk_FUN_RAM_014002();
            dptr_addr = 3; 
            FUN_RAM_01a838();
            // Compare Step vs Table
            scratch_cmp = (acc_val < (byte)(scratch_val + 1)) ? 0x80 : 0;
            acc_val -= (scratch_val + 1);
            if (scratch_cmp < 0) break;
            func_0x01a677();
        }
        Fan_Step_CPU = Current_Calculation_Constant;
    }

    // --- 3. GPU Thermal Logic ---
    acc_val = System_STA_Flags;
    
    // Check Bit 1: GPU Enabled?
    if (!(System_STA_Flags & 0x02)) {
    LAB_GPU_BYPASS:
        func_0x015e15(acc_val & thermal_mask);
        return (short)((ret_hi << 8) | ret_lo);
    }

    // Load GPU Config
    func_0x01a85a(DAT_RAM_0091f0);
    FUN_RAM_01a756();
    FUN_RAM_01a947();
    FUN_RAM_019525();
    
    // Check GPU Temp Threshold
    is_negative = (Temp_GPU_Current < scratch_val);

    if (is_negative) {
        // GPU Cool Logic
        FUN_RAM_01a619();
        func_0x01a957();
        
        if (Temp_GPU_Current < (byte)(scratch_val + 1)) {
            // Ramp Down
            acc_val = 0;
            byte bias_val = GPU_Fan_Duty_Bias;
            FUN_RAM_01a8a7();
            dptr_addr = 0x696;
            Current_Calculation_Constant = bias_val;
            
            // Loop down table
            while (FUN_RAM_01a64d(), acc_val < 0) {
                thunk_FUN_RAM_014002();
                dptr_addr = 5;
                FUN_RAM_01a844();
                acc_val = (bias_val < (byte)(scratch_val + 1)) ? 0x80 : 0;
                bias_val -= (scratch_val + 1);
                if (acc_val < 0) break;
                func_0x01a677();
            }
            Current_GPU_Fan_Lvl = Current_Calculation_Constant;
        } else {
            // Reset
            GPU_Hysteresis_Timer = 0;
            GPU_Fan_Duty_Bias = 0;
        }
    } else {
        // GPU Hysteresis
        byte debounce_check = (byte)(-(scratch_cmp >> 7));
        acc_val = GPU_Hysteresis_Timer + (scratch_cmp >> 7);
        
        if (GPU_Hysteresis_Timer < debounce_check) {
            GPU_Hysteresis_Timer = 0;
            return (short)((ret_hi << 8) | ret_lo);
        }

        // Calculate Target
        FUN_RAM_01a8a7();
        dptr_addr = 0x696;
        Current_Calculation_Constant = acc_val;
        
        // Loop Up Table
        while (FUN_RAM_01a64d(), scratch_cmp < 0) {
             thunk_FUN_RAM_014002();
             Init_Fan_Control();
             scratch_cmp = (acc_val < scratch_val) ? 0x80 : 0;
             acc_val -= scratch_val;
             if (scratch_cmp < 0) break;
             func_0x01a677();
        }
        
        // Set GPU Value
        dptr_addr = 0x696;
        acc_val = Current_Calculation_Constant;
        func_0x01a5fc();
        Init_Fan_Control();
        
        // Bound Check
        if (acc_val < scratch_val) {
             FUN_RAM_01a9bd();
             *(char *)dptr_addr -= 1;
        }
        Current_GPU_Fan_Lvl = Current_Calculation_Constant;
        
        if (Fan_Mode_Table == 0 || Fan_Mode_Table == 2) {
             Fan_Step_GPU = 0;
             acc_val = 0;
             goto LAB_GPU_BYPASS;
        }
    }

    // --- 4. SYS Fan Logic (Bit 3) ---
    dptr_addr = 0x4c2;
    if (System_STA_Flags & 0x08) {
        func_0x01a85a(DAT_RAM_0090fc);
        FUN_RAM_01a756();
        FUN_RAM_01a947();
        FUN_RAM_01955a();
        
        // SYS Calculation Logic
        bool sys_check = (Fan_Step_GPU < scratch_val);
        Current_Calculation_Constant = sys_check;
        FUN_RAM_01a7f0();
        FUN_RAM_01a61f();
        
        // Combine offsets
        acc_val = sys_check + (ret_hi - (scratch_cmp >> 7));
        FUN_RAM_01a9c4();
        
        if (acc_val < scratch_val) {
            // Mode Check for SYS Fan
            if ((Fan_Mode_Table != 0) && ((Fan_Mode_Table ^ 2) != 0)) {
                FUN_RAM_01a619();
                acc_val = (Fan_Mode_Table ^ 2) + (reg_B - (scratch_cmp >> 7));
                FUN_RAM_01a9c4();
                
                if (acc_val < (byte)(scratch_val + 1)) {                  
                    scratch_cmp = 0;
                    acc_val = DAT_RAM_000717;
                    func_0x01a8b1();
                    dptr_addr = 0x696;
                    Current_Calculation_Constant = acc_val;
                    FUN_RAM_01a64d();
                    if (scratch_cmp < 0) {
                         thunk_FUN_RAM_014002();
                         thunk_FUN_RAM_01ae2f();
                         return (short)((ret_hi << 8) | ret_lo);
                    }
                    goto LAB_SET_GPU_STEP;
                }
            }
            Fan_Step_SYS = 0;
            DAT_RAM_000717 = 0;
        } else {
            // SYS Fan Step Increment
            dptr_addr = 0x70d;
            scratch_cmp = (Fan_Step_SYS < (byte)-(scratch_cmp >> 7)) ? 0x80 : 0;
            byte sys_next = Fan_Step_SYS + (scratch_cmp >> 7);
            
            if (scratch_cmp < 0) {
                Fan_Step_SYS++;
                if (Fan_Step_SYS & 1) goto LAB_TABLE_LOADER;
                goto LAB_DIAGNOSTIC_CHECK;
            }
            
            // Loop SYS Table
            func_0x01a8b1();
            dptr_addr = 0x696;
            Current_Calculation_Constant = sys_next;
            while (FUN_RAM_01a64d(), scratch_cmp < 0) {
                 thunk_FUN_RAM_014002();
                 FUN_RAM_01a84d();
                 scratch_cmp = (sys_next < scratch_val) ? 0x80 : 0;
                 sys_next -= scratch_val;
                 if (scratch_cmp < 0) break;
                 func_0x01a677();
            }
            
            // SYS Fan final calc
            dptr_addr = 0x696;
            acc_val = Current_Calculation_Constant;
            func_0x01a5fc();
            FUN_RAM_01a84d();
            if (acc_val < scratch_val) {
                 FUN_RAM_01a9bd();
                 *(char *)dptr_addr -= 1;
                 *(byte *)dptr_addr &= 0xFC;
                 return (short)((ret_hi << 8) | ret_lo);
            }
    LAB_SET_GPU_STEP:
            Fan_Step_GPU = Current_Calculation_Constant;
        }
    }

    // --- 5. Target Calculation ---
    
    // GPU Status Flag Check? (Bit 6 of 0x30E)
    if (((GPU_Related_Flag_30e & 0x40) != 0) && (Fan_Mode_Table == 2)) {
        Current_GPU_Fan_Lvl = 0;
        Fan_Step_GPU = 0;
    }

    // Battery vs AC Check
    // If not battery restricted OR plugged in
    byte cpu_final, gpu_final, final_decided_fan_target;
    
    if (!(DAT_RAM_003281 & 0x02) || (System_Plugged_IN & 0x01)) {
        cpu_final = Current_CPU_Fan_Lvl;
        if (Current_CPU_Fan_Lvl < Fan_Step_CPU) {
            cpu_final = Fan_Step_CPU;
        }
    } else {
        cpu_final = Fan_Step_CPU;
    }

    gpu_final = Current_GPU_Fan_Lvl;
    if (Current_GPU_Fan_Lvl < Fan_Step_GPU) {
        gpu_final = Fan_Step_GPU;
    }

    // Final Fan Target
    final_decided_fan_target = cpu_final;
    if (cpu_final < (byte)(gpu_final + 1)) {
        final_decided_fan_target = gpu_final;
    }

    // Minimum Floor Check
    scratch_cmp = (final_decided_fan_target < 2) ? 0x80 : 0;
    acc_val = final_decided_fan_target - 2;
    
    // If target < 2 AND (MinLimit & 1) AND !(GPU_Status & 4) -> Force to 1
    if ((scratch_cmp < 0) && (DAT_RAM_0003a0 & 0x01) && !(GPU_STATUS_359 & 0x04)) {
        acc_val = 1;
        final_decided_fan_target = 1;
    }

    // Store Final Targets
    FUN_RAM_01a616();
    func_0x01a9ce();
    FUN_RAM_01a60f();
    
    acc_val += (reg_B - (scratch_cmp >> 7));
    FUN_RAM_015c06();
    DAT_RAM_0004e4 = reg_B;
    DAT_RAM_0004e5 = acc_val;

    // --- 6. Manual Mode Override ---
    if (Manual_Mode_Toggle & 0x04) {
        func_0x019f26();
        func_0x01a9d4();
        Current_Calculation_Constant = (Fan_Step_CPU_Manual < scratch_val);
        thunk_FUN_RAM_01ae2f();
        return (short)((ret_hi << 8) | ret_lo);
    }

    // --- 7. Check for diag flags? ---
    // Check for diag flags 0x9596 / 0x9597
    byte diag_b = ret_hi;

    if ((Manual_Mode_Toggle == 0) && (DAT_RAM_009596 != 0 || DAT_RAM_009597 != 0)) {
        
        // Bit 0 Check
        if ((DAT_RAM_009596 & 0x01) == 0) {
            if ((DAT_RAM_009597 & 0x01) == 0) {
                // Bit 1 Check
                if ((DAT_RAM_009596 & 0x02) == 0) {
                    if ((DAT_RAM_009597 & 0x02) == 0) {
                        // Bit 2 Check
                        if ((DAT_RAM_009596 & 0x04) == 0) {
                            if ((DAT_RAM_009597 & 0x04) == 0) {
                                // Bit 3 Check
                                if ((DAT_RAM_009596 & 0x08) == 0) {
                                    if ((DAT_RAM_009597 & 0x08) == 0) {
                                        dptr_addr = 0x9596;
                                        // Bit 4 Check
                                        if ((DAT_RAM_009596 & 0x10) == 0) {
                                            if (DAT_RAM_009597 & 0x10) {
                                                DAT_RAM_009501 |= 0x10;
                                                DAT_RAM_009597 &= 0xEF;
                                                return (short)((ret_hi << 8) | acc_val);
                                            }
                                            // Bit 5 Check
                                            if ((DAT_RAM_009596 & 0x20) == 0) {
                                                dptr_addr = 0x9597;
                                                if (DAT_RAM_009597 & 0x20) {
                                                    // State: 0x23 Mode
                                                    FUN_RAM_01a2db();
                                                    *(byte *)dptr_addr = 0x23;
                                                    FUN_RAM_019d54();
                                                    if (ret_lo != 0) {
                                                        FUN_RAM_01a2b7();
                                                        thunk_FUN_RAM_015f03();
                                                        func_0x015e15(DAT_RAM_0092af, 0);
                                                        return (short)((ret_hi << 8) | ret_lo);
                                                    }
                                                }
                                            } else {
                                                // State: Error Recovery?
                                                FUN_RAM_01a283();
                                                FUN_RAM_01a1ef();
                                                Thermal_Decision_Main(0,0);
                                                if (ret_lo != 0) {
                                                    DAT_RAM_009500 &= 0xDF;
                                                    DAT_RAM_009596 &= 0xDF;
                                                    goto LAB_SET_DIAG_20;
                                                }
                                            }
                                            return (short)((ret_hi << 8) | acc_val);
                                        }
                                        // Bit 4 is SET in 9596 - Set State 0x70
                                        FUN_RAM_01a2db();
                                        *(byte *)dptr_addr = 0x70;
                                        FUN_RAM_019d54();
                                        if (ret_lo != 0) {
                                            FUN_RAM_01a2b7();
                                            thunk_FUN_RAM_015f03();
                                            DAT_RAM_009500 &= 0xEF;
                                            DAT_RAM_009596 &= 0xEF;
                                            DAT_RAM_009597 |= 0x10;
                                            DAT_RAM_009598 = 0;
                                            return (short)((ret_hi << 8) | ret_lo);
                                        }
                                    } else {
                                        // 9597 Bit 3 is SET
                                        byte temp_check = DAT_RAM_009597;
                                        FUN_RAM_01a01c();
                                        if (temp_check != 0) {
                                            FUN_RAM_01a2b7();
                                            thunk_FUN_RAM_015f03();
                                            DAT_RAM_009501 |= 0x08;
                                            DAT_RAM_009597 &= 0xF7;
                                            return (short)((ret_hi << 8) | ret_lo);
                                        }
                                    }
                                } else {
                                    // 9596 Bit 3 is SET
                                    FUN_RAM_01a283();
                                    FUN_RAM_01a1ef();
                                    Thermal_Decision_Main(0,0);
                                    if (ret_lo != 0) {
                                        DAT_RAM_009500 &= 0xF7;
                                        DAT_RAM_009596 &= 0xF7;
                                        DAT_RAM_009597 |= 0x08;
                                        goto LAB_SET_DIAG_20;
                                    }
                                }
                            } else {
                                // 9597 Bit 2 is SET
                                byte temp_check = DAT_RAM_009597;
                                FUN_RAM_01a01c();
                                if (temp_check != 0) {
                                    FUN_RAM_01a2b7();
                                    thunk_FUN_RAM_015f03();
                                    DAT_RAM_009501 |= 0x04;
                                    DAT_RAM_009597 &= 0xFB;
                                    return (short)((ret_hi << 8) | ret_lo);
                                }
                            }
                        } else {
                             // 9596 Bit 2 is SET
                             FUN_RAM_01a283();
                             FUN_RAM_01a1ef();
                             Thermal_Decision_Main(0,0);
                             if (ret_lo != 0) {
                                  DAT_RAM_009500 &= 0xFB;
                                  DAT_RAM_009596 &= 0xFB;
                                  DAT_RAM_009597 |= 0x04;
                                  goto LAB_SET_DIAG_20;
                             }
                        }
                    } else {
                        // 9597 Bit 1 is SET
                        byte temp_check = DAT_RAM_009597;
                        func_0x01a00b();
                        if (temp_check != 0) {
                             DAT_RAM_009594 = DAT_RAM_00959d;
                             FUN_RAM_01a237();
                             DAT_RAM_009501 |= 0x02;
                             DAT_RAM_009597 &= 0xFD;
                             return (short)((ret_hi << 8) | ret_lo);
                        }
                    }
                } else {
                    // 9596 Bit 1 is SET
                    FUN_RAM_01a283();
                    FUN_RAM_01a1ec();
                    Thermal_Decision_Main(0,0);
                    if (ret_lo != 0) {
                         DAT_RAM_009500 &= 0xFD;
                         DAT_RAM_009596 &= 0xFD;
                         DAT_RAM_009597 |= 0x02;
                         goto LAB_SET_DIAG_20;
                    }
                }
            } else {
                // 9597 Bit 0 is SET
                byte temp_check = DAT_RAM_009597;
                func_0x01a00b();
                if (temp_check != 0) {
                     DAT_RAM_009595 = DAT_RAM_00959d;
                     FUN_RAM_01a237();
                     DAT_RAM_009501 |= 0x01;
                     DAT_RAM_009597 &= 0xFE;
                     return (short)((ret_hi << 8) | ret_lo);
                }
            }
        } else {
            // 9596 Bit 0 is SET
            FUN_RAM_01a283();
            FUN_RAM_01a1ec();
            Thermal_Decision_Main(0,0);
            if (ret_lo != 0) {
                DAT_RAM_009500 &= 0xFE;
                DAT_RAM_009596 &= 0xFE;
                DAT_RAM_009597 |= 0x01;
                
            LAB_SET_DIAG_20:
                DAT_RAM_009597 |= 0x20;
                DAT_RAM_009598 = 0x19;
                return (short)((ret_hi << 8) | ret_lo);
            }
        }
    }

    // --- 8. Final Output Conversion & Table Loading ---

    if (!(reg_B & 1)) {
        DAT_RAM_00959e = 0x16;
        DAT_RAM_00959f = 0x23;
        FUN_RAM_019d54();
        return (short)((ret_hi << 8) | ret_lo);
    }
    
    // Final Temperature/Step Mapping to return code
    char result_code;
    char code_offset;
    
    if (acc_val < 0x10) { code_offset = -0x69; result_code = acc_val - 0x1F; }
    else if (acc_val < 0x1b) { code_offset = -0x69; result_code = acc_val + 0xB0; }
    else if (acc_val < 0x20) { code_offset = -0x6E; result_code = acc_val + 0x50; }
    else if (acc_val < 0x28) { code_offset = -0x6E; result_code = acc_val + 0x50; }
    else if (acc_val < 0x5c) { code_offset = -0x6C; result_code = acc_val + 0x90; }
    else if (acc_val < 0x60) { code_offset = -0x6C; result_code = acc_val + 0x90; }
    else if (acc_val < 0x80) { code_offset = -0x6C; result_code = acc_val + 0x90; }
    else if (acc_val < 0xa0) { code_offset = -0x6C; result_code = acc_val + 0x90; }
    else if (acc_val < 0xc0) { 
        return (ushort)ret_hi << 8; 
    }
    else {
        // Fallback calculation
        code_offset = -0x6c - ((0x6f < acc_val) ? 1 : 0);
        result_code = acc_val + 0x90;
    }
    
    return (short)((ret_hi << 8) | *(byte *)(code_offset | result_code));

    // --- 9. Fan Table Loader Loop ---
    // This label is jumped to from the SYS logic (LAB_RAM_019a67)
    LAB_DIAGNOSTIC_CHECK:
    LAB_TABLE_LOADER:
    if ((DAT_RAM_009227 & 1) || (DAT_RAM_009227 >> 4)) {
        // This loop handles loading of thermal tables into RAM
        do {
            if ((DAT_RAM_009227 & 1) != 0) {
                // Load Table 1 (Performance)
                s_ret_val = -0x6dde;
                FUN_RAM_0199f8(DAT_RAM_009222);
                FUN_RAM_01a211(); 
                *(undefined *)(uint3)(ushort)(sVar10 + 1) = 0;
                Load_Thermal_Table_Offset();
                if (ret_lo == 0) DAT_RAM_009227 |= 0x40;
                else DAT_RAM_009227 |= 0x80;
                FUN_RAM_019a32(DAT_RAM_009222);
            }
            if ((DAT_RAM_009227 >> 1 & 1) != 0) {
                // Load Table 2 (Turbo)
                FUN_RAM_01a29d();
                FUN_RAM_01a22c();
                FUN_RAM_01a272();
                Load_Thermal_Table_Offset();
                if (ret_lo == 0) DAT_RAM_009227 |= 0x40;
                else DAT_RAM_009227 |= 0x80;
                FUN_RAM_019a32(DAT_RAM_009222);
            }
            }
            if ((DAT_RAM_009227 >> 2 & 1) != 0) {
                // Load Table 3 (Silent)
                FUN_RAM_0199f8(DAT_RAM_009222);
                FUN_RAM_01a211();
                DAT_RAM_00069c = DAT_RAM_009221; // Limit that is specific for Silent? Might be the "Set GPU to 33w" Temp Threshold.
                FUN_RAM_01a27a();
                FUN_RAM_01a2c0();
                Load_Thermal_Table_Offset();
                if (ret_lo == 0) DAT_RAM_009227 |= 0x40;
                else DAT_RAM_009227 |= 0x80;
                FUN_RAM_019a32(DAT_RAM_009222);
            }
            if ((DAT_RAM_009227 >> 3 & 1) == 0) goto LAB_RAM_019b76;
                // Load Table 4 (Manual)
                do {
                s_ret_val = -0x6dde;
                FUN_RAM_0199f8(DAT_RAM_009222);
                FUN_RAM_01a29d();
                FUN_RAM_01a22c();
                FUN_RAM_01a272();
                uVar9 = s_ret_val + 1;
                *(undefined *)(uint3)uVar9 = 0;
                Load_Thermal_Table_Offset();
                if (ret_lo == 0) {
                    DAT_RAM_009227 |= 0x40;
                } else {
                    // Manual mode fallback attempt
                    FUN_RAM_01a220();
                    *(undefined *)(uint3)(ushort)(uVar9 + 1) = 0;
                    FUN_RAM_01a27a();
                    FUN_RAM_01a2c0();
                    Load_Thermal_Table_Offset();
                    if (ret_lo == 0) DAT_RAM_009227 |= 0x40;
                    else DAT_RAM_009227 |= 0x80;
                }
                FUN_RAM_019a32(DAT_RAM_009222);
            }
            
            // Write to PWM
            LAB_RAM_019b76:
            if ((DAT_RAM_009227 & 0x10) == 1) {
                 FUN_RAM_0199f8(DAT_RAM_009225);
                 TACH_Switch = DAT_RAM_00922a & 0xFE;
                 acc_val &= 0xDD;
                 DAT_RAM_009227 = 0;
                 byte hw_val = DAT_RAM_009224;
                 FUN_RAM_015ea4();
                 
                 // PWM Update Logic
                 byte volatile pwm_read = read_volatile_1(DAT_SFR_9c);
                 write_volatile_1(DAT_SFR_9c, pwm_read + 1);
                 
                 func_0x01a249(hw_val - (hysteresis_offset - (acc_val >> 7)));
                 FUN_RAM_011f11(0x80);
                 
                 DAT_RAM_00068b = REG_PM4STS;
                 if ((REG_PM4STS & 1) == 1) {
                     REG_PM4DO = DAT_RAM_009227;
                 }
            }
        } while (true);
    }
    return (short)((ret_hi << 8) | ret_lo);
}



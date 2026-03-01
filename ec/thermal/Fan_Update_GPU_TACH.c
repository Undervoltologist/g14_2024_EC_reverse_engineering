
void Fan_Update_GPU_TACH(void)

{
  undefined extraout_R6;
  undefined extraout_R7;
  uint8_t in_ACC;
  uint8_t uVar1;
  
  Init_Sensors(0x68b,in_ACC);
  nop();
  nop();
  nop();
  nop();
  Calc_68a = REG_TSWCTLR & 7;
  if ((REG_TSWCTLR & 1) != 1) {
    Init_Sensors(0x368,REG_F2TMRR);
    uVar1 = MainEC_GPU_Fan_TACH_LO.low_byte;
    if (MainEC_GPU_Fan_TACH_LO.low_byte == '\0') {
      uVar1 = MainEC_GPU_Fan_TACH_LO.high_byte;
    }
    if ((uVar1 == '\0') || (FUN_RAM_01a6d3(), uVar1 == '\0')) {
      uVar1 = MainEC_GPU_Fan_TACH_LO.low_byte;
      if (MainEC_GPU_Fan_TACH_LO.low_byte == '\0') {
        uVar1 = MainEC_GPU_Fan_TACH_LO.high_byte;
      }
      if (uVar1 == '\0') {
        Fan_State = Fan_State & 0xdf;
      }
      GPU_TACH_LO = 0;
      GPU_TACH_HI = 0;
    }
    else if ((Calc_68a >> 1 & 1) != 0) {
      Fan_State = Fan_State | 0x20;
      Init_Fan_Control(MainEC_GPU_Fan_TACH_LO.low_byte);
      FUN_RAM_01a734();
      func_0x015e15();
      FUN_RAM_015dfd();
      GPU_TACH_LO = extraout_R6;
      GPU_TACH_HI = extraout_R7;
      REG_TSWCTLR = Calc_68a;
      return;
    }
  }
  return;
}


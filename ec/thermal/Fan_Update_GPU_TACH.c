
void Fan_Update_GPU_TACH(void)

{
  undefined extraout_R6;
  undefined extraout_R7;
  char cVar1;
  
  FUN_RAM_015e21();
  nop();
  nop();
  nop();
  nop();
  TACH_Switch = REG_TSWCTLR & 7;
  if ((REG_TSWCTLR & 1) != 1) {
    FUN_RAM_01a6c7();
    cVar1 = MainEC_GPU_Fan_TACH_LO;
    if (MainEC_GPU_Fan_TACH_LO == '\0') {
      cVar1 = MainEC_GPU_Fan_TACH_HI;
    }
    if ((cVar1 == '\0') || (func_0x01a6d3(), cVar1 == '\0')) {
      cVar1 = MainEC_GPU_Fan_TACH_LO;
      if (MainEC_GPU_Fan_TACH_LO == '\0') {
        cVar1 = MainEC_GPU_Fan_TACH_HI;
      }
      if (cVar1 == '\0') {
        DAT_RAM_00045f = DAT_RAM_00045f & 0xdf;
      }
      GPU_TACH_LO = 0;
      GPU_TACH_HI = 0;
    }
    else if ((TACH_Switch >> 1 & 1) != 0) {
      DAT_RAM_00045f = DAT_RAM_00045f | 0x20;
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


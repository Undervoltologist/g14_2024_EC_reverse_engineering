
void Fan_Update_CPU_TACH(void)

{
  undefined extraout_R6;
  undefined extraout_R7;
  char raw_ticks;
  
  FUN_RAM_015e21();
  nop();
  nop();
  nop();
  nop();
  TACH_Switch = REG_TSWCTLR & 0xd;
  if ((TACH_Switch >> 2 & 1) != 1) {
    thunk_FUN_RAM_015e21();
    raw_ticks = MainEC_CPU_Fan_TACH_LO;
    if (MainEC_CPU_Fan_TACH_LO == '\0') {
      raw_ticks = MainEC_CPU_Fan_TACH_HI;
    }
    if ((raw_ticks == '\0') || (FUN_RAM_01a6d3(), raw_ticks == '\0')) {
      raw_ticks = MainEC_CPU_Fan_TACH_LO;
      if (MainEC_CPU_Fan_TACH_LO == '\0') {
        raw_ticks = MainEC_CPU_Fan_TACH_HI;
      }
      if (raw_ticks == '\0') {
        DAT_RAM_00045f = DAT_RAM_00045f & 0xef;
      }
      CPU_TACH_LO = 0;
      CPU_TACH_HI = 0;
    }
    else if ((TACH_Switch >> 3 & 1) != 0) {
      DAT_RAM_00045f = DAT_RAM_00045f | 0x10;
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


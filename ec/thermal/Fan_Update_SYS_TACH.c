
void Fan_Update_SYS_TACH(void)

{
  undefined extraout_R6;
  undefined extraout_R7;
  char cVar1;
  
  FUN_RAM_015e21();
  nop();
  nop();
  nop();
  nop();
  TACH_Switch = DAT_RAM_00184f & 3;
  if ((DAT_RAM_00184f & 1) != 1) {
    MainEC_SYS_Fan_TACH_LO = REG_F3TLRR;
    MainEC_SYS_Fan_TACH_HI = REG_F3TMRR;
    cVar1 = REG_F3TLRR;
    if (REG_F3TLRR == '\0') {
      cVar1 = REG_F3TMRR;
    }
    if ((cVar1 == '\0') || (func_0x01a6d3(), cVar1 == '\0')) {
      cVar1 = MainEC_SYS_Fan_TACH_LO;
      if (MainEC_SYS_Fan_TACH_LO == '\0') {
        cVar1 = MainEC_SYS_Fan_TACH_HI;
      }
      if (cVar1 == '\0') {
        DAT_RAM_000485 = DAT_RAM_000485 & 0xfe;
      }
      SYS_Fan_TACH_LO = 0;
      SYS_Fan_TACH_HI = 0;
    }
    else if ((TACH_Switch >> 1 & 1) != 0) {
      DAT_RAM_000485 = DAT_RAM_000485 | 1;
      FUN_RAM_01a9a6(MainEC_SYS_Fan_TACH_LO,0);
      FUN_RAM_01a734();
      FUN_RAM_01a9a6();
      FUN_RAM_015dfd();
      SYS_Fan_TACH_LO = extraout_R6;
      SYS_Fan_TACH_HI = extraout_R7;
      DAT_RAM_00184f = TACH_Switch;
      return;
    }
  }
  return;
}


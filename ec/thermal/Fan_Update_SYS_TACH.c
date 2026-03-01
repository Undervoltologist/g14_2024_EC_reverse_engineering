
void Fan_Update_SYS_TACH(void)

{
  undefined extraout_R6;
  undefined extraout_R7;
  uint8_t in_ACC;
  char cVar1;
  
  Init_Sensors(0x68b,in_ACC);
  nop();
  nop();
  nop();
  nop();
  Calc_68a = TACH_Switch_SRAM & 3;
  if ((TACH_Switch_SRAM & 1) != 1) {
    MainEC_SYS_Fan_TACH_LO = REG_F3TLRR;
    MainEC_SYS_Fan_TACH_HI = REG_F3TMRR;
    cVar1 = REG_F3TLRR;
    if (REG_F3TLRR == '\0') {
      cVar1 = REG_F3TMRR;
    }
    if ((cVar1 == '\0') || (FUN_RAM_01a6d3(), cVar1 == '\0')) {
      cVar1 = MainEC_SYS_Fan_TACH_LO;
      if (MainEC_SYS_Fan_TACH_LO == '\0') {
        cVar1 = MainEC_SYS_Fan_TACH_HI;
      }
      if (cVar1 == '\0') {
        Fan_Enabled/Disabled = Fan_Enabled/Disabled & 0xfe;
      }
      SYS_Fan_TACH_LO = 0;
      SYS_Fan_TACH_HI = 0;
    }
    else if ((Calc_68a >> 1 & 1) != 0) {
      Fan_Enabled/Disabled = Fan_Enabled/Disabled | 1;
      FUN_RAM_01a9a6(MainEC_SYS_Fan_TACH_LO,0);
      FUN_RAM_01a734();
      FUN_RAM_01a9a6();
      FUN_RAM_015dfd();
      SYS_Fan_TACH_LO = extraout_R6;
      SYS_Fan_TACH_HI = extraout_R7;
      TACH_Switch_SRAM = Calc_68a;
      return;
    }
  }
  return;
}


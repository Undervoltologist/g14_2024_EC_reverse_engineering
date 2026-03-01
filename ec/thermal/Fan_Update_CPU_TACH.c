
void Fan_Update_CPU_TACH(void)

{
  undefined extraout_R6;
  undefined extraout_R7;
  uint8_t in_ACC;
  uint8_t ACC:1;
  
  Init_Sensors(0x68b,in_ACC);
  nop();
  nop();
  nop();
  nop();
  Calc_68a = REG_TSWCTLR & 0xd;
  if ((Calc_68a >> 2 & 1) != 1) {
    Init_Sensors(0x366,REG_F1TMRR);
    ACC:1 = MainEC_CPU_Fan_TACH.low_byte;
    if (MainEC_CPU_Fan_TACH.low_byte == '\0') {
      ACC:1 = MainEC_CPU_Fan_TACH.high_byte;
    }
    if ((ACC:1 == '\0') || (FUN_RAM_01a6d3(), ACC:1 == '\0')) {
      ACC:1 = MainEC_CPU_Fan_TACH.low_byte;
      if (MainEC_CPU_Fan_TACH.low_byte == '\0') {
        ACC:1 = MainEC_CPU_Fan_TACH.high_byte;
      }
      if (ACC:1 == '\0') {
        Fan_State = Fan_State & 0xef;
      }
      CPU_TACH_LO = 0;
      CPU_TACH_HI = 0;
    }
    else if ((Calc_68a >> 3 & 1) != 0) {
      Fan_State = Fan_State | 0x10;
      Init_Fan_Control(MainEC_CPU_Fan_TACH.low_byte);
      FUN_RAM_01a734();
      func_0x015e15();
      FUN_RAM_015dfd();
      CPU_TACH_LO = extraout_R6;
      CPU_TACH_HI = extraout_R7;
      REG_TSWCTLR = Calc_68a;
      return;
    }
  }
  return;
}


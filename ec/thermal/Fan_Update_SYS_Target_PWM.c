
undefined Fan_Update_SYS_Target_PWM(undefined param_1)

{
  byte in_R0;
  undefined extraout_R7;
  undefined extraout_R7_00;
  undefined extraout_R7_01;
  undefined extraout_R7_02;
  undefined extraout_R7_03;
  undefined extraout_R7_04;
  char cVar1;
  char in_PSW;
  ushort uVar2;
  
  Calc_68a = 0;
  Calc_68b = 0;
  uVar2 = 0x634;
  SYS_Fan_Timer = SYS_Fan_Timer + 1;
  if ((SYS_Fan_Timer & 1) == 0) {
    cVar1 = Fan_SYS_Target_RPM_LO_2;
    if (Fan_SYS_Target_RPM_LO_2 == '\0') {
      cVar1 = Fan_SYS_Target_RPM_HI_2;
    }
    if (cVar1 == '\0') {
      Fan_SYS_PWM_Target = cVar1;
      Calc_68a = 0;
      Calc_68b = 0;
      return param_1;
    }
    cVar1 = SYS_Fan_TACH_LO;
    if (SYS_Fan_TACH_LO == '\0') {
      cVar1 = SYS_Fan_TACH_HI;
    }
    if (cVar1 == '\0') {
      Fan_SYS_PWM_Target = 0x28;
      Calc_68a = 0;
      Calc_68b = 0;
      REG_DCR6 = 0x28;
      return param_1;
    }
    uVar2 = 0x3ca;
    if ((Manual_Mode_Toggle >> 2 & 1) == 1) {
      FUN_RAM_01a6b3();
      if (-1 < in_PSW) {
        func_0x01a99f();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_RAM_01ae41(*(undefined *)(uint3)uVar2);
      }
      cVar1 = '\0';
      func_0x01a7c2();
      if ((-1 < cVar1) && (cVar1 = (Fan_SYS_PWM_Target < 0xf9) << 7, cVar1 < '\0')) {
        cVar1 = (0xf8 < Fan_SYS_PWM_Target) << 7;
        Fan_SYS_PWM_Target = Fan_SYS_PWM_Target + 7;
      }
      FUN_RAM_01a7a7();
      if ((-1 < cVar1) && ((char)((Fan_SYS_PWM_Target < 0xfc) << 7) < '\0')) {
        Fan_SYS_PWM_Target = Fan_SYS_PWM_Target + 4;
      }
      cVar1 = (Calc_68b < 100) << 7;
      func_0x01a7ae();
      if ((-1 < cVar1) && ((char)((Fan_SYS_PWM_Target < 0xfe) << 7) < '\0')) {
        Fan_SYS_PWM_Target = Fan_SYS_PWM_Target + 2;
      }
      cVar1 = (Calc_68b < 0x32) << 7;
      func_0x01a7ae();
      if ((-1 < cVar1) && ((char)((Fan_SYS_PWM_Target != 0xff) << 7) < '\0')) {
        Fan_SYS_PWM_Target = Fan_SYS_PWM_Target + 1;
        return extraout_R7_01;
      }
      return extraout_R7_01;
    }
    FUN_RAM_01a6b3();
    if (in_PSW < '\0') {
      uVar2 = 0x4e1;
      if ((char)((Fan_SYS_PWM_Target < (byte)(0xfdU - (in_PSW >> 7))) << 7) < '\0') {
        Fan_SYS_PWM_Target = Fan_SYS_PWM_Target + 2;
        return extraout_R7;
      }
    }
    else {
      func_0x01a99f();
      cVar1 = -0x80;
      FUN_RAM_01a6ba();
      if ((-1 < cVar1) &&
         (uVar2 = 0x4e1, -1 < (char)((Fan_SYS_PWM_Target < (byte)(2U - (cVar1 >> 7))) << 7))) {
        Fan_SYS_PWM_Target = Fan_SYS_PWM_Target - 2;
        return extraout_R7_00;
      }
    }
  }
  cVar1 = *(char *)(uint3)uVar2;
  *(char *)(in_R0 + 0x7f0000) = *(char *)(in_R0 + 0x7f0000) + -1;
  FUN_RAM_019950();
  FUN_RAM_0192e5(0x1c);
  if (cVar1 != '\0') {
    FUN_RAM_0192b1();
    return extraout_R7_02;
  }
  if ((DAT_RAM_0094e2 >> 2 & 1) != 1) {
    FUN_RAM_0192b1();
    return extraout_R7_03;
  }
  if ((DAT_RAM_0094e2 >> 3 & 1) != 1) {
    FUN_RAM_0192b1();
    return extraout_R7_04;
  }
  if (((DAT_RAM_0094e2 >> 4 & 1) != 1) && ((Thermal_Status? & 1) != 0)) {
    cVar1 = '\0';
    func_0x015e15(DAT_RAM_000b5a,0);
    FUN_RAM_019950();
    FUN_RAM_0192e5(0x2c);
    if (cVar1 != '\0') {
      DAT_RAM_0094e2 = DAT_RAM_0094e2 | 0x10;
      return 1;
    }
  }
  if ((DAT_RAM_0094e2 >> 5 & 1) != 1) {
    DAT_RAM_0094e2 = DAT_RAM_0094e2 | 0x20;
    return 1;
  }
  if (((DAT_RAM_0094e2 >> 6 & 1) != 1) && ((DAT_RAM_00941a >> 4 & 1) != 0)) {
    FUN_RAM_019950();
                    /* WARNING: Subroutine does not return */
    FUN_RAM_018d0f(0x34);
  }
  if ((-1 < (char)DAT_RAM_0094e2) && ((DAT_RAM_00941a >> 5 & 1) != 0)) {
    FUN_RAM_019950();
                    /* WARNING: Subroutine does not return */
    FUN_RAM_018d0f(0x38);
  }
  if ((DAT_RAM_0094e1 == -1) && (DAT_RAM_0094e2 == 0xff)) {
    return 0;
  }
  return 1;
}


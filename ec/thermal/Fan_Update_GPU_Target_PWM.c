
undefined Fan_Update_GPU_Target_PWM(undefined param_1)

{
  char extraout_R6;
  undefined extraout_R7;
  undefined extraout_R7_00;
  byte extraout_R7_01;
  undefined extraout_R7_02;
  undefined extraout_R7_03;
  undefined extraout_R7_04;
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  char in_PSW;
  char cVar4;
  ushort uVar5;
  
  Calc_68a = '\0';
  Calc_68b = 0;
  uVar5 = 0x633;
  bVar2 = GPU_Fan_Timer + 1;
  GPU_Fan_Timer = bVar2;
  if ((bVar2 & 1) == 0) {
    bVar3 = Fan_GPU_Target_RPM_LO_2;
    if (Fan_GPU_Target_RPM_LO_2 == 0) {
      bVar3 = Fan_GPU_Target_RPM_HI_2;
    }
    if (bVar3 == 0) {
      Fan_GPU_PWM_Target = bVar3;
      Calc_68a = 0;
      Calc_68b = 0;
      return param_1;
    }
    bVar3 = GPU_TACH_LO;
    if (GPU_TACH_LO == 0) {
      bVar3 = GPU_TACH_HI;
    }
    if (bVar3 == 0) {
      Fan_GPU_PWM_Target = 0x28;
      Calc_68a = 0;
      Calc_68b = 0;
      REG_DCR5 = 0x28;
      return param_1;
    }
    uVar5 = 0x3ca;
    if ((Manual_Mode_Toggle >> 2 & 1) == 1) {
      FUN_RAM_01a69f();
      if (in_PSW < '\0') {
        cVar4 = (Fan_GPU_Target_RPM_HI_2 < extraout_R7_01) << 7;
        FUN_RAM_01a7b8(Fan_GPU_Target_RPM_HI_2 - extraout_R7_01);
        FUN_RAM_01a92c();
        if ((-1 < cVar4) && (cVar4 = (Fan_GPU_PWM_Target < 0xf9) << 7, cVar4 < '\0')) {
          cVar4 = (0xf8 < Fan_GPU_PWM_Target) << 7;
          Fan_GPU_PWM_Target = Fan_GPU_PWM_Target + 7;
        }
        func_0x01a799();
        if ((-1 < cVar4) && ((char)((Fan_GPU_PWM_Target < 0xfc) << 7) < '\0')) {
          Fan_GPU_PWM_Target = Fan_GPU_PWM_Target + 4;
        }
        cVar4 = (Calc_68b < 100) << 7;
        FUN_RAM_01a7a0();
        if ((-1 < cVar4) && ((char)((Fan_GPU_PWM_Target < 0xfe) << 7) < '\0')) {
          Fan_GPU_PWM_Target = Fan_GPU_PWM_Target + 2;
        }
        uVar5 = 0x68b;
        cVar4 = (Calc_68b < 0x32) << 7;
        bVar2 = Calc_68b - 0x32;
        FUN_RAM_01a7a0();
        if (cVar4 < '\0') goto LAB_RAM_019083;
        uVar1 = extraout_R7_02;
        if ((char)((Fan_GPU_PWM_Target != 0xff) << 7) < '\0') {
          Fan_GPU_PWM_Target = Fan_GPU_PWM_Target + 1;
          return extraout_R7_02;
        }
      }
      else {
        FUN_RAM_01a998();
        cVar4 = -0x80;
        FUN_RAM_01a6a8(*(undefined *)(uint3)uVar5);
        uVar1 = extraout_R7_03;
        if (-1 < cVar4) {
          FUN_RAM_01a998();
          bVar2 = *(char *)(uint3)uVar5 - (cVar4 >> 7);
          Calc_68b = GPU_TACH_HI - bVar2;
          Calc_68a = GPU_TACH_LO - (extraout_R6 - ((char)((GPU_TACH_HI < bVar2) << 7) >> 7));
          cVar4 = '\0';
          FUN_RAM_01a92c();
          if ((-1 < cVar4) &&
             (cVar4 = (Fan_GPU_PWM_Target < (byte)(7U - (cVar4 >> 7))) << 7, -1 < cVar4)) {
            cVar4 = (6 < Fan_GPU_PWM_Target) << 7;
            Fan_GPU_PWM_Target = Fan_GPU_PWM_Target - 7;
          }
          func_0x01a799();
          if ((-1 < cVar4) && (-1 < (char)((Fan_GPU_PWM_Target < (byte)(4U - (cVar4 >> 7))) << 7 )))
          {
            Fan_GPU_PWM_Target = Fan_GPU_PWM_Target - 4;
          }
          cVar4 = (Calc_68b < 100) << 7;
          FUN_RAM_01a7a0();
          if ((-1 < cVar4) && (-1 < (char)((Fan_GPU_PWM_Target < (byte)(2U - (cVar4 >> 7))) << 7 )))
          {
            Fan_GPU_PWM_Target = Fan_GPU_PWM_Target - 2;
          }
          cVar4 = (Calc_68b < 0x32) << 7;
          FUN_RAM_01a7a0();
          uVar1 = extraout_R7_04;
          if ((-1 < cVar4) && (-1 < (char)((Fan_GPU_PWM_Target < (byte)(1U - (cVar4 >> 7))) << 7 )))
          {
            Fan_GPU_PWM_Target = Fan_GPU_PWM_Target - 1;
          }
        }
      }
      return uVar1;
    }
    bVar2 = Manual_Mode_Toggle;
    FUN_RAM_01a69f();
    if (in_PSW < '\0') {
      uVar5 = 0x44d;
      bVar3 = 0xfd - (in_PSW >> 7);
      bVar2 = Fan_GPU_PWM_Target - bVar3;
      if ((char)((Fan_GPU_PWM_Target < bVar3) << 7) < '\0') {
        Fan_GPU_PWM_Target = Fan_GPU_PWM_Target + 2;
        return extraout_R7;
      }
    }
    else {
      FUN_RAM_01a998();
      cVar4 = -0x80;
      FUN_RAM_01a6a6();
      if (-1 < cVar4) {
        uVar5 = 0x44d;
        bVar3 = 2 - (cVar4 >> 7);
        bVar2 = Fan_GPU_PWM_Target - bVar3;
        if (-1 < (char)((Fan_GPU_PWM_Target < bVar3) << 7)) {
          Fan_GPU_PWM_Target = Fan_GPU_PWM_Target - 2;
          return extraout_R7_00;
        }
      }
    }
  }
LAB_RAM_019083:
  *(byte *)(uint3)uVar5 = bVar2;
  *(byte *)(uint3)uVar5 = *(byte *)(uint3)uVar5 | 8;
  DAT_RAM_0094e0 = DAT_RAM_0094e0 | 8;
  return 1;
}


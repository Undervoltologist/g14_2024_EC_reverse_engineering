
/* WARNING: Inlined function: thunk_FUN_RAM_01ade4 */

void Fan_CPU_PWM_Target_Increment(ushort param_1)

{
  bool bVar1;
  byte in_R0;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  
  TACH_Switch = 0;
  DAT_RAM_00068b = 0;
  LAB_RAM_000632 = LAB_RAM_000632 + 1;
  if ((LAB_RAM_000632 & 1) != 0) {
    while( true ) {
      bVar2 = (byte)(param_1 >> 8);
      in_R0 = in_R0 - 1;
      if (in_R0 == 0) break;
      param_1 = (ushort)(byte)(bVar2 << 1) << 8;
    }
    FUN_RAM_0199b7();
    do {
      bVar2 = bVar2 << 1;
      in_R0 = in_R0 - 1;
    } while (in_R0 != 0);
    FUN_RAM_0199e0();
    uVar4 = 0x9468;
    FUN_RAM_019980();
    *(byte *)(uint3)uVar4 = bVar2 | 0x20;
    LAB_RAM_0094ec = LAB_RAM_0094ec + '\x01';
    return;
  }
  bVar2 = Fan_CPU_Target_RPM_LO_2;
  if (Fan_CPU_Target_RPM_LO_2 == 0) {
    bVar2 = Fan_CPU_Target_RPM_HI_2;
  }
  if (bVar2 == 0) {
    Fan_CPU_PWM_Target = bVar2;
    TACH_Switch = 0;
    DAT_RAM_00068b = 0;
    return;
  }
  cVar3 = CPU_TACH_LO;
  if (CPU_TACH_LO == '\0') {
    cVar3 = CPU_TACH_HI;
  }
  if (cVar3 == '\0') {
    Fan_CPU_PWM_Target = 0x28;
    TACH_Switch = 0;
    DAT_RAM_00068b = 0;
    REG_DCR4 = 0x28;
    return;
  }
  if ((Manual_Mode_Toggle >> 2 & 1) == 1) {
    TACH_Switch = 0;
    DAT_RAM_00068b = 0;
  }
  cVar3 = '\0';
  func_0x01a65f(param_1 & 0xff | (ushort)Fan_CPU_Target_RPM_LO_2 << 8);
  if (cVar3 < '\0') {
    if ((char)((Fan_CPU_PWM_Target < (byte)(0xfdU - (cVar3 >> 7))) << 7) < '\0') {
      Fan_CPU_PWM_Target = Fan_CPU_PWM_Target + 2;
    }
  }
  else {
    func_0x01a658();
    if ((-1 < cVar3) && (-1 < (char)((Fan_CPU_PWM_Target < (byte)(2U - (cVar3 >> 7))) << 7))) {
      Fan_CPU_PWM_Target = Fan_CPU_PWM_Target - 2;
    }
  }
  uVar4 = 1;
  if (*(char *)(in_R0 + 0x7f0000) == -0x20) {
    bVar1 = ((byte)FUN_RAM_0003b4 >> 1 & 1) != 0;
    if (!bVar1) {
      FUN_RAM_01a3fd(CONCAT11(bVar1,DAT_RAM_00068c),0x50);
    }
    if (((byte)FUN_RAM_0003b4 >> 2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  if (((byte)FUN_RAM_0003b4 & 1) != 0) {
    uVar4 = CONCAT11(1,(char)uVar4);
  }
  if ((char)(uVar4 >> 8) != (char)uVar4) {
    uVar4 = FUN_RAM_01a3fd(uVar4 & 0xff00 | (ushort)DAT_RAM_00068c,0x51);
  }
  if ((DAT_RAM_00068c == 0) || (DAT_RAM_00068c == 1)) {
    FUN_RAM_01b75e(uVar4 & 0xff00 | (ushort)DAT_RAM_00068c);
  }
  return;
}


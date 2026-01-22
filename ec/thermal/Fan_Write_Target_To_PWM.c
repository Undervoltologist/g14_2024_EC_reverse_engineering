
void Fan_Write_TARGET_TO_PWM(void)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  
  if (DAT_RAM_7f0062 != '\0') {
    return;
  }
  if (DAT_RAM_009223 == 0) {
    sVar2 = 0x457;
    Fan_CPU_PWM_Target = REG_DCR4;
    func_0x02ba72(REG_DCR4);
    FUN_RAM_02ba9b();
    FUN_RAM_02ba6f();
    uVar3 = sVar2 + 1;
  }
  else {
    bVar1 = DAT_RAM_009223 ^ 1;
    if (bVar1 == 0) {
      sVar2 = 0x44d;
      Fan_GPU_PWM_Target = REG_DCR5;
      func_0x02ba72(REG_DCR5);
      FUN_RAM_02ba9b();
      FUN_RAM_02ba6f();
      uVar3 = sVar2 + 1;
    }
    else {
      FUN_RAM_02bade();
      if (bVar1 != 0) {
        return;
      }
      sVar2 = 0x4e1;
      Fan_SYS_Target_PWM = REG_DCR6;
      func_0x02ba72(REG_DCR6);
      FUN_RAM_02ba9b();
      FUN_RAM_02ba6f();
      uVar3 = sVar2 + 1;
    }
  }
  REG_PM4STS._1_1_ = *(undefined *)(uint3)uVar3;
  return;
}


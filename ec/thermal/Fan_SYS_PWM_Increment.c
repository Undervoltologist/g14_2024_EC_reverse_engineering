
void Fan_SYS_PWM_Increment(void)

{
  char cVar1;
  byte in_ACC;
  char cVar2;
  ushort uVar3;
  
  cVar1 = FUN_RAM_01a8de();
  cVar2 = in_ACC - (cVar1 + 1U);
  if (-1 < (char)((in_ACC < (byte)(cVar1 + 1U)) << 7)) {
    Fan_SYS_Target_PWM = REG_CTR0;
    cVar2 = REG_CTR0;
  }
  uVar3 = 0x1808;
  cVar1 = FUN_RAM_01a8e1();
  if (cVar2 != cVar1) {
    if (-1 < (char)((REG_DCR6 < (byte)(*(char *)(uint3)uVar3 + 1U)) << 7)) {
      REG_DCR6 = REG_DCR6 - 1;
      return;
    }
    REG_DCR6 = REG_DCR6 + 1;
  }
  return;
}


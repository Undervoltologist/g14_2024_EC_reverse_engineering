
void Fan_CPU_PWM_Increment(void)

{
  char cVar1;
  byte in_ACC;
  char cVar2;
  ushort uVar3;
  
  cVar1 = FUN_RAM_01a8ca();
  cVar2 = in_ACC - (cVar1 + 1U);
  if (-1 < (char)((in_ACC < (byte)(cVar1 + 1U)) << 7)) {
    Fan_CPU_PWM_Target = REG_CTR0;
    cVar2 = REG_CTR0;
  }
  uVar3 = 0x1806;
  cVar1 = FUN_RAM_01a8cd();
  if (cVar2 != cVar1) {
    if (-1 < (char)((REG_DCR4 < (byte)(*(char *)(uint3)uVar3 + 1U)) << 7)) {
      REG_DCR4 = REG_DCR4 - 1;
      return;
    }
    REG_DCR4 = REG_DCR4 + 1;
  }
  return;
}


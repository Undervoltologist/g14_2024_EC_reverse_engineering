
void Fan_GPU_PWM_Increment(void)

{
  char cVar1;
  byte in_ACC;
  char cVar2;
  ushort uVar3;
  
  cVar1 = FUN_RAM_01a8d4();
  cVar2 = in_ACC - (cVar1 + 1U);
  if (-1 < (char)((in_ACC < (byte)(cVar1 + 1U)) << 7)) {
    Fan_GPU_PWM_Target = REG_CTR0;
    cVar2 = REG_CTR0;
  }
  uVar3 = 0x1807;
  cVar1 = FUN_RAM_01a8d7();
  if (cVar2 != cVar1) {
    if (-1 < (char)((REG_DCR5 < (byte)(*(char *)(uint3)uVar3 + 1U)) << 7)) {
      REG_DCR5 = REG_DCR5 - 1;
      return;
    }
    REG_DCR5 = REG_DCR5 + 1;
  }
  return;
}


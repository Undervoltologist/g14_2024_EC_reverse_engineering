
void Check_if_GPU_Overheat_Decide_Fan_PWM(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort in_DPTR;
  
  SUB_RAM_000695 = *(undefined *)(uint3)in_DPTR;
  FUN_RAM_01958f(GPU_Temp_44F);
  if ((DAT_RAM_000484 >> 2 & 1) != 1) {
    bVar3 = DAT_RAM_000461;
    if (((DAT_RAM_000461 >> 2 & 1) == 1) || (bVar3 = DAT_RAM_000484, (DAT_RAM_000484 >> 3 & 1) ! = 0)
       ) {
      cVar1 = FUN_RAM_01a8ca();
      bVar2 = Fan_CPU_PWM_Target;
      if (-1 < (char)((bVar3 < (byte)(cVar1 + 1U)) << 7)) {
        bVar2 = REG_CTR0;
      }
      REG_DCR4 = bVar2;
      cVar1 = FUN_RAM_01a8d4();
      bVar3 = Fan_GPU_PWM_Target;
      if (-1 < (char)((bVar2 < (byte)(cVar1 + 1U)) << 7)) {
        bVar3 = REG_CTR0;
      }
      REG_DCR5 = bVar3;
      cVar1 = FUN_RAM_01a8de();
      REG_DCR6 = Fan_SYS_Target_PWM;
      if (-1 < (char)((bVar3 < (byte)(cVar1 + 1U)) << 7)) {
        REG_DCR6 = REG_CTR0;
      }
      return;
    }
    FUN_RAM_018d3d();
    FUN_RAM_018d69();
  }
  return;
}


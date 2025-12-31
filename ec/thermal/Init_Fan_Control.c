void Init_Fan_Control(void)

{
  byte in_ACC;
  undefined uVar1;
  ushort in_DPTR;
  
  *(byte *)(uint3)in_DPTR = in_ACC | 4;
  *(byte *)(uint3)in_DPTR = *(byte *)(uint3)in_DPTR | 8;
  uVar1 = 0;
  Current_CPU_Fan_Lvl = 0;
  Current_GPU_Fan_Lvl = 0;
  Fan_Step_CPU = 0;
  Fan_Step_GPU = 0;
  DAT_RAM_0092e7 = 0;
  PTR_DAT_RAM_03e054_RAM_0092e8._0_1_ = 0;
  FUN_RAM_01a894();
  func_0x01a8a8();
  FUN_RAM_01a89e();
  FUN_RAM_01a8b2();
  DAT_RAM_0007e2 = uVar1;
  DAT_RAM_0007e3 = uVar1;
  DAT_RAM_0091f4 = uVar1;
  Temp_CPU_Current = uVar1;
  Temp_GPU_Current = uVar1;
  DAT_RAM_0091f7 = uVar1;
  DAT_RAM_0091f8 = uVar1;
  DAT_RAM_0091f9 = uVar1;
  DAT_RAM_0091fa = uVar1;
  DAT_RAM_0091fb = uVar1;
  DAT_RAM_0091fc = uVar1;
  DAT_RAM_0091fd = uVar1;
  DAT_RAM_0091fe = uVar1;
  DAT_RAM_0091ff = uVar1;
  return;
}

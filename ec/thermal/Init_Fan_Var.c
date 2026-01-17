
void Init_Fan_Var(void)

{
  undefined uVar1;
  
  LAB_RAM_0007ca = 0;
  LAB_RAM_0007cb = 0;
  LAB_RAM_0007cb+1 = 0;
  LAB_RAM_0007cb+2 = 0;
  MainEC_CPU_Temp = 0;
  CPU_Temp_44E = 0;
  Sensor_301 = 0;
  GPU_Temp_44F = 0;
  GPU_Temp_3C5 = 0;
  PCH_Temp_450 = 0;
  SUB_RAM_000451 = 0x37;
  DAT_RAM_000452 = 0x37;
  DAT_RAM_000453 = 0x37;
  DAT_RAM_000454 = 0x37;
  CPU_Temp_4A8 = 0;
  GPU_Temp_4AA = 0;
  CPU_Temp_4A9 = 0;
  PCH_Temp_4AB = 0;
  Fan_CPU_Target_RPM_LO = 0;
  Fan_CPU_Target_RPM_HI = 0;
  Fan_GPU_Target_RPM_LO = 0;
  Fan_GPU_Target_RPM_HI = 0;
  Fan_SYS_Target_RPM_LO = 0;
  Fan_SYS_Target_RPM_HI = 0;
  LAB_RAM_0004b2 = 0;
  LAB_RAM_0004b3 = 0;
  LAB_RAM_0004b4 = 0;
  LAB_RAM_0004b5 = 0;
  Fan_CPU_Target_RPM_LO_2 = 0;
  Fan_CPU_Target_RPM_HI_2 = 0;
  Fan_GPU_Target_RPM_LO_2 = 0;
  Fan_GPU_Target_RPM_HI_2 = 0;
  Fan_SYS_Target_RPM_LO_2 = 0;
  Fan_SYS_Target_RPM_HI_2 = 0;
  LAB_RAM_0004bf = LAB_RAM_0004bf & 0xbf;
  System_STA_Flags = System_STA_Flags | 0xf;
  uVar1 = 0;
  Current_CPU_Fan_Lvl = 0;
  Current_GPU_Fan_Lvl = 0;
  Fan_Step_CPU = 0;
  Fan_Step_GPU = 0;
  DAT_RAM_0092e7 = 0;
  PTR_LAB_RAM_03e054_RAM_0092e8._0_1_ = 0;
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


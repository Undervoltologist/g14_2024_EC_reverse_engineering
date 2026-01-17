void Set_Temp_To_EachOther(void)

{
  CPU_Temp_4A8 = MainEC_CPU_Temp;
  CPU_Temp_4A9 = CPU_Temp_44E;
  GPU_Temp_4AA = GPU_Temp_44F;
  PCH_Temp_4AB = PCH_Temp_450;
  return;
}

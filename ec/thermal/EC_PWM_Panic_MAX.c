
void Fan_PWM_Panic_MAX(void)

{
  if (((Thermal_Status >> 5 & 1) != 0) && ((Fan_Control_Toggle >> 2 & 1) != 0)) {
    Fan_CPU_PWM_Target = REG_CTR0;
    REG_DCR4 = REG_CTR0;
    Fan_GPU_PWM_Target = REG_CTR0;
    REG_DCR5 = REG_CTR0;
    Fan_SYS_Target_PWM = REG_CTR0;
    REG_DCR6 = REG_CTR0;
  }
  return;
}


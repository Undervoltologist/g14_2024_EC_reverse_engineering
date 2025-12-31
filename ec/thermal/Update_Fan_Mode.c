
/* WARNING: Instruction at (RAM,0x01b92a) overlaps instruction at (RAM,0x01b929)
    */
/* WARNING: Possible PIC construction at 0x0138f8: Changing call to branch */
/* WARNING: Removing unreachable block (RAM,0x0138fb) */
/* WARNING: Removing unreachable block (RAM,0x015e9a) */
/* WARNING: Removing unreachable block (RAM,0x015e9e) */
/* WARNING: Removing unreachable block (RAM,0x015ea2) */
/* WARNING: Removing unreachable block (RAM,0x015ea6) */
/* WARNING: Removing unreachable block (RAM,0x015eaa) */

undefined Update_Fan_Mode(undefined param_1,undefined2 param_2)

{
  byte bVar1;
  byte in_R0;
  char cVar2;
  char extraout_R7;
  byte bVar3;
  char in_PSW;
  ushort uVar4;
  
  uVar4 = 0x45e;
  bVar3 = DAT_RAM_00045e;
  if (((DAT_RAM_00045e & 1) == 1) &&
     (uVar4 = 0x484, bVar3 = DAT_RAM_000484, (DAT_RAM_000484 >> 4 & 1) == 0)) {
    if (Last_Fan_Mode != Fan_Mode_(Table)) {
      DAT_RAM_0092e5 = 0;
      DAT_RAM_0092e6 = 0;
      func_0x01bbd2();
      Last_Fan_Mode = Fan_Mode_(Table);
      Timer_When_Fans_Require_to_Ramp_Up = 0;
      DAT_RAM_0009f5 = DAT_RAM_0009f5 | 0x10;
    }
    if ((Manual_Mode_Toggle >> 2 & 1) == 0) {
      if (((GPU_Related_Flag_30e >> 6 & 1) == 0) || (Fan_Mode_(Table) != 2)) {
        bVar3 = Fan_Mode_(Table) - 1;
        if (bVar3 == 0) {
          FUN_RAM_01b7cc();
          cVar2 = -0x6e;
        }
        else {
          bVar3 = Fan_Mode_(Table) - 2;
          if (bVar3 == 0) {
            FUN_RAM_01b6a6();
            cVar2 = -0x5e;
          }
          else {
            bVar3 = Fan_Mode_(Table);
            FUN_RAM_01b73f();
            cVar2 = -0x7e;
          }
        }
      }
      else {
        bVar3 = Fan_Mode_(Table);
        FUN_RAM_01b673();
        cVar2 = 'v';
      }
    }
    else {
      bVar3 = Manual_Mode_Toggle;
      FUN_RAM_01b5e8();
      cVar2 = 'f';
    }
    bVar1 = bVar3;
    if ((in_R0 != 0xf0) || (bVar1 = TEMP_B63, cVar2 != -0x10)) {
      TEMP_B63 = bVar1;
      TEMP_B64 = bVar3;
    }
    Related_to_Sensors = 0x7c;
    PTR_DAT_RAM_031293_RAM_009238._0_1_ = 0;
    DAT_RAM_009236 = 0;
    DAT_RAM_009237 = 0;
    DAT_RAM_000eae = 0;
    DAT_RAM_000eaf = 0;
    DAT_RAM_000eb0 = 0xff;
    DAT_RAM_000eb1 = 0xff;
    DAT_RAM_000eb2 = 0xff;
    DAT_RAM_000eb3 = 0xff;
    DAT_RAM_000eb4 = 0xff;
    DAT_RAM_000eb5 = 0xff;
    DAT_RAM_000eb6 = 0xff;
    DAT_RAM_000eb7 = 0xff;
    DAT_RAM_000eb8 = 0xff;
    DAT_RAM_000eb9 = 0xff;
    DAT_RAM_000eba = 0xff;
    DAT_RAM_000ebb = 0xff;
    DAT_RAM_000ebc = 0xff;
    DAT_RAM_000ebd = 0xff;
    DAT_RAM_000ebe = 0xff;
    TEMP_B65 = bVar3;
    TEMP_B66 = bVar3;
    TEMP_B67 = bVar3;
    TEMP_B68 = bVar3;
    TEMP_B69 = bVar3;
    TEMP_B6A = bVar3;
    TEMP_B6B = bVar3;
    TEMP_B6C = bVar3;
    TEMP_B6D = bVar3;
    TEMP_B6E = bVar3;
    func_0x01a070();
    thunk_FUN_RAM_0192b1();
    FUN_RAM_013429();
    DAT_RAM_0004c1 = DAT_RAM_0004c1 & 0x7f;
    weird_batt_reg_that_sets_b48 = 0x46;
    FUN_RAM_01b34c(0x37,1);
    return SUB_RAM_0006a4;
  }
  *(char *)(in_R0 + 0x7f0000) = *(char *)(in_R0 + 0x7f0000) + '\x01';
  *(undefined *)(uint3)uVar4 = param_1;
  FUN_RAM_01bdec(bVar3 - ((char)((ushort)param_2 >> 8) - (in_PSW >> 7)));
  Load_Thermal_Table_Offset();
  if (extraout_R7 != '\0') {
    return 1;
  }
  return 0;
}

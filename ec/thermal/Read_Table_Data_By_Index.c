
/* WARNING: Instruction at (RAM,0x01a00c) overlaps instruction at (RAM,0x01a00a)
    */
/* WARNING: Removing unreachable block (RAM,0x01a0d7) */

byte Read_Table_Data_By_Index(byte param_1)

{
  bool bVar1;
  byte extraout_R7;
  byte extraout_R7_00;
  byte extraout_R7_01;
  byte extraout_R7_02;
  byte extraout_R7_03;
  byte extraout_R7_04;
  byte extraout_R7_05;
  byte extraout_R7_06;
  byte extraout_R7_07;
  byte extraout_R7_08;
  byte extraout_R7_09;
  byte extraout_R7_10;
  byte extraout_R7_11;
  byte extraout_R7_12;
  byte extraout_R7_13;
  byte bVar2;
  byte extraout_R7_14;
  byte extraout_R7_15;
  byte extraout_R7_16;
  byte in_B;
  char in_ACC;
  char cVar3;
  char cVar4;
  ushort uVar5;
  
  if (((char)((in_ACC == '\0') << 7) < '\0') && ((DAT_RAM_009596 != 0 || (DAT_RAM_009597 != 0))) ) {
    if ((DAT_RAM_009596 & 1) == 0) {
      if ((DAT_RAM_009597 & 1) == 0) {
        if ((DAT_RAM_009596 >> 1 & 1) == 0) {
          if ((DAT_RAM_009597 >> 1 & 1) == 0) {
            if ((DAT_RAM_009596 >> 2 & 1) == 0) {
              if ((DAT_RAM_009597 >> 2 & 1) == 0) {
                if ((DAT_RAM_009596 >> 3 & 1) == 0) {
                  if ((DAT_RAM_009597 >> 3 & 1) == 0) {
                    uVar5 = 0x9596;
                    if ((DAT_RAM_009596 >> 4 & 1) == 0) {
                      if ((DAT_RAM_009597 >> 4 & 1) != 0) {
                        DAT_RAM_009501 = DAT_RAM_009501 | 0x10;
                        DAT_RAM_009597 = DAT_RAM_009597 & 0xef;
                        return param_1;
                      }
                      if ((DAT_RAM_009596 >> 5 & 1) == 0) {
                        uVar5 = 0x9597;
                        if ((DAT_RAM_009597 >> 5 & 1) != 0) {
                          FUN_RAM_01a2db();
                          *(undefined *)(uint3)uVar5 = 0x23;
                          FUN_RAM_019d54();
                          param_1 = extraout_R7_14;
                          if (extraout_R7_14 != 0) {
                            FUN_RAM_01a2b7();
                            thunk_FUN_RAM_015f03();
                            func_0x015e15(DAT_RAM_0092af,0);
                            return extraout_R7_15;
                          }
                        }
                      }
                      else {
                        FUN_RAM_01a283();
                        FUN_RAM_01a1ef();
                        Thermal_Decision_Main();
                        param_1 = extraout_R7_13;
                        if (extraout_R7_13 != 0) {
                          DAT_RAM_009500 = DAT_RAM_009500 & 0xdf;
                          DAT_RAM_009596 = DAT_RAM_009596 & 0xdf;
                          bVar2 = extraout_R7_13;
                          goto LAB_RAM_019fb2;
                        }
                      }
                      return param_1;
                    }
                    FUN_RAM_01a2db();
                    *(undefined *)(uint3)uVar5 = 0x70;
                    FUN_RAM_019d54();
                    param_1 = extraout_R7_11;
                    if (extraout_R7_11 != 0) {
                      FUN_RAM_01a2b7();
                      thunk_FUN_RAM_015f03();
                      DAT_RAM_009500 = DAT_RAM_009500 & 0xef;
                      DAT_RAM_009596 = DAT_RAM_009596 & 0xef;
                      DAT_RAM_009597 = DAT_RAM_009597 | 0x10;
                      DAT_RAM_009598 = 0;
                      return extraout_R7_12;
                    }
                  }
                  else {
                    bVar2 = DAT_RAM_009597;
                    FUN_RAM_01a01c();
                    param_1 = extraout_R7_09;
                    if (bVar2 != 0) {
                      FUN_RAM_01a2b7();
                      thunk_FUN_RAM_015f03();
                      DAT_RAM_009501 = DAT_RAM_009501 | 8;
                      DAT_RAM_009597 = DAT_RAM_009597 & 0xf7;
                      return extraout_R7_10;
                    }
                  }
                }
                else {
                  FUN_RAM_01a283();
                  FUN_RAM_01a1ef();
                  Thermal_Decision_Main();
                  param_1 = extraout_R7_08;
                  if (extraout_R7_08 != 0) {
                    DAT_RAM_009500 = DAT_RAM_009500 & 0xf7;
                    DAT_RAM_009596 = DAT_RAM_009596 & 0xf7;
                    DAT_RAM_009597 = DAT_RAM_009597 | 8;
                    bVar2 = extraout_R7_08;
                    goto LAB_RAM_019fb2;
                  }
                }
              }
              else {
                bVar2 = DAT_RAM_009597;
                FUN_RAM_01a01c();
                param_1 = extraout_R7_06;
                if (bVar2 != 0) {
                  FUN_RAM_01a2b7();
                  thunk_FUN_RAM_015f03();
                  DAT_RAM_009501 = DAT_RAM_009501 | 4;
                  DAT_RAM_009597 = DAT_RAM_009597 & 0xfb;
                  return extraout_R7_07;
                }
              }
            }
            else {
              FUN_RAM_01a283();
              FUN_RAM_01a1ef();
              Thermal_Decision_Main();
              param_1 = extraout_R7_05;
              if (extraout_R7_05 != 0) {
                DAT_RAM_009500 = DAT_RAM_009500 & 0xfb;
                DAT_RAM_009596 = DAT_RAM_009596 & 0xfb;
                DAT_RAM_009597 = DAT_RAM_009597 | 4;
                bVar2 = extraout_R7_05;
                goto LAB_RAM_019fb2;
              }
            }
          }
          else {
            bVar2 = DAT_RAM_009597;
                    /* WARNING: Call to offcut address within same function */
            func_0x01a00b();
            param_1 = extraout_R7_03;
            if (bVar2 != 0) {
              DAT_RAM_009594 = DAT_RAM_00959d;
              FUN_RAM_01a237();
              DAT_RAM_009501 = DAT_RAM_009501 | 2;
              DAT_RAM_009597 = DAT_RAM_009597 & 0xfd;
              return extraout_R7_04;
            }
          }
        }
        else {
          FUN_RAM_01a283();
          FUN_RAM_01a1ec();
          Thermal_Decision_Main();
          param_1 = extraout_R7_02;
          if (extraout_R7_02 != 0) {
            DAT_RAM_009500 = DAT_RAM_009500 & 0xfd;
            DAT_RAM_009596 = DAT_RAM_009596 & 0xfd;
            DAT_RAM_009597 = DAT_RAM_009597 | 2;
            bVar2 = extraout_R7_02;
            goto LAB_RAM_019fb2;
          }
        }
      }
      else {
        bVar2 = DAT_RAM_009597;
                    /* WARNING: Call to offcut address within same function */
        func_0x01a00b();
        param_1 = extraout_R7_00;
        if (bVar2 != 0) {
          DAT_RAM_009595 = DAT_RAM_00959d;
          FUN_RAM_01a237();
          DAT_RAM_009501 = DAT_RAM_009501 | 1;
          DAT_RAM_009597 = DAT_RAM_009597 & 0xfe;
          return extraout_R7_01;
        }
      }
    }
    else {
      FUN_RAM_01a283();
      FUN_RAM_01a1ec();
      Thermal_Decision_Main();
      param_1 = extraout_R7;
      if (extraout_R7 != 0) {
        DAT_RAM_009500 = DAT_RAM_009500 & 0xfe;
        DAT_RAM_009596 = DAT_RAM_009596 & 0xfe;
        DAT_RAM_009597 = DAT_RAM_009597 | 1;
        bVar2 = extraout_R7;
LAB_RAM_019fb2:
        DAT_RAM_009597 = DAT_RAM_009597 | 0x20;
        DAT_RAM_009598 = 0x19;
        return bVar2;
      }
    }
  }
  if ((in_B & 1) != 1) {
    DAT_RAM_00959e = 0x16;
    DAT_RAM_00959f = 0x23;
    FUN_RAM_019d54();
    return extraout_R7_16;
  }
  if (((char)((param_1 < 0x10) << 7) < '\0') || (-1 < (char)((param_1 < 0x1b) << 7))) {
    if (((char)((param_1 < 0x20) << 7) < '\0') || (-1 < (char)((param_1 < 0x28) << 7))) {
      if (((char)((param_1 < 0x5c) << 7) < '\0') || (-1 < (char)((param_1 < 0x60) << 7))) {
        if (((char)((param_1 < 0x60) << 7) < '\0') || (-1 < (char)((param_1 < 0x80) << 7))) {
          if (((char)((param_1 < 0x80) << 7) < '\0') || (-1 < (char)((param_1 < 0xa0) << 7))) {
            if (((char)((param_1 < 0xa0) << 7) < '\0') || (-1 < (char)((param_1 < 0xc0) << 7))) {
              if (((char)((param_1 < 0xc0) << 7) < '\0') || (-1 < (char)((param_1 < 0xe0) << 7)))  {
                return 0;
              }
              cVar3 = param_1 + 0x90;
              cVar4 = -0x6c - ((char)((0x6f < param_1) << 7) >> 7);
            }
            else {
              cVar3 = param_1 + 0x90;
              cVar4 = -0x6c - ((char)((0x6f < param_1) << 7) >> 7);
            }
          }
          else {
            cVar3 = param_1 + 0x90;
            cVar4 = -0x6c - ((char)((0x6f < param_1) << 7) >> 7);
          }
        }
        else {
          cVar3 = param_1 + 0x50;
          cVar4 = -0x6e - ((char)((0xaf < param_1) << 7) >> 7);
        }
      }
      else {
        cVar3 = param_1 + 0x50;
        cVar4 = -0x6e - ((char)((0xaf < param_1) << 7) >> 7);
      }
      goto LAB_RAM_01a0df;
    }
    bVar1 = 0x4f < param_1;
    cVar3 = param_1 + 0xb0;
  }
  else {
    bVar1 = 0x1e < param_1;
    cVar3 = param_1 - 0x1f;
  }
  cVar4 = -0x69 - ((char)(bVar1 << 7) >> 7);
LAB_RAM_01a0df:
  return *(byte *)(uint3)CONCAT11(cVar4,cVar3);
}


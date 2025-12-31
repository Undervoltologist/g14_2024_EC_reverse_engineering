
short Thermal_Decision_Main(byte param_1,char param_2)

{
  bool bVar1;
  byte in_R0;
  byte in_R1;
  undefined extraout_R6;
  undefined extraout_R6_00;
  undefined extraout_R6_01;
  undefined extraout_R6_02;
  undefined extraout_R6_03;
  undefined extraout_R6_04;
  undefined extraout_R6_05;
  undefined extraout_R6_06;
  char extraout_R6_07;
  undefined extraout_R6_08;
  undefined extraout_R6_09;
  undefined extraout_R6_10;
  byte extraout_R6_11;
  undefined extraout_R6_12;
  undefined extraout_R6_13;
  undefined extraout_R6_14;
  undefined extraout_R6_15;
  undefined extraout_R6_16;
  undefined extraout_R6_17;
  undefined extraout_R6_18;
  undefined extraout_R6_19;
  byte extraout_R6_20;
  byte extraout_R6_21;
  byte bVar2;
  byte extraout_R6_22;
  byte extraout_R6_23;
  undefined extraout_R6_24;
  byte extraout_R6_25;
  byte extraout_R6_26;
  undefined extraout_R6_27;
  byte extraout_R6_28;
  byte extraout_R6_29;
  undefined extraout_R6_30;
  byte extraout_R6_31;
  byte extraout_R6_32;
  undefined extraout_R6_33;
  byte extraout_R6_34;
  undefined extraout_R6_35;
  byte extraout_R6_36;
  byte extraout_R6_37;
  undefined extraout_R6_38;
  undefined extraout_R6_39;
  undefined extraout_R7;
  undefined extraout_R7_00;
  byte extraout_R7_01;
  byte extraout_R7_02;
  undefined extraout_R7_03;
  undefined extraout_R7_04;
  char extraout_R7_05;
  char extraout_R7_06;
  byte extraout_R7_07;
  byte extraout_R7_08;
  byte extraout_R7_09;
  byte extraout_R7_10;
  byte extraout_R7_11;
  byte extraout_R7_12;
  char extraout_R7_13;
  byte extraout_R7_14;
  byte extraout_R7_15;
  byte extraout_R7_16;
  byte extraout_R7_17;
  byte extraout_R7_18;
  undefined extraout_R7_19;
  char extraout_R7_20;
  undefined extraout_R7_21;
  byte extraout_R7_22;
  undefined extraout_R7_23;
  undefined uVar3;
  undefined extraout_R7_24;
  undefined extraout_R7_25;
  undefined extraout_R7_26;
  char extraout_R7_27;
  byte extraout_R7_28;
  char extraout_R7_29;
  byte extraout_R7_30;
  char extraout_R7_31;
  byte extraout_R7_32;
  char extraout_R7_33;
  char extraout_R7_34;
  byte extraout_R7_35;
  byte extraout_R7_36;
  char extraout_R7_37;
  byte extraout_R7_38;
  byte extraout_R7_39;
  byte extraout_R7_40;
  undefined extraout_R7_41;
  byte extraout_R7_42;
  byte extraout_R7_43;
  undefined extraout_R7_44;
  byte extraout_R7_45;
  byte extraout_R7_46;
  undefined extraout_R7_47;
  byte extraout_R7_48;
  byte extraout_R7_49;
  undefined extraout_R7_50;
  byte extraout_R7_51;
  undefined extraout_R7_52;
  byte extraout_R7_53;
  byte extraout_R7_54;
  undefined extraout_R7_55;
  undefined extraout_R7_56;
  byte in_B;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char in_PSW;
  ushort in_DPTR;
  ushort uVar9;
  short sVar10;
  
  FUN_RAM_01a64d();
  if (in_PSW < '\0') {
    thunk_FUN_RAM_014002();
    thunk_FUN_RAM_01ae2f();
    return CONCAT11(extraout_R6,extraout_R7);
  }
  FUN_RAM_01a783();
  if (-1 < in_PSW) {
    *(char *)(uint3)in_DPTR = *(char *)(uint3)in_DPTR + -1;
  }
  Current_CPU_Fan_Lvl = Current_Calculation_Constant;
  uVar9 = 0x4c2;
  uVar3 = extraout_R7_00;
  bVar5 = System_STA_Flags;
  if ((System_STA_Flags >> 2 & 1) != 1) {
LAB_RAM_01982d:
    FUN_RAM_019912(uVar3);
    if (bVar5 != 0) {
      DAT_RAM_0094e7 = DAT_RAM_0094e7 | 8;
      return CONCAT11(extraout_R6_13,extraout_R7_24);
    }
    *(undefined *)(uint3)uVar9 = *(undefined *)(in_R1 + 0x7f0000);
    FUN_RAM_015baf();
    return CONCAT11(extraout_R6_14,extraout_R7_25);
  }
  func_0x01a859();
  FUN_RAM_01a640();
  func_0x01a7fd();
  FUN_RAM_0194f0();
  FUN_RAM_01a7db();
  func_0x01a77a();
  Current_Calculation_Constant = (char)((Fan_Step_CPU < extraout_R7_01) << 7) < '\0';
  FUN_RAM_01a7f0();
  FUN_RAM_01a61f();
  FUN_RAM_01a9b6();
  cVar4 = (Temp_CPU_Current < extraout_R7_02) << 7;
  if (-1 < cVar4) {
    uVar9 = 0x70c;
    cVar4 = cVar4 >> 7;
    cVar8 = (CPU_Hysteresis_Timer < (byte)-cVar4) << 7;
    cVar4 = CPU_Hysteresis_Timer + cVar4;
    if (-1 < cVar8) {
      func_0x01a89d();
      uVar9 = 0x696;
      Current_Calculation_Constant = cVar4;
      FUN_RAM_01a64d();
      if (-1 < cVar8) {
        func_0x01a867();
        if (-1 < cVar8) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        func_0x01a5fc();
        thunk_FUN_RAM_01ae2f();
        return CONCAT11(extraout_R6_01,extraout_R7_04);
      }
      thunk_FUN_RAM_014002();
      thunk_FUN_RAM_01ae2f();
      return CONCAT11(extraout_R6_00,extraout_R7_03);
    }
    CPU_Hysteresis_Timer = CPU_Hysteresis_Timer + 1;
    cVar4 = in_R1 - (cVar8 >> 7);
    uVar3 = 0x2a;
    bVar5 = (param_1 - ((char)((cVar4 != '\0') << 7) >> 7)) - cVar4;
    goto LAB_RAM_01982d;
  }
  if ((Fan_Mode_(Table) == 0) || (Fan_Mode_(Table) == 2)) {
LAB_RAM_011826:
    CPU_Hysteresis_Timer = 0;
    DAT_RAM_000716 = 0;
  }
  else {
    FUN_RAM_01a619();
    func_0x01a957();
    if (-1 < (char)((Temp_CPU_Current < (byte)(extraout_R7_05 + 1U)) << 7)) goto LAB_RAM_011826 ;
    cVar4 = '\0';
    bVar5 = DAT_RAM_000716;
    func_0x01a89d();
    uVar9 = 0x696;
    Current_Calculation_Constant = bVar5;
    while (FUN_RAM_01a64d(), cVar4 < '\0') {
      thunk_FUN_RAM_014002();
      uVar9 = 3;
      FUN_RAM_01a838();
      cVar4 = (bVar5 < (byte)(extraout_R7_06 + 1U)) << 7;
      bVar5 = bVar5 - (extraout_R7_06 + 1U);
      if (cVar4 < '\0') break;
      func_0x01a677();
    }
    FUN_RAM_01a783();
    if (-1 < cVar4) {
      *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
    }
    Fan_Step_CPU = Current_Calculation_Constant;
  }
  bVar5 = System_STA_Flags;
  if ((System_STA_Flags >> 1 & 1) != 1) {
LAB_RAM_019953:
    func_0x015e15(bVar5 & param_1);
    return CONCAT11(extraout_R6_15,extraout_R7_26);
  }
  func_0x01a85a(DAT_RAM_0091f0);
  FUN_RAM_01a756();
  FUN_RAM_01a947();
  FUN_RAM_019525();
  FUN_RAM_01a7db();
  func_0x01a77a();
  Current_Calculation_Constant = (char)((Current_GPU_Fan_Lvl < extraout_R7_07) << 7) < '\0';
  FUN_RAM_01a7f0();
  FUN_RAM_01a61f();
  FUN_RAM_01a9b6();
  cVar4 = (Temp_GPU_Current < extraout_R7_08) << 7;
  if (cVar4 < '\0') {
    FUN_RAM_01a619();
    func_0x01a957();
    bVar5 = (Temp_GPU_Current < (byte)(extraout_R7_12 + 1)) << 7;
    if ((char)bVar5 < '\0') {
      bVar5 = 0;
      bVar6 = GPU_Fan_Duty_Bias;
      FUN_RAM_01a8a7();
      uVar9 = 0x696;
      Current_Calculation_Constant = bVar6;
      while (FUN_RAM_01a64d(), (char)bVar5 < '\0') {
        thunk_FUN_RAM_014002();
        uVar9 = 5;
        FUN_RAM_01a844();
        bVar5 = (bVar6 < (byte)(extraout_R7_13 + 1U)) << 7;
        bVar6 = bVar6 - (extraout_R7_13 + 1U);
        if ((char)bVar5 < '\0') break;
        func_0x01a677();
      }
      FUN_RAM_01a783();
      if (-1 < (char)bVar5) {
        *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
      }
      Current_GPU_Fan_Lvl = Current_Calculation_Constant;
      uVar3 = extraout_R6_06;
      bVar6 = extraout_R7_14;
    }
    else {
      GPU_Thermal_Debounce_Counter = 0;
      GPU_Fan_Duty_Bias = 0;
      uVar3 = extraout_R6_05;
      bVar6 = extraout_R7_12;
    }
  }
  else {
    cVar4 = cVar4 >> 7;
    cVar8 = (GPU_Thermal_Debounce_Counter < (byte)-cVar4) << 7;
    bVar5 = GPU_Thermal_Debounce_Counter + cVar4;
    if (cVar8 < '\0') {
      GPU_Thermal_Debounce_Counter = 0;
      return CONCAT11(extraout_R6_02,extraout_R7_08);
    }
    FUN_RAM_01a8a7();
    uVar9 = 0x696;
    Current_Calculation_Constant = bVar5;
    while (FUN_RAM_01a64d(), cVar8 < '\0') {
      thunk_FUN_RAM_014002();
      Init_Fan_Control();
      cVar8 = (bVar5 < extraout_R7_09) << 7;
      bVar5 = bVar5 - extraout_R7_09;
      if (cVar8 < '\0') break;
      func_0x01a677();
    }
    func_0x01a867();
    if (-1 < cVar8) {
      *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
    }
    uVar9 = 0x696;
    bVar5 = Current_Calculation_Constant;
    func_0x01a5fc();
    Init_Fan_Control();
    bVar5 = (bVar5 < extraout_R7_10) << 7;
    uVar3 = extraout_R6_03;
    bVar6 = extraout_R7_10;
    if (((char)bVar5 < '\0') &&
       (FUN_RAM_01a9bd(), uVar3 = extraout_R6_04, bVar6 = extraout_R7_11, -1 < (char)bVar5)) {
      *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
    }
    Current_GPU_Fan_Lvl = Current_Calculation_Constant;
    if ((Fan_Mode_(Table) == 0) || (Fan_Mode_(Table) == 2)) {
      Fan_Step_GPU = 0;
      bVar5 = 0;
      goto LAB_RAM_019953;
    }
  }
  uVar9 = 0x4c2;
  if ((System_STA_Flags >> 3 & 1) == 1) {
    func_0x01a85a(DAT_RAM_0090fc);
    FUN_RAM_01a756();
    FUN_RAM_01a947();
    FUN_RAM_01955a();
    FUN_RAM_01a7db();
    func_0x01a77a();
    cVar4 = (Fan_Step_GPU < extraout_R7_15) << 7;
    cVar8 = cVar4 < '\0';
    Current_Calculation_Constant = cVar8;
    FUN_RAM_01a7f0();
    FUN_RAM_01a61f();
    bVar5 = cVar8 + (extraout_R6_07 - (cVar4 >> 7));
    FUN_RAM_01a9c4();
    cVar4 = (bVar5 < extraout_R7_16) << 7;
    if (cVar4 < '\0') {
      if ((Fan_Mode_(Table) != 0) && (bVar5 = Fan_Mode_(Table) ^ 2, bVar5 != 0)) {
        FUN_RAM_01a619();
        bVar5 = bVar5 + (in_B - (cVar4 >> 7));
        FUN_RAM_01a9c4();
        if ((char)((bVar5 < (byte)(extraout_R7_20 + 1U)) << 7) < '\0') {
          cVar4 = '\0';
          bVar5 = DAT_RAM_000717;
          func_0x01a8b1();
          uVar9 = 0x696;
          Current_Calculation_Constant = bVar5;
          FUN_RAM_01a64d();
          if (cVar4 < '\0') {
            thunk_FUN_RAM_014002();
            thunk_FUN_RAM_01ae2f();
            return CONCAT11(extraout_R6_10,extraout_R7_21);
          }
          FUN_RAM_01a783();
          if (-1 < cVar4) {
            *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
          }
          goto LAB_RAM_011a56;
        }
      }
      DAT_RAM_00070d = 0;
      DAT_RAM_000717 = 0;
    }
    else {
      uVar9 = 0x70d;
      bVar5 = (DAT_RAM_00070d < (byte)-(cVar4 >> 7)) << 7;
      bVar6 = DAT_RAM_00070d + (cVar4 >> 7);
      if ((char)bVar5 < '\0') {
        DAT_RAM_00070d = DAT_RAM_00070d + 1;
        uVar3 = extraout_R6_08;
        bVar6 = extraout_R7_16;
        if ((DAT_RAM_00070d & 1) == 1) goto LAB_RAM_019a7a;
        goto LAB_RAM_019a67;
      }
      func_0x01a8b1();
      uVar9 = 0x696;
      Current_Calculation_Constant = bVar6;
      while (FUN_RAM_01a64d(), (char)bVar5 < '\0') {
        thunk_FUN_RAM_014002();
        FUN_RAM_01a84d();
        bVar5 = (bVar6 < extraout_R7_17) << 7;
        bVar6 = bVar6 - extraout_R7_17;
        if ((char)bVar5 < '\0') break;
        func_0x01a677();
      }
      func_0x01a867();
      if (-1 < (char)bVar5) {
        *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
      }
      uVar9 = 0x696;
      bVar5 = Current_Calculation_Constant;
      func_0x01a5fc();
      FUN_RAM_01a84d();
      cVar4 = (bVar5 < extraout_R7_18) << 7;
      if ((cVar4 < '\0') && (FUN_RAM_01a9bd(), -1 < cVar4)) {
        *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        *(byte *)(uint3)uVar9 = *(byte *)(uint3)uVar9 & 0xfc;
        return CONCAT11(extraout_R6_09,extraout_R7_19);
      }
LAB_RAM_011a56:
      Fan_Step_GPU = Current_Calculation_Constant;
    }
    if (((GPU_Related_Flag_30e >> 6 & 1) != 0) && (Fan_Mode_(Table) == 2)) {
      Current_GPU_Fan_Lvl = 0;
      Fan_Step_GPU = 0;
    }
    if (((DAT_RAM_003281 >> 1 & 1) == 0) || ((System_Plugged_IN?._0_1_ & 1) == 1)) {
      CPU_Final_Target_Level = Current_CPU_Fan_Lvl;
      if (-1 < (char)((Current_CPU_Fan_Lvl < Fan_Step_CPU) << 7)) {
        CPU_Final_Target_Level = Fan_Step_CPU;
      }
    }
    else {
      CPU_Final_Target_Level = Fan_Step_CPU;
    }
    GPU_Final_Target_Level = Current_GPU_Fan_Lvl;
    if (-1 < (char)((Current_GPU_Fan_Lvl < Fan_Step_GPU) << 7)) {
      GPU_Final_Target_Level = Fan_Step_GPU;
    }
    Final_Fan_Level_Target = CPU_Final_Target_Level;
    if ((char)((CPU_Final_Target_Level < (byte)(GPU_Final_Target_Level + 1)) << 7) < '\0') {
      Final_Fan_Level_Target = GPU_Final_Target_Level;
    }
    cVar4 = (Final_Fan_Level_Target < 2) << 7;
    bVar5 = Final_Fan_Level_Target - 2;
    if (((-1 < cVar4) && (bVar5 = DAT_RAM_0003a0, (DAT_RAM_0003a0 >> 1 & 1) != 0)) &&
       (bVar5 = GPU_STATUS_359, (GPU_STATUS_359 >> 2 & 1) != 1)) {
      bVar5 = 1;
      Final_Fan_Level_Target = 1;
    }
    FUN_RAM_01a616();
    func_0x01a9ce();
    FUN_RAM_01a60f();
    func_0x01a9ce();
    FUN_RAM_01a60f();
    bVar5 = bVar5 + (in_B - (cVar4 >> 7));
    FUN_RAM_015c06();
    DAT_RAM_0004e4 = in_B;
    DAT_RAM_0004e5 = bVar5;
    if ((Manual_Mode_Toggle >> 2 & 1) == 1) {
                    /* WARNING: Call to offcut address within same function */
      func_0x019f26();
      func_0x01a9d4();
      Current_Calculation_Constant = (char)((Fan_Step_CPU_Manual < extraout_R7_22) << 7) < '\0' ;
      thunk_FUN_RAM_01ae2f();
      return CONCAT11(extraout_R6_12,extraout_R7_23);
    }
    bVar6 = extraout_R6_11;
    if (((char)((Manual_Mode_Toggle == 0) << 7) < '\0') &&
       ((DAT_RAM_009596 != 0 || (DAT_RAM_009597 != 0)))) {
      if ((DAT_RAM_009596 & 1) == 0) {
        if ((DAT_RAM_009597 & 1) == 0) {
          if ((DAT_RAM_009596 >> 1 & 1) == 0) {
            if ((DAT_RAM_009597 >> 1 & 1) == 0) {
              if ((DAT_RAM_009596 >> 2 & 1) == 0) {
                if ((DAT_RAM_009597 >> 2 & 1) == 0) {
                  if ((DAT_RAM_009596 >> 3 & 1) == 0) {
                    if ((DAT_RAM_009597 >> 3 & 1) == 0) {
                      uVar9 = 0x9596;
                      if ((DAT_RAM_009596 >> 4 & 1) == 0) {
                        if ((DAT_RAM_009597 >> 4 & 1) != 0) {
                          DAT_RAM_009501 = DAT_RAM_009501 | 0x10;
                          DAT_RAM_009597 = DAT_RAM_009597 & 0xef;
                          return CONCAT11(extraout_R6_11,bVar5);
                        }
                        if ((DAT_RAM_009596 >> 5 & 1) == 0) {
                          uVar9 = 0x9597;
                          if ((DAT_RAM_009597 >> 5 & 1) != 0) {
                            FUN_RAM_01a2db();
                            *(undefined *)(uint3)uVar9 = 0x23;
                            FUN_RAM_019d54();
                            bVar6 = extraout_R6_37;
                            bVar5 = extraout_R7_54;
                            if (extraout_R7_54 != 0) {
                              FUN_RAM_01a2b7();
                              thunk_FUN_RAM_015f03();
                              func_0x015e15(DAT_RAM_0092af,0);
                              return CONCAT11(extraout_R6_38,extraout_R7_55);
                            }
                          }
                        }
                        else {
                          FUN_RAM_01a283();
                          FUN_RAM_01a1ef();
                          Thermal_Decision_Main();
                          bVar6 = extraout_R6_36;
                          bVar5 = extraout_R7_53;
                          if (extraout_R7_53 != 0) {
                            DAT_RAM_009500 = DAT_RAM_009500 & 0xdf;
                            DAT_RAM_009596 = DAT_RAM_009596 & 0xdf;
                            bVar5 = extraout_R6_36;
                            bVar6 = extraout_R7_53;
                            goto LAB_RAM_019fb2;
                          }
                        }
                        return CONCAT11(bVar6,bVar5);
                      }
                      FUN_RAM_01a2db();
                      *(undefined *)(uint3)uVar9 = 0x70;
                      FUN_RAM_019d54();
                      bVar6 = extraout_R6_34;
                      bVar5 = extraout_R7_51;
                      if (extraout_R7_51 != 0) {
                        FUN_RAM_01a2b7();
                        thunk_FUN_RAM_015f03();
                        DAT_RAM_009500 = DAT_RAM_009500 & 0xef;
                        DAT_RAM_009596 = DAT_RAM_009596 & 0xef;
                        DAT_RAM_009597 = DAT_RAM_009597 | 0x10;
                        DAT_RAM_009598 = 0;
                        return CONCAT11(extraout_R6_35,extraout_R7_52);
                      }
                    }
                    else {
                      bVar2 = DAT_RAM_009597;
                      FUN_RAM_01a01c();
                      bVar6 = extraout_R6_32;
                      bVar5 = extraout_R7_49;
                      if (bVar2 != 0) {
                        FUN_RAM_01a2b7();
                        thunk_FUN_RAM_015f03();
                        DAT_RAM_009501 = DAT_RAM_009501 | 8;
                        DAT_RAM_009597 = DAT_RAM_009597 & 0xf7;
                        return CONCAT11(extraout_R6_33,extraout_R7_50);
                      }
                    }
                  }
                  else {
                    FUN_RAM_01a283();
                    FUN_RAM_01a1ef();
                    Thermal_Decision_Main();
                    bVar6 = extraout_R6_31;
                    bVar5 = extraout_R7_48;
                    if (extraout_R7_48 != 0) {
                      DAT_RAM_009500 = DAT_RAM_009500 & 0xf7;
                      DAT_RAM_009596 = DAT_RAM_009596 & 0xf7;
                      DAT_RAM_009597 = DAT_RAM_009597 | 8;
                      bVar5 = extraout_R6_31;
                      bVar6 = extraout_R7_48;
                      goto LAB_RAM_019fb2;
                    }
                  }
                }
                else {
                  bVar2 = DAT_RAM_009597;
                  FUN_RAM_01a01c();
                  bVar6 = extraout_R6_29;
                  bVar5 = extraout_R7_46;
                  if (bVar2 != 0) {
                    FUN_RAM_01a2b7();
                    thunk_FUN_RAM_015f03();
                    DAT_RAM_009501 = DAT_RAM_009501 | 4;
                    DAT_RAM_009597 = DAT_RAM_009597 & 0xfb;
                    return CONCAT11(extraout_R6_30,extraout_R7_47);
                  }
                }
              }
              else {
                FUN_RAM_01a283();
                FUN_RAM_01a1ef();
                Thermal_Decision_Main();
                bVar6 = extraout_R6_28;
                bVar5 = extraout_R7_45;
                if (extraout_R7_45 != 0) {
                  DAT_RAM_009500 = DAT_RAM_009500 & 0xfb;
                  DAT_RAM_009596 = DAT_RAM_009596 & 0xfb;
                  DAT_RAM_009597 = DAT_RAM_009597 | 4;
                  bVar5 = extraout_R6_28;
                  bVar6 = extraout_R7_45;
                  goto LAB_RAM_019fb2;
                }
              }
            }
            else {
              bVar2 = DAT_RAM_009597;
                    /* WARNING: Call to offcut address within same function */
              func_0x01a00b();
              bVar6 = extraout_R6_26;
              bVar5 = extraout_R7_43;
              if (bVar2 != 0) {
                DAT_RAM_009594 = DAT_RAM_00959d;
                FUN_RAM_01a237();
                DAT_RAM_009501 = DAT_RAM_009501 | 2;
                DAT_RAM_009597 = DAT_RAM_009597 & 0xfd;
                return CONCAT11(extraout_R6_27,extraout_R7_44);
              }
            }
          }
          else {
            FUN_RAM_01a283();
            FUN_RAM_01a1ec();
            Thermal_Decision_Main();
            bVar6 = extraout_R6_25;
            bVar5 = extraout_R7_42;
            if (extraout_R7_42 != 0) {
              DAT_RAM_009500 = DAT_RAM_009500 & 0xfd;
              DAT_RAM_009596 = DAT_RAM_009596 & 0xfd;
              DAT_RAM_009597 = DAT_RAM_009597 | 2;
              bVar5 = extraout_R6_25;
              bVar6 = extraout_R7_42;
              goto LAB_RAM_019fb2;
            }
          }
        }
        else {
          bVar2 = DAT_RAM_009597;
                    /* WARNING: Call to offcut address within same function */
          func_0x01a00b();
          bVar6 = extraout_R6_23;
          bVar5 = extraout_R7_40;
          if (bVar2 != 0) {
            DAT_RAM_009595 = DAT_RAM_00959d;
            FUN_RAM_01a237();
            DAT_RAM_009501 = DAT_RAM_009501 | 1;
            DAT_RAM_009597 = DAT_RAM_009597 & 0xfe;
            return CONCAT11(extraout_R6_24,extraout_R7_41);
          }
        }
      }
      else {
        FUN_RAM_01a283();
        FUN_RAM_01a1ec();
        Thermal_Decision_Main();
        bVar6 = extraout_R6_22;
        bVar5 = extraout_R7_39;
        if (extraout_R7_39 != 0) {
          DAT_RAM_009500 = DAT_RAM_009500 & 0xfe;
          DAT_RAM_009596 = DAT_RAM_009596 & 0xfe;
          DAT_RAM_009597 = DAT_RAM_009597 | 1;
          bVar5 = extraout_R6_22;
          bVar6 = extraout_R7_39;
LAB_RAM_019fb2:
          DAT_RAM_009597 = DAT_RAM_009597 | 0x20;
          DAT_RAM_009598 = 0x19;
          return CONCAT11(bVar5,bVar6);
        }
      }
    }
    if ((in_B & 1) != 1) {
      DAT_RAM_00959e = 0x16;
      DAT_RAM_00959f = 0x23;
      FUN_RAM_019d54();
      return CONCAT11(extraout_R6_39,extraout_R7_56);
    }
    if (((char)((bVar5 < 0x10) << 7) < '\0') || (-1 < (char)((bVar5 < 0x1b) << 7))) {
      if (((char)((bVar5 < 0x20) << 7) < '\0') || (-1 < (char)((bVar5 < 0x28) << 7))) {
        if (((char)((bVar5 < 0x5c) << 7) < '\0') || (-1 < (char)((bVar5 < 0x60) << 7))) {
          if (((char)((bVar5 < 0x60) << 7) < '\0') || (-1 < (char)((bVar5 < 0x80) << 7))) {
            if (((char)((bVar5 < 0x80) << 7) < '\0') || (-1 < (char)((bVar5 < 0xa0) << 7))) {
              if (((char)((bVar5 < 0xa0) << 7) < '\0') || (-1 < (char)((bVar5 < 0xc0) << 7))) {
                if (((char)((bVar5 < 0xc0) << 7) < '\0') || (-1 < (char)((bVar5 < 0xe0) << 7))) {
                  return (ushort)bVar6 << 8;
                }
                cVar8 = bVar5 + 0x90;
                cVar4 = -0x6c - ((char)((0x6f < bVar5) << 7) >> 7);
              }
              else {
                cVar8 = bVar5 + 0x90;
                cVar4 = -0x6c - ((char)((0x6f < bVar5) << 7) >> 7);
              }
            }
            else {
              cVar8 = bVar5 + 0x90;
              cVar4 = -0x6c - ((char)((0x6f < bVar5) << 7) >> 7);
            }
          }
          else {
            cVar8 = bVar5 + 0x50;
            cVar4 = -0x6e - ((char)((0xaf < bVar5) << 7) >> 7);
          }
        }
        else {
          cVar8 = bVar5 + 0x50;
          cVar4 = -0x6e - ((char)((0xaf < bVar5) << 7) >> 7);
        }
        goto LAB_RAM_01a0df;
      }
      bVar1 = 0x4f < bVar5;
      cVar8 = bVar5 + 0xb0;
    }
    else {
      bVar1 = 0x1e < bVar5;
      cVar8 = bVar5 - 0x1f;
    }
    cVar4 = -0x69 - ((char)(bVar1 << 7) >> 7);
LAB_RAM_01a0df:
    return CONCAT11(bVar6,*(undefined *)(uint3)CONCAT11(cVar4,cVar8));
  }
LAB_RAM_019a67:
  if (((((*(byte *)(uint3)uVar9 >> 1 & 1) == 1) || ((*(byte *)(uint3)uVar9 >> 2 & 1) == 1)) ||
      ((*(byte *)(uint3)uVar9 >> 3 & 1) == 1)) ||
     (bVar2 = *(byte *)(uint3)uVar9, bVar7 = bVar2, (bVar2 >> 4 & 1) == 1)) {
LAB_RAM_019a7a:
    if ((DAT_RAM_009227 & 1) != 0) {
      sVar10 = -0x6dde;
      FUN_RAM_0199f8(DAT_RAM_009222);
      FUN_RAM_01a211();
      *(undefined *)(uint3)(ushort)(sVar10 + 1) = 0;
      FUN_RAM_01a27a();
      FUN_RAM_01a2c0();
      Load_Thermal_Table_Offset();
      if (extraout_R7_27 == '\0') {
        DAT_RAM_009227 = DAT_RAM_009227 | 0x40;
      }
      else {
        DAT_RAM_009227 = DAT_RAM_009227 | 0x80;
      }
      FUN_RAM_019a32(DAT_RAM_009222);
      uVar3 = extraout_R6_16;
      bVar6 = extraout_R7_28;
    }
    if ((DAT_RAM_009227 >> 1 & 1) != 0) {
      sVar10 = -0x6dde;
      FUN_RAM_0199f8(DAT_RAM_009222);
      FUN_RAM_01a29d();
      FUN_RAM_01a22c();
      FUN_RAM_01a272();
      *(undefined *)(uint3)(ushort)(sVar10 + 1) = 0;
      param_2 = '\0';
      Load_Thermal_Table_Offset();
      if (extraout_R7_29 == '\0') {
        DAT_RAM_009227 = DAT_RAM_009227 | 0x40;
      }
      else {
        DAT_RAM_009227 = DAT_RAM_009227 | 0x80;
      }
      FUN_RAM_019a32(DAT_RAM_009222);
      uVar3 = extraout_R6_17;
      bVar6 = extraout_R7_30;
    }
    if ((DAT_RAM_009227 >> 2 & 1) != 0) {
      FUN_RAM_0199f8(DAT_RAM_009222);
      FUN_RAM_01a211();
      DAT_RAM_00069c = DAT_RAM_009221;
      FUN_RAM_01a27a();
      FUN_RAM_01a2c0();
      Load_Thermal_Table_Offset();
      if (extraout_R7_31 == '\0') {
        DAT_RAM_009227 = DAT_RAM_009227 | 0x40;
      }
      else {
        DAT_RAM_009227 = DAT_RAM_009227 | 0x80;
      }
      FUN_RAM_019a32(DAT_RAM_009222);
      uVar3 = extraout_R6_18;
      bVar6 = extraout_R7_32;
    }
    if ((DAT_RAM_009227 >> 3 & 1) == 0) goto LAB_RAM_019b76;
    do {
      sVar10 = -0x6dde;
      FUN_RAM_0199f8(DAT_RAM_009222);
      FUN_RAM_01a29d();
      FUN_RAM_01a22c();
      FUN_RAM_01a272();
      uVar9 = sVar10 + 1;
      *(undefined *)(uint3)uVar9 = 0;
      param_2 = '\0';
      Load_Thermal_Table_Offset();
      if (extraout_R7_33 == '\0') {
LAB_RAM_019b6a:
        DAT_RAM_009227 = DAT_RAM_009227 | 0x40;
      }
      else {
        FUN_RAM_01a220();
        *(undefined *)(uint3)(ushort)(uVar9 + 1) = 0;
        FUN_RAM_01a27a();
        FUN_RAM_01a2c0();
        Load_Thermal_Table_Offset();
        if (extraout_R7_34 == '\0') goto LAB_RAM_019b6a;
        DAT_RAM_009227 = DAT_RAM_009227 | 0x80;
      }
      FUN_RAM_019a32(DAT_RAM_009222);
      uVar3 = extraout_R6_19;
      bVar6 = extraout_R7_35;
LAB_RAM_019b76:
      if ((DAT_RAM_009227 >> 4 & 1) != 1) {
        return CONCAT11(uVar3,bVar6);
      }
      FUN_RAM_0199f8(DAT_RAM_009225);
      TACH_Switch = DAT_RAM_00922a & 0xfe;
      bVar5 = bVar5 & 0xdd;
      DAT_RAM_009227 = 0;
      cVar4 = DAT_RAM_009224;
      FUN_RAM_015ea4();
      if (extraout_R6_20 == 2) goto code_r0x019ba2;
      bVar5 = 2e.2 << 7;
    } while( true );
  }
code_r0x019d18:
  *(byte *)(uint3)uVar9 = bVar7;
code_r0x019d19:
  return CONCAT11(bVar2,bVar6);
code_r0x019ba2:
  *(char *)(in_R0 + 0x7f0000) =
       (*(char *)(uint3)in_R0 + '\x01') -
       (param_2 -
       ((char)(((byte)(extraout_R7_36 >> 1 | extraout_R7_36 << 7) <
               (byte)(param_2 - ((char)((extraout_R6_20 < 2) << 7) >> 7))) << 7) >> 7));
  cVar8 = read_volatile_1(DAT_SFR_9c);
  write_volatile_1(DAT_SFR_9c,cVar8 + '\x01');
  *(char *)(in_R0 + 0x7f0000) = *(char *)(in_R0 + 0x7f0000) + '\x01';
  *(char *)(in_R1 + 0x7f0000) = *(char *)(in_R1 + 0x7f0000) + '\x01';
  nop();
  BANK1_R2 = param_1;
  func_0x01a249(cVar4 - (param_2 - ((char)bVar5 >> 7)));
  FUN_RAM_011f11(0x80);
  if (extraout_R7_37 != '\0') {
    if (extraout_R7_37 == '\0') {
      DAT_RAM_009227 = DAT_RAM_009227 | 0x40;
    }
    else {
      DAT_RAM_009227 = DAT_RAM_009227 | 0x80;
    }
  }
  FUN_RAM_019a32(DAT_RAM_009225);
  DAT_RAM_00068b = REG_PM4STS;
  bVar2 = extraout_R6_21;
  bVar6 = extraout_R7_38;
  if (((REG_PM4STS & 1) == 1) || ((bRAM00922b & 1) == 0)) goto code_r0x019d19;
  REG_PM4DO = DAT_RAM_009227;
  uVar9 = 0x922b;
  bVar7 = bRAM00922b & 0xfe;
  goto code_r0x019d18;
}



short Fan_Control_Main(undefined param_1,byte param_2,byte param_3)

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
  char extraout_R6_06;
  undefined extraout_R6_07;
  undefined extraout_R6_08;
  byte extraout_R6_09;
  undefined extraout_R6_10;
  undefined extraout_R6_11;
  undefined extraout_R6_12;
  undefined extraout_R6_13;
  undefined uVar2;
  undefined extraout_R6_14;
  undefined extraout_R6_15;
  undefined extraout_R6_16;
  undefined extraout_R6_17;
  byte extraout_R6_18;
  byte extraout_R6_19;
  byte bVar3;
  byte extraout_R6_20;
  byte extraout_R6_21;
  undefined extraout_R6_22;
  byte extraout_R6_23;
  byte extraout_R6_24;
  undefined extraout_R6_25;
  byte extraout_R6_26;
  byte extraout_R6_27;
  undefined extraout_R6_28;
  byte extraout_R6_29;
  byte extraout_R6_30;
  undefined extraout_R6_31;
  byte extraout_R6_32;
  undefined extraout_R6_33;
  byte extraout_R6_34;
  byte extraout_R6_35;
  undefined extraout_R6_36;
  undefined extraout_R6_37;
  byte extraout_R7;
  byte extraout_R7_00;
  byte extraout_R7_01;
  byte extraout_R7_02;
  char extraout_R7_03;
  byte extraout_R7_04;
  byte extraout_R7_05;
  byte extraout_R7_06;
  byte extraout_R7_07;
  byte extraout_R7_08;
  byte extraout_R7_09;
  byte extraout_R7_10;
  byte extraout_R7_11;
  char extraout_R7_12;
  char extraout_R7_13;
  byte extraout_R7_14;
  byte extraout_R7_15;
  byte extraout_R7_16;
  byte extraout_R7_17;
  byte extraout_R7_18;
  byte extraout_R7_19;
  char extraout_R7_20;
  byte extraout_R7_21;
  byte extraout_R7_22;
  byte extraout_R7_23;
  byte extraout_R7_24;
  byte extraout_R7_25;
  undefined extraout_R7_26;
  char extraout_R7_27;
  char extraout_R7_28;
  byte extraout_R7_29;
  byte extraout_R7_30;
  byte extraout_R7_31;
  byte extraout_R7_32;
  byte extraout_R7_33;
  char extraout_R7_34;
  byte extraout_R7_35;
  byte extraout_R7_36;
  byte extraout_R7_37;
  byte extraout_R7_38;
  byte extraout_R7_39;
  byte extraout_R7_40;
  byte extraout_R7_41;
  byte extraout_R7_42;
  byte extraout_R7_43;
  byte extraout_R7_44;
  byte extraout_R7_45;
  char extraout_R7_46;
  byte extraout_R7_47;
  undefined extraout_R7_48;
  undefined extraout_R7_49;
  undefined extraout_R7_50;
  undefined extraout_R7_51;
  byte extraout_R7_52;
  char extraout_R7_53;
  byte extraout_R7_54;
  byte extraout_R7_55;
  byte extraout_R7_56;
  undefined extraout_R7_57;
  byte extraout_R7_58;
  byte extraout_R7_59;
  undefined extraout_R7_60;
  byte extraout_R7_61;
  byte extraout_R7_62;
  undefined extraout_R7_63;
  byte extraout_R7_64;
  byte extraout_R7_65;
  undefined extraout_R7_66;
  byte extraout_R7_67;
  undefined extraout_R7_68;
  byte extraout_R7_69;
  byte extraout_R7_70;
  undefined extraout_R7_71;
  undefined extraout_R7_72;
  byte in_B;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  
  Calc_697 = 0;
  Calc_698 = 0;
  Calc_699 = 9;
  Calc_69a = 0;
  Calc_68e = param_1;
  Calc_68f = param_2;
  Calc_690 = param_3;
  func_0x01a77c();
  if (-1 < (char)((Current_CPU_Fan_Lvl < extraout_R7) << 7)) {
    Current_CPU_Fan_Lvl = extraout_R7;
  }
  if (-1 < (char)((Current_GPU_Fan_Lvl < extraout_R7) << 7)) {
    Current_GPU_Fan_Lvl = SUB_RAM_000695 - 1;
  }
  func_0x01a77c();
  if (-1 < (char)((Fan_Lvl_CPU_B70 < extraout_R7_00) << 7)) {
    Fan_Lvl_CPU_B70 = extraout_R7_00;
  }
  func_0x01a77c();
  if (-1 < (char)((Fan_Lvl_GPU_B71 < extraout_R7_01) << 7)) {
    Fan_Lvl_GPU_B71 = extraout_R7_01;
  }
  if ((System_STA_Flags & 1) != 1) {
LAB_RAM_019100:
    *(char *)(in_R0 + 0x7f0000) = *(char *)(in_R0 + 0x7f0000) + '\x01';
    uVar9 = 0x94b8;
    FUN_RAM_01993d();
    FUN_RAM_01990b(0x28);
    if (in_R0 != 0) {
      DAT_RAM_0094e7 = DAT_RAM_0094e7 | 2;
      return CONCAT11(extraout_R6_14,extraout_R7_48);
    }
    goto LAB_RAM_0198c8;
  }
  func_0x01a859();
  FUN_RAM_01a640();
  func_0x01a7fd();
  FUN_RAM_0194bb();
  FUN_RAM_01a7db();
  func_0x01a77a();
  Calc_696 = (char)((Current_CPU_Fan_Lvl < extraout_R7_02) << 7) < '\0';
  func_0x01a9b0();
  bVar4 = 0xe;
  func_0x015e52(Current_CPU_Fan_Lvl + extraout_R7_03);
  FUN_RAM_015ab1();
  cVar8 = (Hysteresis_Applied_CPU_Temp < bVar4) << 7;
  cVar5 = Hysteresis_Applied_CPU_Temp - bVar4;
  if (cVar8 < '\0') {
    FUN_RAM_01a619();
    bVar4 = cVar5 + (in_B - (cVar8 >> 7));
    thunk_FUN_RAM_01ae2f();
    if ((char)((Hysteresis_Applied_CPU_Temp < (byte)(bVar4 + 1)) << 7) < '\0') {
      cVar8 = '\0';
      bVar4 = idk_7f7;
      FUN_RAM_01a893();
      uVar9 = 0x696;
      Calc_696 = bVar4;
      FUN_RAM_01a64d();
      if (cVar8 < '\0') {
        thunk_FUN_RAM_014002();
        thunk_FUN_RAM_01ae2f();
        uVar9 = 0x91f4;
        cVar8 = (Hysteresis_Applied_CPU_Temp < (byte)(bVar4 + 1)) << 7;
        if (-1 < cVar8) {
          func_0x01a677();
          FUN_RAM_0116e3();
        }
      }
      FUN_RAM_01a783();
      if (-1 < cVar8) {
        *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
      }
      Current_CPU_Fan_Lvl = Calc_696;
      bVar4 = extraout_R7_06;
    }
    else {
      idk_7f6 = 0;
      idk_7f7 = 0;
    }
  }
  else {
    uVar9 = 0x7f6;
    cVar5 = (idk_7f6 < (byte)-(cVar8 >> 7)) << 7;
    bVar4 = idk_7f6 + (cVar8 >> 7);
    if (cVar5 < '\0') {
      idk_7f6 = idk_7f6 + 1;
      goto LAB_RAM_0198c8;
    }
    FUN_RAM_01a893();
    uVar9 = 0x696;
    Calc_696 = bVar4;
    while (FUN_RAM_01a64d(), cVar5 < '\0') {
      func_0x01a9b0();
      thunk_FUN_RAM_01ae2f();
      if (cVar5 < '\0') break;
      func_0x01a677();
    }
    FUN_RAM_01a939();
    if (-1 < cVar5) {
      *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
    }
    func_0x01a9b0();
    in_B = 0xe;
    thunk_FUN_RAM_01ae2f(Calc_696);
    bVar4 = extraout_R7_04;
    if ((cVar5 < '\0') && (-1 < (char)((extraout_R7_04 < (byte)-(cVar5 >> 7)) << 7))) {
      func_0x01a940();
      bVar4 = extraout_R7_05;
    }
    Current_CPU_Fan_Lvl = Calc_696;
    if ((Fan_Mode_406 == 0) || (Fan_Mode_406 == 2)) {
      Fan_Lvl_CPU_B70 = 0;
      goto LAB_RAM_019100;
    }
  }
  uVar9 = 0x4c2;
  bVar6 = System_STA_Flags;
  if ((System_STA_Flags >> 2 & 1) == 1) {
    func_0x01a859();
    FUN_RAM_01a640();
    func_0x01a7fd();
    FUN_RAM_0194f0();
    FUN_RAM_01a7db();
    func_0x01a77a();
    Calc_696 = (char)((Fan_Lvl_CPU_B70 < extraout_R7_07) << 7) < '\0';
    FUN_RAM_01a7f0();
    FUN_RAM_01a61f();
    FUN_RAM_01a9b6();
    cVar8 = (Hysteresis_Applied_CPU_Temp_2 < extraout_R7_08) << 7;
    if (cVar8 < '\0') {
      if ((Fan_Mode_406 == 0) || (Fan_Mode_406 == 2)) {
LAB_RAM_011826:
        70c = 0;
        DAT_RAM_000716 = 0;
      }
      else {
        FUN_RAM_01a619();
        func_0x01a957();
        if (-1 < (char)((Hysteresis_Applied_CPU_Temp_2 < (byte)(extraout_R7_12 + 1U)) << 7))
        goto LAB_RAM_011826;
        cVar8 = '\0';
        bVar4 = DAT_RAM_000716;
        func_0x01a89d();
        uVar9 = 0x696;
        Calc_696 = bVar4;
        while (FUN_RAM_01a64d(), cVar8 < '\0') {
          thunk_FUN_RAM_014002();
          uVar9 = 3;
          FUN_RAM_01a838();
          cVar8 = (bVar4 < (byte)(extraout_R7_13 + 1U)) << 7;
          bVar4 = bVar4 - (extraout_R7_13 + 1U);
          if (cVar8 < '\0') break;
          func_0x01a677();
        }
        FUN_RAM_01a783();
        if (-1 < cVar8) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        Fan_Lvl_CPU_B70 = Calc_696;
      }
      bVar4 = System_STA_Flags;
      if ((System_STA_Flags >> 1 & 1) != 1) {
LAB_RAM_019953:
        func_0x015e15(bVar4 & param_2);
        return CONCAT11(extraout_R6_17,extraout_R7_51);
      }
      func_0x01a85a(DAT_RAM_0091f0);
      FUN_RAM_01a756();
      FUN_RAM_01a947();
      FUN_RAM_019525();
      FUN_RAM_01a7db();
      func_0x01a77a();
      Calc_696 = (char)((Current_GPU_Fan_Lvl < extraout_R7_14) << 7) < '\0';
      FUN_RAM_01a7f0();
      FUN_RAM_01a61f();
      FUN_RAM_01a9b6();
      cVar8 = (Hysteresis_Applied_GPU_Temp < extraout_R7_15) << 7;
      if (cVar8 < '\0') {
        FUN_RAM_01a619();
        func_0x01a957();
        bVar4 = (Hysteresis_Applied_GPU_Temp < (byte)(extraout_R7_19 + 1)) << 7;
        if ((char)bVar4 < '\0') {
          bVar4 = 0;
          bVar6 = idk_7f9;
          FUN_RAM_01a8a7();
          uVar9 = 0x696;
          Calc_696 = bVar6;
          while (FUN_RAM_01a64d(), (char)bVar4 < '\0') {
            thunk_FUN_RAM_014002();
            uVar9 = 5;
            FUN_RAM_01a844();
            bVar4 = (bVar6 < (byte)(extraout_R7_20 + 1U)) << 7;
            bVar6 = bVar6 - (extraout_R7_20 + 1U);
            if ((char)bVar4 < '\0') break;
            func_0x01a677();
          }
          FUN_RAM_01a783();
          if (-1 < (char)bVar4) {
            *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
          }
          Current_GPU_Fan_Lvl = Calc_696;
          uVar2 = extraout_R6_05;
          bVar6 = extraout_R7_21;
        }
        else {
          idk_7f8 = 0;
          idk_7f9 = 0;
          uVar2 = extraout_R6_04;
          bVar6 = extraout_R7_19;
        }
      }
      else {
        cVar8 = cVar8 >> 7;
        cVar5 = (idk_7f8 < (byte)-cVar8) << 7;
        bVar4 = idk_7f8 + cVar8;
        if (cVar5 < '\0') {
          idk_7f8 = 0;
          return CONCAT11(extraout_R6_01,extraout_R7_15);
        }
        FUN_RAM_01a8a7();
        uVar9 = 0x696;
        Calc_696 = bVar4;
        while (FUN_RAM_01a64d(), cVar5 < '\0') {
          thunk_FUN_RAM_014002();
          Init_Fan_Control();
          cVar5 = (bVar4 < extraout_R7_16) << 7;
          bVar4 = bVar4 - extraout_R7_16;
          if (cVar5 < '\0') break;
          func_0x01a677();
        }
        func_0x01a867();
        if (-1 < cVar5) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        uVar9 = 0x696;
        bVar4 = Calc_696;
        func_0x01a5fc();
        Init_Fan_Control();
        bVar4 = (bVar4 < extraout_R7_17) << 7;
        uVar2 = extraout_R6_02;
        bVar6 = extraout_R7_17;
        if (((char)bVar4 < '\0') &&
           (FUN_RAM_01a9bd(), uVar2 = extraout_R6_03, bVar6 = extraout_R7_18, -1 < (char)bVar4))  {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        Current_GPU_Fan_Lvl = Calc_696;
        if ((Fan_Mode_406 == 0) || (Fan_Mode_406 == 2)) {
          Fan_Lvl_GPU_B71 = 0;
          bVar4 = 0;
          goto LAB_RAM_019953;
        }
      }
      uVar9 = 0x4c2;
      if ((System_STA_Flags >> 3 & 1) != 1) {
LAB_DIAG_CHECK:
        if (((((*(byte *)(uint3)uVar9 >> 1 & 1) == 1) || ((*(byte *)(uint3)uVar9 >> 2 & 1) == 1))  ||
            ((*(byte *)(uint3)uVar9 >> 3 & 1) == 1)) ||
           (bVar3 = *(byte *)(uint3)uVar9, bVar7 = bVar3, (bVar3 >> 4 & 1) == 1)) {
LAB_FAN_TABLE_LOADER:
          if ((idk_9227 & 1) != 0) {
            sVar10 = -0x6dde;
            FUN_RAM_0199f8(DAT_RAM_009222);
            FUN_RAM_01a211();
            *(undefined *)(uint3)(ushort)(sVar10 + 1) = 0;
            FUN_RAM_01a27a();
            FUN_RAM_01a2c0();
                    /* WARNING: Subroutine does not return */
            Load_Thermal_Table_Offset();
          }
          if ((idk_9227 >> 1 & 1) != 0) {
            sVar10 = -0x6dde;
            FUN_RAM_0199f8(DAT_RAM_009222);
            FUN_RAM_01a29d();
            FUN_RAM_01a22c();
            FUN_RAM_01a272();
            *(undefined *)(uint3)(ushort)(sVar10 + 1) = 0;
                    /* WARNING: Subroutine does not return */
            Load_Thermal_Table_Offset();
          }
          if ((idk_9227 >> 2 & 1) != 0) {
            FUN_RAM_0199f8(DAT_RAM_009222);
            FUN_RAM_01a211();
            DAT_RAM_00069c = DAT_RAM_009221;
            FUN_RAM_01a27a();
            FUN_RAM_01a2c0();
                    /* WARNING: Subroutine does not return */
            Load_Thermal_Table_Offset();
          }
          if ((idk_9227 >> 3 & 1) != 0) {
code_r0x019b2e:
            sVar10 = -0x6dde;
            FUN_RAM_0199f8(DAT_RAM_009222);
            FUN_RAM_01a29d();
            FUN_RAM_01a22c();
            FUN_RAM_01a272();
            *(undefined *)(uint3)(ushort)(sVar10 + 1) = 0;
                    /* WARNING: Subroutine does not return */
            Load_Thermal_Table_Offset();
          }
          if ((idk_9227 >> 4 & 1) != 1) {
            return CONCAT11(uVar2,bVar6);
          }
          FUN_RAM_0199f8(DAT_RAM_009225);
          TACH_Switch = DAT_RAM_00922a & 0xfe;
          bVar4 = bVar4 & 0xdd;
          idk_9227 = 0;
          cVar8 = DAT_RAM_009224;
          FUN_RAM_015ea4();
          if (extraout_R6_18 != 2) goto code_r0x019b2e;
          *(byte *)(in_R0 + 0x7f0000) =
               (*(char *)(uint3)in_R0 + '\x01') -
               (param_3 -
               ((char)(((byte)(extraout_R7_52 >> 1 | extraout_R7_52 << 7) <
                       (byte)(param_3 - ((char)((extraout_R6_18 < 2) << 7) >> 7))) << 7) >> 7));
          cVar5 = read_volatile_1(DAT_SFR_9c);
          write_volatile_1(DAT_SFR_9c,cVar5 + '\x01');
          *(char *)(in_R0 + 0x7f0000) = *(char *)(in_R0 + 0x7f0000) + '\x01';
          *(char *)(in_R1 + 0x7f0000) = *(char *)(in_R1 + 0x7f0000) + '\x01';
          nop();
          BANK1_R2 = param_2;
          func_0x01a249(cVar8 - (param_3 - ((char)bVar4 >> 7)));
          FUN_RAM_011f11(0x80);
          if (extraout_R7_53 != '\0') {
            if (extraout_R7_53 == '\0') {
              idk_9227 = idk_9227 | 0x40;
            }
            else {
              idk_9227 = idk_9227 | 0x80;
            }
          }
          FUN_RAM_019a32(DAT_RAM_009225);
          DAT_RAM_00068b = REG_PM4STS._0_1_;
          bVar3 = extraout_R6_19;
          bVar6 = extraout_R7_54;
          if (((REG_PM4STS._0_1_ & 1) == 1) || ((LAB_RAM_00922b & 1) == 0)) goto LAB_RAM_019d19;
          REG_PM4STS._1_1_ = idk_9227;
          uVar9 = 0x922b;
          bVar7 = LAB_RAM_00922b & 0xfe;
        }
        *(byte *)(uint3)uVar9 = bVar7;
LAB_RAM_019d19:
        return CONCAT11(bVar3,bVar6);
      }
      func_0x01a85a(LAB_RAM_0090fc);
      FUN_RAM_01a756();
      FUN_RAM_01a947();
      FUN_RAM_01955a();
      FUN_RAM_01a7db();
      func_0x01a77a();
      cVar8 = (Fan_Lvl_GPU_B71 < extraout_R7_22) << 7;
      cVar5 = cVar8 < '\0';
      Calc_696 = cVar5;
      FUN_RAM_01a7f0();
      FUN_RAM_01a61f();
      bVar4 = cVar5 + (extraout_R6_06 - (cVar8 >> 7));
      FUN_RAM_01a9c4();
      cVar8 = (bVar4 < extraout_R7_23) << 7;
      if (cVar8 < '\0') {
        if ((Fan_Mode_406 != 0) && (bVar4 = Fan_Mode_406 ^ 2, bVar4 != 0)) {
          FUN_RAM_01a619();
          bVar4 = bVar4 + (in_B - (cVar8 >> 7));
          FUN_RAM_01a9c4();
          if ((char)((bVar4 < (byte)(extraout_R7_27 + 1U)) << 7) < '\0') {
            cVar8 = '\0';
            bVar4 = idk_717;
            func_0x01a8b1();
            uVar9 = 0x696;
            Calc_696 = bVar4;
            while (FUN_RAM_01a64d(), cVar8 < '\0') {
              thunk_FUN_RAM_014002();
              uVar9 = 7;
              thunk_FUN_RAM_01ae2f();
              cVar8 = (bVar4 < (byte)(extraout_R7_28 + 1U)) << 7;
              bVar4 = bVar4 - (extraout_R7_28 + 1U);
              if (cVar8 < '\0') break;
              func_0x01a677();
            }
            FUN_RAM_01a783();
            if (-1 < cVar8) {
              *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
            }
            goto LAB_CALC_FAN_TARGET;
          }
        }
        Fan_Lvl_SYS = 0;
        idk_717 = 0;
      }
      else {
        uVar9 = 0x70d;
        bVar4 = (Fan_Lvl_SYS < (byte)-(cVar8 >> 7)) << 7;
        bVar6 = Fan_Lvl_SYS + (cVar8 >> 7);
        if ((char)bVar4 < '\0') {
          Fan_Lvl_SYS = Fan_Lvl_SYS + 1;
          uVar2 = extraout_R6_07;
          bVar6 = extraout_R7_23;
          if ((Fan_Lvl_SYS & 1) != 1) goto LAB_DIAG_CHECK;
          goto LAB_FAN_TABLE_LOADER;
        }
        func_0x01a8b1();
        uVar9 = 0x696;
        Calc_696 = bVar6;
        while (FUN_RAM_01a64d(), (char)bVar4 < '\0') {
          thunk_FUN_RAM_014002();
          FUN_RAM_01a84d();
          bVar4 = (bVar6 < extraout_R7_24) << 7;
          bVar6 = bVar6 - extraout_R7_24;
          if ((char)bVar4 < '\0') break;
          func_0x01a677();
        }
        func_0x01a867();
        if (-1 < (char)bVar4) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        uVar9 = 0x696;
        bVar4 = Calc_696;
        func_0x01a5fc();
        FUN_RAM_01a84d();
        cVar8 = (bVar4 < extraout_R7_25) << 7;
        if ((cVar8 < '\0') && (FUN_RAM_01a9bd(), -1 < cVar8)) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
          *(byte *)(uint3)uVar9 = *(byte *)(uint3)uVar9 & 0xfc;
          return CONCAT11(extraout_R6_08,extraout_R7_26);
        }
LAB_CALC_FAN_TARGET:
        Fan_Lvl_GPU_B71 = Calc_696;
      }
      if (((GPU_MUX_Flag_30e >> 6 & 1) != 0) && (Fan_Mode_406 == 2)) {
        Current_GPU_Fan_Lvl = 0;
        Fan_Lvl_GPU_B71 = 0;
      }
      if (((DAT_RAM_003281 >> 1 & 1) == 0) || ((System_Plugged_IN?._0_1_ & 1) == 1)) {
        Calc_697 = Current_CPU_Fan_Lvl;
        if (-1 < (char)((Current_CPU_Fan_Lvl < Fan_Lvl_CPU_B70) << 7)) {
          Calc_697 = Fan_Lvl_CPU_B70;
        }
      }
      else {
        Calc_697 = Fan_Lvl_CPU_B70;
      }
      Calc_698 = Current_GPU_Fan_Lvl;
      if (-1 < (char)((Current_GPU_Fan_Lvl < Fan_Lvl_GPU_B71) << 7)) {
        Calc_698 = Fan_Lvl_GPU_B71;
      }
      Final_Decided_Fan_Level = Calc_697;
      if ((char)((Calc_697 < (byte)(Calc_698 + 1)) << 7) < '\0') {
        Final_Decided_Fan_Level = Calc_698;
      }
      cVar8 = (Final_Decided_Fan_Level < 2) << 7;
      bVar4 = Final_Decided_Fan_Level - 2;
      if (((-1 < cVar8) && (bVar4 = Flag_Fan_Related_3A0, (Flag_Fan_Related_3A0 >> 1 & 1) != 0))  &&
         (bVar4 = GPU_MUX_Flag_359, (GPU_MUX_Flag_359 >> 2 & 1) != 1)) {
        bVar4 = 1;
        Final_Decided_Fan_Level = 1;
      }
      FUN_RAM_01a616();
      func_0x01a9ce();
      FUN_RAM_01a60f();
      func_0x01a9ce();
      FUN_RAM_01a60f();
      bVar4 = bVar4 + (in_B - (cVar8 >> 7));
      FUN_RAM_015c06();
      Fan_SYS_Target_RPM_LO = in_B;
      Fan_SYS_Target_RPM_HI = bVar4;
      if ((Manual_Mode_Toggle >> 2 & 1) != 1) {
        bVar6 = extraout_R6_09;
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
                              return CONCAT11(extraout_R6_09,bVar4);
                            }
                            if ((DAT_RAM_009596 >> 5 & 1) == 0) {
                              uVar9 = 0x9597;
                              if ((DAT_RAM_009597 >> 5 & 1) != 0) {
                                FUN_RAM_01a2db();
                                *(undefined *)(uint3)uVar9 = 0x23;
                                FUN_RAM_019d54();
                                bVar6 = extraout_R6_35;
                                bVar4 = extraout_R7_70;
                                if (extraout_R7_70 != 0) {
                                  FUN_RAM_01a2b7();
                                  thunk_FUN_RAM_015f03();
                                  func_0x015e15(DAT_RAM_0092af,0);
                                  return CONCAT11(extraout_R6_36,extraout_R7_71);
                                }
                              }
                            }
                            else {
                              FUN_RAM_01a283();
                              FUN_RAM_01a1ef();
                              FUN_RAM_0116e3();
                              bVar6 = extraout_R6_34;
                              bVar4 = extraout_R7_69;
                              if (extraout_R7_69 != 0) {
                                DAT_RAM_009500 = DAT_RAM_009500 & 0xdf;
                                DAT_RAM_009596 = DAT_RAM_009596 & 0xdf;
                                bVar4 = extraout_R6_34;
                                bVar6 = extraout_R7_69;
                                goto LAB_RAM_019fb2;
                              }
                            }
                            return CONCAT11(bVar6,bVar4);
                          }
                          FUN_RAM_01a2db();
                          *(undefined *)(uint3)uVar9 = 0x70;
                          FUN_RAM_019d54();
                          bVar6 = extraout_R6_32;
                          bVar4 = extraout_R7_67;
                          if (extraout_R7_67 != 0) {
                            FUN_RAM_01a2b7();
                            thunk_FUN_RAM_015f03();
                            DAT_RAM_009500 = DAT_RAM_009500 & 0xef;
                            DAT_RAM_009596 = DAT_RAM_009596 & 0xef;
                            DAT_RAM_009597 = DAT_RAM_009597 | 0x10;
                            DAT_RAM_009598 = 0;
                            return CONCAT11(extraout_R6_33,extraout_R7_68);
                          }
                        }
                        else {
                          bVar3 = DAT_RAM_009597;
                          FUN_RAM_01a01c();
                          bVar6 = extraout_R6_30;
                          bVar4 = extraout_R7_65;
                          if (bVar3 != 0) {
                            FUN_RAM_01a2b7();
                            thunk_FUN_RAM_015f03();
                            DAT_RAM_009501 = DAT_RAM_009501 | 8;
                            DAT_RAM_009597 = DAT_RAM_009597 & 0xf7;
                            return CONCAT11(extraout_R6_31,extraout_R7_66);
                          }
                        }
                      }
                      else {
                        FUN_RAM_01a283();
                        FUN_RAM_01a1ef();
                        FUN_RAM_0116e3();
                        bVar6 = extraout_R6_29;
                        bVar4 = extraout_R7_64;
                        if (extraout_R7_64 != 0) {
                          DAT_RAM_009500 = DAT_RAM_009500 & 0xf7;
                          DAT_RAM_009596 = DAT_RAM_009596 & 0xf7;
                          DAT_RAM_009597 = DAT_RAM_009597 | 8;
                          bVar4 = extraout_R6_29;
                          bVar6 = extraout_R7_64;
                          goto LAB_RAM_019fb2;
                        }
                      }
                    }
                    else {
                      bVar3 = DAT_RAM_009597;
                      FUN_RAM_01a01c();
                      bVar6 = extraout_R6_27;
                      bVar4 = extraout_R7_62;
                      if (bVar3 != 0) {
                        FUN_RAM_01a2b7();
                        thunk_FUN_RAM_015f03();
                        DAT_RAM_009501 = DAT_RAM_009501 | 4;
                        DAT_RAM_009597 = DAT_RAM_009597 & 0xfb;
                        return CONCAT11(extraout_R6_28,extraout_R7_63);
                      }
                    }
                  }
                  else {
                    FUN_RAM_01a283();
                    FUN_RAM_01a1ef();
                    FUN_RAM_0116e3();
                    bVar6 = extraout_R6_26;
                    bVar4 = extraout_R7_61;
                    if (extraout_R7_61 != 0) {
                      DAT_RAM_009500 = DAT_RAM_009500 & 0xfb;
                      DAT_RAM_009596 = DAT_RAM_009596 & 0xfb;
                      DAT_RAM_009597 = DAT_RAM_009597 | 4;
                      bVar4 = extraout_R6_26;
                      bVar6 = extraout_R7_61;
                      goto LAB_RAM_019fb2;
                    }
                  }
                }
                else {
                  bVar3 = DAT_RAM_009597;
                    /* WARNING: Call to offcut address within same function */
                  func_0x01a00b();
                  bVar6 = extraout_R6_24;
                  bVar4 = extraout_R7_59;
                  if (bVar3 != 0) {
                    DAT_RAM_009594 = DAT_RAM_00959d;
                    FUN_RAM_01a237();
                    DAT_RAM_009501 = DAT_RAM_009501 | 2;
                    DAT_RAM_009597 = DAT_RAM_009597 & 0xfd;
                    return CONCAT11(extraout_R6_25,extraout_R7_60);
                  }
                }
              }
              else {
                FUN_RAM_01a283();
                FUN_RAM_01a1ec();
                FUN_RAM_0116e3();
                bVar6 = extraout_R6_23;
                bVar4 = extraout_R7_58;
                if (extraout_R7_58 != 0) {
                  DAT_RAM_009500 = DAT_RAM_009500 & 0xfd;
                  DAT_RAM_009596 = DAT_RAM_009596 & 0xfd;
                  DAT_RAM_009597 = DAT_RAM_009597 | 2;
                  bVar4 = extraout_R6_23;
                  bVar6 = extraout_R7_58;
                  goto LAB_RAM_019fb2;
                }
              }
            }
            else {
              bVar3 = DAT_RAM_009597;
                    /* WARNING: Call to offcut address within same function */
              func_0x01a00b();
              bVar6 = extraout_R6_21;
              bVar4 = extraout_R7_56;
              if (bVar3 != 0) {
                DAT_RAM_009595 = DAT_RAM_00959d;
                FUN_RAM_01a237();
                DAT_RAM_009501 = DAT_RAM_009501 | 1;
                DAT_RAM_009597 = DAT_RAM_009597 & 0xfe;
                return CONCAT11(extraout_R6_22,extraout_R7_57);
              }
            }
          }
          else {
            FUN_RAM_01a283();
            FUN_RAM_01a1ec();
            FUN_RAM_0116e3();
            bVar6 = extraout_R6_20;
            bVar4 = extraout_R7_55;
            if (extraout_R7_55 != 0) {
              DAT_RAM_009500 = DAT_RAM_009500 & 0xfe;
              DAT_RAM_009596 = DAT_RAM_009596 & 0xfe;
              DAT_RAM_009597 = DAT_RAM_009597 | 1;
              bVar4 = extraout_R6_20;
              bVar6 = extraout_R7_55;
LAB_RAM_019fb2:
              DAT_RAM_009597 = DAT_RAM_009597 | 0x20;
              DAT_RAM_009598 = 0x19;
              return CONCAT11(bVar4,bVar6);
            }
          }
        }
        if ((in_B & 1) != 1) {
          DAT_RAM_00959e = 0x16;
          DAT_RAM_00959f = 0x23;
          FUN_RAM_019d54();
          return CONCAT11(extraout_R6_37,extraout_R7_72);
        }
        if (((char)((bVar4 < 0x10) << 7) < '\0') || (-1 < (char)((bVar4 < 0x1b) << 7))) {
          if (((char)((bVar4 < 0x20) << 7) < '\0') || (-1 < (char)((bVar4 < 0x28) << 7))) {
            if (((char)((bVar4 < 0x5c) << 7) < '\0') || (-1 < (char)((bVar4 < 0x60) << 7))) {
              if (((char)((bVar4 < 0x60) << 7) < '\0') || (-1 < (char)((bVar4 < 0x80) << 7))) {
                if (((char)((bVar4 < 0x80) << 7) < '\0') || (-1 < (char)((bVar4 < 0xa0) << 7))) {
                  if (((char)((bVar4 < 0xa0) << 7) < '\0') || (-1 < (char)((bVar4 < 0xc0) << 7)))  {
                    if (((char)((bVar4 < 0xc0) << 7) < '\0') || (-1 < (char)((bVar4 < 0xe0) << 7) ))
                    {
                      return (ushort)bVar6 << 8;
                    }
                    cVar5 = bVar4 + 0x90;
                    cVar8 = -0x6c - ((char)((0x6f < bVar4) << 7) >> 7);
                  }
                  else {
                    cVar5 = bVar4 + 0x90;
                    cVar8 = -0x6c - ((char)((0x6f < bVar4) << 7) >> 7);
                  }
                }
                else {
                  cVar5 = bVar4 + 0x90;
                  cVar8 = -0x6c - ((char)((0x6f < bVar4) << 7) >> 7);
                }
              }
              else {
                cVar5 = bVar4 + 0x50;
                cVar8 = -0x6e - ((char)((0xaf < bVar4) << 7) >> 7);
              }
            }
            else {
              cVar5 = bVar4 + 0x50;
              cVar8 = -0x6e - ((char)((0xaf < bVar4) << 7) >> 7);
            }
            goto LAB_RAM_01a0df;
          }
          bVar1 = 0x4f < bVar4;
          cVar5 = bVar4 + 0xb0;
        }
        else {
          bVar1 = 0x1e < bVar4;
          cVar5 = bVar4 - 0x1f;
        }
        cVar8 = -0x69 - ((char)(bVar1 << 7) >> 7);
LAB_RAM_01a0df:
        return CONCAT11(bVar6,*(undefined *)(uint3)CONCAT11(cVar8,cVar5));
      }
                    /* WARNING: Call to offcut address within same function */
      func_0x019f26();
      func_0x01a9d4();
      Calc_696 = (char)((Fan_Step_CPU_ManualMode < extraout_R7_29) << 7) < '\0';
      bVar4 = 0x91 - ((char)((0x50 < (byte)(Fan_Step_CPU_ManualMode + Calc_696)) << 7) >> 7);
      thunk_FUN_RAM_01ae2f();
      if ((char)((bVar4 < extraout_R7_30) << 7) < '\0') {
        cVar8 = '\0';
        FUN_RAM_01a95f();
        if (cVar8 < '\0') {
          bVar4 = 0;
          uVar9 = 0x696;
          Calc_696 = 0;
          while( true ) {
            FUN_RAM_01a6e5();
            cVar8 = (bVar4 < extraout_R7_33) << 7;
            if (-1 < cVar8) break;
            uVar9 = uVar9 & 0xff00 | (ushort)(byte)(bVar4 + 0xb8);
            bVar4 = 0x91 - ((char)((0x47 < bVar4) << 7) >> 7);
            thunk_FUN_RAM_01ae2f();
            cVar8 = (bVar4 < (byte)(extraout_R7_34 + 1U)) << 7;
            bVar4 = bVar4 - (extraout_R7_34 + 1U);
            if (cVar8 < '\0') break;
            func_0x01a677();
          }
          FUN_RAM_01a783();
          if (-1 < cVar8) {
            *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
          }
          goto LAB_RAM_011bd9;
        }
      }
      else {
        bVar4 = 0;
        uVar9 = 0x696;
        Calc_696 = 0;
        while( true ) {
          FUN_RAM_01a6e5();
          cVar8 = (bVar4 < extraout_R7_31) << 7;
          if (-1 < cVar8) break;
          cVar8 = (0x50 < bVar4) << 7;
          bVar4 = bVar4 + 0xaf;
          FUN_RAM_01a746();
          if (cVar8 < '\0') break;
          func_0x01a677();
        }
        FUN_RAM_01a939();
        if (-1 < cVar8) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        cVar8 = (0x50 < Calc_696) << 7;
        FUN_RAM_01a746(Calc_696);
        if ((cVar8 < '\0') && (-1 < (char)((extraout_R7_32 < (byte)-(cVar8 >> 7)) << 7))) {
          func_0x01a940();
        }
LAB_RAM_011bd9:
        Fan_Step_CPU_ManualMode = Calc_696;
      }
      func_0x01a9d4();
      Calc_696 = (char)((Fan_Lvl_GPU_ManualMode < extraout_R7_35) << 7) < '\0';
      bVar4 = Fan_Lvl_GPU_ManualMode + Calc_696;
      thunk_FUN_RAM_01f090();
      if ((char)((Calc_690 < bVar4) << 7) < '\0') {
        cVar8 = '\0';
        FUN_RAM_01a95f();
        if (cVar8 < '\0') {
          bVar4 = 0;
          uVar9 = 0x696;
          Calc_696 = 0;
          while( true ) {
            FUN_RAM_01a6e5();
            cVar8 = (bVar4 < extraout_R7_38) << 7;
            if (-1 < cVar8) break;
            uVar9 = 0x690;
            bVar4 = *(char *)(uint3)CONCAT11(-0x6f - ((char)((0x35 < bVar4) << 7) >> 7),bVar4 - 0 x36
                                            ) + 1;
            cVar8 = (Calc_690 < bVar4) << 7;
            bVar4 = Calc_690 - bVar4;
            if (cVar8 < '\0') break;
            func_0x01a677();
          }
          FUN_RAM_01a783();
          if (-1 < cVar8) {
            *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
          }
          goto LAB_RAM_011c8b;
        }
      }
      else {
        bVar4 = 0;
        uVar9 = 0x696;
        Calc_696 = 0;
        while( true ) {
          FUN_RAM_01a6e5();
          cVar8 = (bVar4 < extraout_R7_36) << 7;
          if (-1 < cVar8) break;
          bVar4 = bVar4 - 0x3f;
          func_0x01a873();
          uVar9 = 0x690;
          cVar8 = (Calc_690 < bVar4) << 7;
          bVar4 = Calc_690 - bVar4;
          if (cVar8 < '\0') break;
          func_0x01a677();
        }
        FUN_RAM_01a939();
        if (-1 < cVar8) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        bVar4 = Calc_696;
        thunk_FUN_RAM_01f090(Calc_696);
        cVar8 = (Calc_690 < bVar4) << 7;
        if ((cVar8 < '\0') && (-1 < (char)((extraout_R7_37 < (byte)-(cVar8 >> 7)) << 7))) {
          func_0x01a940();
        }
LAB_RAM_011c8b:
        Fan_Lvl_GPU_ManualMode = Calc_696;
      }
      func_0x01a9d4();
      Calc_696 = (char)((LAB_RAM_000b5e < extraout_R7_39) << 7) < '\0';
      bVar4 = 0x91 - ((char)((0x2c < (byte)(LAB_RAM_000b5e + Calc_696)) << 7) >> 7);
      thunk_FUN_RAM_01ae2f();
      if ((char)((bVar4 < extraout_R7_40) << 7) < '\0') {
        cVar8 = '\0';
        FUN_RAM_01a95f();
        uVar2 = extraout_R6_12;
        bVar4 = extraout_R7_44;
        if (-1 < cVar8) goto LAB_RAM_011d40;
        bVar4 = 0;
        uVar9 = 0x696;
        Calc_696 = 0;
        while( true ) {
          FUN_RAM_01a6e5();
          cVar8 = (bVar4 < extraout_R7_45) << 7;
          if (-1 < cVar8) break;
          uVar9 = uVar9 & 0xff00 | (ushort)(byte)(bVar4 - 0x24);
          bVar4 = 0x91 - ((char)((0x23 < bVar4) << 7) >> 7);
          thunk_FUN_RAM_01ae2f();
          cVar8 = (bVar4 < (byte)(extraout_R7_46 + 1U)) << 7;
          bVar4 = bVar4 - (extraout_R7_46 + 1U);
          if (cVar8 < '\0') break;
          func_0x01a677();
        }
        FUN_RAM_01a783();
        uVar2 = extraout_R6_13;
        bVar4 = extraout_R7_47;
        if (-1 < cVar8) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
      }
      else {
        bVar4 = 0;
        uVar9 = 0x696;
        Calc_696 = 0;
        while( true ) {
          FUN_RAM_01a6e5();
          cVar8 = (bVar4 < extraout_R7_41) << 7;
          if (-1 < cVar8) break;
          uVar9 = uVar9 & 0xff00 | (ushort)(byte)(bVar4 - 0x2d);
          bVar4 = 0x91 - ((char)((0x2c < bVar4) << 7) >> 7);
          cVar8 = '\0';
          FUN_RAM_01a74b();
          if (cVar8 < '\0') break;
          func_0x01a677();
        }
        FUN_RAM_01a939();
        if (-1 < cVar8) {
          *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
        }
        cVar8 = '\0';
        FUN_RAM_01a74b(Calc_696);
        uVar2 = extraout_R6_10;
        bVar4 = extraout_R7_42;
        if ((cVar8 < '\0') && (-1 < (char)((extraout_R7_42 < (byte)-(cVar8 >> 7)) << 7))) {
          func_0x01a940();
          uVar2 = extraout_R6_11;
          bVar4 = extraout_R7_43;
        }
      }
      LAB_RAM_000b5e = Calc_696;
LAB_RAM_011d40:
      if ((GPU_MUX_Flag_359 >> 2 & 1) == 1) {
        thunk_FUN_RAM_01ae19();
        return CONCAT11(uVar2,bVar4);
      }
      thunk_FUN_RAM_01ae19();
      return CONCAT11(uVar2,bVar4);
    }
    uVar9 = 0x70c;
    cVar8 = cVar8 >> 7;
    cVar5 = (70c < (byte)-cVar8) << 7;
    bVar4 = 70c + cVar8;
    if (-1 < cVar5) {
      func_0x01a89d();
      uVar9 = 0x696;
      Calc_696 = bVar4;
      while (FUN_RAM_01a64d(), cVar5 < '\0') {
        thunk_FUN_RAM_014002();
        thunk_FUN_RAM_01ae2f();
        cVar5 = (bVar4 < extraout_R7_09) << 7;
        bVar4 = bVar4 - extraout_R7_09;
        if (cVar5 < '\0') break;
        func_0x01a677();
      }
      func_0x01a867();
      if (-1 < cVar5) {
        *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
      }
      uVar9 = 0x696;
      bVar4 = Calc_696;
      func_0x01a5fc();
      thunk_FUN_RAM_01ae2f();
      cVar8 = (bVar4 < extraout_R7_10) << 7;
      uVar2 = extraout_R6;
      bVar4 = extraout_R7_10;
      if ((cVar8 < '\0') &&
         (FUN_RAM_01a9bd(), uVar2 = extraout_R6_00, bVar4 = extraout_R7_11, -1 < cVar8)) {
        *(char *)(uint3)uVar9 = *(char *)(uint3)uVar9 + -1;
      }
      return CONCAT11(uVar2,bVar4);
    }
    70c = 70c + 1;
    cVar8 = in_R1 - (cVar5 >> 7);
    bVar4 = 0x2a;
    bVar6 = (param_2 - ((char)((cVar8 != '\0') << 7) >> 7)) - cVar8;
  }
  FUN_RAM_019912(bVar4);
  if (bVar6 != 0) {
    DAT_RAM_0094e7 = DAT_RAM_0094e7 | 8;
    return CONCAT11(extraout_R6_15,extraout_R7_49);
  }
LAB_RAM_0198c8:
  *(undefined *)(uint3)uVar9 = *(undefined *)(in_R1 + 0x7f0000);
  FUN_RAM_015baf();
  return CONCAT11(extraout_R6_16,extraout_R7_50);
}


/* WARNING: Inlined function: thunk_FUN_RAM_01ade4 */
/* WARNING: Removing unreachable block (RAM,0x012195) */
/* WARNING: Removing unreachable block (RAM,0x01a4b1) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void Load_Thermal_Table_Offset(void)

{
  char in_R3;
  char extraout_R6;
  byte extraout_R6_00;
  undefined extraout_R6_01;
  undefined extraout_R6_02;
  undefined extraout_R7;
  undefined extraout_R7_00;
  undefined extraout_R7_01;
  undefined extraout_R7_02;
  undefined extraout_R7_03;
  undefined extraout_R7_04;
  char extraout_R7_05;
  undefined extraout_R7_06;
  undefined extraout_R7_07;
  undefined extraout_R7_08;
  undefined extraout_R7_09;
  byte extraout_R7_10;
  byte extraout_R7_11;
  undefined extraout_R7_12;
  byte extraout_R7_13;
  byte extraout_R7_14;
  undefined extraout_R7_15;
  byte extraout_R7_16;
  byte extraout_R7_17;
  undefined extraout_R7_18;
  char cVar1;
  byte bVar2;
  undefined uVar3;
  ushort uVar4;
  
  FUN_RAM_01a508(in_R3 + '\x01');
  CBD3 = extraout_R7;
  Read_Table_Data_By_Index(0,0);
  CBD4 = extraout_R7_00;
  Read_Table_Data_By_Index(0,0x1c);
  CBD5 = extraout_R7_01;
  Read_Table_Data_By_Index(0,0xe4);
  CBD6 = extraout_R7_02;
  Read_Table_Data_By_Index(0,0xd8);
  CBD7 = extraout_R7_03;
  Read_Table_Data_By_Index(0,0x5c);
  FUN_RAM_01a4f2();
  FUN_RAM_01a4f2();
  FUN_RAM_01a512();
  FUN_RAM_01a512();
  GBD4 = extraout_R7_04;
  Read_Table_Data_By_Index(1,0x48);
  cVar1 = extraout_R7_05;
  GBD5 = extraout_R7_05;
  Read_Table_Data_By_Index(1,0x10);
  func_0x01a528();
  func_0x01a528();
  func_0x01a540(extraout_R6 - ((char)((0xfb < (byte)(cVar1 + 9U)) << 7) >> 7));
  func_0x01a540();
  SBD4 = extraout_R7_06;
  Read_Table_Data_By_Index(2,0x3c);
  SBD5 = extraout_R7_07;
  Read_Table_Data_By_Index(2,0x18);
  FUN_RAM_01a534();
  FUN_RAM_01a534();
  SBD6 = extraout_R7_08;
  func_0x015e8f(0xff);
  DAT_RAM_000694 = '\t';
  func_0x015e8f();
  DAT_RAM_000695 = 8;
  func_0x015e8f();
  Current_Calculation_Constant = 9;
  GPU_Final_Target_Level = 0;
  bVar2 = 0;
  if ((char)((DAT_RAM_000694 != '\x01') << 7) < '\0') {
    FUN_RAM_01a5ff();
    FUN_RAM_01a634();
    bVar2 = 0xb - ((char)((0x5f < bVar2) << 7) >> 7);
    FUN_RAM_01a4db();
    bVar2 = 0xb - ((char)((0x57 < bVar2) << 7) >> 7);
    FUN_RAM_01a66c();
    FUN_RAM_01a604();
    FUN_RAM_01a637();
    bVar2 = 0xb - ((char)((0x4f < bVar2) << 7) >> 7);
                    /* WARNING: Call to offcut address within same function */
    func_0x01a4ad();
    bVar2 = 0xb - ((char)((0x47 < bVar2) << 7) >> 7);
    FUN_RAM_01a66c();
    FUN_RAM_01a604();
    FUN_RAM_01a634();
    bVar2 = 5 - ((char)((0x7f < bVar2) << 7) >> 7);
                    /* WARNING: Call to offcut address within same function */
    func_0x01a4c4();
    *(undefined *)(uint3)CONCAT11('\x05' - ((char)((0x77 < bVar2) << 7) >> 7),bVar2 + 0x88) =
         extraout_R7_09;
    DAT_RAM_00959f = 0;
    return;
  }
  FUN_RAM_01a62a();
  FUN_RAM_01a62a();
  FUN_RAM_01a62a();
  FUN_RAM_01a62a();
  bVar2 = 5 - ((char)((0x7f < extraout_R7_10) << 7) >> 7);
  FUN_RAM_01a62a();
  bVar2 = *(byte *)(uint3)CONCAT11('\x05' - ((char)((0x78 < bVar2) << 7) >> 7),bVar2 + 0x87);
  cVar1 = '\0';
  *(byte *)(uint3)CONCAT11('\x05' - ((char)((0x77 < extraout_R7_11) << 7) >> 7),
                           extraout_R7_11 + 0x88) = bVar2;
  FUN_RAM_01a97d();
  if (-1 < cVar1) {
    FUN_RAM_01a62a();
    FUN_RAM_01a62a();
    FUN_RAM_01a62a();
    FUN_RAM_01a62a();
    bVar2 = 5 - ((char)((0x6f < extraout_R7_13) << 7) >> 7);
    FUN_RAM_01a62a();
    bVar2 = *(byte *)(uint3)CONCAT11('\x05' - ((char)((0x68 < bVar2) << 7) >> 7),bVar2 + 0x97);
    cVar1 = '\0';
    *(byte *)(uint3)CONCAT11('\x05' - ((char)((0x67 < extraout_R7_14) << 7) >> 7),
                             extraout_R7_14 + 0x98) = bVar2;
    uVar4 = 0x696;
    FUN_RAM_01a97d();
    if (-1 < cVar1) {
      FUN_RAM_01ae86();
      *(undefined *)(uint3)uVar4 = extraout_R6_02;
      return;
    }
    FUN_RAM_01a670();
    FUN_RAM_01a604();
    FUN_RAM_01a634();
    *(undefined *)(uint3)CONCAT11('\v' - ((char)((0x1f < bVar2) << 7) >> 7),bVar2 - 0x20) =
         extraout_R7_15;
    uVar3 = extraout_R7_15;
    FUN_RAM_015c06();
    Read_Table_Data_By_Index(0,uVar3);
    bVar2 = 0xb - ((char)((0x17 < GPU_Final_Target_Level) << 7) >> 7);
    FUN_RAM_01a66c();
    FUN_RAM_01a604();
    FUN_RAM_01a637();
    *(byte *)(uint3)CONCAT11('\v' - ((char)((0xf < bVar2) << 7) >> 7),bVar2 - 0x10) = extraout_R7 _16
    ;
    bVar2 = extraout_R7_16;
    FUN_RAM_015c06();
    func_0x01a51d(1);
    bVar2 = 0xb - ((char)((7 < bVar2) << 7) >> 7);
    FUN_RAM_01a66c();
    FUN_RAM_01a604();
    FUN_RAM_01a634();
    *(byte *)(uint3)CONCAT11('\x05' - ((char)((0x5f < bVar2) << 7) >> 7),bVar2 + 0xa0) =
         extraout_R7_17;
    bVar2 = extraout_R7_17;
    FUN_RAM_015c06();
    func_0x01a51d(2);
    uVar4 = CONCAT11('\x05' - ((char)((0x57 < bVar2) << 7) >> 7),bVar2 + 0xa8);
    *(undefined *)(uint3)uVar4 = extraout_R7_18;
    FUN_RAM_01b510(0,extraout_R7_18);
    func_0x01addb();
    if (*(char *)(uint3)uVar4 == '\0') {
      cVar1 = DAT_RAM_00068c;
      if (DAT_RAM_00068c != '\0') {
        if (DAT_RAM_00068c != '\x01') {
          return;
        }
        cVar1 = '\x01';
      }
      func_0x01b647(cVar1);
    }
    return;
  }
  FUN_RAM_01a670();
  FUN_RAM_01a604();
  FUN_RAM_01a634();
  bVar2 = 0xb - ((char)((0x3f < bVar2) << 7) >> 7);
  FUN_RAM_01a4db();
  bVar2 = 0xb - ((char)((0x37 < bVar2) << 7) >> 7);
  FUN_RAM_01a66c();
  FUN_RAM_01a604();
  FUN_RAM_01a637();
  bVar2 = 0xb - ((char)((0x2f < bVar2) << 7) >> 7);
                    /* WARNING: Call to offcut address within same function */
  func_0x01a4ad();
  bVar2 = 0xb - ((char)((0x27 < bVar2) << 7) >> 7);
  FUN_RAM_01a66c();
  FUN_RAM_01a604();
  FUN_RAM_01a634();
  bVar2 = 5 - ((char)((0x6f < bVar2) << 7) >> 7);
                    /* WARNING: Call to offcut address within same function */
  func_0x01a4c4();
  *(undefined *)(uint3)CONCAT11('\x05' - ((char)((0x67 < bVar2) << 7) >> 7),bVar2 + 0x98) =
       extraout_R7_12;
  FUN_RAM_01ae5c();
  FUN_RAM_01af07();
  FUN_RAM_01adcb();
  bVar2 = extraout_R6_00;
  FUN_RAM_01ae5c();
  bVar2 = 0x54 - ((char)((0x42 < bVar2) << 7) >> 7);
  FUN_RAM_01af22();
  *(undefined *)(uint3)CONCAT11('\b' - ((char)((0xbd < bVar2) << 7) >> 7),bVar2 + 0x42) =
       extraout_R6_01;
  return;
}


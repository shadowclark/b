void FUN_03f66e4c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;

  if (0x4000000 < param_2) {
    if (param_3 != 0) {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + -0x28);
      uVar8 = *puVar6;
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + -0x18);
      *(undefined8 **)(param_1 + 0x38) = puVar6;
      *(undefined8 *)(param_1 + 0x40) = uVar10;
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f66e08(param_1,4);
  }
  if (param_2 < -5) {
                    /* WARNING: Subroutine does not return */
    FUN_03f6d648(param_1);
  }
  lVar13 = *(long *)(param_1 + 0x30);
  uVar1 = param_2 + 5;
  lVar3 = FUN_03f6dc48(param_1,lVar13,(long)*(int *)(param_1 + 8) << 4,(ulong)uVar1 << 4,
                       *(undefined1 *)(param_1 + 1));
  *(long *)(param_1 + 0x30) = lVar3;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)uVar1) {
    uVar4 = 0;
    lVar11 = (ulong)uVar1 - (long)iVar2;
    uVar12 = lVar11 - 1;
    puVar9 = (undefined4 *)(lVar3 + (long)iVar2 * 0x10 + 0x2c);
    do {
      if (uVar4 <= uVar12) {
        puVar9[-8] = 0;
      }
      if ((uVar4 | 1) <= uVar12) {
        puVar9[-4] = 0;
      }
      if ((uVar4 | 2) <= uVar12) {
        *puVar9 = 0;
      }
      if ((uVar4 | 3) <= uVar12) {
        puVar9[4] = 0;
      }
      uVar4 = uVar4 + 4;
      puVar9 = puVar9 + 0x10;
    } while ((lVar11 + 3U & 0xfffffffffffffffc) != uVar4);
  }
  *(uint *)(param_1 + 8) = uVar1;
  *(long *)(param_1 + 0x20) = lVar3 + (long)param_2 * 0x10;
  *(long *)(param_1 + 0x28) = lVar3 + (*(long *)(param_1 + 0x28) - lVar13);
  for (lVar11 = *(long *)(param_1 + 0x78); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x20)) {
    *(long *)(lVar11 + 8) = lVar3 + (*(long *)(lVar11 + 8) - lVar13);
  }
  plVar7 = *(long **)(param_1 + 0x38);
  for (plVar5 = *(long **)(param_1 + 0x60); plVar5 <= plVar7; plVar5 = plVar5 + 5) {
    *plVar5 = lVar3 + (*plVar5 - lVar13);
    plVar5[2] = lVar3 + (plVar5[2] - lVar13);
    plVar5[3] = lVar3 + (plVar5[3] - lVar13);
  }
  *(long *)(param_1 + 0x40) = lVar3 + (*(long *)(param_1 + 0x40) - lVar13);
  return;
}


void FUN_03f67454(long param_1,int param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;

  if (param_2 - 2U < 2) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + -0x10);
    param_3[1] = *(undefined8 *)(*(long *)(param_1 + 0x28) + -8);
    *param_3 = uVar2;
  }
  else {
    if (param_2 == 5) {
      pcVar1 = "error in error handling";
      uVar2 = 0x17;
    }
    else {
      if (param_2 != 4) goto LAB_03f674c8;
      pcVar1 = "not enough memory";
      uVar2 = 0x11;
    }
    uVar2 = FUN_03f6ff1c(param_1,pcVar1,uVar2);
    *param_3 = uVar2;
    *(undefined4 *)((long)param_3 + 0xc) = 6;
  }
LAB_03f674c8:
  *(undefined8 **)(param_1 + 0x28) = param_3 + 2;
  return;
}


void FUN_03f66e08(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;

  puVar1 = (undefined8 *)___cxa_allocate_exception(0x18);
  *puVar1 = &DAT_05dadd88;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = param_2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_05dadd60,std::exception::~exception);
}


long FUN_03f6d7e4(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;

  lVar7 = *(long *)(param_1 + 0x18);
  if (param_2 - 1U < 0x400) {
    lVar8 = (long)(char)(&DAT_063cbcc8)[param_2];
    if (-1 < lVar8) {
      lVar1 = lVar7 + 0x80;
      lVar4 = *(long *)(lVar1 + lVar8 * 8);
      if (lVar4 == 0) {
        lVar4 = FUN_03f6e01c(param_1,lVar1,lVar7 + 0x318,(&DAT_063cbcc8)[param_2],0);
      }
      uVar2 = *(uint *)(lVar4 + 0x30);
      if ((int)uVar2 < 0) {
        lVar6 = *(long *)(lVar4 + 0x28);
        lVar5 = *(long *)(lVar6 + 8);
        *(long *)(lVar4 + 0x28) = lVar5;
        *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
        if (lVar5 != 0) goto LAB_03f6d8b4;
      }
      else {
        lVar6 = lVar4 + (ulong)uVar2 + 0x40;
        iVar3 = uVar2 - *(int *)(lVar4 + 0x24);
        *(int *)(lVar4 + 0x30) = iVar3;
        *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
        if ((*(long *)(lVar4 + 0x28) != 0) || (-1 < iVar3)) goto LAB_03f6d8b4;
      }
      lVar5 = *(long *)(lVar4 + 0x18);
      *(long *)(lVar1 + lVar8 * 8) = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      *(undefined8 *)(lVar4 + 0x18) = 0;
      goto LAB_03f6d8b4;
    }
  }
  lVar8 = FUN_03f6d93c(param_1,lVar7 + 0x318,(int)param_2 + 0x40,param_2,1);
  lVar6 = lVar8 + 0x40;
  *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) - *(int *)(lVar8 + 0x24);
  *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + 1;
LAB_03f6d8b4:
  *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + param_2;
  lVar8 = lVar7 + (param_3 & 0xffffffff) * 8;
  *(long *)(&DAT_00002c00 + lVar8) = *(long *)(&DAT_00002c00 + lVar8) + param_2;
  if (*(code **)(lVar7 + 0x4d0) != (code *)0x0) {
    (**(code **)(lVar7 + 0x4d0))(param_1,0,param_2);
  }
  return lVar6;
}


long FUN_03f6d65c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;

  lVar3 = *(long *)(param_1 + 0x18);
  if (param_2 - 1U < 0x400) {
    if (-1 < (char)(&DAT_063cbcc8)[param_2]) {
      lVar2 = FUN_03f6d72c(param_1);
      goto LAB_03f6d6d0;
    }
  }
  lVar2 = (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),0,0,param_2);
  if ((param_2 != 0) && (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f66e08(param_1,4);
  }
LAB_03f6d6d0:
  *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + param_2;
  lVar1 = lVar3 + (param_3 & 0xffffffff) * 8;
  *(long *)(&DAT_00002c00 + lVar1) = *(long *)(&DAT_00002c00 + lVar1) + param_2;
  if (*(code **)(lVar3 + 0x4d0) != (code *)0x0) {
    (**(code **)(lVar3 + 0x4d0))(param_1,0,param_2);
  }
  return lVar2;
}


void FUN_03f6d648(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"memory allocation error: block too big");
}


void FUN_03f67e24(long param_1)

{
  undefined1 *puVar1;

  puVar1 = (undefined1 *)FUN_03f6d7e4(param_1,0xb0,*(undefined1 *)(param_1 + 4));
  puVar1[2] = *(byte *)(*(long *)(param_1 + 0x18) + 0x54) & 3;
  *puVar1 = 0xc;
  puVar1[1] = *(undefined1 *)(param_1 + 4);
  *(undefined8 *)(puVar1 + 0xa8) = 0;
  *(undefined8 *)(puVar1 + 0xa0) = 0;
  *(undefined8 *)(puVar1 + 0x9b) = 0;
  *(undefined8 *)(puVar1 + 0x93) = 0;
  *(undefined8 *)(puVar1 + 0x8b) = 0;
  *(undefined8 *)(puVar1 + 0x83) = 0;
  *(undefined8 *)(puVar1 + 0x7b) = 0;
  *(undefined8 *)(puVar1 + 0x73) = 0;
  *(undefined8 *)(puVar1 + 0x6b) = 0;
  *(undefined8 *)(puVar1 + 99) = 0;
  *(undefined8 *)(puVar1 + 0x5b) = 0;
  *(undefined8 *)(puVar1 + 0x53) = 0;
  *(undefined8 *)(puVar1 + 0x4b) = 0;
  *(undefined8 *)(puVar1 + 0x43) = 0;
  *(undefined8 *)(puVar1 + 0x3b) = 0;
  *(undefined8 *)(puVar1 + 0x33) = 0;
  *(undefined8 *)(puVar1 + 0x2b) = 0;
  *(undefined8 *)(puVar1 + 0x23) = 0;
  *(undefined8 *)(puVar1 + 0x1b) = 0;
  *(undefined8 *)(puVar1 + 0x13) = 0;
  *(undefined8 *)(puVar1 + 0xb) = 0;
  *(undefined8 *)(puVar1 + 3) = 0;
  return;
}

undefined8 FUN_03035e5c(int param_1)

{
  if (((0x3b < param_1 - 7U) || ((1L << ((ulong)(param_1 - 7U) & 0x3f) & 0x829400003f02323U) == 0) )
     && ((0xb < param_1 - 0x4aU || ((1 << (ulong)(param_1 - 0x4aU & 0x1f) & 0xe7bU) == 0)))) {
    return 1;
  }
  return 2;
}

ulong FUN_03f6fc34(int *param_1,ulong param_2)
{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;

  uVar3 = param_2;
  if (param_2 < 0x20) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    do {
      uVar1 = param_1[2] + (int)param_2;
      uVar2 = (uVar1 ^ *param_1 + uVar2) - (uVar1 >> 0xe | uVar1 * 0x40000);
      uVar4 = (uVar2 ^ param_1[1] + uVar4) - (uVar2 >> 0xb | uVar2 * 0x200000);
      param_2 = (ulong)((uVar4 ^ uVar1) - (uVar4 >> 0x19 | uVar4 * 0x80));
      param_1 = param_1 + 3;
      uVar3 = uVar3 - 0xc;
    } while (0x1f < uVar3);
  }
  do {
    uVar2 = (uint)param_2;
    param_2 = (ulong)(uVar2 * 0x20 + (uVar2 >> 2) + (uint)*(byte *)((long)param_1 + (uVar3 - 1)) ^
                     uVar2);
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return param_2;
}

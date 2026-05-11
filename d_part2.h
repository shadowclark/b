undefined8 FUN_03f6523c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;

  lVar2 = FUN_03f5b8c0(param_1,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5de0c(param_1,1,"thread");
  }
  iVar1 = FUN_03f5cdd0(param_1,lVar2);
  if (1 < iVar1 - 3U && iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5ddc0(param_1,"cannot close %s coroutine");
  }
  if (*(byte *)(lVar2 + 3) < 2) {
    uVar4 = 1;
    FUN_03f5bdc4(param_1,1);
    goto LAB_03f65300;
  }
  FUN_03f5bdc4(param_1,0);
  if (*(char *)(lVar2 + 3) == '\x05') {
    pcVar3 = "error in error handling";
LAB_03f652d4:
    FUN_03f5bb90(param_1,pcVar3);
  }
  else {
    if (*(char *)(lVar2 + 3) == '\x04') {
      pcVar3 = "not enough memory";
      goto LAB_03f652d4;
    }
    iVar1 = FUN_03f5a714(lVar2);
    if (iVar1 != 0) {
      FUN_03f5a50c(lVar2,param_1,1);
    }
  }
  uVar4 = 2;
LAB_03f65300:
  FUN_03f6f65c(lVar2);
  return uVar4;
}


void FUN_03f6f478(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  lVar1 = FUN_03f6d65c(param_2,0x140,*(undefined1 *)(param_1 + 1));
  *(long *)(param_1 + 0x38) = lVar1;
  *(undefined4 *)(param_1 + 0xc) = 8;
  *(long *)(param_1 + 0x58) = lVar1 + 0x118;
  *(long *)(param_1 + 0x60) = lVar1;
  lVar2 = FUN_03f6d65c(param_2,0x2d0,*(undefined1 *)(param_1 + 1));
  lVar1 = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  *(undefined4 *)(param_1 + 8) = 0x2d;
  uVar5 = 3;
  uVar4 = 2;
  uVar7 = 1;
  uVar6 = 0;
  do {
    if (uVar6 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0xc) = 0;
    }
    if (uVar7 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0x1c) = 0;
    }
    if (uVar4 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0x2c) = 0;
    }
    if (uVar5 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0x3c) = 0;
    }
    uVar4 = uVar4 + 4;
    uVar5 = uVar5 + 4;
    uVar6 = uVar6 + 4;
    uVar7 = uVar7 + 4;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x300);
  plVar3 = *(long **)(param_1 + 0x38);
  lVar1 = lVar2 + 0x10;
  *(long *)(param_1 + 0x20) = lVar2 + 0x280;
  *(long *)(param_1 + 0x28) = lVar1;
  *(undefined4 *)(lVar2 + 0xc) = 0;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  *(long *)(param_1 + 0x40) = lVar1;
  *plVar3 = lVar2 + 0x150;
  return;
}


void FUN_03f6fac4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;

  plVar2 = *(long **)(param_1 + 0x18);
  FUN_03f6f478(param_1,param_1);
  uVar1 = FUN_03f736b8(param_1,0,2);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  lVar3 = *(long *)(param_1 + 0x18);
  uVar1 = FUN_03f736b8(param_1,0,2);
  *(undefined8 *)(lVar3 + 0x498) = uVar1;
  *(undefined4 *)(lVar3 + 0x4a4) = 7;
  FUN_03f6fcc0(param_1,0x20);
  FUN_03f75e60(param_1);
  lVar3 = FUN_03f6ff1c(param_1,"not enough memory",0x11);
  *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
  lVar3 = FUN_03f6ff1c(param_1,"error in error handling",0x17);
  *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
  *plVar2 = plVar2[1] << 2;
  return;
}


undefined8 FUN_03f66d48(undefined8 param_1,code *param_2,undefined8 param_3)

{
  (*param_2)(param_1,param_3);
  return 0;
}


void FUN_03f6fb88(long param_1)

{
  code *pcVar1;
  long lVar2;

  lVar2 = *(long *)(param_1 + 0x18);
  FUN_03f680f8(param_1,*(undefined8 *)(param_1 + 0x30));
  FUN_03f6836c(param_1);
  FUN_03f6d9d4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
               (long)*(int *)(*(long *)(param_1 + 0x18) + 0x38) << 3,0);
  FUN_03f6f610(param_1,param_1);
  pcVar1 = *(code **)(*(long *)(param_1 + 0x18) + 0x538);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x03f6fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),param_1,0x4710,0);
  return;
}


void FUN_03f670a8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(param_1 + 0xc);
  if (0x57e3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f66e08(param_1,5);
  }
  iVar3 = iVar2 * 2;
  if (19999 < iVar3) {
    iVar3 = 20000;
  }
  iVar1 = 0x57e4;
  if (iVar2 < 20000) {
    iVar1 = iVar3;
  }
  FUN_03f67010(param_1,iVar1);
  if (*(int *)(param_1 + 0xc) < 0x4e21) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 0x28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"stack overflow");
}


void FUN_03f67010(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;

  if (-1 < (int)param_2) {
    lVar2 = *(long *)(param_1 + 0x60);
    lVar1 = FUN_03f6dc48(param_1,lVar2,(long)*(int *)(param_1 + 0xc) * 0x28,(ulong)param_2 * 0x28,
                         *(undefined1 *)(param_1 + 1));
    *(uint *)(param_1 + 0xc) = param_2;
    *(long *)(param_1 + 0x38) = lVar1 + (*(long *)(param_1 + 0x38) - lVar2);
    *(ulong *)(param_1 + 0x58) = lVar1 + (ulong)param_2 * 0x28 + -0x28;
    *(long *)(param_1 + 0x60) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f6d648(param_1);
}


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

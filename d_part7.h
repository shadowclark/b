void FUN_03f5c300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;

  if (**(ulong **)(param_1 + 0x18) <= (*(ulong **)(param_1 + 0x18))[1]) {
    FUN_03f683a0(param_1,1);
  }
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_03f693c0(param_1,param_1,param_1 + 0x10);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = FUN_03f736b8(param_1,param_2,param_3);
  *puVar2 = uVar1;
  *(undefined4 *)((long)puVar2 + 0xc) = 7;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  return;
}


void FUN_03f5bcc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;

  if (**(ulong **)(param_1 + 0x18) <= (*(ulong **)(param_1 + 0x18))[1]) {
    FUN_03f683a0(param_1,1);
  }
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_03f693c0(param_1,param_1,param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x60)) {
    puVar3 = (undefined8 *)(param_1 + 0x70);
  }
  else {
    puVar3 = (undefined8 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x18) + 0x10);
  }
  lVar2 = FUN_03f67fac(param_1,param_4,*puVar3);
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  iVar7 = (int)param_4;
  plVar4 = (long *)(*(long *)(param_1 + 0x28) + (long)iVar7 * -0x10);
  *(long **)(param_1 + 0x28) = plVar4;
  if (iVar7 != 0) {
    lVar5 = (long)iVar7;
    lVar6 = lVar5 << 4;
    do {
      lVar1 = *(long *)(param_1 + 0x28) + lVar6;
      uVar8 = *(undefined8 *)(lVar1 + -0x10);
      puVar3 = (undefined8 *)(lVar2 + 0x20 + lVar6);
      puVar3[1] = *(undefined8 *)(lVar1 + -8);
      *puVar3 = uVar8;
      lVar6 = lVar6 + -0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    plVar4 = *(long **)(param_1 + 0x28);
  }
  *plVar4 = lVar2;
  *(undefined4 *)((long)plVar4 + 0xc) = 8;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  return;
}


void FUN_03f5c38c(long param_1,uint param_2,int param_3)

{
  long *plVar1;

  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      plVar1 = (long *)FUN_03f5dc38();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 0x28) <= plVar1) {
      plVar1 = &DAT_04ebdbc0;
    }
  }
  *(bool *)(*plVar1 + 6) = param_3 != 0;
  return;
}


void FUN_03f5aa94(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;

  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_03f693c0(param_1,param_1,param_1 + 0x10);
  }
  iVar3 = (int)param_2;
  if (iVar3 < 1) {
    if (iVar3 < -9999) {
      puVar2 = (undefined8 *)FUN_03f5dc38(param_1,param_2);
      puVar1 = *(undefined8 **)(param_1 + 0x28);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      puVar2 = puVar1 + (long)iVar3 * 2;
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + (param_2 & 0xffffffff) * 0x10 + -0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (puVar1 <= puVar2) {
      puVar2 = &DAT_04ebdbc0;
    }
  }
  uVar4 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar4;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  return;
}


undefined8 FUN_03f5cbac(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;

  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      plVar4 = (long *)FUN_03f5dc38(param_1);
      plVar3 = *(long **)(param_1 + 0x28);
    }
    else {
      plVar3 = *(long **)(param_1 + 0x28);
      plVar4 = plVar3 + (long)(int)param_2 * 2;
    }
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + -0x10);
    plVar3 = *(long **)(param_1 + 0x28);
    if (plVar3 <= plVar4) {
      plVar4 = &DAT_04ebdbc0;
    }
  }
  if (*(int *)((long)plVar3 + -4) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar3[-2];
  }
  iVar1 = *(int *)((long)plVar4 + 0xc);
  if (iVar1 == 9) {
    *(long *)(*plVar4 + 8) = lVar2;
  }
  else {
    if (iVar1 != 7) {
      *(long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x428) = lVar2;
      goto LAB_03f5cc8c;
    }
    if (*(char *)(*plVar4 + 6) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_03f66360(param_1);
    }
    *(long *)(*plVar4 + 0x28) = lVar2;
  }
  if (((lVar2 != 0) && ((*(byte *)(*plVar4 + 2) >> 2 & 1) != 0)) &&
     ((*(byte *)(lVar2 + 2) & 3) != 0)) {
    FUN_03f69258(param_1);
  }
LAB_03f5cc8c:
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x10;
  return 1;
}


void FUN_03f5a728(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;

  if ((int)param_2 < 0) {
    uVar1 = *(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x10 + 0x10;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10;
    uVar4 = *(ulong *)(param_1 + 0x28);
    if (uVar4 < uVar1) {
      uVar2 = 0;
      uVar3 = *(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10;
      if (uVar3 <= uVar4 + 0x10) {
        uVar3 = uVar4 + 0x10;
      }
      uVar3 = uVar3 + ~uVar4 >> 4;
      puVar5 = (undefined4 *)(uVar4 + 0x2c);
      do {
        if (uVar2 <= uVar3) {
          puVar5[-8] = 0;
        }
        if ((uVar2 | 1) <= uVar3) {
          puVar5[-4] = 0;
        }
        if ((uVar2 | 2) <= uVar3) {
          *puVar5 = 0;
        }
        if ((uVar2 | 3) <= uVar3) {
          puVar5[4] = 0;
        }
        uVar2 = uVar2 + 4;
        puVar5 = puVar5 + 0x10;
      } while ((uVar3 + 4 & 0x1ffffffffffffffc) != uVar2);
    }
  }
  *(ulong *)(param_1 + 0x28) = uVar1;
  return;
}

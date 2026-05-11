void FUN_03f7747c(long param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_03f77490();
    return;
  }
  FUN_03f7b00c();
  return;
}


/* WARNING: Switch with 1 destination removed at 0x03f774dc */

void FUN_03f77490(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;

  pcVar3 = *(char **)(*(long *)(param_1 + 0x38) + 8);
  do {
    do {
      do {
        lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x4f0);
      } while (lVar2 == 0);
      cVar1 = *pcVar3;
    } while ((cVar1 == -0x59) || (cVar1 == -0xd));
    *(char **)(*(long *)(param_1 + 0x38) + 8) = pcVar3;
    FUN_03f772e0(param_1,lVar2,0);
  } while (*(char *)(param_1 + 3) == '\0');
  return;
}


void FUN_03f772e0(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_1a8 [2];
  undefined4 local_198;
  long local_70;

  local_70 = *(long *)PTR____stack_chk_guard_058e8298;
  plVar6 = *(long **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40);
  lVar10 = *plVar6;
  cVar4 = *(char *)(param_1 + 3);
  if (cVar4 == '\x06' || cVar4 == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    *(long *)(param_1 + 0x40) = plVar6[2];
  }
  lVar1 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)plVar6[3];
  lVar9 = plVar6[1];
  if ((lVar9 != 0) &&
     (lVar9 != *(long *)(*(long *)(lVar11 + 0x18) + 0x40) +
               (long)*(int *)(*(long *)(lVar11 + 0x18) + 0xac) * 4)) {
    plVar6[1] = lVar9 + 4;
  }
  lVar7 = lVar1;
  if (*(long *)(param_1 + 0x20) - lVar1 < 0x141) {
    FUN_03f6708c(param_1,0x14);
    lVar7 = *(long *)(param_1 + 0x28);
    plVar6 = *(long **)(param_1 + 0x38);
  }
  *plVar6 = lVar7 + 0x140;
  if (*(char *)(lVar11 + 5) == '\0') {
    lVar7 = plVar6[1];
    if (lVar7 == 0) {
      iVar5 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar11 + 0x18) + 0x40);
      iVar5 = 0;
      if (lVar7 != lVar8) {
        iVar5 = (int)((ulong)(lVar7 - lVar8) >> 2) + -1;
      }
    }
    local_198 = FUN_03f66610(*(long *)(lVar11 + 0x18),iVar5);
  }
  else {
    local_198 = 0xffffffff;
  }
  local_1a8[0] = param_3;
  (*param_2)(param_1,local_1a8);
  lVar11 = *(long *)(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x38);
  *plVar6 = lVar11 + (lVar10 - lVar3);
  plVar6[1] = lVar9;
  *(long *)(param_1 + 0x28) = lVar11 + (lVar1 - lVar3);
  if ((cVar4 == '\x06') || ((cVar4 == '\x01' && (*(char *)(param_1 + 3) != '\x01')))) {
    *(char *)(param_1 + 3) = cVar4;
    *(long *)(param_1 + 0x40) = lVar11 + (lVar2 - lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_058e8298 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


void FUN_03f7b00c(long param_1)

{
  int iVar1;

  if (((*(byte *)(*(long *)(param_1 + 0x38) + 0x24) >> 2 & 1) != 0) &&
     (iVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x548))
                        (param_1,*(undefined8 *)
                                  (**(long **)(*(long *)(param_1 + 0x38) + 0x18) + 0x18)),
     iVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03f7b08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ARRAY_05daf01f + (ulong)**(byte **)(*(long *)(param_1 + 0x38) + 8) * 8 + 0x119))();
  return;
}


void UndefinedFunction_03f7e9f4(void)

{
  code *pcVar1;

                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f7e9f8);
  (*pcVar1)();
}


undefined8 FUN_03f7e9f8(long param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  code cVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;

  if (*(int *)((long)param_2 + 0xc) != 8) {
    FUN_03f81e98(param_1,param_2);
  }
  lVar17 = *param_2;
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x58)) {
    puVar8 = (ulong *)FUN_03f670a8(param_1);
  }
  else {
    puVar8 = (ulong *)(*(long *)(param_1 + 0x38) + 0x28);
    *(ulong **)(param_1 + 0x38) = puVar8;
  }
  puVar8[2] = (ulong)(param_2 + 2);
  puVar8[3] = (ulong)param_2;
  bVar5 = *(byte *)(lVar17 + 3);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  *puVar8 = lVar3 + (ulong)bVar5 * 0x10;
  puVar8[1] = 0;
  *(int *)(puVar8 + 4) = param_3;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  *(long **)(param_1 + 0x40) = param_2 + 2;
  if (lVar2 - lVar3 <= (long)((ulong)bVar5 * 0x10)) {
    iVar4 = *(int *)(param_1 + 8);
    iVar1 = iVar4 + (uint)bVar5;
    if ((int)(uint)bVar5 <= iVar4) {
      iVar1 = iVar4 << 1;
    }
    FUN_03f66e4c(param_1,iVar1,1);
  }
  pcVar9 = *(code **)(lVar17 + 0x18);
  if (*(char *)(lVar17 + 5) == '\0') {
    lVar17 = *(long *)(param_1 + 0x40);
    cVar6 = pcVar9[5];
    for (uVar14 = *(ulong *)(param_1 + 0x28); uVar14 < lVar17 + (ulong)(byte)cVar6 * 0x10;
        uVar14 = uVar14 + 0x10) {
      *(undefined4 *)(uVar14 + 0xc) = 0;
    }
    if (pcVar9[4] == (code)0x0) {
      uVar14 = *puVar8;
    }
    *(ulong *)(param_1 + 0x28) = uVar14;
    puVar8[1] = *(ulong *)(pcVar9 + 0x40);
    if ((*(long *)(pcVar9 + 0x10) == 0) || (*(long *)(pcVar9 + 8) == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      *(undefined4 *)((long)puVar8 + 0x24) = 4;
    }
  }
  else {
    uVar7 = (*pcVar9)(param_1);
    if ((int)uVar7 < 0) {
      uVar10 = 2;
    }
    else {
      lVar17 = *(long *)(param_1 + 0x38);
      puVar11 = *(undefined8 **)(lVar17 + 0x18);
      if ((param_3 != 0) && (uVar7 != 0)) {
        puVar13 = *(undefined8 **)(param_1 + 0x28);
        puVar12 = puVar11;
        puVar16 = puVar13 + (ulong)uVar7 * -2;
        do {
          puVar15 = puVar16 + 2;
          uVar10 = *puVar16;
          puVar11 = puVar12 + 2;
          puVar12[1] = puVar16[1];
          *puVar12 = uVar10;
          param_3 = param_3 + -1;
          if (param_3 == 0) break;
          puVar12 = puVar11;
          puVar16 = puVar15;
        } while (puVar15 < puVar13);
      }
      if (0 < param_3) {
        uVar7 = param_3 + 1;
        puVar12 = puVar11;
        do {
          puVar11 = puVar12 + 2;
          *(undefined4 *)((long)puVar12 + 0xc) = 0;
          uVar7 = uVar7 - 1;
          puVar12 = puVar11;
        } while (1 < uVar7);
      }
      uVar10 = *(undefined8 *)(lVar17 + -0x18);
      *(long *)(param_1 + 0x38) = lVar17 + -0x28;
      *(undefined8 *)(param_1 + 0x40) = uVar10;
      *(undefined8 **)(param_1 + 0x28) = puVar11;
      uVar10 = 1;
    }
  }
  return uVar10;
}


void FUN_03f7ebcc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;

  lVar1 = *(long *)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  iVar5 = *(int *)(lVar1 + 0x20);
  puVar3 = puVar2;
  if (iVar5 != 0 && param_2 < puVar7) {
    do {
      puVar8 = param_2 + 2;
      uVar4 = *param_2;
      puVar2 = puVar3 + 2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar4;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) break;
      puVar3 = puVar2;
      param_2 = puVar8;
    } while (puVar8 < puVar7);
  }
  if (0 < iVar5) {
    uVar6 = iVar5 + 1;
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 2;
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
      uVar6 = uVar6 - 1;
      puVar3 = puVar2;
    } while (1 < uVar6);
  }
  uVar4 = *(undefined8 *)(lVar1 + -0x18);
  *(long **)(param_1 + 0x38) = (long *)(lVar1 + -0x28);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  if (*(int *)(lVar1 + 0x20) != -1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
  }
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  return;
}


void FUN_03f67d40(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;

  while( true ) {
    while( true ) {
      cVar1 = *(char *)(param_1 + 3);
      if ((char)DAT_05fabec8 == '\x01') {
        if (((cVar1 != '\0') && (cVar1 != '\x7f')) ||
           (uVar3 = *(ulong *)(param_1 + 0x38), uVar3 <= *(ulong *)(param_1 + 0x60))) {
          return;
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else {
        if (cVar1 != '\0') {
          return;
        }
        uVar3 = *(ulong *)(param_1 + 0x38);
        if (uVar3 <= *(ulong *)(param_1 + 0x60)) {
          return;
        }
      }
      if (*(char *)(**(long **)(uVar3 + 0x18) + 5) != '\0') break;
      FUN_03f7747c(param_1);
    }
    iVar2 = (**(code **)(**(long **)(uVar3 + 0x18) + 0x28))(param_1,0);
    if (*(char *)(param_1 + 3) == '\x01') {
      return;
    }
    if (*(char *)(param_1 + 3) == '\x06') break;
    FUN_03f7ebcc(param_1,*(long *)(param_1 + 0x28) + (long)iVar2 * -0x10);
  }
  return;

}


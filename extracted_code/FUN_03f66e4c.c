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

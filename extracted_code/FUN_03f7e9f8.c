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

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

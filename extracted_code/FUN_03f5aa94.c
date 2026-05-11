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

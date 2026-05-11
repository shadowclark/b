void FUN_03f75e60(long param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long lVar7;

  lVar7 = 0x79;
  puVar5 = (undefined8 *)((long)&PTR_DAT_05dae6bd + 3);
  do {
    pcVar4 = (char *)*puVar5;
    sVar1 = _strlen(pcVar4);
    uVar2 = FUN_03f6ff1c(param_1,pcVar4,sVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 * 8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar7 * 8);
    *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
    lVar7 = lVar7 + 1;
    puVar5 = puVar5 + 1;
  } while (lVar7 != 0x85);
  lVar7 = 100;
  ppuVar6 = &PTR_s___index_05dae720;
  do {
    pcVar4 = *ppuVar6;
    sVar1 = _strlen(pcVar4);
    uVar2 = FUN_03f6ff1c(param_1,pcVar4,sVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 * 8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar7 * 8);
    *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
    lVar7 = lVar7 + 1;
    ppuVar6 = ppuVar6 + 1;
  } while (lVar7 != 0x79);
  return;
}

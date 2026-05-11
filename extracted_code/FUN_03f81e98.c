undefined8 * FUN_03f81e98(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];

  puVar4 = (undefined8 *)FUN_03f75f6c(param_1,param_2,4);
  if (*(int *)((long)puVar4 + 0xc) == 8) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    if (param_2 < puVar7) {
      do {
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7 = puVar7 + -2;
      } while (param_2 < puVar7);
      puVar7 = *(undefined8 **)(param_1 + 0x28);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar7 + 2;
    uVar8 = *puVar4;
    param_2[1] = puVar4[1];
    *param_2 = uVar8;
    return puVar4;
  }
  pcVar6 = "call";
  auVar9 = FUN_03f660c0(param_1,param_2);
  plVar5 = auVar9._0_8_;
  uVar3 = _vsnprintf((char *)0x0,0,auVar9._8_8_,pcVar6);
  if (0 < (int)uVar3) {
    uVar1 = plVar5[1];
    if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)plVar5 + 0x17);
    }
    std::string::resize((ulong)plVar5,(char)uVar1 + (char)uVar3);
    plVar2 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar2 = plVar5;
    }
    uVar3 = _vsnprintf((char *)((long)plVar2 + uVar1),(ulong)(uVar3 + 1),auVar9._8_8_,pcVar6);
  }
  return (undefined8 *)(ulong)uVar3;
}

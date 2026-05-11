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

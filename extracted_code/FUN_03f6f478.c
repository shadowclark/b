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

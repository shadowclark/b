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

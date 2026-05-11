void FUN_03f7376c(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;

  if (0x4000000 < (int)param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_03f660f0(param_1,"table overflow");
  }
  if (-1 < (int)param_3) {
    lVar2 = FUN_03f6dc48(param_1,*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 8) << 4,
                         (ulong)param_3 << 4,*(undefined1 *)(param_2 + 1));
    *(long *)(param_2 + 0x18) = lVar2;
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 < (int)param_3) {
      uVar3 = 0;
      lVar5 = (ulong)param_3 - (long)iVar1;
      uVar6 = lVar5 - 1;
      puVar4 = (undefined4 *)(lVar2 + (long)iVar1 * 0x10 + 0x2c);
      do {
        if (uVar3 <= uVar6) {
          puVar4[-8] = 0;
        }
        if ((uVar3 | 1) <= uVar6) {
          puVar4[-4] = 0;
        }
        if ((uVar3 | 2) <= uVar6) {
          *puVar4 = 0;
        }
        if ((uVar3 | 3) <= uVar6) {
          puVar4[4] = 0;
        }
        uVar3 = uVar3 + 4;
        puVar4 = puVar4 + 0x10;
      } while ((lVar5 + 3U & 0xfffffffffffffffc) != uVar3);
    }
    *(uint *)(param_2 + 8) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f6d648();
}

void FUN_03f6fcc0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f6d648(param_1);
  }
  pvVar4 = (void *)FUN_03f6d65c(param_1,(ulong)param_2 << 3,0);
  lVar7 = *(long *)(param_1 + 0x18);
  if (param_2 != 0) {
    _bzero(pvVar4,(ulong)param_2 << 3);
  }
  uVar2 = *(uint *)(lVar7 + 0x38);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x40) + uVar5 * 8);
      while (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + 8);
        uVar1 = *(uint *)(lVar3 + 0x10) & param_2 - 1;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)((long)pvVar4 + (long)(int)uVar1 * 8);
        *(long *)((long)pvVar4 + (long)(int)uVar1 * 8) = lVar3;
        lVar3 = lVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  FUN_03f6d9d4(param_1,*(undefined8 *)(lVar7 + 0x40),(long)(int)uVar2 << 3,0);
  *(uint *)(lVar7 + 0x38) = param_2;
  *(void **)(lVar7 + 0x40) = pvVar4;
  return;
}

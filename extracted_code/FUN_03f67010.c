void FUN_03f67010(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;

  if (-1 < (int)param_2) {
    lVar2 = *(long *)(param_1 + 0x60);
    lVar1 = FUN_03f6dc48(param_1,lVar2,(long)*(int *)(param_1 + 0xc) * 0x28,(ulong)param_2 * 0x28,
                         *(undefined1 *)(param_1 + 1));
    *(uint *)(param_1 + 0xc) = param_2;
    *(long *)(param_1 + 0x38) = lVar1 + (*(long *)(param_1 + 0x38) - lVar2);
    *(ulong *)(param_1 + 0x58) = lVar1 + (ulong)param_2 * 0x28 + -0x28;
    *(long *)(param_1 + 0x60) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f6d648(param_1);
}

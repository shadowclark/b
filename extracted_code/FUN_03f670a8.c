void FUN_03f670a8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(param_1 + 0xc);
  if (0x57e3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f66e08(param_1,5);
  }
  iVar3 = iVar2 * 2;
  if (19999 < iVar3) {
    iVar3 = 20000;
  }
  iVar1 = 0x57e4;
  if (iVar2 < 20000) {
    iVar1 = iVar3;
  }
  FUN_03f67010(param_1,iVar1);
  if (*(int *)(param_1 + 0xc) < 0x4e21) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 0x28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"stack overflow");
}

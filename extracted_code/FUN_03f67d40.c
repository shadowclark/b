void FUN_03f67d40(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;

  while( true ) {
    while( true ) {
      cVar1 = *(char *)(param_1 + 3);
      if ((char)DAT_05fabec8 == '\x01') {
        if (((cVar1 != '\0') && (cVar1 != '\x7f')) ||
           (uVar3 = *(ulong *)(param_1 + 0x38), uVar3 <= *(ulong *)(param_1 + 0x60))) {
          return;
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else {
        if (cVar1 != '\0') {
          return;
        }
        uVar3 = *(ulong *)(param_1 + 0x38);
        if (uVar3 <= *(ulong *)(param_1 + 0x60)) {
          return;
        }
      }
      if (*(char *)(**(long **)(uVar3 + 0x18) + 5) != '\0') break;
      FUN_03f7747c(param_1);
    }
    iVar2 = (**(code **)(**(long **)(uVar3 + 0x18) + 0x28))(param_1,0);
    if (*(char *)(param_1 + 3) == '\x01') {
      return;
    }
    if (*(char *)(param_1 + 3) == '\x06') break;
    FUN_03f7ebcc(param_1,*(long *)(param_1 + 0x28) + (long)iVar2 * -0x10);
  }
  return;
}

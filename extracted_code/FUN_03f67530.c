undefined8 FUN_03f67530(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  ushort uVar4;

  cVar1 = *(char *)(param_1 + 3);
  if ((cVar1 == '\x06' || cVar1 == '\x01') ||
     ((cVar1 == '\0' && (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x60))))) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(ushort *)(param_2 + 0x68);
      *(ushort *)(param_1 + 0x68) = uVar4;
      if (199 < uVar4) {
        pcVar3 = "C stack overflow";
        goto LAB_03f67584;
      }
    }
    *(ushort *)(param_1 + 0x68) = uVar4 + 1;
    *(ushort *)(param_1 + 0x6a) = uVar4 + 1;
    *(undefined1 *)(param_1 + 5) = 1;
    if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
      FUN_03f693c0(param_1,param_1,param_1 + 0x10);
    }
    uVar2 = 0;
  }
  else {
    pcVar3 = "cannot resume non-suspended coroutine";
LAB_03f67584:
    FUN_03f67cb0(param_1,pcVar3);
    uVar2 = 2;
  }
  return uVar2;
}

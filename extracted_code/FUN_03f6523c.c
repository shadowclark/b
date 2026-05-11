undefined8 FUN_03f6523c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;

  lVar2 = FUN_03f5b8c0(param_1,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5de0c(param_1,1,"thread");
  }
  iVar1 = FUN_03f5cdd0(param_1,lVar2);
  if (1 < iVar1 - 3U && iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5ddc0(param_1,"cannot close %s coroutine");
  }
  if (*(byte *)(lVar2 + 3) < 2) {
    uVar4 = 1;
    FUN_03f5bdc4(param_1,1);
    goto LAB_03f65300;
  }
  FUN_03f5bdc4(param_1,0);
  if (*(char *)(lVar2 + 3) == '\x05') {
    pcVar3 = "error in error handling";
LAB_03f652d4:
    FUN_03f5bb90(param_1,pcVar3);
  }
  else {
    if (*(char *)(lVar2 + 3) == '\x04') {
      pcVar3 = "not enough memory";
      goto LAB_03f652d4;
    }
    iVar1 = FUN_03f5a714(lVar2);
    if (iVar1 != 0) {
      FUN_03f5a50c(lVar2,param_1,1);
    }
  }
  uVar4 = 2;
LAB_03f65300:
  FUN_03f6f65c(lVar2);
  return uVar4;
}

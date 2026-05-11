void FUN_03f5e5fc(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;

  if (param_2 != 0) {
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      plVar3 = param_3;
      do {
        plVar3 = plVar3 + 2;
        iVar4 = iVar4 + 1;
      } while (*plVar3 != 0);
    }
    FUN_03f5e72c(param_1,0xffffd8f0,"_LOADED",1);
    FUN_03f5bf14(param_1,0xffffffff,param_2);
    iVar1 = FUN_03f5ab34(param_1,0xffffffff);
    if (iVar1 != 7) {
      FUN_03f5a728(param_1,0xfffffffe);
      lVar2 = FUN_03f5e72c(param_1,0xffffd8ee,param_2,iVar4);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5ddc0(param_1,"name conflict for module \'%s\'");
      }
      FUN_03f5aa94(param_1,0xffffffff);
      FUN_03f5c724(param_1,0xfffffffd,param_2);
    }
    FUN_03f5a808(param_1,0xfffffffe);
  }
  lVar2 = *param_3;
  while (lVar2 != 0) {
    FUN_03f5bcc4(param_1,param_3[1],lVar2,0,0);
    FUN_03f5c724(param_1,0xfffffffe,*param_3);
    lVar2 = param_3[2];
    param_3 = param_3 + 2;
  }
  return;
}

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


void FUN_03f6fac4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;

  plVar2 = *(long **)(param_1 + 0x18);
  FUN_03f6f478(param_1,param_1);
  uVar1 = FUN_03f736b8(param_1,0,2);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  lVar3 = *(long *)(param_1 + 0x18);
  uVar1 = FUN_03f736b8(param_1,0,2);
  *(undefined8 *)(lVar3 + 0x498) = uVar1;
  *(undefined4 *)(lVar3 + 0x4a4) = 7;
  FUN_03f6fcc0(param_1,0x20);
  FUN_03f75e60(param_1);
  lVar3 = FUN_03f6ff1c(param_1,"not enough memory",0x11);
  *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
  lVar3 = FUN_03f6ff1c(param_1,"error in error handling",0x17);
  *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
  *plVar2 = plVar2[1] << 2;
  return;
}


undefined8 FUN_03f66d48(undefined8 param_1,code *param_2,undefined8 param_3)

{
  (*param_2)(param_1,param_3);
  return 0;
}


void FUN_03f6fb88(long param_1)

{
  code *pcVar1;
  long lVar2;

  lVar2 = *(long *)(param_1 + 0x18);
  FUN_03f680f8(param_1,*(undefined8 *)(param_1 + 0x30));
  FUN_03f6836c(param_1);
  FUN_03f6d9d4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
               (long)*(int *)(*(long *)(param_1 + 0x18) + 0x38) << 3,0);
  FUN_03f6f610(param_1,param_1);
  pcVar1 = *(code **)(*(long *)(param_1 + 0x18) + 0x538);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x03f6fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),param_1,0x4710,0);
  return;
}


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


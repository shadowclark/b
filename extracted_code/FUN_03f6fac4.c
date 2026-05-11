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

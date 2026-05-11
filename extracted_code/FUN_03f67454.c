void FUN_03f67454(long param_1,int param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;

  if (param_2 - 2U < 2) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + -0x10);
    param_3[1] = *(undefined8 *)(*(long *)(param_1 + 0x28) + -8);
    *param_3 = uVar2;
  }
  else {
    if (param_2 == 5) {
      pcVar1 = "error in error handling";
      uVar2 = 0x17;
    }
    else {
      if (param_2 != 4) goto LAB_03f674c8;
      pcVar1 = "not enough memory";
      uVar2 = 0x11;
    }
    uVar2 = FUN_03f6ff1c(param_1,pcVar1,uVar2);
    *param_3 = uVar2;
    *(undefined4 *)((long)param_3 + 0xc) = 6;
  }
LAB_03f674c8:
  *(undefined8 **)(param_1 + 0x28) = param_3 + 2;
  return;
}

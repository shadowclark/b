void FUN_03f6938c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;

  lVar1 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x55) == '\x02') {
    FUN_03f6928c(lVar1,param_3);
    return;
  }
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfb;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_2;
  return;
}

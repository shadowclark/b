void FUN_03f5c300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;

  if (**(ulong **)(param_1 + 0x18) <= (*(ulong **)(param_1 + 0x18))[1]) {
    FUN_03f683a0(param_1,1);
  }
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_03f693c0(param_1,param_1,param_1 + 0x10);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = FUN_03f736b8(param_1,param_2,param_3);
  *puVar2 = uVar1;
  *(undefined4 *)((long)puVar2 + 0xc) = 7;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  return;
}

undefined1 * FUN_03f736b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;

  puVar1 = (undefined1 *)FUN_03f6d7e4(param_1,0x30,*(undefined1 *)(param_1 + 4));
  puVar1[2] = *(byte *)(*(long *)(param_1 + 0x18) + 0x54) & 3;
  *puVar1 = 7;
  puVar1[1] = *(undefined1 *)(param_1 + 4);
  puVar1[5] = 0xff;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &DAT_04ebdcd0;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  if (0 < (int)param_2) {
    FUN_03f7376c(param_1,puVar1,param_2);
  }
  if (0 < (int)param_3) {
    FUN_03f7387c(param_1,puVar1,param_3);
  }
  return puVar1;
}

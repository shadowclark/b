void FUN_03f5c724(long param_1,uint param_2,char *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined4 local_34;

  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_03f5dc38(param_1);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 0x28) <= puVar2) {
      puVar2 = &DAT_04ebdbc0;
    }
  }
  sVar1 = _strlen(param_3);
  local_40 = FUN_03f6ff1c(param_1,param_3,sVar1);
  local_34 = 6;
  FUN_03f8074c(param_1,puVar2,&local_40,*(long *)(param_1 + 0x28) + -0x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x10;
  return;
}

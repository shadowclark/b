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

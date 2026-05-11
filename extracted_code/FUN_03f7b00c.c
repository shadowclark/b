void FUN_03f7b00c(long param_1)

{
  int iVar1;

  if (((*(byte *)(*(long *)(param_1 + 0x38) + 0x24) >> 2 & 1) != 0) &&
     (iVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x548))
                        (param_1,*(undefined8 *)
                                  (**(long **)(*(long *)(param_1 + 0x38) + 0x18) + 0x18)),
     iVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03f7b08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ARRAY_05daf01f + (ulong)**(byte **)(*(long *)(param_1 + 0x38) + 8) * 8 + 0x119))();
  return;
}

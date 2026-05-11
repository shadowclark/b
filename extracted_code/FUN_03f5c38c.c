void FUN_03f5c38c(long param_1,uint param_2,int param_3)

{
  long *plVar1;

  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      plVar1 = (long *)FUN_03f5dc38();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + -0x10);
    if (*(long **)(param_1 + 0x28) <= plVar1) {
      plVar1 = &DAT_04ebdbc0;
    }
  }
  *(bool *)(*plVar1 + 6) = param_3 != 0;
  return;
}

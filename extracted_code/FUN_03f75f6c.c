undefined8 * FUN_03f75f6c(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;

  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 == 9) {
    plVar3 = (long *)(*param_2 + 8);
  }
  else if (iVar1 == 7) {
    plVar3 = (long *)(*param_2 + 0x28);
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x428);
  }
  if (*plVar3 != 0) {
    puVar2 = (undefined8 *)
             FUN_03f73a8c(*plVar3,*(undefined8 *)
                                   (*(long *)(param_1 + 0x18) + (ulong)param_3 * 8 + 800));
    return puVar2;
  }
  return &DAT_04ebdbc0;
}

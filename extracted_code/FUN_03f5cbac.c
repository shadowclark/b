undefined8 FUN_03f5cbac(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;

  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      plVar4 = (long *)FUN_03f5dc38(param_1);
      plVar3 = *(long **)(param_1 + 0x28);
    }
    else {
      plVar3 = *(long **)(param_1 + 0x28);
      plVar4 = plVar3 + (long)(int)param_2 * 2;
    }
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + -0x10);
    plVar3 = *(long **)(param_1 + 0x28);
    if (plVar3 <= plVar4) {
      plVar4 = &DAT_04ebdbc0;
    }
  }
  if (*(int *)((long)plVar3 + -4) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar3[-2];
  }
  iVar1 = *(int *)((long)plVar4 + 0xc);
  if (iVar1 == 9) {
    *(long *)(*plVar4 + 8) = lVar2;
  }
  else {
    if (iVar1 != 7) {
      *(long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x428) = lVar2;
      goto LAB_03f5cc8c;
    }
    if (*(char *)(*plVar4 + 6) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_03f66360(param_1);
    }
    *(long *)(*plVar4 + 0x28) = lVar2;
  }
  if (((lVar2 != 0) && ((*(byte *)(*plVar4 + 2) >> 2 & 1) != 0)) &&
     ((*(byte *)(lVar2 + 2) & 3) != 0)) {
    FUN_03f69258(param_1);
  }
LAB_03f5cc8c:
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x10;
  return 1;
}

long FUN_03f6d65c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;

  lVar3 = *(long *)(param_1 + 0x18);
  if (param_2 - 1U < 0x400) {
    if (-1 < (char)(&DAT_063cbcc8)[param_2]) {
      lVar2 = FUN_03f6d72c(param_1);
      goto LAB_03f6d6d0;
    }
  }
  lVar2 = (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),0,0,param_2);
  if ((param_2 != 0) && (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f66e08(param_1,4);
  }
LAB_03f6d6d0:
  *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + param_2;
  lVar1 = lVar3 + (param_3 & 0xffffffff) * 8;
  *(long *)(&DAT_00002c00 + lVar1) = *(long *)(&DAT_00002c00 + lVar1) + param_2;
  if (*(code **)(lVar3 + 0x4d0) != (code *)0x0) {
    (**(code **)(lVar3 + 0x4d0))(param_1,0,param_2);
  }
  return lVar2;
}

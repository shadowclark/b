long FUN_03f6d7e4(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;

  lVar7 = *(long *)(param_1 + 0x18);
  if (param_2 - 1U < 0x400) {
    lVar8 = (long)(char)(&DAT_063cbcc8)[param_2];
    if (-1 < lVar8) {
      lVar1 = lVar7 + 0x80;
      lVar4 = *(long *)(lVar1 + lVar8 * 8);
      if (lVar4 == 0) {
        lVar4 = FUN_03f6e01c(param_1,lVar1,lVar7 + 0x318,(&DAT_063cbcc8)[param_2],0);
      }
      uVar2 = *(uint *)(lVar4 + 0x30);
      if ((int)uVar2 < 0) {
        lVar6 = *(long *)(lVar4 + 0x28);
        lVar5 = *(long *)(lVar6 + 8);
        *(long *)(lVar4 + 0x28) = lVar5;
        *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
        if (lVar5 != 0) goto LAB_03f6d8b4;
      }
      else {
        lVar6 = lVar4 + (ulong)uVar2 + 0x40;
        iVar3 = uVar2 - *(int *)(lVar4 + 0x24);
        *(int *)(lVar4 + 0x30) = iVar3;
        *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
        if ((*(long *)(lVar4 + 0x28) != 0) || (-1 < iVar3)) goto LAB_03f6d8b4;
      }
      lVar5 = *(long *)(lVar4 + 0x18);
      *(long *)(lVar1 + lVar8 * 8) = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      *(undefined8 *)(lVar4 + 0x18) = 0;
      goto LAB_03f6d8b4;
    }
  }
  lVar8 = FUN_03f6d93c(param_1,lVar7 + 0x318,(int)param_2 + 0x40,param_2,1);
  lVar6 = lVar8 + 0x40;
  *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) - *(int *)(lVar8 + 0x24);
  *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + 1;
LAB_03f6d8b4:
  *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + param_2;
  lVar8 = lVar7 + (param_3 & 0xffffffff) * 8;
  *(long *)(&DAT_00002c00 + lVar8) = *(long *)(&DAT_00002c00 + lVar8) + param_2;
  if (*(code **)(lVar7 + 0x4d0) != (code *)0x0) {
    (**(code **)(lVar7 + 0x4d0))(param_1,0,param_2);
  }
  return lVar6;
}

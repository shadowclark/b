void FUN_03f7387c(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;

  if (param_3 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    *(undefined **)(param_2 + 0x20) = &DAT_04ebdcd0;
  }
  else {
    iVar2 = FUN_03f6e668(param_3 + -1);
    if (0x19 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f660f0(param_1,"table overflow");
    }
    uVar5 = iVar2 + 1;
    uVar6 = 1 << (ulong)(uVar5 & 0x1f);
    uVar7 = (ulong)uVar6;
    uVar3 = FUN_03f6d65c(param_1,uVar7 << 5,*(undefined1 *)(param_2 + 1));
    lVar4 = 0;
    *(undefined8 *)(param_2 + 0x20) = uVar3;
    do {
      lVar1 = *(long *)(param_2 + 0x20) + lVar4;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      lVar4 = lVar4 + 0x20;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(char *)(param_2 + 4) = (char)uVar5;
  *(byte *)(param_2 + 3) = ~(byte)(-1 << (ulong)(uVar5 & 0x1f));
  *(uint *)(param_2 + 0xc) = uVar6;
  return;
}

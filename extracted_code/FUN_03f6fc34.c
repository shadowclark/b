ulong FUN_03f6fc34(int *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;

  uVar3 = param_2;
  if (param_2 < 0x20) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    do {
      uVar1 = param_1[2] + (int)param_2;
      uVar2 = (uVar1 ^ *param_1 + uVar2) - (uVar1 >> 0xe | uVar1 * 0x40000);
      uVar4 = (uVar2 ^ param_1[1] + uVar4) - (uVar2 >> 0xb | uVar2 * 0x200000);
      param_2 = (ulong)((uVar4 ^ uVar1) - (uVar4 >> 0x19 | uVar4 * 0x80));
      param_1 = param_1 + 3;
      uVar3 = uVar3 - 0xc;
    } while (0x1f < uVar3);
  }
  do {
    uVar2 = (uint)param_2;
    param_2 = (ulong)(uVar2 * 0x20 + (uVar2 >> 2) + (uint)*(byte *)((long)param_1 + (uVar3 - 1)) ^
                     uVar2);
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return param_2;
}

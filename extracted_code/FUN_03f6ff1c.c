undefined1 * FUN_03f6ff1c(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;

  uVar2 = FUN_03f6fc34(param_2,param_3);
  lVar6 = *(long *)(param_1 + 0x18);
  puVar5 = *(undefined1 **)
            (*(long *)(lVar6 + 0x40) + (long)(int)(*(int *)(lVar6 + 0x38) - 1U & uVar2) * 8);
  while( true ) {
    if (puVar5 == (undefined1 *)0x0) {
      if (param_3 < 0x40000001) {
        puVar5 = (undefined1 *)FUN_03f6d7e4(param_1,param_3 + 0x19,*(undefined1 *)(param_1 + 4));
        puVar5[2] = *(byte *)(*(long *)(param_1 + 0x18) + 0x54) & 3;
        *puVar5 = 6;
        puVar5[1] = *(undefined1 *)(param_1 + 4);
        *(undefined4 *)(puVar5 + 4) = 0x8000ffff;
        *(uint *)(puVar5 + 0x10) = uVar2;
        *(int *)(puVar5 + 0x14) = (int)param_3;
        _memcpy(puVar5 + 0x18,param_2,param_3);
        (puVar5 + 0x18)[param_3] = 0;
        lVar6 = *(long *)(param_1 + 0x18);
        uVar1 = *(uint *)(lVar6 + 0x38);
        iVar3 = *(int *)(lVar6 + 0x3c);
        uVar2 = uVar1 - 1 & uVar2;
        lVar4 = *(long *)(lVar6 + 0x40);
        *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(lVar4 + (ulong)uVar2 * 8);
        *(undefined1 **)(lVar4 + (ulong)uVar2 * 8) = puVar5;
        uVar2 = iVar3 + 1;
        *(uint *)(lVar6 + 0x3c) = uVar2;
        if (((int)uVar1 < 0x40000000) && (uVar1 < uVar2)) {
          FUN_03f6fcc0(param_1,uVar1 << 1);
        }
        return puVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f6d648(param_1);
    }
    if ((*(uint *)(puVar5 + 0x14) == param_3) &&
       (iVar3 = _memcmp(param_2,puVar5 + 0x18,param_3), iVar3 == 0)) break;
    puVar5 = *(undefined1 **)(puVar5 + 8);
  }
  if ((*(byte *)(lVar6 + 0x54) & 3 ^ puVar5[2] & 0xb) != 3) {
    return puVar5;
  }
  puVar5[2] = puVar5[2] ^ 3;
  return puVar5;
}

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


void FUN_03f6fcc0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f6d648(param_1);
  }
  pvVar4 = (void *)FUN_03f6d65c(param_1,(ulong)param_2 << 3,0);
  lVar7 = *(long *)(param_1 + 0x18);
  if (param_2 != 0) {
    _bzero(pvVar4,(ulong)param_2 << 3);
  }
  uVar2 = *(uint *)(lVar7 + 0x38);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(lVar7 + 0x40) + uVar5 * 8);
      while (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + 8);
        uVar1 = *(uint *)(lVar3 + 0x10) & param_2 - 1;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)((long)pvVar4 + (long)(int)uVar1 * 8);
        *(long *)((long)pvVar4 + (long)(int)uVar1 * 8) = lVar3;
        lVar3 = lVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  FUN_03f6d9d4(param_1,*(undefined8 *)(lVar7 + 0x40),(long)(int)uVar2 << 3,0);
  *(uint *)(lVar7 + 0x38) = param_2;
  *(void **)(lVar7 + 0x40) = pvVar4;
  return;
}


undefined1 * FUN_03f736b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;

  puVar1 = (undefined1 *)FUN_03f6d7e4(param_1,0x30,*(undefined1 *)(param_1 + 4));
  puVar1[2] = *(byte *)(*(long *)(param_1 + 0x18) + 0x54) & 3;
  *puVar1 = 7;
  puVar1[1] = *(undefined1 *)(param_1 + 4);
  puVar1[5] = 0xff;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &DAT_04ebdcd0;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  if (0 < (int)param_2) {
    FUN_03f7376c(param_1,puVar1,param_2);
  }
  if (0 < (int)param_3) {
    FUN_03f7387c(param_1,puVar1,param_3);
  }
  return puVar1;
}


void FUN_03f7376c(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;

  if (0x4000000 < (int)param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_03f660f0(param_1,"table overflow");
  }
  if (-1 < (int)param_3) {
    lVar2 = FUN_03f6dc48(param_1,*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 8) << 4,
                         (ulong)param_3 << 4,*(undefined1 *)(param_2 + 1));
    *(long *)(param_2 + 0x18) = lVar2;
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 < (int)param_3) {
      uVar3 = 0;
      lVar5 = (ulong)param_3 - (long)iVar1;
      uVar6 = lVar5 - 1;
      puVar4 = (undefined4 *)(lVar2 + (long)iVar1 * 0x10 + 0x2c);
      do {
        if (uVar3 <= uVar6) {
          puVar4[-8] = 0;
        }
        if ((uVar3 | 1) <= uVar6) {
          puVar4[-4] = 0;
        }
        if ((uVar3 | 2) <= uVar6) {
          *puVar4 = 0;
        }
        if ((uVar3 | 3) <= uVar6) {
          puVar4[4] = 0;
        }
        uVar3 = uVar3 + 4;
        puVar4 = puVar4 + 0x10;
      } while ((lVar5 + 3U & 0xfffffffffffffffc) != uVar3);
    }
    *(uint *)(param_2 + 8) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f6d648();
}


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


undefined8 * FUN_03f73a8c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;

  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x20) +
           (ulong)(*(uint *)(param_2 + 0x10) &
                  (-1 << (ulong)(*(byte *)(param_1 + 4) & 0x1f) ^ 0xffffffffU)) * 0x20);
  while( true ) {
    uVar1 = *(uint *)((long)puVar2 + 0x1c);
    if ((((uVar1 & 0xf) == 6) && (puVar3 = puVar2, puVar2[2] == param_2)) ||
       (puVar3 = &DAT_04ebdbc0, uVar1 < 0x10)) break;
    puVar2 = puVar2 + ((long)((ulong)uVar1 << 0x20) >> 0x24) * 4;
  }
  return puVar3;
}

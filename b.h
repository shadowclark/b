void FUN_03f7747c(long param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_03f77490();
    return;
  }
  FUN_03f7b00c();
  return;
}


/* WARNING: Switch with 1 destination removed at 0x03f774dc */

void FUN_03f77490(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;

  pcVar3 = *(char **)(*(long *)(param_1 + 0x38) + 8);
  do {
    do {
      do {
        lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x4f0);
      } while (lVar2 == 0);
      cVar1 = *pcVar3;
    } while ((cVar1 == -0x59) || (cVar1 == -0xd));
    *(char **)(*(long *)(param_1 + 0x38) + 8) = pcVar3;
    FUN_03f772e0(param_1,lVar2,0);
  } while (*(char *)(param_1 + 3) == '\0');
  return;
}


void FUN_03f772e0(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_1a8 [2];
  undefined4 local_198;
  long local_70;

  local_70 = *(long *)PTR____stack_chk_guard_058e8298;
  plVar6 = *(long **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40);
  lVar10 = *plVar6;
  cVar4 = *(char *)(param_1 + 3);
  if (cVar4 == '\x06' || cVar4 == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    *(long *)(param_1 + 0x40) = plVar6[2];
  }
  lVar1 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)plVar6[3];
  lVar9 = plVar6[1];
  if ((lVar9 != 0) &&
     (lVar9 != *(long *)(*(long *)(lVar11 + 0x18) + 0x40) +
               (long)*(int *)(*(long *)(lVar11 + 0x18) + 0xac) * 4)) {
    plVar6[1] = lVar9 + 4;
  }
  lVar7 = lVar1;
  if (*(long *)(param_1 + 0x20) - lVar1 < 0x141) {
    FUN_03f6708c(param_1,0x14);
    lVar7 = *(long *)(param_1 + 0x28);
    plVar6 = *(long **)(param_1 + 0x38);
  }
  *plVar6 = lVar7 + 0x140;
  if (*(char *)(lVar11 + 5) == '\0') {
    lVar7 = plVar6[1];
    if (lVar7 == 0) {
      iVar5 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar11 + 0x18) + 0x40);
      iVar5 = 0;
      if (lVar7 != lVar8) {
        iVar5 = (int)((ulong)(lVar7 - lVar8) >> 2) + -1;
      }
    }
    local_198 = FUN_03f66610(*(long *)(lVar11 + 0x18),iVar5);
  }
  else {
    local_198 = 0xffffffff;
  }
  local_1a8[0] = param_3;
  (*param_2)(param_1,local_1a8);
  lVar11 = *(long *)(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x38);
  *plVar6 = lVar11 + (lVar10 - lVar3);
  plVar6[1] = lVar9;
  *(long *)(param_1 + 0x28) = lVar11 + (lVar1 - lVar3);
  if ((cVar4 == '\x06') || ((cVar4 == '\x01' && (*(char *)(param_1 + 3) != '\x01')))) {
    *(char *)(param_1 + 3) = cVar4;
    *(long *)(param_1 + 0x40) = lVar11 + (lVar2 - lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_058e8298 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


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


void UndefinedFunction_03f7e9f4(void)

{
  code *pcVar1;

                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f7e9f8);
  (*pcVar1)();
}


undefined8 FUN_03f7e9f8(long param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  code cVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;

  if (*(int *)((long)param_2 + 0xc) != 8) {
    FUN_03f81e98(param_1,param_2);
  }
  lVar17 = *param_2;
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x58)) {
    puVar8 = (ulong *)FUN_03f670a8(param_1);
  }
  else {
    puVar8 = (ulong *)(*(long *)(param_1 + 0x38) + 0x28);
    *(ulong **)(param_1 + 0x38) = puVar8;
  }
  puVar8[2] = (ulong)(param_2 + 2);
  puVar8[3] = (ulong)param_2;
  bVar5 = *(byte *)(lVar17 + 3);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  *puVar8 = lVar3 + (ulong)bVar5 * 0x10;
  puVar8[1] = 0;
  *(int *)(puVar8 + 4) = param_3;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  *(long **)(param_1 + 0x40) = param_2 + 2;
  if (lVar2 - lVar3 <= (long)((ulong)bVar5 * 0x10)) {
    iVar4 = *(int *)(param_1 + 8);
    iVar1 = iVar4 + (uint)bVar5;
    if ((int)(uint)bVar5 <= iVar4) {
      iVar1 = iVar4 << 1;
    }
    FUN_03f66e4c(param_1,iVar1,1);
  }
  pcVar9 = *(code **)(lVar17 + 0x18);
  if (*(char *)(lVar17 + 5) == '\0') {
    lVar17 = *(long *)(param_1 + 0x40);
    cVar6 = pcVar9[5];
    for (uVar14 = *(ulong *)(param_1 + 0x28); uVar14 < lVar17 + (ulong)(byte)cVar6 * 0x10;
        uVar14 = uVar14 + 0x10) {
      *(undefined4 *)(uVar14 + 0xc) = 0;
    }
    if (pcVar9[4] == (code)0x0) {
      uVar14 = *puVar8;
    }
    *(ulong *)(param_1 + 0x28) = uVar14;
    puVar8[1] = *(ulong *)(pcVar9 + 0x40);
    if ((*(long *)(pcVar9 + 0x10) == 0) || (*(long *)(pcVar9 + 8) == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      *(undefined4 *)((long)puVar8 + 0x24) = 4;
    }
  }
  else {
    uVar7 = (*pcVar9)(param_1);
    if ((int)uVar7 < 0) {
      uVar10 = 2;
    }
    else {
      lVar17 = *(long *)(param_1 + 0x38);
      puVar11 = *(undefined8 **)(lVar17 + 0x18);
      if ((param_3 != 0) && (uVar7 != 0)) {
        puVar13 = *(undefined8 **)(param_1 + 0x28);
        puVar12 = puVar11;
        puVar16 = puVar13 + (ulong)uVar7 * -2;
        do {
          puVar15 = puVar16 + 2;
          uVar10 = *puVar16;
          puVar11 = puVar12 + 2;
          puVar12[1] = puVar16[1];
          *puVar12 = uVar10;
          param_3 = param_3 + -1;
          if (param_3 == 0) break;
          puVar12 = puVar11;
          puVar16 = puVar15;
        } while (puVar15 < puVar13);
      }
      if (0 < param_3) {
        uVar7 = param_3 + 1;
        puVar12 = puVar11;
        do {
          puVar11 = puVar12 + 2;
          *(undefined4 *)((long)puVar12 + 0xc) = 0;
          uVar7 = uVar7 - 1;
          puVar12 = puVar11;
        } while (1 < uVar7);
      }
      uVar10 = *(undefined8 *)(lVar17 + -0x18);
      *(long *)(param_1 + 0x38) = lVar17 + -0x28;
      *(undefined8 *)(param_1 + 0x40) = uVar10;
      *(undefined8 **)(param_1 + 0x28) = puVar11;
      uVar10 = 1;
    }
  }
  return uVar10;
}


void FUN_03f7ebcc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;

  lVar1 = *(long *)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  iVar5 = *(int *)(lVar1 + 0x20);
  puVar3 = puVar2;
  if (iVar5 != 0 && param_2 < puVar7) {
    do {
      puVar8 = param_2 + 2;
      uVar4 = *param_2;
      puVar2 = puVar3 + 2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar4;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) break;
      puVar3 = puVar2;
      param_2 = puVar8;
    } while (puVar8 < puVar7);
  }
  if (0 < iVar5) {
    uVar6 = iVar5 + 1;
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 2;
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
      uVar6 = uVar6 - 1;
      puVar3 = puVar2;
    } while (1 < uVar6);
  }
  uVar4 = *(undefined8 *)(lVar1 + -0x18);
  *(long **)(param_1 + 0x38) = (long *)(lVar1 + -0x28);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  if (*(int *)(lVar1 + 0x20) != -1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
  }
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  return;
}


void FUN_03f67d40(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;

  while( true ) {
    while( true ) {
      cVar1 = *(char *)(param_1 + 3);
      if ((char)DAT_05fabec8 == '\x01') {
        if (((cVar1 != '\0') && (cVar1 != '\x7f')) ||
           (uVar3 = *(ulong *)(param_1 + 0x38), uVar3 <= *(ulong *)(param_1 + 0x60))) {
          return;
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else {
        if (cVar1 != '\0') {
          return;
        }
        uVar3 = *(ulong *)(param_1 + 0x38);
        if (uVar3 <= *(ulong *)(param_1 + 0x60)) {
          return;
        }
      }
      if (*(char *)(**(long **)(uVar3 + 0x18) + 5) != '\0') break;
      FUN_03f7747c(param_1);
    }
    iVar2 = (**(code **)(**(long **)(uVar3 + 0x18) + 0x28))(param_1,0);
    if (*(char *)(param_1 + 3) == '\x01') {
      return;
    }
    if (*(char *)(param_1 + 3) == '\x06') break;
    FUN_03f7ebcc(param_1,*(long *)(param_1 + 0x28) + (long)iVar2 * -0x10);
  }
  return;
}


undefined8 * FUN_03f81e98(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];

  puVar4 = (undefined8 *)FUN_03f75f6c(param_1,param_2,4);
  if (*(int *)((long)puVar4 + 0xc) == 8) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    if (param_2 < puVar7) {
      do {
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7 = puVar7 + -2;
      } while (param_2 < puVar7);
      puVar7 = *(undefined8 **)(param_1 + 0x28);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar7 + 2;
    uVar8 = *puVar4;
    param_2[1] = puVar4[1];
    *param_2 = uVar8;
    return puVar4;
  }
  pcVar6 = "call";
  auVar9 = FUN_03f660c0(param_1,param_2);
  plVar5 = auVar9._0_8_;
  uVar3 = _vsnprintf((char *)0x0,0,auVar9._8_8_,pcVar6);
  if (0 < (int)uVar3) {
    uVar1 = plVar5[1];
    if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)plVar5 + 0x17);
    }
    std::string::resize((ulong)plVar5,(char)uVar1 + (char)uVar3);
    plVar2 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar2 = plVar5;
    }
    uVar3 = _vsnprintf((char *)((long)plVar2 + uVar1),(ulong)(uVar3 + 1),auVar9._8_8_,pcVar6);
  }
  return (undefined8 *)(ulong)uVar3;
}


undefined2 * FUN_03f6f7c8(code *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;

  puVar3 = (undefined2 *)(*param_1)(param_2,0,0,0x4710);
  if (puVar3 != (undefined2 *)0x0) {
    *puVar3 = 10;
    *(undefined1 *)(puVar3 + 0x6a) = 9;
    *(undefined1 *)(puVar3 + 1) = 9;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined2 **)(puVar3 + 0xc) = puVar3 + 0x40;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined4 *)((long)puVar3 + 3) = 0;
    *(undefined8 *)(puVar3 + 0x1c) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x24) = 0;
    *(undefined8 *)(puVar3 + 0x34) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x3c) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(code **)(puVar3 + 0x48) = param_1;
    *(undefined8 *)(puVar3 + 0x4c) = param_2;
    *(undefined2 **)(puVar3 + 0x1c8) = puVar3;
    *(undefined2 **)(puVar3 + 0x74) = puVar3 + 0x6c;
    *(undefined2 **)(puVar3 + 0x78) = puVar3 + 0x6c;
    *(undefined4 *)(puVar3 + 0x294) = 0x70000000;
    *(undefined8 *)(puVar3 + 0x2c4) = 0;
    *(undefined8 *)(puVar3 + 0x2c0) = 0;
    *(undefined8 *)(puVar3 + 0x2c8) = 1;
    *(undefined4 *)(puVar3 + 0x28a) = 0;
    *(undefined4 *)(puVar3 + 0x292) = 0;
    *(undefined1 *)((long)puVar3 + 0xd5) = 0;
    *(undefined8 *)(puVar3 + 0x54) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x5c) = 0;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x2d4) = 0;
    *(undefined8 *)(puVar3 + 0x2d0) = 0;
    *(undefined8 *)(puVar3 + 0x2cc) = 0;
    *(undefined8 *)(puVar3 + 0x44) = 0x4710;
    *(undefined8 *)(puVar3 + 100) = 0xc8000000c8;
    *(undefined4 *)(puVar3 + 0x68) = 0x400;
    *(undefined8 *)(puVar3 + 0x84) = 0;
    *(undefined8 *)(puVar3 + 0x80) = 0;
    *(undefined8 *)(puVar3 + 0x8c) = 0;
    *(undefined8 *)(puVar3 + 0x88) = 0;
    *(undefined8 *)(puVar3 + 0x94) = 0;
    *(undefined8 *)(puVar3 + 0x90) = 0;
    *(undefined8 *)(puVar3 + 0x9c) = 0;
    *(undefined8 *)(puVar3 + 0x98) = 0;
    *(undefined8 *)(puVar3 + 0xa4) = 0;
    *(undefined8 *)(puVar3 + 0xa0) = 0;
    *(undefined8 *)(puVar3 + 0xac) = 0;
    *(undefined8 *)(puVar3 + 0xa8) = 0;
    *(undefined8 *)(puVar3 + 0xb4) = 0;
    *(undefined8 *)(puVar3 + 0xb0) = 0;
    *(undefined8 *)(puVar3 + 0xbc) = 0;
    *(undefined8 *)(puVar3 + 0xb8) = 0;
    *(undefined8 *)(puVar3 + 0xc4) = 0;
    *(undefined8 *)(puVar3 + 0xc0) = 0;
    *(undefined8 *)(puVar3 + 0xcc) = 0;
    *(undefined8 *)(puVar3 + 200) = 0;
    *(undefined8 *)(puVar3 + 0xd4) = 0;
    *(undefined8 *)(puVar3 + 0xd0) = 0;
    *(undefined8 *)(puVar3 + 0xdc) = 0;
    *(undefined8 *)(puVar3 + 0xd8) = 0;
    *(undefined8 *)(puVar3 + 0xe4) = 0;
    *(undefined8 *)(puVar3 + 0xe0) = 0;
    *(undefined8 *)(puVar3 + 0xec) = 0;
    *(undefined8 *)(puVar3 + 0xe8) = 0;
    *(undefined8 *)(puVar3 + 0xf4) = 0;
    *(undefined8 *)(puVar3 + 0xf0) = 0;
    *(undefined8 *)(puVar3 + 0xfc) = 0;
    *(undefined8 *)(puVar3 + 0xf8) = 0;
    *(undefined8 *)(puVar3 + 0x104) = 0;
    *(undefined8 *)(puVar3 + 0x100) = 0;
    *(undefined8 *)(puVar3 + 0x10c) = 0;
    *(undefined8 *)(puVar3 + 0x108) = 0;
    lVar4 = 0x250;
    *(undefined8 *)(puVar3 + 0x114) = 0;
    *(undefined8 *)(puVar3 + 0x110) = 0;
    *(undefined8 *)(puVar3 + 0x11c) = 0;
    *(undefined8 *)(puVar3 + 0x118) = 0;
    do {
      *(undefined8 *)((long)puVar3 + lVar4) = 0;
      ((undefined8 *)((long)puVar3 + lVar4))[1] = 0;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x390);
    *(undefined8 *)(puVar3 + 0x1cc) = 0;
    *(undefined8 *)(puVar3 + 600) = 0;
    *(undefined8 *)(puVar3 + 0x254) = 0;
    *(undefined8 *)(puVar3 + 0x260) = 0;
    *(undefined8 *)(puVar3 + 0x25c) = 0;
    *(undefined8 *)(puVar3 + 0x268) = 0;
    *(undefined8 *)(puVar3 + 0x264) = 0;
    *(undefined8 *)(puVar3 + 0x270) = 0;
    *(undefined8 *)(puVar3 + 0x26c) = 0;
    *(undefined8 *)(puVar3 + 0x278) = 0;
    *(undefined8 *)(puVar3 + 0x274) = 0;
    *(undefined8 *)(puVar3 + 0x280) = 0;
    *(undefined8 *)(puVar3 + 0x27c) = 0;
    *(undefined8 *)(puVar3 + 0x124) = 0;
    *(undefined8 *)(puVar3 + 0x120) = 0;
    _bzero(puVar3 + 0x1a40,0x800);
    lVar4 = -0x2490;
    do {
      lVar1 = (long)puVar3 + lVar4;
      *(undefined4 *)(&UNK_00002c8c + lVar1) = 0;
      *(undefined4 *)(&UNK_00002c9c + lVar1) = 0;
      *(undefined4 *)(&UNK_00002cc4 + lVar1) = 0;
      *(undefined8 *)(&UNK_00002cb4 + lVar1) = 0;
      *(undefined8 *)(&UNK_00002cbc + lVar1) = 0;
      *(undefined8 *)(&UNK_00002cac + lVar1) = 0;
      lVar4 = lVar4 + 0x48;
    } while (lVar4 != 0);
    _bzero(puVar3 + 0x1e40,0x400);
    if (((byte)DAT_05fabf10 & 1) != 0) {
      _bzero(puVar3 + 0x2040,0x410);
    }
    _bzero(puVar3 + 0x1644,0x7f8);
    *(undefined8 *)(puVar3 + 0x1640) = 0x4710;
    *(undefined8 *)(puVar3 + 0x29c) = 0;
    *(undefined8 *)(puVar3 + 0x298) = 0;
    *(undefined8 *)(puVar3 + 0x2a4) = 0;
    *(undefined8 *)(puVar3 + 0x2a0) = 0;
    *(undefined8 *)(puVar3 + 0x2ac) = 0;
    *(undefined8 *)(puVar3 + 0x2a8) = 0;
    *(undefined8 *)(puVar3 + 0x2b4) = 0;
    *(undefined8 *)(puVar3 + 0x2b0) = 0;
    *(undefined8 *)(puVar3 + 700) = 0;
    *(undefined8 *)(puVar3 + 0x2b8) = 0;
    *(undefined8 *)(puVar3 + 0x2dc) = 0;
    *(undefined8 *)(puVar3 + 0x2d8) = 0;
    *(undefined8 *)(puVar3 + 0x2e4) = 0;
    *(undefined8 *)(puVar3 + 0x2e0) = 0;
    *(undefined8 *)(puVar3 + 0x2ec) = 0;
    *(undefined8 *)(puVar3 + 0x2e8) = 0;
    *(undefined8 *)(puVar3 + 0x2f4) = 0;
    *(undefined8 *)(puVar3 + 0x2f0) = 0;
    *(undefined8 *)(puVar3 + 0x2fc) = 0;
    *(undefined8 *)(puVar3 + 0x2f8) = 0;
    *(undefined8 *)(puVar3 + 0x304) = 0;
    *(undefined8 *)(puVar3 + 0x300) = 0;
    *(undefined8 *)(puVar3 + 0x30c) = 0;
    *(undefined8 *)(puVar3 + 0x308) = 0;
    *(undefined8 *)(puVar3 + 0x314) = 0;
    *(undefined8 *)(puVar3 + 0x310) = 0;
    *(undefined8 *)(puVar3 + 0x31c) = 0;
    *(undefined8 *)(puVar3 + 0x318) = 0;
    *(undefined8 *)(puVar3 + 0x324) = 0;
    *(undefined8 *)(puVar3 + 800) = 0;
    *(undefined8 *)(puVar3 + 0x32c) = 0;
    *(undefined8 *)(puVar3 + 0x328) = 0;
    *(undefined8 *)(puVar3 + 0x334) = 0;
    *(undefined8 *)(puVar3 + 0x330) = 0;
    *(undefined8 *)(puVar3 + 0x33c) = 0;
    *(undefined8 *)(puVar3 + 0x338) = 0;
    *(undefined8 *)(puVar3 + 0x344) = 0;
    *(undefined8 *)(puVar3 + 0x340) = 0;
    *(undefined8 *)(puVar3 + 0x34c) = 0;
    *(undefined8 *)(puVar3 + 0x348) = 0;
    *(undefined8 *)(puVar3 + 0x354) = 0;
    *(undefined8 *)(puVar3 + 0x350) = 0;
    *(undefined8 *)(puVar3 + 0x35c) = 0;
    *(undefined8 *)(puVar3 + 0x358) = 0;
    *(undefined8 *)(puVar3 + 0x364) = 0;
    *(undefined8 *)(puVar3 + 0x360) = 0;
    *(undefined8 *)(puVar3 + 0x36c) = 0;
    *(undefined8 *)(puVar3 + 0x368) = 0;
    *(undefined8 *)(puVar3 + 0x374) = 0;
    *(undefined8 *)(puVar3 + 0x370) = 0;
    *(undefined8 *)(puVar3 + 0x37c) = 0;
    *(undefined8 *)(puVar3 + 0x378) = 0;
    *(undefined8 *)(puVar3 + 900) = 0;
    *(undefined8 *)(puVar3 + 0x380) = 0;
    *(undefined8 *)(puVar3 + 0x38c) = 0;
    *(undefined8 *)(puVar3 + 0x388) = 0;
    *(undefined8 *)(puVar3 + 0x394) = 0;
    *(undefined8 *)(puVar3 + 0x390) = 0;
    *(undefined8 *)(puVar3 + 0x39c) = 0;
    *(undefined8 *)(puVar3 + 0x398) = 0;
    *(undefined8 *)(puVar3 + 0x3a4) = 0;
    *(undefined8 *)(puVar3 + 0x3a0) = 0;
    *(undefined8 *)(puVar3 + 0x3ac) = 0;
    *(undefined8 *)(puVar3 + 0x3a8) = 0;
    *(undefined8 *)(puVar3 + 0x3b4) = 0;
    *(undefined8 *)(puVar3 + 0x3b0) = 0;
    *(undefined8 *)(puVar3 + 0x3bc) = 0;
    *(undefined8 *)(puVar3 + 0x3b8) = 0;
    *(undefined8 *)(puVar3 + 0x3c4) = 0;
    *(undefined8 *)(puVar3 + 0x3c0) = 0;
    *(undefined8 *)(puVar3 + 0x3cc) = 0;
    *(undefined8 *)(puVar3 + 0x3c8) = 0;
    *(undefined8 *)(puVar3 + 0x3d4) = 0;
    *(undefined8 *)(puVar3 + 0x3d0) = 0;
    *(undefined8 *)(puVar3 + 0x3dc) = 0;
    *(undefined8 *)(puVar3 + 0x3d8) = 0;
    *(undefined8 *)(puVar3 + 0x3e4) = 0;
    *(undefined8 *)(puVar3 + 0x3e0) = 0;
    *(undefined8 *)(puVar3 + 0x3ec) = 0;
    *(undefined8 *)(puVar3 + 1000) = 0;
    *(undefined8 *)(puVar3 + 0x3f4) = 0;
    *(undefined8 *)(puVar3 + 0x3f0) = 0;
    *(undefined8 *)(puVar3 + 0x22a0) = 0;
    *(undefined8 *)(puVar3 + 0x229c) = 0;
    *(undefined8 *)(puVar3 + 0x2298) = 0;
    *(undefined8 *)(puVar3 + 0x2294) = 0;
    *(undefined8 *)(puVar3 + 0x2290) = 0;
    *(undefined8 *)(puVar3 + 0x228c) = 0;
    *(undefined8 *)(puVar3 + 0x2288) = 0;
    *(undefined8 *)(puVar3 + 0x2284) = 0;
    *(undefined8 *)(puVar3 + 0x2280) = 0;
    *(undefined8 *)(puVar3 + 0x227c) = 0;
    *(undefined8 *)(puVar3 + 0x2278) = 0;
    *(undefined8 *)(puVar3 + 0x2274) = 0;
    *(undefined8 *)(puVar3 + 0x2270) = 0;
    *(undefined8 *)(puVar3 + 0x226c) = 0;
    *(undefined8 *)(puVar3 + 0x2268) = 0;
    *(undefined8 *)(puVar3 + 0x2264) = 0;
    *(undefined8 *)(puVar3 + 0x2260) = 0;
    *(undefined8 *)(puVar3 + 0x225c) = 0;
    *(undefined8 *)(puVar3 + 0x2258) = 0;
    *(undefined8 *)(puVar3 + 0x2254) = 0;
    *(undefined8 *)(puVar3 + 0x2250) = 0;
    *(undefined8 *)(puVar3 + 0x224c) = 0;
    *(undefined8 *)(puVar3 + 0x2248) = 0;
    *(undefined8 *)(puVar3 + 0x22a8) = 0;
    *(undefined8 *)(puVar3 + 0x22a4) = 0;
    *(undefined8 *)(puVar3 + 0x22b0) = 0;
    *(undefined8 *)(puVar3 + 0x22ac) = 0;
    *(undefined8 *)(puVar3 + 0x22b8) = 0;
    *(undefined8 *)(puVar3 + 0x22b4) = 0;
    *(undefined8 *)(puVar3 + 0x22c0) = 0;
    *(undefined8 *)(puVar3 + 0x22bc) = 0;
    *(undefined8 *)(puVar3 + 0x22c8) = 0;
    *(undefined8 *)(puVar3 + 0x22c4) = 0;
    *(undefined8 *)(puVar3 + 0x22d0) = 0;
    *(undefined8 *)(puVar3 + 0x22cc) = 0;
    *(undefined8 *)(puVar3 + 0x22d8) = 0;
    *(undefined8 *)(puVar3 + 0x22d4) = 0;
    *(undefined8 *)(puVar3 + 0x22e0) = 0;
    *(undefined8 *)(puVar3 + 0x22dc) = 0;
    *(undefined8 *)(puVar3 + 0x22e8) = 0;
    *(undefined8 *)(puVar3 + 0x22e4) = 0;
    *(undefined8 *)(puVar3 + 0x22f0) = 0;
    *(undefined8 *)(puVar3 + 0x22ec) = 0;
    *(undefined8 *)(puVar3 + 0x22f8) = 0;
    *(undefined8 *)(puVar3 + 0x22f4) = 0;
    *(undefined8 *)(puVar3 + 0x2300) = 0;
    *(undefined8 *)(puVar3 + 0x22fc) = 0;
    *(undefined8 *)(puVar3 + 0x2308) = 0;
    *(undefined8 *)(puVar3 + 0x2304) = 0;
    *(undefined8 *)(puVar3 + 0x2310) = 0;
    *(undefined8 *)(puVar3 + 0x230c) = 0;
    *(undefined8 *)(puVar3 + 0x2318) = 0;
    *(undefined8 *)(puVar3 + 0x2314) = 0;
    *(undefined8 *)(puVar3 + 0x2320) = 0;
    *(undefined8 *)(puVar3 + 0x231c) = 0;
    *(undefined8 *)(puVar3 + 9000) = 0;
    *(undefined8 *)(puVar3 + 0x2324) = 0;
    *(undefined8 *)(puVar3 + 0x2330) = 0;
    *(undefined8 *)(puVar3 + 0x232c) = 0;
    *(undefined8 *)(puVar3 + 0x2338) = 0;
    *(undefined8 *)(puVar3 + 0x2334) = 0;
    *(undefined8 *)(puVar3 + 0x2340) = 0;
    *(undefined8 *)(puVar3 + 0x233c) = 0;
    *(undefined8 *)(puVar3 + 0x2348) = 0;
    *(undefined8 *)(puVar3 + 0x2344) = 0;
    *(undefined8 *)(puVar3 + 0x2350) = 0;
    *(undefined8 *)(puVar3 + 0x234c) = 0;
    *(undefined8 *)(puVar3 + 0x2358) = 0;
    *(undefined8 *)(puVar3 + 0x2354) = 0;
    *(undefined8 *)(puVar3 + 0x2360) = 0;
    *(undefined8 *)(puVar3 + 0x235c) = 0;
    *(undefined8 *)(puVar3 + 0x2368) = 0;
    *(undefined8 *)(puVar3 + 0x2364) = 0;
    *(undefined8 *)(puVar3 + 0x2370) = 0;
    *(undefined8 *)(puVar3 + 0x236c) = 0;
    *(undefined8 *)(puVar3 + 0x2378) = 0;
    *(undefined8 *)(puVar3 + 0x2374) = 0;
    *(undefined8 *)(puVar3 + 0x2380) = 0;
    *(undefined8 *)(puVar3 + 0x237c) = 0;
    *(undefined8 *)(puVar3 + 0x2384) = 0;
    iVar2 = FUN_03f66d48(puVar3,FUN_03f6fac4,0);
    if (iVar2 != 0) {
      FUN_03f6fb88(puVar3);
      puVar3 = (undefined2 *)0x0;
    }
  }
  return puVar3;
}


undefined8 FUN_03f67530(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  ushort uVar4;

  cVar1 = *(char *)(param_1 + 3);
  if ((cVar1 == '\x06' || cVar1 == '\x01') ||
     ((cVar1 == '\0' && (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x60))))) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(ushort *)(param_2 + 0x68);
      *(ushort *)(param_1 + 0x68) = uVar4;
      if (199 < uVar4) {
        pcVar3 = "C stack overflow";
        goto LAB_03f67584;
      }
    }
    *(ushort *)(param_1 + 0x68) = uVar4 + 1;
    *(ushort *)(param_1 + 0x6a) = uVar4 + 1;
    *(undefined1 *)(param_1 + 5) = 1;
    if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
      FUN_03f693c0(param_1,param_1,param_1 + 0x10);
    }
    uVar2 = 0;
  }
  else {
    pcVar3 = "cannot resume non-suspended coroutine";
LAB_03f67584:
    FUN_03f67cb0(param_1,pcVar3);
    uVar2 = 2;
  }
  return uVar2;
}


undefined8 FUN_03f6523c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;

  lVar2 = FUN_03f5b8c0(param_1,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5de0c(param_1,1,"thread");
  }
  iVar1 = FUN_03f5cdd0(param_1,lVar2);
  if (1 < iVar1 - 3U && iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5ddc0(param_1,"cannot close %s coroutine");
  }
  if (*(byte *)(lVar2 + 3) < 2) {
    uVar4 = 1;
    FUN_03f5bdc4(param_1,1);
    goto LAB_03f65300;
  }
  FUN_03f5bdc4(param_1,0);
  if (*(char *)(lVar2 + 3) == '\x05') {
    pcVar3 = "error in error handling";
LAB_03f652d4:
    FUN_03f5bb90(param_1,pcVar3);
  }
  else {
    if (*(char *)(lVar2 + 3) == '\x04') {
      pcVar3 = "not enough memory";
      goto LAB_03f652d4;
    }
    iVar1 = FUN_03f5a714(lVar2);
    if (iVar1 != 0) {
      FUN_03f5a50c(lVar2,param_1,1);
    }
  }
  uVar4 = 2;
LAB_03f65300:
  FUN_03f6f65c(lVar2);
  return uVar4;
}


void FUN_03f6f478(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  lVar1 = FUN_03f6d65c(param_2,0x140,*(undefined1 *)(param_1 + 1));
  *(long *)(param_1 + 0x38) = lVar1;
  *(undefined4 *)(param_1 + 0xc) = 8;
  *(long *)(param_1 + 0x58) = lVar1 + 0x118;
  *(long *)(param_1 + 0x60) = lVar1;
  lVar2 = FUN_03f6d65c(param_2,0x2d0,*(undefined1 *)(param_1 + 1));
  lVar1 = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  *(undefined4 *)(param_1 + 8) = 0x2d;
  uVar5 = 3;
  uVar4 = 2;
  uVar7 = 1;
  uVar6 = 0;
  do {
    if (uVar6 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0xc) = 0;
    }
    if (uVar7 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0x1c) = 0;
    }
    if (uVar4 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0x2c) = 0;
    }
    if (uVar5 < 0x2d) {
      *(undefined4 *)(lVar2 + lVar1 + 0x3c) = 0;
    }
    uVar4 = uVar4 + 4;
    uVar5 = uVar5 + 4;
    uVar6 = uVar6 + 4;
    uVar7 = uVar7 + 4;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x300);
  plVar3 = *(long **)(param_1 + 0x38);
  lVar1 = lVar2 + 0x10;
  *(long *)(param_1 + 0x20) = lVar2 + 0x280;
  *(long *)(param_1 + 0x28) = lVar1;
  *(undefined4 *)(lVar2 + 0xc) = 0;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  *(long *)(param_1 + 0x40) = lVar1;
  *plVar3 = lVar2 + 0x150;
  return;
}


void FUN_03f6fac4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;

  plVar2 = *(long **)(param_1 + 0x18);
  FUN_03f6f478(param_1,param_1);
  uVar1 = FUN_03f736b8(param_1,0,2);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  lVar3 = *(long *)(param_1 + 0x18);
  uVar1 = FUN_03f736b8(param_1,0,2);
  *(undefined8 *)(lVar3 + 0x498) = uVar1;
  *(undefined4 *)(lVar3 + 0x4a4) = 7;
  FUN_03f6fcc0(param_1,0x20);
  FUN_03f75e60(param_1);
  lVar3 = FUN_03f6ff1c(param_1,"not enough memory",0x11);
  *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
  lVar3 = FUN_03f6ff1c(param_1,"error in error handling",0x17);
  *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
  *plVar2 = plVar2[1] << 2;
  return;
}


undefined8 FUN_03f66d48(undefined8 param_1,code *param_2,undefined8 param_3)

{
  (*param_2)(param_1,param_3);
  return 0;
}


void FUN_03f6fb88(long param_1)

{
  code *pcVar1;
  long lVar2;

  lVar2 = *(long *)(param_1 + 0x18);
  FUN_03f680f8(param_1,*(undefined8 *)(param_1 + 0x30));
  FUN_03f6836c(param_1);
  FUN_03f6d9d4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
               (long)*(int *)(*(long *)(param_1 + 0x18) + 0x38) << 3,0);
  FUN_03f6f610(param_1,param_1);
  pcVar1 = *(code **)(*(long *)(param_1 + 0x18) + 0x538);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x03f6fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),param_1,0x4710,0);
  return;
}


void FUN_03f670a8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(param_1 + 0xc);
  if (0x57e3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f66e08(param_1,5);
  }
  iVar3 = iVar2 * 2;
  if (19999 < iVar3) {
    iVar3 = 20000;
  }
  iVar1 = 0x57e4;
  if (iVar2 < 20000) {
    iVar1 = iVar3;
  }
  FUN_03f67010(param_1,iVar1);
  if (*(int *)(param_1 + 0xc) < 0x4e21) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 0x28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"stack overflow");
}


void FUN_03f67010(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;

  if (-1 < (int)param_2) {
    lVar2 = *(long *)(param_1 + 0x60);
    lVar1 = FUN_03f6dc48(param_1,lVar2,(long)*(int *)(param_1 + 0xc) * 0x28,(ulong)param_2 * 0x28,
                         *(undefined1 *)(param_1 + 1));
    *(uint *)(param_1 + 0xc) = param_2;
    *(long *)(param_1 + 0x38) = lVar1 + (*(long *)(param_1 + 0x38) - lVar2);
    *(ulong *)(param_1 + 0x58) = lVar1 + (ulong)param_2 * 0x28 + -0x28;
    *(long *)(param_1 + 0x60) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f6d648(param_1);
}


void FUN_03f66e4c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;

  if (0x4000000 < param_2) {
    if (param_3 != 0) {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + -0x28);
      uVar8 = *puVar6;
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + -0x18);
      *(undefined8 **)(param_1 + 0x38) = puVar6;
      *(undefined8 *)(param_1 + 0x40) = uVar10;
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f66e08(param_1,4);
  }
  if (param_2 < -5) {
                    /* WARNING: Subroutine does not return */
    FUN_03f6d648(param_1);
  }
  lVar13 = *(long *)(param_1 + 0x30);
  uVar1 = param_2 + 5;
  lVar3 = FUN_03f6dc48(param_1,lVar13,(long)*(int *)(param_1 + 8) << 4,(ulong)uVar1 << 4,
                       *(undefined1 *)(param_1 + 1));
  *(long *)(param_1 + 0x30) = lVar3;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)uVar1) {
    uVar4 = 0;
    lVar11 = (ulong)uVar1 - (long)iVar2;
    uVar12 = lVar11 - 1;
    puVar9 = (undefined4 *)(lVar3 + (long)iVar2 * 0x10 + 0x2c);
    do {
      if (uVar4 <= uVar12) {
        puVar9[-8] = 0;
      }
      if ((uVar4 | 1) <= uVar12) {
        puVar9[-4] = 0;
      }
      if ((uVar4 | 2) <= uVar12) {
        *puVar9 = 0;
      }
      if ((uVar4 | 3) <= uVar12) {
        puVar9[4] = 0;
      }
      uVar4 = uVar4 + 4;
      puVar9 = puVar9 + 0x10;
    } while ((lVar11 + 3U & 0xfffffffffffffffc) != uVar4);
  }
  *(uint *)(param_1 + 8) = uVar1;
  *(long *)(param_1 + 0x20) = lVar3 + (long)param_2 * 0x10;
  *(long *)(param_1 + 0x28) = lVar3 + (*(long *)(param_1 + 0x28) - lVar13);
  for (lVar11 = *(long *)(param_1 + 0x78); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x20)) {
    *(long *)(lVar11 + 8) = lVar3 + (*(long *)(lVar11 + 8) - lVar13);
  }
  plVar7 = *(long **)(param_1 + 0x38);
  for (plVar5 = *(long **)(param_1 + 0x60); plVar5 <= plVar7; plVar5 = plVar5 + 5) {
    *plVar5 = lVar3 + (*plVar5 - lVar13);
    plVar5[2] = lVar3 + (plVar5[2] - lVar13);
    plVar5[3] = lVar3 + (plVar5[3] - lVar13);
  }
  *(long *)(param_1 + 0x40) = lVar3 + (*(long *)(param_1 + 0x40) - lVar13);
  return;
}


void FUN_03f67454(long param_1,int param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;

  if (param_2 - 2U < 2) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + -0x10);
    param_3[1] = *(undefined8 *)(*(long *)(param_1 + 0x28) + -8);
    *param_3 = uVar2;
  }
  else {
    if (param_2 == 5) {
      pcVar1 = "error in error handling";
      uVar2 = 0x17;
    }
    else {
      if (param_2 != 4) goto LAB_03f674c8;
      pcVar1 = "not enough memory";
      uVar2 = 0x11;
    }
    uVar2 = FUN_03f6ff1c(param_1,pcVar1,uVar2);
    *param_3 = uVar2;
    *(undefined4 *)((long)param_3 + 0xc) = 6;
  }
LAB_03f674c8:
  *(undefined8 **)(param_1 + 0x28) = param_3 + 2;
  return;
}


void FUN_03f66e08(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;

  puVar1 = (undefined8 *)___cxa_allocate_exception(0x18);
  *puVar1 = &DAT_05dadd88;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = param_2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_05dadd60,std::exception::~exception);
}


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


void FUN_03f6d648(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"memory allocation error: block too big");
}


void FUN_03f67e24(long param_1)

{
  undefined1 *puVar1;

  puVar1 = (undefined1 *)FUN_03f6d7e4(param_1,0xb0,*(undefined1 *)(param_1 + 4));
  puVar1[2] = *(byte *)(*(long *)(param_1 + 0x18) + 0x54) & 3;
  *puVar1 = 0xc;
  puVar1[1] = *(undefined1 *)(param_1 + 4);
  *(undefined8 *)(puVar1 + 0xa8) = 0;
  *(undefined8 *)(puVar1 + 0xa0) = 0;
  *(undefined8 *)(puVar1 + 0x9b) = 0;
  *(undefined8 *)(puVar1 + 0x93) = 0;
  *(undefined8 *)(puVar1 + 0x8b) = 0;
  *(undefined8 *)(puVar1 + 0x83) = 0;
  *(undefined8 *)(puVar1 + 0x7b) = 0;
  *(undefined8 *)(puVar1 + 0x73) = 0;
  *(undefined8 *)(puVar1 + 0x6b) = 0;
  *(undefined8 *)(puVar1 + 99) = 0;
  *(undefined8 *)(puVar1 + 0x5b) = 0;
  *(undefined8 *)(puVar1 + 0x53) = 0;
  *(undefined8 *)(puVar1 + 0x4b) = 0;
  *(undefined8 *)(puVar1 + 0x43) = 0;
  *(undefined8 *)(puVar1 + 0x3b) = 0;
  *(undefined8 *)(puVar1 + 0x33) = 0;
  *(undefined8 *)(puVar1 + 0x2b) = 0;
  *(undefined8 *)(puVar1 + 0x23) = 0;
  *(undefined8 *)(puVar1 + 0x1b) = 0;
  *(undefined8 *)(puVar1 + 0x13) = 0;
  *(undefined8 *)(puVar1 + 0xb) = 0;
  *(undefined8 *)(puVar1 + 3) = 0;
  return;
}


undefined8 FUN_03035e5c(int param_1)

{
  if (((0x3b < param_1 - 7U) || ((1L << ((ulong)(param_1 - 7U) & 0x3f) & 0x829400003f02323U) == 0) )
     && ((0xb < param_1 - 0x4aU || ((1 << (ulong)(param_1 - 0x4aU & 0x1f) & 0xe7bU) == 0)))) {
    return 1;
  }
  return 2;
}


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


void FUN_03f75e60(long param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long lVar7;

  lVar7 = 0x79;
  puVar5 = (undefined8 *)((long)&PTR_DAT_05dae6bd + 3);
  do {
    pcVar4 = (char *)*puVar5;
    sVar1 = _strlen(pcVar4);
    uVar2 = FUN_03f6ff1c(param_1,pcVar4,sVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 * 8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar7 * 8);
    *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
    lVar7 = lVar7 + 1;
    puVar5 = puVar5 + 1;
  } while (lVar7 != 0x85);
  lVar7 = 100;
  ppuVar6 = &PTR_s___index_05dae720;
  do {
    pcVar4 = *ppuVar6;
    sVar1 = _strlen(pcVar4);
    uVar2 = FUN_03f6ff1c(param_1,pcVar4,sVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 * 8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar7 * 8);
    *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
    lVar7 = lVar7 + 1;
    ppuVar6 = ppuVar6 + 1;
  } while (lVar7 != 0x79);
  return;
}


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


void FUN_03f660f0(undefined8 param_1,char *param_2)

{
  char acStack_228 [512];
  undefined8 local_28;

  local_28 = *(undefined8 *)PTR____stack_chk_guard_058e8298;
  _vsnprintf(acStack_228,0x200,param_2,&stack0x00000000);
  FUN_03f5a4b0(param_1,1);
  FUN_03f66374(param_1,acStack_228);
                    /* WARNING: Subroutine does not return */
  FUN_03f66e08(param_1,2);
}


void FUN_03f660c0(undefined8 param_1)

{
  FUN_03f7607c();
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"attempt to %s a %s value");
}


void FUN_03f66184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_03f7607c();
  FUN_03f7607c(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"attempt to concatenate %s with %s");
}


void FUN_03f661c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;

  lVar1 = FUN_03f7607c();
  lVar2 = FUN_03f7607c(param_1,param_3);
  if (lVar1 == lVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f660f0(param_1,"attempt to perform arithmetic (%s) on %s");
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"attempt to perform arithmetic (%s) on %s and %s");
}


void FUN_03f66240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_03f7607c();
  FUN_03f7607c(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"attempt to compare %s %s %s");
}


void FUN_03f662b4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;

  FUN_03f7607c();
  FUN_03f7607c(param_1,param_3);
  if (((*(int *)((long)param_3 + 0xc) == 6) && (*param_3 != 0)) &&
     (*(uint *)(*param_3 + 0x14) < 0x41)) {
    pcVar1 = "attempt to index %s with \'%s\'";
  }
  else {
    pcVar1 = "attempt to index %s with %s";
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,pcVar1);
}


int FUN_03f66610(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return *(int *)(*(long *)(param_1 + 0x68) +
                   (long)(param_2 >> (*(uint *)(param_1 + 0x94) & 0x1f)) * 4) +
           (uint)*(byte *)(*(long *)(param_1 + 0x50) + (long)param_2);
  }
  return 0;
}


void FUN_03f6938c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;

  lVar1 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x55) == '\x02') {
    FUN_03f6928c(lVar1,param_3);
    return;
  }
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfb;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_2;
  return;
}


long FUN_03f7607c(void)

{
  long lVar1;

  lVar1 = FUN_03f75fd0();
  return lVar1 + 0x18;
}


undefined8 FUN_03f76a08(undefined8 param_1)

{
  FUN_03f5e5fc(param_1,"vector",&DAT_05dae828);
  FUN_03f5bae4(0,0,0,param_1);
  FUN_03f5c724(param_1,0xfffffffe,"zero");
  FUN_03f5bae4(0x3f800000,0x3f800000,0x3f800000,param_1);
  FUN_03f5c724(param_1,0xfffffffe,"one");
  FUN_03f5c300(param_1,0,1);
  FUN_03f5bae4(0,0,0,param_1);
  FUN_03f5aa94(param_1,0xfffffffe);
  FUN_03f5cbac(param_1,0xfffffffe);
  FUN_03f5a728(param_1,0xfffffffe);
  FUN_03f5bcc4(param_1,FUN_03f77254,0,0,0);
  FUN_03f5c724(param_1,0xfffffffe,"__index");
  FUN_03f5c38c(param_1,0xffffffff,1);
  FUN_03f5a728(param_1,0xfffffffe);
  return 1;
}


undefined8 FUN_03f77254(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  long local_28;

  lVar2 = FUN_03f5e470(param_1,1);
  local_28 = 0;
  pcVar3 = (char *)FUN_03f5dfcc(param_1,2,&local_28);
  if ((local_28 == 1) && (uVar1 = ((int)*pcVar3 | 0x20U) - 0x78, uVar1 < 3)) {
    FUN_03f5ba5c((double)*(float *)(lVar2 + (ulong)uVar1 * 4),param_1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5ddc0(param_1,"attempt to index vector with \'%s\'");
}


void FUN_03f5e5fc(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;

  if (param_2 != 0) {
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      plVar3 = param_3;
      do {
        plVar3 = plVar3 + 2;
        iVar4 = iVar4 + 1;
      } while (*plVar3 != 0);
    }
    FUN_03f5e72c(param_1,0xffffd8f0,"_LOADED",1);
    FUN_03f5bf14(param_1,0xffffffff,param_2);
    iVar1 = FUN_03f5ab34(param_1,0xffffffff);
    if (iVar1 != 7) {
      FUN_03f5a728(param_1,0xfffffffe);
      lVar2 = FUN_03f5e72c(param_1,0xffffd8ee,param_2,iVar4);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5ddc0(param_1,"name conflict for module \'%s\'");
      }
      FUN_03f5aa94(param_1,0xffffffff);
      FUN_03f5c724(param_1,0xfffffffd,param_2);
    }
    FUN_03f5a808(param_1,0xfffffffe);
  }
  lVar2 = *param_3;
  while (lVar2 != 0) {
    FUN_03f5bcc4(param_1,param_3[1],lVar2,0,0);
    FUN_03f5c724(param_1,0xfffffffe,*param_3);
    lVar2 = param_3[2];
    param_3 = param_3 + 2;
  }
  return;
}


void FUN_03f5bae4(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)(param_4 + 0x28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = 5;
  *(undefined4 **)(param_4 + 0x28) = puVar1 + 4;
  return;
}


void FUN_03f5c724(long param_1,uint param_2,char *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined4 local_34;

  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_03f5dc38(param_1);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 0x28) <= puVar2) {
      puVar2 = &DAT_04ebdbc0;
    }
  }
  sVar1 = _strlen(param_3);
  local_40 = FUN_03f6ff1c(param_1,param_3,sVar1);
  local_34 = 6;
  FUN_03f8074c(param_1,puVar2,&local_40,*(long *)(param_1 + 0x28) + -0x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x10;
  return;
}


void FUN_03f5c300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;

  if (**(ulong **)(param_1 + 0x18) <= (*(ulong **)(param_1 + 0x18))[1]) {
    FUN_03f683a0(param_1,1);
  }
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_03f693c0(param_1,param_1,param_1 + 0x10);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = FUN_03f736b8(param_1,param_2,param_3);
  *puVar2 = uVar1;
  *(undefined4 *)((long)puVar2 + 0xc) = 7;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  return;
}


void FUN_03f5bcc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;

  if (**(ulong **)(param_1 + 0x18) <= (*(ulong **)(param_1 + 0x18))[1]) {
    FUN_03f683a0(param_1,1);
  }
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_03f693c0(param_1,param_1,param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x60)) {
    puVar3 = (undefined8 *)(param_1 + 0x70);
  }
  else {
    puVar3 = (undefined8 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x18) + 0x10);
  }
  lVar2 = FUN_03f67fac(param_1,param_4,*puVar3);
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  iVar7 = (int)param_4;
  plVar4 = (long *)(*(long *)(param_1 + 0x28) + (long)iVar7 * -0x10);
  *(long **)(param_1 + 0x28) = plVar4;
  if (iVar7 != 0) {
    lVar5 = (long)iVar7;
    lVar6 = lVar5 << 4;
    do {
      lVar1 = *(long *)(param_1 + 0x28) + lVar6;
      uVar8 = *(undefined8 *)(lVar1 + -0x10);
      puVar3 = (undefined8 *)(lVar2 + 0x20 + lVar6);
      puVar3[1] = *(undefined8 *)(lVar1 + -8);
      *puVar3 = uVar8;
      lVar6 = lVar6 + -0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    plVar4 = *(long **)(param_1 + 0x28);
  }
  *plVar4 = lVar2;
  *(undefined4 *)((long)plVar4 + 0xc) = 8;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  return;
}


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


void FUN_03f5aa94(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;

  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_03f693c0(param_1,param_1,param_1 + 0x10);
  }
  iVar3 = (int)param_2;
  if (iVar3 < 1) {
    if (iVar3 < -9999) {
      puVar2 = (undefined8 *)FUN_03f5dc38(param_1,param_2);
      puVar1 = *(undefined8 **)(param_1 + 0x28);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      puVar2 = puVar1 + (long)iVar3 * 2;
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + (param_2 & 0xffffffff) * 0x10 + -0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (puVar1 <= puVar2) {
      puVar2 = &DAT_04ebdbc0;
    }
  }
  uVar4 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar4;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  return;
}


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


void FUN_03f5a728(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;

  if ((int)param_2 < 0) {
    uVar1 = *(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x10 + 0x10;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10;
    uVar4 = *(ulong *)(param_1 + 0x28);
    if (uVar4 < uVar1) {
      uVar2 = 0;
      uVar3 = *(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10;
      if (uVar3 <= uVar4 + 0x10) {
        uVar3 = uVar4 + 0x10;
      }
      uVar3 = uVar3 + ~uVar4 >> 4;
      puVar5 = (undefined4 *)(uVar4 + 0x2c);
      do {
        if (uVar2 <= uVar3) {
          puVar5[-8] = 0;
        }
        if ((uVar2 | 1) <= uVar3) {
          puVar5[-4] = 0;
        }
        if ((uVar2 | 2) <= uVar3) {
          *puVar5 = 0;
        }
        if ((uVar2 | 3) <= uVar3) {
          puVar5[4] = 0;
        }
        uVar2 = uVar2 + 4;
        puVar5 = puVar5 + 0x10;
      } while ((uVar3 + 4 & 0x1ffffffffffffffc) != uVar2);
    }
  }
  *(ulong *)(param_1 + 0x28) = uVar1;
  return;
}


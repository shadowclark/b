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

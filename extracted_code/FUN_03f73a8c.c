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

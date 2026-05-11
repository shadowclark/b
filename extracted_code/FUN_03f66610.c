int FUN_03f66610(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return *(int *)(*(long *)(param_1 + 0x68) +
                   (long)(param_2 >> (*(uint *)(param_1 + 0x94) & 0x1f)) * 4) +
           (uint)*(byte *)(*(long *)(param_1 + 0x50) + (long)param_2);
  }
  return 0;
}

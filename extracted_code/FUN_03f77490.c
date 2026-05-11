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

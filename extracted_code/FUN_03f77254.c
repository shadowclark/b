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

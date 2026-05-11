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

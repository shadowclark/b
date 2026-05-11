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

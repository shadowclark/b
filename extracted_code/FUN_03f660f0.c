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

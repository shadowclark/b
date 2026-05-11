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

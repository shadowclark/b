void UndefinedFunction_03f7e9f4(void)

{
  code *pcVar1;

                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3f7e9f8);
  (*pcVar1)();
}

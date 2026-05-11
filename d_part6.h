void FUN_03f75e60(long param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long lVar7;

  lVar7 = 0x79;
  puVar5 = (undefined8 *)((long)&PTR_DAT_05dae6bd + 3);
  do {
    pcVar4 = (char *)*puVar5;
    sVar1 = _strlen(pcVar4);
    uVar2 = FUN_03f6ff1c(param_1,pcVar4,sVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 * 8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar7 * 8);
    *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
    lVar7 = lVar7 + 1;
    puVar5 = puVar5 + 1;
  } while (lVar7 != 0x85);
  lVar7 = 100;
  ppuVar6 = &PTR_s___index_05dae720;
  do {
    pcVar4 = *ppuVar6;
    sVar1 = _strlen(pcVar4);
    uVar2 = FUN_03f6ff1c(param_1,pcVar4,sVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 * 8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar7 * 8);
    *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
    lVar7 = lVar7 + 1;
    ppuVar6 = ppuVar6 + 1;
  } while (lVar7 != 0x79);
  return;
}


undefined8 * FUN_03f75f6c(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;

  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 == 9) {
    plVar3 = (long *)(*param_2 + 8);
  }
  else if (iVar1 == 7) {
    plVar3 = (long *)(*param_2 + 0x28);
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0x428);
  }
  if (*plVar3 != 0) {
    puVar2 = (undefined8 *)
             FUN_03f73a8c(*plVar3,*(undefined8 *)
                                   (*(long *)(param_1 + 0x18) + (ulong)param_3 * 8 + 800));
    return puVar2;
  }
  return &DAT_04ebdbc0;
}


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


void FUN_03f660c0(undefined8 param_1)

{
  FUN_03f7607c();
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"attempt to %s a %s value");
}


void FUN_03f66184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_03f7607c();
  FUN_03f7607c(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"attempt to concatenate %s with %s");
}


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


void FUN_03f66240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_03f7607c();
  FUN_03f7607c(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_03f660f0(param_1,"attempt to compare %s %s %s");
}


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


int FUN_03f66610(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return *(int *)(*(long *)(param_1 + 0x68) +
                   (long)(param_2 >> (*(uint *)(param_1 + 0x94) & 0x1f)) * 4) +
           (uint)*(byte *)(*(long *)(param_1 + 0x50) + (long)param_2);
  }
  return 0;
}


void FUN_03f6938c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;

  lVar1 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x55) == '\x02') {
    FUN_03f6928c(lVar1,param_3);
    return;
  }
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfb;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_2;
  return;
}


long FUN_03f7607c(void)

{
  long lVar1;

  lVar1 = FUN_03f75fd0();
  return lVar1 + 0x18;
}


undefined8 FUN_03f76a08(undefined8 param_1)

{
  FUN_03f5e5fc(param_1,"vector",&DAT_05dae828);
  FUN_03f5bae4(0,0,0,param_1);
  FUN_03f5c724(param_1,0xfffffffe,"zero");
  FUN_03f5bae4(0x3f800000,0x3f800000,0x3f800000,param_1);
  FUN_03f5c724(param_1,0xfffffffe,"one");
  FUN_03f5c300(param_1,0,1);
  FUN_03f5bae4(0,0,0,param_1);
  FUN_03f5aa94(param_1,0xfffffffe);
  FUN_03f5cbac(param_1,0xfffffffe);
  FUN_03f5a728(param_1,0xfffffffe);
  FUN_03f5bcc4(param_1,FUN_03f77254,0,0,0);
  FUN_03f5c724(param_1,0xfffffffe,"__index");
  FUN_03f5c38c(param_1,0xffffffff,1);
  FUN_03f5a728(param_1,0xfffffffe);
  return 1;
}
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


void FUN_03f5e5fc(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;

  if (param_2 != 0) {
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      plVar3 = param_3;
      do {
        plVar3 = plVar3 + 2;
        iVar4 = iVar4 + 1;
      } while (*plVar3 != 0);
    }
    FUN_03f5e72c(param_1,0xffffd8f0,"_LOADED",1);
    FUN_03f5bf14(param_1,0xffffffff,param_2);
    iVar1 = FUN_03f5ab34(param_1,0xffffffff);
    if (iVar1 != 7) {
      FUN_03f5a728(param_1,0xfffffffe);
      lVar2 = FUN_03f5e72c(param_1,0xffffd8ee,param_2,iVar4);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5ddc0(param_1,"name conflict for module \'%s\'");
      }
      FUN_03f5aa94(param_1,0xffffffff);
      FUN_03f5c724(param_1,0xfffffffd,param_2);
    }
    FUN_03f5a808(param_1,0xfffffffe);
  }
  lVar2 = *param_3;
  while (lVar2 != 0) {
    FUN_03f5bcc4(param_1,param_3[1],lVar2,0,0);
    FUN_03f5c724(param_1,0xfffffffe,*param_3);
    lVar2 = param_3[2];
    param_3 = param_3 + 2;
  }
  return;
}
void FUN_03f5bae4(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)(param_4 + 0x28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = 5;
  *(undefined4 **)(param_4 + 0x28) = puVar1 + 4;
  return;
}
void FUN_03f5c724(long param_1,uint param_2,char *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined4 local_34;

  if ((int)param_2 < 1) {
    if ((int)param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_03f5dc38(param_1);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + -0x10);
    if (*(undefined8 **)(param_1 + 0x28) <= puVar2) {
      puVar2 = &DAT_04ebdbc0;
    }
  }
  sVar1 = _strlen(param_3);
  local_40 = FUN_03f6ff1c(param_1,param_3,sVar1);
  local_34 = 6;
  FUN_03f8074c(param_1,puVar2,&local_40,*(long *)(param_1 + 0x28) + -0x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x10;
  return;
}

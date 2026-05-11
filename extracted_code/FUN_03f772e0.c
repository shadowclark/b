void FUN_03f772e0(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_1a8 [2];
  undefined4 local_198;
  long local_70;

  local_70 = *(long *)PTR____stack_chk_guard_058e8298;
  plVar6 = *(long **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40);
  lVar10 = *plVar6;
  cVar4 = *(char *)(param_1 + 3);
  if (cVar4 == '\x06' || cVar4 == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    *(long *)(param_1 + 0x40) = plVar6[2];
  }
  lVar1 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)plVar6[3];
  lVar9 = plVar6[1];
  if ((lVar9 != 0) &&
     (lVar9 != *(long *)(*(long *)(lVar11 + 0x18) + 0x40) +
               (long)*(int *)(*(long *)(lVar11 + 0x18) + 0xac) * 4)) {
    plVar6[1] = lVar9 + 4;
  }
  lVar7 = lVar1;
  if (*(long *)(param_1 + 0x20) - lVar1 < 0x141) {
    FUN_03f6708c(param_1,0x14);
    lVar7 = *(long *)(param_1 + 0x28);
    plVar6 = *(long **)(param_1 + 0x38);
  }
  *plVar6 = lVar7 + 0x140;
  if (*(char *)(lVar11 + 5) == '\0') {
    lVar7 = plVar6[1];
    if (lVar7 == 0) {
      iVar5 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar11 + 0x18) + 0x40);
      iVar5 = 0;
      if (lVar7 != lVar8) {
        iVar5 = (int)((ulong)(lVar7 - lVar8) >> 2) + -1;
      }
    }
    local_198 = FUN_03f66610(*(long *)(lVar11 + 0x18),iVar5);
  }
  else {
    local_198 = 0xffffffff;
  }
  local_1a8[0] = param_3;
  (*param_2)(param_1,local_1a8);
  lVar11 = *(long *)(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x38);
  *plVar6 = lVar11 + (lVar10 - lVar3);
  plVar6[1] = lVar9;
  *(long *)(param_1 + 0x28) = lVar11 + (lVar1 - lVar3);
  if ((cVar4 == '\x06') || ((cVar4 == '\x01' && (*(char *)(param_1 + 3) != '\x01')))) {
    *(char *)(param_1 + 3) = cVar4;
    *(long *)(param_1 + 0x40) = lVar11 + (lVar2 - lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_058e8298 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

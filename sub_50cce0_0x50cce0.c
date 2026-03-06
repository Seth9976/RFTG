// 函数名称: sub_50cce0
// 虚拟地址: 0x50cce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_50cce0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edx
    int32_t* eax = sub_510b30(ecx, edx)
    long double x87_r7 = float.t(0)
    *eax = arg1
    __builtin_memcpy(&eax[2], arg2, 0x54)
    long double temp0 = fconvert.t(eax[0xf])
    x87_r7 - temp0
    int32_t eax_1
    eax_1.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        sub_50cb70(eax)
        return eax[0x133]
    
    sub_4c5870("state.transform.t.s > 0", &data_83f3d3, "FabDef.cpp", 0x210, "FabBegin")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

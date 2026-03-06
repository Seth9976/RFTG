// 函数名称: sub_50c830
// 虚拟地址: 0x50c830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_50c830(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_4 = arg3
    int32_t var_4 = arg3
    
    if (arg1 s>= 0x80)
        sub_4c5870("i < 128", &data_83f3d3, "FabDef.cpp", 0x194, "FabSubstate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = *(arg3 + (arg1 << 2) + 0x7c)
    int128_t* result_1
    int128_t* result
    
    if (ecx == 0)
        result = sub_510a30()
        *(arg3 + (arg1 << 2) + 0x7c) = *(result + 0x4cc)
    else
        uint32_t eax_1 = zx.d(ecx.w)
        
        if (eax_1 u>= data_be1e7c)
            result = sub_510a30()
            *(arg3 + (arg1 << 2) + 0x7c) = *(result + 0x4cc)
        else
            result_1 = eax_1 * 0x4d0 + data_be1e78
            
            if (*(result_1 + 0x4cc) != ecx)
                result = sub_510a30()
                *(arg3 + (arg1 << 2) + 0x7c) = *(result + 0x4cc)
            else
                result = result_1
    
    long double x87_r7 = float.t(0)
    __builtin_memcpy(result + 0x3c, arg3 + 0x3c, 0x20)
    long double temp0 = fconvert.t(*(result + 0x3c))
    x87_r7 - temp0
    result_1.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        return result
    
    sub_4c5870("substate->transform.t.s > 0", &data_83f3d3, "FabDef.cpp", 0x1a0, "FabSubstate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

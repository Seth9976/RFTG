// 函数名称: sub_4979b0
// 虚拟地址: 0x4979b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4979b0(int32_t arg1, int32_t arg2, int128_t* arg3, int32_t arg4 @ edi, char* arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t* arg9, int32_t* arg10)
{
    // 第一条实际指令: double var_14 = fconvert.d(fconvert.t(-1.0))
    double var_14 = fconvert.d(fconvert.t(-1.0))
    int32_t esi = 0
    int32_t ebx = 0
    bool cond:0 = *arg9 s<= 0x1e
    int32_t eax_1 = sx.d(*(arg3 + arg1 * 0x14 + 0x466))
    int32_t var_c = 0
    int32_t var_8 = 0
    
    if (not(cond:0))
        *arg9 = 0x1e
    
    sub_497900(arg3, arg5, arg6, eax_1, arg7, arg8, *arg9, arg4, *arg10, 0, 0, &var_c, &var_8, &var_14)
    long double x87_r7_1 = fconvert.t(var_14)
    long double x87_r6 = fconvert.t(-1.0)
    x87_r6 - x87_r7_1
    int32_t eax_3
    eax_3.w = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        char const* const var_20_1 = "Couldn't find valid payment!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    int32_t edx_8 = var_8
    int32_t ecx = 0
    
    if (edx_8 s>= 1)
        int32_t eax_4 = 1
        
        do
            if ((edx_8 & eax_4) != 0)
                *(arg4 + (esi << 2)) = *(arg4 + (ecx << 2))
                esi += 1
            
            ecx += 1
            eax_4 = 1 << ecx.b
        while (eax_4 s<= edx_8)
    
    int32_t edx_9 = var_c
    *arg10 = esi
    int32_t ecx_2 = 0
    
    if (edx_9 s< 1)
        *arg9 = 0
        return arg9
    
    int32_t eax_6 = 1
    
    do
        if ((edx_9 & eax_6) != 0)
            *(arg8 + (ebx << 2)) = *(arg8 + (ecx_2 << 2))
            ebx += 1
        
        ecx_2 += 1
        eax_6 = 1 << ecx_2.b
    while (eax_6 s<= edx_9)
    
    *arg9 = ebx
    return eax_6
}

// 函数名称: sub_4ec970
// 虚拟地址: 0x4ec970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ec970(void* arg1, int32_t arg2, float arg3, float arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_5c
    void var_28
    __builtin_memcpy(&var_28, sub_4eefe0(&var_5c, arg1), 0x20)
    int32_t edi = arg2
    
    if (edi s>= 0x10)
        edi = 0x10
    else if (edi s< 2)
        edi = 2
    
    void* entry_ebx
    int32_t ecx_1 = *(entry_ebx + 0x284)
    float var_2c_1 = fconvert.s(fconvert.t(*(*(arg1 + 0x2e4) + 0x5c)))
    int32_t eax_4
    
    if (ecx_1 s>= 2)
        long double x87_r7_1 = fconvert.t(*(entry_ebx + ecx_1 * 0x24 + 0x40))
        long double x87_r6_2 = fconvert.t(var_2c_1) - fconvert.t(arg4)
        x87_r6_2 - x87_r7_1
        eax_4.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe
    
    if (ecx_1 s< 2 || (eax_4:1.b & 0x41) == 0)
        if (ecx_1 - edi + 1 s> 0)
            sub_5a6c10(entry_ebx + 0x44, entry_ebx + (ecx_1 - edi + 1) * 0x24 + 0x44, 
                (ecx_1 - (ecx_1 - edi + 1)) * 0x24)
            *(entry_ebx + 0x284) -= ecx_1 - edi + 1
        
        int32_t eax_6 = *(entry_ebx + 0x284)
        *(entry_ebx + 0x284) = eax_6 + 1
        *(entry_ebx + eax_6 * 0x24 + 0x64) = fconvert.s(fconvert.t(var_2c_1))
    
    float var_18
    long double x87_r7_3 = fconvert.t(var_18)
    int32_t eax_8 = *(entry_ebx + 0x284)
    float var_20
    long double x87_r5 = fconvert.t(var_20)
    float var_1c
    long double x87_r4_1 = fconvert.t(var_1c)
    int32_t var_14
    *(entry_ebx + eax_8 * 0x24 + 0x20) = var_14
    float var_24
    long double x87_r2 = fconvert.t(var_24)
    int32_t var_10
    *(entry_ebx + eax_8 * 0x24 + 0x24) = var_10
    int32_t var_c
    *(entry_ebx + eax_8 * 0x24 + 0x28) = var_c
    long double x87_r2_2 = fconvert.t(2.0)
    *(entry_ebx + eax_8 * 0x24 + 0x2c) = fconvert.s((x87_r4_1 * x87_r2 + x87_r7_3 * x87_r5) * x87_r2_2)
    *(entry_ebx + eax_8 * 0x24 + 0x30) = fconvert.s(x87_r2_2 * (x87_r4_1 * x87_r5 - x87_r7_3 * x87_r2))
    *(entry_ebx + eax_8 * 0x24 + 0x34) =
        fconvert.s(x87_r7_3 * x87_r7_3 + x87_r4_1 * x87_r4_1 - x87_r5 * x87_r5 - x87_r2 * x87_r2)
    *(entry_ebx + eax_8 * 0x24 + 0x38) = fconvert.s(fconvert.t(arg3))
    *(entry_ebx + eax_8 * 0x24 + 0x3c) = fconvert.s(float.t(0))
    int32_t ecx_11 = *(entry_ebx + 0x284)
    
    if (ecx_11 == edi - 1 && ecx_11 s>= 2)
        *(entry_ebx + 0x60) = fconvert.s((fconvert.t(var_2c_1)
            - fconvert.t(*(entry_ebx + eax_8 * 0x24 + 0x40))) / fconvert.t(arg4))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_ebx + eax_8 * 0x24 + 0x20
}

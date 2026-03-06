// 函数名称: sub_4ecaf0
// 虚拟地址: 0x4ecaf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ecaf0(void* arg1, int32_t arg2, float arg3, float arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = arg2
    void var_74
    void var_28
    __builtin_memcpy(&var_28, sub_4eefe0(&var_74, arg1), 0x20)
    
    if (edx s>= 0x10)
        edx = 0x10
    else if (edx s< 2)
        edx = 2
    
    void* entry_ebx
    int32_t ecx = *(entry_ebx + 0x284)
    float var_2c_1 = fconvert.s(fconvert.t(arg4) / float.t(edx - 1))
    float var_44
    float var_40
    float var_3c
    float var_14
    float var_10
    float var_c
    
    if (ecx == 0)
    label_4ecc32:
        
        if (ecx - edx + 1 s> 0)
            sub_5a6c10(entry_ebx + 0x44, entry_ebx + (ecx - edx + 1) * 0x24 + 0x44, 
                (ecx - (ecx - edx + 1)) * 0x24)
            *(entry_ebx + 0x284) -= ecx - edx + 1
        
        *(entry_ebx + 0x284) += 1
    else
        if (edx s< 2)
            sub_4c5870("trailNumSegments >= 2", &data_83f3d3, "Particle.cpp", 0x379, "RibbonUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_5 = ecx * 9
        void* eax_6 = entry_ebx + (eax_5 << 2)
        float var_54_1 =
            fconvert.s(fconvert.t(*(entry_ebx + (eax_5 << 2) + 0x20)) - fconvert.t(*(eax_6 - 4)))
        float var_50_1 = fconvert.s(fconvert.t(*(eax_6 + 0x24)) - fconvert.t(*eax_6))
        float var_4c_1 = fconvert.s(fconvert.t(*(eax_6 + 0x28)) - fconvert.t(*(eax_6 + 4)))
        var_44 = fconvert.s(fconvert.t(var_14) - fconvert.t(*(eax_6 + 0x20)))
        var_40 = fconvert.s(fconvert.t(var_10) - fconvert.t(*(eax_6 + 0x24)))
        var_3c = fconvert.s(fconvert.t(var_c) - fconvert.t(*(eax_6 + 0x28)))
        long double x87_r7_14 = fconvert.t(var_50_1)
        long double x87_r6_1 = fconvert.t(var_54_1)
        long double x87_r5_1 = fconvert.t(var_4c_1)
        long double x87_r4_1 = fconvert.t(var_2c_1)
        long double x87_r6_5 =
            fconvert.t(fconvert.s(x87_r7_14 * x87_r7_14 + x87_r6_1 * x87_r6_1 + x87_r5_1 * x87_r5_1))
        long double x87_r7_19 = x87_r4_1 * x87_r4_1
        x87_r6_5 - x87_r7_19
        eax_6.w = (x87_r6_5 < x87_r7_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_5, x87_r7_19) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_19 ? 1 : 0) << 0xe
        
        if ((eax_6:1.b & 0x41) == 0)
            long double x87_r7_20 = fconvert.t(var_40)
            long double x87_r6_6 = fconvert.t(var_44)
            long double x87_r5_4 = fconvert.t(var_3c)
            long double x87_r7_24 = fconvert.t(fconvert.s(x87_r7_20 * x87_r7_20 + x87_r6_6 * x87_r6_6
                + x87_r5_4 * x87_r5_4))
            long double temp1_1 = fconvert.t(0f)
            x87_r7_24 - temp1_1
            eax_6.w = (x87_r7_24 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_24, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_24 == temp1_1 ? 1 : 0) << 0xe
            
            if ((eax_6:1.b & 0x41) == 0)
                goto label_4ecc32
    
    int32_t eax_8 = *(entry_ebx + 0x284)
    *(entry_ebx + eax_8 * 0x24 + 0x20) = var_14
    *(entry_ebx + eax_8 * 0x24 + 0x24) = var_10
    *(entry_ebx + eax_8 * 0x24 + 0x28) = var_c
    float var_24[0x4]
    sub_465a20(&var_44, var_c, &var_24)
    float ecx_8 = var_44
    *(entry_ebx + eax_8 * 0x24 + 0x38) = fconvert.s(fconvert.t(arg3))
    *(entry_ebx + eax_8 * 0x24 + 0x2c) = ecx_8
    *(entry_ebx + eax_8 * 0x24 + 0x30) = var_40
    *(entry_ebx + eax_8 * 0x24 + 0x3c) = fconvert.s(float.t(0))
    *(entry_ebx + eax_8 * 0x24 + 0x34) = var_3c
    int32_t result = *(entry_ebx + 0x284)
    
    if (result == edx - 1 && result s>= 2)
        long double st0_1
        st0_1, result =
            sub_48b8d0(entry_ebx + result * 0x24 - 4, var_40, entry_ebx + eax_8 * 0x24 + 0x20)
        *(entry_ebx + 0x60) = fconvert.s(st0_1 / fconvert.t(var_2c_1))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_526310
// 虚拟地址: 0x526310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_526310(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void* entry_ebx
    int32_t eax = *(entry_ebx + 0x19d0)
    
    if (eax != 0)
        if (eax s<= 0)
            sub_4c5870("i < ui.numChildren", &data_83f3d3, "UI2.cpp", 0x828, "UI2GetChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx
        void* eax_2 = sub_530500(ecx, *(entry_ebx + 0x15d0))
        float ecx_1 = *(eax_2 + 0x14c8)
        float edx_2 = *(eax_2 + 0x14cc)
        int32_t edi_1 = *(entry_ebx + 0x1544)
        float edx_3 = *(eax_2 + 0x14d4)
        float ecx_2 = *(eax_2 + 0x14d0)
        float var_4c = *(entry_ebx + 8)
        float eax_4 = *(entry_ebx + 0x14)
        float edx_4 = *(entry_ebx + 0x10)
        int32_t eax_6
        int32_t edx_5
        edx_5:eax_6 = sx.q(arg3)
        int32_t temp0_1 = divs.dp.d(edx_5:eax_6, edi_1)
        int32_t temp1_1 = mods.dp.d(edx_5:eax_6, edi_1)
        float ecx_3 = *(entry_ebx + 0xc)
        int32_t ecx_4 = *(entry_ebx + 0x1548)
        int32_t var_68_1 = temp1_1
        int32_t var_64_1 = temp0_1
        
        if (temp0_1 s>= ecx_4)
            var_68_1 = (temp0_1 - ecx_4) * edi_1 + temp1_1
            var_64_1 = ecx_4 - 1
        
        float var_34_1 = fconvert.s(float.t(*(entry_ebx + 0x1544)))
        float var_30_1 = fconvert.s(float.t(*(entry_ebx + 0x1548)))
        float var_20_1 = fconvert.s(fconvert.t(ecx_2) - fconvert.t(ecx_1))
        float var_60_1 = fconvert.s(fconvert.t(edx_3) - fconvert.t(edx_2))
        float eax_13
        float edx_12
        eax_13, edx_12 = sub_5260a0(*(entry_ebx + 8), *(entry_ebx + 0xc), *(entry_ebx + 0x10), 
            *(entry_ebx + 0x14), fconvert.s(fconvert.t(var_20_1)), fconvert.s(fconvert.t(var_60_1)), 
            *(entry_ebx + 0x154c), *(entry_ebx + 0x1550), *(entry_ebx + 0x1554), *(entry_ebx + 0x1558), 
            var_34_1, var_30_1)
        long double x87_r7_9 = fconvert.t(var_34_1)
        float var_28_2 = eax_13
        long double x87_r5_1 = float.t(1)
        float var_14 = fconvert.s(x87_r7_9 - x87_r5_1)
        long double x87_r5_3 = fconvert.t(var_30_1)
        float var_1c_1 = fconvert.s(fconvert.t(var_28_2) * fconvert.t(var_14))
        float var_18_1 = fconvert.s(fconvert.t(edx_12) * fconvert.t(fconvert.s(x87_r5_3 - x87_r5_1)))
        float var_c = fconvert.s(fconvert.t(edx_4) - fconvert.t(var_4c))
        float var_8_1 = fconvert.s(fconvert.t(eax_4) - fconvert.t(ecx_3))
        var_14 = fconvert.s(fconvert.t(var_20_1))
        long double x87_r5_15 = fconvert.t(var_14)
        long double x87_r5_17 = fconvert.t(fconvert.s(fconvert.t(var_60_1)))
        float var_30_2 = fconvert.s(x87_r5_3 * x87_r5_17)
        var_14 = fconvert.s(fconvert.t(fconvert.s(x87_r7_9 * x87_r5_15)) + fconvert.t(var_1c_1))
        long double x87_r4_4 = fconvert.t(var_14)
        long double x87_r3_2 = fconvert.t(fconvert.s(fconvert.t(var_30_2) + fconvert.t(var_18_1)))
        long double x87_r4_8 = x87_r3_2
        long double x87_r3_4 = fconvert.t(fconvert.s(fconvert.t(var_c) / x87_r4_4))
        long double x87_r2_2 = fconvert.t(fconvert.s(fconvert.t(var_8_1) / x87_r3_2))
        x87_r2_2 - x87_r3_4
        eax_13.w = (x87_r2_2 < x87_r3_4 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_2, x87_r3_4) ? 1 : 0) << 0xa
            | (x87_r2_2 == x87_r3_4 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r4_8 = x87_r2_2
        else
            x87_r3_4 = x87_r2_2
        
        float var_20_2 = fconvert.s(x87_r3_4)
        
        if (*(entry_ebx + 0x14f0) == 6)
            var_20_2 = fconvert.s(fconvert.t(esi[3]))
        
        long double x87_r3_6 = fconvert.t(var_20_2)
        float var_ac
        __builtin_memcpy(&var_ac, esi, 0x40)
        float var_1c_3 = fconvert.s(x87_r5_15 * x87_r3_6)
        float var_18_3 = fconvert.s(x87_r5_17 * x87_r3_6)
        var_c = fconvert.s(x87_r4_4 * x87_r3_6)
        var_14 = var_c
        float var_10_4 = fconvert.s(x87_r3_6 * x87_r4_8)
        float eax_16
        int32_t edx_13
        eax_16, edx_13 = sub_4cc680(*(entry_ebx + 0x14ec))
        int32_t var_8_3 = edx_13
        void var_3c
        float var_b8_3 = &var_3c
        var_c = eax_16
        float* eax_17 = sub_505540(eax_16, &var_4c, &var_14, &var_c, &var_c, var_b8_3)
        int32_t edx_15 = eax_17[1]
        var_4c = *eax_17
        int32_t var_48_2 = edx_15
        int32_t var_44_2 = eax_17[2]
        int32_t var_40_2 = eax_17[3]
        float eax_18
        float edx_17
        eax_18, edx_17 = sub_40af40(&var_4c)
        long double x87_r6_10 = fconvert.t(var_20_2)
        var_c = fconvert.s(fconvert.t(var_28_2) * x87_r6_10)
        float var_8_4 = fconvert.s(fconvert.t(edx_12) * x87_r6_10)
        var_14 = fconvert.s(fconvert.t(var_c) + fconvert.t(var_1c_3))
        float var_10_5 = fconvert.s(fconvert.t(var_8_4) + fconvert.t(var_18_3))
        var_c = fconvert.s(float.t(var_68_1) * fconvert.t(var_14))
        float var_8_5 = fconvert.s(float.t(var_64_1) * fconvert.t(var_10_5))
        var_ac = fconvert.s(fconvert.t(eax_18) + fconvert.t(var_c))
        float var_7c_1 = ecx_1
        float var_a8_1 = fconvert.s(fconvert.t(edx_17) + fconvert.t(var_8_5))
        float var_a0_1 = fconvert.s(x87_r6_10)
        float var_78_1 = edx_2
        float var_70_1 = edx_3
        float var_80_1 = edx_3
        float var_74_1 = ecx_2
        float var_8c_1 = ecx_1
        float var_88_1 = edx_2
        float var_84_1 = ecx_2
        esi = &var_ac
    
    __builtin_memcpy(arg2, esi, 0x40)
    return arg2
}

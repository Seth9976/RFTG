// 函数名称: sub_65deb0
// 虚拟地址: 0x65deb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65deb0(int32_t arg1 @ esi, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    __alloca_probe_16(arg1 << 3)
    int32_t edx = 0
    int32_t __saved_ebp
    void* eax_1
    
    if (arg1 s>= 4)
        eax_1 = arg3 + 8
        int32_t i_6 = ((arg1 - 4) u>> 2) + 1
        int32_t* ecx_1 = &__saved_ebp
        edx = i_6 << 2
        int32_t i
        
        do
            long double x87_r7_1 = fconvert.t(*(eax_1 - 8))
            eax_1 += 0x10
            *(ecx_1 - 0x10) = fconvert.d(x87_r7_1)
            ecx_1 = &ecx_1[8]
            i = i_6
            i_6 -= 1
            *(ecx_1 - 0x28) = fconvert.d(fconvert.t(*(eax_1 - 0x14)))
            *(ecx_1 - 0x20) = fconvert.d(fconvert.t(*(eax_1 - 0x10)))
            *(ecx_1 - 0x18) = fconvert.d(fconvert.t(*(eax_1 - 0xc)))
        while (i != 1)
    
    void var_1c
    
    while (edx s< arg1)
        long double x87_r7_5 = fconvert.t(*(arg3 + (edx << 2)))
        edx += 1
        *(&var_1c + (edx << 3)) = fconvert.d(x87_r7_5)
    
    long double x87_r7_6 = float.t(0)
    long double x87_r6 = fconvert.t(9.9999999999999995e-21)
    int32_t __saved_edi
    
    do
        int32_t edi_3 = 0
        long double x87_r5_1 = x87_r7_6
        
        if (arg1 s> 0)
            do
                eax_1 = arg2
                long double x87_r4_1 = x87_r7_6
                long double x87_r3_1 = fconvert.t(*(&__saved_edi + (edi_3 << 3)))
                int32_t ecx_2 = arg1 - 1
                long double x87_r2_1 = fconvert.t(*(eax_1 + (arg1 << 2)))
                
                if (ecx_2 s>= 0)
                    if (ecx_2 + 1 s>= 4)
                        uint32_t i_4 = (ecx_2 + 1) u>> 2
                        void* eax_3 = eax_1 + (ecx_2 << 2) - 8
                        ecx_2 += neg.d(i_4) << 2
                        uint32_t i_1
                        
                        do
                            eax_3 -= 0x10
                            i_1 = i_4
                            i_4 -= 1
                            long double x87_r2_3 = fconvert.t(*(eax_3 + 0x18)) + x87_r2_1 * x87_r3_1
                            long double x87_r2_5 = fconvert.t(*(eax_3 + 0x14)) + x87_r2_3 * x87_r3_1
                            long double x87_r2_7 = x87_r2_5 * x87_r3_1 + fconvert.t(*(eax_3 + 0x10))
                            x87_r4_1 = (
                                ((x87_r4_1 * x87_r3_1 + x87_r2_1) * x87_r3_1 + x87_r2_3) * x87_r3_1
                                + x87_r2_5) * x87_r3_1 + x87_r2_7
                            x87_r2_1 = fconvert.t(*(eax_3 + 0xc)) + x87_r2_7 * x87_r3_1
                        while (i_1 != 1)
                        eax_1 = arg2
                    
                    if (ecx_2 s>= 0)
                        int32_t temp2_1
                        
                        do
                            temp2_1 = ecx_2
                            ecx_2 -= 1
                            x87_r4_1 = x87_r4_1 * x87_r3_1 + x87_r2_1
                            x87_r2_1 = fconvert.t(*(eax_1 + (ecx_2 << 2) + 4)) + x87_r2_1 * x87_r3_1
                        while (temp2_1 - 1 s>= 0)
                
                edi_3 += 1
                long double x87_r4_11 = x87_r3_1 / x87_r3_1
                *(&var_1c + (edi_3 << 3)) =
                    fconvert.d(fconvert.t(*(&var_1c + (edi_3 << 3))) - x87_r4_11)
                x87_r5_1 = x87_r5_1 + x87_r4_11 * x87_r4_11
            while (edi_3 s< arg1)
        
        if (var_8 s> 0x28)
            return 0xffffffff
        
        var_8 += 1
        x87_r5_1 - x87_r6
        eax_1.w = (x87_r5_1 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6 ? 1 : 0) << 0xe | 0x3000
    while ((eax_1:1.b & 0x41) == 0)
    
    int32_t i_3 = 0
    
    if (arg1 s>= 4)
        int32_t i_5 = ((arg1 - 4) u>> 2) + 1
        void* eax_4 = &__saved_ebp
        i_3 = i_5 << 2
        void* ecx_5 = arg3 + 8
        int32_t i_2
        
        do
            long double x87_r7_7 = fconvert.t(*(eax_4 - 0x10))
            eax_4 += 0x20
            *(ecx_5 - 8) = fconvert.s(x87_r7_7)
            ecx_5 += 0x10
            i_2 = i_5
            i_5 -= 1
            *(ecx_5 - 0x14) = fconvert.s(fconvert.t(*(eax_4 - 0x28)))
            *(ecx_5 - 0x10) = fconvert.s(fconvert.t(*(eax_4 - 0x20)))
            *(ecx_5 - 0xc) = fconvert.s(fconvert.t(*(eax_4 - 0x18)))
        while (i_2 != 1)
    
    for (; i_3 s< arg1; i_3 += 1)
        *(arg3 + (i_3 << 2)) = fconvert.s(fconvert.t(*(&__saved_edi + (i_3 << 3))))
    
    return 0
}

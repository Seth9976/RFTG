// 函数名称: sub_65bf60
// 虚拟地址: 0x65bf60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_65bf60(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    long double x87_r6 = x87_r7
    int32_t* eax = arg4
    long double x87_r5 = x87_r7
    long double x87_r4 = x87_r7
    long double x87_r3 = x87_r7
    int32_t edx_2 = eax[arg1 * 0xe - 0xd]
    long double x87_r2 = x87_r7
    double var_28 = fconvert.d(x87_r2)
    long double x87_r1 = float.t(1)
    int32_t edi = *eax
    int32_t edx_3 = 0
    int32_t var_8 = edi
    
    if (arg1 s>= 4)
        long double x87_r3_1 = x87_r1
        void* eax_1 = &eax[8]
        int32_t esi_3 = ((arg1 - 4) u>> 2) + 1
        int32_t edx_4 = esi_3 << 2
        
        while (true)
            int32_t edi_1 = *(eax_1 + 0x14)
            int32_t edx_5 = *(eax_1 - 4)
            int32_t edi_3 = *(eax_1 + 0x4c)
            int32_t edx_7 = *(eax_1 + 0x34)
            long double x87_r2_4 =
                float.t(edi_1 + edx_5) * fconvert.t(*(arg3 + 0x454)) / float.t(edx_5 + 1) + x87_r7
            int32_t edi_5 = *(eax_1 + 0x84)
            int32_t edx_9 = *(eax_1 + 0x6c)
            long double x87_r2_11 =
                float.t(edi_3 + edx_7) * fconvert.t(*(arg3 + 0x454)) / float.t(edx_7 + 1) + x87_r7
            long double x87_r5_2 = x87_r5 + float.t(*(eax_1 - 0x14)) * x87_r2_4 + float.t(*(eax_1 + 4))
                + float.t(*(eax_1 + 0x24)) * x87_r2_11 + float.t(*(eax_1 + 0x3c))
            long double x87_r4_2 = x87_r4 + float.t(*(eax_1 - 0x10)) * x87_r2_4 + float.t(*(eax_1 + 8))
                + float.t(*(eax_1 + 0x28)) * x87_r2_11 + float.t(*(eax_1 + 0x40))
            long double x87_r3_3 = x87_r3_1 + float.t(*(eax_1 - 8)) * x87_r2_4
                + float.t(*(eax_1 + 0x10)) + float.t(*(eax_1 + 0x30)) * x87_r2_11
                + float.t(*(eax_1 + 0x48))
            long double x87_r2_18 =
                float.t(edi_5 + edx_9) * fconvert.t(*(arg3 + 0x454)) / float.t(edx_9 + 1) + x87_r7
            long double x87_r6_3 = x87_r6 + float.t(*(eax_1 - 0x18)) * x87_r2_4 + float.t(*eax_1)
                + float.t(*(eax_1 + 0x20)) * x87_r2_11 + float.t(*(eax_1 + 0x38))
                + float.t(*(eax_1 + 0x58)) * x87_r2_18 + float.t(*(eax_1 + 0x70))
            long double x87_r1_29 = float.t(*(eax_1 + 0x5c)) * x87_r2_18
            int32_t edi_7 = *(eax_1 + 0xbc)
            int32_t edx_11 = *(eax_1 + 0xa4)
            eax_1 += 0xe0
            int32_t temp1_1 = esi_3
            esi_3 -= 1
            long double x87_r2_25 =
                float.t(edi_7 + edx_11) * fconvert.t(*(arg3 + 0x454)) / float.t(edx_11 + 1) + x87_r7
            x87_r6 = x87_r6_3 + float.t(*(eax_1 - 0x50)) * x87_r2_25 + float.t(*(eax_1 - 0x38))
            x87_r5 = x87_r5_2 + x87_r1_29 + float.t(*(eax_1 - 0x6c))
                + float.t(*(eax_1 - 0x4c)) * x87_r2_25 + float.t(*(eax_1 - 0x34))
            x87_r4 = x87_r4_2 + float.t(*(eax_1 - 0x80)) * x87_r2_18 + float.t(*(eax_1 - 0x68))
                + float.t(*(eax_1 - 0x48)) * x87_r2_25 + float.t(*(eax_1 - 0x30))
            x87_r3 = x87_r3_3 + float.t(*(eax_1 - 0x78)) * x87_r2_18 + float.t(*(eax_1 - 0x60))
                + float.t(*(eax_1 - 0x40)) * x87_r2_25 + float.t(*(eax_1 - 0x28))
            x87_r2 = x87_r2_25 * float.t(edx_11) + float.t(edi_7) + fconvert.t(fconvert.d(
                x87_r2_18 * float.t(edx_9) + float.t(edi_5) + fconvert.t(fconvert.d(
                x87_r2_11 * float.t(edx_7) + float.t(edi_3) + fconvert.t(fconvert.d(
                x87_r2_4 * float.t(edx_5) + float.t(edi_1) + fconvert.t(var_28)))))))
            var_28 = fconvert.d(x87_r2)
            
            if (temp1_1 == 1)
                break
            
            x87_r3_1 = x87_r2
        
        edx_3 = edx_4
        edi = var_8
        x87_r1 = x87_r7
        x87_r7 = float.t(0)
        eax = arg4
    
    if (edx_3 s< arg1)
        void* eax_2 = &eax[edx_3 * 0xe + 8]
        int32_t i_1 = arg1 - edx_3
        int32_t i
        
        do
            int32_t esi_6 = *(eax_2 + 0x14)
            int32_t edx_13 = *(eax_2 - 4)
            eax_2 += 0x38
            i = i_1
            i_1 -= 1
            long double x87_r1_53 =
                float.t(esi_6 + edx_13) * fconvert.t(*(arg3 + 0x454)) / float.t(edx_13 + 1) + x87_r7
            double var_28_4 = fconvert.d(x87_r1_53)
            x87_r6 = x87_r6 + x87_r1_53 * float.t(*(eax_2 - 0x50)) + float.t(*(eax_2 - 0x38))
            x87_r5 = x87_r5 + float.t(*(eax_2 - 0x4c)) * fconvert.t(var_28_4) + float.t(*(eax_2 - 0x34))
            x87_r4 = x87_r4 + float.t(*(eax_2 - 0x48)) * fconvert.t(var_28_4) + float.t(*(eax_2 - 0x30))
            x87_r3 = x87_r3 + float.t(*(eax_2 - 0x40)) * fconvert.t(var_28_4) + float.t(*(eax_2 - 0x28))
            x87_r2 = x87_r2 + float.t(edx_13) * fconvert.t(var_28_4) + float.t(esi_6)
        while (i != 1)
        x87_r1 = x87_r7
        x87_r7 = float.t(0)
    
    int32_t eax_3 = *arg5
    
    if (eax_3 s>= 0)
        x87_r6 = x87_r6 + float.t(var_8)
        x87_r5 = x87_r5 + float.t(eax_3)
        x87_r4 = x87_r4 + float.t(edi * edi)
        x87_r3 = x87_r3 + float.t(eax_3 * edi)
        x87_r2 = x87_r2 + x87_r1
    
    int32_t eax_5 = *arg6
    long double x87_r2_28
    
    if (eax_5 s< 0)
        x87_r2_28 = x87_r1
    else
        x87_r6 = x87_r6 + float.t(edx_2)
        x87_r5 = x87_r5 + float.t(eax_5)
        x87_r4 = x87_r4 + float.t(edx_2 * edx_2)
        x87_r3 = x87_r3 + float.t(eax_5 * edx_2)
        x87_r2_28 = x87_r2 + x87_r1
    
    long double x87_r1_71 = x87_r2_28 * x87_r4 - x87_r6 * x87_r6
    x87_r1_71 - x87_r7
    eax_5.w = (x87_r1_71 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_71, x87_r7) ? 1 : 0) << 0xa
        | (x87_r1_71 == x87_r7 ? 1 : 0) << 0xe | 0x800
    
    if ((eax_5:1.b & 0x41) != 0)
        *arg5 = 0
        *arg6 = 0
        return x87_r4
    
    long double x87_r2_32 = (x87_r4 * x87_r5 - x87_r3 * x87_r6) / x87_r7
    long double x87_r6_5 = x87_r3 * x87_r2_28 - x87_r6 * x87_r5
    long double x87_r7_1 = x87_r6_5 / x87_r6_5
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686950(mxcsr, x87control, 
        fconvert.d(x87_r2_32 + x87_r7_1 * float.t(var_8) + fconvert.t(0.5)))
    *arg5 = sub_685f40(st0)
    *arg6 = sub_685f40(sub_686950(mxcsr, x87control_1, 
        fconvert.d(float.t(edx_2) * fconvert.t(fconvert.d(x87_r7_1)) + fconvert.t(fconvert.d(x87_r2_32))
            + fconvert.t(0.5))))
    
    if (*arg5 s> 0x3ff)
        *arg5 = 0x3ff
    
    if (*arg6 s> 0x3ff)
        *arg6 = 0x3ff
    
    if (*arg5 s< 0)
        *arg5 = 0
    
    if (*arg6 s< 0)
        *arg6 = 0
    
    return x87_r1_71
}

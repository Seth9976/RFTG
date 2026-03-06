// 函数名称: sub_648200
// 虚拟地址: 0x648200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_648200(int32_t arg1, float arg2, double arg3, int32_t arg4, int32_t arg5, int32_t arg6, double arg7)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg3)
    long double x87_r7 = fconvert.t(arg3)
    int32_t eax = sub_685f40(x87_r7)
    void* edx_1 = *(*(arg2 i+ 0x1c) + (arg1 << 2) + 0xb24)
    arg3:4.d = eax
    long double x87_r7_1 = x87_r7 - float.t(arg3:4.d)
    int32_t* ecx_2 = arg4 + (eax << 2)
    long double x87_r6_2 = float.t(1) - x87_r7_1
    void* edi = edx_1 + 0xc4
    arg2 = 4.20389539e-45f
    int32_t* ecx_4 = arg6 + arg1 * 0xc
    *(edx_1 + 0x6c) = fconvert.s(float.t(ecx_2[1]) * x87_r7_1 + float.t(*ecx_2) * x87_r6_2)
    *(edx_1 + 0x78) = *ecx_4
    *(edx_1 + 0x7c) = ecx_4[1]
    *(edx_1 + 0x80) = ecx_4[2]
    void* result_1 = eax * 0xcc + arg5 + 0x10c
    void* result
    float i
    
    do
        void* ecx_7 = edi - 0x3c
        void* eax_2 = result_1 - 0x40
        int32_t j_4 = 2
        int32_t j
        
        do
            long double x87_r5_3 = float.t(*(eax_2 - 0xcc))
            eax_2 += 0x20
            ecx_7 += 0x20
            j = j_4
            j_4 -= 1
            *(ecx_7 - 0x24) = fconvert.s(x87_r5_3 * x87_r6_2 + float.t(*(eax_2 - 0x20)) * x87_r7_1)
            *(ecx_7 - 0x20) =
                fconvert.s(float.t(*(eax_2 - 0x1c)) * x87_r7_1 + float.t(*(eax_2 - 0xe8)) * x87_r6_2)
            *(ecx_7 - 0x1c) =
                fconvert.s(float.t(*(eax_2 - 0x18)) * x87_r7_1 + float.t(*(eax_2 - 0xe4)) * x87_r6_2)
            *(ecx_7 - 0x18) =
                fconvert.s(float.t(*(eax_2 - 0x14)) * x87_r7_1 + float.t(*(eax_2 - 0xe0)) * x87_r6_2)
            *(ecx_7 - 0x14) =
                fconvert.s(float.t(*(eax_2 - 0x10)) * x87_r7_1 + float.t(*(eax_2 - 0xdc)) * x87_r6_2)
            *(ecx_7 - 0x10) =
                fconvert.s(float.t(*(eax_2 - 0xc)) * x87_r7_1 + float.t(*(eax_2 - 0xd8)) * x87_r6_2)
            *(ecx_7 - 0xc) =
                fconvert.s(float.t(*(eax_2 - 8)) * x87_r7_1 + float.t(*(eax_2 - 0xd4)) * x87_r6_2)
            *(ecx_7 - 8) =
                fconvert.s(float.t(*(eax_2 - 4)) * x87_r7_1 + float.t(*(eax_2 - 0xd0)) * x87_r6_2)
        while (j != 1)
        void* ecx_8 = edi
        result = result_1
        int32_t j_5 = 1
        int32_t j_1
        
        do
            long double x87_r5_27 = float.t(*(result - 0xcc))
            result += 4
            ecx_8 += 4
            j_1 = j_5
            j_5 -= 1
            *(ecx_8 - 4) = fconvert.s(x87_r5_27 * x87_r6_2 + float.t(*(result - 4)) * x87_r7_1)
        while (j_1 != 1)
        edi += 0x44
        result_1 += 0x44
        i = arg2
        arg2 -= 1
    while (i != 1)
    void* ecx_9 = edx_1 + 0x84
    int32_t i_2 = 3
    long double x87_r6_3 = fconvert.t(6.0)
    int32_t i_1
    
    do
        int32_t j_3 = 0x11
        long double x87_r5_32 = fconvert.t(fconvert.s(fconvert.t(*ecx_9) + x87_r6_3))
        int32_t j_2
        
        do
            long double x87_r4_22 = fconvert.t(fconvert.s(fconvert.t(*ecx_9) + fconvert.t(arg7)))
            *ecx_9 = fconvert.s(x87_r4_22)
            x87_r4_22 - x87_r5_32
            result.w = (x87_r4_22 < x87_r5_32 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_22, x87_r5_32) ? 1 : 0) << 0xa
                | (x87_r4_22 == x87_r5_32 ? 1 : 0) << 0xe | 0x2800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                *ecx_9 = fconvert.s(x87_r5_32)
            
            ecx_9 += 4
            j_2 = j_3
            j_3 -= 1
        while (j_2 != 1)
        i_1 = i_2
        i_2 -= 1
        x87_r6_3 = x87_r5_32
    while (i_1 != 1)
    return result
}

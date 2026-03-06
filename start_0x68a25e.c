// 函数名称: start
// 虚拟地址: 0x68a25e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublestart(int16_t arg1 @ x87control, double arg2[0x2] @ xmm0, double arg3, int32_t arg4)
{
    // 第一条实际指令: double xmm0_9[0x2] = _mm_unpacklo_pd(arg2, arg2)
    double xmm0_9[0x2] = _mm_unpacklo_pd(arg2, arg2)
    double xmm1[0x2] = data_83bcf0
    double xmm6[0x2] = data_83bcd0
    double xmm2[0x2] = data_83bd00
    double xmm3[0x2] = data_83bd10
    int32_t eax_1 = _mm_extract_epi16(xmm0_9, 3) & 0x7fff
    double var_c
    int32_t edx_7
    
    if (((0x408f - eax_1) | (eax_1 - 0x3c90)) u>= 0x80000000)
        int32_t eax_10 = arg4 & 0x7fffffff
        
        if (eax_10 u< 0x40900000)
            var_c = arg3 + 1.0
            return fconvert.t(var_c)
        
        if (eax_10 u>= 0x7ff00000)
            if (eax_10 u<= 0x7ff00000 && arg3.d == 0)
                if (arg4 != 0x7ff00000)
                    return fconvert.t(0.0)
                
                return fconvert.t(inf.0)
            
            edx_7 = 0x3ea
        else if (arg4 u>= 0x80000000)
            xmm0_9 = 2.2250738585072014e-308 * 2.2250738585072014e-308
            edx_7 = 0xf
        else
            xmm0_9 = 1.7976931348623157e+308 * 1.7976931348623157e+308
            edx_7 = 0xe
        
        goto label_68a427
    
    double xmm1_2[0x2] = _mm_add_pd(_mm_mul_pd(xmm1, xmm0_9), xmm6)
    double xmm1_3[0x2] = _mm_sub_pd(xmm1_2, xmm6)
    double xmm2_1[0x2] = _mm_mul_pd(xmm2, xmm1_3)
    double xmm4_1[0x2] = data_83bd20
    double xmm3_1[0x2] = _mm_mul_pd(xmm3, xmm1_3)
    double xmm5_1[0x2] = data_83bd30
    int32_t eax_3 = xmm1_2
    int32_t eax_4 = eax_3 s>> 6
    double xmm0_1[0x2] = _mm_sub_pd(_mm_sub_pd(xmm0_9, xmm2_1), xmm3_1)
    double xmm2_2[0x2] = *(((eax_3 & 0x3f) << 4) + 0x83bd40)
    double xmm4_2[0x2] = _mm_mul_pd(xmm4_1, xmm0_1)
    double xmm1_4 = xmm0_1[0]
    double xmm0_2 = _mm_mul_pd(xmm0_1, xmm0_1)
    double xmm5_2[0x2] = _mm_add_pd(xmm5_1, xmm4_2)
    double xmm2_3[0x2] = _mm_unpackhi_pd(xmm2_2, xmm2_2)
    uint64_t xmm7_4[0x2] = _mm_slli_epi64(_mm_add_epi64(xmm1_2 & data_83bcb0, data_83bcc0), 0x2e)
    double xmm0_4[0x2] = _mm_mul_pd(xmm0_2 * xmm0_2, xmm5_2)
    uint64_t xmm2_4[0x2] = _mm_or_pd(xmm2_3, xmm7_4)
    double xmm0_6 = _mm_unpackhi_pd(xmm0_4, xmm0_4) + xmm1_4 f+ xmm2_2 f+ xmm0_4
    
    if (eax_4 + 0x37e u<= 0x77c)
        var_c = xmm0_6 f* xmm2_4 f+ xmm2_4
        return fconvert.t(var_c)
    
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
    int32_t edx_3
    edx_3.w = temp0_1
    edx_3.w |= 0x300
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(edx_3.w)
    int32_t eax_5 = eax_4 s>> 1
    int64_t xmm6_5 = _mm_or_pd(data_83bca0 & not.o(xmm2_4), _mm_slli_epi64(zx.o(eax_5 + 0x3ff), 0x34))
    int64_t xmm4_4 = _mm_slli_epi64(zx.o(eax_4 - eax_5 + 0x3ff), 0x34)
    int16_t var_12_1
    var_12_1.q = xmm0_6
    var_c = xmm6_5
    long double x87_r6_1 = fconvert.t(var_c)
    long double x87_r7_4 = fconvert.t(var_12_1.q) * x87_r6_1 + x87_r6_1
    var_12_1.q = xmm4_4
    var_12_1.q = fconvert.d(x87_r7_4 * fconvert.t(var_12_1.q))
    xmm0_9 = var_12_1.q
    int16_t x87control_1
    int16_t x87status_3
    x87control_1, x87status_3 = __fldcw_memmem16(temp0_1)
    int32_t ecx_5 = _mm_extract_epi16(xmm0_9, 3) & 0x7ff0
    
    if (ecx_5 u>= 0x7ff0)
        edx_7 = 0xe
    label_68a427:
        var_c = xmm0_9
        sub_5b50b6(&arg3, &arg3, &var_c, edx_7)
        xmm0_9 = var_c
    else if (ecx_5 == 0)
        edx_7 = 0xf
        goto label_68a427
    
    var_c = xmm0_9
    return fconvert.t(var_c)
}

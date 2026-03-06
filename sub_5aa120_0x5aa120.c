// 函数名称: sub_5aa120
// 虚拟地址: 0x5aa120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_5aa120(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ mxcsr, int16_t arg5 @ x87control, double arg6, int16_t arg7, uint64_t (* arg8)[0x2])
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    
    if (data_3166ed8 != 0)
        int32_t eax_1 = arg4 & 0x7f80
        bool cond:0_1 = eax_1 != 0x1f80
        
        if (eax_1 == 0x1f80)
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg5)
            eax_1.w = temp0_1
            eax_1.w &= 0x7f
            cond:0_1 = eax_1.w != 0x7f
        
        if (not(cond:0_1))
            uint128_t xmm0 = zx.o(arg6)
            int32_t xmm2[0x4] = data_6b0330
            uint64_t xmm0_2[0x2] = _mm_srli_epi64(_mm_slli_epi64(xmm0, 1), 0x35)
            int32_t xmm3_1 = _mm_srli_epi64(xmm0, 0x34)
            uint64_t xmm4_1[0x2] = __andpd_xmmxuq_memxuq(xmm0, data_6b0340)
            int32_t eax_2 = xmm0_2
            int32_t xmm2_1[0x4] = _mm_sub_epi32(xmm2, xmm0_2)
            uint64_t (* ecx)[0x2] = arg8
            double xmm1_2 = _mm_sll_epi64(_mm_srl_epi64(xmm0, xmm2_1), xmm2_1)
            
            if (eax_2 s< 0x3ff)
                *ecx = xmm4_1
                return fconvert.t(arg6)
            
            if (eax_2 s<= 0x432)
                *ecx = xmm1_2
                arg6 = _mm_or_pd(xmm0.q - xmm1_2, xmm4_1)
                return fconvert.t(arg6)
            
            uint64_t xmm0_3[0x2] = zx.o(arg6)
            
            if (eax_2 != 0x7ff)
                *ecx = xmm0_3
                long double result = float.t(0)
                
                if (xmm3_1 s< 0x800)
                    return result
                
                return fneg(result)
            
            uint64_t xmm0_4[0x2] = xmm0_3 f+ xmm0_3
            *ecx = xmm0_4
            uint64_t xmm0_6[0x2] =
                __cmppd_xmmpd_mempd_immb(__andpd_xmmxuq_memxuq(xmm0_4, data_6b0320), data_6b0350, 4)
            uint32_t eax_3 = _mm_extract_epi16(xmm0_6, 0)
            double xmm0_8 = _mm_or_pd(_mm_and_pd(xmm0_6, xmm0_3), xmm4_1)
            
            if (eax_3 == 0)
                arg6 = xmm0_8
                return fconvert.t(arg6)
            
            var_c.q = xmm0_8
            int32_t __saved_ebx = 0x3ef
            sub_5b50b6(&arg6, &arg8, &var_c, 0x3ef)
            return fconvert.t(var_c.q)
    
    int32_t __saved_ebp_3
    int32_t __saved_ebp_2 = __saved_ebp_3
    var_c = arg3
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_esi_2
    int32_t __saved_esi_1 = __saved_esi_2
    int32_t edi
    int32_t var_18_1 = edi
    int32_t var_1c_1 = 0
    int32_t var_20 = 0
    int32_t eax_4
    int16_t x87control
    eax_4, x87control = sub_5b4e31(arg5, 0, 0)
    int32_t var_24 = 0xffff
    int32_t var_28 = data_8b9120
    int16_t x87control_1 = sub_5b4e31(x87control)
    int32_t ecx_2 = zx.d(arg7) & 0x7ff0
    int32_t var_20_1 = ecx_2
    
    if (ecx_2.w != 0x7ff0)
        var_20_1.q = fconvert.d(fconvert.t(arg6))
        long double st0_3 = __frnd(var_20_1)
        *arg8 = fconvert.d(st0_3)
        var_c.q = fconvert.d(fconvert.t(arg6) - st0_3)
        long double x87_r7_19 = fconvert.t(var_c.q)
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7_19
        double* eax_6
        eax_6.w = (x87_r6_1 < x87_r7_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_19) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_19 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        int32_t var_8_1
        
        if (not(p_1))
            var_8_1:2.w = arg3:2.w | (arg7 & 0x8000)
        int32_t var_1c_5 = 0xffff
        sub_5b4e31(x87control_1, eax_4.w, 0xffff)
    else
        double* edi_2 = arg8
        *edi_2 = fconvert.d(fconvert.t(data_8b8ff8))
        var_20_1.q = fconvert.d(fconvert.t(arg6))
        int32_t eax_5 = sub_5b44a9(var_20_1, ecx_2)
        
        if (eax_5 s<= 0)
        label_5b504e:
            int32_t var_1c_4 = eax_4
            long double x87_r7_14 = fconvert.t(arg6) + fconvert.t(1.0)
            *edi_2 = fconvert.d(x87_r7_14)
            var_24.q = fconvert.d(x87_r7_14)
            int32_t var_30_2 = 0x1c
            int32_t var_34_1 = 8
            return sub_5b4c6c(8, 0x1c, (fconvert.d(fconvert.t(arg6))).d)
        
        if (eax_5 s> 2)
            if (eax_5 != 3)
                goto label_5b504e
            
            int32_t var_1c_3 = eax_4
            int32_t var_20_2 = ecx_2
            *edi_2 = fconvert.d(fconvert.t(arg6))
            int32_t var_24_1 = ecx_2
            var_24_1.q = fconvert.d(fconvert.t(arg6))
            int32_t var_28_1 = 0x1c
            return sub_5b4bb6()
        
        *edi_2 = fconvert.d(fconvert.t(arg6))
        var_20_1.q = fconvert.d(fconvert.t(arg6))
        var_28.q = fconvert.d(float.t(0))
        var_c.q = fconvert.d(__copysign())
        int64_t var_2c
        var_2c.d = 0xffff
        sub_5b4e31(x87control_1, eax_4.w, 0xffff)
    
    return fconvert.t(var_c.q)
}

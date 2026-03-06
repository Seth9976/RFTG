// 函数名称: sub_686950
// 虚拟地址: 0x686950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_686950(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, double arg3)
{
    // 第一条实际指令: if (data_3166ed8 != 0)
    if (data_3166ed8 != 0)
        int32_t eax_2 = arg1 & 0x7f80
        bool cond:0_1 = eax_2 != 0x1f80
        
        if (eax_2 == 0x1f80)
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
            eax_2.w = temp0_1
            eax_2.w &= 0x7f
            cond:0_1 = eax_2.w != 0x7f
        
        if (not(cond:0_1))
            uint128_t xmm0 = zx.o(arg3)
            int32_t xmm2[0x4] = data_836610
            int64_t xmm7 = xmm0.q
            uint64_t xmm0_1[0x2] = _mm_srli_epi64(xmm0, 0x34)
            int32_t eax_3 = xmm0_1
            int32_t xmm2_1[0x4] = _mm_sub_epi32(xmm2, __andpd_xmmxuq_memxuq(xmm0_1, data_836640))
            int32_t xmm1_1[0x4] = _mm_srl_epi64(xmm0, xmm2_1)
            
            if ((eax_3 & 0x800) != 0)
                double xmm0_3[0x2] = zx.o(arg3)
                uint64_t xmm1_3[0x2] = _mm_sll_epi64(xmm1_1, xmm2_1)
                uint64_t xmm0_4[0x2] = _mm_cmpeq_pd(xmm0_3, xmm1_3, 1)
                
                if (eax_3 s< 0xbff)
                    arg3 = __andpd_xmmxuq_memxuq(
                        __orpd_xmmxuq_memxuq(__cmppd_xmmpd_mempd_immb(xmm0_3, data_836630, 1), 
                            data_836630), 
                        data_836620)
                    return fconvert.t(arg3)
                
                if (eax_3 s<= 0xc32)
                    arg3 = xmm1_3 f- __andpd_xmmxuq_memxuq(xmm0_4, data_836600)
                    return fconvert.t(arg3)
            else
                if (eax_3 s< 0x3ff)
                    return float.t(0)
                
                double xmm1_2 = _mm_sll_epi64(xmm1_1, xmm2_1)
                
                if (eax_3 s<= 0x432)
                    arg3 = xmm1_2
                    return fconvert.t(arg3)
            
            if (not(is_ordered.q(xmm7, xmm7)))
                int32_t __saved_ebp_2 = 0x3ed
                sub_5b50b6(&arg3, &arg3, &arg3, 0x3ed)
            
            return fconvert.t(arg3)
    
    int32_t __saved_ebp_4
    int32_t __saved_ebp_3 = __saved_ebp_4
    int32_t ecx
    int32_t var_8_2 = ecx
    int32_t var_c_2 = ecx
    int32_t __saved_ebx_3
    int32_t __saved_ebx_2 = __saved_ebx_3
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t var_18 = 0xffff
    int32_t var_1c = data_8bc0e0
    int32_t eax_4
    int16_t x87control
    eax_4, x87control = sub_5b4e31(arg2)
    int32_t ecx_2 = zx.d(arg3:6.w) & 0x7ff0
    int32_t var_1c_1 = ecx_2
    var_1c_1.q = fconvert.d(fconvert.t(arg3))
    int32_t var_30_1
    int32_t var_28_1
    
    if (ecx_2.w != 0x7ff0)
        var_c_2.q = fconvert.d(__frnd())
        long double x87_r7_12 = fconvert.t(var_c_2.q)
        long double x87_r6_1 = fconvert.t(arg3)
        x87_r6_1 - x87_r7_12
        int32_t eax_5
        eax_5.w = (x87_r6_1 < x87_r7_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_12) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_12 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1) || (eax_4.b & 0x20) != 0)
            int32_t var_18_5 = 0xffff
            int32_t var_1c_4 = eax_4
            sub_5b4e31(x87control)
            return fconvert.t(var_c_2.q)
        
        int32_t var_18_6 = eax_4
        double var_20_3 = fconvert.d(fconvert.t(var_c_2.q))
        var_28_1 = (fconvert.d(fconvert.t(arg3))).d
        int32_t var_2c_2 = 0xb
        var_30_1 = 0x10
    else
        int32_t eax_6 = sub_5b44a9()
        
        if (eax_6 s> 0)
            if (eax_6 s<= 2)
                int32_t var_18_3 = 0xffff
                int32_t var_1c_3 = eax_4
                sub_5b4e31(x87control)
                return fconvert.t(arg3)
            
            if (eax_6 == 3)
                int32_t var_18_2 = eax_4
                int32_t var_1c_2 = ecx_2
                int64_t var_20
                var_20.d = ecx_2
                double var_20_1 = fconvert.d(fconvert.t(arg3))
                int64_t var_28
                var_28:4.d = 0xb
                return sub_5b4bb6()
        
        int32_t var_18_4 = eax_4
        double var_20_2 = fconvert.d(fconvert.t(arg3) + fconvert.t(1.0))
        var_28_1 = (fconvert.d(fconvert.t(arg3))).d
        int32_t var_2c_1 = 0xb
        var_30_1 = 8
    
    return sub_5b4c6c(var_30_1, 0xb, var_28_1)
}

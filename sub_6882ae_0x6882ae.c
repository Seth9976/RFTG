// 函数名称: sub_6882ae
// 虚拟地址: 0x6882ae
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_6882ae(double arg1[0x2] @ xmm7, double arg2)
{
    // 第一条实际指令: double xmm7_2[0x2] = _mm_unpacklo_pd(arg1, arg1)
    double xmm7_2[0x2] = _mm_unpacklo_pd(arg1, arg1)
    uint64_t xmm2_1[0x2] = __andpd_xmmxuq_memxuq(xmm7_2, data_836660)
    xmm2_1 f- 16331239353195370.0
    
    if (not(is_unordered.q(xmm2_1, 16331239353195370.0)))
        if (not(xmm2_1 f>= 16331239353195370.0))
            if (not(xmm2_1 f>= 0.03125))
                if (xmm2_1 f< 7.4505805969238281e-09)
                    if (not(xmm2_1 f!= 0.0))
                        return fconvert.t(arg2)
                    
                    if (xmm2_1 f>= 2.2250738585072014e-308)
                        return fconvert.t(4.7783097267364807e-299) * fconvert.t(4.7783097267364807e-299)
                            + fconvert.t(arg2)
                    
                    int32_t var_8
                    var_8.q = fconvert.d(fconvert.t(4.7783097267364807e-299)
                        * fconvert.t(4.7783097267364807e-299))
                    return fconvert.t(var_8.q) + fconvert.t(arg2)
                
                double xmm1_1[0x2] = _mm_mul_pd(xmm2_1, xmm2_1)
                double xmm3_2[0x2] = _mm_mul_pd(xmm1_1, xmm1_1)
                double xmm5_8[0x2] = __addpd_xmmpd_mempd(
                    _mm_mul_pd(
                        __addpd_xmmpd_mempd(
                            _mm_mul_pd(
                                __addpd_xmmpd_mempd(_mm_mul_pd(data_836730, xmm3_2), data_836720), 
                                xmm3_2), 
                            data_836710), 
                        xmm3_2), 
                    data_836700) f* xmm1_1
                arg2 = xmm7_2 f- (xmm5_8 f+ _mm_shuffle_pd(xmm5_8, xmm5_8, 1)) f* xmm7_2
                return fconvert.t(arg2)
            
            if (not(xmm2_1 f>= 0.375))
                double xmm1_3[0x2] = _mm_mul_pd(xmm2_1, xmm2_1)
                double xmm3_6[0x2] = _mm_mul_pd(xmm1_3, xmm1_3)
                double xmm5_24[0x2] = _mm_mul_pd(
                    __addpd_xmmpd_mempd(
                        _mm_mul_pd(
                            __addpd_xmmpd_mempd(
                                _mm_mul_pd(
                                    __addpd_xmmpd_mempd(
                                        _mm_mul_pd(
                                            __addpd_xmmpd_mempd(
                                                _mm_mul_pd(
                                                    __addpd_xmmpd_mempd(
                                                        _mm_mul_pd(
                                                            __addpd_xmmpd_mempd(
                                                                _mm_mul_pd(data_8366f0, xmm3_6), 
                                                                data_8366e0), 
                                                            xmm3_6), 
                                                        data_8366d0), 
                                                    xmm3_6), 
                                                data_8366c0), 
                                            xmm3_6), 
                                        data_8366b0), 
                                    xmm3_6), 
                                data_8366a0), 
                            xmm3_6), 
                        data_836690), 
                    xmm3_6)
                double xmm5_26[0x2] = __addpd_xmmpd_mempd(xmm5_24, *"RUUUUU") f* xmm1_3
                arg2 = xmm7_2 f- (xmm5_26 f+ _mm_shuffle_pd(xmm5_26, xmm5_26, 1)) f* xmm7_2
                return fconvert.t(arg2)
            
            uint64_t xmm6_1[0x2] = _mm_xor_pd(zx.o(xmm7_2), xmm2_1)
            int32_t eax_1
            double xmm2_4[0x2]
            
            if (xmm2_1 f>= 8.0)
                eax_1 = 0x300
                double xmm2_6[0x2] = -1.0 / xmm2_1
                xmm2_4 = _mm_unpacklo_pd(xmm2_6, xmm2_6)
            else
                eax_1 = _mm_sub_epi32(_mm_srli_epi64(xmm2_1 + 8.0, 0x2c), 0x40201) * 3
                double xmm5_30 = *((eax_1 << 3) + &data_83d9c0)
                double xmm2_3[0x2] = (xmm2_1 f- xmm5_30) / (xmm2_1 * xmm5_30 + 1.0)
                xmm2_4 = _mm_unpacklo_pd(xmm2_3, xmm2_3)
            
            double xmm0_3 = *((eax_1 << 3) + &data_83d9b0)
            double xmm4 = *((eax_1 << 3) + &data_83d9b8)
            double xmm1_5[0x2] = _mm_mul_pd(xmm2_4, xmm2_4)
            double xmm3_17[0x2] = _mm_mul_pd(xmm1_5, xmm1_5)
            double xmm5_38[0x2] = __addpd_xmmpd_mempd(
                _mm_mul_pd(
                    __addpd_xmmpd_mempd(
                        _mm_mul_pd(__addpd_xmmpd_mempd(_mm_mul_pd(data_836730, xmm3_17), data_836720), 
                            xmm3_17), 
                        data_836710), 
                    xmm3_17), 
                data_836700) f* xmm1_5
            arg2 = _mm_or_pd(
                xmm0_3 - ((xmm5_38 f+ _mm_shuffle_pd(xmm5_38, xmm5_38, 1)) f* xmm2_4 - xmm4 f- xmm2_4), 
                xmm6_1)
            return fconvert.t(arg2)
        
        uint64_t xmm3_20[0x2] = 0x7ff0000000000000
        
        if (not(is_unordered.q(_mm_and_pd(zx.o(xmm2_1), xmm3_20), xmm3_20)))
            return fconvert.t(4.7783097267364807e-299)
                + fconvert.t(*((arg2:4.d u>> 0x1f << 3) + &data_836670))
    
    sub_5b50b6(&arg2, &arg2, &arg2, 0x3eb)
    return fconvert.t(arg2)
}

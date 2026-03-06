// 函数名称: sub_5d1bf0
// 虚拟地址: 0x5d1bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d1bf0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t* result = arg1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t edi = *result
    
    if (edi == 0x702 || edi == 0x700 || edi == 0x701)
        int32_t __saved_esi_2
        int32_t __saved_esi_1 = __saved_esi_2
        result = sub_5d1ab0(result[2], result[3])
        int32_t* result_1 = result
        
        if (result_1 != 0)
            float var_24_1 = fconvert.s(fconvert.t(arg1[6]))
            float var_20_1 = fconvert.s(fconvert.t(arg1[7]))
            float var_8
            
            if (edi == 0x701)
                result_1[0x806].w -= 1
                
                if (result_1[0x809] == 0)
                    int32_t* result_3 = result_1
                    float* var_23c_4 = &var_8
                    void* var_240_1 = &result_1[4]
                    int32_t ecx_4
                    long double st0_1
                    st0_1, ecx_4 = sub_5d1950()
                    float eax_6 = var_8
                    
                    if (eax_6 s>= 0)
                        int32_t var_238_7 = ecx_4
                        float var_238_8 = fconvert.s(fconvert.t(fconvert.s(st0_1)))
                        int32_t var_23c_5 = 0
                        int32_t var_240_2 = *(result_1[0x808] + eax_6 i* 0x204 + 0x200)
                        sub_5d1b60(result_1)
                else
                    result_1[0x809] = 0
                    float var_22c[0x80]
                    int32_t edx_2 = sub_5d1570(&var_22c, &result_1[4])
                    int32_t eax_1
                    int32_t i
                    int32_t edx_3
                    
                    if (data_316801c == 0)
                        float (* var_238_4)[0x80] = &var_22c
                        eax_1, i, edx_3 = sub_5d12d0(result_1, edx_2)
                    else
                        float (* var_238_3)[0x80] = &var_22c
                        eax_1, edx_3 = sub_5d12d0(nullptr, edx_2)
                        i = 0
                        
                        if (data_bee778 s> 0)
                            edx_3 = 0
                            
                            do
                                *(edx_3 + data_3168018 + 0x2024) = 0
                                i += 1
                                edx_3 += 0x2028
                            while (i s< data_bee778)
                    
                    if (eax_1 s< 0)
                        int32_t var_238_6 = 0xffffffff
                        int32_t var_23c_3 = 0xffffffff
                        sub_5d1bb0(result_1, edx_3, i)
                    else
                        int32_t ecx_3 = result_1[0x808]
                        int32_t edx_4 = *(ecx_3 + eax_1 * 0x204 + 0x200)
                        int32_t var_238_5 = 0
                        int32_t var_23c_2 = edx_4
                        sub_5d1bb0(result_1, edx_4, ecx_3)
                
                uint32_t eax_10 = zx.d(result_1[0x806].w)
                
                if (eax_10.w != 0)
                    var_8 = eax_10 + 1
                    var_8 = fconvert.s(float.t(var_8))
                    long double x87_r6_1 = fconvert.t(var_8)
                    result_1[2] = fconvert.s((x87_r6_1 * fconvert.t(result_1[2]) - fconvert.t(var_24_1))
                        / float.t(eax_10))
                    long double x87_r6_3 = x87_r6_1 * fconvert.t(result_1[3]) - fconvert.t(var_20_1)
                    result_1[3] = fconvert.s(x87_r6_3 / x87_r6_3)
            else if (edi == 0x702)
                float var_28_1 = fconvert.s(fconvert.t(arg1[8]))
                int32_t eax_12 = result_1[5]
                float var_18_1 = fconvert.s(fconvert.t(arg1[9]))
                int32_t var_23c_1
                
                if (eax_12 s< 0x400)
                    result_1[eax_12 * 2 + 6] = fconvert.s(fconvert.t(result_1[2]))
                    result_1[result_1[5] * 2 + 7] = fconvert.s(fconvert.t(result_1[3]))
                    int32_t edx_6 = result_1[5]
                    float var_10_3 = fconvert.s(fconvert.t(result_1[edx_6 * 2 + 6])
                        - fconvert.t(result_1[edx_6 * 2 + 4]))
                    var_8 = fconvert.s(fconvert.t(result_1[edx_6 * 2 + 7])
                        - fconvert.t(result_1[edx_6 * 2 + 5]))
                    long double x87_r7_16 = fconvert.t(var_8)
                    long double x87_r6_4 = fconvert.t(var_10_3)
                    var_23c_1.q = fconvert.d(x87_r7_16 * x87_r7_16 + x87_r6_4 * x87_r6_4)
                    var_8 = fconvert.s(boost::math::detail::iconv<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                        var_23c_1))
                    long double x87_r7_20 = fconvert.t(var_8)
                    result_1[5] += 1
                    result_1[4] = fconvert.s(x87_r7_20 + fconvert.t(result_1[4]))
                
                float eax_14 = result_1[2]
                long double x87_r6_6 = fconvert.t(var_28_1)
                int32_t eax_15 = zx.d(result_1[0x806].w)
                float ecx_6 = result_1[3]
                float var_14_1 = fconvert.s(fconvert.t(var_24_1) - x87_r6_6)
                long double x87_r5_7 = fconvert.t(var_18_1)
                float var_10_4 = fconvert.s(fconvert.t(var_20_1) - x87_r5_7)
                result_1[2] = fconvert.s(x87_r6_6 / float.t(eax_15) + fconvert.t(result_1[2]))
                result_1[3] = fconvert.s(x87_r5_7 / x87_r5_7 + fconvert.t(result_1[3]))
                
                if (eax_15 u> 1)
                    float var_c_1 = fconvert.s(fconvert.t(var_14_1) - fconvert.t(eax_14))
                    var_8 = fconvert.s(fconvert.t(var_10_4) - fconvert.t(ecx_6))
                    long double x87_r7_34 = fconvert.t(var_8)
                    long double x87_r6_11 = fconvert.t(var_c_1)
                    var_23c_1.q = fconvert.d(x87_r7_34 * x87_r7_34 + x87_r6_11 * x87_r6_11)
                    float var_10_5 = fconvert.s(boost::math::detail::iconv<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                        var_23c_1))
                    float var_1c_1 = fconvert.s(fconvert.t(var_24_1) - fconvert.t(result_1[2]))
                    float var_18_3 = fconvert.s(fconvert.t(var_20_1) - fconvert.t(result_1[3]))
                    long double x87_r7_42 = fconvert.t(var_18_3)
                    long double x87_r6_13 = fconvert.t(var_1c_1)
                    var_23c_1.q = fconvert.d(x87_r7_42 * x87_r7_42 + x87_r6_13 * x87_r6_13)
                    float var_28_3 = fconvert.s(boost::math::detail::iconv<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                        var_23c_1))
                    long double x87_r6_15 = fconvert.t(var_10_5)
                    float var_c_2 = fconvert.s(fconvert.t(var_c_1) / x87_r6_15)
                    var_8 = fconvert.s(fconvert.t(var_8) / x87_r6_15)
                    long double x87_r6_17 = fconvert.t(var_28_3)
                    long double x87_r7_54 = fconvert.t(fconvert.s(fconvert.t(var_18_3) / x87_r6_17))
                    long double x87_r5_15 = fconvert.t(var_8)
                    long double x87_r4_4 = fconvert.t(fconvert.s(fconvert.t(var_1c_1) / x87_r6_17))
                    long double x87_r2_1 = fconvert.t(var_c_2)
                    var_23c_1.q = fconvert.d(x87_r4_4 * x87_r2_1 + x87_r7_54 * x87_r5_15)
                    int32_t eax_16
                    long double st0_5
                    st0_5, eax_16 =
                        pow(fconvert.d(x87_r2_1 * x87_r7_54 - x87_r4_4 * x87_r5_15), var_23c_1)
                    var_8 = fconvert.s(st0_5)
                    long double x87_r5_16 = fconvert.t(var_10_5)
                    float var_10_6 = fconvert.s(fconvert.t(var_28_3) - x87_r5_16)
                    long double x87_r5_18 = float.t(0)
                    x87_r5_18 - x87_r5_16
                    eax_16.w = (x87_r5_18 < x87_r5_16 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_18, x87_r5_16) ? 1 : 0) << 0xa
                        | (x87_r5_18 == x87_r5_16 ? 1 : 0) << 0xe | 0x2800
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_1))
                        var_10_6 = fconvert.s(x87_r5_16)
                        var_8 = fconvert.s(x87_r5_16)
                    
                    float var_238_9 = fconvert.s(fconvert.t(var_10_6))
                    float var_23c_6 = fconvert.s(fconvert.t(var_8))
                    int32_t* result_2 = result_1
                    sub_5d1b00()
            result = arg1
            
            if (*result == 0x700)
                result_1[0x806].w += 1
                uint32_t eax_17 = zx.d(result_1[0x806].w)
                uint32_t var_18_5 = eax_17
                result = eax_17 - 1
                arg1 = result
                result_1[5] = 1
                unimplemented  {fild st0, dword [ebp+0x8]}
                arg1 = fconvert.s(unimplemented  {fstp dword [ebp+0x8], st0})
                unimplemented  {fstp dword [ebp+0x8], st0}
                unimplemented  {fild st0, dword [ebp-0x14]}
                unimplemented  {fld st0, dword [ebp+0x8]}
                unimplemented  {fld st0, st0}
                unimplemented  {fmul st0, dword [esi+0x8]}
                unimplemented  {fld st0, dword [ebp-0x20]}
                unimplemented  {fld st0, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fdiv st0, st3}
                result_1[2] = fconvert.s(unimplemented  {fstp dword [esi+0x8], st0})
                unimplemented  {fstp dword [esi+0x8], st0}
                unimplemented  {fld st0, dword [esi+0xc]}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fld st0, dword [ebp-0x1c]}
                unimplemented  {fld st0, st0}
                unimplemented  {faddp st3, st0}
                unimplemented  {faddp st3, st0}
                unimplemented  {fxch st0, st2}
                unimplemented  {fxch st0, st2}
                unimplemented  {fdivrp st3, st0}
                unimplemented  {fdivrp st3, st0}
                unimplemented  {fxch st0, st2}
                unimplemented  {fxch st0, st2}
                result_1[3] = fconvert.s(unimplemented  {fstp dword [esi+0xc], st0})
                unimplemented  {fstp dword [esi+0xc], st0}
                unimplemented  {fldz }
                result_1[4] = fconvert.s(unimplemented  {fstp dword [esi+0x10], st0})
                unimplemented  {fstp dword [esi+0x10], st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                result_1[6] = fconvert.s(unimplemented  {fstp dword [esi+0x18], st0})
                unimplemented  {fstp dword [esi+0x18], st0}
                result_1[7] = fconvert.s(unimplemented  {fstp dword [esi+0x1c], st0})
                unimplemented  {fstp dword [esi+0x1c], st0}
    
    return result
}

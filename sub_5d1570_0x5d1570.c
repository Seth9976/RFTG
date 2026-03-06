// 函数名称: sub_5d1570
// 虚拟地址: 0x5d1570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d1570(float* arg1 @ edi, float* arg2)
{
    // 第一条实际指令: float* esi = arg2
    float* esi = arg2
    int32_t ebx = 0
    float var_c = fconvert.s(fconvert.t(*esi))
    long double x87_r7_1 = float.t(0)
    long double temp1 = fconvert.t(var_c)
    x87_r7_1 - temp1
    int32_t var_44
    
    if ((((x87_r7_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1 ? 1 : 0) << 0xe | 0x3800):1.b & 1) == 0)
        int32_t i_4 = 1
        
        if (esi[1] s> 1)
            void* esi_1 = &esi[5]
            int32_t i
            
            do
                long double x87_r7_6 =
                    fconvert.t(fconvert.s(fconvert.t(*esi_1) - fconvert.t(*(esi_1 - 8))))
                long double x87_r6_1 =
                    fconvert.t(fconvert.s(fconvert.t(*(esi_1 - 4)) - fconvert.t(*(esi_1 - 0xc))))
                var_44.q = fconvert.d(x87_r7_6 * x87_r7_6 + x87_r6_1 * x87_r6_1)
                i = i_4 + 1
                esi_1 += 8
                var_c = fconvert.s(fconvert.t(fconvert.s(boost::math::detail::iconv<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                    var_44))) + fconvert.t(var_c))
                i_4 = i
            while (i s< arg2[1])
            x87_r7_1 = float.t(0)
            esi = arg2
    
    int32_t i_5 = 1
    float var_14_3 = fconvert.s(fconvert.t(var_c) / fconvert.t(63.0))
    float var_c_1 = fconvert.s(fconvert.t(var_14_3))
    float var_2c = fconvert.s(x87_r7_1)
    float var_28 = fconvert.s(x87_r7_1)
    
    if (esi[1] s> 1)
        void* esi_2 = &esi[5]
        int32_t i_1
        
        do
            long double x87_r7_13 = fconvert.t(*(esi_2 - 8)) - fconvert.t(*esi_2)
            long double x87_r6_7 = fconvert.t(*(esi_2 - 0xc)) - fconvert.t(*(esi_2 - 4))
            var_44.q = fconvert.d(x87_r7_13 * x87_r7_13 + x87_r6_7 * x87_r6_7)
            long double x87_r6_9 = fconvert.t(var_14_3)
            long double x87_r5_3 = x87_r6_9
            long double x87_r4_1 = fconvert.t(fconvert.s(boost::math::detail::iconv<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                var_44)))
            long double x87_r2_1 = fconvert.t(var_c_1)
            long double x87_r3_2 = x87_r4_1 + x87_r2_1
            x87_r3_2 - x87_r6_9
            long double x87_r7_18 = x87_r2_1
            long double x87_r6_10
            
            if ((((x87_r3_2 < x87_r6_9 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_2, x87_r6_9) ? 1 : 0) << 0xa
                    | (x87_r3_2 == x87_r6_9 ? 1 : 0) << 0xe | 0x1800):1.b & 0x41) == 0)
                while (true)
                    ebx += 1
                    long double x87_r3_6 = (x87_r7_18 - x87_r6_9) / x87_r4_1
                    arg1[ebx * 2 - 2] = fconvert.s(
                        (fconvert.t(*(esi_2 - 4)) - fconvert.t(*(esi_2 - 0xc))) * x87_r3_6
                        + fconvert.t(*(esi_2 - 0xc)))
                    long double x87_r3_9 = fconvert.t(fconvert.s(
                        x87_r3_6 * (fconvert.t(*esi_2) - fconvert.t(*(esi_2 - 8)))
                        + fconvert.t(*(esi_2 - 8))))
                    arg1[ebx * 2 - 1] = fconvert.s(x87_r3_9)
                    var_2c = fconvert.s(fconvert.t(arg1[ebx * 2 - 2]) + fconvert.t(var_2c))
                    var_28 = fconvert.s(x87_r3_9 + fconvert.t(var_28))
                    long double x87_r3_12 = fconvert.t(fconvert.s(x87_r6_9 - x87_r7_18))
                    long double x87_r4_4 = x87_r4_1 + x87_r3_12
                    x87_r4_4 - x87_r5_3
                    
                    if ((((x87_r4_4 < x87_r5_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_4, x87_r5_3) ? 1 : 0) << 0xa
                            | (x87_r4_4 == x87_r5_3 ? 1 : 0) << 0xe | 0x2000):1.b & 0x41) != 0)
                        break
                    
                    x87_r6_9 = x87_r3_12
                
                x87_r6_10 = x87_r7_18
                x87_r7_18 = x87_r5_3
            else
                x87_r6_10 = x87_r5_3
            
            i_1 = i_5 + 1
            esi_2 += 8
            var_c_1 = fconvert.s(x87_r7_18 + x87_r6_10)
            i_5 = i_1
        while (i_1 s< arg2[1])
        
        if (ebx s>= 0x3f)
            long double x87_r6_14 = fconvert.t(0.015625)
            int32_t eax_5 = arg2[1]
            arg1[0x7e] = arg2[eax_5 * 2]
            float var_2c_1 = fconvert.s(fconvert.t(var_2c) * x87_r6_14)
            arg1[0x7f] = arg2[eax_5 * 2 + 1]
            float var_28_1 = fconvert.s(x87_r6_14 * fconvert.t(var_28))
            long double x87_r7_24 = fconvert.t(var_2c_1)
            float var_8_1 = fconvert.s(x87_r7_24)
            float var_c_3 = fconvert.s(x87_r7_24)
            long double x87_r6_16 = fconvert.t(var_28_1)
            float var_14_4 = fconvert.s(x87_r6_16)
            float var_10_4 = fconvert.s(x87_r6_16)
            var_44.q = fconvert.d(x87_r7_24 - fconvert.t(*arg1))
            arg2 = fconvert.s(pow(fconvert.d(x87_r6_16 - fconvert.t(arg1[1])), var_44))
            long double x87_r6_19
            
            for (int32_t i_2 = 0; i_2 s< 0x40; i_2 += 1)
                float var_20_1 = fconvert.s(fconvert.t(arg1[i_2 * 2 + 1]))
                double var_1c_1 =
                    fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1[i_2 * 2]))) - fconvert.t(var_2c_1))
                var_44.q = fconvert.d(fconvert.t(arg2))
                double var_34_1 = fconvert.d(boost::math::detail::iconv<double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                    var_44) * fconvert.t(var_1c_1))
                double var_24_1 = fconvert.d(fconvert.t(var_20_1) - fconvert.t(var_28_1))
                var_44.q = fconvert.d(fconvert.t(arg2))
                arg1[i_2 * 2] = fconvert.s(fconvert.t(var_34_1) - boost::math::detail::iconv_imp<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                    var_44) * fconvert.t(var_24_1) + fconvert.t(var_2c_1))
                var_44.q = fconvert.d(fconvert.t(arg2))
                double var_34_2 = fconvert.d(boost::math::detail::iconv<double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                    var_44) * fconvert.t(var_24_1))
                var_44.q = fconvert.d(fconvert.t(arg2))
                long double x87_r5_5 = fconvert.t(var_28_1)
                x87_r6_19 = x87_r5_5
                long double x87_r5_7 = fconvert.t(fconvert.s(boost::math::detail::iconv_imp<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
                    var_44) * fconvert.t(var_1c_1) + fconvert.t(var_34_2) + x87_r5_5))
                arg1[i_2 * 2 + 1] = fconvert.s(x87_r5_7)
                long double x87_r4_7 = fconvert.t(arg1[i_2 * 2])
                long double x87_r3_14 = fconvert.t(var_8_1)
                x87_r3_14 - x87_r4_7
                
                if ((((x87_r3_14 < x87_r4_7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r3_14, x87_r4_7) ? 1 : 0) << 0xa
                        | (x87_r3_14 == x87_r4_7 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
                    var_8_1 = fconvert.s(fconvert.t(arg1[i_2 * 2]))
                
                fconvert.t(var_c_3) - fconvert.t(arg1[i_2 * 2])
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    var_c_3 = fconvert.s(fconvert.t(arg1[i_2 * 2]))
                
                long double x87_r4_11 = fconvert.t(var_14_4)
                x87_r4_11 - x87_r5_7
                
                if ((((x87_r4_11 < x87_r5_7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_11, x87_r5_7) ? 1 : 0) << 0xa
                        | (x87_r4_11 == x87_r5_7 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
                    var_14_4 = fconvert.s(x87_r5_7)
                
                fconvert.t(var_10_4) - x87_r5_7
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (p_2)
                    x87_r6_19 = x87_r5_7
                else
                    var_10_4 = fconvert.s(x87_r5_7)
            
            void* eax_8 = &arg1[2]
            int32_t i_6 = 8
            long double x87_r5_12 = fconvert.t(fconvert.s(fconvert.t(var_c_3) - fconvert.t(var_8_1)))
            long double x87_r4_13 = fconvert.t(fconvert.s(fconvert.t(var_10_4) - fconvert.t(var_14_4)))
            long double x87_r3_16 = fconvert.t(256.0)
            long double x87_r2_12 = fconvert.t(var_2c_1)
            int32_t i_3
            
            do
                long double x87_r1_2 = fconvert.t(*(eax_8 - 8))
                eax_8 += 0x40
                *(eax_8 - 0x48) = fconvert.s((x87_r1_2 - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0x44) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x44)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                *(eax_8 - 0x40) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x40)) - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0x3c) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x3c)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                *(eax_8 - 0x38) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x38)) - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0x34) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x34)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                *(eax_8 - 0x30) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x30)) - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0x2c) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x2c)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                *(eax_8 - 0x28) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x28)) - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0x24) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x24)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                *(eax_8 - 0x20) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x20)) - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0x1c) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x1c)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                *(eax_8 - 0x18) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x18)) - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0x14) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x14)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                *(eax_8 - 0x10) =
                    fconvert.s((fconvert.t(*(eax_8 - 0x10)) - x87_r2_12) * x87_r3_16 / x87_r5_12)
                *(eax_8 - 0xc) =
                    fconvert.s((fconvert.t(*(eax_8 - 0xc)) - x87_r6_19) * x87_r3_16 / x87_r4_13)
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            return i_6 + 0x40
    
    int32_t var_40 = ebx
    sub_5cce60("ERROR: NumPoints = %i\n")
    return 0
}

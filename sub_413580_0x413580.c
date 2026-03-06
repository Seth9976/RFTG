// 函数名称: sub_413580
// 虚拟地址: 0x413580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_413580(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: long double x87_r6_2 = float.t(0)
    long double x87_r6_2 = float.t(0)
    long double x87_r5 =
        fconvert.t(fconvert.s(fconvert.t(arg1[8]) + fconvert.t(*arg1) + fconvert.t(arg1[4])))
    x87_r5 - x87_r6_2
    int32_t ecx
    
    if ((((x87_r5 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
        int32_t var_10 = ecx
        long double x87_r5_1 = fconvert.t(0.5)
        arg2[3] = fconvert.s(fconvert.t(fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r5
            + fconvert.t(1.0))))))) * x87_r5_1)
        long double x87_r6_6 = fconvert.t(fconvert.s(x87_r5_1 / x87_r5_1))
        *arg2 = fconvert.s((fconvert.t(arg1[7]) - fconvert.t(arg1[5])) * x87_r6_6)
        arg2[1] = fconvert.s((fconvert.t(arg1[2]) - fconvert.t(arg1[6])) * x87_r6_6)
        arg2[2] = fconvert.s(x87_r6_6 * (fconvert.t(arg1[3]) - fconvert.t(arg1[1])))
        return arg2
    
    fconvert.t(*arg1) - fconvert.t(arg1[4])
    long double x87_r6_14 = fconvert.t(arg1[8])
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        fconvert.t(*arg1) - x87_r6_14
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            int32_t var_10_6 = ecx
            int32_t eax_6
            long double st0_3
            st0_3, eax_6 = sub_413560(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg1)
                - (fconvert.t(arg1[8]) + fconvert.t(arg1[4])) + fconvert.t(1.0)))))
            long double x87_r7_36 = fconvert.t(fconvert.s(st0_3))
            long double x87_r5_13 = fconvert.t(0.5)
            *arg2 = fconvert.s(x87_r7_36 * x87_r5_13)
            long double x87_r4_2 = float.t(0)
            x87_r4_2 - x87_r7_36
            eax_6.w = (x87_r4_2 < x87_r7_36 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_2, x87_r7_36) ? 1 : 0) << 0xa
                | (x87_r4_2 == x87_r7_36 ? 1 : 0) << 0xe | 0x3000
            bool p_5 = unimplemented  {test ah, 0x44}
            long double x87_r7_38
            
            if (not(p_5))
                x87_r7_38 = x87_r5_13
            else
                x87_r7_38 = fconvert.t(fconvert.s(x87_r5_13 / x87_r5_13))
            
            arg2[3] = fconvert.s((fconvert.t(arg1[7]) - fconvert.t(arg1[5])) * x87_r7_38)
            arg2[1] = fconvert.s((fconvert.t(arg1[3]) + fconvert.t(arg1[1])) * x87_r7_38)
            arg2[2] = fconvert.s(x87_r7_38 * (fconvert.t(arg1[6]) + fconvert.t(arg1[2])))
            return arg2
    else
        fconvert.t(arg1[4]) - x87_r6_14
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            int32_t var_10_2 = ecx
            int32_t eax_2
            long double st0_1
            st0_1, eax_2 = sub_413560(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[4])
                - (fconvert.t(*arg1) + fconvert.t(arg1[8])) + fconvert.t(1.0)))))
            long double x87_r7_19 = fconvert.t(fconvert.s(st0_1))
            long double x87_r5_6 = fconvert.t(0.5)
            arg2[1] = fconvert.s(x87_r7_19 * x87_r5_6)
            long double x87_r4 = float.t(0)
            x87_r4 - x87_r7_19
            eax_2.w = (x87_r4 < x87_r7_19 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4, x87_r7_19) ? 1 : 0) << 0xa
                | (x87_r4 == x87_r7_19 ? 1 : 0) << 0xe | 0x3000
            bool p_2 = unimplemented  {test ah, 0x44}
            long double x87_r7_21
            
            if (not(p_2))
                x87_r7_21 = x87_r5_6
            else
                x87_r7_21 = fconvert.t(fconvert.s(x87_r5_6 / x87_r5_6))
            
            arg2[3] = fconvert.s((fconvert.t(arg1[2]) - fconvert.t(arg1[6])) * x87_r7_21)
            arg2[2] = fconvert.s((fconvert.t(arg1[7]) + fconvert.t(arg1[5])) * x87_r7_21)
            *arg2 = fconvert.s(x87_r7_21 * (fconvert.t(arg1[3]) + fconvert.t(arg1[1])))
            return arg2
    
    int32_t var_10_4 = ecx
    int32_t eax_4
    long double st0_2
    st0_2, eax_4 =
        sub_413560(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[8]) - x87_r6_2 + fconvert.t(1.0)))))
    long double x87_r7_27 = fconvert.t(fconvert.s(st0_2))
    long double x87_r5_10 = fconvert.t(0.5)
    arg2[2] = fconvert.s(x87_r7_27 * x87_r5_10)
    long double x87_r4_1 = float.t(0)
    x87_r4_1 - x87_r7_27
    eax_4.w = (x87_r4_1 < x87_r7_27 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r7_27) ? 1 : 0) << 0xa
        | (x87_r4_1 == x87_r7_27 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x44}
    long double x87_r7_29
    
    if (not(p_4))
        x87_r7_29 = x87_r5_10
    else
        x87_r7_29 = fconvert.t(fconvert.s(x87_r5_10 / x87_r5_10))
    
    arg2[3] = fconvert.s((fconvert.t(arg1[3]) - fconvert.t(arg1[1])) * x87_r7_29)
    *arg2 = fconvert.s((fconvert.t(arg1[6]) + fconvert.t(arg1[2])) * x87_r7_29)
    arg2[1] = fconvert.s(x87_r7_29 * (fconvert.t(arg1[7]) + fconvert.t(arg1[5])))
    return arg2
}

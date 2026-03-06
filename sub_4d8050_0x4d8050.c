// 函数名称: sub_4d8050
// 虚拟地址: 0x4d8050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d8050(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t ecx
    int32_t var_58 = ecx
    float var_34 = fconvert.s(fconvert.t(arg1[3]) - fconvert.t(*arg1))
    float var_30 = fconvert.s(fconvert.t(arg1[4]) - fconvert.t(arg1[1]))
    float var_2c = fconvert.s(fconvert.t(arg1[5]) - fconvert.t(arg1[2]))
    float var_44 = fconvert.s(fconvert.t(arg1[6]) - fconvert.t(*arg1))
    float var_40 = fconvert.s(fconvert.t(arg1[7]) - fconvert.t(arg1[1]))
    float var_3c = fconvert.s(fconvert.t(arg1[8]) - fconvert.t(arg1[2]))
    long double x87_r6 = fconvert.t(var_3c)
    long double x87_r4 = fconvert.t(var_40)
    float var_54 = fconvert.s(fconvert.t(arg2[4]) * x87_r6 - fconvert.t(arg2[5]) * x87_r4)
    long double x87_r4_2 = fconvert.t(var_44)
    float var_50 = fconvert.s(fconvert.t(arg2[5]) * x87_r4_2 - x87_r6 * fconvert.t(arg2[3]))
    float var_4c = fconvert.s(x87_r4 * fconvert.t(arg2[3]) - x87_r4_2 * fconvert.t(arg2[4]))
    long double st0 = sub_4064d0(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(var_50) * fconvert.t(var_30) + fconvert.t(var_54) * fconvert.t(var_34)
        + fconvert.t(var_4c) * fconvert.t(var_2c)))))
    long double temp1 = fconvert.t(9.9999997473787516e-05)
    st0 - temp1
    int32_t result
    result.w = (st0 < temp1 ? 1 : 0) << 8 | (is_unordered.t(st0, temp1) ? 1 : 0) << 0xa
        | (st0 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        long double x87_r6_9 = float.t(1)
        long double x87_r7_31 = fconvert.t(fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg1[1])))
        long double x87_r5_9 = fconvert.t(fconvert.s(fconvert.t(*arg2) - fconvert.t(*arg1)))
        long double x87_r4_6 = fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg1[2])))
        long double x87_r3_5 = fconvert.t(fconvert.s(x87_r6_9 / x87_r6_9))
        float var_10_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_31 * fconvert.t(var_50)
            + x87_r5_9 * fconvert.t(var_54) + x87_r4_6 * fconvert.t(var_4c))) * x87_r3_5)
        long double x87_r3_7 = fconvert.t(var_10_2)
        long double temp2_1 = fconvert.t(-9.9999997473787516e-05)
        x87_r3_7 - temp2_1
        result.w = (x87_r3_7 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_7, temp2_1) ? 1 : 0) << 0xa | (x87_r3_7 == temp2_1 ? 1 : 0) << 0xe
            | 0x1800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
        label_4d8265:
            result.b = 0
            sub_5a6aba(var_8 ^ &__saved_ebp)
            return result
        
        long double temp3_1 = fconvert.t(1.0000999999974738)
        x87_r3_7 - temp3_1
        result.w = (x87_r3_7 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_7, temp3_1) ? 1 : 0) << 0xa | (x87_r3_7 == temp3_1 ? 1 : 0) << 0xe
            | 0x2000
        
        if ((result:1.b & 0x41) != 0)
            long double x87_r1_1 = fconvert.t(var_30)
            long double x87_r2_5 = fconvert.t(var_34)
            float var_20_2 = fconvert.s(x87_r4_6 * x87_r2_5 - fconvert.t(var_2c) * x87_r5_9)
            float var_1c_2 = fconvert.s(x87_r5_9 * x87_r1_1 - x87_r2_5 * x87_r7_31)
            x87_r5_9 = fconvert.t(fconvert.s(x87_r7_31 * fconvert.t(var_2c) - x87_r4_6 * x87_r1_1))
            long double x87_r3_11 = fconvert.t(var_20_2)
            long double x87_r2_8 = fconvert.t(var_1c_2)
            long double x87_r3_18 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(arg2[5]) * x87_r2_8 + fconvert.t(arg2[4]) * x87_r3_11
                + fconvert.t(arg2[3]) * x87_r5_9)) * x87_r3_5))
            long double temp4_1 = fconvert.t(-9.9999997473787516e-05)
            x87_r3_18 - temp4_1
            result.w = (x87_r3_18 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_18, temp4_1) ? 1 : 0) << 0xa
                | (x87_r3_18 == temp4_1 ? 1 : 0) << 0xe | 0x1800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                result.b = 0
                sub_5a6aba(var_8 ^ &__saved_ebp)
                return result
            
            long double x87_r3_19 = x87_r3_18 + fconvert.t(var_10_2)
            long double temp5_1 = fconvert.t(1.0000999999974738)
            x87_r3_19 - temp5_1
            result.w = (x87_r3_19 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_19, temp5_1) ? 1 : 0) << 0xa
                | (x87_r3_19 == temp5_1 ? 1 : 0) << 0xe | 0x2000
            
            if ((result:1.b & 0x41) == 0)
                goto label_4d8265
            
            long double x87_r7_34 = fconvert.t(fconvert.s(x87_r3_5 * fconvert.t(fconvert.s(
                x87_r2_8 * fconvert.t(var_3c) + x87_r5_9 * fconvert.t(var_44)
                + x87_r3_11 * fconvert.t(var_40)))))
            float* entry_ebx
            *entry_ebx = fconvert.s(x87_r7_34)
            long double x87_r6_27 = float.t(0)
            x87_r6_27 - x87_r7_34
            result.w = (x87_r6_27 < x87_r7_34 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_27, x87_r7_34) ? 1 : 0) << 0xa
                | (x87_r6_27 == x87_r7_34 ? 1 : 0) << 0xe
            
            if ((result:1.b & 0x41) != 0)
                result.b = 1
                sub_5a6aba(var_8 ^ &__saved_ebp)
                return result
    
    result.b = 0
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return result
}

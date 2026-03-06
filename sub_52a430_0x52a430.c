// 函数名称: sub_52a430
// 虚拟地址: 0x52a430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_52a430()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_30d74e8
    float var_15c
    int32_t* eax_2 = sub_524d70(&var_15c)
    long double x87_r7 = float.t(0)
    int32_t var_4c[0x2]
    var_4c[0] = fconvert.s(x87_r7)
    float ecx = *eax_2
    var_4c[1] = fconvert.s(x87_r7)
    float edx = eax_2[1]
    float var_44 = fconvert.s(x87_r7)
    float var_9c = ecx
    long double x87_r6 = fconvert.t(0.5f)
    float var_40 = fconvert.s(x87_r6)
    float var_3c = fconvert.s(x87_r7)
    long double x87_r5 = float.t(1)
    float var_38 = fconvert.s(x87_r5)
    int32_t i_1 = 0
    float var_28 = fconvert.s(x87_r5)
    int32_t i = 0
    float var_24 = fconvert.s(x87_r5)
    float var_1c = fconvert.s(x87_r5)
    float var_14 = fconvert.s(x87_r5)
    float var_10 = fconvert.s(x87_r5)
    float var_34 = fconvert.s(x87_r6)
    float var_2c = fconvert.s(x87_r6)
    float var_18 = fconvert.s(x87_r6)
    float var_30 = fconvert.s(x87_r7)
    float var_20 = fconvert.s(x87_r7)
    double var_114 = fconvert.d(fconvert.t(eax_2[2]) - fconvert.t(var_9c))
    double var_14c = fconvert.d(fconvert.t(eax_2[3]) - fconvert.t(edx))
    float var_f4
    void arg_4
    
    do
        long double x87_r7_7 = fconvert.t(8.0)
        long double x87_r5_1 = fconvert.t(data_30d950c)
        long double x87_r6_17 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t((&var_4c)[i][0]) * fconvert.t(var_114) + fconvert.t(var_9c)))
            - fconvert.t(data_30d9510))) * x87_r5_1))
        float var_c4_1 = fconvert.s(x87_r6_17 + x87_r7_7)
        var_48
        long double x87_r5_5 = fconvert.t(fconvert.s(x87_r5_1 * fconvert.t(fconvert.s(fconvert.t(
            fconvert.s(fconvert.t(*(&var_48 + (i << 3))) * fconvert.t(var_14c) + fconvert.t(edx)))
            - fconvert.t(data_30d9514)))))
        float var_c0_1 = fconvert.s(x87_r5_5 + x87_r7_7)
        var_f4 = fconvert.s(fconvert.t(fconvert.s(x87_r6_17 - x87_r7_7)))
        float var_f0_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5_5 - x87_r7_7)))
        float var_ec_1 = fconvert.s(fconvert.t(var_c4_1))
        float var_e8_1 = fconvert.s(fconvert.t(var_c0_1))
        
        if (sub_4057a0(&var_f4, &arg_4) != 0)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return i
        
        i += 1
    while (i s< 8)
    
    int32_t var_78 = 2
    int32_t var_7c = 0
    int32_t var_74 = 1
    int32_t var_70 = 0
    int32_t var_6c
    __builtin_memcpy(&var_6c, 
        "\x05\x00\x00\x00\x03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x"
    "07\x00\x00\x00\x06\x00\x00\x00", 
        0x20)
    float* eax_6 = sub_529410(&var_15c, &var_9c)
    float ecx_4 = *eax_6
    float edx_4 = eax_6[1]
    float ecx_5 = eax_6[2]
    float edx_5 = eax_6[3]
    int32_t* edi_2 = &var_78
    
    do
        int32_t eax_7 = edi_2[-1]
        long double x87_r6_19 = fconvert.t(var_9c)
        long double x87_r5_9 = fconvert.t(data_30d9510)
        long double x87_r4_5 = fconvert.t(data_30d9514)
        long double x87_r3_2 = fconvert.t(data_30d950c)
        long double x87_r3_6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t((&var_4c)[eax_7][0]) * fconvert.t(var_114) + x87_r6_19))
            - x87_r5_9)) * x87_r3_2))
        long double x87_r1_1 = fconvert.t(8.0)
        float var_cc_2 = fconvert.s(x87_r3_6 + x87_r1_1)
        long double x87_r1_3 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t((&__saved_ebp)[eax_7 * 2 - 0x11]) * fconvert.t(var_14c) + fconvert.t(edx)))
            - x87_r4_5)) * x87_r3_2))
        float var_c8_2 = fconvert.s(x87_r1_3 + x87_r1_1)
        var_15c = fconvert.s(fconvert.t(fconvert.s(x87_r3_6 - x87_r1_1)))
        float var_158_1 = fconvert.s(fconvert.t(fconvert.s(x87_r1_3 - x87_r1_1)))
        float var_154_1 = fconvert.s(fconvert.t(var_cc_2))
        float var_150_1 = fconvert.s(fconvert.t(var_c8_2))
        int32_t eax_11 = *edi_2
        long double x87_r6_30 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(x87_r6_19 + fconvert.t((&var_4c)[eax_11][0]) * fconvert.t(var_114)))
            - x87_r5_9)) * x87_r3_2))
        float var_10c_1 = fconvert.s(x87_r6_30 + x87_r1_1)
        long double x87_r5_19 = fconvert.t(fconvert.s(x87_r3_2 * fconvert.t(fconvert.s(fconvert.t(
            fconvert.s(fconvert.t((&__saved_ebp)[eax_11 * 2 - 0x11]) * fconvert.t(var_14c)
            + fconvert.t(edx))) - x87_r4_5))))
        float var_108_1 = fconvert.s(x87_r5_19 + x87_r1_1)
        float var_140_1 = fconvert.s(x87_r5_19 - x87_r1_1)
        var_f4 = fconvert.s(fconvert.t(fconvert.s(x87_r6_30 - x87_r1_1)))
        float var_ac = var_f4
        float var_a8_1 = fconvert.s(fconvert.t(var_140_1))
        float var_a0_1 = fconvert.s(fconvert.t(var_108_1))
        float var_a4_1 = fconvert.s(fconvert.t(var_10c_1))
        float var_16c[0x4]
        float* eax_14 = sub_4684b0(&var_15c, &var_ac, &var_16c)
        float ecx_10 = eax_14[1]
        float var_e4 = *eax_14
        long double x87_r7_24 = fconvert.t(var_e4)
        long double x87_r6_32 = fconvert.t(ecx_4)
        x87_r6_32 - x87_r7_24
        float eax_15
        eax_15.w = (x87_r6_32 < x87_r7_24 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_32, x87_r7_24) ? 1 : 0) << 0xa
            | (x87_r6_32 == x87_r7_24 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_33
        
        if ((eax_15:1.b & 0x41) != 0)
            x87_r6_33 = fconvert.t(ecx_5)
        else
            x87_r6_33 = x87_r7_24
            x87_r7_24 = x87_r6_32
        
        long double x87_r6_34 = fconvert.t(ecx_10)
        long double x87_r5_22 = fconvert.t(edx_4)
        x87_r5_22 - x87_r6_34
        eax_15.w = (x87_r5_22 < x87_r6_34 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_22, x87_r6_34) ? 1 : 0) << 0xa
            | (x87_r5_22 == x87_r6_34 ? 1 : 0) << 0xe | 0x2800
        long double x87_r5_23
        
        if ((eax_15:1.b & 0x41) != 0)
            x87_r7_24 = x87_r5_22
            x87_r5_23 = fconvert.t(edx_5)
        else
            x87_r5_23 = x87_r6_34
            x87_r6_34 = x87_r5_22
        
        float var_100_1 = fconvert.s(x87_r5_23)
        long double x87_r5_24 = fconvert.t(eax_14[2])
        long double x87_r4_13 = fconvert.t(ecx_5)
        x87_r4_13 - x87_r5_24
        eax_15.w = (x87_r4_13 < x87_r5_24 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_13, x87_r5_24) ? 1 : 0) << 0xa
            | (x87_r4_13 == x87_r5_24 ? 1 : 0) << 0xe | 0x2800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            x87_r6_34 = x87_r5_24
        
        long double x87_r7_25 = x87_r6_34
        float var_fc_1 = fconvert.s(x87_r7_24)
        long double x87_r6_36 = fconvert.t(eax_14[3])
        long double x87_r5_25 = fconvert.t(edx_5)
        x87_r5_25 - x87_r6_36
        eax_15.w = (x87_r5_25 < x87_r6_36 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_25, x87_r6_36) ? 1 : 0) << 0xa
            | (x87_r5_25 == x87_r6_36 ? 1 : 0) << 0xe | 0x3000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r7_25 = x87_r6_36
        
        float var_f8_1 = fconvert.s(x87_r7_25)
        var_e4 = fconvert.s(x87_r6_33)
        float var_e0_2 = var_100_1
        float var_d8_2 = var_f8_1
        float var_dc_2 = var_fc_1
        
        if (sub_4057a0(&var_e4, &arg_4) != 0)
            int32_t eax_20 = (&var_74)[i_1 * 3]
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_20
        
        i_1 += 1
        edi_2 = &edi_2[3]
    while (i_1 s< 4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}

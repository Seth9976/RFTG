// 函数名称: sub_454940
// 虚拟地址: 0x454940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_454940(int32_t* arg1, float* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = *(data_27e7a40 + 0x548)
    int32_t* eax_1 = *(data_27e7a40 + 0x548)
    int32_t esi = eax_1[0x2feb]
    float var_8 = fconvert.s(fconvert.t(arg1[0x1e]))
    
    if (esi == 0)
        var_8 = fconvert.s(float.t(1) - fconvert.t(var_8))
    else if (arg1[0x2b] != esi)
        if (*arg1 != 0)
            var_8 = fconvert.s(float.t(1) - fconvert.t(var_8))
        else
            eax_1 = sub_463f60(&eax_1[0x10e58], esi)
            
            if (*eax_1 != 6)
                var_8 = fconvert.s(float.t(1) - fconvert.t(var_8))
            else
                int32_t edi_1 = arg1[0x1f]
                
                if (edi_1 != eax_1[0x23] && edi_1 != eax_1[0x24])
                    var_8 = fconvert.s(float.t(1) - fconvert.t(var_8))
    
    long double x87_r6_2 = float.t(0)
    long double x87_r7_4 = float.t(1) - x87_r6_2
    long double x87_r5_5 = float.t(0)
    long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_8) - x87_r6_2))
        / fconvert.t(fconvert.s(x87_r7_4))))
    x87_r4_1 - x87_r5_5
    eax_1.w = (x87_r4_1 < x87_r5_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_1 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    bool p = unimplemented  {test ah, 0x41}
    long double x87_r7_9
    
    if (p)
        x87_r4_1 - x87_r5_5
        eax_1.w = (x87_r4_1 < x87_r5_5 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_1, x87_r5_5) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_1:1.b & 1) != 0)
            long double x87_r3_1 = fconvert.t(2.0)
            long double x87_r2_1 = fconvert.t(3.0)
            long double x87_r3_3 =
                fconvert.t(fconvert.s(x87_r5_5 * x87_r5_5 * (x87_r2_1 - x87_r5_5 * x87_r3_1)))
            x87_r7_9 = x87_r7_4
                * fconvert.t(fconvert.s(x87_r3_3 * x87_r3_3 * (x87_r2_1 - x87_r3_1 * x87_r3_3))) + x87_r4_1
        else
            x87_r7_9 = x87_r4_1
    else
        x87_r7_9 = x87_r6_2
    
    float var_124
    float* var_130 = &var_124
    *arg2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_9)))
    int32_t eax_2
    int80_t st0
    st0, eax_2 = sub_40a930(var_130)
    float var_c4[0x8]
    float (* var_130_1)[0x8] = &var_c4
    float var_64
    __builtin_memcpy(&var_64, eax_2, 0x40)
    int32_t eax_3
    int80_t st0_1
    st0_1, eax_3 = sub_468120(var_130_1)
    void var_84
    __builtin_memcpy(&var_84, eax_3, 0x20)
    float var_70
    long double x87_r5_15 = fconvert.t(var_70)
    long double x87_r4_10 = fconvert.t(fconvert.s(fconvert.t(200.0) + x87_r5_15))
    float var_14 = fconvert.s(x87_r4_10)
    float var_6c
    long double x87_r3_7 = fconvert.t(var_6c)
    long double x87_r1_3 = float.t(0)
    float var_8_8 = fconvert.s(x87_r3_7 + x87_r1_3)
    __builtin_memcpy(&var_124, &var_64, 0x40)
    long double x87_r1_5 = fconvert.t(var_8_8)
    long double x87_r6_6 = float.t(1)
    float var_8_9 = fconvert.s(x87_r6_6 / x87_r6_6)
    float var_24 = fconvert.s(fconvert.t(var_8_9) * fconvert.t(var_14))
    float var_20 = fconvert.s(fconvert.t(var_8_9) * fconvert.t(fconvert.s(x87_r1_5)))
    float var_18 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[9]))) - x87_r3_7)
    var_124 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_64) + fconvert.t(fconvert.s(x87_r4_10))))
        + fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[8]))) - x87_r5_15)))
    long double x87_r3_17 = float.t(1)
    float var_60
    float var_120 = fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(var_60) + fconvert.t(fconvert.s(x87_r1_5))))
        + fconvert.t(var_18))
    float var_118 = fconvert.s(x87_r3_17)
    float var_1c_1 = fconvert.s(fneg(fconvert.t(var_24)))
    float var_e4
    __builtin_memcpy(&var_e4, &var_64, 0x40)
    float var_d8 = fconvert.s(x87_r3_17)
    float var_e0 = fconvert.s(fneg(fconvert.t(var_20)))
    float var_a4
    __builtin_memcpy(&var_a4, &var_64, 0x40)
    var_e4 = var_1c_1
    float var_58
    long double x87_r5_18 = x87_r1_3 + (fconvert.t(var_58) - x87_r1_3) * fconvert.t(*arg2)
    var_a4 = 0f
    int32_t var_a0 = 0
    float* entry_result
    __builtin_memcpy(entry_result, &var_e4, 0x40)
    float var_98 = fconvert.s(x87_r5_18)
    sub_4f6020(&var_64, entry_result, &var_a4)
    __builtin_memcpy(entry_result, &var_64, 0x40)
    sub_4f6020(&var_64, entry_result, &var_124)
    __builtin_memcpy(entry_result, &var_64, 0x40)
    return entry_result
}

// 函数名称: sub_4da670
// 虚拟地址: 0x4da670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4da670(int32_t* arg1, float* arg2, float arg3, float arg4, float arg5, float arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t* eax_1 = *sub_466320(arg1)
    int32_t* eax_1 = *sub_466320(arg1)
    long double x87_r7 = float.t(*eax_1)
    
    if (*eax_1 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_1[1])
    
    if (eax_1[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_1[2])))
    float var_1c_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    float var_c = var_1c_1
    long double x87_r6_2 = fconvert.t(arg5)
    float var_c_1 = fconvert.s(fconvert.t(var_1c_1) * x87_r6_2)
    long double x87_r5_1 = fconvert.t(arg6)
    float var_8_2 =
        fconvert.s(fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))) * x87_r5_1)
    float var_48 = fconvert.s(x87_r6_2)
    long double x87_r6_8 = float.t(0)
    float var_3c = fconvert.s(x87_r6_8)
    float var_30 = fconvert.s(x87_r6_8)
    float var_44 = fconvert.s(x87_r6_8)
    float var_2c = fconvert.s(x87_r6_8)
    float var_38 = fconvert.s(x87_r5_1)
    long double x87_r5_3 = fconvert.t(0.5)
    float var_40 = fconvert.s(fconvert.t(var_c_1) * x87_r5_3 + fconvert.t(arg3))
    float var_34 = fconvert.s(x87_r5_3 * fconvert.t(var_8_2) + fconvert.t(arg4))
    long double x87_r6_16 = float.t(1)
    float var_28 = fconvert.s(x87_r6_16)
    float var_18_2 = fconvert.s(x87_r6_16)
    float var_c_2 = fconvert.s(x87_r6_16)
    float var_14 = fconvert.s(x87_r6_8)
    float var_10 = fconvert.s(x87_r6_8)
    float var_8_3 = var_18_2
    float var_6c[0x9]
    float (* edx_3)[0x9] = &var_6c
    sub_413350(&var_48, edx_3, arg2)
    return sub_4d9b80(arg7, edx_3, nullptr, &var_6c, &var_14, arg7)
}

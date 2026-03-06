// 函数名称: sub_460e40
// 虚拟地址: 0x460e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_460e40(void* arg1 @ esi)
{
    // 第一条实际指令: long double x87_r7_1 = fconvert.t(*(arg1 + 0x24))
    long double x87_r7_1 = fconvert.t(*(arg1 + 0x24))
    float var_34 = fconvert.s(fconvert.t(*(arg1 + 0x20)))
    float var_30 = fconvert.s(x87_r7_1)
    int32_t* eax_2 = sub_460d30(arg1)
    int32_t* eax_4 = *sub_466320(eax_2)
    long double x87_r7_2 = float.t(*eax_4)
    
    if (*eax_4 s< 0)
        x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = float.t(eax_4[1])
    
    if (eax_4[1] s< 0)
        x87_r7_3 = x87_r7_3 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_5 = fconvert.t(fconvert.s(fconvert.t(eax_4[2])))
    float var_1c_2 = fconvert.s(x87_r7_5 * fconvert.t(fconvert.s(x87_r7_2)))
    float var_18_2 = fconvert.s(x87_r7_5 * fconvert.t(fconvert.s(x87_r7_3)))
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0xc))))
    float var_24 = fconvert.s(fconvert.t(var_1c_2) * x87_r6_2)
    float var_20 = fconvert.s(x87_r6_2 * fconvert.t(var_18_2))
    float var_4c
    sub_405e30(&var_4c, &var_24, &var_34)
    long double x87_r7_12 = float.t(0)
    float var_3c = fconvert.s(x87_r7_12)
    float var_38 = fconvert.s(x87_r7_12)
    float var_14 = var_4c
    var_34 = fconvert.s(fconvert.t(var_1c_2))
    int32_t var_48
    int32_t var_10 = var_48
    float var_30_1 = fconvert.s(fconvert.t(var_18_2))
    int32_t var_44
    int32_t var_c_1 = var_44
    float var_2c = var_3c
    int32_t var_40
    int32_t var_8_3 = var_40
    float edx_5 = var_34
    float var_28 = var_38
    float var_20_1 = var_30_1
    var_24 = edx_5
    int32_t result
    int80_t st0
    st0, result = sub_4d9fb0(&var_2c, edx_5, &var_14, eax_2)
    return result
}

// 函数名称: sub_439ae0
// 虚拟地址: 0x439ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_439ae0(float* arg1 @ esi)
{
    // 第一条实际指令: int32_t* edx = data_307c78c
    int32_t* edx = data_307c78c
    float var_18 = fconvert.s(fconvert.t(arg1[6]))
    float var_34 = fconvert.s(fconvert.t(arg1[5]))
    float var_30 = var_18
    int32_t* eax_2 = *sub_466320(edx)
    long double x87_r7_2 = float.t(*eax_2)
    
    if (*eax_2 s< 0)
        x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = float.t(eax_2[1])
    
    if (eax_2[1] s< 0)
        x87_r7_3 = x87_r7_3 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_5 = fconvert.t(fconvert.s(fconvert.t(eax_2[2])))
    float var_1c_2 = fconvert.s(x87_r7_5 * fconvert.t(fconvert.s(x87_r7_2)))
    float var_18_2 = fconvert.s(x87_r7_5 * fconvert.t(fconvert.s(x87_r7_3)))
    long double x87_r7_8 = fconvert.t(fconvert.s(fconvert.t(*arg1)))
    float var_24 = fconvert.s(x87_r7_8 * fconvert.t(var_1c_2))
    float var_20 = fconvert.s(x87_r7_8 * fconvert.t(var_18_2))
    float var_4c
    sub_405e30(&var_4c, &var_24, &var_34)
    long double x87_r7_10 = float.t(0)
    float var_3c = fconvert.s(x87_r7_10)
    float var_38 = fconvert.s(x87_r7_10)
    float var_14 = var_4c
    var_34 = fconvert.s(fconvert.t(var_1c_2))
    int32_t var_48
    int32_t var_10 = var_48
    float var_30_1 = fconvert.s(fconvert.t(var_18_2))
    int32_t var_44
    int32_t var_c_1 = var_44
    int32_t var_40
    int32_t var_8_3 = var_40
    float eax_6 = var_34
    float var_2c = var_3c
    float var_28 = var_38
    int32_t* edx_6 = data_307c78c
    var_24 = eax_6
    float var_20_1 = var_30_1
    int32_t result
    int80_t st0
    st0, result = sub_4d9fb0(&var_2c, edx_6, &var_14, edx_6)
    return result
}

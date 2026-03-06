// 函数名称: sub_439be0
// 虚拟地址: 0x439be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_439be0()
{
    // 第一条实际指令: sub_4dad50()
    sub_4dad50()
    int32_t* eax_2 = *sub_466320(data_307c78c)
    long double x87_r7 = float.t(*eax_2)
    
    if (*eax_2 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_2[1])
    
    if (eax_2[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    float var_18 = fconvert.s(x87_r7_1)
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_2[2])))
    float var_1c_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    float var_c = var_1c_1
    float var_18_1 = fconvert.s(x87_r7_3 * fconvert.t(var_18))
    float var_8_1 = var_18_1
    float var_44
    sub_405e30(&var_44, &var_c, &data_840a00)
    long double x87_r7_5 = float.t(0)
    float var_14 = fconvert.s(x87_r7_5)
    float var_10 = fconvert.s(x87_r7_5)
    float var_34 = var_44
    var_c = fconvert.s(fconvert.t(var_1c_1))
    int32_t var_40
    int32_t var_30 = var_40
    float var_8_2 = fconvert.s(fconvert.t(var_18_1))
    int32_t var_3c
    int32_t var_2c = var_3c
    int32_t var_38
    int32_t var_28 = var_38
    float eax_6 = var_c
    float var_24 = var_14
    float var_20 = var_10
    int32_t* edx_5 = data_307c78c
    float var_1c_2 = eax_6
    float var_18_2 = var_8_2
    sub_4d9fb0(&var_24, edx_5, &var_34, edx_5)
    void* eax_8 = data_27e7fe4
    __builtin_memcpy(eax_8 + 0x9c, 0x83faf8, 0x40)
    *(eax_8 + 0xdc) = 0
    return sub_4e2080()
}

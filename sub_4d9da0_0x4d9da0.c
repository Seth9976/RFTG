// 函数名称: sub_4d9da0
// 虚拟地址: 0x4d9da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d9da0(int32_t* arg1, float arg2, float arg3)
{
    // 第一条实际指令: int32_t* eax_1 = *sub_466320(arg1)
    int32_t* eax_1 = *sub_466320(arg1)
    long double x87_r7 = float.t(*eax_1)
    
    if (*eax_1 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_1[1])
    
    if (eax_1[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    float var_40
    int32_t* esi = &var_40
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_1[2])))
    float var_14_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    float var_10_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))
    long double x87_r7_5 = float.t(0)
    float var_30 = fconvert.s(x87_r7_5)
    float var_2c = fconvert.s(x87_r7_5)
    long double x87_r7_6 = float.t(1)
    float var_28 = fconvert.s(x87_r7_6)
    var_40 = var_30
    float var_24 = fconvert.s(x87_r7_6)
    float var_3c = var_2c
    long double x87_r7_7 = fconvert.t(arg2)
    var_30 = fconvert.s(x87_r7_7)
    long double x87_r6_2 = fconvert.t(arg3)
    float var_34 = var_24
    float var_2c_1 = fconvert.s(x87_r6_2)
    float var_38 = var_28
    float var_1c = var_30
    float var_18 = var_2c_1
    float var_14_2 = fconvert.s(x87_r7_7 + fconvert.t(var_14_1))
    float eax_5 = data_27e7fe0
    float var_10_2 = fconvert.s(x87_r6_2 + fconvert.t(var_10_1))
    
    if (*(eax_5 i+ 0x38) == 0)
        sub_4d9830(eax_5, &data_be4aac, arg1, esi, &var_1c, nullptr)
        return 
    
    eax_5 = sub_4d9650(&var_1c, eax_5 i+ 0x28, esi, &var_30, &var_1c)
    void var_50
    
    if (eax_5.b != 0)
        sub_4d9830(eax_5, &data_be4aac, arg1, &var_30, &var_50, nullptr)
}

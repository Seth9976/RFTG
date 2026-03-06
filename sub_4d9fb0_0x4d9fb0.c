// 函数名称: sub_4d9fb0
// 虚拟地址: 0x4d9fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d9fb0(float* arg1, int32_t arg2, float* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* eax_1 = *sub_466320(arg4)
    int32_t* eax_1 = *sub_466320(arg4)
    long double x87_r7 = float.t(*eax_1)
    
    if (*eax_1 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_1[1])
    
    if (eax_1[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_1[2])))
    float var_10_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))
    float var_30 = fconvert.s(fconvert.t(*arg1)
        / fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))))
    long double x87_r6_4 = fconvert.t(arg1[1])
    long double x87_r5_1 = fconvert.t(var_10_1)
    float var_1c = var_30
    long double x87_r5_3 = fconvert.t(arg1[2])
    float var_18 = fconvert.s(x87_r6_4 / x87_r5_1)
    float var_14_2 = fconvert.s(x87_r5_3 / x87_r5_3)
    float* esi_1 = &var_1c
    float var_10_2 = fconvert.s(fconvert.t(arg1[3]) / x87_r5_1)
    float eax_4 = data_27e7fe0
    
    if (*(eax_4 i+ 0x38) == 0)
        sub_4d9830(eax_4, &data_be4aac, arg4, esi_1, arg3, nullptr)
        return 
    
    eax_4 = sub_4d9650(eax_4, eax_4 i+ 0x28, esi_1, &var_30, arg3)
    void var_40
    
    if (eax_4.b != 0)
        sub_4d9830(eax_4, &data_be4aac, arg4, &var_30, &var_40, nullptr)
}

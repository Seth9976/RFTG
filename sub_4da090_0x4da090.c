// 函数名称: sub_4da090
// 虚拟地址: 0x4da090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4da090(int32_t* arg1, float* arg2 @ esi, float* arg3, float* arg4, int32_t* arg5)
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
    long double x87_r6_4 = fconvert.t(arg2[1])
    long double x87_r5_1 = fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1))))
    float var_1c = fconvert.s(fconvert.t(*arg2)
        / fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))))
    long double x87_r5_3 = fconvert.t(arg2[2])
    float var_18 = fconvert.s(x87_r6_4 / x87_r5_1)
    float var_14_2 = fconvert.s(x87_r5_3 / x87_r5_3)
    float var_24 = fconvert.s(fconvert.t(arg2[3]) / x87_r5_1)
    float var_10_2 = var_24
    return sub_4daba0(var_24, arg5, arg4, arg3, &var_1c)
}

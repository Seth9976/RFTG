// 函数名称: sub_4da4e0
// 虚拟地址: 0x4da4e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4da4e0(float* arg1, float arg2)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t* eax_1 = *sub_466320(entry_ebx)
    long double x87_r7 = float.t(*eax_1)
    
    if (*eax_1 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    int32_t edx = eax_1[1]
    float var_1c = fconvert.s(x87_r7)
    long double x87_r7_1 = float.t(eax_1[1])
    
    if (edx s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    float var_18 = fconvert.s(x87_r7_1)
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_1[2])))
    var_1c = fconvert.s(x87_r7_3 * fconvert.t(var_1c))
    float var_18_1 = fconvert.s(x87_r7_3 * fconvert.t(var_18))
    long double x87_r6_2 = fconvert.t(arg2)
    float var_24 = fconvert.s(fconvert.t(var_1c) * x87_r6_2)
    float var_20 = fconvert.s(x87_r6_2 * fconvert.t(var_18_1))
    float eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_4cc680(5)
    int32_t var_18_2 = edx_1
    var_1c = eax_3
    void var_14
    float* eax_4 = sub_505540(eax_3, arg1, &var_24, &var_1c, &var_1c, &var_14)
    long double x87_r7_9 = fconvert.t(arg2)
    int32_t edx_4 = eax_4[3]
    float var_40 = fconvert.s(fconvert.t(eax_4[1]))
    float var_44 = fconvert.s(fconvert.t(*eax_4))
    var_24 = eax_4[2]
    int32_t var_20_1 = edx_4
    return sub_4d9ea0(entry_ebx, var_44, var_40, fconvert.s(x87_r7_9), fconvert.s(x87_r7_9))
}

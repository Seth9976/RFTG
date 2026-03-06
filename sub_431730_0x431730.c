// 函数名称: sub_431730
// 虚拟地址: 0x431730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_431730(float arg1)
{
    // 第一条实际指令: float var_28 = fconvert.s(fconvert.t(*(arg1 i+ 0x14)))
    float var_28 = fconvert.s(fconvert.t(*(arg1 i+ 0x14)))
    float var_24 = fconvert.s(fconvert.t(*(arg1 i+ 0x18)))
    int32_t* eax_3 = *sub_466320(data_307c03c)
    long double x87_r7_2 = float.t(*eax_3)
    
    if (*eax_3 s< 0)
        x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)
    
    float var_14 = fconvert.s(fconvert.t(data_307cc8c) / fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(eax_3[2]))) * fconvert.t(fconvert.s(x87_r7_2)))))
    void var_68
    int32_t eax_4
    int80_t result
    result, eax_4 = sub_40a930(&var_68)
    int32_t* eax_5 = data_307c03c
    int32_t* entry_ebx
    __builtin_memcpy(entry_ebx, eax_4, 0x40)
    int32_t* eax_7 = *sub_466320(eax_5)
    long double x87_r6 = float.t(*eax_7)
    
    if (*eax_7 s< 0)
        x87_r6 = x87_r6 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_1 = float.t(eax_7[1])
    
    if (eax_7[1] s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    float* eax_8 = arg1
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(eax_7[2])))
    long double x87_r5_2 = fconvert.t(0.5)
    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(*eax_8)))
    long double x87_r5_6 = fconvert.t(var_14)
    float var_14_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5_4 * fconvert.t(fconvert.s(x87_r5_2
        * fconvert.t(fconvert.s(x87_r6_3 * fconvert.t(fconvert.s(x87_r6_1)))))))) * x87_r5_6)
    *entry_ebx = fconvert.s(fconvert.t(var_28) - fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(
        fconvert.s(fconvert.t(fconvert.s(x87_r6_3 * fconvert.t(fconvert.s(x87_r6)))) * x87_r5_2))
        * x87_r5_4)) * x87_r5_6)))
    entry_ebx[1] = fconvert.s(fconvert.t(var_24) - fconvert.t(var_14_1))
    entry_ebx[3] = fconvert.s(x87_r5_6 * fconvert.t(*eax_8))
    return result
}

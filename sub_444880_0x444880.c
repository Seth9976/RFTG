// 函数名称: sub_444880
// 虚拟地址: 0x444880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_444880(int32_t* arg1 @ esi, float* arg2)
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
    float var_10_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))
    long double x87_r7_5 = float.t(0)
    float var_28 = fconvert.s(fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))))
    float var_1c = fconvert.s(x87_r7_5)
    float var_18 = fconvert.s(x87_r7_5)
    float var_10_2 = fconvert.s(fconvert.t(var_10_1))
    float var_14_2 = var_28
    int32_t result
    int80_t st0
    st0, result = sub_4d9fb0(&var_1c, var_28, arg2, arg1)
    return result
}

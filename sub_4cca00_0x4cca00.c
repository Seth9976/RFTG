// 函数名称: sub_4cca00
// 虚拟地址: 0x4cca00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4cca00(int32_t arg1, int32_t* arg2, float arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg3)
    long double x87_r7 = fconvert.t(arg3)
    long double x87_r5 = float.t(0)
    x87_r5 - x87_r7
    int32_t result
    result.w = (x87_r5 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r7 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        return result
    
    float var_28
    __builtin_memcpy(&var_28, 0x840974, 0x24)
    var_28 = fconvert.s(fconvert.t(var_28) * x87_r7)
    float var_24
    float var_24_1 = fconvert.s(x87_r7 * fconvert.t(var_24))
    int32_t var_34 = arg4
    float var_20
    float var_20_1 = fconvert.s(fconvert.t(var_20) * x87_r7)
    int32_t var_38 = arg1
    float var_1c
    float var_1c_1 = fconvert.s(fconvert.t(var_1c) * x87_r7)
    float var_18
    float var_18_1 = fconvert.s(fconvert.t(var_18) * x87_r7)
    float var_14
    float var_14_1 = fconvert.s(fconvert.t(var_14) * x87_r7)
    float var_10
    float var_10_1 = fconvert.s(fconvert.t(var_10) * x87_r7)
    float var_c
    float var_c_1 = fconvert.s(fconvert.t(var_c) * x87_r7)
    float var_8
    float var_8_1 = fconvert.s(x87_r7 * fconvert.t(var_8))
    int32_t* edx
    return sub_4cc7a0(arg5, arg2, &var_28, edx, arg1)
}

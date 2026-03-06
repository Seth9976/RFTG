// 函数名称: sub_4f65a0
// 虚拟地址: 0x4f65a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f65a0(float* arg1 @ edi, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    float var_8_1 = fconvert.s(fconvert.t(data_8c4d34))
    void* eax = sub_4f6260()
    long double x87_r7_1 = float.t(1)
    
    if (arg2 == 0)
        arg2.d = fconvert.s(fconvert.t(-1f))
    else
        arg2.d = fconvert.s(x87_r7_1)
    
    arg2.d = fconvert.s(
        fconvert.t(arg2.d) * fconvert.t(var_8_1) * fconvert.t(1000.0) / float.t(*(eax + 0x4c))
        + fconvert.t(*arg1))
    long double x87_r6_7 = fconvert.t(arg2.d)
    *arg1 = fconvert.s(x87_r6_7)
    arg2.d = fconvert.s(x87_r6_7)
    int32_t result
    int80_t st0
    st0, result =
        sub_465dd0(fconvert.s(fconvert.t(arg2.d)), fconvert.s(float.t(0)), fconvert.s(x87_r7_1))
    arg2.d = fconvert.s(st0)
    long double x87_r7_5 = fconvert.t(arg2.d)
    *arg1 = fconvert.s(x87_r7_5)
    long double x87_r6_8 = float.t(0)
    x87_r6_8 - x87_r7_5
    result.w = (x87_r6_8 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_8, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6_8 == x87_r7_5 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

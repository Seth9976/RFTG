// 函数名称: sub_4dc540
// 虚拟地址: 0x4dc540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4dc540(float arg1, float arg2, float arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* result = sub_4dc1a0()
    *(result + 0x48) = arg6
    *result = 1
    *(result + 0x4c) = arg5
    __builtin_memcpy(result + 8, 0x83faf8, 0x40)
    *(result + 0x144) = data_306856c
    *(result + 0x148) = arg4
    void var_4c
    __builtin_memcpy(&var_4c, 0x27e8090, 0x1c)
    float var_38
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(var_38) - fconvert.t(arg2)))
    float var_3c
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(var_3c) - fconvert.t(arg1)))
    float var_34
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(var_34) - fconvert.t(arg3)))
    *(result + 0x154) = fconvert.s(x87_r7_6 * x87_r7_6 + x87_r6 * x87_r6 + x87_r5 * x87_r5)
    *(result + 0x14c) = sub_4dc440(arg6)
    result[0x15].d = sub_4dc4c0(arg6)
    *(result + 0x15c) = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

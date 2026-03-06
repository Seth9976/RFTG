// 函数名称: sub_4eb510
// 虚拟地址: 0x4eb510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4eb510(int32_t arg1, int32_t* arg2, float* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_20 = fconvert.s(fconvert.t(*arg3))
    int32_t var_38 = 0
    float var_1c = fconvert.s(fconvert.t(arg3[1]))
    int32_t var_3c = 0
    float var_18 = fconvert.s(float.t(0))
    int32_t var_34 = 0
    float var_40 = fconvert.s(float.t(1))
    int32_t var_30 = 0x3f800000
    float var_2c = var_20
    float var_28 = var_1c
    float var_24 = var_18
    void var_60
    __builtin_memcpy(&var_60, &var_40, 0x20)
    int128_t* result = sub_4eb180(arg2, &var_60)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

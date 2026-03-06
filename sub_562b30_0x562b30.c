// 函数名称: sub_562b30
// 虚拟地址: 0x562b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_562b30(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_4 = *(arg1 + 0x10)
    float var_18 = fconvert.s(float.t(arg4 - arg2))
    float var_14 = fconvert.s(float.t(arg5 - arg3))
    float var_10 = fconvert.s(float.t(0))
    float var_c = fconvert.s(float.t(1))
    float var_20 = fconvert.s(float.t(arg2))
    float var_1c = fconvert.s(float.t(arg3))
    int32_t result = (*(*eax_4 + 0xb0))(eax_4, 1, &var_20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

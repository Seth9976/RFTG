// 函数名称: sub_4f6cb0
// 虚拟地址: 0x4f6cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f6cb0(int32_t* arg1, int32_t arg2, int32_t* arg3, float arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t var_9c = eax
    int32_t ecx
    int32_t var_a0 = ecx
    void var_48
    int32_t edx
    __builtin_memcpy(&var_48, sub_4f62d0(arg2, fconvert.s(fconvert.t(arg4)), edx), 0x40)
    int32_t eax_3 = sub_4f4890(arg1)
    int32_t result
    int80_t st0
    st0, result =
        sub_4f67d0(eax_3, arg5, arg3, arg2 * 0x118 + *eax_3, &data_be1ae0, &var_48, nullptr, nullptr)
    return result
}

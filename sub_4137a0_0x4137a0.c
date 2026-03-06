// 函数名称: sub_4137a0
// 虚拟地址: 0x4137a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4137a0(float* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_2c[0x9]
    float* ecx
    float* edx
    sub_413450(arg2, edx, ecx, arg1, &var_2c)
    float var_3c[0x4]
    float* eax_3 = sub_413580(&var_2c, &var_3c)
    int32_t edx_1 = eax_3[1]
    float* entry_result
    *entry_result = *eax_3
    int32_t ecx_2 = eax_3[2]
    entry_result[1] = edx_1
    int32_t edx_2 = eax_3[3]
    entry_result[2] = ecx_2
    entry_result[3] = edx_2
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}

// 函数名称: sub_5054f0
// 虚拟地址: 0x5054f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_5054f0(float* arg1, float* arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    float eax_1
    int32_t edx
    eax_1, edx = sub_4cc680(eax)
    float var_c = eax_1
    int32_t var_8 = edx
    void var_1c
    float* eax_3 = sub_505540(&var_1c, arg1, arg2, &var_c, &var_c, &var_1c)
    int32_t edx_2 = eax_3[1]
    float* entry_result
    *entry_result = *eax_3
    int32_t ecx_2 = eax_3[2]
    entry_result[1] = edx_2
    int32_t edx_3 = eax_3[3]
    entry_result[2] = ecx_2
    entry_result[3] = edx_3
    return entry_result
}

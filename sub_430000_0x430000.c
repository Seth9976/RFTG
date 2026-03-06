// 函数名称: sub_430000
// 虚拟地址: 0x430000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_430000(float* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    float eax_1
    int32_t edx
    eax_1, edx = sub_466370(eax)
    float var_14 = eax_1
    int32_t var_10 = edx
    float eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_4cc680(5)
    float var_c = eax_2
    int32_t var_8 = edx_1
    void var_34
    float* eax_4 = sub_505540(&var_34, arg1, &var_14, &var_c, &var_c, &var_34)
    float ecx_1 = *eax_4
    float edx_3 = eax_4[1]
    var_14 = eax_4[2]
    long double x87_r6 = fconvert.t(0.5)
    float edx_4 = eax_4[3]
    var_c = fconvert.s((fconvert.t(var_14) + fconvert.t(ecx_1)) * x87_r6)
    float* entry_result
    int32_t ecx_3 = __builtin_memcpy(entry_result, &data_be4c5c, 0x20)
    float var_8_1 = fconvert.s(x87_r6 * (fconvert.t(edx_4) + fconvert.t(edx_3)))
    
    if (arg2 == 1)
        int32_t var_40_1 = ecx_3
        int32_t* eax_5 = sub_406230(&var_34, &data_8409c0, fconvert.s(fconvert.t(3.14159274f)))
        int32_t edx_5 = eax_5[1]
        entry_result[1] = *eax_5
        int32_t ecx_5 = eax_5[2]
        entry_result[2] = edx_5
        int32_t edx_6 = eax_5[3]
        entry_result[3] = ecx_5
        entry_result[4] = edx_6
    
    entry_result[5] = fconvert.s(fconvert.t(var_c))
    entry_result[6] = fconvert.s(fconvert.t(var_8_1))
    var_14 = fconvert.s(float.t(0))
    long double x87_r7_10 = fconvert.t(eax_1) / fconvert.t(data_307cc8c)
    entry_result[7] = var_14
    *entry_result = fconvert.s(x87_r7_10)
    return entry_result
}

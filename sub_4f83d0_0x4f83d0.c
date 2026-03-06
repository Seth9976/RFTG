// 函数名称: sub_4f83d0
// 虚拟地址: 0x4f83d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4f83d0(void* arg1, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: long double x87_r7 = float.t(1)
    long double x87_r7 = float.t(1)
    float var_8c
    __builtin_memcpy(&var_8c, arg1, 0x40)
    float var_84 = fconvert.s(x87_r7)
    float var_80 = fconvert.s(x87_r7)
    var_8c = arg3
    float var_cc
    __builtin_memcpy(&var_cc, arg1, 0x40)
    float var_c4 = fconvert.s(x87_r7)
    float var_c0 = fconvert.s(x87_r7)
    float var_8 = fconvert.s(fneg(fconvert.t(arg4)))
    var_cc = fconvert.s(fneg(fconvert.t(arg3)))
    float var_88 = arg4
    float var_4c
    __builtin_memcpy(&var_4c, arg1, 0x40)
    float var_44 = fconvert.s(x87_r7)
    float var_40 = fconvert.s(fconvert.t(arg2))
    var_4c = 0f
    float var_c8 = var_8
    int32_t var_48 = 0
    float* entry_result
    __builtin_memcpy(entry_result, arg1, 0x40)
    float var_10c[0x10]
    sub_4f6020(&var_10c, entry_result, &var_cc)
    __builtin_memcpy(entry_result, &var_10c, 0x40)
    sub_4f6020(&var_10c, entry_result, &var_4c)
    __builtin_memcpy(entry_result, &var_10c, 0x40)
    sub_4f6020(&var_10c, entry_result, &var_8c)
    int32_t edx_5 = *(arg1 + 0x1c)
    long double x87_r7_2 = fconvert.t(*(arg1 + 0x10))
    __builtin_memcpy(entry_result, &var_10c, 0x40)
    entry_result[4] = fconvert.s(x87_r7_2)
    entry_result[5] = fconvert.s(fconvert.t(*(arg1 + 0x14)))
    entry_result[6] = *(arg1 + 0x18)
    entry_result[7] = edx_5
    return entry_result
}

// 函数名称: sub_4e0890
// 虚拟地址: 0x4e0890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4e0890(void* arg1, int32_t arg2)
{
    // 第一条实际指令: float var_44
    float var_44
    __builtin_memcpy(&var_44, 0x840974, 0x24)
    float* entry_ebx
    float* result = &entry_ebx[1]
    int32_t edx
    sub_4e3590(result, edx, &var_44)
    int32_t edx_1 = 0
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*entry_ebx)))
    var_44 = fconvert.s(fconvert.t(var_44) * x87_r6)
    float var_40
    float var_40_1 = fconvert.s(fconvert.t(var_40) * x87_r6)
    float var_3c
    float var_3c_1 = fconvert.s(fconvert.t(var_3c) * x87_r6)
    float var_38
    float var_38_1 = fconvert.s(fconvert.t(var_38) * x87_r6)
    float var_24
    long double x87_r7_5 = fconvert.t(fconvert.s(x87_r6 * fconvert.t(var_24)))
    float var_28
    long double x87_r6_16 = fconvert.t(fconvert.s(fconvert.t(var_28) * x87_r6))
    float var_2c
    long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(var_2c) * x87_r6))
    float var_30
    long double x87_r4 = fconvert.t(fconvert.s(fconvert.t(var_30) * x87_r6))
    float var_34
    long double x87_r3 = fconvert.t(fconvert.s(fconvert.t(var_34) * x87_r6))
    
    if (arg2 s>= 4)
        result = arg1 + 0x14
        int32_t i_2 = ((arg2 - 4) u>> 2) + 1
        edx_1 = i_2 << 2
        int32_t i
        
        do
            float var_c_1 = fconvert.s(fconvert.t(result[-5]) * x87_r5_1
                + fconvert.t(result[-4]) * x87_r6_16 + fconvert.t(result[-3]) * x87_r7_5)
            float var_1c_1 = fconvert.s(fconvert.t(entry_ebx[6]) + fconvert.t(fconvert.s(
                fconvert.t(result[-5]) * fconvert.t(var_38_1) + fconvert.t(result[-4]) * x87_r3
                + fconvert.t(result[-3]) * x87_r4)))
            long double x87_r2_17 = fconvert.t(entry_ebx[7])
            result[-5] = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(fconvert.s(
                fconvert.t(result[-4]) * fconvert.t(var_40_1)
                + fconvert.t(result[-5]) * fconvert.t(var_44)
                + fconvert.t(result[-3]) * fconvert.t(var_3c_1))))
            result[-4] = var_1c_1
            result[-3] = fconvert.s(x87_r2_17 + fconvert.t(var_c_1))
            float var_c_2 = fconvert.s(fconvert.t(result[-1]) * x87_r6_16
                + fconvert.t(result[-2]) * x87_r5_1 + fconvert.t(*result) * x87_r7_5)
            float var_1c_2 = fconvert.s(fconvert.t(entry_ebx[6]) + fconvert.t(fconvert.s(
                fconvert.t(result[-2]) * fconvert.t(var_38_1) + fconvert.t(result[-1]) * x87_r3
                + fconvert.t(*result) * x87_r4)))
            long double x87_r2_35 = fconvert.t(entry_ebx[7])
            result[-2] = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(fconvert.s(
                fconvert.t(result[-1]) * fconvert.t(var_40_1)
                + fconvert.t(result[-2]) * fconvert.t(var_44)
                + fconvert.t(*result) * fconvert.t(var_3c_1))))
            float var_18_2 = fconvert.s(x87_r2_35 + fconvert.t(var_c_2))
            result[-1] = var_1c_2
            *result = var_18_2
            float var_c_3 = fconvert.s(fconvert.t(result[1]) * x87_r5_1
                + fconvert.t(result[2]) * x87_r6_16 + fconvert.t(result[3]) * x87_r7_5)
            float var_1c_3 = fconvert.s(fconvert.t(entry_ebx[6]) + fconvert.t(fconvert.s(
                fconvert.t(result[1]) * fconvert.t(var_38_1) + fconvert.t(result[2]) * x87_r3
                + fconvert.t(result[3]) * x87_r4)))
            long double x87_r2_53 = fconvert.t(entry_ebx[7])
            result[1] = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(fconvert.s(
                fconvert.t(result[2]) * fconvert.t(var_40_1)
                + fconvert.t(result[1]) * fconvert.t(var_44)
                + fconvert.t(result[3]) * fconvert.t(var_3c_1))))
            result[2] = var_1c_3
            result[3] = fconvert.s(x87_r2_53 + fconvert.t(var_c_3))
            float var_1c_4 = fconvert.s(fconvert.t(entry_ebx[6]) + fconvert.t(fconvert.s(
                fconvert.t(result[4]) * fconvert.t(var_38_1) + fconvert.t(result[5]) * x87_r3
                + fconvert.t(result[6]) * x87_r4)))
            float var_18_4 = fconvert.s(fconvert.t(entry_ebx[7]) + fconvert.t(fconvert.s(
                fconvert.t(result[5]) * x87_r6_16 + fconvert.t(result[4]) * x87_r5_1
                + fconvert.t(result[6]) * x87_r7_5)))
            result[4] = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(fconvert.s(
                fconvert.t(result[5]) * fconvert.t(var_40_1)
                + fconvert.t(result[4]) * fconvert.t(var_44)
                + fconvert.t(result[6]) * fconvert.t(var_3c_1))))
            result[5] = var_1c_4
            result[6] = var_18_4
            result = &result[0xc]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (edx_1 s< arg2)
        result = arg1 + edx_1 * 0xc + 8
        int32_t i_3 = arg2 - edx_1
        int32_t i_1
        
        do
            long double x87_r2_73 = fconvert.t(result[-1])
            result = &result[3]
            i_1 = i_3
            i_3 -= 1
            float var_c_5 = fconvert.s(fconvert.t(result[-4]) * x87_r6_16
                + fconvert.t(result[-5]) * x87_r5_1 + fconvert.t(result[-3]) * x87_r7_5)
            float var_1c_5 = fconvert.s(fconvert.t(entry_ebx[6]) + fconvert.t(fconvert.s(
                fconvert.t(result[-4]) * x87_r3 + fconvert.t(result[-5]) * fconvert.t(var_38_1)
                + fconvert.t(result[-3]) * x87_r4)))
            long double x87_r2_89 = fconvert.t(entry_ebx[7])
            result[-5] = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(fconvert.s(
                x87_r2_73 * fconvert.t(var_40_1) + fconvert.t(result[-5]) * fconvert.t(var_44)
                + fconvert.t(result[-3]) * fconvert.t(var_3c_1))))
            result[-4] = var_1c_5
            result[-3] = fconvert.s(x87_r2_89 + fconvert.t(var_c_5))
        while (i_1 != 1)
    
    return result
}

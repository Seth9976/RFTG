// 函数名称: sub_54caa0
// 虚拟地址: 0x54caa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __fastcallsub_54caa0(int32_t arg1, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float result
    
    for (void* const i = &data_83fa88; i s< 0x83fae8; )
        long double x87_r7_1 = fconvert.t(0.5)
        float var_1c_1 = fconvert.s(fconvert.t(*(i - 4)) - x87_r7_1)
        float var_18_1 = fconvert.s(fconvert.t(*i) - x87_r7_1)
        long double x87_r7_5 = fconvert.t(arg2[8])
        float var_14 =
            fconvert.s(fconvert.t(arg2[7]) * fconvert.t(fconvert.s(fconvert.t(*(i - 8)) - x87_r7_1)))
        float var_10_1 = fconvert.s(x87_r7_5 * fconvert.t(var_1c_1))
        float var_c_1 = fconvert.s(fconvert.t(arg2[9]) * fconvert.t(var_18_1))
        float var_38
        sub_405970(&var_38, &var_14, &arg2[3])
        long double x87_r7_9 = fconvert.t(*arg2)
        var_14 = var_38
        var_14 = fconvert.s(x87_r7_9 + fconvert.t(var_14))
        i += 0xc
        float var_34
        float var_10_3 = fconvert.s(fconvert.t(arg2[1]) + fconvert.t(var_34))
        float var_30
        long double x87_r7_14 = fconvert.t(var_30) + fconvert.t(arg2[2])
        *(arg1 - &data_83fa88 + i - 0xc) = var_14
        *(arg1 - &data_83fa88 + i - 8) = var_10_3
        result = fconvert.s(x87_r7_14)
        *(arg1 - &data_83fa88 + i - 4) = result
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

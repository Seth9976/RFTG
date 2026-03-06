// 函数名称: sub_4d46b0
// 虚拟地址: 0x4d46b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4d46b0(int32_t arg1, void* arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float ecx_2
    
    if (arg3 != data_30d7350)
        float var_2c_1
        float var_28_1
        float var_24_1
        
        if (arg3 != data_30d7354)
            if (arg3 != data_30d7358)
                char** eax_3 = sub_4d43f0(arg4, arg2, arg3, arg4)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_3
            
            long double x87_r7_8 = fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x44))))
            long double x87_r6_10 = fconvert.t(fconvert.s(fconvert.t(0.0) * x87_r7_8))
            var_2c_1 = fconvert.s(x87_r6_10)
            var_24_1 = fconvert.s(x87_r6_10)
            var_28_1 = fconvert.s(x87_r7_8)
        else
            long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x44))))
            long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(0.0) * x87_r7_2))
            long double x87_r6_4 = fconvert.t(0.5)
            var_2c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6_3)) * x87_r6_4)
            var_28_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_2)) * x87_r6_4)
            var_24_1 = fconvert.s(x87_r6_4 * fconvert.t(fconvert.s(x87_r6_3)))
        
        float var_18_2 = fconvert.s(fconvert.t(*(arg2 + 0xc)) + fconvert.t(var_28_1))
        long double x87_r7_13 = fconvert.t(*(arg2 + 0x10))
        arg4[5] = fconvert.s(fconvert.t(*(arg2 + 8)) + fconvert.t(var_2c_1))
        arg4[6] = var_18_2
        ecx_2 = fconvert.s(x87_r7_13 + fconvert.t(var_24_1))
    else
        arg4[5] = *(arg2 + 8)
        arg4[6] = *(arg2 + 0xc)
        ecx_2 = *(arg2 + 0x10)
    
    arg4[7] = ecx_2
    arg4[1] = *(arg2 + 0x14)
    arg4[2] = *(arg2 + 0x18)
    arg4[3] = *(arg2 + 0x1c)
    int32_t ecx_6 = *(arg2 + 0x20)
    *arg4 = fconvert.s(float.t(1))
    arg4[4] = ecx_6
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}

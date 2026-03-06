// 函数名称: sub_4e2ee0
// 虚拟地址: 0x4e2ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e2ee0(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_94 = arg5
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(arg2) - fconvert.t(arg5)))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg1) - fconvert.t(arg4)))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg3) - fconvert.t(arg6)))
    float var_48_1 = fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6
        + x87_r6 * x87_r6 + x87_r5 * x87_r5)))))
    long double x87_r7_12 = fconvert.t(9.99999975e-06f)
    long double temp1 = fconvert.t(var_48_1)
    x87_r7_12 - temp1
    int16_t result = (x87_r7_12 < temp1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_12, temp1) ? 1 : 0) << 0xa | (x87_r7_12 == temp1 ? 1 : 0) << 0xe
    
    if ((result:1.b & 0x41) != 0)
        long double x87_r7_14 = fconvert.t(arg4) - fconvert.t(arg1)
        double var_60_1 = fconvert.d(x87_r7_14)
        float var_40 = fconvert.s(x87_r7_14)
        long double x87_r7_16 = fconvert.t(arg5) - fconvert.t(arg2)
        float var_70
        var_70.q = fconvert.d(x87_r7_16)
        float var_3c_1 = fconvert.s(x87_r7_16)
        long double x87_r7_18 = fconvert.t(arg6) - fconvert.t(arg3)
        float var_30
        var_30.q = fconvert.d(x87_r7_18)
        float var_38_1 = fconvert.s(x87_r7_18)
        float var_80[0x4]
        float* eax_5
        int32_t ecx_3
        eax_5, ecx_3 = sub_4132a0(&var_40, &var_80)
        long double x87_r6_4 = fconvert.t(0.5)
        float edi_2 = data_27e800c
        float ebx_1 = data_27e8010
        int32_t var_94_2 = ecx_3
        long double x87_r6_6 =
            fconvert.t(fconvert.s(fconvert.t(var_60_1) * x87_r6_4 + fconvert.t(arg1)))
        var_40 = fconvert.s(x87_r6_6)
        long double x87_r5_6 =
            fconvert.t(fconvert.s(fconvert.t(var_70.q) * x87_r6_4 + fconvert.t(arg2)))
        float var_3c_2 = fconvert.s(x87_r5_6)
        long double x87_r5_8 =
            fconvert.t(fconvert.s(x87_r6_4 * fconvert.t(var_30.q) + fconvert.t(arg3)))
        float var_44_3
        var_44_3.b = 0
        float var_38_2 = fconvert.s(x87_r5_8)
        var_44_3:1.w = 0
        var_44_3:3.b = 0
        long double x87_r7_32 =
            fconvert.t(fconvert.s(fconvert.t(data_27e8010) - fconvert.t(fconvert.s(x87_r5_6))))
        long double x87_r6_7 =
            fconvert.t(fconvert.s(fconvert.t(data_27e800c) - fconvert.t(fconvert.s(x87_r6_6))))
        long double x87_r5_9 =
            fconvert.t(fconvert.s(fconvert.t(data_27e8014) - fconvert.t(fconvert.s(x87_r5_8))))
        var_60_1:4.d = fconvert.s(x87_r7_32 * x87_r7_32 + x87_r6_7 * x87_r6_7 + x87_r5_9 * x87_r5_9)
        float var_94_4 = var_44_3
        float var_28_1 = fconvert.s(sub_413560(fconvert.s(fconvert.t(var_60_1:4.d))) / fconvert.t(10.0)
            * fconvert.t(0.029999999329447746))
        long double x87_r6_11 = fconvert.t(100.0)
        int32_t var_98_1 = arg7
        var_60_1.d = fconvert.s(fconvert.t(var_48_1) * x87_r6_11)
        float ecx_4 = var_60_1.d
        var_60_1:4.d = fconvert.s(x87_r6_11 * fconvert.t(var_28_1))
        result = sub_4e2ba0(var_40, var_3c_2, var_38_2, edi_2, ebx_1, data_27e8014, 0f, 0f, 1f, *eax_5, 
            eax_5[1], eax_5[2], ecx_4, var_60_1:4.d, 0f, 0f, 1f, 1f)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_4e21d0
// 虚拟地址: 0x4e21d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e21d0(int32_t arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float* arg14)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_1c = arg5
    float var_5c = fconvert.s(fconvert.t(arg2) - fconvert.t(var_1c))
    float var_58 = fconvert.s(fconvert.t(arg3) - fconvert.t(arg6))
    float var_4c = var_5c
    float var_48 = var_58
    float var_54 = fconvert.s(fconvert.t(arg4) - fconvert.t(arg7))
    float var_44 = var_54
    float var_3c = arg8
    float var_2c = arg11
    
    if (arg1 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "Draw3d.cpp", 0xb0a, "BillboardAxes")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    float var_18_5
    float eax_6
    float ecx_4
    float edx_4
    float* entry_ebx
    long double x87_r7_48
    
    switch (arg1)
        case 0
            long double x87_r7_6 = fconvert.t(arg10)
            long double x87_r5_1 = fconvert.t(var_58)
            long double x87_r4_2 = fconvert.t(arg9)
            long double x87_r2_1 = fconvert.t(var_54)
            var_1c = fconvert.s(x87_r7_6 * x87_r5_1 - x87_r4_2 * x87_r2_1)
            *arg14 = var_1c
            long double x87_r2_3 = fconvert.t(var_3c)
            long double x87_r1_3 = fconvert.t(var_5c)
            arg14[1] = fconvert.s(x87_r2_1 * x87_r2_3 - x87_r7_6 * x87_r1_3)
            arg14[2] = fconvert.s(x87_r4_2 * x87_r1_3 - x87_r2_3 * x87_r5_1)
            var_1c = fconvert.s(fconvert.t(arg14[1]) * x87_r2_1 - x87_r5_1 * fconvert.t(arg14[2]))
            float var_18_2 = fconvert.s(x87_r1_3 * fconvert.t(arg14[2]) - x87_r2_1 * fconvert.t(*arg14))
            float var_14_2 = fconvert.s(x87_r5_1 * fconvert.t(*arg14) - x87_r1_3 * fconvert.t(arg14[1]))
            var_2c = fconvert.s(fneg(fconvert.t(var_1c)))
            eax_6 = var_2c
            ecx_4 = fconvert.s(fneg(fconvert.t(var_18_2)))
            edx_4 = fconvert.s(fneg(fconvert.t(var_14_2)))
        label_4e253a:
            *entry_ebx = eax_6
            entry_ebx[1] = ecx_4
            entry_ebx[2] = edx_4
        case 1
            if (sub_4e3550(&var_2c) == 0)
                sub_4c5870("fwd == V0", &data_83f3d3, "Draw3d.cpp", 0xaf4, "BillboardAxes")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            var_1c = fconvert.s(fneg(fconvert.t(var_3c)))
            *entry_ebx = var_1c
            float var_18_3 = fconvert.s(fneg(fconvert.t(arg9)))
            entry_ebx[1] = var_18_3
            float var_14_3 = fconvert.s(fneg(fconvert.t(arg10)))
            entry_ebx[2] = var_14_3
            sub_413320(&var_1c, &var_4c, &var_3c)
            *arg14 = var_1c
            arg14[1] = var_18_3
            arg14[2] = var_14_3
        case 2
            *arg14 = arg11
            arg14[1] = arg12
            arg14[2] = arg13
            long double x87_r6_8 = fconvert.t(var_54)
            long double x87_r5_5 = fconvert.t(var_58)
            var_1c = fconvert.s(fconvert.t(arg14[1]) * x87_r6_8 - x87_r5_5 * fconvert.t(arg14[2]))
            long double x87_r5_7 = fconvert.t(var_5c)
            float var_18_4 = fconvert.s(x87_r5_7 * fconvert.t(arg14[2]) - x87_r6_8 * fconvert.t(*arg14))
            float var_14_4 = fconvert.s(x87_r5_5 * fconvert.t(*arg14) - x87_r5_7 * fconvert.t(arg14[1]))
            var_2c = fconvert.s(fneg(fconvert.t(var_1c)))
            *entry_ebx = var_2c
            entry_ebx[1] = fconvert.s(fneg(fconvert.t(var_18_4)))
            entry_ebx[2] = fconvert.s(fneg(fconvert.t(var_14_4)))
            long double x87_r7_43 = fconvert.t(fconvert.s(fconvert.t(entry_ebx[1]) * fconvert.t(arg9)
                + fconvert.t(*entry_ebx) * fconvert.t(var_3c)
                + fconvert.t(arg10) * fconvert.t(entry_ebx[2])))
            long double temp1_1 = fconvert.t(0f)
            x87_r7_43 - temp1_1
            float eax_12
            eax_12.w = (x87_r7_43 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_43, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_43 == temp1_1 ? 1 : 0) << 0xe
            
            if ((eax_12:1.b & 0x41) == 0)
                var_1c = fconvert.s(fneg(fconvert.t(*entry_ebx)))
                var_18_5 = fconvert.s(fneg(fconvert.t(entry_ebx[1])))
                x87_r7_48 = fconvert.t(entry_ebx[2])
                goto label_4e252c
        case 3
            long double x87_r7_49 = fconvert.t(var_3c)
            *arg14 = arg11
            arg14[1] = arg12
            var_1c = fconvert.s(fneg(x87_r7_49))
            arg14[2] = arg13
            long double x87_r6_17 = fconvert.t(fconvert.s(fneg(fconvert.t(arg10))))
            long double x87_r5_11 = fconvert.t(fconvert.s(fneg(fconvert.t(arg9))))
            var_2c = fconvert.s(fconvert.t(arg14[1]) * x87_r6_17 - x87_r5_11 * fconvert.t(arg14[2]))
            long double x87_r5_13 = fconvert.t(var_1c)
            float var_28_3 =
                fconvert.s(x87_r5_13 * fconvert.t(arg14[2]) - x87_r6_17 * fconvert.t(*arg14))
            float var_24_3 =
                fconvert.s(x87_r5_11 * fconvert.t(*arg14) - x87_r5_13 * fconvert.t(arg14[1]))
            var_1c = fconvert.s(fneg(fconvert.t(var_2c)))
            var_18_5 = fconvert.s(fneg(fconvert.t(var_28_3)))
            x87_r7_48 = fconvert.t(var_24_3)
        label_4e252c:
            eax_6 = var_1c
            ecx_4 = var_18_5
            edx_4 = fconvert.s(fneg(x87_r7_48))
            goto label_4e253a
        case 4
            long double x87_r7_65 = fconvert.t(arg13)
            long double x87_r5_16 = fconvert.t(arg9)
            long double x87_r4_20 = fconvert.t(arg12)
            long double x87_r2_7 = fconvert.t(arg10)
            var_1c = fconvert.s(x87_r7_65 * x87_r5_16 - x87_r4_20 * x87_r2_7)
            long double x87_r2_9 = fconvert.t(var_2c)
            long double x87_r1_7 = fconvert.t(var_3c)
            float var_18_7 = fconvert.s(x87_r2_7 * x87_r2_9 - x87_r7_65 * x87_r1_7)
            float var_14_6 = fconvert.s(x87_r4_20 * x87_r1_7 - x87_r2_9 * x87_r5_16)
            var_2c = fconvert.s(fneg(fconvert.t(var_1c)))
            *arg14 = var_2c
            arg14[1] = fconvert.s(fneg(fconvert.t(var_18_7)))
            arg14[2] = fconvert.s(fneg(fconvert.t(var_14_6)))
            var_1c = fconvert.s(fneg(x87_r1_7))
            x87_r7_48 = x87_r2_7
            var_18_5 = fconvert.s(fneg(x87_r5_16))
            goto label_4e252c
    
    float* eax_14 = sub_4132a0(arg14, &var_4c)
    int32_t edx_10 = eax_14[1]
    int32_t eax_15 = eax_14[2]
    *arg14 = *eax_14
    arg14[1] = edx_10
    arg14[2] = eax_15
    float* eax_16 = sub_4132a0(entry_ebx, &var_4c)
    int32_t edx_11 = eax_16[1]
    int32_t result = eax_16[2]
    *entry_ebx = *eax_16
    entry_ebx[1] = edx_11
    entry_ebx[2] = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_4d9830
// 虚拟地址: 0x4d9830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d9830(int32_t arg1, int32_t* arg2, int32_t* arg3, float* arg4 @ esi, float* arg5 @ edi, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_27e7fe4
    float var_4c
    float var_2c
    
    if (*(eax_2 + 0xdf) == 0)
        void* eax_6 = data_27e7fe0
        long double x87_r7_21 = fconvert.t(fconvert.s(fconvert.t(*(eax_6 + 0x20)) + fconvert.t(*arg5)))
        var_4c = fconvert.s(x87_r7_21)
        long double x87_r6_21 =
            fconvert.t(fconvert.s(fconvert.t(arg5[1]) + fconvert.t(*(eax_6 + 0x24))))
        float var_48_2 = fconvert.s(x87_r6_21)
        long double x87_r5_24 =
            fconvert.t(fconvert.s(fconvert.t(arg5[2]) + fconvert.t(*(eax_6 + 0x20))))
        float var_44_2 = fconvert.s(x87_r5_24)
        float var_40_2 = fconvert.s(x87_r6_21)
        float var_3c_2 = fconvert.s(x87_r7_21)
        long double x87_r6_26 =
            fconvert.t(fconvert.s(fconvert.t(arg5[3]) + fconvert.t(*(eax_6 + 0x24))))
        float var_38_2 = fconvert.s(x87_r6_26)
        float var_30_2 = fconvert.s(x87_r6_26)
        float var_34_2 = fconvert.s(x87_r5_24)
        var_2c = fconvert.s(fconvert.t(*arg4))
        float var_28_2 = fconvert.s(fconvert.t(arg4[1]))
        float var_24_2 = fconvert.s(fconvert.t(arg4[2]))
        float var_20_2 = fconvert.s(fconvert.t(arg4[1]))
        float var_1c_2 = fconvert.s(fconvert.t(*arg4))
        float var_18_2 = fconvert.s(fconvert.t(arg4[3]))
        float var_14_2 = fconvert.s(fconvert.t(arg4[2]))
        float var_10_2 = fconvert.s(fconvert.t(arg4[3]))
        sub_4d8cf0(&var_2c, &var_4c, arg3, &var_2c, arg2, arg6)
    else
        long double x87_r7_5 = float.t(0)
        long double x87_r6 = fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(arg5[2]) - fconvert.t(*arg5))) * fconvert.t(6.5)
            / fconvert.t(*(eax_2 + 0xe4))))
        x87_r6 - x87_r7_5
        eax_2.w = (x87_r6 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r7_6
        
        if (p_1)
            x87_r7_6 = x87_r7_5 + fconvert.t(0.5)
        else
            x87_r7_6 = x87_r7_5 - fconvert.t(0.5)
        
        int32_t eax_3 = sub_685f40(x87_r7_6)
        int32_t var_60_1 = eax_3
        
        if (eax_3 s<= 1)
            var_60_1 = 1
        
        int32_t ebx_1 = 0
        int32_t var_54_3 = 0
        
        if (var_60_1 s> 0)
            do
                void* eax_4 = data_27e7fe0
                long double x87_r6_3 = fconvert.t(fconvert.s(float.t(var_54_3)))
                long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(*arg5)))
                long double x87_r3_2 =
                    fconvert.t(fconvert.s(x87_r6_3 / fconvert.t(fconvert.s(float.t(var_60_1)))))
                long double x87_r5_8 = x87_r6_3 + fconvert.t(1.0)
                long double x87_r5_9 = fconvert.t(fconvert.s(fconvert.t(*arg5)))
                long double x87_r4_5 = fconvert.t(fconvert.s(x87_r5_8 / x87_r5_8))
                float var_5c_3 = fconvert.s(x87_r5_9 + (fconvert.t(arg5[2]) - x87_r5_9) * x87_r4_5)
                long double x87_r5_13 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r4_1 + (fconvert.t(arg5[2]) - x87_r4_1) * x87_r3_2))
                    + fconvert.t(*(eax_4 + 0x20))))
                var_2c = fconvert.s(x87_r5_13)
                long double x87_r4_9 =
                    fconvert.t(fconvert.s(fconvert.t(arg5[1]) + fconvert.t(*(eax_4 + 0x24))))
                float var_28_1 = fconvert.s(x87_r4_9)
                long double x87_r3_7 =
                    fconvert.t(fconvert.s(fconvert.t(var_5c_3) + fconvert.t(*(eax_4 + 0x20))))
                float var_24_1 = fconvert.s(x87_r3_7)
                float var_20_1 = fconvert.s(x87_r4_9)
                float var_1c_1 = fconvert.s(x87_r5_13)
                long double x87_r4_14 =
                    fconvert.t(fconvert.s(fconvert.t(*(eax_4 + 0x24)) + fconvert.t(arg5[3])))
                float var_18_1 = fconvert.s(x87_r4_14)
                float var_10_1 = fconvert.s(x87_r4_14)
                float var_14_1 = fconvert.s(x87_r3_7)
                long double x87_r4_15 = fconvert.t(fconvert.s(fconvert.t(*arg4)))
                long double x87_r5_19 = fconvert.t(fconvert.s(fconvert.t(*arg4)))
                float var_50_8 = fconvert.s(x87_r4_5 * (fconvert.t(arg4[2]) - x87_r5_19) + x87_r5_19)
                long double x87_r7_16 =
                    fconvert.t(fconvert.s(x87_r3_2 * (fconvert.t(arg4[2]) - x87_r4_15) + x87_r4_15))
                var_4c = fconvert.s(x87_r7_16)
                float var_48_1 = fconvert.s(fconvert.t(arg4[1]))
                long double x87_r6_16 = fconvert.t(var_50_8)
                float var_44_1 = fconvert.s(x87_r6_16)
                float var_40_1 = fconvert.s(fconvert.t(arg4[1]))
                float var_3c_1 = fconvert.s(x87_r7_16)
                float var_38_1 = fconvert.s(fconvert.t(arg4[3]))
                float var_34_1 = fconvert.s(x87_r6_16)
                float var_30_1 = fconvert.s(fconvert.t(arg4[3]))
                sub_4d8cf0(arg6, &var_2c, arg3, &var_4c, arg2, arg6)
                ebx_1 += 1
                var_54_3 = ebx_1
            while (ebx_1 s< var_60_1)
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}

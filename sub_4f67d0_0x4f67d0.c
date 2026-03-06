// 函数名称: sub_4f67d0
// 虚拟地址: 0x4f67d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4f67d0(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4, int32_t* arg5, float arg6, int32_t* arg7, void* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_50
    
    if (arg7 != 0)
        var_50 = arg7
    else if (arg5[0xf] s<= *arg5)
        var_50 = nullptr
    else
        var_50 = arg5[0x10]
    
    int32_t* var_4c
    
    if (arg3 != 0)
        var_4c = arg3
    else if (arg5[0x25] s<= *arg5)
        var_4c = *(arg4 + 0x68)
    else
        var_4c = arg5[0x26]
    
    if (var_50 != 0)
        var_4c = nullptr
    label_4f684c:
        int32_t eax_7
        int32_t ecx_1
        
        if (arg2 == 0)
            if (arg5[0x22] s<= *arg5)
                eax_7 = *(arg4 + 0x84)
                goto label_4f6873
            
            eax_7 = arg5[0x23]
            ecx_1 = arg5[0x24]
        else
            eax_7 = *arg2
        label_4f6873:
            int16_t var_13_1 = 0
            char var_11_1 = 0
            ecx_1 = 0.d
        
        int32_t var_70 = eax_7
        char var_14
        var_14.d = eax_7 u>> 0x18
        int32_t var_6c_1 = ecx_1
        var_14.d = fconvert.s(float.t(var_14.d) * fconvert.t(*(arg6 i+ 8)))
        long double x87_r7_3 = float.t(0)
        long double x87_r6_1 = fconvert.t(var_14.d)
        x87_r6_1 - x87_r7_3
        float eax_9
        eax_9.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r7_4
        
        if (p_1)
            x87_r7_4 = x87_r7_3 + fconvert.t(0.5)
        else
            x87_r7_4 = x87_r7_3 - fconvert.t(0.5)
        
        char eax_10 = sub_685f40(x87_r7_4)
        var_70:3.b = eax_10
        
        if (eax_10 != 0)
            int32_t edx_1 = *(arg4 + 0x10)
            int32_t eax_11 = *(arg4 + 0x14)
            float var_38 = *(arg4 + 0xc)
            int32_t var_34_1 = edx_1
            int32_t var_30_1 = eax_11
            int32_t var_2c_1 = *(arg4 + 0x18)
            float var_48
            int32_t* eax_13 = sub_4f4990(&var_48, arg6, arg4 + 0x1c, &var_48, arg6)
            float edx_3 = eax_13[1]
            var_38 = *eax_13
            float ecx_6 = eax_13[2]
            float edx_4 = eax_13[3]
            void* eax_14 = data_27e7fd0
            float var_60
            float var_44
            char eax_16
            
            if (*(eax_14 + 0x27) == 0 && *(eax_14 + 0x35) == 0)
                float var_68
                sub_4f6790(&var_68)
                var_48 = var_68
                float var_64
                var_44 = var_64
                float var_40_1 = var_60
                int32_t var_5c
                int32_t var_3c_1 = var_5c
                eax_16 = sub_4fc7d0(&var_48, &var_38)
            
            if (*(eax_14 + 0x27) != 0 || *(eax_14 + 0x35) != 0 || eax_16 != 0)
                int32_t ebx_1 = *arg5
                float var_18
                
                if (arg5[0x14] s<= ebx_1)
                    var_18 = 1f
                    var_14.d = 0x3f800000
                else
                    int32_t ecx_10 = arg5[0x16]
                    var_18 = arg5[0x15]
                    var_14.d = ecx_10
                
                long double x87_r7_5 = fconvert.t(ecx_6)
                long double x87_r5_1 = fconvert.t(var_38)
                var_60 = fconvert.s(x87_r7_5 - x87_r5_1)
                long double x87_r5_3 = fconvert.t(edx_4)
                long double x87_r3_1 = fconvert.t(edx_3)
                float var_5c_1 = fconvert.s(x87_r5_3 - x87_r3_1)
                var_60 = fconvert.s(fconvert.t(var_18) * fconvert.t(var_60))
                float var_5c_2 = fconvert.s(fconvert.t(var_14.d) * fconvert.t(var_5c_1))
                long double x87_r4_6 = fconvert.t(0.5)
                float var_40_3 = fconvert.s((x87_r5_1 + x87_r7_5) * x87_r4_6)
                var_18 = var_40_3
                float var_3c_3 = fconvert.s((x87_r3_1 + x87_r5_3) * x87_r4_6)
                var_14.d = var_3c_3
                sub_405e30(&var_48, &var_60, &var_18)
                bool cond:1_1 = *(arg4 + 0x6c) == 0
                var_38 = var_48
                
                if (not(cond:1_1))
                    float eax_21
                    float edx_12
                    eax_21, edx_12 = sub_40af40(&var_38)
                    long double x87_r7_10 = fconvert.t(var_40_3) - fconvert.t(var_38)
                    var_60 = eax_21
                    float var_40_4 = fconvert.s(x87_r7_10)
                    float var_94
                    __builtin_memcpy(&var_94, 0x840974, 0x24)
                    float var_3c_4 = fconvert.s(fconvert.t(var_3c_3) - fconvert.t(var_44))
                    var_14.d = fconvert.s(fconvert.t(*(arg6 i+ 0xc)))
                    long double x87_r6_8 = fconvert.t(fconvert.s(fconvert.t(*(arg6 i+ 0xc))))
                    var_94 = fconvert.s(fconvert.t(var_94) * x87_r6_8)
                    float var_88
                    float var_88_1 = fconvert.s(fconvert.t(var_88) * x87_r6_8)
                    float var_7c
                    float var_7c_1 = fconvert.s(x87_r6_8 * fconvert.t(var_7c))
                    long double x87_r6_12 = fconvert.t(var_14.d)
                    float var_90
                    float var_90_1 = fconvert.s(fconvert.t(var_90) * x87_r6_12)
                    float var_84
                    float var_84_1 = fconvert.s(fconvert.t(var_84) * x87_r6_12)
                    float var_78
                    float var_78_1 = fconvert.s(x87_r6_12 * fconvert.t(var_78))
                    sub_4e41f0(arg6, &var_70, &var_94, var_4c, 
                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_60)
                            / fconvert.t(*(arg6 i+ 0xc))))), 
                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(edx_12)
                        / fconvert.t(*(arg6 i+ 0xc))))), 
                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_40_4)
                            / fconvert.t(*(arg6 i+ 0xc))))), 
                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_3c_4)
                        / fconvert.t(*(arg6 i+ 0xc))))))
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 
                
                void* eax_23 = arg8
                
                if (eax_23 == 0)
                    eax_23 = arg4 + 0x74
                
                float ecx_20 = *(eax_23 + 4)
                float var_20 = *eax_23
                int32_t eax_24 = *(eax_23 + 0xc)
                var_18 = *(eax_23 + 8)
                var_14.d = eax_24
                sub_4fc810(&var_48, &var_20, &var_38)
                var_38 = var_48
                float var_58_1
                float var_54_1
                
                if (arg5[0x11] s<= ebx_1)
                    var_58_1 = 1f
                    var_54_1 = 1f
                else
                    var_58_1 = arg5[0x12]
                    var_54_1 = arg5[0x13]
                
                bool cond:2_1 = *(arg4 + 0x70) != 0
                long double x87_r6_16 = fconvert.t(0.5)
                long double x87_r5_6 = fconvert.t(var_58_1)
                var_48 = fconvert.s((fconvert.t(var_20) - x87_r6_16) * x87_r5_6 + x87_r6_16)
                long double x87_r5_9 = fconvert.t(var_18)
                var_20 = var_48
                var_18 = fconvert.s(x87_r5_6 * (x87_r5_9 - x87_r6_16) + x87_r6_16)
                long double x87_r5_11 = fconvert.t(var_54_1)
                float var_1c_2 = fconvert.s((fconvert.t(ecx_20) - x87_r6_16) * x87_r5_11 + x87_r6_16)
                var_14.d = fconvert.s(x87_r6_16 + x87_r5_11 * (fconvert.t(var_14.d) - x87_r6_16))
                
                if (not(cond:2_1))
                    sub_4d9aa0(&var_20, var_50, &var_38, var_4c, &var_70, var_50)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 
                
                float eax_30
                float edx_21
                eax_30, edx_21 = sub_418560(var_4c)
                float var_3c_6 = fconvert.s(fconvert.t(var_3c_3) - fconvert.t(var_44))
                var_60 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_40_3) - fconvert.t(var_38)))
                    / fconvert.t(eax_30))
                long double x87_r6_23 = fconvert.t(fconvert.s(sub_466280(var_60, 
                    fconvert.s(fconvert.t(var_3c_6) / fconvert.t(edx_21)))))
                float* var_ac_3 = &var_60
                *(arg4 + 0x70)
                var_60 = fconvert.s(fconvert.t(eax_30) * x87_r6_23)
                float var_5c_5 = fconvert.s(x87_r6_23 * fconvert.t(edx_21))
                float* eax_33 = sub_5054f0(&var_38, var_ac_3)
                int32_t ecx_32 = eax_33[1]
                var_38 = *eax_33
                int32_t eax_34 = eax_33[3]
                int32_t var_34_5 = ecx_32
                int32_t var_30_5 = eax_33[2]
                int32_t* var_b8 = &var_70
                int32_t var_2c_5 = eax_34
                sub_4d9aa0(&var_20, &var_70, &var_38, var_4c, var_b8, var_50)
    else if (var_4c != 0)
        goto label_4f684c
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}

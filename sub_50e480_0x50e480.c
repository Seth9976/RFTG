// 函数名称: sub_50e480
// 虚拟地址: 0x50e480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_50e480(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t* arg6, float* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* esi_3
    float var_a4
    float var_64
    float var_4c
    float var_2c
    float var_1c
    
    if (arg5 == 0)
        long double x87_r7_71 = fconvert.t(arg7[8])
        long double x87_r6_41 = float.t(0)
        float var_b0 = arg7[3]
        int32_t var_ac_1 = arg7[4]
        x87_r6_41 - x87_r7_71
        int32_t var_a8_1 = arg7[5]
        var_a4 = arg7[6]
        float eax_23
        eax_23.w = (x87_r6_41 < x87_r7_71 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_41, x87_r7_71) ? 1 : 0) << 0xa
            | (x87_r6_41 == x87_r7_71 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x44}
        float var_b4
        float var_60
        float var_5c
        int32_t var_50_3
        int32_t ebx_1
        
        if (p_1)
            int32_t eax_26 = *arg3
            var_50_3 = arg3[2]
            var_1c = fconvert.s(float.t(eax_26))
            float var_18_6 = fconvert.s(float.t(arg3[1]))
            float var_14_6 = fconvert.s(float.t(var_50_3))
            var_2c = fconvert.s(fconvert.t(*(arg2 + 0x1c)) * fconvert.t(var_1c))
            float var_28_5 = fconvert.s(fconvert.t(*(arg2 + 0x20)) * fconvert.t(var_18_6))
            float var_24_5 = fconvert.s(fconvert.t(*(arg2 + 0x24)) * fconvert.t(var_14_6))
            var_1c = fconvert.s(fconvert.t(arg7[7]) / fconvert.t(var_2c))
            var_b4 = fconvert.s(sub_50cd60(var_1c, 
                fconvert.s(fconvert.t(arg7[8]) / fconvert.t(var_28_5)), 
                fconvert.s(fconvert.t(arg7[9]) / fconvert.t(var_24_5))))
            x87_r7_71 = fconvert.t(var_b4)
            ebx_1 = eax_26
        else
            ebx_1 = *arg3
            int32_t eax_24 = arg3[2]
            var_50_3 = eax_24
            var_60 = fconvert.s(fconvert.t(arg7[7]))
            var_5c = fconvert.s(fconvert.t(arg7[9]))
            long double x87_r6_56 = fconvert.t(fconvert.s(fconvert.t(var_60) / fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x1c))))
                * fconvert.t(fconvert.s(float.t(ebx_1)))))))
            long double x87_r5_17 = fconvert.t(fconvert.s(fconvert.t(var_5c) / fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x24))))
                * fconvert.t(fconvert.s(float.t(eax_24)))))))
            x87_r5_17 - x87_r6_56
            eax_24.w = (x87_r5_17 < x87_r6_56 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_17, x87_r6_56) ? 1 : 0) << 0xa
                | (x87_r5_17 == x87_r6_56 ? 1 : 0) << 0xe | 0x2800
            
            if ((eax_24:1.b & 0x41) != 0)
                x87_r7_71 = x87_r5_17
            else
                x87_r6_56 = x87_r5_17
            
            var_b4 = fconvert.s(x87_r6_56)
            long double x87_r6_57 = fconvert.t(var_b4)
            x87_r6_57 - x87_r7_71
            eax_24.w = (x87_r6_57 < x87_r7_71 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_57, x87_r7_71) ? 1 : 0) << 0xa
                | (x87_r6_57 == x87_r7_71 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_24:1.b & 0x41) != 0)
                sub_4c5870("retval.s > 0", &data_83f3d3, "FabDef.cpp", 0x400, "DistBox")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        int32_t ecx_11 = arg3[1]
        var_1c = ebx_1 - 1
        var_2c = fconvert.s(float.t(var_1c))
        float var_28_6 = fconvert.s(float.t(ecx_11 - 1))
        float var_24_6 = fconvert.s(float.t(var_50_3 - 1))
        long double x87_r5_18 = fconvert.t(0.5)
        var_4c = fconvert.s(fconvert.t(var_2c) * x87_r5_18)
        float var_48_2 = fconvert.s(fconvert.t(var_28_6) * x87_r5_18)
        float var_44_2 = fconvert.s(x87_r5_18 * fconvert.t(var_24_6))
        var_1c = fconvert.s(float.t(*arg6))
        float var_18_9 = fconvert.s(float.t(arg6[1]))
        float var_14_9 = fconvert.s(float.t(arg6[2]))
        var_2c = fconvert.s(fconvert.t(var_1c) - fconvert.t(var_4c))
        float var_28_7 = fconvert.s(fconvert.t(var_18_9) - fconvert.t(var_48_2))
        float var_24_7 = fconvert.s(fconvert.t(var_14_9) - fconvert.t(var_44_2))
        var_1c = fconvert.s(fconvert.t(*(arg2 + 0x1c)) * fconvert.t(var_2c))
        float var_18_10 = fconvert.s(fconvert.t(*(arg2 + 0x20)) * fconvert.t(var_28_7))
        float var_14_10 = fconvert.s(fconvert.t(*(arg2 + 0x24)) * fconvert.t(var_24_7))
        var_2c = fconvert.s(fconvert.t(var_1c) * x87_r7_71)
        var_1c = var_2c
        float var_18_11 = fconvert.s(fconvert.t(var_18_10) * x87_r7_71)
        float var_14_11 = fconvert.s(x87_r7_71 * fconvert.t(var_14_10))
        sub_405970(&var_64, &var_1c, &var_b0)
        var_1c = var_64
        var_2c = fconvert.s(fconvert.t(var_1c) + fconvert.t(*arg7))
        long double x87_r7_95 = float.t(0)
        long double temp3_1 = fconvert.t(var_b4)
        x87_r7_95 - temp3_1
        float var_98_1 = fconvert.s(fconvert.t(arg7[2]) + fconvert.t(var_5c))
        float var_a0_1 = var_2c
        float var_9c_1 = fconvert.s(fconvert.t(arg7[1]) + fconvert.t(var_60))
        float eax_33
        eax_33.w = (x87_r7_95 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_95, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_95 == temp3_1 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            sub_4c5870("retval.s > 0", &data_83f3d3, "FabDef.cpp", 0x40b, "DistBox")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi_3 = &var_b4
    else
        if (arg5 != 1)
            sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x487, "DistBox")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        long double x87_r6 = fconvert.t(0.5)
        float var_78_1 = fconvert.s(fconvert.t(arg7[7]) * x87_r6)
        float var_5c_1 = fconvert.s(fconvert.t(arg7[8]) * x87_r6)
        long double x87_r6_4 = fconvert.t(arg7[7])
        long double x87_r5 = fconvert.t(arg7[8])
        x87_r5 - x87_r6_4
        long double x87_r6_5
        
        if ((((x87_r5 < x87_r6_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r5 == x87_r6_4 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
            x87_r6_5 = fconvert.t(arg7[8])
        else
            x87_r6_5 = fconvert.t(arg7[7])
        
        int32_t eax_6 = arg3[2]
        int32_t* var_118_1 = arg3
        float var_7c_1 = fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6_5)) * fconvert.t(0.25)))
            / float.t(arg3[1]))
        float var_6c_1 = fconvert.s((float.t(arg6[2]) - x87_r6 * float.t(eax_6 - 1))
            * fconvert.t(fconvert.s(fconvert.t(arg7[9]) / float.t(eax_6))))
        float var_d4 = fconvert.s(float.t(1))
        float var_50_1 = fconvert.s(float.t(*arg6) * fconvert.t(6.2831854820251465) / float.t(*arg3))
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_406680(fconvert.s(fconvert.t(var_50_1)))
        float var_80_1 = fconvert.s(st0_1)
        float var_54_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_78_1) - fconvert.t(var_7c_1)))
            * fconvert.t(var_80_1))
        int32_t edx
        int32_t mxcsr
        long double st0_2
        st0_2, edx = sub_686860(mxcsr, x87control_1, fconvert.t(var_50_1))
        long double x87_r7_18 = fconvert.t(var_5c_1)
        long double x87_r5_2 = fconvert.t(fconvert.s(st0_2))
        long double x87_r4_2 = fconvert.t(var_54_2)
        long double x87_r3_2 = fconvert.t(0.5)
        float var_54_3 = fconvert.s(x87_r4_2
            + (fconvert.t(fconvert.s(fconvert.t(var_80_1) * fconvert.t(var_78_1))) - x87_r4_2)
            * x87_r3_2)
        long double x87_r5_11 =
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_18 - fconvert.t(var_7c_1))) * x87_r5_2))
        float var_5c_5 = fconvert.s(
            x87_r3_2 * (fconvert.t(fconvert.s(x87_r7_18 * x87_r5_2)) - x87_r5_11) + x87_r5_11)
        float var_e4
        sub_405900(&var_e4, edx, &arg7[3])
        float ecx_1 = var_e4
        float var_f4
        float var_e0
        sub_466130(&var_f4, var_e0, &arg7[3])
        var_2c = var_f4
        float var_104
        float var_f0
        sub_465a20(&var_104, var_f0, &arg7[3])
        long double x87_r6_23 = fconvert.t(var_5c_5)
        var_4c = var_104
        float var_78_2 = fconvert.s(fconvert.t(ecx_1) * x87_r6_23)
        var_1c = fconvert.s(fconvert.t(var_78_2))
        float var_80_2 = fconvert.s(fconvert.t(var_e0) * x87_r6_23)
        float var_18_1 = fconvert.s(fconvert.t(var_80_2))
        float var_dc
        float var_7c_2 = fconvert.s(x87_r6_23 * fconvert.t(var_dc))
        float var_14_1 = fconvert.s(fconvert.t(var_7c_2))
        long double x87_r6_29 = fconvert.t(var_54_3)
        float var_50_2 = fconvert.s(fconvert.t(var_2c) * x87_r6_29)
        var_64 = fconvert.s(fconvert.t(var_50_2))
        float var_54_4 = fconvert.s(fconvert.t(var_f0) * x87_r6_29)
        float var_60_1 = fconvert.s(fconvert.t(var_54_4))
        float var_ec
        float var_30_7 = fconvert.s(x87_r6_29 * fconvert.t(var_ec))
        float var_5c_6 = fconvert.s(fconvert.t(var_30_7))
        var_2c = fconvert.s(fconvert.t(var_64) + fconvert.t(var_1c))
        var_1c = var_2c
        float var_18_2 = fconvert.s(fconvert.t(var_60_1) + fconvert.t(var_18_1))
        float var_14_2 = fconvert.s(fconvert.t(var_5c_6) + fconvert.t(var_14_1))
        float* eax_15 = sub_4131a0(&var_1c, &var_2c)
        int32_t edx_5 = eax_15[1]
        int32_t eax_16 = eax_15[2]
        var_1c = *eax_15
        int32_t var_18_3 = edx_5
        int32_t var_14_3 = eax_16
        float* eax_17 = sub_413800(&var_a4, &var_4c)
        float var_d0_1 = *eax_17
        int32_t var_cc_1 = eax_17[1]
        int32_t var_c8_1 = eax_17[2]
        float var_94_1 = fconvert.s(fconvert.t(*arg7))
        int32_t var_c4_1 = eax_17[3]
        float var_90_1 = fconvert.s(fconvert.t(arg7[1]))
        esi_3 = &var_d4
        float var_8c_1 = fconvert.s(fconvert.t(arg7[2]) - fconvert.t(arg7[9]) * fconvert.t(0.5))
        long double x87_r6_37 = fconvert.t(var_6c_1)
        float var_74_1 = fconvert.s(fconvert.t(var_4c) * x87_r6_37)
        float var_100
        float var_70_1 = fconvert.s(fconvert.t(var_100) * x87_r6_37)
        float var_fc
        float var_6c_2 = fconvert.s(x87_r6_37 * fconvert.t(var_fc))
        var_2c = fconvert.s(fconvert.t(var_78_2))
        float var_28_3 = fconvert.s(fconvert.t(var_80_2))
        float var_24_3 = fconvert.s(fconvert.t(var_7c_2))
        var_1c = fconvert.s(fconvert.t(var_50_2))
        float var_18_4 = fconvert.s(fconvert.t(var_54_4))
        float var_14_4 = fconvert.s(fconvert.t(var_30_7))
        var_4c = fconvert.s(fconvert.t(var_1c) + fconvert.t(var_2c))
        float var_48_1 = fconvert.s(fconvert.t(var_18_4) + fconvert.t(var_28_3))
        float var_44_1 = fconvert.s(fconvert.t(var_14_4) + fconvert.t(var_24_3))
        var_1c = fconvert.s(fconvert.t(var_4c) + fconvert.t(var_74_1))
        float var_18_5 = fconvert.s(fconvert.t(var_48_1) + fconvert.t(var_70_1))
        float var_14_5 = fconvert.s(fconvert.t(var_44_1) + fconvert.t(var_6c_2))
        var_2c = fconvert.s(fconvert.t(var_1c) + fconvert.t(var_94_1))
        float var_c0_1 = var_2c
        float var_bc_1 = fconvert.s(fconvert.t(var_18_5) + fconvert.t(var_90_1))
        float var_b8_1 = fconvert.s(fconvert.t(var_14_5) + fconvert.t(var_8c_1))
    __builtin_memcpy(arg4, esi_3, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}

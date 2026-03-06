// 函数名称: sub_529510
// 虚拟地址: 0x529510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_529510()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* i = __security_cookie ^ &__saved_ebp
    void* i_3 = i
    
    if (data_315b338 != 0)
        if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
            i.b = data_315b358
            
            if (i.b == 0 && data_315b359 == i.b)
                int32_t eax_1
                int80_t st0_1
                st0_1, eax_1 = sub_528460()
                data_315b338 = 0
                sub_5a6aba(i_3 ^ &__saved_ebp)
                return eax_1
            
            if (data_315b33c != 1 && i.b == 1)
                i = sub_528280(1)
            
            data_315b338 = 0
            sub_5a6aba(i_3 ^ &__saved_ebp)
            return i
        
        if (data_315b358 != 0)
            goto label_529603
        
        float i_6
        int80_t st0_2
        st0_2, i = sub_4c6230(&i_6)
        float i_2 = fconvert.s(fconvert.t(data_315b340) - fconvert.t(i_6))
        long double x87_r7_6 = fconvert.t(i_2)
        float var_10
        long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(data_315b344) - fconvert.t(var_10)))
        long double x87_r7_9 = fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6 + x87_r6_1 * x87_r6_1))
        long double temp1_1 = fconvert.t(50.0)
        x87_r7_9 - temp1_1
        i.w = (x87_r7_9 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            data_315b358 = 1
        label_529603:
            i.b = data_30da525:1.b
            
            if (data_30da524 == 0 && data_30da525.b == 0)
                if (i.b == 0 || data_315b354 == 0xffffffff)
                    goto label_529627
                
                goto label_5298c7
            
            float edx_8
            float i_4
            float i_15
            
            if (data_315b354 != 0xffffffff)
            label_5298c7:
                float edx_9 = data_315b360
                float var_1c = data_315b35c
                float var_18_1 = edx_9
                float edx_10 = data_315b368
                i_6 = data_315b364
                float var_10_3 = edx_10
                
                if (i.b != 0 && sub_528030() != 0)
                    float ecx_15 = data_315b370
                    float i_26 = data_315b374
                    var_1c = data_315b36c
                    float eax_16 = data_315b378
                    var_18_1 = ecx_15
                    i_6 = i_26
                    var_10_3 = eax_16
                
                int32_t eax_17 = data_315b354
                
                if (eax_17 u> 7)
                    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0xfe3, "UI2DraggingUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                float i_5
                float var_60_1
                float i_9
                float ecx_19
                float edx_13
                float ebx_1
                float i_12
                
                switch (eax_17)
                    case 0
                        float i_19
                        float edx_11
                        i_19, edx_11 = sub_4fc8c0(&var_1c)
                        long double x87_r7_44 = fconvert.t(-1f)
                        i_2 = fconvert.s(x87_r7_44)
                        float var_50_8 = fconvert.s(x87_r7_44)
                        ebx_1 = edx_11
                        i_12 = i_19
                        i_5 = i_2
                        var_60_1 = var_50_8
                    case 1
                        float i_20
                        i_20, edx_13 = sub_4fc8c0(&var_1c)
                        i_2 = fconvert.s(fconvert.t(-1f))
                        i_12 = i_20
                        i_9 = i_2
                        ecx_19 = fconvert.s(fconvert.t(-0f))
                    label_529a53:
                        ebx_1 = edx_13
                        i_5 = i_9
                        var_60_1 = ecx_19
                    case 2
                        i_2 = fconvert.s(fconvert.t(i_6))
                        i_12 = i_2
                        ebx_1 = fconvert.s(fconvert.t(var_18_1))
                        i_2 = fconvert.s(fconvert.t(-1f))
                        i_5 = i_2
                        var_60_1 = fconvert.s(float.t(1))
                    case 3
                        float i_21
                        float edx_15
                        i_21, edx_15 = sub_4fc8c0(&var_1c)
                        i_2 = fconvert.s(fconvert.t(-0f))
                        ebx_1 = edx_15
                        float var_50_12 = fconvert.s(fconvert.t(-1f))
                        i_12 = i_21
                        i_5 = i_2
                        var_60_1 = var_50_12
                    case 4
                        float i_22
                        i_22, edx_13 = sub_40af40(&var_1c)
                        ecx_19 = 1f
                        i_12 = i_22
                        i_9 = 0f
                        goto label_529a53
                    case 5
                        i_2 = fconvert.s(fconvert.t(var_1c))
                        i_12 = i_2
                        ebx_1 = fconvert.s(fconvert.t(var_10_3))
                        i_2 = fconvert.s(float.t(1))
                        float var_50_14 = fconvert.s(fconvert.t(-1f))
                        i_5 = i_2
                        var_60_1 = var_50_14
                    case 6
                        float i_23
                        float edx_18
                        i_23, edx_18 = sub_40af40(&var_1c)
                        ebx_1 = edx_18
                        i_12 = i_23
                        i_5 = 1f
                        var_60_1 = 0f
                    case 7
                        float i_24
                        i_24, edx_13 = sub_40af40(&var_1c)
                        ecx_19 = 1f
                        i_12 = i_24
                        i_9 = 1f
                        goto label_529a53
                
                float var_58_2 = ebx_1
                i_15 = i_12
                
                if (sub_527ff0() != 0)
                    float i_25
                    float edx_19
                    i_25, edx_19 = sub_405eb0(&var_1c)
                    long double x87_r6_8 = fconvert.t(2.0)
                    i_12 = i_25
                    long double x87_r7_58 = fconvert.t(i_5) * x87_r6_8
                    ebx_1 = edx_19
                    i_15 = i_12
                    var_58_2 = ebx_1
                    i_5 = fconvert.s(x87_r7_58)
                    var_60_1 = fconvert.s(x87_r6_8 * fconvert.t(var_60_1))
                
                sub_4c6230(&i_4)
                char eax_22 = sub_527fb0()
                int32_t eax_23
                
                if (eax_22 != 0)
                    eax_23 = data_315b354
                
                float var_68
                float var_50_17
                float var_2c
                
                if (eax_22 != 0 && (eax_23 == 0 || eax_23 == 2 || eax_23 == 5 || eax_23 == 7))
                    float i_10
                    float edx_20
                    i_10, edx_20 = sub_527f70(i_12, ebx_1)
                    long double x87_r7_61 = fconvert.t(i_4)
                    i_2 = i_10
                    long double x87_r6_10 = fconvert.t(i_2)
                    i_5 = fconvert.s(x87_r7_61 - x87_r6_10)
                    i_6 = i_5
                    long double x87_r5_6 = fconvert.t(edx_20)
                    float var_10_4 = fconvert.s(fconvert.t(var_68) - x87_r5_6)
                    i_2 = fconvert.s(fconvert.t(data_315b340) - x87_r6_10)
                    i_5 = i_2
                    float var_60_3 = fconvert.s(fconvert.t(data_315b344) - x87_r5_6)
                    long double x87_r7_71 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                        fconvert.t(fconvert.s(sub_4c9870(&i_6))) / sub_4c9870(&i_5)))))
                    i_5 = fconvert.s(x87_r7_71)
                    float var_60_4 = fconvert.s(x87_r7_71)
                    i_2 = i_5
                    var_50_17 = var_60_4
                else
                    i_2 = fconvert.s(fconvert.t(i_4) - fconvert.t(data_315b340))
                    float var_50_18 = fconvert.s(fconvert.t(var_68) - fconvert.t(data_315b344))
                    int32_t* eax_28 = sub_529410(&var_2c, &var_1c)
                    float ecx_27 = eax_28[1]
                    var_1c = *eax_28
                    float eax_29 = eax_28[3]
                    i_6 = eax_28[2]
                    float var_70_6 = fconvert.s(fconvert.t(eax_29) - fconvert.t(ecx_27))
                    i_6 = fconvert.s(fconvert.t(i_2)
                        / fconvert.t(fconvert.s(fconvert.t(i_6) - fconvert.t(var_1c))))
                    float var_10_6 = fconvert.s(fconvert.t(var_50_18) / fconvert.t(var_70_6))
                    i_2 = fconvert.s(fconvert.t(i_6) * fconvert.t(i_5))
                    float var_50_19 = fconvert.s(fconvert.t(var_60_1) * fconvert.t(var_10_6))
                    long double x87_r6_16 = float.t(1)
                    i_6 = fconvert.s(fconvert.t(i_2) + x87_r6_16)
                    i_2 = i_6
                    var_50_17 = fconvert.s(x87_r6_16 + fconvert.t(var_50_19))
                
                i = data_315b33c
                
                if (i == 0)
                    void* i_1 = i
                    
                    if (data_30da51c s> i)
                        void* ebx_2 = &data_315b380
                        
                        do
                            int32_t* eax_32 = sub_528f30((&data_30d951c)[i_1])
                            long double x87_r6_18 = fconvert.t(i_15)
                            long double x87_r5_10 = fconvert.t(i_2)
                            var_1c = fconvert.s((fconvert.t(*(ebx_2 - 4)) - x87_r6_18) * x87_r5_10
                                + x87_r6_18)
                            long double x87_r5_12 = fconvert.t(*(ebx_2 + 4))
                            float var_3c = var_1c
                            i_6 = fconvert.s(x87_r5_10 * (x87_r5_12 - x87_r6_18) + x87_r6_18)
                            float i_16 = i_6
                            long double x87_r6_19 = fconvert.t(var_58_2)
                            long double x87_r5_15 = fconvert.t(var_50_17)
                            float var_38_1 =
                                fconvert.s((fconvert.t(*ebx_2) - x87_r6_19) * x87_r5_15 + x87_r6_19)
                            float var_30_1 = fconvert.s(
                                x87_r5_15 * (fconvert.t(*(ebx_2 + 8)) - x87_r6_19) + x87_r6_19)
                            float var_a4[0x4]
                            float* eax_34 = sub_530960(&var_3c, &var_a4)
                            int32_t ecx_32 = eax_34[1]
                            float var_4c = *eax_34
                            int32_t var_48_1 = ecx_32
                            int32_t var_44_1 = eax_34[2]
                            int32_t var_40_1 = eax_34[3]
                            void var_94
                            int32_t* eax_36 = sub_413110(&var_4c, &var_94)
                            int32_t edx_30 = eax_36[1]
                            float var_84 = *eax_36
                            int32_t var_80_1 = edx_30
                            int32_t var_7c_1 = eax_36[2]
                            int32_t var_78_1 = eax_36[3]
                            float var_b4
                            sub_5308c0(&var_b4, &var_84, &eax_32[0x53f])
                            var_2c = var_b4
                            int32_t var_b0
                            int32_t var_28_1 = var_b0
                            int32_t var_ac
                            int32_t var_24_1 = var_ac
                            int32_t* var_a8
                            int32_t* var_20_1 = var_a8
                            float* var_c8_11 = &var_2c
                            sub_5291f0(eax_32, var_a8)
                            i = i_1 + 1
                            ebx_2 += 0x10
                            i_1 = i
                        while (i s< data_30da51c)
                else if (i == 2)
                    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x1025, "UI2DraggingUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edx_8 = var_68
                data_315b348 = i_4
            else
            label_529627:
                sub_4c6230(&i_15)
                char eax_2
                int32_t ecx_6
                eax_2, ecx_6 = sub_527fb0()
                float var_58
                
                if (eax_2 != 0)
                    long double x87_r7_10 = fconvert.t(data_315b340)
                    i_2 = fconvert.s(x87_r7_10 - fconvert.t(data_315b348))
                    long double x87_r6_5 = fconvert.t(data_315b344)
                    float var_50_2 = fconvert.s(x87_r6_5 - fconvert.t(data_315b34c))
                    i_4 = fconvert.s(fconvert.t(i_15) - x87_r7_10)
                    i_15 = i_4
                    float var_68_1 = fconvert.s(fconvert.t(var_58) - x87_r6_5)
                    float var_58_1 = var_68_1
                    int32_t eax_4 = data_315b350
                    
                    if (eax_4 == 0)
                        int32_t var_c8_1 = ecx_6
                        float var_70_2 = fconvert.s(sub_4064d0(fconvert.s(fconvert.t(i_4))))
                        long double st0_5 = sub_4064d0(fconvert.s(fconvert.t(var_68_1)))
                        long double x87_r6_7 = fconvert.t(var_70_2)
                        x87_r6_7 - st0_5
                        eax_4.w = (x87_r6_7 < st0_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_7, st0_5) ? 1 : 0) << 0xa
                            | (x87_r6_7 == st0_5 ? 1 : 0) << 0xe
                        long double x87_r7_18 = float.t(0)
                        bool p_2 = unimplemented  {test ah, 0x5}
                        
                        if (p_2)
                            var_58_1 = fconvert.s(x87_r7_18)
                            data_315b350 = 1
                        else
                            data_315b350 = 2
                            i_15 = fconvert.s(x87_r7_18)
                    else if (eax_4 == 1)
                        var_58_1 = fconvert.s(float.t(0))
                    else if (eax_4 == 2)
                        i_15 = fconvert.s(float.t(0))
                    
                    int32_t eax_5 = data_315b33c
                    i_4 = fconvert.s(fconvert.t(i_2) + fconvert.t(i_15))
                    float i_11 = i_4
                    i_2 = i_11
                    float var_50_3 = fconvert.s(fconvert.t(var_50_2) + fconvert.t(var_58_1))
                    
                    if (eax_5 != 0)
                        if (eax_5 == 2)
                            sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0xf98, "UI2DraggingUpdate")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        float i_14 = i_11
                        float i_7
                        float edx_4
                        i_7, edx_4 = sub_466250(&i_2, fconvert.s(fconvert.t(data_30d950c)))
                        long double x87_r7_26 = fconvert.t(data_30d9510)
                        i_2 = i_7
                        data_30d9510 = fconvert.s(x87_r7_26 - fconvert.t(i_2))
                        data_30d9514 = fconvert.s(fconvert.t(data_30d9514) - fconvert.t(edx_4))
                    else
                        float i_13 = i_11
                        float i_17
                        int32_t edx_3
                        i_17, edx_3 = sub_466250(&i_2, fconvert.s(fconvert.t(data_30d950c)))
                        i_6 = i_17
                        int32_t var_10_1 = edx_3
                        sub_5292a0()
                    
                    i_2 = fconvert.s(fconvert.t(data_315b340) + fconvert.t(i_15))
                    float i_8 = i_2
                    long double x87_r7_32 = fconvert.t(data_315b344)
                    data_315b348 = i_8
                    data_315b34c = fconvert.s(x87_r7_32 + fconvert.t(var_58_1))
                    sub_5a6aba(i_3 ^ &__saved_ebp)
                    return i_8
                
                long double x87_r7_34 = fconvert.t(i_15)
                data_315b350 = 0
                i_2 = fconvert.s(x87_r7_34 - fconvert.t(data_315b348))
                i_4 = i_2
                float var_68_3 = fconvert.s(fconvert.t(var_58) - fconvert.t(data_315b34c))
                int32_t eax_10 = data_315b33c
                
                if (eax_10 != 0)
                    if (eax_10 == 2)
                        sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0xfab, "UI2DraggingUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t var_c8_8 = ecx_6
                    float edx_7
                    i, edx_7 = sub_466250(&i_4, fconvert.s(fconvert.t(data_30d950c)))
                    long double x87_r7_40 = fconvert.t(data_30d9510)
                    i_2 = i
                    data_30d9510 = fconvert.s(x87_r7_40 - fconvert.t(i_2))
                    data_30d9514 = fconvert.s(fconvert.t(data_30d9514) - fconvert.t(edx_7))
                else
                    int32_t var_c8_6 = ecx_6
                    float i_18
                    int32_t edx_6
                    i_18, edx_6 = sub_466250(&i_4, fconvert.s(fconvert.t(data_30d950c)))
                    i_6 = i_18
                    int32_t var_10_2 = edx_6
                    i = sub_5292a0()
                
                edx_8 = var_58
                data_315b348 = i_15
            data_315b34c = edx_8
    
    sub_5a6aba(i_3 ^ &__saved_ebp)
    return i
}

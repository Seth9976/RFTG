// 函数名称: sub_5776e0
// 虚拟地址: 0x5776e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_5776e0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8 = eax_1
    
    if (data_27bc448 != 0)
        if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
            if (data_27bc468 == 0 && data_27bc469 == 0)
                sub_5775c0()
            
            eax_1 = sub_5758a0(1)
            data_27bc448 = 0
        else
            if (data_27bc468 != 0)
                goto label_5777b2
            
            float var_10
            int80_t st0_2
            st0_2, eax_1 = sub_4c6230(&var_10)
            float var_44 = fconvert.s(fconvert.t(data_27bc450) - fconvert.t(var_10))
            float var_c
            float var_40 = fconvert.s(fconvert.t(data_27bc454) - fconvert.t(var_c))
            long double x87_r7_6 = fconvert.t(var_44)
            long double x87_r6_1 = fconvert.t(var_40)
            long double x87_r7_9 = fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6 + x87_r6_1 * x87_r6_1))
            long double temp1_1 = fconvert.t(50.0)
            x87_r7_9 - temp1_1
            eax_1.w = (x87_r7_9 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                data_27bc468 = 1
            label_5777b2:
                void* var_68 = sub_4f4890(data_273ac20)
                void* eax_3
                eax_3.b = data_273bc31:1.b
                float var_5c
                float var_54
                
                if ((data_273bc30 == 0 && data_273bc31.b == 0 && eax_3.b == 0)
                        || data_27bc464 == 0xffffffff)
                    sub_4c6230(&var_5c)
                    float var_58
                    
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        long double x87_r7_34 = fconvert.t(var_5c)
                        data_27bc460 = 0
                        var_44 = fconvert.s(x87_r7_34 - fconvert.t(data_27bc458))
                        var_54 = var_44
                        int32_t eax_13 = data_27bc44c
                        float var_40_5 = fconvert.s(fconvert.t(var_58) - fconvert.t(data_27bc45c))
                        float var_50_1 = var_40_5
                        
                        if (eax_13 == 0)
                            float var_c0_8 = var_40_5
                            float eax_15
                            int32_t edx_5
                            eax_15, edx_5 = sub_466250(&var_54, fconvert.s(fconvert.t(data_27bc43c)))
                            var_10 = eax_15
                            int32_t var_c_2 = edx_5
                            sub_577150(&var_10)
                        else if (eax_13 != 2)
                            float var_c0_10 = var_40_5
                            float eax_17
                            float edx_6
                            eax_17, edx_6 = sub_466250(&var_54, fconvert.s(fconvert.t(data_27bc43c)))
                            long double x87_r7_40 = fconvert.t(data_27bc440)
                            var_44 = eax_17
                            data_27bc440 = fconvert.s(x87_r7_40 - fconvert.t(var_44))
                            data_27bc444 = fconvert.s(fconvert.t(data_27bc444) - fconvert.t(edx_6))
                        
                        data_27bc458 = var_5c
                        data_27bc45c = var_58
                        sub_5a6aba(var_8 ^ &__saved_ebp)
                        return var_58
                    
                    long double x87_r7_10 = fconvert.t(data_27bc450)
                    float var_6c = fconvert.s(x87_r7_10 - fconvert.t(data_27bc458))
                    long double x87_r6_5 = fconvert.t(data_27bc454)
                    float var_68_1 = fconvert.s(x87_r6_5 - fconvert.t(data_27bc45c))
                    var_44 = fconvert.s(fconvert.t(var_5c) - x87_r7_10)
                    var_54 = var_44
                    int32_t eax_6 = data_27bc460
                    float var_40_1 = fconvert.s(fconvert.t(var_58) - x87_r6_5)
                    float var_50 = var_40_1
                    
                    if (eax_6 == 0)
                        float var_c0_1 = var_40_1
                        float var_48_2 = fconvert.s(sub_4064d0(fconvert.s(fconvert.t(var_44))))
                        long double st0_5 = sub_4064d0(fconvert.s(fconvert.t(var_40_1)))
                        long double x87_r6_7 = fconvert.t(var_48_2)
                        x87_r6_7 - st0_5
                        eax_6.w = (x87_r6_7 < st0_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_7, st0_5) ? 1 : 0) << 0xa
                            | (x87_r6_7 == st0_5 ? 1 : 0) << 0xe
                        long double x87_r7_18 = float.t(0)
                        bool p_2 = unimplemented  {test ah, 0x5}
                        
                        if (p_2)
                            var_50 = fconvert.s(x87_r7_18)
                            data_27bc460 = 1
                        else
                            data_27bc460 = 2
                            var_54 = fconvert.s(x87_r7_18)
                    else if (eax_6 == 1)
                        var_50 = fconvert.s(float.t(0))
                    else if (eax_6 == 2)
                        var_54 = fconvert.s(float.t(0))
                    
                    var_44 = fconvert.s(fconvert.t(var_6c) + fconvert.t(var_54))
                    var_5c = var_44
                    float var_58_1 = fconvert.s(fconvert.t(var_68_1) + fconvert.t(var_50))
                    float eax_8 = data_27bc44c
                    
                    if (eax_8 == 0)
                        float var_c0_4 = var_40_1
                        float eax_10
                        int32_t edx_2
                        eax_10, edx_2 = sub_466250(&var_5c, fconvert.s(fconvert.t(data_27bc43c)))
                        var_10 = eax_10
                        int32_t var_c_1 = edx_2
                        eax_8 = sub_577150(&var_10)
                    else if (eax_8 != 2)
                        float var_c0_6 = var_40_1
                        float edx_3
                        eax_8, edx_3 = sub_466250(&var_5c, fconvert.s(fconvert.t(data_27bc43c)))
                        long double x87_r7_26 = fconvert.t(data_27bc440)
                        var_44 = eax_8
                        data_27bc440 = fconvert.s(x87_r7_26 - fconvert.t(var_44))
                        data_27bc444 = fconvert.s(fconvert.t(data_27bc444) - fconvert.t(edx_3))
                    
                    var_44 = fconvert.s(fconvert.t(data_27bc450) + fconvert.t(var_54))
                    long double x87_r7_32 = fconvert.t(data_27bc454)
                    data_27bc458 = var_44
                    data_27bc45c = fconvert.s(x87_r7_32 + fconvert.t(var_50))
                    sub_5a6aba(var_8 ^ &__saved_ebp)
                    return eax_8
                
                float edx_8 = data_27bc470
                float var_18 = data_27bc46c
                float var_14 = edx_8
                float edx_9 = data_27bc478
                var_10 = data_27bc474
                float var_c_3 = edx_9
                
                if (eax_3.b != 0 && (0x8000 & GetKeyState(0x11)) != 0)
                    float eax_20 = data_27bc480
                    float ecx_15 = data_27bc484
                    var_18 = data_27bc47c
                    float edx_11 = data_27bc488
                    var_14 = eax_20
                    var_10 = ecx_15
                    var_c_3 = edx_11
                
                int32_t eax_21 = data_27bc464
                
                if (eax_21 u> 7)
                    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x367, "DraggingUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                float var_4c
                float var_48_3
                float ebx
                float esi_1
                
                switch (eax_21)
                    case 0
                        float eax_22
                        float edx_12
                        eax_22, edx_12 = sub_4fc8c0(&var_18)
                        long double x87_r7_44 = fconvert.t(-1f)
                        var_44 = fconvert.s(x87_r7_44)
                        esi_1 = eax_22
                        var_40 = fconvert.s(x87_r7_44)
                        ebx = edx_12
                        var_4c = var_44
                        var_48_3 = var_40
                    case 1
                        float eax_24
                        float edx_13
                        eax_24, edx_13 = sub_4fc8c0(&var_18)
                        var_44 = fconvert.s(fconvert.t(-1f))
                        esi_1 = eax_24
                        ebx = edx_13
                        var_40 = fconvert.s(fconvert.t(-0f))
                        var_4c = var_44
                        var_48_3 = var_40
                    case 2
                        var_44 = fconvert.s(fconvert.t(var_10))
                        esi_1 = var_44
                        ebx = fconvert.s(fconvert.t(var_14))
                        var_44 = fconvert.s(fconvert.t(-1f))
                        var_4c = var_44
                        var_40 = fconvert.s(float.t(1))
                        var_48_3 = var_40
                    case 3
                        float eax_26
                        float edx_16
                        eax_26, edx_16 = sub_4fc8c0(&var_18)
                        var_44 = fconvert.s(fconvert.t(-0f))
                        esi_1 = eax_26
                        var_40 = fconvert.s(fconvert.t(-1f))
                        ebx = edx_16
                        var_4c = var_44
                        var_48_3 = var_40
                    case 4
                        float eax_28
                        float edx_17
                        eax_28, edx_17 = sub_40af40(&var_18)
                        esi_1 = eax_28
                        ebx = edx_17
                        var_4c = 0f
                        var_48_3 = 1f
                    case 5
                        var_44 = fconvert.s(fconvert.t(var_18))
                        esi_1 = var_44
                        ebx = fconvert.s(fconvert.t(var_c_3))
                        var_44 = fconvert.s(float.t(1))
                        var_40 = fconvert.s(fconvert.t(-1f))
                        var_4c = var_44
                        var_48_3 = var_40
                    case 6
                        float eax_29
                        float edx_19
                        eax_29, edx_19 = sub_40af40(&var_18)
                        esi_1 = eax_29
                        ebx = edx_19
                        var_4c = 1f
                        var_48_3 = 0f
                    case 7
                        float eax_30
                        float edx_20
                        eax_30, edx_20 = sub_40af40(&var_18)
                        esi_1 = eax_30
                        ebx = edx_20
                        var_4c = 1f
                        var_48_3 = 1f
                
                float var_50_2 = ebx
                var_54 = esi_1
                
                if ((0x8000 & GetKeyState(0x12)) != 0)
                    float eax_33
                    float edx_21
                    eax_33, edx_21 = sub_405eb0(&var_18)
                    long double x87_r6_8 = fconvert.t(2.0)
                    esi_1 = eax_33
                    ebx = edx_21
                    var_54 = esi_1
                    float var_50_3 = ebx
                    var_4c = fconvert.s(fconvert.t(var_4c) * x87_r6_8)
                    var_48_3 = fconvert.s(x87_r6_8 * fconvert.t(var_48_3))
                
                sub_4c6230(&var_44)
                int16_t eax_34 = GetKeyState(0x10)
                int32_t eax_35
                
                if ((0x8000 & eax_34) != 0)
                    eax_35 = data_27bc464
                
                float var_3c
                float var_24
                
                if ((0x8000 & eax_34) != 0
                        && (eax_35 == 0 || eax_35 == 2 || eax_35 == 5 || eax_35 == 7))
                    float eax_36
                    float edx_22
                    eax_36, edx_22 = sub_5757b0(esi_1, ebx)
                    long double x87_r7_61 = fconvert.t(var_44)
                    var_5c = eax_36
                    long double x87_r6_10 = fconvert.t(var_5c)
                    var_10 = fconvert.s(x87_r7_61 - x87_r6_10)
                    long double x87_r5_6 = fconvert.t(edx_22)
                    float var_c_4 = fconvert.s(fconvert.t(var_40) - x87_r5_6)
                    var_5c = fconvert.s(fconvert.t(data_27bc450) - x87_r6_10)
                    var_24 = var_5c
                    float var_20 = fconvert.s(fconvert.t(data_27bc454) - x87_r5_6)
                    long double x87_r7_71 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                        fconvert.t(fconvert.s(sub_4c9870(&var_10))) / sub_4c9870(&var_24)))))
                    float var_48_8 = fconvert.s(x87_r7_71)
                    var_5c = fconvert.s(x87_r7_71)
                    float var_58_4 = var_48_8
                else
                    var_5c = fconvert.s(fconvert.t(var_44) - fconvert.t(data_27bc450))
                    float var_58_5 = fconvert.s(fconvert.t(var_40) - fconvert.t(data_27bc454))
                    int32_t* eax_41 = sub_5757f0(&var_3c, &var_18)
                    float edx_25 = eax_41[1]
                    var_18 = *eax_41
                    var_10 = eax_41[2]
                    float edx_26 = eax_41[3]
                    var_24 = fconvert.s(fconvert.t(var_10) - fconvert.t(var_18))
                    float var_20_1 = fconvert.s(fconvert.t(edx_26) - fconvert.t(edx_25))
                    var_10 = fconvert.s(fconvert.t(var_5c) / fconvert.t(var_24))
                    float var_c_6 = fconvert.s(fconvert.t(var_58_5) / fconvert.t(var_20_1))
                    var_24 = fconvert.s(fconvert.t(var_10) * fconvert.t(var_4c))
                    float var_20_2 = fconvert.s(fconvert.t(var_48_3) * fconvert.t(var_c_6))
                    long double x87_r6_16 = float.t(1)
                    var_10 = fconvert.s(fconvert.t(var_24) + x87_r6_16)
                    var_5c = var_10
                    float var_58_6 = fconvert.s(x87_r6_16 + fconvert.t(var_20_2))
                
                int32_t eax_43 = data_27bc44c
                void var_9c
                float var_8c
                int32_t var_88
                int32_t var_84
                int32_t var_80
                void var_7c
                
                if (eax_43 != 0)
                    if (eax_43 == 2)
                        sub_4fc880(&var_8c, &var_5c, &var_54, &data_27bc48c)
                        var_3c = var_8c
                        int32_t var_38_2 = var_88
                        int32_t var_34_2 = var_84
                        int32_t var_30_2 = var_80
                        float* eax_77 = sub_530960(&var_3c, &var_9c)
                        int32_t edx_70 = eax_77[1]
                        var_3c = *eax_77
                        int32_t var_38_3 = edx_70
                        int32_t var_34_3 = eax_77[2]
                        int32_t var_30_3 = eax_77[3]
                        int32_t* eax_78 = sub_413110(&var_3c, &var_7c)
                        int32_t esi_14 = eax_78[1]
                        int32_t edi_13 = eax_78[2]
                        int32_t eax_79 = eax_78[3]
                        *(var_68 + 8) = *eax_78
                        *(var_68 + 0xc) = esi_14
                        *(var_68 + 0x10) = edi_13
                        *(var_68 + 0x14) = eax_79
                else
                    float var_2c
                    
                    if (data_273bc31:1.b == eax_43.b)
                    label_57801f:
                        int32_t i_1 = 0
                        
                        if (data_273bc2c s> 0)
                            int32_t* var_48_10 = &data_27bc48c
                            int32_t i
                            
                            do
                                void* eax_68 = sub_575c20((&data_273ac2c)[i_1])
                                float var_ac
                                sub_4fc880(&var_ac, &var_5c, &var_54, var_48_10)
                                var_18 = var_ac
                                int32_t var_a8
                                int32_t var_14_8 = var_a8
                                float var_a4
                                var_10 = var_a4
                                int32_t var_a0
                                int32_t var_c_14 = var_a0
                                float* eax_71 = sub_530960(&var_18, &var_7c)
                                int32_t edx_60 = eax_71[1]
                                var_2c = *eax_71
                                int32_t var_28_2 = edx_60
                                int32_t edx_61 = eax_71[3]
                                var_24 = eax_71[2]
                                int32_t var_20_4 = edx_61
                                int32_t* eax_72 = sub_413110(&var_2c, &var_9c)
                                int32_t edx_62 = eax_72[1]
                                var_3c = *eax_72
                                int32_t var_38_1 = edx_62
                                int32_t var_34_1 = eax_72[2]
                                int32_t var_30_1 = eax_72[3]
                                sub_5308c0(&var_8c, &var_3c, eax_68 + 0x74)
                                var_48_10 = &var_48_10[4]
                                *(eax_68 + 0xc) = var_8c
                                *(eax_68 + 0x10) = var_88
                                *(eax_68 + 0x14) = var_84
                                *(eax_68 + 0x18) = var_80
                                i = i_1 + 1
                                i_1 = i
                            while (i s< data_273bc2c)
                    else
                        float var_64
                        int32_t var_38
                        float var_34
                        int32_t var_30
                        
                        if ((0x8000 & GetKeyState(0x11)) != 0)
                            if (data_273bc31:1.b == 0)
                                goto label_57801f
                            
                            if ((0x8000 & GetKeyState(0x11)) == 0)
                                goto label_57801f
                            
                            if (data_273bc2c != 1)
                                sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, 
                                    "Editor\UIEditor.cpp", 0x392, "DraggingUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            void* eax_56 = sub_575c20(data_273ac2c)
                            void* var_48_9 = eax_56
                            sub_4fc880(&var_3c, &var_5c, &var_54, &data_27bc47c)
                            var_18 = var_3c
                            int32_t var_14_5 = var_38
                            var_10 = var_34
                            int32_t var_c_11 = var_30
                            float* eax_59 = sub_530960(&var_18, &var_2c)
                            int32_t edx_42 = eax_59[1]
                            var_18 = *eax_59
                            int32_t var_14_6 = edx_42
                            int32_t edx_43 = eax_59[3]
                            var_10 = eax_59[2]
                            int32_t var_c_12 = edx_43
                            int32_t* eax_60 = sub_413110(&var_18, &var_64)
                            int32_t edx_44 = eax_60[1]
                            var_18 = *eax_60
                            int32_t edx_45 = eax_60[3]
                            var_10 = eax_60[2]
                            sub_4fc810(&var_3c, eax_56 + 0x74, eax_56 + 0xc)
                            var_2c = var_3c
                            int32_t var_28_1 = var_38
                            var_24 = var_34
                            int32_t var_20_3 = var_30
                            float* eax_62 = sub_4684b0(&var_18, &var_2c, &var_3c)
                            int32_t edx_50 = eax_62[1]
                            var_64 = *eax_62
                            int32_t var_60_1 = edx_50
                            int32_t edx_51 = eax_62[3]
                            var_5c = eax_62[2]
                            int32_t var_58_7 = edx_51
                            
                            if (sub_57c9d0(&var_18, &var_64) != 0)
                                float edx_53 = var_10
                                *(eax_56 + 0xc) = var_18
                                *(eax_56 + 0x10) = edx_44
                                *(eax_56 + 0x14) = edx_53
                                *(eax_56 + 0x18) = edx_45
                            
                            sub_575d50(&var_3c, &var_2c, eax_56 + 0xc)
                            *(eax_56 + 0x74) = var_3c
                            *(eax_56 + 0x78) = var_38
                            *(eax_56 + 0x7c) = var_34
                            *(eax_56 + 0x80) = var_30
                        else
                            if (data_273bc2c != 1)
                                sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, 
                                    "Editor\UIEditor.cpp", 0x389, "DraggingUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            void* eax_46 = sub_575c20(data_273ac2c)
                            sub_4fc880(&var_3c, &var_5c, &var_54, &data_27bc48c)
                            var_18 = var_3c
                            int32_t var_14_2 = var_38
                            var_10 = var_34
                            int32_t var_c_8 = var_30
                            float* eax_48 = sub_530960(&var_18, &var_2c)
                            int32_t edx_31 = eax_48[1]
                            var_18 = *eax_48
                            int32_t var_14_3 = edx_31
                            int32_t edx_32 = eax_48[3]
                            var_10 = eax_48[2]
                            int32_t var_c_9 = edx_32
                            int32_t* eax_49 = sub_413110(&var_18, &var_64)
                            int32_t edx_33 = eax_49[1]
                            var_18 = *eax_49
                            int32_t var_14_4 = edx_33
                            int32_t edx_34 = eax_49[3]
                            var_10 = eax_49[2]
                            int32_t var_c_10 = edx_34
                            sub_575d50(&var_3c, &var_18, eax_46 + 0xc)
                            *(eax_46 + 0x74) = var_3c
                            *(eax_46 + 0x78) = var_38
                            *(eax_46 + 0x7c) = var_34
                            *(eax_46 + 0x80) = var_30
                            int32_t* eax_52
                            int80_t st0_9
                            st0_9, eax_52 = sub_4fc620(eax_46 + 0x74, &data_84076c, &var_3c)
                            int32_t edx_37 = eax_52[1]
                            int32_t esi_6 = eax_52[2]
                            int32_t eax_53 = eax_52[3]
                            *(eax_46 + 0x74) = *eax_52
                            *(eax_46 + 0x78) = edx_37
                            *(eax_46 + 0x7c) = esi_6
                            *(eax_46 + 0x80) = eax_53
                float eax_80 = var_44
                data_27bc45c = var_40
                data_27bc458 = eax_80
                sub_5a6aba(var_8 ^ &__saved_ebp)
                return eax_80
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return eax_1
}

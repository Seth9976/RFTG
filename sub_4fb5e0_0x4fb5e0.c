// 函数名称: sub_4fb5e0
// 虚拟地址: 0x4fb5e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4fb5e0(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692470
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const arg_c
    char* const ebx = arg_c
    int32_t* i_8 = sub_4fc3d0(&data_be1cb8, arg2)
    char* const var_b0 = &data_83f3d3
    int32_t* i_5 = i_8
    int128_t* i_1 = sub_4f6e90(ebx, i_8, var_b0)
    int32_t eax_4
    char* i_6
    eax_4, i_6 = sub_4f4890(i_8[1])
    char* ebx_2 = ebx * 0x118 + *eax_4
    char* i = *(ebx_2 + 4)
    
    if (i != 3)
        if (i == 5)
            i = i_1
            
            if (i[0x21] == 0 && i[0x22] == 0 && i[0x23] == 0)
                if (arg3 == 0)
                    char eax_43
                    char* const ecx_18
                    char* const edx_15
                    eax_43, ecx_18, edx_15 = sub_4d7170(&data_be1adc, &arg1[0x210])
                    char* const var_b4_11
                    int32_t var_b0_15
                    
                    if (eax_43 == 0)
                        char eax_46
                        eax_46, edx_15 = sub_4d7170(&arg1[0x210], &arg1[0x110])
                        
                        if (eax_46 == 0)
                            ecx_18 = arg_c
                            int32_t var_b0_17 = 0
                            char* const var_b4_13 = ecx_18
                        else
                            ecx_18 = arg1
                            
                            if (ecx_18[4] == 0)
                                var_b0_15 = 1
                                var_b4_11 = arg_c
                            else
                                edx_15 = arg_c
                                int32_t var_b0_16 = 2
                                char* const var_b4_12 = edx_15
                    else
                        var_b0_15 = 1
                        var_b4_11 = arg_c
                    sub_4fb3f0(arg2, edx_15, ecx_18)
                    
                    if (arg1[0x324] != 0 && *(ebx_2 + 0x100) != 0)
                        sub_4d6980()
                
                if (arg1[0x325] != 0 && i_1[2].b != 0)
                    int32_t* i_10 = i_5
                    i_1 = nullptr
                    sub_4fb430(i_10)
                    
                    if (*(ebx_2 + 0xfc) != 0)
                        sub_4d6980()
                    
                label_4fbf72:
                    int32_t eax_48
                    eax_48.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 
                
                if ((arg1[0x326] != 0 || arg1[0x327] != 0) && i_1[2].b == 0)
                    int32_t var_1c_3 = 0
                    
                    if (arg1[0x328] != 0)
                        int32_t var_1c_4 = 2
                    else if (arg1[0x327] != 0)
                        int32_t var_1c_5 = 1
                    
                    sub_4fb430(i_5)
                    
                    if (*(ebx_2 + 0xfc) == 0)
                        goto label_4fbf72
                    
                    sub_4d6980()
                    int32_t eax_49
                    eax_49.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 
    else
        void* esi_5
        
        if (arg1[0x325] != 0)
            void* eax_5 = i_8[3]
            i_5 = nullptr
            
            if (eax_5 != 0)
                int32_t eax_6 = *(eax_5 + 0x11c)
                
                if (eax_6 != 0)
                    i_6 = eax_6(0, &i_8[4], arg_c, &i_5, eax_2)
            
            i = i_8[0xb]
            
            if (i != 0)
                i, i_6 = i(i_8[0x10d], arg_c, &i_5, eax_2)
            
            int128_t* i_7 = i_1
            
            if (*(i_7 + 0x15c) == 0)
                sub_4fb4a0(ebx_2, i_7)
                float var_3c = fconvert.s(fconvert.t(*(ebx_2 + 0xc)) + fconvert.t(*(ebx_2 + 0xf4)))
                float var_4c = var_3c
                long double x87_r7_4 = fconvert.t(*(ebx_2 + 0x10)) + fconvert.t(*(ebx_2 + 0xf8))
                void var_9c
                __builtin_memcpy(&var_9c, &arg1[0x14c], 0x40)
                float var_48_1 = fconvert.s(x87_r7_4)
                float var_40_1 = fconvert.s(fconvert.t(*(ebx_2 + 0x18)) + fconvert.t(*(ebx_2 + 0xf8)))
                float var_44_1 = fconvert.s(fconvert.t(*(ebx_2 + 0x14)) + fconvert.t(*(ebx_2 + 0xf4)))
                void var_5c
                int32_t* eax_10 = sub_4f4990(&var_9c, &var_5c, &ebx_2[0x1c], &var_5c, &var_9c)
                float edx_5 = eax_10[1]
                var_3c = *eax_10
                float ecx_5 = eax_10[2]
                float edx_6 = eax_10[3]
                float eax_11
                int32_t edx_7
                eax_11, edx_7 = sub_40af40(&var_3c)
                i_6 = i_1
                long double x87_r7_10 = fconvert.t(ecx_5) - fconvert.t(var_3c)
                *(i_6 + 0x170) = eax_11
                *(i_6 + 0x174) = edx_7
                i_7 = i_6
                *(i_6 + 0x178) = fconvert.s(x87_r7_10)
                *(i_6 + 0x17c) = fconvert.s(fconvert.t(edx_6) - fconvert.t(edx_5))
                *(i_6 + 0x180) = 0
                *(i_6 + 0x184) = 0
                float var_90
                *(i_6 + 0x198) = fconvert.s(fconvert.t(*(ebx_2 + 0xc0)) * fconvert.t(var_90))
            
            *(i_7 + 0x1b1) = 1
            esi_5 = &i_7[0x16]
            
            if (*(esi_5 + 0x50) == 0)
                int32_t* i_4 = nullptr
                long double x87_r7_16 = fconvert.t(*(esi_5 + 8)) + fconvert.t(data_8c4d34)
            label_4fb7d8:
                *(esi_5 + 8) = fconvert.s(x87_r7_16)
            label_4fb7de:
                
                if (i_4 != 0)
                    i = i_4[8]
                else
                    i_6 = data_27e7fdc
                    i = *i_6
                
                while (i != 0)
                    int32_t* i_2 = i
                    i = *(i + 0x20)
                    
                    if (i_2[7].b == 0)
                        float edx_10 = *(arg1 + 0x310)
                        float ebx_3 = *(arg1 + 0x314)
                        long double x87_r7_17 = fconvert.t(edx_10)
                        long double x87_r6_1 = fconvert.t(*(esi_5 + 0x10))
                        i_4 = i_2
                        x87_r6_1 - x87_r7_17
                        arg_c:3.b = 0
                        char* eax_15
                        eax_15.w = (x87_r6_1 < x87_r7_17 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_17) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_1))
                            long double x87_r6_3 =
                                fconvert.t(*(esi_5 + 0x18)) + fconvert.t(*(esi_5 + 0x10))
                            x87_r6_3 - x87_r7_17
                            eax_15.w = (x87_r6_3 < x87_r7_17 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_3, x87_r7_17) ? 1 : 0) << 0xa
                                | (x87_r6_3 == x87_r7_17 ? 1 : 0) << 0xe
                            
                            if ((eax_15:1.b & 0x41) == 0)
                                x87_r7_17 = fconvert.t(ebx_3)
                                long double x87_r6_4 = fconvert.t(*(esi_5 + 0x14))
                                x87_r6_4 - x87_r7_17
                                eax_15.w = (x87_r6_4 < x87_r7_17 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_4, x87_r7_17) ? 1 : 0) << 0xa
                                    | (x87_r6_4 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
                                bool p_2 = unimplemented  {test ah, 0x41}
                                
                                if (not(p_2))
                                    long double x87_r6_6 =
                                        fconvert.t(*(esi_5 + 0x1c)) + fconvert.t(*(esi_5 + 0x14))
                                    x87_r6_6 - x87_r7_17
                                    eax_15.w = (x87_r6_6 < x87_r7_17 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_6, x87_r7_17) ? 1 : 0) << 0xa
                                        | (x87_r6_6 == x87_r7_17 ? 1 : 0) << 0xe
                                    
                                    if ((eax_15:1.b & 0x41) == 0)
                                        arg_c:3.b = 1
                        
                        int32_t eax_16 = *i_2
                        
                        if (eax_16 != 3 || arg_c:3.b == 0)
                            if (eax_16 == 4)
                                *(esi_5 + 0x52) = 0
                                goto label_4fb7de
                            
                            if (eax_16 == 1)
                                i_6 = i_2[1]
                                
                                if (i_6 == 0x56 && i_2[2] == 2 && *(esi_5 + 0x51) != 0)
                                    arg_c = &data_83f3d3
                                    int32_t var_8_1 = 0
                                    
                                    if (sub_4c63c0(&arg_c) != 0)
                                        sub_506300(&arg_c, esi_5)
                                    
                                    i_2[7].b = 1
                                    int32_t var_8_2 = 0xffffffff
                                    i_6 = sub_4c43d0(&arg_c)
                                    goto label_4fb7de
                                
                                if (i_6 == 0x43 && i_2[2] == 2 && *(esi_5 + 0x51) != 0)
                                    sub_506400(&i_1, edx_10, esi_5)
                                    
                                    if (sub_4c44c0(&i_1) != 0)
                                        sub_4c6360()
                                    
                                    i_2[7].b = 1
                                    i_6 = sub_4c43d0(&i_1)
                                    goto label_4fb7de
                            
                            if (eax_16 == 0 && *(esi_5 + 0x51) != eax_16.b
                                    && *(esi_5 + 0x52) == eax_16.b)
                                int32_t eax_22 = i_2[2]
                                
                                if (eax_22 != 0 && eax_22 != 1)
                                    goto label_4fb7de
                                
                                i_6 = sub_505e40(i_6, esi_5, i_2[1])
                                i_2[7].b = 1
                                goto label_4fb7de
                            
                            if (eax_16 == 1 && *(esi_5 + 0x51) != 0 && *(esi_5 + 0x52) == 0)
                                i_6 = i_2[2]
                                
                                if (sub_506130(i_2[1], edx_10, i_6) == 0)
                                    goto label_4fb7de
                                
                                i_2[7].b = 1
                                goto label_4fb7de
                            
                            if (eax_16 != 0x11 || i_2[1] != 0x100000 || arg_c:3.b == 0)
                                i_6 = 0x10
                                
                                if (eax_16 == 0x10 && i_2[1] == 0x100000)
                                    *(esi_5 + 0x52) = 0
                                    goto label_4fb7de
                                
                                if (eax_16 != 0xc || i_2[1] != 0x1000 || arg_c:3.b == 0)
                                    if (eax_16 == 0xb && i_2[1] == 0x1000)
                                        *(esi_5 + 0x52) = 0
                                        goto label_4fb7de
                                    
                                    if (eax_16 != 0xd || i_2[1] != 0x10)
                                        edx_10.b = arg_c:3.b
                                    label_4fba50:
                                        
                                        if (eax_16 == 0xe && i_2[1] == 0x10)
                                            *(esi_5 + 0x52) = 0
                                            goto label_4fb7de
                                        
                                        if ((eax_16 != 0x15 || i_2[1] != 0x100 || edx_10.b == 0)
                                                && (eax_16 != 0x13 || i_2[1] != 1 || edx_10.b == 0))
                                            if (eax_16 == 0x14 && i_2[1] == 0x100)
                                                *(esi_5 + 0x52) = 0
                                                goto label_4fb7de
                                            
                                            if (eax_16 == 0x12 && i_2[1] == 1)
                                                *(esi_5 + 0x52) = 0
                                                goto label_4fb7de
                                            
                                            if ((eax_16 != 0x15 || i_2[1] != 0x1000 || edx_10.b == 0)
                                                    && (eax_16 != 0x13 || i_2[1] != 0x10
                                                    || edx_10.b == 0) &&
                                                    (eax_16 != 0x17 || i_2[1] != 1 || edx_10.b == 0))
                                                if (eax_16 == 0x16 && i_2[1] == 1)
                                                    *(esi_5 + 0x52) = 0
                                                    goto label_4fb7de
                                                
                                                if (eax_16 == 0x14 && i_2[1] == 0x1000)
                                                    *(esi_5 + 0x52) = 0
                                                    goto label_4fb7de
                                                
                                                if (eax_16 != 0x12)
                                                    goto label_4fb7de
                                                
                                                if (i_2[1] != 0x10)
                                                    goto label_4fb7de
                                                
                                                *(esi_5 + 0x52) = 0
                                                goto label_4fb7de
                                    else
                                        edx_10.b = arg_c:3.b
                                        
                                        if (edx_10.b == 0)
                                            goto label_4fba50
                                    
                                    i_6 = sub_505b50(esi_5, *(arg1 + 0x310), *(arg1 + 0x314))
                                    goto label_4fb7de
                        
                        float var_b0_8 = ebx_3
                        *(esi_5 + 0x52) = 1
                        int32_t eax_27
                        long double st0_1
                        st0_1, eax_27, i_6 = sub_505940(esi_5, edx_10)
                        x87_r7_16 = float.t(0)
                        *(esi_5 + 4) = eax_27
                        *(esi_5 + 0xc) = eax_27
                        goto label_4fb7d8
                
            label_4fb802:
                
                if (*(esi_5 + 0x52) != 0)
                    sub_505b80(esi_5, *(arg1 + 0x310), *(arg1 + 0x314))
        else if (arg1[4] != 0)
            esi_5 = &i_1[0x16]
            
            if (*(esi_5 + 0x50) == 0)
                long double x87_r7_18 = fconvert.t(*(esi_5 + 8))
                i_5 = nullptr
                long double x87_r7_19 = x87_r7_18 + fconvert.t(data_8c4d34)
            label_4fbb61:
                *(esi_5 + 8) = fconvert.s(x87_r7_19)
            label_4fbb64:
                int32_t* i_9 = i_5
                
                if (i_9 != 0)
                    i = i_9[8]
                else
                    i = *data_27e7fdc
                
                while (i != 0)
                    int32_t* i_3 = i
                    i = *(i + 0x20)
                    
                    if (i_3[7].b == 0)
                        float edx_12 = *(arg1 + 0x310)
                        float ebx_7 = *(arg1 + 0x314)
                        long double x87_r7_20 = fconvert.t(edx_12)
                        long double x87_r6_7 = fconvert.t(*(esi_5 + 0x10))
                        i_5 = i_3
                        x87_r6_7 - x87_r7_20
                        arg_c:3.b = 0
                        char* eax_30
                        eax_30.w = (x87_r6_7 < x87_r7_20 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_7, x87_r7_20) ? 1 : 0) << 0xa
                            | (x87_r6_7 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800
                        bool p_3 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_3))
                            long double x87_r6_9 =
                                fconvert.t(*(esi_5 + 0x18)) + fconvert.t(*(esi_5 + 0x10))
                            x87_r6_9 - x87_r7_20
                            eax_30.w = (x87_r6_9 < x87_r7_20 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_9, x87_r7_20) ? 1 : 0) << 0xa
                                | (x87_r6_9 == x87_r7_20 ? 1 : 0) << 0xe
                            
                            if ((eax_30:1.b & 0x41) == 0)
                                x87_r7_20 = fconvert.t(ebx_7)
                                long double x87_r6_10 = fconvert.t(*(esi_5 + 0x14))
                                x87_r6_10 - x87_r7_20
                                eax_30.w = (x87_r6_10 < x87_r7_20 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_10, x87_r7_20) ? 1 : 0) << 0xa
                                    | (x87_r6_10 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800
                                bool p_4 = unimplemented  {test ah, 0x41}
                                
                                if (not(p_4))
                                    long double x87_r6_12 =
                                        fconvert.t(*(esi_5 + 0x1c)) + fconvert.t(*(esi_5 + 0x14))
                                    x87_r6_12 - x87_r7_20
                                    eax_30.w = (x87_r6_12 < x87_r7_20 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_12, x87_r7_20) ? 1 : 0) << 0xa
                                        | (x87_r6_12 == x87_r7_20 ? 1 : 0) << 0xe
                                    
                                    if ((eax_30:1.b & 0x41) == 0)
                                        arg_c:3.b = 1
                        
                        int32_t eax_31 = *i_3
                        
                        if (eax_31 != 3 || arg_c:3.b == 0)
                            if (eax_31 == 4)
                                *(esi_5 + 0x52) = 0
                                goto label_4fbb64
                            
                            if (eax_31 == 1)
                                i_6 = i_3[1]
                                
                                if (i_6 == 0x56 && i_3[2] == 2 && *(esi_5 + 0x51) != 0)
                                    arg_c = &data_83f3d3
                                    int32_t var_8_3 = eax_31
                                    
                                    if (sub_4c63c0(&arg_c) != 0)
                                        sub_506300(&arg_c, esi_5)
                                    
                                    i_3[7].b = 1
                                    int32_t var_8_4 = 0xffffffff
                                    i_6 = sub_4c43d0(&arg_c)
                                    goto label_4fbb64
                                
                                if (i_6 == 0x43 && i_3[2] == 2 && *(esi_5 + 0x51) != 0)
                                    sub_506400(&i_1, edx_12, esi_5)
                                    
                                    if (sub_4c44c0(&i_1) != 0)
                                        sub_4c6360()
                                    
                                    i_3[7].b = 1
                                    i_6 = sub_4c43d0(&i_1)
                                    goto label_4fbb64
                            
                            if (eax_31 == 0 && *(esi_5 + 0x51) != eax_31.b
                                    && *(esi_5 + 0x52) == eax_31.b)
                                int32_t eax_37 = i_3[2]
                                
                                if (eax_37 != 0 && eax_37 != 1)
                                    goto label_4fbb64
                                
                                i_6 = sub_505e40(i_6, esi_5, i_3[1])
                                i_3[7].b = 1
                                goto label_4fbb64
                            
                            if (eax_31 == 1 && *(esi_5 + 0x51) != 0 && *(esi_5 + 0x52) == 0)
                                i_6 = i_3[2]
                                
                                if (sub_506130(i_3[1], edx_12, i_6) == 0)
                                    goto label_4fbb64
                                
                                i_3[7].b = 1
                                goto label_4fbb64
                            
                            if (eax_31 != 0x11 || i_3[1] != 0x100000 || arg_c:3.b == 0)
                                i_6 = 0x10
                                
                                if (eax_31 == 0x10 && i_3[1] == 0x100000)
                                    *(esi_5 + 0x52) = 0
                                    goto label_4fbb64
                                
                                if (eax_31 != 0xc || i_3[1] != 0x1000 || arg_c:3.b == 0)
                                    if (eax_31 == 0xb && i_3[1] == 0x1000)
                                        *(esi_5 + 0x52) = 0
                                        goto label_4fbb64
                                    
                                    if (eax_31 != 0xd || i_3[1] != 0x10)
                                        edx_12.b = arg_c:3.b
                                    label_4fbdae:
                                        
                                        if (eax_31 == 0xe && i_3[1] == 0x10)
                                            *(esi_5 + 0x52) = 0
                                            goto label_4fbb64
                                        
                                        if ((eax_31 != 0x15 || i_3[1] != 0x100 || edx_12.b == 0)
                                                && (eax_31 != 0x13 || i_3[1] != 1 || edx_12.b == 0))
                                            if (eax_31 == 0x14 && i_3[1] == 0x100)
                                                *(esi_5 + 0x52) = 0
                                                goto label_4fbb64
                                            
                                            if (eax_31 == 0x12 && i_3[1] == 1)
                                                *(esi_5 + 0x52) = 0
                                                goto label_4fbb64
                                            
                                            if ((eax_31 != 0x15 || i_3[1] != 0x1000 || edx_12.b == 0)
                                                    && (eax_31 != 0x13 || i_3[1] != 0x10
                                                    || edx_12.b == 0) &&
                                                    (eax_31 != 0x17 || i_3[1] != 1 || edx_12.b == 0))
                                                if (eax_31 == 0x16 && i_3[1] == 1)
                                                    *(esi_5 + 0x52) = 0
                                                    goto label_4fbb64
                                                
                                                if (eax_31 == 0x14 && i_3[1] == 0x1000)
                                                    *(esi_5 + 0x52) = 0
                                                    goto label_4fbb64
                                                
                                                if (eax_31 != 0x12)
                                                    goto label_4fbb64
                                                
                                                if (i_3[1] != 0x10)
                                                    goto label_4fbb64
                                                
                                                *(esi_5 + 0x52) = 0
                                                goto label_4fbb64
                                    else
                                        edx_12.b = arg_c:3.b
                                        
                                        if (edx_12.b == 0)
                                            goto label_4fbdae
                                    
                                    i_6 = sub_505b50(esi_5, *(arg1 + 0x310), *(arg1 + 0x314))
                                    goto label_4fbb64
                        
                        float var_b0_13 = ebx_7
                        *(esi_5 + 0x52) = 1
                        int32_t eax_41
                        long double st0_2
                        st0_2, eax_41, i_6 = sub_505940(esi_5, edx_12)
                        x87_r7_19 = float.t(0)
                        *(esi_5 + 4) = eax_41
                        *(esi_5 + 0xc) = eax_41
                        goto label_4fbb61
                
                goto label_4fb802
    
    i.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
}

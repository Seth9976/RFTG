// 函数名称: sub_4bbef0
// 虚拟地址: 0x4bbef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4bbef0(int32_t arg1, char* arg2, int32_t* arg3, float* arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6924a6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_124 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316576c & 1) == 0)
        data_316576c.d |= 1
        int32_t var_8_1 = 0
        data_3165768 = sub_4f5220(data_307c620, "Name")
        int32_t var_8_2 = 0xffffffff
    
    void var_d4
    int32_t eax_5
    int32_t edx_1
    int80_t st0
    st0, eax_5, edx_1 = sub_40a930(&var_d4)
    int16_t top = 0xffff
    int32_t eax_6 = data_3165768
    void var_54
    __builtin_memcpy(&var_54, eax_5, 0x40)
    sub_4bb000(eax_6, edx_1, data_307c620, &arg2[0x290], &var_54)
    int32_t var_68
    char* const var_64
    char* i_1
    
    if (arg2[0x2e0] == 0)
        char* i_2 = nullptr
        long double x87_r6_2 = fconvert.t(*(arg2 + 0x298)) + fconvert.t(data_8c4d34)
    label_4bbfb2:
        *(arg2 + 0x298) = fconvert.s(x87_r6_2)
        top = 0xffff
    label_4bbfb8:
        char* i
        
        if (i_2 != 0)
            i = *(i_2 + 0x20)
        else
            i = *data_27e7fdc
        
        while (i != 0)
            i_1 = i
            i = *(i + 0x20)
            
            if (i_1[0x1c] == 0)
                float edx_5 = *arg4
                float ebx_2 = arg4[1]
                long double x87_r6_3 = fconvert.t(edx_5)
                long double x87_r5_1 = fconvert.t(*(arg2 + 0x2a0))
                i_2 = i_1
                x87_r5_1 - x87_r6_3
                char var_55_1 = 0
                float* eax_12
                eax_12.w = (x87_r5_1 < x87_r6_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_1, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r5_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (p_1)
                    top = 0xffff
                else
                    long double x87_r5_3 = fconvert.t(*(arg2 + 0x2a8)) + fconvert.t(*(arg2 + 0x2a0))
                    x87_r5_3 - x87_r6_3
                    top = 0xffff
                    eax_12.w = (x87_r5_3 < x87_r6_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_3, x87_r6_3) ? 1 : 0) << 0xa
                        | (x87_r5_3 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_12:1.b & 0x41) == 0)
                        x87_r6_3 = fconvert.t(ebx_2)
                        long double x87_r5_4 = fconvert.t(*(arg2 + 0x2a4))
                        x87_r5_4 - x87_r6_3
                        eax_12.w = (x87_r5_4 < x87_r6_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_4, x87_r6_3) ? 1 : 0) << 0xa
                            | (x87_r5_4 == x87_r6_3 ? 1 : 0) << 0xe | 0x3000
                        bool p_2 = unimplemented  {test ah, 0x41}
                        
                        if (p_2)
                            top = 0xffff
                        else
                            long double x87_r5_6 =
                                fconvert.t(*(arg2 + 0x2ac)) + fconvert.t(*(arg2 + 0x2a4))
                            x87_r5_6 - x87_r6_3
                            top = 0xffff
                            eax_12.w = (x87_r5_6 < x87_r6_3 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r5_6, x87_r6_3) ? 1 : 0) << 0xa
                                | (x87_r5_6 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax_12:1.b & 0x41) == 0)
                                var_55_1 = 1
                
                int32_t eax_13 = *i_1
                int32_t ecx_1
                
                if (eax_13 != 3 || var_55_1 == 0)
                    if (eax_13 == 4)
                        arg2[0x2e2] = 0
                        goto label_4bbfb8
                    
                    if (eax_13 == 1)
                        ecx_1 = *(i_1 + 4)
                        
                        if (ecx_1 == 0x56 && *(i_1 + 8) == 2 && arg2[0x2e1] != 0)
                            var_64 = &data_83f3d3
                            int32_t var_8_3 = eax_13
                            
                            if (sub_4c63c0(&var_64) != 0)
                                sub_506300(&var_64, &arg2[0x290])
                            
                            i_1[0x1c] = 1
                            int32_t var_8_4 = 0xffffffff
                            sub_4c43d0(&var_64)
                            goto label_4bbfb8
                        
                        if (ecx_1 == 0x43 && *(i_1 + 8) == 2 && arg2[0x2e1] != 0)
                            sub_506400(&var_68, edx_5, &arg2[0x290])
                            
                            if (sub_4c44c0(&var_68) != 0)
                                sub_4c6360()
                            
                            i_1[0x1c] = 1
                            sub_4c43d0(&var_68)
                            goto label_4bbfb8
                    
                    if (eax_13 == 0 && arg2[0x2e1] != eax_13.b && arg2[0x2e2] == eax_13.b)
                        int32_t eax_19 = *(i_1 + 8)
                        
                        if (eax_19 != 0 && eax_19 != 1)
                            goto label_4bbfb8
                        
                        char* ecx_7 = *(i_1 + 4)
                        sub_505e40(ecx_7, &arg2[0x290], ecx_7)
                        i_1[0x1c] = 1
                        goto label_4bbfb8
                    
                    if (eax_13 == 1 && arg2[0x2e1] != 0 && arg2[0x2e2] == 0)
                        if (sub_506130(*(i_1 + 4), edx_5, *(i_1 + 8)) == 0)
                            goto label_4bbfb8
                        
                        i_1[0x1c] = 1
                        goto label_4bbfb8
                    
                    if (eax_13 != 0x11 || *(i_1 + 4) != 0x100000 || var_55_1 == 0)
                        if (eax_13 == 0x10 && *(i_1 + 4) == 0x100000)
                            arg2[0x2e2] = 0
                            goto label_4bbfb8
                        
                        if (eax_13 != 0xc || *(i_1 + 4) != 0x1000 || var_55_1 == 0)
                            if (eax_13 == 0xb && *(i_1 + 4) == 0x1000)
                                arg2[0x2e2] = 0
                                goto label_4bbfb8
                            
                            if (eax_13 != 0xd || *(i_1 + 4) != 0x10)
                                edx_5.b = var_55_1
                            else
                                edx_5.b = var_55_1
                                
                                if (edx_5.b != 0)
                                    sub_505b50(&arg2[0x290], *arg4, arg4[1])
                                    goto label_4bbfb8
                            
                            if (eax_13 == 0xe && *(i_1 + 4) == 0x10)
                                arg2[0x2e2] = 0
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x15 && *(i_1 + 4) == 0x100 && edx_5.b != 0)
                                sub_505b50(&arg2[0x290], *arg4, arg4[1])
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x13 && *(i_1 + 4) == 1 && edx_5.b != 0)
                                sub_505b50(&arg2[0x290], *arg4, arg4[1])
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x14 && *(i_1 + 4) == 0x100)
                                arg2[0x2e2] = 0
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x12 && *(i_1 + 4) == 1)
                                arg2[0x2e2] = 0
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x15 && *(i_1 + 4) == 0x1000 && edx_5.b != 0)
                                sub_505b50(&arg2[0x290], *arg4, arg4[1])
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x13 && *(i_1 + 4) == 0x10 && edx_5.b != 0)
                                sub_505b50(&arg2[0x290], *arg4, arg4[1])
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x17 && *(i_1 + 4) == 1 && edx_5.b != 0)
                                sub_505b50(&arg2[0x290], *arg4, arg4[1])
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x16 && *(i_1 + 4) == 1)
                                arg2[0x2e2] = 0
                                goto label_4bbfb8
                            
                            if (eax_13 == 0x14 && *(i_1 + 4) == 0x1000)
                                arg2[0x2e2] = 0
                                goto label_4bbfb8
                            
                            if (eax_13 != 0x12)
                                goto label_4bbfb8
                            
                            if (*(i_1 + 4) != 0x10)
                                goto label_4bbfb8
                            
                            arg2[0x2e2] = 0
                            goto label_4bbfb8
                
                float var_128_6 = ebx_2
                arg2[0x2e2] = 1
                int32_t eax_23
                int80_t st0_1
                st0_1, eax_23, ecx_1 = sub_505940(&arg2[0x290], edx_5)
                x87_r6_2 = float.t(0)
                *(arg2 + 0x294) = eax_23
                *(arg2 + 0x29c) = eax_23
                goto label_4bbfb2
        
        if (arg2[0x2e2] != 0)
            sub_505b80(&arg2[0x290], *arg4, arg4[1])
    
    int32_t eax_9 = sub_4bb6f0(arg2, arg4)
    var_68 = eax_9
    *(arg2 + 0x2ec) = eax_9
    char* i_3 = nullptr
    char* ecx_3
    
    while (true)
        char* i_4
        
        if (i_3 != 0)
            i_4 = *(i_3 + 0x20)
        else
            i_4 = *data_27e7fdc
        
        if (i_4 == 0)
            break
        
        while (true)
            i_1 = i_4
            i_4 = *(i_4 + 0x20)
            
            if (i_1[0x1c] == 0)
                i_3 = i_1
                
                if (*i_1 == 1 && *(i_1 + 4) == 0xd)
                    char* eax_33 = *(arg2 + 0x290)
                    
                    if (eax_33 != 0 && *eax_33 != 0 && *(sub_4c4060(arg2 + 0x290) + 8) s>= 1)
                        char* const eax_36 = *(arg2 + 0x290)
                        
                        if (eax_36 == 0)
                            eax_36 = &data_83f3d3
                        
                        _strncpy(data_27e7a54, eax_36, 0x10)
                        *(data_27e7a54 + 0xf) = 0
                    
                    *(arg2 + 0x29c) = *(arg2 + 0x294)
                    *(arg2 + 0x2e1) = 0
                
                char eax_39
                eax_39, ecx_3 = sub_4c3430(i_1)
                
                if (eax_39 == 0)
                    break
                
                int32_t eax_40 = var_68
                
                if (eax_40 == 2)
                    if (arg2[0x2e1] != 0)
                        break
                    
                    arg2[0x2e1] = 1
                    break
                
                if (eax_40 == 4)
                    break
                
                if (var_68 == 3)
                    break
                
                if (arg2[0x2e1] == 0)
                    break
                
                sub_4ba480(arg2)
                break
            
            if (i_4 == 0)
                goto label_4bc38f
    
    label_4bc38f:
    char* eax_31 = *(arg2 + 0x290)
    int32_t eax_32
    
    if (eax_31 == 0 || *eax_31 == 0)
        eax_32 = 0
    else
        eax_32 = *(sub_4c4060(arg2 + 0x290) + 8)
    
    ecx_3.b = eax_32 s< 1
    char* const eax_43 = nullptr
    arg2[0x19f] = ecx_3.b
    void* ebx_6 = &arg2[0x1a5]
    var_64 = nullptr
    void* var_60_1 = ebx_6
    
    while (true)
        if (eax_43 == 4 || eax_43 == 5)
            *(ebx_6 - 6) = sub_4bbe70()
        
        void var_114
        int32_t eax_45 = sub_40a930(&var_114)
        top -= 1
        unimplemented  {call 0x40a930}
        int32_t eax_46 = *(ebx_6 - 0xd)
        bool cond:4_1 = *(data_27e7bbc + 0x18) != 0
        __builtin_memcpy(&var_54, eax_45, 0x40)
        
        if (cond:4_1)
            int32_t* eax_47 = sub_4f5350(eax_46, &var_54, *(ebx_6 - 0x11), &var_54)
            int32_t edx_15 = eax_47[1]
            float var_7c = *eax_47
            int32_t var_78_1 = edx_15
            int32_t var_74_2 = eax_47[2]
            int32_t var_70_2 = eax_47[3]
            eax_46 = sub_4057a0(&var_7c, arg4)
            ebx_6 = var_60_1
        else
            eax_46.b = 0
        
        char* ecx_18
        ecx_18.b = arg5
        int32_t* edx_18
        edx_18.b = eax_46.b
        int32_t eax_49 =
            sub_505640(*(ebx_6 - 0xd), edx_18.b, ecx_18.b, ebx_6 - 1, *(ebx_6 - 0x11), ebx_6 - 9)
        
        if (*ebx_6 != 0)
            char ecx_19 = *(ebx_6 + 2)
            
            if (ecx_19 == 0 || *(ebx_6 + 3) != 0 || ecx_19 == 0)
                *arg3 = 0xa
        
        int32_t result
        
        if (eax_49 == 1)
            char* const edx_19 = var_64
            char* const var_128_16 = edx_19
            result = sub_4bb470(arg2, edx_19)
        
        if (eax_49 == 1 && result != 0)
            goto label_4bc57a
        
        void* eax_52 = &var_64[1]
        ebx_6 += 0x1c
        var_64 = eax_52
        var_60_1 = ebx_6
        
        if (eax_52 s>= 9)
            result = 0
        label_4bc57a:
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_5a6aba(eax_2 ^ &__saved_ebp)
            return result
        
        eax_43 = var_64
}

// 函数名称: sub_523ad0
// 虚拟地址: 0x523ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_523ad0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f019
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_74 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t ecx = arg2[1]
    int32_t eax_3 = *arg2
    int32_t edx = arg2[2]
    int32_t eax_4 = arg2[3]
    int32_t var_20
    sub_523030(&var_20, arg2)
    int32_t var_8_1 = 1
    int32_t eax_5 = var_20
    int32_t* ebx_1
    int32_t var_1c
    char* var_18
    bool cond:1_1
    
    if (eax_5 == 2 || eax_5 == 3 || eax_5 == 4)
        void var_50
        sub_5224f0(sub_522420(arg2), U",", &var_50, arg2)
        char* var_48
        char* eax_14 = var_48
        
        if (eax_14 != 0 && *eax_14 != 0)
            void* eax_16 = sub_4c4060(&var_48)
            int32_t temp0_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_5 = *(eax_16 + 0xc) + 0x10
                sub_4f4430(eax_16, sub_4f4380(esi_5), esi_5)
        
        sub_522420(arg2)
        int32_t var_2c
        sub_523030(&var_2c, arg2)
        var_8_1.b = 2
        int32_t eax_20 = var_2c
        int32_t var_28
        char* var_24
        bool cond:0_1
        
        if (eax_20 == 2 || eax_20 == 3 || eax_20 == 4)
            sub_5224f0(sub_522420(arg2), U",", &var_50, arg2)
            char* eax_30 = var_48
            
            if (eax_30 != 0 && *eax_30 != 0)
                void* eax_32 = sub_4c4060(&var_48)
                int32_t temp1_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_10 = *(eax_32 + 0xc) + 0x10
                    sub_4f4430(eax_32, sub_4f4380(esi_10), esi_10)
            
            sub_522420(arg2)
            char* ecx_13 = arg2[1]
            int32_t* eax_35
            eax_35.b = *ecx_13
            
            if (eax_35.b != 0 && eax_35.b != 0x5d)
                int32_t var_38
                sub_523030(&var_38, arg2)
                var_8_1.b = 3
                int32_t eax_39 = var_38
                int32_t* esi_11
                
                if (eax_39 == 2 || eax_39 == 3 || eax_39 == 4)
                    sub_5224f0(sub_522420(arg2), U",", &var_50, arg2)
                    sub_5224b0(&var_50)
                    int32_t ecx_20 = sub_522420(arg2)
                    int32_t* eax_43
                    eax_43.b = *arg2[1]
                    int32_t var_34
                    
                    if (eax_43.b == 0 || eax_43.b == 0x5d)
                        void* eax_44 = sub_5218c0(ecx_20, *arg2)
                        esi_11 = arg1
                        *eax_44 = 7
                        *(eax_44 + 0xc) = var_1c
                        *(eax_44 + 0x10) = var_28
                        *(eax_44 + 0x14) = var_34
                        sub_5225d0(esi_11, var_28, eax_44)
                        int32_t var_14_5 = 1
                    else
                        void var_44
                        sub_523030(&var_44, arg2)
                        var_8_1.b = 4
                        
                        if (sub_522670(&var_44) != 0)
                            sub_5224f0(sub_522420(arg2), U",", &var_50, arg2)
                            sub_5224b0(&var_50)
                            sub_522420(arg2)
                            char eax_52
                            int32_t ecx_27
                            eax_52, ecx_27 = sub_523ab0(arg2)
                            
                            if (eax_52 == 0)
                                *arg2 = eax_3
                                arg2[1] = ecx
                                arg2[2] = edx
                                arg2[3] = eax_4
                                esi_11 = arg1
                                sub_522590(esi_11, &data_be1ecc)
                            else
                                void* eax_53 = sub_5218c0(ecx_27, *arg2)
                                esi_11 = arg1
                                *eax_53 = 8
                                *(eax_53 + 0xc) = var_1c
                                *(eax_53 + 0x10) = var_28
                                *(eax_53 + 0x14) = var_34
                                int32_t var_40
                                *(eax_53 + 0x18) = var_40
                                sub_5225d0(esi_11, var_34, eax_53)
                        else
                            *arg2 = eax_3
                            arg2[1] = ecx
                            arg2[2] = edx
                            arg2[3] = eax_4
                            esi_11 = arg1
                            sub_522590(esi_11, &var_44)
                        
                        int32_t var_14_6 = 1
                        var_8_1.b = 3
                        sub_5224b0(&var_44)
                else
                    esi_11 = arg1
                    *arg2 = eax_3
                    arg2[1] = ecx
                    arg2[2] = edx
                    arg2[3] = eax_4
                    sub_522590(esi_11, &var_38)
                    int32_t var_14_4 = 1
                
                var_8_1.b = 2
                sub_5224b0(&var_38)
                var_8_1.b = 1
                sub_5224b0(&var_2c)
                var_8_1.b = 0
                sub_5224b0(&var_20)
                fsbase->NtTib.ExceptionList = ExceptionList
                return esi_11
            
            void* eax_36 = sub_5218c0(ecx_13, *arg2)
            ebx_1 = arg1
            *eax_36 = 6
            *(eax_36 + 0xc) = var_1c
            *(eax_36 + 0x10) = var_28
            sub_5225d0(ebx_1, var_1c, eax_36)
            var_8_1.b = 1
            char* eax_38 = var_24
            int32_t var_14_3 = 1
            
            if (eax_38 != 0)
                cond:0_1 = *eax_38 == 0
                goto label_523c7f
        else
            *arg2 = eax_3
            arg2[1] = ecx
            arg2[2] = edx
            char* ecx_9 = var_24
            arg2[3] = eax_4
            ebx_1 = arg1
            *ebx_1 = eax_20
            ebx_1[1] = var_28
            ebx_1[2] = ecx_9
            
            if (ecx_9 != 0 && *ecx_9 != 0)
                void* eax_23 = sub_4c4060(&ebx_1[2])
                *(eax_23 + 4) += 1
                ecx_9 = var_24
            
            int32_t var_14_2 = 1
            var_8_1.b = 1
            
            if (ecx_9 != 0)
                cond:0_1 = *ecx_9 == 0
            label_523c7f:
                
                if (not(cond:0_1))
                    void* eax_25 = sub_4c4060(&var_24)
                    int32_t temp3_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t esi_7 = *(eax_25 + 0xc) + 0x10
                        sub_4f4430(eax_25, sub_4f4380(esi_7), esi_7)
        var_8_1.b = 0
        char* eax_28 = var_18
        
        if (eax_28 != 0)
            cond:1_1 = *eax_28 == 0
            goto label_523b75
    else
        ebx_1 = arg1
        char* ecx_1 = var_18
        *ebx_1 = eax_5
        ebx_1[1] = var_1c
        ebx_1[2] = ecx_1
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            void* eax_7 = sub_4c4060(&ebx_1[2])
            *(eax_7 + 4) += 1
            ecx_1 = var_18
        
        int32_t var_14_1 = 1
        var_8_1.b = 0
        
        if (ecx_1 != 0)
            cond:1_1 = *ecx_1 == 0
        label_523b75:
            
            if (not(cond:1_1))
                void* eax_9 = sub_4c4060(&var_18)
                int32_t temp2_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_2 = *(eax_9 + 0xc) + 0x10
                    sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx_1
}

// 函数名称: sub_523030
// 虚拟地址: 0x523030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_523030(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_84 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_44
    int32_t edx = sub_522e90(&var_44, arg2)
    int32_t var_8_1 = 1
    int32_t eax_3 = var_44
    char* var_3c
    char* var_30
    int32_t var_38
    int32_t* esi_5
    bool cond:0_1
    
    if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
        sub_522b90(eax_3, edx, arg2, &var_38)
        var_8_1.b = 2
        int32_t eax_4 = var_38
        
        if (eax_4 == 2 || eax_4 == 3 || eax_4 == 4)
            esi_5 = arg1
            char* ecx_3 = var_30
            *esi_5 = eax_4
            int32_t var_34
            esi_5[1] = var_34
            esi_5[2] = ecx_3
            
            if (ecx_3 != 0 && *ecx_3 != 0)
                void* eax_18 = sub_4c4060(&esi_5[2])
                *(eax_18 + 4) += 1
                ecx_3 = var_30
            
            int32_t var_14_2 = 1
            var_8_1.b = 1
            
            if (ecx_3 != 0)
                cond:0_1 = *ecx_3 == 0
            label_523178:
                
                if (cond:0_1)
                    goto label_5231a1
                
                void* eax_20 = sub_4c4060(&var_30)
                int32_t temp1_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_7 = *(eax_20 + 0xc) + 0x10
                    sub_4f4430(eax_20, sub_4f4380(esi_7), esi_7)
                    esi_5 = arg1
                
                goto label_5231a1
            
        label_5231a1:
            var_8_1.b = 0
            char* eax_23 = var_3c
            
            if (eax_23 != 0 && *eax_23 != 0)
                void* eax_25 = sub_4c4060(&var_3c)
                int32_t temp0_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_9 = *(eax_25 + 0xc) + 0x10
                    sub_4f4430(eax_25, sub_4f4380(esi_9), esi_9)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi_5
        
        sub_522830(arg1)
        int32_t var_14_1 = 1
    else
        int32_t ecx_7 = sub_522d90(&var_38, edx, arg2, &var_38)
        var_8_1.b = 3
        int32_t eax_30 = var_38
        
        if (eax_30 != 2 && eax_30 != 3 && eax_30 != 4)
            esi_5 = arg1
            *esi_5 = data_be1ecc
            esi_5[1] = data_be1ed0
            esi_5[2] = data_be1ed4
            void* ecx_10 = data_be1ed4
            
            if (ecx_10 != 0 && *ecx_10 != 0)
                void* eax_32 = sub_4c4060(&esi_5[2])
                *(eax_32 + 4) += 1
            
            var_8_1.b = 1
            char* eax_33 = var_30
            int32_t var_14_3 = 1
            
            if (eax_33 == 0)
                goto label_5231a1
            
            cond:0_1 = *eax_33 == 0
            goto label_523178
        
        int32_t var_5c
        int32_t edx_3 = sub_5224f0(ecx_7, &data_88bac8, &var_5c, arg2)
        var_8_1.b = 4
        int32_t eax_34 = var_5c
        
        if (eax_34 == 2 || eax_34 == 3 || eax_34 == 4)
            int32_t var_50
            int32_t ecx_13
            void* edx_5
            ecx_13, edx_5 = sub_522d90(&var_50, edx_3, arg2, &var_50)
            var_8_1.b = 5
            int32_t eax_42 = var_50
            
            if (eax_42 == 2 || eax_42 == 3 || eax_42 == 4)
                int32_t var_74
                int32_t edx_6 = sub_5224f0(ecx_13, U"e", &var_74, arg2)
                var_8_1.b = 6
                int32_t eax_43 = var_74
                void var_48
                void var_2c
                void var_20
                void var_1c
                
                if (eax_43 == 2 || eax_43 == 3 || eax_43 == 4)
                    void var_68
                    int32_t edx_7 = sub_522d90(eax_43, edx_6, arg2, &var_68)
                    var_8_1.b = 7
                    
                    if (sub_522670(&var_68) == 0)
                        esi_5 = arg1
                        sub_522830(esi_5)
                        int32_t var_14_6 = 1
                    else
                        var_8_1.b = 8
                        void var_18
                        sub_4c4330(&data_88bac8, sub_4c4330(U"e", edx_7, &var_1c), &var_18)
                        var_8_1.b = 9
                        var_8_1.b = 0xa
                        var_8_1.b = 0xb
                        var_8_1.b = 0xc
                        void var_60
                        void var_28
                        void var_24
                        sub_4c48a0(
                            sub_4c48a0(
                                sub_4c48a0(sub_4c48a0(&var_30, &var_2c, &var_18), &var_28, &var_48), 
                                &var_24, &var_1c), 
                            &var_20, &var_60)
                        var_8_1.b = 0xe
                        sub_4c43d0(&var_24)
                        var_8_1.b = 0xf
                        sub_4c43d0(&var_28)
                        var_8_1.b = 0x10
                        sub_4c43d0(&var_2c)
                        var_8_1.b = 0x11
                        sub_4c43d0(&var_18)
                        var_8_1.b = 0x12
                        sub_4c43d0(&var_1c)
                        void* edx_9 = *arg2
                        esi_5 = arg1
                        void* var_88_15 = edx_9
                        sub_522d40(&var_20, esi_5, edx_9)
                        int32_t var_14_5 = 1
                        var_8_1.b = 7
                        sub_4c43d0(&var_20)
                    
                    var_8_1.b = 6
                    sub_5224b0(&var_68)
                    var_8_1.b = 5
                    sub_5224b0(&var_74)
                else
                    sub_4c4330(&data_88bac8, edx_6, &var_20)
                    var_8_1.b = 0x13
                    var_8_1.b = 0x14
                    sub_4c48a0(sub_4c48a0(&var_30, &var_2c, &var_20), &var_1c, &var_48)
                    var_8_1.b = 0x16
                    sub_4c43d0(&var_2c)
                    var_8_1.b = 0x17
                    void* edx_10 = sub_4c43d0(&var_20)
                    esi_5 = arg1
                    int32_t var_88_18 = *arg2
                    sub_522d40(&var_1c, esi_5, edx_10)
                    int32_t var_14_7 = 1
                    var_8_1.b = 6
                    sub_4c43d0(&var_1c)
                    var_8_1.b = 5
                    sub_5224b0(&var_74)
            else
                esi_5 = arg1
                int32_t var_88_19 = *arg2
                sub_522d40(&var_30, esi_5, edx_5)
                int32_t var_14_8 = 1
            
            var_8_1.b = 4
            sub_5224b0(&var_50)
            var_8_1.b = 3
            sub_5224b0(&var_5c)
            var_8_1.b = 1
            sub_5224b0(&var_38)
            var_8_1.b = 0
            sub_5224b0(&var_44)
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi_5
        
        void* edx_4 = *arg2
        void* var_88_7 = edx_4
        sub_522cf0(&var_30, arg1, edx_4)
        var_8_1.b = 3
        char* var_54
        char* eax_36 = var_54
        int32_t var_14_4 = 1
        
        if (eax_36 != 0 && *eax_36 != 0)
            void* eax_38 = sub_4c4060(&var_54)
            int32_t temp4_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_13 = *(eax_38 + 0xc) + 0x10
                sub_4f4430(eax_38, sub_4f4380(esi_13), esi_13)
    var_8_1.b = 1
    char* eax_6 = var_30
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_30)
        int32_t temp2_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    var_8_1.b = 0
    char* eax_11 = var_3c
    
    if (eax_11 != 0 && *eax_11 != 0)
        void* eax_13 = sub_4c4060(&var_3c)
        int32_t temp3_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_4 = *(eax_13 + 0xc) + 0x10
            sub_4f4430(eax_13, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}

// 函数名称: sub_523f90
// 虚拟地址: 0x523f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_523f90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f431
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_20
    int32_t edx_1 = sub_522840(&var_20, sub_522420(arg2), arg2, &var_20)
    int32_t var_8_1 = 1
    int32_t eax_5 = var_20
    int32_t var_1c
    char* var_18
    
    if (eax_5 != 2 && eax_5 != 3 && eax_5 != 4)
        arg1[1] = var_1c
        char* ecx_2 = var_18
        *arg1 = eax_5
        arg1[2] = ecx_2
        
        if (ecx_2 != 0 && *ecx_2 != 0)
            void* eax_7 = sub_4c4060(&arg1[2])
            *(eax_7 + 4) += 1
            ecx_2 = var_18
        
        int32_t var_14_1 = 1
        var_8_1.b = 0
        
        if (ecx_2 != 0 && *ecx_2 != 0)
            void* eax_9 = sub_4c4060(&var_18)
            int32_t temp2_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_2 = *(eax_9 + 0xc) + 0x10
                sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    int32_t var_38
    sub_523f30(arg2, edx_1, &var_38)
    var_8_1.b = 2
    int32_t eax_14 = var_38
    char* var_30
    
    if (eax_14 != 2 && eax_14 != 3 && eax_14 != 4)
        int32_t* esi_11 = arg1
        int32_t eax_37 = var_20
        esi_11[1] = var_1c
        char* ecx_17 = var_18
        *esi_11 = eax_37
        esi_11[2] = ecx_17
        
        if (ecx_17 != 0 && *ecx_17 != 0)
            void* eax_39 = sub_4c4060(&esi_11[2])
            *(eax_39 + 4) += 1
            ecx_17 = var_18
        
        var_8_1.b = 1
        char* eax_40 = var_30
        int32_t var_14_4 = 1
        
        if (eax_40 != 0 && *eax_40 != 0)
            void* eax_42 = sub_4c4060(&var_30)
            int32_t temp4_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_13 = *(eax_42 + 0xc) + 0x10
                sub_4f4430(eax_42, sub_4f4380(esi_13), esi_13)
                esi_11 = arg1
            
            ecx_17 = var_18
        
        var_8_1.b = 0
        
        if (ecx_17 != 0 && *ecx_17 != 0)
            void* eax_46 = sub_4c4060(&var_18)
            int32_t temp5_1 = *(eax_46 + 4)
            *(eax_46 + 4) -= 1
            
            if (temp5_1 == 1)
                int32_t esi_15 = *(eax_46 + 0xc) + 0x10
                sub_4f4430(eax_46, sub_4f4380(esi_15), esi_15)
                esi_11 = arg1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return esi_11
    
    int32_t var_2c
    int32_t ecx_7 = sub_523f60(arg2, &var_2c)
    var_8_1.b = 3
    int32_t eax_16 = var_2c
    int32_t var_28
    char* var_24
    bool cond:0_1
    
    if (eax_16 == 2 || eax_16 == 3 || eax_16 == 4)
        void* eax_34 = sub_5218c0(ecx_7, *arg2)
        *eax_34 = 0xa
        *(eax_34 + 0xc) = var_1c
        *(eax_34 + 0x10) = var_28
        sub_5225d0(arg1, var_28, eax_34)
        var_8_1.b = 2
        char* eax_36 = var_24
        int32_t var_14_3 = 1
        
        if (eax_36 != 0)
            cond:0_1 = *eax_36 == 0
        label_5240eb:
            
            if (not(cond:0_1))
                void* eax_20 = sub_4c4060(&var_24)
                int32_t temp1_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_6 = *(eax_20 + 0xc) + 0x10
                    sub_4f4430(eax_20, sub_4f4380(esi_6), esi_6)
    else
        char* esi_4 = var_24
        *arg1 = eax_16
        arg1[1] = var_28
        arg1[2] = esi_4
        
        if (esi_4 != 0 && *esi_4 != 0)
            void* eax_18 = sub_4c4060(&arg1[2])
            *(eax_18 + 4) += 1
        
        int32_t var_14_2 = 1
        var_8_1.b = 2
        
        if (esi_4 != 0)
            cond:0_1 = *esi_4 == 0
            goto label_5240eb
    var_8_1.b = 1
    char* eax_23 = var_30
    
    if (eax_23 != 0 && *eax_23 != 0)
        void* eax_25 = sub_4c4060(&var_30)
        int32_t temp0_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_8 = *(eax_25 + 0xc) + 0x10
            sub_4f4430(eax_25, sub_4f4380(esi_8), esi_8)
    
    var_8_1.b = 0
    char* eax_28 = var_18
    
    if (eax_28 != 0 && *eax_28 != 0)
        void* eax_30 = sub_4c4060(&var_18)
        int32_t temp3_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_10 = *(eax_30 + 0xc) + 0x10
            sub_4f4430(eax_30, sub_4f4380(esi_10), esi_10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}

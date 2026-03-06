// 函数名称: sub_5242f0
// 虚拟地址: 0x5242f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5242f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d3ca
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_60 = 0
    char* const var_4c = &data_83f3d3
    int32_t* (__fastcall* var_8c)(void* arg1) = sub_5224b0
    int32_t var_8_1 = 1
    void var_48
    sub_5a7116(&var_48, 0xc, 4, sub_5225f0)
    void* esi = &var_48
    int32_t var_8_2 = 2
    int32_t var_68 = 0
    void* var_64 = &var_48
    int32_t edi = 0
    int32_t* result
    
    while (true)
        void var_78
        int32_t* eax_5 = (&data_88c888)[edi](&var_78, arg3, eax_2)
        var_8_2.b = 3
        *esi = *eax_5
        *(esi + 4) = eax_5[1]
        sub_4c4510(&eax_5[2])
        var_8_2.b = 2
        char* var_70
        char* eax_7 = var_70
        
        if (eax_7 != 0 && *eax_7 != 0)
            void* eax_9 = sub_4c4060(&var_70)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_9 + 0xc) + 0x10
                sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
                edi = var_68
                esi = var_64
        
        int32_t eax_12 = *esi
        
        if (eax_12 != 2 && eax_12 != 3 && eax_12 != 4)
            int32_t var_58_1 = 1
            int32_t ecx_7 = (&__saved_ebp)[edi * 3 - 0x11]
            int32_t edx_3 = (&__saved_ebp)[edi * 3 - 0x10]
            sub_4c4510(&(&__saved_ebp)[edi * 3 - 0xf])
            int32_t* result_2 = arg4
            *result_2 = var_58_1
            result_2[1] = ecx_7
            char* const ecx_9 = var_4c
            result_2[2] = edx_3
            result_2[3] = ecx_9
            
            if (ecx_9 != 0 && *ecx_9 != 0)
                void* eax_26 = sub_4c4060(&result_2[3])
                *(eax_26 + 4) += 1
            
            int32_t* (__fastcall* var_8c_7)(void* arg1) = sub_5224b0
            var_8_2.b = 4
            sub_5a75a6(&result_2[4], &var_48, 0xc, 4, sub_522590)
            int32_t var_60_2 = 1
            int32_t var_8_4 = 5
            sub_5a71d9(&var_48, 0xc, 4, sub_5224b0)
            var_8_4.b = 0
            char* const eax_27 = var_4c
            
            if (eax_27 != 0 && *eax_27 != 0)
                void* eax_29 = sub_4c4060(&var_4c)
                int32_t temp2_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_6 = *(eax_29 + 0xc) + 0x10
                    sub_4f4430(eax_29, sub_4f4380(esi_6), esi_6)
                    result_2 = arg4
            
            result = result_2
            break
        
        edi += 1
        esi += 0xc
        var_68 = edi
        var_64 = esi
        
        if (edi s>= 3)
            int32_t* result_1 = arg4
            int32_t var_58
            *result_1 = var_58
            int32_t var_54
            result_1[1] = var_54
            char* const ecx_2 = var_4c
            int32_t var_50
            result_1[2] = var_50
            result_1[3] = ecx_2
            
            if (ecx_2 != 0 && *ecx_2 != 0)
                void* eax_15 = sub_4c4060(&result_1[3])
                *(eax_15 + 4) += 1
            
            int32_t* (__fastcall* var_8c_4)(void* arg1) = sub_5224b0
            var_8_2.b = 6
            sub_5a75a6(&result_1[4], &var_48, 0xc, 4, sub_522590)
            int32_t var_60_1 = 1
            int32_t var_8_3 = 7
            sub_5a71d9(&var_48, 0xc, 4, sub_5224b0)
            var_8_3.b = 0
            char* const eax_16 = var_4c
            
            if (eax_16 != 0 && *eax_16 != 0)
                void* eax_18 = sub_4c4060(&var_4c)
                int32_t temp1_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(eax_18 + 0xc) + 0x10
                    sub_4f4430(eax_18, sub_4f4380(esi_4), esi_4)
                    result_1 = arg4
            
            result = result_1
            break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

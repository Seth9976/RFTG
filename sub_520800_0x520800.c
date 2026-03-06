// 函数名称: sub_520800
// 虚拟地址: 0x520800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_520800(int32_t arg1, char arg2, char* arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f230
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const eax_3 = *(arg3 + 0x20)
    
    if (eax_3 == 0)
        eax_3 = &data_83f3d3
    
    char* const ecx = &data_83f3d3
    struct _EXCEPTION_REGISTRATION_RECORD** result
    
    while (true)
        arg2 = *eax_3
        char temp0_1 = *ecx
        bool c_1 = arg2 u< temp0_1
        
        if (arg2 == temp0_1)
            if (arg2 == 0)
                result = nullptr
                break
            
            arg2 = eax_3[1]
            char temp3_1 = ecx[1]
            c_1 = arg2 u< temp3_1
            
            if (arg2 == temp3_1)
                eax_3 = &eax_3[2]
                ecx = &ecx[2]
                
                if (arg2 != 0)
                    continue
                
                result = nullptr
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        result = sbb.d(sbb.d(eax_3, eax_3, c_1), 0xffffffff, c_2)
        break
    
    if (result != 0)
        char* var_34 = arg3
        int32_t ebx
        ebx.b = arg4 == 0
        char* result_4
        result, result_4 = sub_5204e0(var_34)
        
        if (result.b != 0 || ebx.b == 0)
        label_520896:
            
            if (data_8bc5ff != 0)
                var_34 = *(arg3 + 4)
                char* result_3 = result_4
                char* result_5 = *(arg3 + 0x20)
                int32_t* var_1c_1 = &result_3
                result_3 = result_5
                
                if (result_5 != 0 && *result_5 != 0)
                    void* eax_7 = sub_4c4060(&result_3)
                    *(eax_7 + 4) += 1
                
                struct _EXCEPTION_REGISTRATION_RECORD** result_1
                sub_51f6d0(&result_1, result_3)
                int32_t var_8_1 = 0
                char* ecx_1 = *(arg3 + 0x20)
                char** var_1c_2 = &var_34
                var_34 = ecx_1
                
                if (ecx_1 != 0 && *ecx_1 != 0)
                    void* eax_9 = sub_4c4060(&var_34)
                    *(eax_9 + 4) += 1
                
                char* var_14
                result_3 = &var_14
                sub_51fd90(result_3)
                var_8_1.b = 1
                var_34 = var_14
                char* ecx_3 = var_14
                char** var_1c_3 = &var_34
                
                if (ecx_3 != 0 && *ecx_3 != 0)
                    void* eax_11 = sub_4c4060(&var_34)
                    *(eax_11 + 4) += 1
                
                sub_51c9c0()
                char* ecx_4 = *(arg3 + 0x20)
                
                if (ecx_4 == 0)
                    ecx_4 = &data_83f3d3
                
                struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
                
                if (result_2 == 0)
                    result_2 = &data_83f3d3
                
                char* edx = *(arg3 + 4)
                var_34 = edx
                result_3 = result_2
                char** var_1c_4 = &var_34
                sub_4c4330(&data_83f3d3, sub_4e6d50(result_2, edx, ecx_4, result_3, var_34), &var_34)
                sub_51c9c0()
                var_8_1.b = 0
                char* eax_12 = var_14
                
                if (eax_12 != 0 && *eax_12 != 0)
                    void* eax_14 = sub_4c4060(&var_14)
                    int32_t temp4_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        char* esi_2 = *(eax_14 + 0xc) + 0x10
                        int32_t* eax_15 = sub_4f4380(esi_2)
                        var_34 = esi_2
                        sub_4f4430(eax_14, eax_15, var_34)
                
                int32_t var_8_2 = 0xffffffff
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_4c4060(&result_1)
                    int32_t temp5_1 = result[1]
                    result[1] -= 1
                    
                    if (temp5_1 == 1)
                        char* esi_4 = &result[3][2]
                        int32_t* eax_18 = sub_4f4380(esi_4)
                        var_34 = esi_4
                        result = sub_4f4430(result, eax_18, var_34)
        else
            var_34 = arg3
            result, result_4 = sub_5209f0()
            
            if (result.b == 0)
                goto label_520896
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

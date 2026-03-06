// 函数名称: sub_408f10
// 虚拟地址: 0x408f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_408f10()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f4e0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_27e7a5c != 0)
        char* var_38 = *(data_27e7a54 + 0x208)
        char const* const result_2 = "gamesettingsstats_%d.bin"
        char* result_1
        char* result_5 = sub_4c4a50(&result_1, result_2)
        var_38 = nullptr
        result_2 = result_5
        int32_t var_8_1 = 0
        result_2 = result_1
        char* result_3 = result_1
        char const* const* var_18_1 = &result_2
        
        if (result_3 != 0 && *result_3 != 0)
            void* eax_5 = sub_4c4060(&result_2)
            *(eax_5 + 4) += 1
        
        char* result_4
        sub_500300(&result_4, result_2)
        var_8_1.b = 1
        result_2 = result_4
        char* var_1c
        char* edx_1 = var_1c
        var_38 = edx_1
        char* ecx_4 = var_1c
        char const* const* var_18_2 = &result_2
        
        if (ecx_4 != 0 && *ecx_4 != 0)
            void* eax_7 = sub_4c4060(&var_38)
            *(eax_7 + 4) += 1
        
        int32_t* eax_8 = data_27e7a5c
        sub_4cd7b0(eax_8, edx_1, data_307ccc4, eax_8)
        var_8_1.b = 0
        char* eax_9 = var_1c
        
        if (eax_9 != 0 && *eax_9 != 0)
            void* eax_11 = sub_4c4060(&var_1c)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                char* esi_2 = *(eax_11 + 0xc) + 0x10
                int32_t* eax_12 = sub_4f4380(esi_2)
                var_38 = esi_2
                sub_4f4430(eax_11, eax_12, var_38)
        
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                char* esi_4 = &result[3][2]
                int32_t* eax_15 = sub_4f4380(esi_4)
                var_38 = esi_4
                result = sub_4f4430(result, eax_15, var_38)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

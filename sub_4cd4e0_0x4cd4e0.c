// 函数名称: sub_4cd4e0
// 虚拟地址: 0x4cd4e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t** __fastcallsub_4cd4e0(int32_t*** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68fb78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const eax_3 = *(arg2 + 0xc)
    
    if (eax_3 == 0)
        eax_3 = &data_83f3d3
    
    char var_38 = 0x2e
    char* const var_3c = eax_3
    char* eax_4
    char* ecx
    eax_4, ecx = sub_5a8f10(var_3c, var_38)
    uint32_t eax_5
    
    if (eax_4 != 0)
        char const* const var_38_1 = ".zip"
        var_3c = eax_4
        eax_5, ecx = sub_5a9697(var_3c, var_38_1)
    
    int32_t** result
    
    if (eax_4 == 0 || eax_5 != 0)
        int32_t var_38_3 = 2
        var_3c = ecx
        char* ecx_4 = *(arg2 + 0xc)
        char* const* var_20 = &var_3c
        var_3c = ecx_4
        
        if (ecx_4 != 0 && *ecx_4 != 0)
            void* eax_8 = sub_4c4060(&var_3c)
            *(eax_8 + 4) += 1
        
        int32_t edx_1 = sub_500300(&var_20, var_3c)
        int32_t var_c_1 = 0
        __builtin_memset(arg1, 0, 0x1c)
        int32_t var_38_4 = 0
        var_3c = &var_20
        int32_t var_c_2 = 0xffffffff
        bool cond:0_1 = sub_500130(0, edx_1, &arg1[5], var_3c) != 0
        int32_t** result_1
        result = result_1
        
        if (not(cond:0_1))
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp1_1 = result[1]
                result[1] -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_2 = &result[3][4]
                    sub_4f4430(result, sub_4f4380(esi_2), esi_2)
            
            result.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                int32_t esi_4 = &result[3][4]
                sub_4f4430(result, sub_4f4380(esi_4), esi_4)
    else
        char* const eax_6 = *(arg2 + 0x20)
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        uint8_t* edi_1 = *(arg2 + 0xc)
        uint8_t* ecx_1 = &data_83f3d3
        
        if (edi_1 != 0)
            ecx_1 = edi_1
        
        result = sub_4cd170(eax_6, arg1, ecx_1, eax_6)
        
        if (result.b == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

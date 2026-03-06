// 函数名称: sub_4cd7b0
// 虚拟地址: 0x4cd7b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4cd7b0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f458
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t eax_3 = *(arg3 + 0xc)
    
    if (eax_3 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_34 = 0
    int32_t var_30 = 0
    int32_t var_24 = 0
    char var_28 = 1
    sub_4ce080(arg4, arg3, 0, &var_34)
    int128_t* eax_6 = sub_4cce80(eax_3)
    int32_t* var_5c = arg4
    int32_t var_4c_1 = 1
    int32_t* var_20
    void arg_8
    char* result_1
    void* result
    
    if (sub_500130(&arg_8, sub_4ce2f0(eax_3, eax_6, arg4), &var_20, &arg_8) != 0)
        int32_t* ebx_2 = var_20
        void* var_1c
        int32_t eax_13 = sub_5a9831(ebx_2, var_1c, FILE_BEGIN)
        uint32_t eax_14
        
        if (eax_13 == 0)
            eax_14 = sub_5a9094(eax_6, eax_3, 1, ebx_2)
        
        char var_15_1
        
        if (eax_13 == 0 && eax_14 == 1)
            var_15_1 = 1
        else
            var_15_1 = 0
        
        sub_5a8c61(ebx_2)
        
        if (eax_6 != 0)
            _aligned_free_base(eax_6)
        
        int32_t var_8_3 = 0xffffffff
        result = result_1
        
        if (var_15_1 != 0)
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(result + 0xc) + 0x10
                    sub_4f4430(result, sub_4f4380(esi_4), esi_4)
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    else
        char* const result_2 = result_1
        
        if (result_2 == 0)
            result_2 = &data_83f3d3
        
        char* const result_3 = result_2
        sub_4c5680("failed to open %d")
        int32_t var_8_2 = 0xffffffff
        result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

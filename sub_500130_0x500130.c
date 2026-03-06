// 函数名称: sub_500130
// 虚拟地址: 0x500130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_500130(int32_t arg1, int32_t arg2, int32_t** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e508
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t** var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    char* result_2 = result_1
    void* const ebx
    
    if (result_2 == 0)
        ebx = &data_87b880
    else
        if (result_2 != 1)
            sub_4c5870("Halt", &data_83f3d3, "xPlatformGeneric.cpp", 0x69, "HalOpen")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ebx = &data_87b8d0
    
    sub_500000(arg4, &result_1)
    char* const result_3 = result_1
    
    if (result_3 == 0)
        result_3 = &data_83f3d3
    
    int32_t* eax_7 = sub_5a898b(result_3, ebx)
    *arg3 = eax_7
    int32_t var_8_1 = 0xffffffff
    char* result = result_1
    arg3[1] = 0
    
    if (eax_7 == 0)
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_4 = *(result + 0xc) + 0x10
                sub_4f4430(result, sub_4f4380(esi_4), esi_4)
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

// 函数名称: sub_504e50
// 虚拟地址: 0x504e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_504e50(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68fb78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edi = arg3
    int32_t var_38 = 3
    char* var_3c = arg3
    char** var_20 = &var_3c
    
    if (edi == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_3c, edi)
    sub_500300(&var_20, var_3c)
    int32_t var_c_1 = 0
    int32_t* eax_4 = sub_504c70(arg4)
    char* var_1c
    
    if (eax_4 == 0)
        int32_t var_c_2 = 0xffffffff
        char* eax_5 = var_1c
        
        if (eax_5 != 0 && *eax_5 != 0)
            void* eax_7 = sub_4c4060(&var_1c)
            int32_t temp1_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_3 = *(eax_7 + 0xc) + 0x10
                sub_4f4430(eax_7, sub_4f4380(esi_3), esi_3)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t* result = sub_4cce80(0x10)
    *result = 0
    result[2] = 0
    result[3] = arg4
    result[1] = eax_4
    *result = sub_501ff0(arg4, eax_4)
    int32_t var_c_3 = 0xffffffff
    char* eax_12 = var_1c
    
    if (eax_12 != 0 && *eax_12 != 0)
        void* eax_14 = sub_4c4060(&var_1c)
        int32_t temp0_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_5 = *(eax_14 + 0xc) + 0x10
            sub_4f4430(eax_14, sub_4f4380(esi_5), esi_5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

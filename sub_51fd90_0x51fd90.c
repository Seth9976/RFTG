// 函数名称: sub_51fd90
// 虚拟地址: 0x51fd90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_51fd90(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d4a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    int32_t var_8_1 = 1
    char* arg_8
    char* const ebx = arg_8
    char* const eax_3
    
    if (ebx != 0)
        eax_3 = ebx
    else
        ebx = &data_83f3d3
        eax_3 = &data_83f3d3
    
    if (sub_5a8f10(eax_3, 0x2f) == 0)
        char* const eax_5 = arg_8
        
        if (eax_5 == 0)
            eax_5 = &data_83f3d3
        
        if (sub_5a8f10(eax_5, 0x5c) == 0)
            sub_4c5870("end", &data_83f3d3, "DefLoad.cpp", 0x167, "DirectoryPathFromAssetPath")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    if (ebx == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** result = arg1
    *result = &data_83f3d3
    sub_4c4690(result, ebx)
    var_8_1.b = 0
    char* eax_10 = arg_8
    int32_t var_14_2 = 1
    
    if (eax_10 != 0 && *eax_10 != 0)
        void* eax_12 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_1 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_1), esi_1)
            result = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

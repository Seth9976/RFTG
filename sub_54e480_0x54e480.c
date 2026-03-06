// 函数名称: sub_54e480
// 虚拟地址: 0x54e480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_54e480(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693bc8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* eax_3 = arg_4
    int32_t edx = *eax_3
    void var_2c
    sub_54da60(arg4, edx, &var_2c, arg4, edx, eax_3[1])
    
    if (arg3 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void** edx_1 = sub_4c42b0(&arg_4, arg3)
    int32_t var_8_1 = 0
    int32_t* eax_6 = arg_4
    int32_t* ebx
    
    if (eax_6 == 0 || *eax_6 == 0)
        sub_4c42b0(&arg_4, "_env")
        ebx = arg_4
    else
        void* esi_2 = *(sub_4c4060(&arg_4) + 8)
        sub_4c4160(esi_2 + 4, edx_1, &arg_4, esi_2 + 4, 1)
        ebx = arg_4
        __builtin_strncpy(esi_2 + ebx, "_env", 5)
    
    char** result = sub_54d590(&arg_4, &var_2c, 1)
    sub_509bf0(result)
    
    if (*result != 0)
        if (result[7] != 0)
            sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", 0x32, 
                "AssetCatalogPurgeAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_520bc0(result)
        *result = nullptr
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx != 0 && *ebx != 0)
        void* eax_14 = sub_4c4060(&arg_4)
        int32_t temp0_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_4 = *(eax_14 + 0xc) + 0x10
            sub_4f4430(eax_14, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

// 函数名称: sub_509f10
// 虚拟地址: 0x509f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_509f10(int32_t arg1, int32_t arg2, char* arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d0d1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    
    if (sub_509d20(arg3) == 0)
        sub_4c5870("AssetPathIsValid(assetPath)", &data_83f3d3, "AssetCatalog.cpp", 0x253, 
            "AssetNameFromPath")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*arg3 == 0)
        sub_4c42b0(arg4, &data_83f3d3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg4
    
    if (sub_5a8f10(arg3, 0x2e) == 0)
        sub_4c5870("ext", &data_83f3d3, "AssetCatalog.cpp", 0x25b, "AssetNameFromPath")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const var_14 = &data_83f3d3
    int32_t var_8_1 = 1
    sub_4c4690(&var_14, arg3)
    char* const eax_9 = var_14
    *arg4 = eax_9
    
    if (eax_9 != 0 && *eax_9 != 0)
        void* eax_11 = sub_4c4060(arg4)
        *(eax_11 + 4) += 1
    
    int32_t var_18_1 = 1
    var_8_1.b = 0
    sub_4c43d0(&var_14)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

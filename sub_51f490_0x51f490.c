// 函数名称: sub_51f490
// 虚拟地址: 0x51f490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_51f490(int32_t arg1, int32_t arg2, char* arg3, char** arg4)
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
    char eax_3
    int32_t edx
    eax_3, edx = sub_509d20(arg3)
    
    if (eax_3 == 0)
        sub_4c5870("AssetPathIsValid(assetPath)", &data_83f3d3, "DefLoad.cpp", 0xc2, 
            "DefLoadXbinPathFromAssetPath")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* eax_5 = sub_5a8f10(arg3, 0x2e)
    
    if (eax_5 != 0)
        uint32_t eax_6
        eax_6, edx = sub_5a9697(eax_5, ".xpack")
        
        if (eax_6 == 0)
            sub_4c4330(arg3, edx, arg4)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg4
    
    char* var_14
    char** eax_10 = sub_51f2c0(&var_14, edx, arg3, &var_14)
    int32_t var_8_1 = 1
    char* ecx_4 = var_14
    
    if (ecx_4 == 0)
        ecx_4 = &data_83f3d3
    
    sub_51ece0(eax_10, arg4, ecx_4, arg4)
    var_8_1.b = 0
    char* eax_11 = var_14
    int32_t var_18_1 = 1
    
    if (eax_11 != 0 && *eax_11 != 0)
        void* eax_13 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_13 + 0xc) + 0x10
            sub_4f4430(eax_13, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

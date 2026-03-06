// 函数名称: sub_51f2c0
// 虚拟地址: 0x51f2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_51f2c0(int32_t arg1, int32_t arg2, char* arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e329
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_34 = 0x2e
    int32_t var_1c = 0
    char* eax_3
    char* ecx
    eax_3, ecx = sub_5a8f10(arg3, var_34.b)
    
    if (eax_3 != 0)
        var_34 = ".xpack"
        uint32_t eax_4
        eax_4, ecx = sub_5a9697(eax_3, var_34)
        
        if (eax_4 == 0)
            var_34 = "DefLoadRelativeXbinPathFromAssetPath"
            sub_4c5870("!AssetPathIsXPack(assetPath)", &data_83f3d3, "DefLoad.cpp", 0xae, var_34)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    var_34 = ecx
    char** var_18 = &var_34
    
    if (arg3 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_34, arg3)
    char* var_14
    sub_50a1e0(&var_14, var_34)
    int32_t var_8_1 = 1
    char* ecx_1 = var_14
    char* edi_1 = nullptr
    
    while (true)
        int32_t eax_7
        
        if (ecx_1 == 0 || *ecx_1 == 0)
            eax_7 = 0
        else
            eax_7 = *(sub_4c4060(&var_14) + 8)
            ecx_1 = var_14
        
        if (edi_1 s>= eax_7)
            break
        
        char* eax_10 = &data_83f3d3
        
        if (ecx_1 != 0)
            eax_10 = ecx_1
        
        if (*(eax_10 + edi_1) == 0x3a)
            var_34 = 0x5f
            sub_4c4740(&var_14, edi_1, var_34.b)
            ecx_1 = var_14
        
        edi_1 = &edi_1[1]
    
    var_18 = &data_83f3d3
    var_8_1.b = 1
    char const* const eax_11
    
    if (data_30785f2 == 0)
        char*** ecx_2 = &var_18
        
        if (data_30785f3 == 0)
            sub_4c43d0(ecx_2)
            eax_11 = "xbin/"
        else
            sub_4c43d0(ecx_2)
            eax_11 = "xbin/web/"
        
        ecx_1 = var_14
    else
        eax_11 = "xbin/ios/"
    
    if (ecx_1 == 0)
        ecx_1 = &data_83f3d3
    
    var_34 = ecx_1
    char const* const var_38_3 = eax_11
    sub_4c4a50(arg4, "%s%s.xbin")
    var_8_1.b = 0
    char* eax_12 = var_14
    int32_t var_1c_1 = 1
    
    if (eax_12 != 0 && *eax_12 != 0)
        void* eax_14 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp0_1 == 1)
            char* esi_3 = *(eax_14 + 0xc) + 0x10
            int32_t* eax_15 = sub_4f4380(esi_3)
            var_34 = esi_3
            sub_4f4430(eax_14, eax_15, var_34)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

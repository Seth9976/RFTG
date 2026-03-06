// 函数名称: sub_509d90
// 虚拟地址: 0x509d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_509d90(int32_t arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e8c1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    char const* const var_2c
    
    if (*arg2 != 0)
        var_2c = 0x5c
        void* eax_3 = sub_5a9450(arg2, var_2c.b)
        void* eax_4
        
        if (eax_3 == 0)
            var_2c = 0x2f
            eax_4 = sub_5a9450(arg2, var_2c.b)
        
        char* eax_6
        
        if (eax_3 != 0 || eax_4 != 0)
            eax_6 = sub_508bc0(arg2)
        
        if ((eax_3 == 0 && eax_4 == 0) || eax_6 != 0)
            var_2c = "AssetPathFromName"
            sub_4c5870("AssetNameIsValid(assetName)", &data_83f3d3, "AssetCatalog.cpp", 0x248, var_2c)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    void* const eax_8 = &data_840680
    
    do
        if (*eax_8 == arg3)
            char* eax_9 = *(eax_8 + 4)
            
            if (*eax_9 == 0)
                break
            
            var_2c = eax_9
            char* var_30_3 = arg2
            char* var_14
            sub_4c4a50(&var_14, "%s.%s")
            int32_t var_8_1 = 1
            var_2c = var_14
            char* ecx_1 = var_14
            char const* const* var_1c = &var_2c
            
            if (ecx_1 != 0 && *ecx_1 != 0)
                void* eax_12 = sub_4c4060(&var_2c)
                *(eax_12 + 4) += 1
            
            sub_50a1e0(arg4, var_2c)
            var_8_1.b = 0
            char* eax_13 = var_14
            int32_t var_18_1 = 1
            
            if (eax_13 != 0 && *eax_13 != 0)
                int32_t* eax_15 = sub_4c4060(&var_14)
                int32_t temp0_1 = eax_15[1]
                eax_15[1] -= 1
                
                if (temp0_1 == 1)
                    char* esi_2 = eax_15[3] + 0x10
                    int32_t* eax_16 = sub_4f4380(esi_2)
                    var_2c = esi_2
                    sub_4f4430(eax_15, eax_16, var_2c)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg4
        
        eax_8 += 8
    while (*(eax_8 + 4) != 0)
    
    var_2c = "AssetPathFromName"
    sub_4c5870("typeString[0] != 0", &data_83f3d3, "AssetCatalog.cpp", 0x24b, var_2c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

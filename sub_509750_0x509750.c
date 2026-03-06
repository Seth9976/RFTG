// 函数名称: sub_509750
// 虚拟地址: 0x509750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_509750(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f230
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_30785d8
    *(eax_3 + 0x1c) += 1
    int32_t var_34 = *(eax_3 + 0x1c)
    char* var_18
    sub_4c4a50(&var_18, "!Mem\%d")
    int32_t var_8_1 = 0
    char* const eax_5 = var_18
    
    if (eax_5 == 0)
        eax_5 = &data_83f3d3
    
    char* var_14
    sub_509d90(eax_5, eax_5, arg3, &var_14)
    var_8_1.b = 1
    char* const edx_1 = var_14
    
    if (edx_1 == 0)
        edx_1 = &data_83f3d3
    
    char** result = sub_509140(arg3, edx_1)
    char** result_1 = result
    
    if (*result != 0)
        sub_4c5870("pAsset->pAssetData == NULL", &data_83f3d3, "AssetCatalog.cpp", 0x13c, 
            "AssetCatalogNewMemoryAsset")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *result = arg4
    result[2] = 3
    sub_4c4590(&data_83f3d3)
    var_8_1.b = 0
    char* eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        void* eax_10 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_10 + 0xc) + 0x10
            sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
            result = result_1
    
    int32_t var_8_2 = 0xffffffff
    char* eax_13 = var_18
    
    if (eax_13 != 0 && *eax_13 != 0)
        void* eax_15 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_15 + 0xc) + 0x10
            sub_4f4430(eax_15, sub_4f4380(esi_4), esi_4)
            result = result_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

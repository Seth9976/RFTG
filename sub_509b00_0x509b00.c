// 函数名称: sub_509b00
// 虚拟地址: 0x509b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_509b00(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f768
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* result_1
    char* const result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    char** eax_3 = sub_509140(ecx, result_2)
    
    if (eax_3[2] == 4)
        sub_508cd0(eax_3)
    
    if (*eax_3 != 0)
        sub_4c5870("pAsset->pAssetData == NULL", &data_83f3d3, "AssetCatalog.cpp", 0x17e, 
            "AssetCatalogNewSourceAsset")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *eax_3 = arg1
    eax_3[2] = 1
    sub_4c4590(&data_83f3d3)
    int32_t var_8_2 = 0xffffffff
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

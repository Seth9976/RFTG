// 函数名称: sub_509930
// 虚拟地址: 0x509930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_509930(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f7a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 1
    char* arg_4
    char* const eax_3 = arg_4
    
    if (eax_3 == 0)
        eax_3 = &data_83f3d3
    
    char** eax_4 = sub_509140(ecx, eax_3)
    int32_t eax_5 = eax_4[2]
    
    if (eax_5 == 3)
        sub_4c5870("pAsset->assetLocation != ASSET_LOCATION_MEMORY", &data_83f3d3, "AssetCatalog.cpp", 
            0x15c, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_5 == 4)
        sub_508cd0(eax_4)
    
    char* arg_8
    char* const eax_7 = arg_8
    
    if (eax_7 == 0)
        eax_7 = &data_83f3d3
    
    char* const ecx_1 = &data_83f3d3
    int32_t eax_9
    char edx_1
    
    while (true)
        edx_1 = *eax_7
        char temp0_1 = *ecx_1
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                eax_9 = 0
                break
            
            edx_1 = eax_7[1]
            char temp3_1 = ecx_1[1]
            c_1 = edx_1 u< temp3_1
            
            if (edx_1 == temp3_1)
                eax_7 = &eax_7[2]
                ecx_1 = &ecx_1[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_9 = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        eax_9 = sbb.d(sbb.d(eax_7, eax_7, c_1), 0xffffffff, c_2)
        break
    
    if (eax_9 == 0)
        sub_4c5870("xbinFilePath != """, &data_83f3d3, "AssetCatalog.cpp", 0x164, 
            "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (sub_4c4470(&eax_4[3], edx_1, &data_83f3d3) == 0 && sub_4c4420(&arg_8, &eax_4[3]) == 0)
        sub_4c5870("pAsset->xbinFilePath == "" || pAsset->xbinFilePath == xbinFilePath", &data_83f3d3, 
            "AssetCatalog.cpp", 0x167, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (*eax_4 != 0)
        sub_4c5870("pAsset->pAssetData == NULL", &data_83f3d3, "AssetCatalog.cpp", 0x16a, 
            "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    eax_4[2] = 2
    sub_4c4510(&arg_8)
    eax_4[4] = arg1
    eax_4[5] = arg2
    eax_4[6] = arg3
    var_8_1.b = 0
    sub_4c43d0(&arg_4)
    int32_t var_8_2 = 0xffffffff
    int32_t* result = sub_4c43d0(&arg_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

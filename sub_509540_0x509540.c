// 函数名称: sub_509540
// 虚拟地址: 0x509540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_509540(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        sub_4c5870("pAsset->pAssetData == NULL", &data_83f3d3, "AssetCatalog.cpp", 0x100, 
            "AssetCatalogLoadFailureAsset")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const eax_1 = arg1[8]
    
    if (eax_1 == 0)
        eax_1 = &data_83f3d3
    
    char* const var_10 = eax_1
    sub_4c5680("Can't load asset: '%s'")
    char** eax_2 = sub_509320(arg1)
    
    if (*eax_2 != 0)
        sub_508cd0(eax_2)
    
    sub_5094d0(eax_2, 0, 0)
    char* ecx_1 = *eax_2
    
    if (ecx_1 == 0)
        sub_4e7170(eax_2)
        ecx_1 = *eax_2
        
        if (ecx_1 == 0)
            sub_4c5870("pFailureAsset->pAssetData", "Failed to load failure asset\n", 
                "AssetCatalog.cpp", 0x113, "AssetCatalogLoadFailureAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    int32_t eax_5 = arg1[1]
    
    if (eax_5 u> 0x22)
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int128_t* edx = data_30785d4
    char* var_10_1 = ecx_1
    int32_t* result = sub_4ff520(*(&edx[eax_5 * 2] + 0x1c), edx)
    int32_t ecx_2 = arg1[1]
    *arg1 = result
    arg1[2] = 4
    
    if (ecx_2 u> 0x22)
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx_5 = *((ecx_2 << 5) + data_30785d4 + 4)
    
    if (ecx_5 == 0)
        return result
    
    char* const edi_1 = arg1[8]
    
    if (edi_1 == 0)
        edi_1 = &data_83f3d3
    
    return ecx_5(edi_1, *result)
}

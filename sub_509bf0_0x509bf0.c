// 函数名称: sub_509bf0
// 虚拟地址: 0x509bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_509bf0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (data_8bc5ff != 0)
        int32_t* esi_1 = *arg1
        
        if (esi_1 == 0)
            sub_4c5870("pAsset->pAssetData", &data_83f3d3, "AssetCatalog.cpp", 0x18d, 
                "AssetCatalogSave")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* ecx
        int32_t edx
        
        if (esi_1[1] == 0)
            int32_t eax_1 = arg1[1]
            
            if (eax_1 u> 0x22)
                sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
                    "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result, ecx, edx = sub_504180(*esi_1, *((eax_1 << 5) + data_30785d4 + 0x1c))
            esi_1[1] = result
        
        if (sub_520c60(result, edx, ecx, arg1).b != 0)
            arg1[2] = 1
            return 1
    
    result.b = 0
    return result
}

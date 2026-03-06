// 函数名称: sub_4ca250
// 虚拟地址: 0x4ca250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4ca250(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] != 0x12)
    if (arg1[1] != 0x12)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_FONT", &data_83f3d3, "AssetUtils.cpp", 0x2e0, 
            "FontGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_466320(arg1)
    
    if (result[5] != 0)
        void* edi_1 = result[6]
        
        if (*(edi_1 + 8) != 0)
            result = *sub_4ca0f0(*(edi_1 + 4))
            
            if (*(edi_1 + 8) != result[0xa])
                char* const eax_3 = arg1[8]
                
                if (eax_3 == 0)
                    eax_3 = &data_83f3d3
                
                char* const var_14_1 = eax_3
                sub_4c5680("didn't find asset in atlas forcing a reimport %s")
                int32_t eax_4
                char edx_1
                eax_4, edx_1 = sub_508cd0(arg1)
                
                if (*arg1 == 0)
                    return sub_520800(eax_4, edx_1, arg1, 1)
                
                sub_4c5870("pAsset->pAssetData == NULL", &data_83f3d3, "AssetCatalog.cpp", 0xe8, 
                    "AssetCatalogLoadAsset")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    
    return result
}

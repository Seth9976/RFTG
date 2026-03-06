// 函数名称: sub_5096c0
// 虚拟地址: 0x5096c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5096c0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        if (arg1[7] != 0)
            sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", 0x32, 
                "AssetCatalogPurgeAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_520bc0(arg1)
        *arg1 = 0
    
    char result = sub_5094d0(arg1, 1, 1)
    
    if (result != 0)
        return result
    
    sub_4c5870("resultCatalogRead", &data_83f3d3, "AssetCatalog.cpp", 0x128, 
        "AssetCatalogReloadAsWritable")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

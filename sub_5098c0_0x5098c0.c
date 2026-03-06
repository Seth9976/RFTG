// 函数名称: sub_5098c0
// 虚拟地址: 0x5098c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_5098c0(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* edx
    char** result = sub_509140(ecx, edx)
    
    if (result[2] == 4)
        sub_508cd0(result)
    
    if (*result == 0)
        *result = arg1
        result[2] = 3
        sub_4c4590(&data_83f3d3)
        return result
    
    sub_4c5870("pAsset->pAssetData == NULL", &data_83f3d3, "AssetCatalog.cpp", 0x14f, 
        "AssetCatalogNewAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

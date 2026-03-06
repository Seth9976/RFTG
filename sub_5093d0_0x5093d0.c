// 函数名称: sub_5093d0
// 虚拟地址: 0x5093d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5093d0(char** arg1, void* arg2, int32_t arg3, void* arg4 @ esi, int128_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (arg1[2] == 4)
        arg1 = sub_509320(arg1)
    
    if (arg1[2] != 2 && arg3 u> 0x100000)
        return sub_5ab990(arg5, arg2 + arg3, arg4)
    
    void* ecx_2 = arg1[4]
    
    if (ecx_2 == 0)
        sub_4c5870("pAssetToUse->packFileOffset != 0", &data_83f3d3, "AssetCatalog.cpp", 0xd8, 
            "AssetCatalogLoadHWBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg2 + arg4 s> arg1[5])
        sub_4c5870("readOffset + readSize <= pAssetToUse->packFileSize", &data_83f3d3, 
            "AssetCatalog.cpp", 0xda, "AssetCatalogLoadHWBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char result = sub_4d05d0(ecx_2 + arg2 + arg3, arg4.b)
    
    if (result != 0)
        return result
    
    sub_4c5870("resultLoadHWBuffer", &data_83f3d3, "AssetCatalog.cpp", 0xdf, "AssetCatalogLoadHWBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

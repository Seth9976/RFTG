// 函数名称: sub_536150
// 虚拟地址: 0x536150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_536150(int128_t* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* eax_1 = sub_5360a0(arg4)
    void* eax_1 = sub_5360a0(arg4)
    void* ecx_1 = arg2 * arg3
    void* edi = *(arg4 + 0x2d8)
    void* edx_1 = *(eax_1 + 0x14) - edi
    void* esi = ecx_1
    
    if (ecx_1 s>= edx_1)
        esi = edx_1
    
    if (esi s<= 0)
        return 0
    
    char* ecx_2 = *(arg4 + 0x2d0)
    
    if (ecx_2 == 0)
        sub_5ab990(arg1, *(eax_1 + 0x18) + edi, esi)
        *(arg4 + 0x2d8) += esi
        return divu.dp.d(0:esi, arg2)
    
    int32_t ebx_1 = *(eax_1 + 0x18)
    char** eax_3
    
    if (*(ecx_2 + 8) != 4)
        eax_3 = ecx_2
    else
        eax_3 = sub_509320(ecx_2)
    
    if (eax_3[2] == 2 || ebx_1 u<= 0x100000)
        void* ecx_3 = eax_3[4]
        
        if (ecx_3 == 0)
            sub_4c5870("pAssetToUse->packFileOffset != 0", &data_83f3d3, "AssetCatalog.cpp", 0xd8, 
                "AssetCatalogLoadHWBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (edi + esi s> eax_3[5])
            sub_4c5870("readOffset + readSize <= pAssetToUse->packFileSize", &data_83f3d3, 
                "AssetCatalog.cpp", 0xda, "AssetCatalogLoadHWBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (sub_4d05d0(ecx_3 + edi + ebx_1, esi.b) == 0)
            sub_4c5870("resultLoadHWBuffer", &data_83f3d3, "AssetCatalog.cpp", 0xdf, 
                "AssetCatalogLoadHWBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        sub_5ab990(arg1, edi + ebx_1, esi)
    
    *(arg4 + 0x2d8) += esi
    return divu.dp.d(0:esi, arg2)
}

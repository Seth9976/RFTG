// 函数名称: sub_4d8860
// 虚拟地址: 0x4d8860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d8860()
{
    // 第一条实际指令: void* eax = data_27e7fe0
    void* eax = data_27e7fe0
    
    if (*(eax + 0x1c) == 0)
        sub_4c5870("gpSpriteAppData->materialBound", &data_83f3d3, "Sprite.cpp", 0x6b, 
            "SpriteGetDefaultMaterialInCache")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax + 0x48) s<= 0)
        sub_4c5870("gpSpriteAppData->materialStateCache.GetSize() > 0", &data_83f3d3, "Sprite.cpp", 
            0x6c, "SpriteGetDefaultMaterialInCache")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_3 = *(eax + 0x40)
    
    if (eax_3 != 0)
        return *eax_3 + 4
    
    sub_4c5870("mpHead != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x53, 
        "XList<struct MaterialStateCacheItem *>::GetHead")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_508d20
// 虚拟地址: 0x508d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_508d20(int32_t* arg1)
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
    
    sub_50a6b0(&arg1[8])
    void* edi = data_30785d8
    
    if (sub_50aca0(edi + 0xc, arg1) != 0)
        *(edi + 0x18) -= 1
        sub_50a930(arg1)
        int32_t result = *(edi + 0xc)
        *arg1 = result
        *(edi + 0xc) = arg1
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x10c, 
        "XTypedAllocator<struct XAsset>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

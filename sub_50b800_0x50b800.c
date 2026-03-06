// 函数名称: sub_50b800
// 虚拟地址: 0x50b800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_50b800(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] != 3)
    if (arg1[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_1 = sub_466320(arg1)
    void** esi = *(eax_1 + 0xc)
    
    if (esi == 0)
        sub_4c5870("loader", &data_83f3d3, "Texture.cpp", 0x267, "TextureAsyncronousFree")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_3 = esi[3]
    
    if (eax_3 != 0)
        _aligned_free_base(eax_3)
    
    int32_t eax_4 = esi[2]
    
    if (eax_4 != 0)
        _aligned_free_base(eax_4)
    
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax_5 = 0
    void** edi_2
    
    while (true)
        if (1 << (eax_5.b + 4) s>= 0x24)
            edi_2 = edx + eax_5 * 0x14
            break
        
        eax_5 += 1
        
        if (eax_5 s>= 7)
            edi_2 = edx + 0x8c
            break
    
    edi_2[3] -= 1
    char result = sub_4f4210(edi_2, esi)
    
    if (result != 0)
        *esi = *edi_2
        *edi_2 = esi
        *(eax_1 + 0xc) = 0
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

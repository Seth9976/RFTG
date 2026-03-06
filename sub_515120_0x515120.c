// 函数名称: sub_515120
// 虚拟地址: 0x515120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_515120()
{
    // 第一条实际指令: void* eax_5 = data_27e7fcc
    void* eax_5 = data_27e7fcc
    
    if (eax_5 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void** esi = *(eax_5 + 8)
    int32_t* i_2 = esi[1]
    
    if (i_2 != 0)
        int32_t* i
        
        do
            i = *i_2
            _aligned_free_base(i_2)
            i_2 = i
        while (i != 0)
    
    esi[1] = 0
    esi[3] = 0
    int32_t* i_3 = esi[5]
    
    if (i_3 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_3
            _aligned_free_base(i_3)
            i_3 = i_1
        while (i_1 != 0)
    
    void* edx = data_26a44e4
    esi[5] = 0
    esi[7] = 0
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax_1 = 0
    void** edi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x20)
            edi_2 = edx + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            edi_2 = edx + 0x8c
            break
    
    edi_2[3] -= 1
    char result = sub_4f4210(edi_2, esi)
    
    if (result != 0)
        *esi = *edi_2
        *edi_2 = esi
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

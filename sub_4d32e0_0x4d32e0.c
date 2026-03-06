// 函数名称: sub_4d32e0
// 虚拟地址: 0x4d32e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d32e0()
{
    // 第一条实际指令: void* eax_6 = data_27e7fcc
    void* eax_6 = data_27e7fcc
    
    if (eax_6 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "Game.cpp", 0x62, "GameDispose")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_6 + 0x48) != 0)
        *(eax_6 + 0x48) = 0
    
    (*(*data_27e7fd0 + 0x10))()
    sub_531440()
    sub_533060()
    sub_4e76d0()
    sub_5327f0()
    sub_4eaf90()
    sub_531fe0()
    sub_531500()
    sub_4d36b0()
    sub_515120()
    sub_4d63f0()
    void* result = data_27e7fcc
    
    if (result != 0)
        void* edx_1 = data_26a44e4
        void* result_1 = result
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_2 = 0
        int32_t* edi_2
        
        while (true)
            if (1 << (eax_2.b + 4) s>= 0x5c)
                edi_2 = edx_1 + eax_2 * 0x14
                break
            
            eax_2 += 1
            
            if (eax_2 s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        edi_2[3] -= 1
        result = sub_4f4210(edi_2, result_1)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *result_1 = *edi_2
        *edi_2 = result_1
        data_27e7fcc = 0
    
    return result
}

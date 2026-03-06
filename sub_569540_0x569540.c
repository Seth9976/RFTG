// 函数名称: sub_569540
// 虚拟地址: 0x569540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_569540()
{
    // 第一条实际指令: void* result = data_307920c
    void* result = data_307920c
    
    if (result != 0)
        void* edx_1 = data_26a44e4
        void* result_1 = result
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax = 0
        int32_t* edi_2
        
        while (true)
            if (1 << (eax.b + 4) s>= 0x1c)
                edi_2 = edx_1 + eax * 0x14
                break
            
            eax += 1
            
            if (eax s>= 7)
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
        data_307920c = 0
    
    return result
}

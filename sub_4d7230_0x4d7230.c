// 函数名称: sub_4d7230
// 虚拟地址: 0x4d7230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d7230()
{
    // 第一条实际指令: sub_4d7960(data_27e7fdc)
    sub_4d7960(data_27e7fdc)
    int32_t* result = data_27e7fdc
    
    if (result != 0)
        sub_4d7960(result)
        void* edx_1 = data_26a44e4
        int32_t* esi_1 = data_27e7fdc
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax = 0
        void* edi_2
        
        while (true)
            if (1 << (eax.b + 4) s>= 0x14)
                edi_2 = edx_1 + eax * 0x14
                break
            
            eax += 1
            
            if (eax s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        *(edi_2 + 0xc) -= 1
        result = sub_4f4210(edi_2, esi_1)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_1 = *edi_2
        *edi_2 = esi_1
        data_27e7fdc = 0
    
    return result
}

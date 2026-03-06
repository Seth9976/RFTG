// 函数名称: sub_4e61e0
// 虚拟地址: 0x4e61e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4e61e0()
{
    // 第一条实际指令: int32_t* eax_1 = data_30785c4
    int32_t* eax_1 = data_30785c4
    
    while (eax_1[2] != 0)
        void* eax = sub_4db440(eax_1)
        *(eax + 0x1c) -= 1
        eax_1 = data_30785c4
    
    sub_5041e0(eax_1)
    int32_t* result = data_30785c4
    
    if (result != 0)
        sub_5041e0(result)
        void* edx_1 = data_26a44e4
        int32_t* esi_1 = data_30785c4
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_2 = 0
        void* edi_2
        
        while (true)
            if (1 << (eax_2.b + 4) s>= 0xc)
                edi_2 = edx_1 + eax_2 * 0x14
                break
            
            eax_2 += 1
            
            if (eax_2 s>= 7)
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
        data_30785c4 = 0
    
    return result
}

// 函数名称: sub_557c40
// 虚拟地址: 0x557c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_557c40()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    WSACleanup()
    void* result = data_307917c
    
    if (result != 0)
        void* edx_1 = data_26a44e4
        void* result_1 = result
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax = 0
        int32_t* edi_3
        
        while (true)
            if (1 << (eax.b + 4) s>= 4)
                edi_3 = edx_1 + eax * 0x14
                break
            
            eax += 1
            
            if (eax s>= 7)
                edi_3 = edx_1 + 0x8c
                break
        
        edi_3[3] -= 1
        result = sub_4f4210(edi_3, result_1)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *result_1 = *edi_3
        *edi_3 = result_1
        data_307917c = 0
    
    return result
}

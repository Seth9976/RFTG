// 函数名称: sub_4e4f20
// 虚拟地址: 0x4e4f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e4f20()
{
    // 第一条实际指令: sub_4e0840()
    sub_4e0840()
    sub_54c0b0()
    sub_533ba0()
    sub_4d8910()
    void* result = data_27e7fe4
    
    if (result != 0)
        void* edx_1 = data_26a44e4
        void* result_1 = result
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax = 0
        int32_t* edi_2
        
        while (true)
            if (1 << (eax.b + 4) s>= 0x258)
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
        data_27e7fe4 = 0
    
    return result
}

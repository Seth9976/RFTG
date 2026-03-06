// 函数名称: sub_559750
// 虚拟地址: 0x559750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_559750(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x84) != 0)
    if (*(arg1 + 0x84) != 0)
        sub_55d490(arg1 + 0x84)
        int32_t eax_2 = *(arg1 + 0x84)
        
        if (eax_2 != 0)
            _aligned_free_base(eax_2)
        
        __builtin_memset(arg1 + 0x84, 0, 0x14)
        *(arg1 + 0x9c) = 0
    
    if (*(arg1 + 0x50) != 0)
        int32_t* eax_3 = *(arg1 + 0x50)
        (*(*eax_3 + 8))(eax_3)
    
    if (*(arg1 + 8) != 0)
        int32_t* eax_4 = *(arg1 + 8)
        (*(*eax_4 + 8))(eax_4)
    
    if (*(arg1 + 4) != 0)
        int32_t* edi_1 = *(arg1 + 4)
        (*(*edi_1 + 8))(edi_1)
    
    void* result = data_3079200
    
    if (result != 0)
        sub_559880(result)
        void* edx_3 = data_26a44e4
        int32_t* esi_1 = data_3079200
        
        if (edx_3 == 0)
            sub_4f4250()
            edx_3 = data_26a44e4
        
        int32_t eax_6 = 0
        void* edi_3
        
        while (true)
            if (1 << (eax_6.b + 4) s>= 0xa0)
                edi_3 = edx_3 + eax_6 * 0x14
                break
            
            eax_6 += 1
            
            if (eax_6 s>= 7)
                edi_3 = edx_3 + 0x8c
                break
        
        *(edi_3 + 0xc) -= 1
        result = sub_4f4210(edi_3, esi_1)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_1 = *edi_3
        *edi_3 = esi_1
        data_3079200 = 0
    
    return result
}

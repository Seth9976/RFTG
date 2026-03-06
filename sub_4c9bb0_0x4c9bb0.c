// 函数名称: sub_4c9bb0
// 虚拟地址: 0x4c9bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4c9bb0()
{
    // 第一条实际指令: (*(*data_27e7fd0 + 4))()
    (*(*data_27e7fd0 + 4))()
    
    if (*(data_27e7bbc + 0x2c) != 0)
        sub_4d32e0()
    
    int32_t edi
    int32_t var_c = edi
    sub_4c6cc0(sub_4e3c90())
    sub_4d7230()
    sub_4e61e0()
    int32_t* i_2 = data_26a652c
    
    if (i_2 != 0)
        int32_t* i
        
        do
            i = *i_2
            _aligned_free_base(i_2)
            i_2 = i
        while (i != 0)
    
    data_26a652c = 0
    data_26a6534 = 0
    sub_4e4f20()
    int32_t* ecx_1 = data_26a4500
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))()
        int32_t* ecx_2 = data_26a4500
        
        if (ecx_2 != 0)
            (**ecx_2)(0)
            int32_t eax_4 = data_26a4500
            
            if (eax_4 != 0)
                _aligned_free_base(eax_4)
        
        data_26a4500 = 0
        data_26a4528 = 0
    
    int32_t* ecx_3 = data_26a44f0
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 0xc))()
        int32_t* ecx_4 = data_26a44f0
        
        if (ecx_4 != 0)
            (**ecx_4)(1)
        
        data_26a44f0 = 0
    
    sub_4f6df0()
    
    if (data_be1ed8 != 0)
        sub_5307d0()
        int32_t eax_7 = data_be1ed8
        
        if (eax_7 != 0)
            _aligned_free_base(eax_7)
        
        __builtin_memset(&data_be1ed8, 0, 0x14)
        data_be1ef0 = 0
    
    if (data_be1e78 != 0)
        sub_510bd0()
        int32_t eax_8 = data_be1e78
        
        if (eax_8 != 0)
            _aligned_free_base(eax_8)
        
        __builtin_memset(&data_be1e78, 0, 0x14)
        data_be1e90 = 0
    
    sub_51b410()
    sub_508e60()
    sub_5006c0()
    sub_553a10()
    int32_t eax_9 = data_30785d4
    
    if (eax_9 != 0)
        _aligned_free_base(eax_9)
    
    sub_4d62d0()
    sub_50ad60()
    int32_t* ecx_5 = data_3078804
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 4))()
    
    int32_t* i_3 = data_26a651c
    
    if (i_3 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_3
            _aligned_free_base(i_3)
            i_3 = i_1
        while (i_1 != 0)
    
    data_26a651c = 0
    data_26a6524 = 0
    sub_51aff0()
    int32_t* eax_11 = data_27e7bbc
    
    if (eax_11 != 0)
        void* edx_6 = data_26a44e4
        
        if (edx_6 == 0)
            sub_4f4250()
            edx_6 = data_26a44e4
        
        int32_t eax_12 = 0
        int32_t* edi_3
        
        while (true)
            if (1 << (eax_12.b + 4) s>= 0x30)
                edi_3 = edx_6 + eax_12 * 0x14
                break
            
            eax_12 += 1
            
            if (eax_12 s>= 7)
                edi_3 = edx_6 + 0x8c
                break
        
        edi_3[3] -= 1
        
        if (sub_4f4210(edi_3, eax_11) == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *eax_11 = *edi_3
        *edi_3 = eax_11
        data_27e7bbc = 0
    
    sub_4f4320()
    int32_t* result = data_27e7aac
    data_27e7bc4 = 0
    
    if (result != 0)
        result = sub_5a8c61(result)
        data_27e7aac = 0
    
    data_27e7fd0 = 0
    return result
}

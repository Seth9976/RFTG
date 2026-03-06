// 函数名称: sub_4c6cc0
// 虚拟地址: 0x4c6cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_4c6cc0(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t* ecx = data_27e7bb4
    
    if (ecx == 0)
        return 
    
    int32_t* eax_1 = data_27e7bb8
    int32_t ebx
    int32_t var_10_1 = ebx
    void* esi_1 = nullptr
    
    while (true)
        void* edx_1
        
        if (esi_1 != 0)
            edx_1 = esi_1 + 0xc
        else
            edx_1 = eax_1[7]
        
        int32_t edi_3 = eax_1[7] + eax_1[8] * 0xc
        
        if (edx_1 u>= edi_3)
            break
        
        while (true)
            if ((*(edx_1 + 8) & 0xffff0000) != 0)
                int32_t edi_4 = *(edx_1 + 8)
                esi_1 = edx_1
                
                if (edi_4 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct NetListen>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t edx_3 = zx.d(edi_4.w)
                
                if (edx_3 u< eax_1[8])
                    int32_t eax_2 = eax_1[7]
                    
                    if (*(eax_2 + edx_3 * 0xc + 8) == edi_4)
                        void* edi_5 = eax_2 + edx_3 * 0xc
                        (*(*ecx + 0x28))(*(edi_5 + 4))
                        eax_1 = data_27e7bb8
                        int32_t ecx_1 = eax_1[0xa]
                        eax_1[0xa] = zx.d(*(edi_5 + 8))
                        *(edi_5 + 8) = ecx_1
                        eax_1[0xb] -= 1
                        ecx = data_27e7bb4
                        break
                
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct NetListen>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edx_1 += 0xc
            
            if (edx_1 u>= edi_3)
                goto label_4c6d10
    
    label_4c6d10:
    void* i_1 = nullptr
    label_4c6d12:
    void* i
    
    if (i_1 != 0)
        i = i_1 + 0x4c
    else
        i = *eax_1
    
    for (; i u< eax_1[1] * 0x4c + *eax_1; i += 0x4c)
        if ((*(i + 0x48) & 0xffff0000) != 0)
            i_1 = i
            sub_4c6a10(i)
            eax_1 = data_27e7bb8
            goto label_4c6d12
    
    while (eax_1[0x10] != 0)
        var_8 = sub_4db440(&eax_1[0xe])
        sub_4c4590(&data_83f3d3)
        sub_518190(data_27e7bb8 + 0x50, &var_8)
        eax_1 = data_27e7bb8
    
    (*(*data_27e7bb4 + 4))()
    int32_t** edi_8 = data_27e7bb8
    void* eax
    
    while (edi_8[0x13] != 0)
        eax = sub_4c9050(&edi_8[0x11])
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        edi_8 = data_27e7bb8
    
    while (edi_8[0x16] != 0)
        eax = sub_4c9050(&edi_8[0x14])
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        edi_8 = data_27e7bb8
    
    if (edi_8[7] != 0)
        sub_40ae70(&edi_8[7])
        eax = edi_8[7]
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        __builtin_memset(&edi_8[7], 0, 0x14)
        edi_8[0xd] = 0
    
    int32_t** ebx_4 = edi_8
    
    if (*edi_8 != 0)
        sub_4c9480(edi_8)
        eax = *ebx_4
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        edi_8 = data_27e7bb8
        __builtin_memset(ebx_4, 0, 0x14)
        ebx_4[6] = 0
    
    if (edi_8 == 0)
        return 
    
    sub_4c6fd0(edi_8)
    void* edx_11 = data_26a44e4
    int32_t* ebx_5 = data_27e7bb8
    
    if (edx_11 == 0)
        sub_4f4250()
        edx_11 = data_26a44e4
    
    int32_t eax_13 = 0
    int32_t* edi_9
    
    while (true)
        if (1 << (eax_13.b + 4) s>= 0x5c)
            edi_9 = edx_11 + eax_13 * 0x14
            break
        
        eax_13 += 1
        
        if (eax_13 s>= 7)
            edi_9 = edx_11 + 0x8c
            break
    
    edi_9[3] -= 1
    
    if (sub_4f4210(edi_9, ebx_5).b == 0)
        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
            "XAllocator::Free")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *ebx_5 = *edi_9
    *edi_9 = ebx_5
    data_27e7bb8 = 0
}

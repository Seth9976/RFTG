// 函数名称: sub_4b63f0
// 虚拟地址: 0x4b63f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b63f0()
{
    // 第一条实际指令: int32_t* edi_1 = data_27e7a44
    int32_t* edi_1 = data_27e7a44
    int32_t ecx = edi_1[0x1c]
    void* esi = nullptr
    
    if (ecx != 0)
        void* edx_1 = data_27e7bb8
        uint32_t eax_1 = zx.d(ecx.w)
        
        if (eax_1 u< *(edx_1 + 4))
            int32_t* eax_3 = eax_1 * 0x4c + *edx_1
            
            if (eax_3[0x12] == ecx)
                sub_4c6a10(eax_3)
                edi_1 = data_27e7a44
        
        edi_1[0x1c] = 0
    
    while (true)
        void* ebx_1
        
        if (esi != 0)
            ebx_1 = esi + 0x1f8
        else
            ebx_1 = *edi_1
        
        int32_t eax_6 = edi_1[1] * 0x1f8 + *edi_1
        
        if (ebx_1 u>= eax_6)
            break
        
        while ((*(ebx_1 + 0x1f0) & 0xffff0000) == 0)
            ebx_1 += 0x1f8
            
            if (ebx_1 u>= eax_6)
                goto label_4b647d
        
        esi = ebx_1
        sub_4b6360()
        edi_1 = data_27e7a44
    
    label_4b647d:
    void* i_3 = nullptr
    label_4b6480:
    void* i
    
    if (i_3 != 0)
        i = i_3 + 0x1c4
    else
        i = edi_1[7]
    
    for (; i u< edi_1[8] * 0x1c4 + edi_1[7]; i += 0x1c4)
        if ((*(i + 0x1c0) & 0xffff0000) != 0)
            i_3 = i
            sub_4b8dc0(i)
            edi_1 = data_27e7a44
            goto label_4b6480
    
    if (edi_1[7] != 0)
        sub_40ad10(&edi_1[7])
        int32_t eax_8 = edi_1[7]
        
        if (eax_8 != 0)
            _aligned_free_base(eax_8)
        
        __builtin_memset(&edi_1[7], 0, 0x14)
        edi_1[0xd] = 0
    
    if (edi_1[0xe] != 0)
        sub_40adc0(&edi_1[0xe])
        int32_t eax_10 = edi_1[0xe]
        
        if (eax_10 != 0)
            _aligned_free_base(eax_10)
        
        __builtin_memset(&edi_1[0xe], 0, 0x14)
        edi_1[0x14] = 0
    
    if (edi_1[0x15] != 0)
        sub_40ae70(&edi_1[0x15])
        int32_t eax_12 = edi_1[0x15]
        
        if (eax_12 != 0)
            _aligned_free_base(eax_12)
        
        __builtin_memset(&edi_1[0x15], 0, 0x14)
        edi_1[0x1b] = 0
    
    if (*edi_1 != 0)
        sub_40ac60(edi_1)
        int32_t eax_14 = *edi_1
        
        if (eax_14 != 0)
            _aligned_free_base(eax_14)
        
        __builtin_memset(edi_1, 0, 0x14)
        edi_1[6] = 0
    
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t edi
    int32_t var_8_1 = edi
    void* i_1 = nullptr
    label_4d2be0:
    void* i_2 = data_be1a60
    
    if (i_1 != 0)
        i_1 += 0x24
    else
        i_1 = i_2
    
    for (; i_1 u< i_2 + data_be1a64 * 0x24; i_1 += 0x24)
        if ((*(i_1 + 0x20) & 0xffff0000) != 0)
            int32_t ecx_7 = data_be1a6c
            data_be1a6c = zx.d(*(i_1 + 0x20))
            *(i_1 + 0x20) = ecx_7
            data_be1a70 -= 1
            goto label_4d2be0
    
    if (i_2 != 0)
        sub_4d30e0()
        i_1 = data_be1a60
        
        if (i_1 != 0)
            i_1 = _aligned_free_base(i_1)
        
        __builtin_memset(&data_be1a60, 0, 0x14)
        data_be1a78 = 0
    
    return i_1
}

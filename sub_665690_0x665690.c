// 函数名称: sub_665690
// 虚拟地址: 0x665690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_665690(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (ebx == 0 || arg2 == 0)
        return 
    
    int32_t edx_1 = sub_6654b0(ebx, arg2)
    
    if ((arg2[2].b & 8) != 0)
        uint32_t __saved_edi_3 = zx.d(arg2[5].w)
        int32_t ecx_1 = arg2[4]
        uint32_t __saved_edi_2 = __saved_edi_3
        sub_66fcc0(__saved_edi_3, edx_1, ecx_1, ebx, ecx_1)
    else if (*(arg2 + 0x19) == 3)
        sub_664320(ebx, "Valid palette required for paletted images")
        noreturn
    
    if ((arg2[2].b & 0x10) != 0)
        if ((*(ebx + 0x74) & 0x80000) != 0 && *(arg2 + 0x19) == 3)
            int32_t i = 0
            
            if (0 u< *(arg2 + 0x16))
                do
                    void* edi_1 = arg2[0x13]
                    char edx_2 = 0xff - *(edi_1 + i)
                    i += 1
                    *(edi_1 + i - 1) = edx_2
                while (i s< zx.d(*(arg2 + 0x16)))
        
        sub_670280(ebx, arg2[0x13], &arg2[0x14], zx.d(*(arg2 + 0x16)), zx.d(*(arg2 + 0x19)))
    
    if ((arg2[2].b & 0x20) != 0)
        sub_670410(ebx, arg2 + 0x5a, zx.d(*(arg2 + 0x19)))
    
    if ((arg2[2].b & 0x40) != 0)
        sub_670590(ebx, arg2[0x1f], zx.d(arg2[5].w))
    
    if ((arg2[2] & 0x100) != 0)
        sub_670c70(ebx, arg2[0x19], arg2[0x1a], zx.d(arg2[0x1b].b))
    
    if ((arg2[2] & 0x400) != 0)
        sub_670d20(ebx, arg2[0x28], arg2[0x29], arg2[0x2a], zx.d(arg2[0x2d].b), zx.d(*(arg2 + 0xb5)), 
            arg2[0x2b], arg2[0x2c])
    
    if ((arg2[2] & 0x4000) != 0)
        sub_670fe0(ebx, arg2[0x37].b, arg2[0x38], arg2[0x39])
    
    if ((arg2[2].b & 0x80) != 0)
        sub_6710d0(ebx, arg2[0x1c], arg2[0x1d], zx.d(arg2[0x1e].b))
    
    if ((arg2[2] & 0x200) != 0)
        sub_671180(ebx, &arg2[0xf])
        *(ebx + 0x6c) |= 0x200
    
    if ((arg2[2] & 0x2000) != 0)
        int32_t i_1 = 0
        
        if (arg2[0x36] s> 0)
            arg1 = nullptr
            
            do
                sub_671a40(ebx, arg2[0x35] + arg1)
                arg1 += 0x10
                i_1 += 1
            while (i_1 s< arg2[0x36])
    
    arg1 = nullptr
    
    if (arg2[0xc] s> 0)
        int32_t* edi_2 = nullptr
        void* i_2
        
        do
            int32_t ecx_11 = arg2[0xe]
            int32_t eax_11 = *(edi_2 + ecx_11)
            
            if (eax_11 s> 0)
                void* eax_12 = edi_2 + ecx_11
                sub_670a80(ebx, *eax_12, *(eax_12 + 4), *(eax_12 + 0x14), *(edi_2 + ecx_11 + 0x18), 
                    *(eax_12 + 8))
                *(edi_2 + arg2[0xe]) = 0xfffffffd
            else if (eax_11 == 0)
                void* eax_14 = edi_2 + ecx_11
                int32_t var_14_14 = *eax_14
                sub_670970(ebx, *(eax_14 + 4), *(edi_2 + ecx_11 + 8), 0)
                *(edi_2 + arg2[0xe]) = 0xfffffffe
            else if (eax_11 == 0xffffffff)
                int32_t var_14_15 = 0
                sub_670870(ebx, *(edi_2 + ecx_11 + 4), *(edi_2 + ecx_11 + 8))
                *(edi_2 + arg2[0xe]) = 0xfffffffd
            
            i_2 = arg1 + 1
            edi_2 = &edi_2[7]
            arg1 = i_2
        while (i_2 s< arg2[0xc])
    
    void* eax = arg2[0x30]
    
    if (eax == 0)
        return 
    
    void* ecx_18 = arg2[0x2f]
    
    if (ecx_18 u>= ecx_18 + eax * 0x14)
        return 
    
    char* edi_3 = ecx_18 + 0x10
    
    do
        uint32_t eax_20 = sub_6627c0(ebx, &edi_3[0xfffffff0])
        
        if (eax_20 != 1)
            char ecx_20 = *edi_3
            
            if (ecx_20 != 0 && (ecx_20 & 2) != 0 && (ecx_20 & 0xc) == 0 &&
                    ((edi_3[0xfffffff3] & 0x20) != 0 || eax_20 == 3 || (*(ebx + 0x70) & 0x10000) != 0))
                sub_66f1a0(ebx, &edi_3[0xfffffff0], *(edi_3 - 8), *(edi_3 - 4))
        
        edi_3 = &edi_3[0x14]
    while (&edi_3[0xfffffff0] u< arg2[0x2f] + arg2[0x30] * 0x14)
}

// 函数名称: sub_6659a0
// 虚拟地址: 0x6659a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6659a0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t* edi = nullptr
    
    if (ebx == 0)
        return 
    
    if ((*(ebx + 0x6c) & 4) == 0)
        sub_664320(ebx, "No IDATs written into file")
        noreturn
    
    if (*(ebx + 0x130) s> zx.d(*(ebx + 0x12c)))
        sub_664350(ebx, "Wrote palette index exceeding num_palette")
    
    if (arg2 != 0)
        if ((*(arg2 + 8) & 0x200) != 0 && (*(ebx + 0x6c) & 0x200) == 0)
            sub_671180(ebx, arg2 + 0x3c)
        
        arg1 = nullptr
        
        if (*(arg2 + 0x30) s> 0)
            void* i
            
            do
                int32_t edx_1 = *(arg2 + 0x38)
                int32_t eax_2 = *(edi + edx_1)
                
                if (eax_2 s> 0)
                    void* eax_3 = edi + edx_1
                    sub_670a80(ebx, *eax_3, *(eax_3 + 4), *(eax_3 + 0x14), *(eax_3 + 0x18), 
                        *(edi + edx_1 + 8))
                    *(edi + *(arg2 + 0x38)) = 0xfffffffd
                else if (eax_2 s>= 0)
                    void* eax_5 = edi + edx_1
                    int32_t var_14_5 = *(edi + edx_1)
                    sub_670970(ebx, *(eax_5 + 4), *(eax_5 + 8), 0)
                    *(edi + *(arg2 + 0x38)) = 0xfffffffe
                else if (eax_2 == 0xffffffff)
                    int32_t var_14_6 = 0
                    sub_670870(ebx, *(edi + edx_1 + 4), *(edi + edx_1 + 8))
                    *(edi + *(arg2 + 0x38)) = 0xfffffffd
                
                i = arg1 + 1
                edi = &edi[7]
                arg1 = i
            while (i s< *(arg2 + 0x30))
        
        int32_t eax_10 = *(arg2 + 0xc0)
        
        if (eax_10 != 0)
            void* ecx_8 = *(arg2 + 0xbc)
            
            if (ecx_8 u< ecx_8 + eax_10 * 0x14)
                char* edi_1 = ecx_8 + 0x10
                
                do
                    uint32_t eax_13 = sub_6627c0(ebx, &edi_1[0xfffffff0])
                    
                    if (eax_13 != 1)
                        char ecx_9 = *edi_1
                        
                        if (ecx_9 != 0 && (ecx_9 & 8) != 0 && ((edi_1[0xfffffff3] & 0x20) != 0
                                || eax_13 == 3 || (*(ebx + 0x70) & 0x10000) != 0))
                            sub_66f1a0(ebx, &edi_1[0xfffffff0], *(edi_1 - 8), *(edi_1 - 4))
                    
                    edi_1 = &edi_1[0x14]
                while (&edi_1[0xfffffff0] u< *(arg2 + 0xbc) + *(arg2 + 0xc0) * 0x14)
    
    *(ebx + 0x6c) |= 8
    sub_66ff30(ebx)
}

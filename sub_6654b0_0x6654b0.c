// 函数名称: sub_6654b0
// 虚拟地址: 0x6654b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6654b0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0 || (*(arg1 + 0x6c) & 0x400) != 0)
    if (arg1 == 0 || arg2 == 0 || (*(arg1 + 0x6c) & 0x400) != 0)
        return 
    
    sub_66efa0(arg1)
    
    if ((*(arg1 + 0x6c) & 0x1000) != 0 && *(arg1 + 0x258) != 0)
        sub_664100(arg1, "MNG features are not allowed in a PNG datastream")
        *(arg1 + 0x258) = 0
    
    int32_t edx_3 = sub_66f910(arg1, *arg2, arg2[1], zx.d(arg2[6].b), zx.d(*(arg2 + 0x19)), 
        zx.d(*(arg2 + 0x1a)), zx.d(*(arg2 + 0x1b)), zx.d(arg2[7].b))
    
    if ((arg2[2].b & 1) != 0)
        edx_3 = sub_66ff60(arg1, arg2[0xa])
    
    if ((arg2[2] & 0x800) != 0)
        edx_3 = sub_66ffc0(arg1, zx.d(arg2[0xb].b))
    
    if ((arg2[2] & 0x1000) != 0)
        edx_3 = sub_6718d0(arg1, arg2[0x31], 0, arg2[0x32], arg2[0x33])
    
    if ((arg2[2].b & 2) != 0)
        uint32_t eax_5 = zx.d(*(arg2 + 0x19))
        sub_670020(eax_5, edx_3, &arg2[0x11], arg1, &arg2[0x11], eax_5)
    
    if ((arg2[2].b & 4) != 0)
        sub_670100(arg1, arg2[0x20], arg2[0x21], arg2[0x22], arg2[0x23], arg2[0x24], arg2[0x25], 
            arg2[0x26], arg2[0x27])
    
    void* eax = arg2[0x30]
    
    if (eax != 0)
        void* ecx_8 = arg2[0x2f]
        
        if (ecx_8 u< ecx_8 + eax * 0x14)
            char* edi_1 = ecx_8 + 0x10
            
            do
                uint32_t eax_10 = sub_6627c0(arg1, &edi_1[0xfffffff0])
                
                if (eax_10 != 1)
                    char ecx_9 = *edi_1
                    
                    if (ecx_9 != 0 && (ecx_9 & 0xe) == 0 && ((edi_1[0xfffffff3] & 0x20) != 0
                            || eax_10 == 3 || (*(arg1 + 0x70) & 0x10000) != 0))
                        if (*(edi_1 - 4) == 0)
                            sub_664100(arg1, "Writing zero-length unknown chunk")
                        
                        sub_66f1a0(arg1, &edi_1[0xfffffff0], *(edi_1 - 8), *(edi_1 - 4))
                
                edi_1 = &edi_1[0x14]
            while (&edi_1[0xfffffff0] u< arg2[0x2f] + arg2[0x30] * 0x14)
    
    *(arg1 + 0x6c) |= 0x400
}

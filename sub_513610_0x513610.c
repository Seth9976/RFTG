// 函数名称: sub_513610
// 虚拟地址: 0x513610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_513610(void* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebx = arg4
    int32_t ebx = arg4
    
    if (*arg3 == 0)
        int32_t edi_1 = *(arg1 + 0x15c)
        int32_t ecx = 0
        
        if (edi_1 s<= 0)
            goto label_51364b
        
        void* edx = arg1 + 0x14c
        
        while (*edx != *(arg3 + 0xc))
            ecx += 1
            edx += 4
            
            if (ecx s>= edi_1)
                goto label_513648
        
        if (ecx != 0xffffffff)
            ebx = arg4
        else
        label_513648:
            ebx = arg4
        label_51364b:
            ecx = edi_1
            *(arg1 + 0x15c) = edi_1 + 1
            *(arg1 + (ecx << 2) + 0x14c) = *(arg3 + 0xc)
        
        *(arg1 + ebx * 0xc + 0x164) = ecx
    
    void* ecx_1 = &data_8c1360
    
    for (int32_t i = 0x20; i u>= 4; )
        if (*(arg3 - 0x8c1338 + ecx_1) != *ecx_1)
            int32_t ecx_3 = *(arg1 + 0x2a0)
            *(arg1 + 0x2a0) = ecx_3 + 1
            *(arg1 + ebx * 0xc + 0x160) = ecx_3
            return 
        
        i -= 4
        ecx_1 += 4
    
    *(arg1 + ebx * 0xc + 0x160) = 0xffffffff
}

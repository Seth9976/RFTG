// 函数名称: sub_5959c0
// 虚拟地址: 0x5959c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5959c0(void* arg1 @ esi)
{
    // 第一条实际指令: char* eax_5 = *(arg1 + 0xa8)
    char* eax_5 = *(arg1 + 0xa8)
    void* ecx
    uint32_t ebx_1
    
    if (eax_5 u< *(arg1 + 0xac))
    label_595a19:
        ecx.b = *eax_5
        ebx_1 = zx.d(ecx.b)
        *(arg1 + 0xa8) = &eax_5[1]
    else
        ebx_1 = 0
        
        if (*(arg1 + 0x20) != 0)
            int32_t eax_1
            eax_1, ecx = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            
            if (eax_1 != 0)
                *(arg1 + 0xa8) = arg1 + 0x28
                *(arg1 + 0xac) = eax_1 + arg1 + 0x28
            else
                char* eax_3 = *(arg1 + 0xac) - 1
                *(arg1 + 0x20) = 0
                *(arg1 + 0xa8) = eax_3
                *eax_3 = 0
            
            eax_5 = *(arg1 + 0xa8)
            goto label_595a19
    
    char* eax_11 = *(arg1 + 0xa8)
    
    if (eax_11 u>= *(arg1 + 0xac))
        if (*(arg1 + 0x20) == 0)
            return ebx_1 << 8
        
        int32_t eax_8
        eax_8, ecx = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_8 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_8 + arg1 + 0x28
        else
            *(arg1 + 0x20) = eax_8
            char* eax_10 = *(arg1 + 0xac) - 1
            *(arg1 + 0xa8) = eax_10
            *eax_10 = 0
        
        eax_11 = *(arg1 + 0xa8)
    
    ecx.b = *eax_11
    *(arg1 + 0xa8) = &eax_11[1]
    return (ebx_1 << 8) + zx.d(ecx.b)
}

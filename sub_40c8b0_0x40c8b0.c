// 函数名称: sub_40c8b0
// 虚拟地址: 0x40c8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_40c8b0(void* arg1 @ esi)
{
    // 第一条实际指令: char eax
    char eax
    int32_t ecx
    int32_t ecx_1
    eax, ecx_1 = sub_4b95c0(ecx, 2)
    
    if (eax == 0)
        int32_t eax_1 = *(arg1 + 0x4c)
        int32_t ecx_2
        ecx_2.b = eax_1 s>= 0
        int32_t eax_2 = eax_1 & (ecx_2 - 1)
        *(arg1 + 0x4c) = eax_2
        return eax_2
    
    char eax_3
    int32_t ecx_4
    eax_3, ecx_4 = sub_4b95c0(ecx_1, 3)
    void* eax_4
    
    if (eax_3 != 0)
        eax_4 = sub_4b95c0(ecx_4, 4)
        
        if (eax_4.b == 0)
            eax_4 = *(arg1 + 0x4c)
            
            if (eax_4 s>= 2)
                eax_4 = 2
            
            *(arg1 + 0x4c) = eax_4
    else
        eax_4 = *(arg1 + 0x4c)
        
        if (eax_4 s>= 1)
            *(arg1 + 0x4c) = 1
            return 1
        
        *(arg1 + 0x4c) = eax_4
    
    return eax_4
}

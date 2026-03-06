// 函数名称: sub_677a50
// 虚拟地址: 0x677a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_677a50(void* arg1 @ esi)
{
    // 第一条实际指令: uint32_t edx = 0xf3ffc07f
    uint32_t edx = 0xf3ffc07f
    int32_t i = 0
    int16_t* ecx_1 = arg1 + 0x94
    
    do
        if ((edx.b & 1) != 0 && *ecx_1 != 0)
            return 0
        
        i += 1
        ecx_1 = &ecx_1[2]
        edx u>>= 1
    while (i s<= 0x1f)
    
    if (*(arg1 + 0xb8) == 0 && *(arg1 + 0xbc) == 0 && *(arg1 + 0xc8) == 0)
        int32_t eax = 0x20
        void* ecx_2 = arg1 + 0x114
        
        while (true)
            if (*ecx_2 != 0)
                return 1
            
            eax += 1
            ecx_2 += 4
            
            if (eax s>= 0x100)
                return 0
    
    return 1
}

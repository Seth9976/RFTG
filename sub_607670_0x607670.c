// 函数名称: sub_607670
// 虚拟地址: 0x607670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_607670(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* ebx = arg4
    void* ebx = arg4
    
    if (data_8bada4 == 0xffffffff)
        char* eax_1 = sub_5d2340("SDL_BLIT_CPU_FEATURES")
        data_8bada4 = 0
        
        if (eax_1 == 0)
            if (sub_612570() != 0)
                data_8bada4 |= 1
            
            if (sub_612580() != 0)
                data_8bada4 |= 2
            
            if (sub_612590() != 0)
                data_8bada4 |= 4
            
            if (sub_6125a0() != 0)
                data_8bada4 |= 8
            
            if (sub_612560() != 0)
                data_8bada4 |= 0x10
        else
            int32_t* var_10_1 = &data_8bada4
            sub_5ce160(eax_1, 0x6b918c)
    
    int32_t edi = 0
    
    if (*(ebx + 0x10) == 0)
        return 
    
    void* edx_1 = ebx
    int32_t ecx_10
    
    do
        if (arg2 == *edx_1 && arg3 == *(edx_1 + 4))
            int32_t eax_8 = *(edx_1 + 8)
            int32_t ecx_3 = arg1 & 3
            
            if ((eax_8 & ecx_3) == ecx_3)
                int32_t ecx_5 = arg1 & 0x70
                
                if ((eax_8 & ecx_5) == ecx_5)
                    int32_t ecx_7 = arg1 & 0x100
                    
                    if ((eax_8 & ecx_7) == ecx_7)
                        int32_t ecx_9 = arg1 & 0x200
                        
                        if ((eax_8 & ecx_9) == ecx_9)
                            int32_t edx_2 = *(edx_1 + 0xc)
                            
                            if ((data_8bada4 & edx_2) == edx_2)
                                *(arg4 + edi * 0x14 + 0x10)
                                return 
            
            ebx = arg4
        
        edi += 1
        ecx_10 = edi * 5
        edx_1 = ebx + (ecx_10 << 2)
    while (*(ebx + (ecx_10 << 2) + 0x10) != 0)
}

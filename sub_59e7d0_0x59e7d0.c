// 函数名称: sub_59e7d0
// 虚拟地址: 0x59e7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_59e7d0(uint32_t arg1, void* arg2, void* arg3 @ esi, int32_t arg4)
{
    // 第一条实际指令: if (arg1 s<= 0)
    if (arg1 s<= 0)
        return 
    
    void* ebx_1 = arg2 + 1
    uint32_t i_1 = arg1
    uint32_t i
    
    do
        bool* eax = *(arg3 + 0xa8)
        bool eax_2
        bool ecx
        
        if (eax u< *(arg3 + 0xac))
            ecx = *eax
            *(arg3 + 0xa8) = &eax[1]
            eax_2 = ecx
        else if (*(arg3 + 0x20) == 0)
            eax_2 = false
        else
            int32_t eax_4 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
            
            if (eax_4 != 0)
                *(arg3 + 0xa8) = arg3 + 0x28
                *(arg3 + 0xac) = arg3 + 0x28 + eax_4
            else
                *(arg3 + 0x20) = eax_4
                char* eax_6 = *(arg3 + 0xac) - 1
                *(arg3 + 0xa8) = eax_6
                *eax_6 = 0
            
            bool* eax_7 = *(arg3 + 0xa8)
            ecx = *eax_7
            *(arg3 + 0xa8) = &eax_7[1]
            eax_2 = ecx
        
        *(ebx_1 + 1) = eax_2
        bool* eax_9 = *(arg3 + 0xa8)
        bool eax_11
        
        if (eax_9 u< *(arg3 + 0xac))
            ecx = *eax_9
            *(arg3 + 0xa8) = &eax_9[1]
            eax_11 = ecx
        else if (*(arg3 + 0x20) == 0)
            eax_11 = false
        else
            int32_t eax_13 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
            
            if (eax_13 != 0)
                *(arg3 + 0xa8) = arg3 + 0x28
                *(arg3 + 0xac) = arg3 + 0x28 + eax_13
            else
                *(arg3 + 0x20) = eax_13
                char* eax_15 = *(arg3 + 0xac) - 1
                *(arg3 + 0xa8) = eax_15
                *eax_15 = 0
            
            bool* eax_16 = *(arg3 + 0xa8)
            ecx = *eax_16
            *(arg3 + 0xa8) = &eax_16[1]
            eax_11 = ecx
        
        *ebx_1 = eax_11
        bool* eax_18 = *(arg3 + 0xa8)
        
        if (eax_18 u< *(arg3 + 0xac))
            ecx = *eax_18
            *(arg3 + 0xa8) = &eax_18[1]
            arg1 = zx.d(ecx)
        else if (*(arg3 + 0x20) == 0)
            arg1 = 0
        else
            int32_t eax_21 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
            
            if (eax_21 != 0)
                *(arg3 + 0xa8) = arg3 + 0x28
                *(arg3 + 0xac) = arg3 + 0x28 + eax_21
            else
                *(arg3 + 0x20) = eax_21
                char* eax_23 = *(arg3 + 0xac) - 1
                *(arg3 + 0xa8) = eax_23
                *eax_23 = 0
            
            bool* eax_24 = *(arg3 + 0xa8)
            ecx = *eax_24
            *(arg3 + 0xa8) = &eax_24[1]
            arg1 = zx.d(ecx)
        
        *(ebx_1 - 1) = arg1.b
        arg1.b = (arg4 != 0) - 1
        *(ebx_1 + 2) = arg1.b
        ebx_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}

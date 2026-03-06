// 函数名称: sub_5a9450
// 虚拟地址: 0x5a9450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5a9450(char* arg1, char arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = arg2
    char* edx = arg1
    
    while ((edx & 3) != 0)
        char ecx = *edx
        edx = &edx[1]
        
        if (ecx == eax.b)
            return &edx[0xffffffff]
        
        if (ecx == 0)
            return 0
    
    int32_t ebx_1 = eax | eax << 8
    int32_t ebx_3 = ebx_1 << 0x10 | ebx_1
    
    while (true)
        int32_t ecx_1 = *edx
        int32_t ecx_2 = ecx_1 ^ ebx_3
        edx = &edx[4]
        
        if (((ecx_2 ^ 0xffffffff ^ (0x7efefeff + ecx_2)) & 0x81010100) != 0)
            int32_t eax_9 = *(edx - 4)
            
            if (eax_9.b == ebx_3.b)
                return &edx[0xfffffffc]
            
            if (eax_9.b == 0)
                break
            
            if (eax_9:1.b == ebx_3.b)
                return &edx[0xfffffffd]
            
            if (eax_9:1.b == 0)
                break
            
            uint16_t eax_10 = (eax_9 u>> 0x10).w
            
            if (eax_10.b == ebx_3.b)
                return &edx[0xfffffffe]
            
            if (eax_10.b == 0)
                break
            
            if (eax_10:1.b == ebx_3.b)
                return &edx[0xffffffff]
            
            if (eax_10:1.b == 0)
                break
        else
            int32_t eax_6 = (ecx_1 ^ 0xffffffff ^ (0x7efefeff + ecx_1)) & 0x81010100
            
            if (eax_6 != 0)
                if ((eax_6 & 0x1010100) != 0)
                    break
                
                if (((0x7efefeff + ecx_1) & 0x80000000) == 0)
                    break
    
    return 0
}

// 函数名称: sub_4b76b0
// 虚拟地址: 0x4b76b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4b76b0(void* arg1)
{
    // 第一条实际指令: int32_t ecx_4 = *(arg1 + 0x44)
    int32_t ecx_4 = *(arg1 + 0x44)
    
    if (ecx_4 == 2 || ecx_4 == 0)
        int32_t ecx = *(arg1 + 0x4c)
        
        if (ecx s>= 0 && ecx s<= 3)
            int32_t ecx_1 = *(arg1 + 0x48)
            
            if (ecx_1 s>= 0 && ecx_1 s<= 1 && *(arg1 + 0x40) == 2)
                int32_t ecx_2 = *(arg1 + 0x8c)
                
                if (ecx_2 s>= 0 && ecx_2 s< 3)
                    int32_t ecx_3 = 0
                    void* edx_1 = arg1 + 0x50
                    
                    while (true)
                        arg1 = *edx_1
                        
                        if (arg1 != 0 && arg1 != 1 && arg1 != 3)
                            break
                        
                        ecx_3 += 1
                        edx_1 += 0xc
                        
                        if (ecx_3 s>= 4)
                            arg1.b = 1
                            return arg1
    
    arg1.b = 0
    return arg1
}

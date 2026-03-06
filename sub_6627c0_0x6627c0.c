// 函数名称: sub_6627c0
// 虚拟地址: 0x6627c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_6627c0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 != 0 && arg2 != 0)
    if (arg1 != 0 && arg2 != 0)
        int32_t ecx_1 = *(arg1 + 0x248)
        
        if (ecx_1 s> 0)
            int32_t edx_1 = *(arg1 + 0x24c)
            int32_t* eax_2 = ecx_1 * 5 + edx_1
            
            do
                eax_2 -= 5
                
                if (*arg2 == *eax_2)
                    return zx.d(eax_2[1].b)
            while (eax_2 u> edx_1)
    
    return 0
}

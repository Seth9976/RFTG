// 函数名称: sub_46f9a0
// 虚拟地址: 0x46f9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46f9a0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*arg3 s> 0)
        do
            int32_t ebx_1 = *(arg2 + (i << 2))
            void* eax_1 = *(arg1 + ebx_1 * 0x14 + 0x46c)
            int32_t ecx_2 = sx.d(*(eax_1 + 0x15))
            int32_t edi_1 = 0
            
            if (ecx_2 s> 0)
                void* edx_2 = eax_1 + 0x20
                
                do
                    if (*(edx_2 - 8) == 3)
                        int32_t ecx_3 = *edx_2
                        int32_t var_10_1 = *(edx_2 + 4)
                        
                        if ((ecx_3 & 0x20) != 0 && (ecx_3 & 0x100) != 0)
                            *arg3 -= 1
                            *(arg2 + (i_1 << 2)) = *(arg2 + (*arg3 << 2))
                            *(arg2 + (*arg3 << 2)) = ebx_1
                            i_1 -= 1
                            break
                    
                    edi_1 += 1
                    edx_2 += 0x18
                while (edi_1 s< ecx_2)
            
            i = i_1 + 1
            i_1 = i
        while (i s< *arg3)
    
    return i
}

// 函数名称: sub_46f910
// 虚拟地址: 0x46f910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46f910(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*arg3 s> 0)
        do
            int32_t edi_1 = *(arg2 + (i << 2))
            void* eax_1 = *(arg1 + edi_1 * 0x14 + 0x46c)
            int32_t ebx_1 = sx.d(*(eax_1 + 0x15))
            int32_t edx_2 = 0
            
            if (ebx_1 s> 0)
                void* ecx_3 = eax_1 + 0x18
                
                do
                    if (*ecx_3 == 3 && (*(ecx_3 + 8) & 0x4000) != 0)
                        *arg3 -= 1
                        *(arg2 + (i_1 << 2)) = *(arg2 + (*arg3 << 2))
                        *(arg2 + (*arg3 << 2)) = edi_1
                        i_1 -= 1
                        break
                    
                    edx_2 += 1
                    ecx_3 += 0x18
                while (edx_2 s< ebx_1)
            
            i = i_1 + 1
            i_1 = i
        while (i s< *arg3)
    
    return i
}

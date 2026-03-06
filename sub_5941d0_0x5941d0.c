// 函数名称: sub_5941d0
// 虚拟地址: 0x5941d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5941d0(void* arg1)
{
    // 第一条实际指令: int32_t i_2 = *(arg1 + 8)
    int32_t i_2 = *(arg1 + 8)
    
    if (i_2 s<= 0)
        return 
    
    int32_t edx_1 = *(arg1 + 0xc)
    int32_t j_2 = *(arg1 + 4)
    int32_t edx_2 = *arg1
    int32_t i_1 = i_2
    int32_t i
    
    do
        void* ecx = edx_2 + j_2 * 3 - 3
        arg1 = edx_2 + (j_2 << 2) - 4
        
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                *(arg1 + 3) = 0xff
                *(arg1 + 2) = *(ecx + 2)
                *(arg1 + 1) = *(ecx + 1)
                *arg1 = *ecx
                arg1 -= 4
                ecx -= 3
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        edx_2 += edx_1
        i = i_1
        i_1 -= 1
    while (i != 1)
}

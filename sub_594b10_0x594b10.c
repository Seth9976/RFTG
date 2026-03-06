// 函数名称: sub_594b10
// 虚拟地址: 0x594b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_594b10(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(arg1 + 8) s<= 0)
        return 
    
    do
        uint32_t j_2 = *(arg1 + 4)
        int32_t eax_3 = *(arg1 + 0xc) * i + *arg1
        void* ecx_2 = j_2 * 3 + eax_3 - 3
        void* eax = eax_3 + (j_2 << 2) - 4
        
        if (j_2 s> 0)
            uint32_t j_1 = j_2
            uint32_t j
            
            do
                j_2.b = *ecx_2
                char var_5_1 = *(ecx_2 + 1)
                char ebx_1 = *(ecx_2 + 2)
                *(eax + 2) = j_2.b
                *(eax + 3) = 0xff
                *(eax + 1) = var_5_1
                *eax = ebx_1
                eax -= 4
                ecx_2 -= 3
                j = j_1
                j_1 -= 1
            while (j != 1)
            i = i_1
        
        i += 1
        i_1 = i
    while (i s< *(arg1 + 8))
}

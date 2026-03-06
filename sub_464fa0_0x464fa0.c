// 函数名称: sub_464fa0
// 虚拟地址: 0x464fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_464fa0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = arg1
    
    for (int32_t* i = &esi[1]; i != arg2; i = &i[1])
        int32_t edi_1 = *i
        int32_t* i_1 = i
        
        if (arg3(edi_1, *esi) == 0)
            int32_t* i_3 = &i[-1]
            
            if (arg3(edi_1, i[-1]) != 0)
                char j
                
                do
                    int32_t* i_2 = i_1
                    i_1 = i_3
                    *i_2 = *i_3
                    int32_t edx_2 = i_3[-1]
                    i_3 -= 4
                    j = arg3(edi_1, edx_2)
                while (j != 0)
            
            esi = arg1
            *i_1 = edi_1
        else
            int32_t eax_7 = ((i - esi) s>> 2) * 4
            sub_5a6c10(i - eax_7 + 4, esi, eax_7)
            *esi = edi_1
}

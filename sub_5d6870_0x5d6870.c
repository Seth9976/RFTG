// 函数名称: sub_5d6870
// 虚拟地址: 0x5d6870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d6870(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (arg1 == 0 || (*(arg1[0xd] + 0x44) & 0x100) == 0 || *(arg1[1] + 0x18) == 0)
    if (arg1 == 0 || (*(arg1[0xd] + 0x44) & 0x100) == 0 || *(arg1[1] + 0x18) == 0)
        return 
    
    sub_5d6350(arg1)
    void* eax_1 = arg1[1]
    uint32_t ecx_2 = zx.d(*(eax_1 + 9))
    
    if (ecx_2 == 2)
        eax_1.w = *(eax_1 + 0x18)
        int16_t* ebx_2 = arg1[5]
        eax_1.w = not.w(eax_1.w)
        int16_t edi_3 = eax_1.w
        int16_t edx_1 = *(arg1[0xd] + 0x48) & edi_3
        int32_t i_3 = arg1[3]
        int32_t i = i_3
        
        if (i_3 != 0)
            do
                int32_t j_2 = arg1[2]
                i -= 1
                int16_t* edx_6 = ebx_2
                
                if (j_2 != 0)
                    int32_t j = j_2
                    
                    do
                        i_3.w = *edx_6
                        i_3.w &= edi_3
                        j -= 1
                        
                        if (i_3.w == edx_1)
                            *edx_6 = i_3.w
                        
                        edx_6 = &edx_6[1]
                    while (j != 0)
                
                int32_t eax_12
                int32_t edx_7
                edx_7:eax_12 = sx.q(arg1[4])
                ebx_2 = &ebx_2[(eax_12 - edx_7) s>> 1]
            while (i != 0)
    else if (ecx_2 == 4)
        int32_t* ebx_1 = arg1[5]
        int32_t edi_2 = not.d(*(eax_1 + 0x18))
        int32_t eax_3 = *(arg1[0xd] + 0x48) & edi_2
        int32_t i_2 = arg1[3]
        int32_t i_1 = i_2
        
        if (i_2 != 0)
            do
                int32_t j_1 = arg1[2]
                i_1 -= 1
                int32_t* edx_3 = ebx_1
                
                while (j_1 != 0)
                    int32_t eax_5 = *edx_3 & edi_2
                    j_1 -= 1
                    
                    if (eax_5 == eax_3)
                        *edx_3 = eax_5
                    
                    edx_3 = &edx_3[1]
                
                int32_t eax_7
                int32_t edx_4
                edx_4:eax_7 = sx.q(arg1[4])
                ebx_1 = &ebx_1[(eax_7 + (edx_4 & 3)) s>> 2]
            while (i_1 != 0)
    
    sub_5d6380(arg1)
    sub_5d5cf0(arg1, 0, 0)
    sub_5d5f00(arg1, 1)
}

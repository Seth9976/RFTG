// 函数名称: sub_59dbc0
// 虚拟地址: 0x59dbc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59dbc0(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = sub_59db10(arg1, 0x8a5004)
    
    if (result == 0)
        return result
    
    int32_t i_1 = 0x54
    int32_t i
    
    do
        int32_t eax = *(arg1 + 0xa8)
        
        if (eax u< *(arg1 + 0xac))
            *(arg1 + 0xa8) = eax + 1
        else if (*(arg1 + 0x20) != 0)
            int32_t eax_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            
            if (eax_3 != 0)
                *(arg1 + 0xa8) = arg1 + 0x28
                *(arg1 + 0xac) = arg1 + 0x28 + eax_3
            else
                *(arg1 + 0x20) = eax_3
                char* eax_5 = *(arg1 + 0xac) - 1
                *(arg1 + 0xa8) = eax_5
                *eax_5 = 0
            
            *(arg1 + 0xa8) += 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t eax_6 = sub_59db10(arg1, "PICT")
    int32_t eax_7 = neg.d(eax_6)
    return neg.d(sbb.d(eax_7, eax_7, eax_6 != 0))
}

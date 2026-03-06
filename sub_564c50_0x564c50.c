// 函数名称: sub_564c50
// 虚拟地址: 0x564c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_564c50(void* const arg1, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t i_4 = *(arg2 + 0x10)
    int32_t i_4 = *(arg2 + 0x10)
    
    if (i_4 s< *(arg2 + 0x18))
        int32_t i = i_4
        
        do
            if (sub_564bd0(arg1, *(arg2 + 0xc), i, *(arg2 + 0x14), i + 1).b == 0)
                break
            
            *(arg2 + 0x10) += 1
            *(arg2 + 0x20) += 1
            i += 1
        while (i s< *(arg2 + 0x18))
    
    for (int32_t i_1 = *(arg2 + 0x18); i_1 s> *(arg2 + 0x10); i_1 -= 1)
        if (sub_564bd0(arg1, *(arg2 + 0xc), i_1 - 1, *(arg2 + 0x14), i_1).b == 0)
            break
        
        *(arg2 + 0x18) -= 1
    
    for (int32_t i_2 = *(arg2 + 0xc); i_2 s< *(arg2 + 0x14); i_2 += 1)
        if (sub_564bd0(arg1, i_2, *(arg2 + 0x10), i_2 + 1, *(arg2 + 0x18)).b == 0)
            break
        
        *(arg2 + 0xc) += 1
        *(arg2 + 0x1c) += 1
    
    for (int32_t i_3 = *(arg2 + 0x14); i_3 s> *(arg2 + 0xc); i_3 -= 1)
        if (sub_564bd0(arg1, i_3 - 1, *(arg2 + 0x10), i_3, *(arg2 + 0x18)).b == 0)
            break
        
        *(arg2 + 0x14) -= 1
}

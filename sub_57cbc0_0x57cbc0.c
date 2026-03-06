// 函数名称: sub_57cbc0
// 虚拟地址: 0x57cbc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_57cbc0(void* arg1 @ edi)
{
    // 第一条实际指令: void* result = data_26a6554
    void* result = data_26a6554
    
    if (*(result + 0x18) == *(arg1 + 0xc))
        int32_t* esi_1 = *(arg1 + 0x10)
        __free_base(*esi_1)
        __free_base(esi_1[1])
        
        if (esi_1[5] != 8)
            __free_base(esi_1[4])
            __free_base(esi_1[2])
        
        __free_base(esi_1[3])
        result = __free_base(esi_1)
    
    if (*(data_26a6554 + 0x14) == *(arg1 + 0xc))
        int32_t* esi_2 = *(arg1 + 0x10)
        
        if (esi_2[5] == 0x63)
            return sub_57cb70(esi_2)
    
    return result
}

// 函数名称: sub_607d00
// 虚拟地址: 0x607d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607d00(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x134)
    int32_t* esi = *(arg1 + 0x134)
    
    if (*esi == 0)
        int32_t result = esi[1]
        *esi = result
        
        if (result != 0)
            return result
        
        int32_t eax_2 = sub_5c9ee0(*(arg1 + 0xbc))
        
        if (eax_2 != 0)
            esi[1] = eax_2
            *esi = eax_2
            sub_607be0(arg1)
            sub_607c10(arg1)
    
    return *esi
}

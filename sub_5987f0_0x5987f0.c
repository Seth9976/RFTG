// 函数名称: sub_5987f0
// 虚拟地址: 0x5987f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5987f0()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    void* result = *entry_ebx
    int32_t i = 0
    
    if (*(result + 8) s> 0)
        void* esi_1 = &entry_ebx[0xd74]
        
        do
            if (*(esi_1 - 8) != 0)
                __free_base(*(esi_1 - 4))
                *(esi_1 - 8) = 0
            
            result = *esi_1
            
            if (result != 0)
                result = __free_base(result)
                *esi_1 = 0
            
            i += 1
            esi_1 += 0x38
        while (i s< *(*entry_ebx + 8))
    
    return result
}

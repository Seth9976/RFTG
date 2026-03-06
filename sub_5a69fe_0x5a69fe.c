// 函数名称: sub_5a69fe
// 虚拟地址: 0x5a69fe
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a69fe()
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    for (int32_t i = 0xbec3b8; i s< 0xbec4b0; i += 4)
        result = InterlockedExchange(i, 0)
        int32_t esi_1 = result
        
        if (esi_1 != 0)
            int32_t j
            
            do
                j = *esi_1
                sub_5ab8c8(*(esi_1 + 8))
                result = __free_base(esi_1)
                esi_1 = j
            while (j != 0)
    
    return result
}

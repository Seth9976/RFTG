// 函数名称: sub_52f7b0
// 虚拟地址: 0x52f7b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_52f7b0()
{
    // 第一条实际指令: int32_t edx = data_30d94f0
    int32_t edx = data_30d94f0
    int32_t ecx = 0
    void* result = nullptr
    
    if (edx s> 0)
        do
            if (*(*((result << 3) + &data_30d74f0) + 0x1511) == 0)
                ecx += 1
            
            result += 1
        while (result s< edx)
    
    if (data_30da51c == ecx)
        void* eax_2 = &(&data_30d9514)[data_315b330 * 0x407]
        data_30da51c = 0
        return sub_5ab990(eax_2, &data_30d9518, 0x1018)
    
    int32_t ecx_1 = 0
    
    if (edx s> 0)
        do
            result = *((ecx_1 << 3) + &data_30d74f0)
            
            if (*(result + 0x1511) == 0)
                int32_t edx_1 = *(result + 4)
                result = data_30da51c
                (&data_30d951c)[result] = edx_1
                data_30da51c += 1
                edx = data_30d94f0
            
            ecx_1 += 1
        while (ecx_1 s< edx)
    
    return result
}

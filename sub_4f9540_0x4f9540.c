// 函数名称: sub_4f9540
// 虚拟地址: 0x4f9540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_4f9540(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int128_t* edx = *(arg1 + 0xcc)
    int128_t* edx = *(arg1 + 0xcc)
    
    if (*edx == 0)
        edx = nullptr
    
    if (arg3[0x19] s<= *arg3)
        if (*(arg1 + 4) != 5)
            return sub_4fd8f0(arg1, edx, *(arg1 + 0xb0), edx)
        
        return sub_4fd8f0(arg1, edx, *(arg1 + 0xdc), edx)
    
    char* const result = arg3[0x1a]
    
    if (*(arg3 + 0x151) == 0)
        if (result != 0)
            return result
        
        return &data_83f3d3
    
    if (result == 0)
        result = &data_83f3d3
    
    return sub_4fd8f0(result, edx, result, edx)
}

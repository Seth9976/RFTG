// 函数名称: sub_649b40
// 虚拟地址: 0x649b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_649b40(void* arg1)
{
    // 第一条实际指令: int32_t* i_1 = *(arg1 + 0x54)
    int32_t* i_1 = *(arg1 + 0x54)
    int32_t* i = nullptr
    
    if (i_1 != 0)
        do
            i = i_1[1]
            __free_base(*i_1)
            *i_1 = 0
            i_1[1] = 0
            __free_base(i_1)
            i_1 = i
        while (i != 0)
    
    int32_t result = *(arg1 + 0x50)
    
    if (result != i)
        *(arg1 + 0x44) = _realloc(*(arg1 + 0x44), *(arg1 + 0x4c) + result)
        result = *(arg1 + 0x50)
        *(arg1 + 0x4c) += result
        *(arg1 + 0x50) = i
    
    *(arg1 + 0x54) = i
    *(arg1 + 0x48) = i
    return result
}

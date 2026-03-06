// 函数名称: sub_4f4320
// 虚拟地址: 0x4f4320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f4320()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = data_26a44e4
    int32_t i_1 = 8
    int32_t i
    
    do
        int32_t* j_1 = *(edi + 4)
        
        if (j_1 != 0)
            int32_t* j
            
            do
                j = *j_1
                _aligned_free_base(j_1)
                j_1 = j
            while (j != 0)
        
        *(edi + 4) = 0
        edi += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t result = data_26a44e4
    
    if (result != 0)
        result = _aligned_free_base(result)
    
    data_26a44e4 = 0
    return result
}

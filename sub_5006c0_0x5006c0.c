// 函数名称: sub_5006c0
// 虚拟地址: 0x5006c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5006c0()
{
    // 第一条实际指令: void* edi = data_30785c8
    void* edi = data_30785c8
    int32_t* i_2 = *(edi + 0x14)
    
    if (i_2 != 0)
        int32_t* i
        
        do
            i = *i_2
            _aligned_free_base(i_2)
            i_2 = i
        while (i != 0)
    
    *(edi + 0x14) = 0
    *(edi + 0x1c) = 0
    int32_t* i_3 = *(edi + 4)
    
    if (i_3 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_3
            _aligned_free_base(i_3)
            i_3 = i_1
        while (i_1 != 0)
    
    *(edi + 4) = 0
    *(edi + 0xc) = 0
    return _aligned_free_base(edi)
}

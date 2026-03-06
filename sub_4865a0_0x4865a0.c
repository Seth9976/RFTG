// 函数名称: sub_4865a0
// 虚拟地址: 0x4865a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4865a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t esi = *(((*arg1 + ((arg1[1] + (data_307d9cc << 1)) << 1)) << 2) + &data_307da64)
    int32_t esi = *(((*arg1 + ((arg1[1] + (data_307d9cc << 1)) << 1)) << 2) + &data_307da64)
    sub_407670()
    data_307cd0c = 1
    data_307d080 = 3
    data_307d084 = esi
    data_307d088 = 3
    data_307d06d = 1
    data_307d051 = 0
    char* i = &data_307cdce
    
    do
        *i = 0
        i = &i[0x1c]
    while (i s< &data_307d088:2)
    
    sub_40c7a0(&data_307cd0c)
    int32_t ecx_2 = 0
    char* i_1 = &data_307cdce
    
    do
        if (ecx_2 s< 0x10 || ecx_2 s> 0x16)
            *i_1 = 1
        
        i_1 = &i_1[0x1c]
        ecx_2 += 1
    while (i_1 s< &data_307d088:2)
    
    sub_4075c0()
    data_30d6f38 = data_307c16c
    return 0
}

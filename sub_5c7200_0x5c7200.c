// 函数名称: sub_5c7200
// 虚拟地址: 0x5c7200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

CRITICAL_SECTION*sub_5c7200()
{
    // 第一条实际指令: CRITICAL_SECTION* eax_1 = data_8b95cc
    CRITICAL_SECTION* eax_1 = data_8b95cc
    
    if (eax_1 != 0)
        sub_5d1190(eax_1)
    
    void* i_6 = data_8b95d8
    data_8b95d0 = 0
    
    if (i_6 != 0)
        void* i
        
        do
            i = *(i_6 + 0x54)
            void* i_10 = i_6
            sub_5d0af0()
            i_6 = i
        while (i != 0)
    
    void* i_7 = data_8b95e0
    
    if (i_7 != 0)
        void* i_1
        
        do
            i_1 = *(i_7 + 0x54)
            void* i_11 = i_7
            sub_5d0af0()
            i_7 = i_1
        while (i_1 != 0)
    
    void* i_8 = data_8b95e4
    
    if (i_8 != 0)
        void* i_2
        
        do
            i_2 = *(i_8 + 0x18)
            void* i_12 = i_8
            sub_5d0af0()
            i_8 = i_2
        while (i_2 != 0)
    
    void* i_9 = data_8b95e8
    
    if (i_9 != 0)
        void* i_3
        
        do
            i_3 = *(i_9 + 0x18)
            void* i_13 = i_9
            sub_5d0af0()
            i_9 = i_3
        while (i_3 != 0)
    
    __builtin_memset(&data_8b95d4, 0, 0x18)
    
    for (int32_t i_4 = 0; i_4 u< 0x400; i_4 += 4)
        int32_t var_c_1 = *(i_4 + &data_bed360)
        sub_5d0af0()
        *(i_4 + &data_bed360) = 0
    
    for (void* i_5 = data_bed764; i_5 != 0; i_5 = data_bed764)
        void* __saved_esi_2 = i_5
        data_bed764 = *(i_5 + 8)
        sub_5d0af0()
    
    CRITICAL_SECTION* result = data_8b95cc
    data_bed760 = 0
    
    if (result != 0)
        sub_5d11c0(result)
        result = sub_5d1170(data_8b95cc)
        data_8b95cc = 0
    
    return result
}

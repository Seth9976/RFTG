// 函数名称: sub_5cbdc0
// 虚拟地址: 0x5cbdc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cbdc0()
{
    // 第一条实际指令: int32_t result = data_bed8c8
    int32_t result = data_bed8c8
    
    if (result != 0)
        data_bed8c8 = 0
        
        if (data_bed828 != 0)
            sub_5dad70(data_bed8bc)
            sub_5d4790(data_bed828, nullptr)
            data_bed828 = 0
        
        sub_5dacb0(data_bed8bc)
        void* i = data_bed8cc
        data_bed8bc = 0
        
        for (; i != 0; i = data_bed8cc)
            void* i_2 = i
            data_bed8cc = *(i + 0x18)
            sub_5d0af0()
        
        while (data_bed8c4 != 0)
            void* eax_1 = data_bed8c4
            data_bed8c4 = *(eax_1 + 0x18)
            void* var_8_3 = eax_1
            sub_5d0af0()
        
        for (void* i_1 = data_bed830; i_1 != 0; i_1 = data_bed830)
            void* i_3 = i_1
            data_bed830 = *(i_1 + 8)
            sub_5d0af0()
        
        result = sub_5d1170(data_bed834)
        data_bed834 = 0
    
    return result
}

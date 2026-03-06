// 函数名称: sub_5cbec0
// 虚拟地址: 0x5cbec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cbec0()
{
    // 第一条实际指令: if (data_bed8c8 == 0)
    if (data_bed8c8 == 0)
        CRITICAL_SECTION* eax = sub_5d1140()
        data_bed834 = eax
        
        if (eax == 0)
            return 0xffffffff
        
        void** eax_1 = sub_5dac50(0)
        data_bed8bc = eax_1
        
        if (eax_1 == 0)
            sub_5d1170(data_bed834)
            return 0xffffffff
        
        data_bed8c8 = 1
        void* eax_3 = sub_5d4650(sub_5cbc70, "SDLTimer", &data_bed828)
        data_bed828 = eax_3
        
        if (eax_3 == 0)
            sub_5cbdc0()
            return 0xffffffff
        
        data_bed82c
        data_bed82c = 1
    
    return 0
}

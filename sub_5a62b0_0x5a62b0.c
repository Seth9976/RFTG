// 函数名称: sub_5a62b0
// 虚拟地址: 0x5a62b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5a62b0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 1 u> 0xb)
    if (arg1 - 1 u> 0xb)
        return 0
    
    switch (arg1 + &jump_table_5a62e0[3]:3)
        case &lookup_table_5a62f0, &lookup_table_5a62f0[1], &lookup_table_5a62f0[5], 
                &lookup_table_5a62f0[6]
            return 1
        case &lookup_table_5a62f0[2], &lookup_table_5a62f0[7]
            return 2
        case &lookup_table_5a62f0[3], &lookup_table_5a62f0[8], &lookup_table_5a62f0[0xa]
            return 4
        case &lookup_table_5a62f0[4], &lookup_table_5a62f0[9], &lookup_table_5a62f0[0xb]
            return 8
}

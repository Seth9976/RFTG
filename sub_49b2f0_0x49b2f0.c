// 函数名称: sub_49b2f0
// 虚拟地址: 0x49b2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49b2f0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 + 0xa u<= 0x14)
    if (arg1 + 0xa u<= 0x14)
        switch (&lookup_table_49b370[0xa + arg1])
            case &lookup_table_49b370
                return 0xfffffff6
            case &lookup_table_49b370[9], &lookup_table_49b370[0xa], &lookup_table_49b370[0x14]
                return 0
            case &lookup_table_49b370[0xb], &lookup_table_49b370[0xc]
                return 1
            case &lookup_table_49b370[0xd]
                return 2
            case &lookup_table_49b370[0xe]
                return 8
            case &lookup_table_49b370[0xf]
                return 3
            case &lookup_table_49b370[0x10]
                return 9
            case &lookup_table_49b370[0x11], &lookup_table_49b370[0x12]
                return 4
            case &lookup_table_49b370[0x13]
                return 5
    
    sub_49b2a0()
    noreturn
}

// 函数名称: sub_5c79a0
// 虚拟地址: 0x5c79a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c79a0()
{
    // 第一条实际指令: if (data_8b95cc == 0)
    if (data_8b95cc == 0)
        CRITICAL_SECTION* eax_1 = sub_5d1140()
        data_8b95cc = eax_1
        
        if (eax_1 == 0)
            return 0xffffffff
    
    sub_5c7830(0x303, 0)
    sub_5c7830(0x302, 0)
    sub_5c7830(0x201, 0)
    data_8b95d0 = 1
    return 0
}

// 函数名称: sub_5cd050
// 虚拟地址: 0x5cd050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cd050(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 4)
    if (arg1 u> 4)
        sub_5cce60("Unknown SDL error")
        return 0xffffffff
    
    switch (arg1)
        case 0
            sub_5cce60("Out of memory")
            return 0xffffffff
        case 1
            sub_5cce60("Error reading from datastream")
            return 0xffffffff
        case 2
            sub_5cce60("Error writing to datastream")
            return 0xffffffff
        case 3
            sub_5cce60("Error seeking in datastream")
            return 0xffffffff
        case 4
            sub_5cce60("That operation is not supported")
            return 0xffffffff
}

// 函数名称: sub_5cb340
// 虚拟地址: 0x5cb340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

charsub_5cb340(int32_t* arg1)
{
    // 第一条实际指令: sub_5c9d00(arg1)
    sub_5c9d00(arg1)
    char result = (arg1[0xc]).b
    
    if ((result & 1) != 0 && (result & 4) != 0 && (result & 0x40) == 0)
        return sub_5cb050(arg1, 1)
    
    return result
}

// 函数名称: sub_5b206f
// 虚拟地址: 0x5b206f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

charsub_5b206f(int32_t* arg1)
{
    // 第一条实际指令: char result = (arg1[3]).b
    char result = (arg1[3]).b
    
    if ((result & 0x83) != 0 && (result & 8) != 0)
        __free_base(arg1[2])
        arg1[3] &= 0xfffffbf7
        result = 0
        *arg1 = 0
        arg1[2] = 0
        arg1[1] = 0
    
    return result
}

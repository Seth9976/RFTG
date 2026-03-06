// 函数名称: sub_5c6f70
// 虚拟地址: 0x5c6f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c6f70(char arg1) __pure
{
    // 第一条实际指令: if (arg1 - 0x30 u<= 9)
    if (arg1 - 0x30 u<= 9)
        return sx.d(arg1) - 0x30
    
    if (arg1 - 0x41 u<= 5)
        return sx.d(arg1) - 0x37
    
    if (arg1 - 0x61 u> 5)
        return 0
    
    return sx.d(arg1) - 0x57
}

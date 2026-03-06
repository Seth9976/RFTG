// 函数名称: sub_5d0000
// 虚拟地址: 0x5d0000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d0000(char arg1, int32_t arg2, char arg3, int32_t* arg4)
{
    // 第一条实际指令: if (*(zx.d(arg3) + arg4[9]) == arg1)
    if (*(zx.d(arg3) + arg4[9]) == arg1)
        return 0
    
    return sub_5c6d80(arg4, arg3, arg1)
}

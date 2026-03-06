// 函数名称: __allshr
// 虚拟地址: 0x687250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")__allshr(int32_t arg1, int32_t arg2, char arg3) __pure
{
    // 第一条实际指令: if (arg3 u>= 0x40)
    if (arg3 u>= 0x40)
        return arg2 s>> 0x1f
    
    if (arg3 u>= 0x20)
        return arg2 s>> (arg3 & 0x1f)
    
    return arg1 u>> (0x1f & arg3) | arg2 << (0x20 - (0x1f & arg3))
}

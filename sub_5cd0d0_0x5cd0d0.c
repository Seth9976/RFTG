// 函数名称: sub_5cd0d0
// 虚拟地址: 0x5cd0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5cd0d0(int32_t arg1) __pure
{
    // 第一条实际指令: if (arg1.b + 0x40 u<= 0x1f)
    if (arg1.b + 0x40 u<= 0x1f)
        return 1
    
    if (arg1.b + 0x20 u<= 0xf)
        return 2
    
    arg1.b += 0x10
    return (sbb.d(arg1, arg1, 4 u< arg1.b) & 0xfffffffd) + 3
}

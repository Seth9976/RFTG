// 函数名称: sub_664c00
// 虚拟地址: 0x664c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_664c00(void* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    *(arg2 + 8) |= 0x801
    *(arg2 + 0x2c) = arg3
    *(arg2 + 0x28) = 0xb18f
    sub_664500(arg1, arg2, 0x7a26, 0x8084, 0xfa00, 0x80e8, 0x7530, 0xea60, 0x3a98, 0x1770)
}

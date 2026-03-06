// 函数名称: sub_664590
// 虚拟地址: 0x664590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_664590(void* arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    if (arg3 - 0x10 u<= 0x2540be30)
        *(arg2 + 0x28) = arg3
        *(arg2 + 8) |= 1
        return 
    
    sub_664100(arg1, "Out of range gamma value ignored")
}

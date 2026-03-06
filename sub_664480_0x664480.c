// 函数名称: sub_664480
// 虚拟地址: 0x664480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_664480(void* arg1, int32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    *(arg1 + 0x58) = arg2
    
    if (arg3 == 0)
        *(arg1 + 0x54) = sub_664440
    else
        *(arg1 + 0x54) = arg3
    
    if (*(arg1 + 0x50) != 0)
        *(arg1 + 0x50) = 0
        sub_664100(arg1, "Can't set both read_data_fn and write_data_fn in the same structure")
    
    *(arg1 + 0x168) = 0
}

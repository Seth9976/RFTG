// 函数名称: sub_6666f0
// 虚拟地址: 0x6666f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_6666f0(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        *(arg1 + 0x58) = arg2
        
        if (arg3 == 0)
            *(arg1 + 0x50) = sub_666670
        else
            *(arg1 + 0x50) = arg3
        
        if (arg4 == 0)
            *(arg1 + 0x168) = sub_6666d0
        else
            *(arg1 + 0x168) = arg4
        
        if (*(arg1 + 0x54) != 0)
            *(arg1 + 0x54) = 0
            return sub_664100(arg1, 
                "Can't set both read_data_fn and write_data_fn in the same structure")
    
    return arg1
}

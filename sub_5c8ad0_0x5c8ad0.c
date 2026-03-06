// 函数名称: sub_5c8ad0
// 虚拟地址: 0x5c8ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5c8ad0()
{
    // 第一条实际指令: int32_t eax_2 = data_bed81c
    int32_t eax_2 = data_bed81c
    
    if (eax_2 != 0xa)
        int32_t ecx_1 = data_bed818
        
        if (ecx_1 != 0xa)
            uint32_t result = zx.d(*(((ecx_1 + eax_2 * 0xa) << 1) + &data_8b9670))
            data_bed818 = ecx_1 + 1
            return result
    
    return 0
}

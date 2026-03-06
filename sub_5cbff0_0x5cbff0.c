// 函数名称: sub_5cbff0
// 虚拟地址: 0x5cbff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5cbff0(uint32_t arg1 @ esi)
{
    // 第一条实际指令: uint32_t uPeriod = data_bed8ec
    uint32_t uPeriod = data_bed8ec
    
    if (arg1 != uPeriod)
        if (uPeriod != 0)
            uPeriod = timeEndPeriod(uPeriod)
        
        data_bed8ec = arg1
        
        if (arg1 != 0)
            return timeBeginPeriod(arg1)
    
    return uPeriod
}

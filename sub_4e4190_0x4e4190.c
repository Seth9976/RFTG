// 函数名称: sub_4e4190
// 虚拟地址: 0x4e4190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4e4190()
{
    // 第一条实际指令: int32_t performanceCount
    int32_t performanceCount
    int32_t var_8
    
    if ((data_3160db0 & 1) == 0)
        data_3160db0.d |= 1
        QueryPerformanceCounter(&performanceCount)
        data_3160da8 = performanceCount
        data_3160dac = var_8
    
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    return sub_4c5f30(performanceCount_1 - data_3160da8, 
        sbb.d(var_8, data_3160dac, performanceCount_1 u< data_3160da8))
}

// 函数名称: sub_5cc0d0
// 虚拟地址: 0x5cc0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5cc0d0()
{
    // 第一条实际指令: if (data_bed8e8 == 0)
    if (data_bed8e8 == 0)
        sub_5cc060()
    
    if (data_bed8d0 == 0)
        return timeGetTime() - data_bed8d4
    
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_8
    int32_t eax
    uint32_t edx_2
    eax, edx_2 = __allmul(performanceCount_1 - data_bed8e0, 
        sbb.d(var_8, data_bed8e4, performanceCount_1 u< data_bed8e0), 0x3e8, 0)
    uint32_t result
    int32_t edx_3
    result, edx_3 = __alldiv(eax, edx_2, data_bed8d8, data_bed8dc)
    int32_t var_8_1 = edx_3
    return result
}

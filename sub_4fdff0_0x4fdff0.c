// 函数名称: sub_4fdff0
// 虚拟地址: 0x4fdff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fdff0()
{
    // 第一条实际指令: int32_t performanceCount
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    
    if (SteamAPI_Init() == 0)
        sub_4c5680("SteamAPI_Init failed")
        int32_t eax_1
        eax_1.b = 0
        return eax_1
    
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int32_t performanceCount_2 = performanceCount_1
    int32_t var_10
    int32_t var_8
    uint32_t var_28 = sub_4c5f30(performanceCount_2 - performanceCount, 
        sbb.d(var_8, var_10, performanceCount_2 u< performanceCount))
    sub_4c5680("SteamAPI_Init success. (%d ms)")
    sub_4c5680("GameCenterQueryDLC")
    int32_t eax_4
    eax_4.b = 1
    return eax_4
}

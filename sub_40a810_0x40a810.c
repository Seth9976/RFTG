// 函数名称: sub_40a810
// 虚拟地址: 0x40a810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HANDLEsub_40a810()
{
    // 第一条实际指令: sub_4c57f0("app resume")
    sub_4c57f0("app resume")
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_c
    
    if (sub_4c5f30(performanceCount_1 - data_27e7a38, 
            sbb.d(var_c, data_27e7a3c, performanceCount_1 u< data_27e7a38)) s> 0xea60)
        sub_4075c0()
        sub_402510(1)
        sub_407670()
    
    QueryPerformanceCounter(&performanceCount)
    data_27e7a38 = performanceCount
    data_27e7a3c = var_c
    return CreateThread(nullptr, 0x100000, sub_40a3e0, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
}

// 函数名称: sub_40a8b0
// 虚拟地址: 0x40a8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_40a8b0()
{
    // 第一条实际指令: sub_4c57f0("app pause")
    sub_4c57f0("app pause")
    int32_t performanceCount
    BOOL result = QueryPerformanceCounter(&performanceCount)
    data_27e7a38 = performanceCount
    int32_t var_c
    data_27e7a3c = var_c
    data_27c0600 = 0
    return result
}

// 函数名称: sub_5cc060
// 虚拟地址: 0x5cc060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5cc060()
{
    // 第一条实际指令: if (data_bed8e8 != 0)
    if (data_bed8e8 != 0)
        return 
    
    data_bed8e8 = 1
    
    if (QueryPerformanceFrequency(&data_bed8d8) != 1)
        data_bed8d0 = 0
        sub_5cbff0(1)
        data_bed8d4 = timeGetTime()
    else
        data_bed8d0 = 1
        QueryPerformanceCounter(&data_bed8e0)
    
    sub_5ced60("SDL_TIMER_RESOLUTION", sub_5cc020, 0)
}

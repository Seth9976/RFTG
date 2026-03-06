// 函数名称: sub_5ccb30
// 虚拟地址: 0x5ccb30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5ccb30(void* arg1)
{
    // 第一条实际指令: BOOL result = *(arg1 + 0x74)
    BOOL result = *(arg1 + 0x74)
    
    if (result == 0 || *(result + 4) == 0)
        return result
    
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = *(result + 4)
    return TrackMouseEvent(&eventTrack)
}

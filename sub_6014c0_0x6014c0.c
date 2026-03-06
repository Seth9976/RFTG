// 函数名称: sub_6014c0
// 虚拟地址: 0x6014c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_6014c0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: POINT point
    POINT point
    point.x = arg2
    point.y = arg3
    ClientToScreen(*(*(arg1 + 0x74) + 4), &point)
    return SetCursorPos(point.x, point.y)
}

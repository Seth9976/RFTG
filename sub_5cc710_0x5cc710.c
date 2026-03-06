// 函数名称: sub_5cc710
// 虚拟地址: 0x5cc710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5cc710(void* arg1, int32_t arg2)
{
    // 第一条实际指令: HWND hWnd = *(*(arg1 + 0x74) + 4)
    HWND hWnd = *(*(arg1 + 0x74) + 4)
    int32_t eax_1 = GetWindowLongW(hWnd, 0xfffffff0)
    int32_t dwNewLong
    
    if (arg2 == 0)
        dwNewLong = (eax_1 & 0xff35ffff) | 0x80000000
    else
        dwNewLong = (eax_1 & 0x7f35ffff) | 0xca0000
    
    SetWindowLongW(hWnd, 0xfffffff0, dwNewLong)
    return sub_5cc190(arg1, 0x734)
}

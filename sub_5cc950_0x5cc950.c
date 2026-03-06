// 函数名称: sub_5cc950
// 虚拟地址: 0x5cc950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

charsub_5cc950(void* arg1, int32_t arg2)
{
    // 第一条实际指令: HWND hWnd = *(*(arg1 + 0x74) + 4)
    HWND hWnd = *(*(arg1 + 0x74) + 4)
    
    if (arg2 == 0)
        ClipCursor(nullptr)
    else
        void var_14
        GetClientRect(hWnd, &var_14)
        ClientToScreen(hWnd, &var_14)
        POINT point
        ClientToScreen(hWnd, &point)
        ClipCursor(&var_14)
    
    char result = (*(arg1 + 0x30)).b
    
    if ((result & 1) == 0)
        return result
    
    enum SET_WINDOW_POS_FLAGS ecx_1 = 0x103
    
    if ((result & 4) == 0)
        ecx_1 = 0x113
    
    return sub_5cc190(arg1, ecx_1)
}

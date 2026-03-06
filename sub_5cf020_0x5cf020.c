// 函数名称: sub_5cf020
// 虚拟地址: 0x5cf020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_5cf020(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: if (arg2 != 0x219)
    if (arg2 != 0x219)
        return DefWindowProcW(arg1, arg2, arg3, arg4)
    
    bool cond:0_1
    
    if (arg3 == 0x8000)
        cond:0_1 = *(arg4 + 4) != 5
    label_5cf063:
        
        if (not(cond:0_1))
            data_bedd64 = 1
    else if (arg3 == 0x8004)
        cond:0_1 = *(arg4 + 4) != 5
        goto label_5cf063
    return 0
}

// 函数名称: sub_57f9b0
// 虚拟地址: 0x57f9b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_57f9b0(HWND arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = arg4
    int32_t eax = arg4
    int32_t X = arg2
    
    if (eax - X s> 0x13)
        X = eax - 0x13
        eax -= 2
        arg2 = X
        arg4 = eax
    
    int32_t* esi = data_26a6554
    
    if (esi[7] == 0)
        *(data_26a6554 + 0x1c) = sub_57daa0(*esi, X, arg1)
        eax = arg4
        X = arg2
        esi = data_26a6554
    
    MoveWindow(esi[7], X, arg3 + 2, eax - X, arg5 - 2 - (arg3 + 2), 1)
    ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
    return SetFocus(*(data_26a6554 + 0x1c))
}

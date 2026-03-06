// 函数名称: sub_57f820
// 虚拟地址: 0x57f820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_57f820(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t* eax = data_26a6554
    int32_t* eax = data_26a6554
    
    if (eax[7] == 0)
        HWND ecx
        int32_t edx
        *(data_26a6554 + 0x1c) = sub_57d3e0(*eax, edx, ecx)
        eax = data_26a6554
    
    MoveWindow(eax[7], arg1, arg2 + 1, arg3 - arg1, arg4 - (arg2 + 1), 1)
    SetWindowTextA(*(data_26a6554 + 0x1c), *(arg5 + 0x10))
    ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
    SetFocus(*(data_26a6554 + 0x1c))
    return SendMessageA(*(data_26a6554 + 0x1c), 0xb1, 0, 0xffffffff)
}

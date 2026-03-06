// 函数名称: sub_582220
// 虚拟地址: 0x582220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __fastcallsub_582220(WPARAM arg1)
{
    // 第一条实际指令: LRESULT lParam = SendMessageA(*(data_26a6554 + 0x18), 0x199, arg1, 0)
    LRESULT lParam = SendMessageA(*(data_26a6554 + 0x18), 0x199, arg1, 0)
    
    if (lParam == 0xffffffff || lParam == 0 || *(lParam + 0x14) == 0x63)
        return 0xffffffff
    
    LRESULT wParam = SendMessageA(*(data_26a6554 + 0x14), 0x18f, 0, lParam)
    
    if (wParam == 0xffffffff)
        return 0
    
    return SendMessageA(*(data_26a6554 + 0x14), 0x187, wParam, 0)
}

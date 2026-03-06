// 函数名称: sub_581e20
// 虚拟地址: 0x581e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_581e20(WPARAM arg1 @ edi)
{
    // 第一条实际指令: LRESULT lParam = SendMessageA(*(data_26a6554 + 0x18), 0x199, arg1, 0)
    LRESULT lParam = SendMessageA(*(data_26a6554 + 0x18), 0x199, arg1, 0)
    
    if (lParam == 0xffffffff || lParam == 0)
        return 0xffffffff
    
    LRESULT wParam = SendMessageA(*(data_26a6554 + 0x14), 0x18f, 0, lParam)
    
    if (wParam != 0xffffffff)
        SendMessageA(*(data_26a6554 + 0x14), 0x182, wParam, 0)
    
    return SendMessageA(*(data_26a6554 + 0x18), 0x182, arg1, 0)
}

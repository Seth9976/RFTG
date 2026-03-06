// 函数名称: sub_581e90
// 虚拟地址: 0x581e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_581e90()
{
    // 第一条实际指令: LRESULT wParam = SendMessageA(*(data_26a6554 + 0x14), 0x188, 0, 0)
    LRESULT wParam = SendMessageA(*(data_26a6554 + 0x14), 0x188, 0, 0)
    
    if (wParam != 0xffffffff)
        LRESULT lParam = SendMessageA(*(data_26a6554 + 0x14), 0x199, wParam, 0)
        
        if (lParam != 0xffffffff && lParam != 0 && *(lParam + 0x14) != 0x63)
            return SendMessageA(*(data_26a6554 + 0x18), 0x18f, 0, lParam)
    
    return 0xffffffff
}

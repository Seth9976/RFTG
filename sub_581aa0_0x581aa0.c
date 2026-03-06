// 函数名称: sub_581aa0
// 虚拟地址: 0x581aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_581aa0(LPARAM arg1 @ edi, HWND arg2, LPARAM arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        SendMessageA(*(data_26a6554 + 0x1c), 0x102, 0xd, arg1)
        SendMessageA(*(data_26a6554 + 0x20), 0x102, 0xd, arg1)
    
    return DefWindowProcA(arg2, 0x18, arg1, arg3)
}

// 函数名称: sub_528030
// 虚拟地址: 0x528030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_528030()
{
    // 第一条实际指令: HWND result
    HWND result
    
    if ((0x8000 & GetKeyState(0x11).w) != 0 && *(data_27e7bbc + 0x18) != 0
            && GetFocus() == data_30785e0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}

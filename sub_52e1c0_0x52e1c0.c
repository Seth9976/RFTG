// 函数名称: sub_52e1c0
// 虚拟地址: 0x52e1c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_52e1c0()
{
    // 第一条实际指令: HWND result
    HWND result
    
    if ((0x8000 & GetKeyState(0x20).w) != 0 && *(data_27e7bbc + 0x18) != 0
            && GetFocus() == data_30785e0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}

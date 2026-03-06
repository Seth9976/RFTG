// 函数名称: sub_5dc360
// 虚拟地址: 0x5dc360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_tsub_5dc360()
{
    // 第一条实际指令: MSG msg
    MSG msg
    
    if (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
        BOOL i
        
        do
            DispatchMessageW(&msg)
            i = PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)
        while (i != 0)
    
    int16_t result = sub_5d1040(nullptr)
    
    if (data_bede4f == 1)
        result = GetKeyState(0xa0)
        
        if ((0x8000 & result) == 0)
            result = sub_5d0bb0(0, 0xe1)
    
    if (data_bede53 == 1)
        result = GetKeyState(0xa1)
        
        if ((0x8000 & result) == 0)
            return sub_5d0bb0(0, 0xe5)
    
    return result
}

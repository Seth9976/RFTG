// 函数名称: sub_603270
// 虚拟地址: 0x603270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_603270(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (IsClipboardFormatAvailable(0xd) != 0 && OpenClipboard(sub_603100(arg1)) != 0)
        HANDLE hMem = GetClipboardData(0xd)
        
        if (hMem == 0)
            sub_5dc5a0("Couldn't get clipboard data")
        else
            int16_t* eax_4 = GlobalLock(hMem)
            int32_t var_14_1 = sub_5cd1d0(eax_4) * 2 + 2
            int16_t* var_18_1 = eax_4
            result = sub_5dd160("UTF-8", "UTF-16LE")
            GlobalUnlock(hMem)
        
        CloseClipboard()
        
        if (result != 0)
            return result
    
    return sub_5cd390(&data_83f3d3)
}

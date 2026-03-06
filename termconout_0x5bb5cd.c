// 函数名称: ___termconout
// 虚拟地址: 0x5bb5cd
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL___termconout()
{
    // 第一条实际指令: BOOL hObject = data_8b9598
    BOOL hObject = data_8b9598
    
    if (hObject != 0xffffffff && hObject != 0xfffffffe)
        return CloseHandle(hObject)
    
    return hObject
}

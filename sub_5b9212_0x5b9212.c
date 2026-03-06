// 函数名称: sub_5b9212
// 虚拟地址: 0x5b9212
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_5b9212(uint32_t arg1)
{
    // 第一条实际指令: uint32_t numberOfCharsWritten = arg1
    uint32_t numberOfCharsWritten = arg1
    
    if (data_8b9598 == 0xfffffffe)
        ___initconout()
    
    HANDLE hConsoleOutput = data_8b9598
    int16_t buffer
    
    if (hConsoleOutput != 0xffffffff
            && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
        BOOL result
        result.w = buffer
        return result
    
    return 0xffff
}

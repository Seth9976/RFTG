// 函数名称: sub_603340
// 虚拟地址: 0x603340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_603340(void* arg1)
{
    // 第一条实际指令: uint32_t eax = GetClipboardSequenceNumber()
    uint32_t eax = GetClipboardSequenceNumber()
    int32_t result = *(arg1 + 4)
    
    if (eax != result)
        if (result != 0)
            result = sub_611670()
        
        *(arg1 + 4) = eax
    
    return result
}

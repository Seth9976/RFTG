// 函数名称: sub_5acd7a
// 虚拟地址: 0x5acd7a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5acd7a()
{
    // 第一条实际指令: int32_t eax_2 = data_8b8520
    int32_t eax_2 = data_8b8520
    
    if (eax_2 != 0xffffffff)
        DecodePointer(data_bec93c)(eax_2)
        data_8b8520 = 0xffffffff
    
    uint32_t dwTlsIndex = data_8b8524
    
    if (dwTlsIndex != 0xffffffff)
        TlsFree(dwTlsIndex)
        data_8b8524 = 0xffffffff
    
    return sub_5aedad() __tailcall
}

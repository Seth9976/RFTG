// 函数名称: sub_5ad02d
// 虚拟地址: 0x5ad02d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5ad02d(void* arg1)
{
    // 第一条实际指令: if (data_8b8520 != 0xffffffff)
    if (data_8b8520 != 0xffffffff)
        if (arg1 == 0 && TlsGetValue(data_8b8524) != 0)
            arg1 = TlsGetValue(data_8b8524)(data_8b8520)
        
        DecodePointer(data_bec938)(data_8b8520, 0)
        sub_5acefe(arg1)
    
    BOOL dwTlsIndex = data_8b8524
    
    if (dwTlsIndex == 0xffffffff)
        return dwTlsIndex
    
    return TlsSetValue(dwTlsIndex, nullptr)
}

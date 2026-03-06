// 函数名称: sub_5acd29
// 虚拟地址: 0x5acd29
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5acd29()
{
    // 第一条实际指令: int32_t lpTlsValue = TlsGetValue(data_8b8524)
    int32_t lpTlsValue = TlsGetValue(data_8b8524)
    
    if (lpTlsValue == 0)
        lpTlsValue = DecodePointer(data_bec934)
        TlsSetValue(data_8b8524, lpTlsValue)
    
    return lpTlsValue
}

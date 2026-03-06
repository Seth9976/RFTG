// 函数名称: sub_5d2340
// 虚拟地址: 0x5d2340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d2340(PSTR arg1)
{
    // 第一条实际指令: uint32_t nSize = GetEnvironmentVariableA(arg1, data_bf780c, data_bf7810)
    uint32_t nSize = GetEnvironmentVariableA(arg1, data_bf780c, data_bf7810)
    
    if (nSize != 0)
        if (nSize u<= data_bf7810)
            return data_bf780c
        
        uint32_t nSize_1 = nSize
        int32_t var_18_1 = data_bf780c
        uint8_t* lpBuffer = sub_5d0ae0()
        
        if (lpBuffer != 0)
            data_bf780c = lpBuffer
            data_bf7810 = nSize
            GetEnvironmentVariableA(arg1, lpBuffer, nSize)
            return data_bf780c
    
    return 0
}

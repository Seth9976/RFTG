// 函数名称: sub_5ace6b
// 虚拟地址: 0x5ace6b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*sub_5ace6b()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    enum WIN32_ERROR dwErrCode = GetLastError()
    uint32_t* result = sub_5acd29()(data_8b8520)
    
    if (result == 0)
        result = __calloc_crt(1, 0x214)
        
        if (result != 0)
            if (DecodePointer(data_bec938)(data_8b8520, result) == 0)
                __free_base(result)
                result = nullptr
            else
                sub_5acdb7(result, 0)
                uint32_t eax_5 = GetCurrentThreadId()
                result[1] = 0xffffffff
                *result = eax_5
    
    SetLastError(dwErrCode)
    return result
}

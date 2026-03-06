// 函数名称: sub_5b2661
// 虚拟地址: 0x5b2661
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b2661()
{
    // 第一条实际指令: uint32_t __security_cookie_1 = __security_cookie
    uint32_t __security_cookie_1 = __security_cookie
    FILETIME systemTimeAsFileTime
    __builtin_memset(&systemTimeAsFileTime, 0, 8)
    int32_t edi
    int32_t var_1c = edi
    uint32_t result
    
    if (__security_cookie_1 == 0xbb40e64e || (0xffff0000 & __security_cookie_1) == 0)
        GetSystemTimeAsFileTime(&systemTimeAsFileTime)
        uint32_t esi_5 = systemTimeAsFileTime.dwHighDateTime ^ systemTimeAsFileTime.dwLowDateTime
            ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount()
        int32_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int32_t var_10
        result = var_10 ^ performanceCount
        uint32_t esi_6 = esi_5 ^ result
        
        if (esi_6 == 0xbb40e64e)
            esi_6 = 0xbb40e64f
        else if ((0xffff0000 & esi_6) == 0)
            result = (esi_6 | 0x4711) << 0x10
            esi_6 |= result
        
        __security_cookie = esi_6
        data_8b84a4 = not.d(esi_6)
    else
        result = not.d(__security_cookie_1)
        data_8b84a4 = result
    
    return result
}

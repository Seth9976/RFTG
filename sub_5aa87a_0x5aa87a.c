// 函数名称: sub_5aa87a
// 虚拟地址: 0x5aa87a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_5aa87a(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t* arg4)
{
    // 第一条实际指令: FILETIME systemTimeAsFileTime
    FILETIME systemTimeAsFileTime
    systemTimeAsFileTime.dwHighDateTime = arg3
    systemTimeAsFileTime.dwLowDateTime = arg3
    GetSystemTimeAsFileTime(&systemTimeAsFileTime)
    uint32_t dwLowDateTime = systemTimeAsFileTime.dwLowDateTime
    uint32_t result
    int32_t edx
    result, edx = __aulldiv(dwLowDateTime + 0x2ac18000, 
        adc.d(systemTimeAsFileTime.dwHighDateTime, 0xfe624e21, dwLowDateTime u>= 0xd53e8000), 0x989680, 
        0)
    
    if (edx s>= 7 && (edx s> 7 || result u> 0x93406fff))
        result = 0xffffffff
        edx = 0xffffffff
    
    if (arg4 != 0)
        *arg4 = result
        arg4[1] = edx
    
    return result
}

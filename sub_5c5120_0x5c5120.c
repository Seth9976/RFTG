// 函数名称: sub_5c5120
// 虚拟地址: 0x5c5120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c5120(int32_t* arg1 @ esi, HANDLE arg2, int32_t* arg3)
{
    // 第一条实际指令: FILETIME lastWriteTime
    FILETIME lastWriteTime
    
    if (GetFileTime(arg2, nullptr, nullptr, &lastWriteTime) == 0)
        int32_t eax_3
        
        switch (GetLastError() - 2)
            case 0
                eax_3 = 2
            case 2
                eax_3 = 0x18
            case 3
                eax_3 = 0xd
            case 4
                eax_3 = 9
            case 0x4e
                eax_3 = 0x11
            case 0x55
                eax_3 = 0x16
            case 0x6e
                eax_3 = 0x1c
            default
                eax_3 = 0
        
        zip_error_set(arg3, 5, eax_3)
        return 0xffffffff
    
    uint32_t eax_7
    int32_t edx_2
    eax_7, edx_2 = __aulldiv(lastWriteTime.dwLowDateTime, lastWriteTime.dwHighDateTime, 0x989680, 0)
    enum FILE_TYPE var_8 = FILE_TYPE_UNKNOWN
    enum FILE_TYPE eax_8 = GetFileType(arg2)
    
    if (eax_8 == FILE_TYPE_DISK)
        var_8 = eax_8
    
    int32_t fileSize
    
    if (GetFileSizeEx(arg2, &fileSize) == 0)
        zip_error_set(arg3, 5, sub_5c4bd0(GetLastError()))
        return 0xffffffff
    
    zip_stat_init(arg1)
    int32_t edx_3 = arg1[1]
    *arg1 |= 0x10
    arg1[1] = edx_3
    arg1[0xa] = eax_7 + 0x49ef6f00
    arg1[0xb] = sbb.d(edx_2, 2, eax_7 u< 0xb6109100)
    int32_t eax_14 = arg3[0x1c]
    int32_t ecx_4 = arg3[0x1d]
    
    if ((eax_14 | ecx_4) != 0)
        int32_t eax_15 = eax_14 - arg3[0x1a]
        int32_t ecx_5 = sbb.d(ecx_4, arg3[0x1b], eax_14 u< arg3[0x1a])
        *arg1 |= 4
        arg1[6] = eax_15
        arg1[1] = arg1[1]
        arg1[7] = ecx_5
        return 0
    
    if (var_8 != FILE_TYPE_UNKNOWN)
        int32_t fileSize_1 = fileSize
        int32_t eax_18 = arg1[1]
        *arg1 |= 4
        arg1[6] = fileSize_1
        int32_t var_14
        arg1[7] = var_14
        arg1[1] = eax_18
    
    return 0
}

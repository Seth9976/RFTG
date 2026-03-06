// 函数名称: zip_source_file_create
// 虚拟地址: 0x5beaa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_source_file_create(uint8_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: if (arg1 == 0 || arg5 s< 0xffffffff || (arg5 s<= 0xffffffff && arg4 u< 0xffffffff))
    if (arg1 == 0 || arg5 s< 0xffffffff || (arg5 s<= 0xffffffff && arg4 u< 0xffffffff))
        zip_error_set(arg6, 0x12, 0)
        return 0
    
    int32_t cchWideChar =
        MultiByteToWideChar(0xfde9, MB_ERR_INVALID_CHARS, arg1, 0xffffffff, nullptr, 0)
    
    if (cchWideChar == 0)
        zip_error_set(arg6, 0x12, cchWideChar)
        return 0
    
    wchar16* lpWideCharStr = sub_5a881a(cchWideChar * 2)
    
    if (lpWideCharStr == 0)
        zip_error_set(arg6, 0xe, lpWideCharStr)
        return 0
    
    MultiByteToWideChar(0xfde9, MB_ERR_INVALID_CHARS, arg1, 0xffffffff, lpWideCharStr, cchWideChar)
    int32_t* result = zip_source_win32w_create(lpWideCharStr, arg2, arg3, arg4, arg5, arg6)
    __free_base(lpWideCharStr)
    return result
}

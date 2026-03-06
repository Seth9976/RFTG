// 函数名称: sub_5b3c86
// 虚拟地址: 0x5b3c86
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b3c86(int32_t arg1, int32_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    // 第一条实际指令: HANDLE hFile = sub_5afa0b(arg1)
    HANDLE hFile = sub_5afa0b(arg1)
    
    if (hFile == 0xffffffff)
        *__errno() = 9
        return 0xffffffff
    
    int32_t edi
    int32_t var_c_1 = edi
    uint32_t result_1 = SetFilePointer(hFile, arg2, nullptr, arg3)
    enum WIN32_ERROR eax_1
    
    if (result_1 != 0xffffffff)
        eax_1 = NO_ERROR
    else
        eax_1 = GetLastError()
    
    uint32_t result
    
    if (eax_1 == NO_ERROR)
        char* eax_5 = (&data_3166ee0)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4
        *eax_5 &= 0xfd
        result = result_1
    else
        ___acrt_errno_map_os_error(eax_1)
        result = 0xffffffff
    
    return result
}

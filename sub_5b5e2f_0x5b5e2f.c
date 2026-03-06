// 函数名称: sub_5b5e2f
// 虚拟地址: 0x5b5e2f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_5b5e2f(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, enum SET_FILE_POINTER_MOVE_METHOD arg7)
{
    // 第一条实际指令: int32_t distanceToMoveHigh = arg3
    int32_t distanceToMoveHigh = arg3
    int32_t var_c = arg3
    int32_t edi
    int32_t var_14 = edi
    distanceToMoveHigh = arg6
    HANDLE hFile = sub_5afa0b(arg4)
    uint32_t result
    
    if (hFile != 0xffffffff)
        uint32_t result_1 = SetFilePointer(hFile, arg5, &distanceToMoveHigh, arg7)
        enum WIN32_ERROR eax_3
        
        if (result_1 == 0xffffffff)
            eax_3 = GetLastError()
        
        if (result_1 != 0xffffffff || eax_3 == NO_ERROR)
            char* eax_7 = (&data_3166ee0)[arg4 s>> 5] + ((arg4 & 0x1f) << 6) + 4
            *eax_7 &= 0xfd
            result = result_1
        else
            ___acrt_errno_map_os_error(eax_3)
            result = 0xffffffff
    else
        *__errno() = 9
        result = 0xffffffff
    
    return result
}

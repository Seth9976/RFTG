// 函数名称: sub_5c4f70
// 虚拟地址: 0x5c4f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c4f70(int32_t arg1, int32_t* arg2 @ esi, HANDLE arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: enum SET_FILE_POINTER_MOVE_METHOD dwMoveMethod
    enum SET_FILE_POINTER_MOVE_METHOD dwMoveMethod
    
    if (arg1 == 0)
        dwMoveMethod = FILE_BEGIN
    else if (arg1 == 1)
        dwMoveMethod = FILE_CURRENT
    else
        if (arg1 != 2)
            zip_error_set(arg2, 4, 0x16)
            return 0xffffffff
        
        dwMoveMethod = FILE_END
    
    int32_t var_10_1 = arg5
    
    if (SetFilePointerEx(arg3, arg4, nullptr, dwMoveMethod) != 0)
        return 0
    
    switch (GetLastError() - 2)
        case 0
            zip_error_set(arg2, 4, 2)
            return 0xffffffff
        case 2
            zip_error_set(arg2, 4, 0x18)
            return 0xffffffff
        case 3
            zip_error_set(arg2, 4, 0xd)
            return 0xffffffff
        case 4
            zip_error_set(arg2, 4, 9)
            return 0xffffffff
        case 0x4e
            zip_error_set(arg2, 4, 0x11)
            return 0xffffffff
        case 0x55
            zip_error_set(arg2, 4, 0x16)
            return 0xffffffff
        case 0x6e
            zip_error_set(arg2, 4, 0x1c)
            return 0xffffffff
    
    zip_error_set(arg2, 4, 0)
    return 0xffffffff
}

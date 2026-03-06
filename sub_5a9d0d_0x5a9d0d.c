// 函数名称: sub_5a9d0d
// 虚拟地址: 0x5a9d0d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a9d0d(PSTR arg1)
{
    // 第一条实际指令: enum WIN32_ERROR eax_1
    enum WIN32_ERROR eax_1
    
    if (DeleteFileA(arg1) != 0)
        eax_1 = NO_ERROR
    else
        eax_1 = GetLastError()
    
    if (eax_1 == NO_ERROR)
        return 0
    
    ___acrt_errno_map_os_error(eax_1)
    return 0xffffffff
}

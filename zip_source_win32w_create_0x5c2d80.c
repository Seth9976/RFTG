// 函数名称: zip_source_win32w_create
// 虚拟地址: 0x5c2d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_source_win32w_create(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: if (arg1 != 0 && arg5 s>= 0xffffffff && (arg5 s> 0xffffffff || arg4 u>= 0xffffffff))
    if (arg1 != 0 && arg5 s>= 0xffffffff && (arg5 s> 0xffffffff || arg4 u>= 0xffffffff))
        return sub_5c5990(arg1, 0xffffffff, arg2, arg3, arg4, arg5, 1, 0, &data_8b95b0, arg6)
    
    zip_error_set(arg6, 0x12, 0)
    return 0
}

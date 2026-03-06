// 函数名称: sub_5c5310
// 虚拟地址: 0x5c5310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c5310(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg4 u>= 0x7fffffff && (arg4 u> 0x7fffffff || arg3 u> 0xffffffff))
    if (arg4 u>= 0x7fffffff && (arg4 u> 0x7fffffff || arg3 u> 0xffffffff))
        zip_error_set(arg1, 4, 0x84)
        return 0xffffffff
    
    int32_t var_c = arg4
    int32_t var_10 = arg3
    HANDLE edx
    return sub_5c4f70(arg5, arg1, edx, arg3, arg2)
}

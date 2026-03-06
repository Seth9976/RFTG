// 函数名称: sub_5c2020
// 虚拟地址: 0x5c2020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c2020(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: if (arg4 u>= 0x7fffffff && (arg4 u> 0x7fffffff || arg3 u> 0xffffffff))
    if (arg4 u>= 0x7fffffff && (arg4 u> 0x7fffffff || arg3 u> 0xffffffff))
        zip_error_set(arg5, 0x14, 0)
        return 0xffffffff
    
    int32_t eax_2
    int32_t edx
    eax_2, edx = zip_source_read(arg1, arg2, arg3, arg4)
    
    if (edx s<= 0 && (edx s< 0 || eax_2 u< 0))
        sub_5bf050(arg5, arg1)
        return 0xffffffff
    
    if (edx s> arg4 || (edx s>= arg4 && eax_2 u>= arg3))
        return 0
    
    zip_error_set(arg5, 0x11, 0)
    return 0xffffffff
}

// 函数名称: zip_source_write
// 虚拟地址: 0x5c3940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_write(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1[9] == 1 && arg4 u<= 0x7fffffff && (arg4 u< 0x7fffffff || arg3 u<= 0xffffffff))
    if (arg1[9] == 1 && arg4 u<= 0x7fffffff && (arg4 u< 0x7fffffff || arg3 u<= 0xffffffff))
        return sub_5c2f90(arg1, arg2, arg3, arg4, 0xb)
    
    zip_error_set(&arg1[3], 0x12, 0)
    return 0xffffffff
}

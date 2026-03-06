// 函数名称: zip_source_read
// 虚拟地址: 0x5c2250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_read(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1[0xa].b != 0)
    if (arg1[0xa].b != 0)
        return 0xffffffff
    
    if (arg1[8] u> 0 && arg4 u<= 0x7fffffff && (arg4 u< 0x7fffffff || arg3 u<= 0xffffffff))
        if (arg4 != 0)
            if (arg2 != 0)
                return sub_5c2f90(arg1, arg2, arg3, arg4, 1)
        else if (arg3 == 0 || arg2 != 0)
            return sub_5c2f90(arg1, arg2, arg3, arg4, 1)
    
    zip_error_set(&arg1[3], 0x12, 0)
    return 0xffffffff
}

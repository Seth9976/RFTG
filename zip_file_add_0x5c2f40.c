// 函数名称: zip_file_add
// 虚拟地址: 0x5c2f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_file_add(void* arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg2 != 0 && arg3 != 0)
    if (arg2 != 0 && arg3 != 0)
        return sub_5c5cf0(arg1, 0xffffffff, 0xffffffff, arg2, arg3, arg4)
    
    zip_error_set(arg1 + 8, 0x12, 0)
    return 0xffffffff
}

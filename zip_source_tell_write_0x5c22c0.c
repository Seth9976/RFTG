// 函数名称: zip_source_tell_write
// 虚拟地址: 0x5c22c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_tell_write(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[9] == 1)
    if (arg1[9] == 1)
        return sub_5c2f90(arg1, 0, 0, 0, 0xd)
    
    zip_error_set(&arg1[3], 0x12, 0)
    return 0xffffffff
}

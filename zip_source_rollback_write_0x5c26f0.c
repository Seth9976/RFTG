// 函数名称: zip_source_rollback_write
// 虚拟地址: 0x5c26f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_rollback_write(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = arg1[9]
    int32_t result = arg1[9]
    
    if (result == 1 || result == 2)
        result = sub_5c2f90(arg1, 0, 0, 0, 0xa)
        arg1[9] = 0
    
    return result
}

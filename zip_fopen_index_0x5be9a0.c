// 函数名称: zip_fopen_index
// 虚拟地址: 0x5be9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**zip_fopen_index(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: return zip_fopen_index_encrypted(arg1, arg2, arg3, arg4, arg1[7])
    return zip_fopen_index_encrypted(arg1, arg2, arg3, arg4, arg1[7])
}

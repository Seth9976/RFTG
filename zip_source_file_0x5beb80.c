// 函数名称: zip_source_file
// 虚拟地址: 0x5beb80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_source_file(void* arg1, uint8_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return zip_source_file_create(arg2, arg3, arg4, arg5, arg6, arg1 + 8)
    
    return arg1
}

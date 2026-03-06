// 函数名称: zip_source_function
// 虚拟地址: 0x5c1d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_source_function(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return zip_source_function_create(arg2, arg3, arg1 + 8)
    
    return arg1
}

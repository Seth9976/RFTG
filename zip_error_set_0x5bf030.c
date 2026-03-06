// 函数名称: zip_error_set
// 虚拟地址: 0x5bf030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_error_set(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        *arg1 = arg2
        arg1[1] = arg3
    
    return arg1
}

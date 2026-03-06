// 函数名称: sub_5aec60
// 虚拟地址: 0x5aec60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aec60(char arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_14
    void* var_14
    sub_5a73dd(&var_14, arg2)
    int32_t result = zx.d(*(*(var_14 + 0xc8) + (zx.d(arg1) << 1))) & 0x8000
    char var_8
    void* var_c
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    return result
}

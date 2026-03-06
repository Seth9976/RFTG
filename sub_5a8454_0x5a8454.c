// 函数名称: sub_5a8454
// 虚拟地址: 0x5a8454
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a8454(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_14
    void* var_14
    sub_5a73dd(&var_14, arg2)
    void* eax = var_14
    int32_t result
    
    if (*(eax + 0xac) s<= 1)
        result = zx.d(*(*(eax + 0xc8) + (arg1 << 1))) & 0x80
    else
        result = sub_5aecab(arg1, 0x80, &var_14)
    
    char var_8
    void* var_c
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    return result
}

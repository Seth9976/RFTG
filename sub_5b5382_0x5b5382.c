// 函数名称: sub_5b5382
// 虚拟地址: 0x5b5382
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b5382(int32_t* arg1, char arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: void* var_14
    void* var_14
    sub_5a73dd(&var_14, arg1)
    uint32_t eax = zx.d(arg2)
    int32_t var_10
    int32_t result
    
    if ((*(var_10 + eax + 0x1d) & arg4) == 0)
        if (arg3 == 0)
            result = 0
        else
            result = zx.d(*(*(var_14 + 0xc8) + (eax << 1))) & arg3
    
    if ((*(var_10 + eax + 0x1d) & arg4) != 0 || result != 0)
        result = 1
    
    char var_8
    void* var_c
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    return result
}

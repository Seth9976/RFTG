// 函数名称: sub_663f40
// 虚拟地址: 0x663f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_663f40(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = arg4
    
    if (arg4 s< 0)
        eax_2 = not.d(eax_2) + 1
    
    void var_20
    char* result = sub_663d80(&var_20, &var_8, arg3, eax_2)
    
    if (arg4 s< 0 && result u> &var_20)
        result -= 1
        *result = 0x2d
    
    if (arg2 - 1 u<= 7)
        result = sub_663d40((arg2 << 5) + arg1 - 0x20, 0x20, 0, result)
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return result
}

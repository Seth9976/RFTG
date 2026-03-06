// 函数名称: sub_4c5780
// 虚拟地址: 0x4c5780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c5780(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_408
    void arg_8
    int32_t edx
    uint32_t eax_3 = __vcasan::DumpThisThread(&arg_8, edx, arg1, &var_408, 0x400, &arg_8)
    
    if (*(&__saved_ebp + eax_3 - 0x405) != 0xa)
        if (eax_3 s>= 0x3ff)
            *(&__saved_ebp + eax_3 - 0x405) = 0xa
        else
            *(&__saved_ebp + eax_3 - 0x404) = 0xa
            char var_407[0x3ff]
            var_407[eax_3] = 0
    
    int32_t result = sub_4c56f0(&var_408)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

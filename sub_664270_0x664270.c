// 函数名称: sub_664270
// 虚拟地址: 0x664270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_664270(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg1 == 0)
        uint32_t eax_2 = sub_664100(arg1, arg2)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_2
    
    char var_5c[0x54]
    sub_663fc0(arg1, &var_5c)
    uint32_t eax_4 = sub_664100(arg1, &var_5c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_4
}

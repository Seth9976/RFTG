// 函数名称: sub_663660
// 虚拟地址: 0x663660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_663660(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg2 == 0)
        *(arg1 + 0x70) |= 0x20000
    else
        char const* const eax_2 = "1.5.12"
        int32_t ebx
        int32_t var_94_1 = ebx
        
        do
            ebx.b = *(arg2 - "1.5.12" + eax_2)
            
            if (ebx.b != *eax_2)
                *(arg1 + 0x70) |= 0x20000
            
            ebx.b = *eax_2
            eax_2 = &eax_2[1]
        while (ebx.b != 0)
    
    if ((*(arg1 + 0x70) & 0x20000) == 0 || (arg2 != 0 && *arg2 == 0x31 && arg2[2] == 0x35))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 1
    
    char var_88[0x80]
    sub_663d40(&var_88, 0x80, 
        sub_663d40(&var_88, 0x80, 
            sub_663d40(&var_88, 0x80, sub_663d40(&var_88, 0x80, 0, "Application built with libpng-"), 
                arg2), 
            " but running with "), 
        "1.5.12")
    sub_664100(arg1, &var_88)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

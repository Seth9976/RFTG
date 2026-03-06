// 函数名称: sub_670fe0
// 虚拟地址: 0x670fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_670fe0(void* arg1, char arg2, int128_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = lstrlenA(arg3)
    int32_t eax_4 = lstrlenA(arg4)
    void* edi_1 = eax_4 + eax_3 + 2
    int32_t var_4c = eax_4
    
    if (edi_1 u> 0x40)
        uint32_t eax_5 = sub_664100(arg1, "Can't write sCAL (buffer too small)")
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    eax_4.b = arg2
    char var_48 = eax_4.b
    void var_47
    sub_5ab990(&var_47, arg3, eax_3 + 1)
    int128_t* eax_7 = sub_5ab990(&__saved_ebp + eax_3 - 0x42, arg4, var_4c)
    
    if (arg1 != 0)
        if (edi_1 u> 0xffffffff)
            sub_664320(arg1, "length exceeds PNG maxima")
            noreturn
        
        sub_66f010(arg1, edi_1)
        
        if (edi_1 != 0)
            sub_666640(arg1, &var_48, edi_1)
            sub_662280(arg1, &var_48, edi_1)
        
        eax_7 = sub_66f0f0(arg1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_7
}

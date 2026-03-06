// 函数名称: sub_41b950
// 虚拟地址: 0x41b950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_41b950(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_5c[0x2]
    __builtin_memcpy(&var_5c, 
        "\x0a\x00\x00\x00\xc9\x00\x00\x00\x14\x00\x00\x00\xca\x00\x00\x00\x1e\x00\x00\x00\xcb\x00\x00\x00\x"
    "28\x00\x00\x00\xcc\x00\x00\x00\x32\x00\x00\x00\xcd\x00\x00\x00\x3c\x00\x00\x00\xce\x00\x00\x00\x46"
    "00\x00\x00\xcf\x00\x00\x00\x50\x00\x00\x00\xd0\x00\x00\x00\x5a\x00\x00\x00\xd1\x00\x00\x00\x64\x00"
    "00\x00\xd2\x00\x00\x00", 
        0x50)
    
    for (int32_t i = 0; i s< 0xa; i += 1)
        if (arg1 s< (&var_5c)[i][0])
            var_58
            int32_t result = *(&var_58 + (i << 3))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xd3
}

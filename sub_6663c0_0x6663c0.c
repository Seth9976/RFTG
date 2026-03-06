// 函数名称: sub_6663c0
// 虚拟地址: 0x6663c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_6663c0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t esi
    
    if (arg1 != 2)
        if (arg1 != 1)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        esi = 0x2c4
    else
        esi = 0xec
    
    int128_t* result
    
    if (arg2 == 0)
        result = sub_5a881a(esi)
    else
        int32_t var_6c_1 = arg3
        void var_2cc
        result = arg2(&var_2cc, esi)
    
    if (result != 0)
        sub_5abfc0(result, 0, esi)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

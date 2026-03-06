// 函数名称: sub_4eefe0
// 虚拟地址: 0x4eefe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4eefe0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_4 = sub_466320(**(arg2 + 0x2e4))
    float (* esi_1)[0x9]
    float var_2c[0x9]
    
    if (*(*(arg2 + 0x2dc) * 0x134 + *eax_4 + 0xd9) == 0)
        int32_t eax_5 = *(arg2 + 0x2e0)
        
        if (eax_5 != 0)
            float var_4c[0x8]
            __builtin_memcpy(&var_2c, sub_4eefe0(&var_4c, eax_5), 0x20)
            esi_1 = &var_4c
            sub_405f60(esi_1, &var_2c)
        else
            esi_1 = &var_2c
            sub_405f60(esi_1, *(arg2 + 0x2e4) + 0x2c)
    else
        esi_1 = &var_2c
        sub_405f60(esi_1, arg2 + 0x2a8)
    __builtin_memcpy(arg1, esi_1, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

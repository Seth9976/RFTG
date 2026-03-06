// 函数名称: sub_4cf480
// 虚拟地址: 0x4cf480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4cf480(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t eax_2 = arg4[2]
    __builtin_strncpy(&var_14, "KCPX", 4)
    int32_t var_10_1 = 7
    int32_t var_c_1 = eax_2
    
    if (sub_5a9094(&var_14, 0xc, 1, arg3) == 1 && sub_4cf050(arg4).b != 0)
        int32_t var_1c_2 = arg5
        bool eax_4 = sub_4cf0f0(arg4, arg3.b) != 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    uint32_t eax_3
    eax_3.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_3
}

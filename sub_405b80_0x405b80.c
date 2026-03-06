// 函数名称: sub_405b80
// 虚拟地址: 0x405b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_405b80(int32_t arg1, int32_t arg2, float* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_60[0x5]
    sub_405f60(&var_60, arg3)
    void var_2c
    __builtin_memcpy(&var_2c, &var_60, 0x20)
    int32_t* ecx = *arg4
    int32_t eax_3 = ecx[1]
    
    if (eax_3 == 0x15)
        sub_4d6480(ecx)
        int32_t var_4c
        int32_t var_24 = var_4c
        char var_26 = 1
        int32_t var_48
        int32_t var_20 = var_48
        int32_t var_44
        int32_t var_1c = var_44
        void var_3c
        int32_t eax_7 = sub_4d66f0(&var_3c)
        arg4[1] = eax_7
        
        if (eax_7 == 0)
            arg4[0xf].b = 1
        
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_7
    
    if (eax_3 == 0x19)
        int128_t* eax_5 = sub_4eb180(ecx, &var_2c)
        arg4[1] = *(eax_5 + 0x78)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    char const* const var_74 = "SimpleEffectStart"
    int32_t var_78 = 0xcf1
    char const* const var_7c = "..\code\CGfx.cpp"
    char* const var_80 = &data_83f3d3
    sub_4c5870("Halt", var_80, var_7c, var_78, var_74)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

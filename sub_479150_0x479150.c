// 函数名称: sub_479150
// 虚拟地址: 0x479150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_479150(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692d88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_68 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_6c_3
    void* eax_8
    int32_t ecx_2
    void* esi
    
    if (arg3 != 0)
        if ((data_3165878 & 4) == 0)
            data_3165878.d |= 4
            int32_t var_8_5 = 2
            char const* const var_6c_4 = "players"
            data_316586c = sub_510710(data_307ca3c, arg2)
            int32_t var_8_6 = 0xffffffff
        
        data_3092a04
        char* edx_3
        eax_8, edx_3 = sub_50eb00(data_316586c, arg3)
        esi = eax_8
        
        if ((data_3165878 & 8) == 0)
            data_3165878.d |= 8
            int32_t var_8_7 = 3
            char const* const var_6c_5 = "player_000"
            eax_8 = sub_510710(data_307ca80, edx_3)
            data_3165868 = eax_8
            int32_t var_8_8 = 0xffffffff
        
        void var_58
        var_6c_3 = &var_58
        ecx_2 = data_3165868
    else
        if ((data_3165878 & 1) == 0)
            data_3165878.d |= 1
            int32_t var_8_1 = arg3
            char const* const var_6c_1 = "players"
            data_3165874 = sub_510710(data_307ca3c, arg2)
            int32_t var_8_2 = 0xffffffff
        
        data_3092a04
        void* eax_5
        char* edx_1
        eax_5, edx_1 = sub_50eb00(data_3165874, 0)
        esi = eax_5
        
        if ((data_3165878 & 2) == 0)
            data_3165878.d |= 2
            int32_t var_8_3 = 1
            char const* const var_6c_2 = "player_000"
            data_3165870 = sub_510710(data_307ca78, edx_1)
            int32_t var_8_4 = 0xffffffff
        
        ecx_2 = data_3165870
        void var_38
        eax_8 = &var_38
        var_6c_3 = &var_38
    
    __builtin_memcpy(arg4, sub_50faa0(eax_8, esi, ecx_2, var_6c_3), 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

// 函数名称: sub_4672c0
// 虚拟地址: 0x4672c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_4672c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69209e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_f8 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = 6
    char arg_4
    
    if (arg_4 == 1)
        eax_3 = 7
    
    int32_t var_18 = 2
    int32_t var_1c = eax_3
    arg_4.d = eax_3
    
    if (arg2 s> eax_3 * 2)
        arg_4.d = arg2 - eax_3
    
    int32_t eax_4
    
    if (arg1 s>= eax_3)
        arg1 -= eax_3
        eax_4 = 1
    else
        int32_t edx_3
        edx_3.b = arg2 s<= eax_3
        eax_4 = edx_3
    
    bool cond:1 = (data_31656e4 & 1) != 0
    int32_t var_24 = arg1
    int32_t var_20 = eax_4
    
    if (not(cond:1))
        data_31656e4.d |= 1
        int32_t var_8_1 = 0
        data_31656e0 = sub_4f5220(data_307c530, "rgn_playerTableau")
        int32_t var_8_2 = 0xffffffff
    
    void var_a8
    int32_t eax_7
    int80_t st0
    st0, eax_7 = sub_40a930(&var_a8)
    void var_68
    int32_t var_104 = __builtin_memcpy(&var_68, eax_7, 0x40)
    void var_e8
    int32_t eax_9
    int80_t result
    result, eax_9 = sub_4f66d0(&var_e8, data_307c530, data_31656e0, &var_24, fconvert.s(float.t(1)), 
        &var_1c, &arg_4)
    int32_t entry_ebx
    __builtin_memcpy(entry_ebx, eax_9, 0x40)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

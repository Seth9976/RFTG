// 函数名称: sub_4bba20
// 虚拟地址: 0x4bba20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4bba20(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691fee
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_f0 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    int32_t var_18 = ecx
    int32_t var_1c = 0
    
    if ((data_31656c8 & 1) == 0)
        data_31656c8.d |= 1
        int32_t var_8_1 = 0
        data_31656c4 = sub_4f5220(data_307c62c, "tblProfiles")
        int32_t var_8_2 = 0xffffffff
    
    void var_a0
    int32_t eax_4
    int80_t st0
    st0, eax_4 = sub_40a930(&var_a0)
    int32_t eax_5 = data_31656c4
    void var_60
    int32_t var_fc = __builtin_memcpy(&var_60, eax_4, 0x40)
    void var_e0
    int32_t eax_6
    int80_t result
    result, eax_6 = sub_4f66d0(&var_e0, data_307c62c, eax_5, &var_1c, 
        fconvert.s(fconvert.t(*(arg1 + 0x14))), nullptr, nullptr)
    int32_t entry_ebx
    __builtin_memcpy(entry_ebx, eax_6, 0x40)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

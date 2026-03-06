// 函数名称: sub_4674c0
// 虚拟地址: 0x4674c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4674c0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69256e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_bc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c0 = arg2.d
    int32_t eax_5
    int32_t ecx
    int32_t edx
    int80_t result
    result, eax_5 = sub_4672c0(ecx, edx)
    void var_54
    __builtin_memcpy(&var_54, eax_5, 0x40)
    
    if ((data_3165790 & 1) == 0)
        data_3165790.d |= 1
        int32_t var_8_1 = 0
        data_316578c = sub_4f5220(data_307c104, "Good")
        int32_t var_8_2 = 0xffffffff
    
    int32_t* eax_8 = sub_4f5350(data_316578c, &var_54, data_307c104, &var_54)
    *arg1 = *eax_8
    arg1[1] = eax_8[1]
    int32_t eax_9 = eax_8[3]
    arg1[2] = eax_8[2]
    arg1[3] = eax_9
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

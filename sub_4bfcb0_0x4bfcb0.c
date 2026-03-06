// 函数名称: sub_4bfcb0
// 虚拟地址: 0x4bfcb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4bfcb0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_stats@16
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_d0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31661ac & 1) == 0)
        data_31661ac.d |= 1
        int32_t var_8_1 = 0
        data_31661a8 = sub_4f5220(data_307c740, "rgnGraph")
        int32_t var_8_2 = 0xffffffff
    
    void var_c0
    int32_t eax_5
    int32_t edx
    int80_t result
    result, eax_5, edx = sub_40a930(&var_c0)
    void var_58
    __builtin_memcpy(&var_58, eax_5, 0x40)
    int32_t* eax_7 = sub_4f5350(data_31661a8, edx, data_307c740, &var_58)
    int32_t edx_1 = eax_7[1]
    float var_6c = *eax_7
    int32_t var_68 = edx_1
    int32_t var_64 = eax_7[2]
    int32_t var_60 = eax_7[3]
    sub_4bf770(&var_6c, arg1, &var_58, &var_6c)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_413a00
// 虚拟地址: 0x413a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_413a00(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69149c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_esi
    int32_t var_24 = __security_cookie ^ &__saved_esi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31654e8 & 1) == 0)
        data_31654e8.d |= 1
        int32_t var_c_1 = 0
        data_31654e4 = sub_4f5220(data_307c550, "tblGamesYours")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31654e8 & 2) == 0)
        data_31654e8.d |= 2
        int32_t var_c_3 = 1
        data_307c550
        int32_t eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_4fa480(data_31654e4)
        data_31654dc = eax_6
        data_31654e0 = edx_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1[1] * data_31654dc + *arg1 + 0xf
}

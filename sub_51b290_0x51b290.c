// 函数名称: sub_51b290
// 虚拟地址: 0x51b290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_51b290()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_697110
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_54 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    *data_30785ec = sub_5c7020(nullptr)
    sub_5c6e20()
    int32_t var_4c
    void* i
    
    for (i = sub_5c7480(&var_4c, 1, 2, 0, 0xffff); i s> 0; i = sub_5c7480(&var_4c, 1, 2, 0, 0xffff))
        int32_t eax_4 = var_4c
        
        if (eax_4 == 0x603 || eax_4 == 0x604)
            sub_51b170(&var_4c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return i
}

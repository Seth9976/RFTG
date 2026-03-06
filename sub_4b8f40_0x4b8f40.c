// 函数名称: sub_4b8f40
// 虚拟地址: 0x4b8f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b8f40()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f0f3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* (__fastcall* var_40)(int32_t* arg1) = sub_4c43d0
    void var_34
    sub_5a7116(&var_34, 4, 8, sub_4c42f0)
    int32_t var_8_1 = 0xffffffff
    int32_t result = sub_5a71d9(&var_34, 4, 8, sub_4c43d0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

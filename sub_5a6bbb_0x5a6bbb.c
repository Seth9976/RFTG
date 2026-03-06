// 函数名称: sub_5a6bbb
// 虚拟地址: 0x5a6bbb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a6bbb(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0xc
    int32_t __saved_ebp_2 = 0xc
    int32_t var_8 = 0x8a9f70
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8a9f70 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_5a6bc7
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5a7652()
    int32_t var_8_1 = 0
    int32_t result = sub_5a6ad4(arg1)
    int32_t var_8_2 = 0xfffffffe
    sub_5a6bf1()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a6bf0
    return result
}

// 函数名称: sub_5a7116
// 虚拟地址: 0x5a7116
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5a7116(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0x10
    int32_t __saved_ebp_2 = 0x10
    int32_t var_8 = 0x8a9f90
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8a9f90 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38 = &data_5a7122
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_24 = 0
    int32_t var_8_1 = 0
    
    for (int32_t i = 0; i s< arg3; i += 1)
        arg4()
        arg1 += arg2
    
    int32_t var_24_1 = 1
    int32_t var_8_2 = 0xfffffffe
    int32_t result = sub_5a7163(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a7160
    return result
}

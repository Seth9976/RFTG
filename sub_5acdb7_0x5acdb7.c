// 函数名称: sub_5acdb7
// 虚拟地址: 0x5acdb7
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5acdb7(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x8aa2a0
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x8aa2a0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_2 = &data_5acdc3
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    fsbase->NtTib.ExceptionList = &ExceptionList
    GetModuleHandleW(u"KERNEL32.DLL")
    *(arg1 + 0x5c) = 0x6b1de8
    *(arg1 + 8) = 0
    *(arg1 + 0x14) = 1
    *(arg1 + 0x70) = 1
    *(arg1 + 0xc8) = 0x43
    *(arg1 + 0x14b) = 0x43
    *(arg1 + 0x68) = 0x8b8530
    sub_5aeedd(0xd)
    int32_t var_8_1 = 0
    InterlockedIncrement(*(arg1 + 0x68))
    int32_t var_8_2 = 0xfffffffe
    sub_5ace59()
    sub_5aeedd(0xc)
    int32_t var_8_3 = 1
    *(arg1 + 0x6c) = arg2
    
    if (arg2 == 0)
        *(arg1 + 0x6c) = data_8b8c98
    
    sub_5ae927(*(arg1 + 0x6c))
    int32_t var_8_4 = 0xfffffffe
    int32_t result = sub_5ace62()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5ace52
    return result
}

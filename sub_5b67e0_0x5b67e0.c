// 函数名称: sub_5b67e0
// 虚拟地址: 0x5b67e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5b67e0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x2c
    int32_t __saved_ebp_1 = 0x2c
    int32_t var_8 = 0x8aa638
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x8aa638 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_50
    void* const var_54_2 = &data_5b67ec
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = arg3
    int32_t var_38 = 0
    int32_t var_28 = arg5[-1]
    void var_40
    int32_t* var_2c = sub_5ab746(&var_40, arg4[6])
    int32_t var_30 = __getptd()[0x22]
    int32_t var_34 = __getptd()[0x23]
    __getptd()[0x22] = arg4
    __getptd()[0x23] = arg6
    int32_t var_8_1 = 0
    arg6 = 1
    int32_t var_8_2 = 1
    int32_t result = _CallCatchBlock2(arg5, arg7, arg3, arg8, arg9)
    int32_t var_8_3 = 0
    int32_t var_8_4 = 0xfffffffe
    arg6 = 0
    sub_5b6906(&__saved_ebp, arg4, arg5)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b68fa
    return result
}

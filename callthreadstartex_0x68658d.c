// 函数名称: __callthreadstartex
// 虚拟地址: 0x68658d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void__callthreadstartex() __noreturn
{
    // 第一条实际指令: int32_t var_4 = 0xc
    int32_t var_4 = 0xc
    int32_t var_8 = 0x8aa758
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_2 = 0x8aa758 ^ __security_cookie_1
    int32_t var_30 = __security_cookie_1 ^ &var_4
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_686599
    int32_t var_8_3 = 0xfffffffe
    int32_t var_c = var_8_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t* eax = __getptd()
    int32_t var_8_1 = 0
    sub_68656e(eax[0x15](eax[0x16]))
    noreturn
}

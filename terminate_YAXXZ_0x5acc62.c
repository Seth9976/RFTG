// 函数名称: ?terminate@@YAXXZ
// 虚拟地址: 0x5acc62
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void?terminate@@YAXXZ() __noreturn
{
    // 第一条实际指令: int32_t var_4 = 8
    int32_t var_4 = 8
    int32_t var_8 = 0x8aa260
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa260 ^ __security_cookie_1
    int32_t var_2c = __security_cookie_1 ^ &var_4
    int32_t* var_1c = &var_2c
    void* const var_30 = &data_5acc6e
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1 = __getptd()[0x1e]
    
    if (eax_1 != 0)
        int32_t var_8_1 = 0
        eax_1()
        int32_t var_8_2 = 0xfffffffe
    
    sub_5a79f4()
    noreturn
}

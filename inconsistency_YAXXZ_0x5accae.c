// 函数名称: ?_inconsistency@@YAXXZ
// 虚拟地址: 0x5accae
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void?_inconsistency@@YAXXZ() __noreturn
{
    // 第一条实际指令: int32_t var_4 = 8
    int32_t var_4 = 8
    int32_t var_8 = 0x8aa280
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa280 ^ __security_cookie_1
    int32_t var_2c = __security_cookie_1 ^ &var_4
    int32_t* var_1c = &var_2c
    void* const var_30_1 = &data_5accba
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax = DecodePointer(data_bec92c)
    
    if (eax != 0)
        int32_t var_8_1 = 0
        eax()
        int32_t var_8_2 = 0xfffffffe
    
    terminate()
    noreturn
}

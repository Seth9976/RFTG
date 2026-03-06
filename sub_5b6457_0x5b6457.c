// 函数名称: sub_5b6457
// 虚拟地址: 0x5b6457
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b6457(int32_t arg1 @ esi, int32_t arg2 @ edi, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_4 = 0xc
    int32_t var_4 = 0xc
    int32_t var_8 = 0x8aa578
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_2 = 0x8aa578 ^ __security_cookie_1
    int32_t var_30 = __security_cookie_1 ^ &var_4
    int32_t* var_1c = &var_30
    void* const var_34 = &data_5b6463
    int32_t var_8_3 = 0xfffffffe
    int32_t var_c = var_8_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    *arg3
    int32_t var_20 = 1
    int32_t entry_ebx
    return sub_5b6490(&var_4, arg2, arg1, entry_ebx) __tailcall
}

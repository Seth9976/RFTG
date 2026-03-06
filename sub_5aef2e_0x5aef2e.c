// 函数名称: sub_5aef2e
// 虚拟地址: 0x5aef2e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5aef2e(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x8aa370
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa370 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_3 = &data_5aef3a
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5aeedd(0)
    int32_t var_8_1 = 0
    int32_t var_24
    int32_t var_20
    int32_t eax
    int32_t* esi
    
    if (arg1 != 0)
        esi = &data_becab4
        eax = DecodePointer(data_becab4)
        var_20 = eax
        var_24 = 0x15
    else
        esi = &data_becab0
        eax = DecodePointer(data_becab0)
        var_20 = eax
        var_24 = 2
    
    if (eax != 0 && eax != 1)
        *esi = sub_5accf7()
    
    int32_t var_8_2 = 0xfffffffe
    sub_5aefaa(0)
    int32_t result
    
    if (var_20 != 0)
        if (var_20 != 1)
            var_20(var_24)
        
        result = 1
    else
        result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5aefc7
    return result
}

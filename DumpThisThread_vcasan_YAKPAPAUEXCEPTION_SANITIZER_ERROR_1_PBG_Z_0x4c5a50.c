// 函数名称: ?DumpThisThread@__vcasan@@YAKPAPAUEXCEPTION_SANITIZER_ERROR@1@PBG@Z
// 虚拟地址: 0x4c5a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")?DumpThisThread@__vcasan@@YAKPAPAUEXCEPTION_SANITIZER_ERROR@1@PBG@Z(int32_t arg1, int32_t arg2, char* arg3, char* arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xfffffffe
    int32_t var_8 = 0xfffffffe
    int32_t var_c = 0x8aa7c8
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_c_1 = var_c ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = &var_30
    int32_t var_20 = 0
    int32_t var_8_1 = 0
    uint32_t result = sub_5a93a0(arg4, arg5, arg3, arg6)
    uint32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    
    if (result == 0xffffffff)
        arg4[arg5 - 1] = 0
        result = arg5 - 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

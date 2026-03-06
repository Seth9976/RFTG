// 函数名称: sub_5af540
// 虚拟地址: 0x5af540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5af540(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xfffffffe
    int32_t var_8 = 0xfffffffe
    int32_t var_c = 0x8aa3d0
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t edi
    int32_t var_28 = edi
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_c_1 = var_c ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = &var_2c
    int32_t var_8_1 = 0
    
    if (sub_5af4b0(&__dos_header) != 0)
        void* eax_5 = sub_5af4f0(&__dos_header, arg1 - &__dos_header)
        
        if (eax_5 != 0)
            int32_t var_8_2 = 0xfffffffe
            fsbase->NtTib.ExceptionList = ExceptionList
            return not.d(*(eax_5 + 0x24) u>> 0x1f) & 1
    
    int32_t var_8_3 = 0xfffffffe
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}

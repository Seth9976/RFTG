// 函数名称: sub_5b6afb
// 虚拟地址: 0x5b6afb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b6afb(void* arg1, int32_t* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x8aa680
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa680 ^ __security_cookie_1
    int32_t __saved_ebp
    void* var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30 = &data_5b6b07
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx_1
    
    if ((*arg3 & 0x80000000) == 0)
        ebx_1 = arg3[2] + arg2 + 0xc
    else
        ebx_1 = arg2
    
    int32_t var_8_1 = 0
    var_30 = arg4
    int32_t eax_1 = sub_5b697c(arg1, arg2, arg3, var_30)
    void* const* esp = &var_2c
    int32_t result
    
    if (eax_1 == 1)
        var_30 = arg4 + 8
        var_30 = sub_5b66f8(*(arg1 + 0x18), var_30)
        result = sub_5ab499(ebx_1, *(arg4 + 0x18), var_30)
        esp = &var_2c
    else
        result = eax_1 - 2
        
        if (eax_1 == 2)
            var_30 = 1
            void* eax_4 = sub_5b66f8(*(arg1 + 0x18), arg4 + 8)
            result = sub_5ab499(ebx_1, *(arg4 + 0x18), eax_4)
            esp = &var_30
    
    int32_t var_8_2 = 0xfffffffe
    *(esp - 4) = &data_5b6b7f
    fsbase->NtTib.ExceptionList = ExceptionList
    esp[1]
    esp[2]
    esp[3]
    int32_t __saved_ebp_2 = *(esp - 4)
    return result
}

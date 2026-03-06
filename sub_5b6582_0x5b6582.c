// 函数名称: sub_5b6582
// 虚拟地址: 0x5b6582
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*sub_5b6582(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x8aa598
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x8aa598 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38 = &data_5b658e
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg2
    int32_t esi
    
    if (*(edi + 4) s> 0x80)
        esi = *(arg1 + 8)
    else
        esi = sx.d(*(arg1 + 8))
    
    int32_t var_20 = esi
    uint32_t* eax = __getptd()
    eax[0x24] += 1
    int32_t var_8_1 = 0
    
    while (esi != arg3)
        if (esi s<= 0xffffffff || esi s>= *(edi + 4))
            _inconsistency()
            noreturn
        
        int32_t eax_1 = esi
        int32_t ecx_1 = *(edi + 8)
        esi = *(ecx_1 + (eax_1 << 3))
        int32_t var_24_1 = esi
        int32_t var_8_2 = 1
        
        if (*(ecx_1 + (eax_1 << 3) + 4) != 0)
            *(arg1 + 8) = esi
            int32_t* ecx_2 = *(edi + 8)
            esi, edi = __CallSettingFrame@12(ecx_2, ecx_2[eax_1 * 2 + 1], arg1, 0x103)
        
        int32_t var_8_3 = 0
        int32_t var_20_1 = esi
    
    int32_t var_8_4 = 0xfffffffe
    uint32_t* result = $LN18()
    
    if (esi != arg3)
        _inconsistency()
        noreturn
    
    *(arg1 + 8) = esi
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b663d
    return result
}

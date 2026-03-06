// 函数名称: sub_4327c0
// 虚拟地址: 0x4327c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4327c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_695e08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_74 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3
    
    if (arg3 != 0xffffffff)
        eax_3 = sub_46b360(arg3)
    else
        eax_3 = &ExceptionList | arg3
    
    void* edx = *(data_27e7a40 + 0x548)
    
    if (edx == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    bool ecx_2 = sub_49c940(eax_3, 0x10000, *(edx + 0x45844)) != 0
    void* eax_6 = 6
    
    if (ecx_2 == 1)
        eax_6 = 7
    
    int32_t var_2c = 2
    void* var_30 = eax_6
    void* var_14 = eax_6
    
    if (arg5 s> eax_6 * 2)
        var_14 = arg5 - eax_6
    
    int32_t ecx_6 = arg4
    int32_t eax_7
    
    if (ecx_6 s>= eax_6)
        ecx_6 -= eax_6
        eax_7 = 1
    else
        eax_7 = 0
    
    int32_t var_28 = ecx_6
    int32_t var_24 = eax_7
    
    if (arg5 s<= 6)
        int32_t var_24_1 = 1
    
    data_3092a04
    
    if ((data_3166090 & 1) == 0)
        data_3166090.d |= 1
        int32_t var_8_1 = 0
        char const* const var_78_1 = "players"
        data_316608c = sub_510710(data_307ca3c, arg5)
        int32_t var_8_2 = 0xffffffff
    
    int32_t eax_10
    char* edx_3
    eax_10, edx_3 = sub_50eb00(data_316608c, 0)
    
    if ((data_3166090 & 2) == 0)
        data_3166090.d |= 2
        int32_t var_8_3 = 1
        char const* const var_78_2 = "uiTableau"
        data_3166088 = sub_510710(data_307ca78, edx_3)
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166090 & 4) == 0)
        data_3166090.d |= 4
        int32_t var_8_5 = 2
        data_3166084 = sub_4f5220(data_307ca84, "rgn_playerTableau")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166090 & 8) == 0)
        data_3166090.d |= 8
        int32_t var_8_7 = 3
        data_3166080 = sub_4f5220(data_307c104, "Good")
        int32_t var_8_8 = 0xffffffff
    
    void* eax_16 = sub_4f4890(data_307c104)
    float ecx_8 = *(eax_16 + 8)
    float edx_5 = *(eax_16 + 0xc)
    float var_38 = *(eax_16 + 0x10)
    long double x87_r7_2 = fconvert.t(*(eax_16 + 0x14))
    var_38 = fconvert.s(fconvert.t(var_38) - fconvert.t(ecx_8))
    int32_t eax_18 = data_3166084
    float var_34_1 = fconvert.s(x87_r7_2 - fconvert.t(edx_5))
    float var_64[0x9]
    int32_t eax_19
    int80_t result
    result, eax_19 = sub_50fd20(eax_18, eax_10, data_3166080, &var_64, data_3166088, eax_18, &var_28, 
        &var_38, &var_30, &var_14)
    void* entry_ebx
    __builtin_memcpy(entry_ebx, eax_19, 0x20)
    sub_432170(entry_ebx, ecx_2, arg4, arg5)
    *(entry_ebx + 0x18) =
        fconvert.s(fconvert.t(*(entry_ebx + 0x18)) - fconvert.t(0.0099999997764825821))
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

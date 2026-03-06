// 函数名称: sub_4322c0
// 虚拟地址: 0x4322c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4322c0(void* arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_695ec8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_6c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_4 = *(data_27e7a40 + 0x548)
    
    if (eax_4 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    bool ecx_1 = sub_49c940(arg2, 0x10000, *(eax_4 + 0x45844)) != 0
    void* eax_7 = 6
    
    if (ecx_1 == 1)
        eax_7 = 7
    
    int32_t var_34 = 2
    void* var_38 = eax_7
    void* var_14 = eax_7
    
    if (arg4 s> eax_7 * 2)
        var_14 = arg4 - eax_7
    
    int32_t ecx_5 = arg3
    int32_t eax_8
    
    if (ecx_5 s>= eax_7)
        ecx_5 -= eax_7
        eax_8 = 1
    else
        eax_8 = 0
    
    int32_t var_30 = ecx_5
    int32_t var_2c = eax_8
    
    if (arg4 s<= 6)
        int32_t var_2c_1 = 1
    
    data_3092a04
    
    if ((data_31660b8 & 1) == 0)
        data_31660b8.d |= 1
        int32_t var_8_1 = 0
        char const* const var_70_1 = "players"
        data_31660b4 = sub_510710(data_307ca3c, arg4)
        int32_t var_8_2 = 0xffffffff
    
    int32_t eax_11
    char* edx_2
    eax_11, edx_2 = sub_50eb00(data_31660b4, 0)
    
    if ((data_31660b8 & 2) == 0)
        data_31660b8.d |= 2
        int32_t var_8_3 = 1
        char const* const var_70_2 = "uiTableau"
        data_31660b0 = sub_510710(data_307ca78, edx_2)
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31660b8 & 4) == 0)
        data_31660b8.d |= 4
        int32_t var_8_5 = 2
        data_31660ac = sub_4f5220(data_307ca84, "rgn_playerTableau")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_31660b8 & 8) == 0)
        data_31660b8.d |= 8
        int32_t var_8_7 = 3
        data_31660a8 = sub_4f5220(data_307c104, "Takeover")
        int32_t var_8_8 = 0xffffffff
    
    int32_t* eax_18 = *sub_466320(data_307c39c)
    long double x87_r7 = float.t(*eax_18)
    
    if (*eax_18 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_18[1])
    
    if (eax_18[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    float var_24 = fconvert.s(x87_r7_1)
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_18[2])))
    float var_1c = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    float var_18_1 = fconvert.s(x87_r7_3 * fconvert.t(var_24))
    int32_t eax_20 = data_31660b0
    float var_5c[0x9]
    int32_t eax_21
    int80_t result
    result, eax_21 = sub_50fd20(eax_20, eax_11, data_31660a8, &var_5c, eax_20, data_31660ac, &var_30, 
        &var_1c, &var_38, &var_14)
    __builtin_memcpy(arg1, eax_21, 0x20)
    sub_432170(arg1, ecx_1, arg3, arg4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

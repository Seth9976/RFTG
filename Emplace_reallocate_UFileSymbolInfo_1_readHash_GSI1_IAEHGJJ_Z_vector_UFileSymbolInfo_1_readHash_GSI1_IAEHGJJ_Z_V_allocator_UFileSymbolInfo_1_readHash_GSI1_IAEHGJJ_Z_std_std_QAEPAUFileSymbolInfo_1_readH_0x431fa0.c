// 函数名称: ??$_Emplace_reallocate@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@?$vector@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@V?$allocator@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@std@@@std@@QAEPAUFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@QAU2?1??34@IAEHGJJ@Z@$$QAU2?1??34@IAEHGJJ@Z@@Z
// 虚拟地址: 0x431fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t??$_Emplace_reallocate@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@?$vector@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@V?$allocator@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@std@@@std@@QAEPAUFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@QAU2?1??34@IAEHGJJ@Z@$$QAU2?1??34@IAEHGJJ@Z@@Z(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693ab8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_5c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_3165a48 & 1) == 0)
        data_3165a48.d |= 1
        int32_t var_8_1 = 0
        char const* const var_60_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_3165a44 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165a48 & 2) == 0)
        data_3165a48.d |= 2
        int32_t var_8_3 = 1
        char const* const var_60_2 = "dist_starting_world"
        data_3165a40 = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    sub_50eb00(data_3165a44, 0)
    int32_t eax_8
    char* edx_3
    eax_8, edx_3 = sub_50eb00(data_3165a40, arg2)
    
    if (eax_8 == 0)
        sub_4c5870("cardFab != DATAID_NULL", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2501, 
            "LocStartingWorld")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((data_3165a48 & 4) == 0)
        data_3165a48.d |= 4
        int32_t var_8_5 = 2
        char const* const var_60_3 = "card"
        data_3165a3c = sub_510710(data_307c79c, edx_3)
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165a48 & 8) == 0)
        data_3165a48.d |= 8
        int32_t var_8_7 = 3
        data_3165a38 = sub_4f5220(data_307c104, "Card")
        int32_t var_8_8 = 0xffffffff
    
    void* eax_14 = sub_4f4890(data_307c104)
    float ecx_2 = *(eax_14 + 8)
    float edx_4 = *(eax_14 + 0xc)
    float var_20 = *(eax_14 + 0x10)
    int32_t edx_6 = data_3165a38
    long double x87_r7_3 = fconvert.t(*(eax_14 + 0x14)) - fconvert.t(edx_4)
    var_20 = fconvert.s(fconvert.t(var_20) - fconvert.t(ecx_2))
    int32_t eax_16 = data_3165a3c
    float var_1c_1 = fconvert.s(x87_r7_3)
    float var_4c[0x9]
    int32_t eax_17
    int80_t result
    result, eax_17 = sub_50fbc0(eax_16, eax_8, &var_20, &var_4c, eax_16, edx_6)
    __builtin_memcpy(arg1, eax_17, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

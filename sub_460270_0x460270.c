// 函数名称: sub_460270
// 虚拟地址: 0x460270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_460270(int32_t arg1, int32_t arg2, float* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692dbe
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_48 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_4 = *(data_27e7a40 + 0x548)
    
    if (eax_4 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_8
    char* edx
    eax_8, edx = sub_487cf0(arg4, sx.d(*(*(eax_4 + 0x45844) + 0x458)))
    
    if ((data_3165880 & 1) == 0)
        data_3165880.d |= 1
        int32_t var_8_1 = 0
        char const* const var_4c_1 = "players"
        data_316587c = sub_510710(data_307ca3c, edx)
        int32_t var_8_2 = 0xffffffff
    
    data_3092a04
    int32_t eax_11 = sub_50eb00(data_316587c, 0)
    void var_38
    int80_t result = sub_50d8d0(eax_11, eax_11, arg3, eax_8, &var_38)
    sub_4dad50()
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

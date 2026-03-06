// 函数名称: sub_433c40
// 虚拟地址: 0x433c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_433c40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692f3e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 == *(data_27e7a40 + 0x74))
        sub_4c5870("who != gCClient->localPlayerWho", &data_83f3d3, "..\code\RFTGClient.cpp", 0x26c1, 
            "VRDisplayLocation")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_3092a04
    
    if ((data_31658c0 & 1) == 0)
        data_31658c0.d |= 1
        int32_t var_8_1 = 0
        char const* const var_4c_1 = "players"
        char* edx
        data_31658bc = sub_510710(data_307ca3c, edx)
        int32_t var_8_2 = 0xffffffff
    
    int32_t eax_7 = sub_50eb00(data_31658bc, 0)
    int32_t esi_2
    
    if (arg1 != 0xffffffff)
        esi_2 = *sub_46b2b0(arg1)
    else
        esi_2 = arg1
    
    int32_t eax_11 = sub_487b90(esi_2, sx.d(*(sub_418a10() + 0x458)))
    void var_38
    float* entry_result
    __builtin_memcpy(entry_result, sub_50faa0(eax_11, eax_7, eax_11, &var_38), 0x20)
    *entry_result = fconvert.s(fconvert.t(*entry_result) * fconvert.t(0.0010000000474974513))
    fsbase->NtTib.ExceptionList = ExceptionList
    return entry_result
}

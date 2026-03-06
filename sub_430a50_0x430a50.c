// 函数名称: sub_430a50
// 虚拟地址: 0x430a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_430a50(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6926ac
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_e8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31657c0 & 1) == 0)
        data_31657c0.d |= 1
        int32_t var_8_1 = 0
        data_31657bc = sub_4f5220(data_307c584, "tbl_opponentIcons")
        int32_t var_8_2 = 0xffffffff
    
    int32_t* ebx = data_307c5cc
    
    if ((data_31657c0 & 2) == 0)
        data_31657c0.d |= 2
        int32_t var_8_3 = 1
        data_31657b8 = sub_4f5220(ebx, "ico_prestige")
        int32_t var_8_4 = 0xffffffff
    
    if (*(data_27e7a40 + 0x548) == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_20 = 4
    int32_t var_1c = 0
    int32_t* edx = data_307c584
    int32_t var_f4 = 1
    int32_t var_70 = 5
    int32_t var_6c = 1
    void var_d8
    int32_t eax_8
    int32_t edx_1
    int80_t result
    result, eax_8, edx_1 =
        sub_4f66d0(&var_d8, edx, data_31657bc, &var_20, fconvert.s(float.t(1)), &var_70, nullptr)
    int32_t eax_9 = data_31657b8
    void var_68
    __builtin_memcpy(&var_68, eax_8, 0x40)
    int32_t* eax_10 = sub_4f5350(eax_9, edx_1, ebx, &var_68)
    int32_t ecx_4 = eax_10[1]
    float var_28 = *eax_10
    int32_t var_24 = ecx_4
    int32_t var_1c_1 = eax_10[3]
    var_20 = eax_10[2]
    __builtin_memcpy(arg1, sub_430000(&var_28, 1), 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

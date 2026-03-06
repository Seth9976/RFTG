// 函数名称: sub_430880
// 虚拟地址: 0x430880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_430880(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6926fc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_f0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_6c = arg3
    
    if ((data_31657cc & 1) == 0)
        data_31657cc.d |= 1
        int32_t var_8_1 = 0
        data_31657c8 = sub_4f5220(data_307c584, "tbl_opponentIcons")
        int32_t var_8_2 = 0xffffffff
    
    int32_t* ebx = data_307c5cc
    
    if ((data_31657cc & 2) == 0)
        data_31657cc.d |= 2
        int32_t var_8_3 = 1
        data_31657c4 = sub_4f5220(ebx, "ico_vpChit")
        int32_t var_8_4 = 0xffffffff
    
    int32_t edi = 4
    int32_t eax_7
    
    if (arg2 != 0xffffffff)
        eax_7 = *sub_46b2b0(arg2)
    else
        eax_7 = 0xffffffff
    
    if (*((eax_7 << 2) + &data_c020f8) s> 0)
        edi = 3
    
    if (*(data_27e7a40 + 0x548) == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = data_31657c8
    int32_t var_1c = 0
    int32_t var_78 = 5
    int32_t* eax_10 = data_307c584
    int32_t var_fc = 1
    int32_t var_74 = 1
    int32_t var_20 = edi
    void var_e0
    int32_t eax_12
    int80_t result
    result, eax_12 =
        sub_4f66d0(&var_e0, eax_10, edx_1, &var_20, fconvert.s(float.t(1)), &var_78, nullptr)
    int32_t eax_13 = data_31657c4
    void var_68
    __builtin_memcpy(&var_68, eax_12, 0x40)
    int32_t* eax_14 = sub_4f5350(eax_13, &var_68, ebx, &var_68)
    int32_t edx_3 = eax_14[1]
    float var_28 = *eax_14
    int32_t var_24 = edx_3
    int32_t edx_4 = eax_14[3]
    var_20 = eax_14[2]
    int32_t var_1c_1 = edx_4
    __builtin_memcpy(arg1, sub_430000(&var_28, 1), 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

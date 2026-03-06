// 函数名称: sub_430c00
// 虚拟地址: 0x430c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_430c00(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPBDI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_ec = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_68 = arg5
    
    if ((data_31657b4 & 1) == 0)
        data_31657b4.d |= 1
        int32_t var_8_1 = 0
        data_31657b0 = sub_4f5220(data_307c584, "tbl_opponentIcons")
        int32_t var_8_2 = 0xffffffff
    
    int32_t* ebx = data_307c5cc
    int32_t eax_5 = 2
    
    if ((data_31657b4 & 2) == 0)
        data_31657b4.d |= 2
        int32_t var_8_3 = 1
        eax_5 = sub_4f5220(ebx, "ico_goalBack")
        data_31657ac = eax_5
        int32_t var_8_4 = 0xffffffff
    
    int32_t edi = 4
    int32_t eax_6
    
    if (arg3 != 0xffffffff)
        eax_6 = *sub_46b2b0(arg3)
    else
        eax_6 = eax_5 | arg3
    
    if (*((eax_6 << 2) + &data_c020f8) s> 0)
        edi = 3
    
    int32_t eax_8
    
    if (arg3 != 0xffffffff)
        eax_8 = *sub_46b2b0(arg3)
    else
        eax_8 = eax_6 | arg3
    
    if (*((eax_8 << 2) + &data_c020e8) s> 0)
        edi -= 1
    
    if (*(data_27e7a40 + 0x548) == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = data_31657b0
    int32_t var_18 = 0
    int32_t var_74 = 5
    int32_t* eax_11 = data_307c584
    int32_t var_f8 = 1
    int32_t var_70 = 1
    int32_t var_1c = edi
    void var_dc
    int32_t eax_13
    int80_t result
    result, eax_13 =
        sub_4f66d0(&var_dc, eax_11, edx_1, &var_1c, fconvert.s(float.t(1)), &var_74, nullptr)
    int32_t eax_14 = data_31657ac
    void var_64
    __builtin_memcpy(&var_64, eax_13, 0x40)
    int32_t* eax_15 = sub_4f5350(eax_14, &var_64, ebx, &var_64)
    int32_t edx_3 = eax_15[1]
    float var_24 = *eax_15
    int32_t var_20 = edx_3
    int32_t edx_4 = eax_15[3]
    var_1c = eax_15[2]
    int32_t var_18_1 = edx_4
    __builtin_memcpy(arg4, sub_430000(&var_24, 1), 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

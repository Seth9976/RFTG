// 函数名称: sub_460380
// 虚拟地址: 0x460380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_460380(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4 @ esi, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6966de
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_fc = arg4
    int32_t var_104 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = arg5[0x16]
    int32_t var_5c = arg6
    int32_t esi
    
    if (edi != 0xffffffff)
        esi = sub_46b360(edi)
    else
        esi = arg4 | edi
    
    int32_t eax_5
    int32_t edx
    eax_5, edx = sub_426870(arg5, 0)
    int32_t edi_1 = eax_5
    arg5[0x29] = edi_1
    int32_t eax_6 = sub_424cd0(3, edx, esi)
    void* eax_8 = *(data_27e7a40 + 0x548)
    
    if (eax_8 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_12 = 6
    
    if (sub_49c940(esi, 0x10000, *(eax_8 + 0x45844)) != 0)
        eax_12 = 7
    
    int32_t var_70 = 2
    int32_t var_74 = eax_12
    int32_t var_58 = eax_12
    
    if (eax_6 s> eax_12 * 2)
        var_58 = eax_6 - eax_12
    
    int32_t eax_13
    
    if (edi_1 s>= eax_12)
        edi_1 -= eax_12
        eax_13 = 1
    else
        eax_13 = 0
    
    int32_t var_64_1 = eax_13
    int32_t* var_110 = &var_74
    int32_t var_68 = edi_1
    void var_b4
    int32_t eax_16
    int32_t edx_2
    int80_t st0
    st0, eax_16, edx_2 =
        sub_4f66d0(&var_b4, arg3, arg2, &var_68, fconvert.s(float.t(1)), &var_74, &var_58)
    bool cond:0 = (data_31661ec & 1) != 0
    void var_54
    __builtin_memcpy(&var_54, eax_16, 0x40)
    int32_t eax_18
    
    if (cond:0)
        eax_18 = data_31661e8
    else
        data_31661ec.d |= 1
        int32_t var_8_1 = 0
        eax_18, edx_2 = sub_4f5220(data_307c758, "img_Good")
        data_31661e8 = eax_18
        int32_t var_8_2 = 0xffffffff
    
    int32_t ecx_7 = arg5[0x20] - 1
    
    if (ecx_7 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4205, "GoodIconGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (ecx_7)
        case 0
            var_58 = data_307c290
        case 1
            edx_2 = data_307c294
            var_58 = edx_2
        case 2
            var_58 = data_307c298
        case 3
            edx_2 = data_307c29c
            var_58 = edx_2
        case 4
            var_58 = data_307c2a0
    
    int32_t* ecx_9 = data_307c758
    void* var_108_1 = &var_54
    int32_t* var_10c_3 = ecx_9
    __builtin_memcpy(&var_54, sub_4f62d0(eax_18, fconvert.s(float.t(1)), edx_2), 0x40)
    int32_t eax_20 = sub_4f4890(ecx_9)
    int80_t result = sub_4f67d0(eax_20, nullptr, var_58, eax_18 * 0x118 + *eax_20, &data_be1ae0, 
        &var_54, nullptr, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

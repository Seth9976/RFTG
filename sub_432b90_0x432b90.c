// 函数名称: sub_432b90
// 虚拟地址: 0x432b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_432b90(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69512c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_124
    int32_t eax_2 = __security_cookie ^ &var_124
    int32_t __saved_edi
    int32_t var_134 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    var_124 = arg5
    int32_t var_120 = arg3
    int32_t ecx
    
    if (arg2 != 0xffffffff)
        ecx = *sub_46b2b0(arg2)
    else
        ecx = arg3 | arg2
    
    void* eax_7 = *(data_27e7a40 + 0x548)
    char const* const var_140
    
    if (eax_7 == 0)
        char const* const var_138 = "GetGame"
        int32_t var_13c = 0xcc
        var_140 = "..\code\RFTGClient.cpp"
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, var_140, var_13c, var_138)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_11
    char* edx_1
    eax_11, edx_1 = sub_487cf0(ecx, sx.d(*(*(eax_7 + 0x45844) + 0x458)))
    
    if ((data_3165df4 & 1) == 0)
        data_3165df4.d |= 1
        int32_t var_c_1 = 0
        char const* const var_138_2 = "players"
        data_3165df0 = sub_510710(data_307ca3c, edx_1)
        int32_t var_c_2 = 0xffffffff
    
    data_3092a04
    int32_t var_80
    float var_3c[0x8]
    sub_50d8d0(&var_3c, sub_50eb00(data_3165df0, 0), &var_80, eax_11, &var_3c)
    int32_t eax_17
    int32_t edx_5
    eax_17, edx_5 = sub_510860(eax_11)
    
    if ((data_3165df4 & 2) == 0)
        data_3165df4.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_18
        eax_18, edx_5 = sub_4f5220(data_307ca64, "rgn_opponentTableau")
        data_3165dec = eax_18
        int32_t var_c_4 = 0xffffffff
    
    char* ecx_4 = var_124
    data_3165dec
    void arg_c
    void* var_138_5 = &arg_c
    int32_t var_13c_4 = var_120
    var_140 = ecx_4
    int32_t eax_21
    int80_t result
    result, eax_21 = sub_4fae30(eax_17, edx_5, ecx_4, &var_120, &var_80, var_140)
    int32_t ebx_2 = data_3165dec
    __builtin_memcpy(&var_80, eax_21, 0x40)
    void* eax_22 = sub_4fc3d0(&data_be1cb8, eax_17)
    int32_t* eax_23 = sub_4f6e90(ebx_2, eax_22, &data_83f3d3)
    int32_t* ebx_4 = ebx_2 * 0x118 + *sub_4f4890(*(eax_22 + 4))
    float edi_1 = *(sub_4f7720(var_124, ebx_4, eax_23) + 0x434)
    int32_t eax_27 = sub_4f5220(data_307c758, "tbl_Card")
    void* eax_28 = sub_4f4890(data_307c104)
    float ecx_7 = *(eax_28 + 0xc)
    var_120 = *(eax_28 + 8)
    float var_90_2 = fconvert.s(fconvert.t(*(eax_28 + 0x10)) - fconvert.t(var_120))
    long double x87_r5_2 = fconvert.t(*(eax_28 + 0x14))
    var_140 = &var_120
    var_120 = var_90_2
    int32_t* var_144_1 = &var_80
    int32_t* edx_9 = fconvert.s(x87_r5_2 - fconvert.t(ecx_7))
    int32_t* var_11c_1 = edx_9
    void var_d0
    __builtin_memcpy(&var_80, sub_4fa9f0(eax_27, edx_9, var_90_2, &var_d0, edi_1), 0x40)
    float var_90_3 = fconvert.s(fconvert.t(var_80))
    float var_8c_1 = fconvert.s(float.t(0))
    float var_7c
    float var_88 = fconvert.s(fneg(fconvert.t(var_7c)))
    int32_t var_11c_2 = 0
    float var_74
    var_120 = fconvert.s(fconvert.t(var_74))
    int32_t var_118_1 = 0
    int32_t var_114_1 = 0
    int32_t var_110 = 0x3f800000
    float var_10c = var_90_3
    float var_108 = var_8c_1
    float var_104 = var_88
    __builtin_memcpy(&var_80, &var_120, 0x20)
    int32_t edx_11 = sub_405f60(&var_120, &var_3c)
    __builtin_memcpy(arg4, &var_120, 0x20)
    float var_e0
    sub_405900(&var_e0, edx_11, arg4 + 4)
    long double x87_r4 = fconvert.t(0.0099999997764825821)
    var_120 = fconvert.s(fconvert.t(var_e0) * x87_r4)
    float var_dc
    float var_11c_3 = fconvert.s(fconvert.t(var_dc) * x87_r4)
    float var_d8
    float var_118_2 = fconvert.s(x87_r4 * fconvert.t(var_d8))
    *(arg4 + 0x14) = fconvert.s(fconvert.t(*(arg4 + 0x14)) - fconvert.t(var_120))
    *(arg4 + 0x18) = fconvert.s(fconvert.t(*(arg4 + 0x18)) - fconvert.t(var_11c_3))
    *(arg4 + 0x1c) = fconvert.s(fconvert.t(*(arg4 + 0x1c)) - fconvert.t(var_118_2))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_124)
    return result
}

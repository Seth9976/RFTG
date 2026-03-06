// 函数名称: sub_433000
// 虚拟地址: 0x433000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_433000(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6950da
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_fc
    int32_t eax_2 = __security_cookie ^ &var_fc
    int32_t __saved_edi
    int32_t var_10c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    
    if (arg2 != 0xffffffff)
        ecx = *sub_46b2b0(arg2)
    else
        ecx = arg3 | arg2
    
    void* eax_7 = *(data_27e7a40 + 0x548)
    
    if (eax_7 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_11
    char* edx_1
    eax_11, edx_1 = sub_487cf0(ecx, sx.d(*(*(eax_7 + 0x45844) + 0x458)))
    
    if ((data_3165de8 & 1) == 0)
        data_3165de8.d |= 1
        int32_t var_c_1 = 0
        char const* const var_110_1 = "players"
        data_3165de4 = sub_510710(data_307ca3c, edx_1)
        int32_t var_c_2 = 0xffffffff
    
    data_3092a04
    float var_80
    float var_3c[0x8]
    sub_50d8d0(&var_3c, sub_50eb00(data_3165de4, 0), &var_80, eax_11, &var_3c)
    float eax_17
    int32_t edx_5
    eax_17, edx_5 = sub_510860(eax_11)
    float var_90 = eax_17
    
    if ((data_3165de8 & 2) == 0)
        data_3165de8.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_18
        eax_18, edx_5 = sub_4f5220(data_307ca64, "rgn_opponentTableau")
        data_3165de0 = eax_18
        int32_t var_c_4 = 0xffffffff
    
    data_3165de0
    void arg_c
    void* var_110_3 = &arg_c
    int32_t var_114_3 = arg3
    int32_t var_e0
    int32_t eax_21
    int80_t result
    result, eax_21 = sub_4fae30(eax_17, edx_5, arg5, &var_e0, &var_80, arg5)
    int32_t ebx_2 = data_3165de0
    __builtin_memcpy(&var_80, eax_21, 0x40)
    void* eax_22 = sub_4fc3d0(&data_be1cb8, var_90)
    int128_t* eax_23 = sub_4f6e90(ebx_2, eax_22, &data_83f3d3)
    int32_t* esi_6 = *(eax_22 + 4)
    var_90 = eax_23
    float esi_7 = *(sub_4f7720(arg5, ebx_2 * 0x118 + *sub_4f4890(esi_6), var_90) + 0x434)
    
    if ((data_3165de8 & 4) == 0)
        data_3165de8.d |= 4
        int32_t var_c_5 = 2
        data_3165ddc = sub_4f5220(data_307c758, "Takeover")
        int32_t var_c_6 = 0xffffffff
    
    int32_t* eax_29 = *sub_466320(data_307c39c)
    long double x87_r5 = float.t(*eax_29)
    
    if (*eax_29 s< 0)
        x87_r5 = x87_r5 + fconvert.t(4.2949673e+09f)
    
    int32_t* edx_8 = eax_29[1]
    float var_f8_1 = fconvert.s(x87_r5)
    long double x87_r5_1 = float.t(eax_29[1])
    
    if (edx_8 s< 0)
        x87_r5_1 = x87_r5_1 + fconvert.t(4.2949673e+09f)
    
    float var_f4 = fconvert.s(x87_r5_1)
    float* var_110_5 = &var_90
    var_90 = fconvert.s(fconvert.t(eax_29[2]))
    long double x87_r5_3 = fconvert.t(var_90)
    var_90 = fconvert.s(x87_r5_3 * fconvert.t(var_f8_1))
    float* var_114_5 = &var_80
    float var_f4_1 = fconvert.s(x87_r5_3 * fconvert.t(var_f4))
    float var_8c = var_f4_1
    __builtin_memcpy(&var_80, sub_4fa9f0(data_3165ddc, edx_8, var_f4_1, &var_e0, esi_7), 0x40)
    var_90 = fconvert.s(fconvert.t(var_80))
    float var_8c_1 = fconvert.s(float.t(0))
    float var_7c
    float var_88 = fconvert.s(fneg(fconvert.t(var_7c)))
    float var_74
    var_e0 = fconvert.s(fconvert.t(var_74))
    int32_t var_dc = 0
    int32_t var_d4 = 0
    int32_t var_d8 = 0
    int32_t var_d0 = 0x3f800000
    float var_c8 = var_8c_1
    float var_cc = var_90
    float var_c4 = var_88
    __builtin_memcpy(&var_80, &var_e0, 0x20)
    int32_t edx_10 = sub_405f60(&var_e0, &var_3c)
    __builtin_memcpy(arg4, &var_e0, 0x20)
    float var_a0
    sub_405900(&var_a0, edx_10, arg4 + 4)
    var_90 = var_a0
    long double x87_r4_2 = fconvert.t(0.0099999997764825821)
    float var_9c
    float var_f4_2 = fconvert.s(fconvert.t(var_9c) * x87_r4_2)
    float var_98
    float var_f0 = fconvert.s(x87_r4_2 * fconvert.t(var_98))
    *(arg4 + 0x14) =
        fconvert.s(fconvert.t(*(arg4 + 0x14)) - fconvert.t(fconvert.s(fconvert.t(var_90) * x87_r4_2)))
    *(arg4 + 0x18) = fconvert.s(fconvert.t(*(arg4 + 0x18)) - fconvert.t(var_f4_2))
    *(arg4 + 0x1c) = fconvert.s(fconvert.t(*(arg4 + 0x1c)) - fconvert.t(var_f0))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_fc)
    return result
}

// 函数名称: sub_4352a0
// 虚拟地址: 0x4352a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4352a0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69501c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_114
    int32_t eax_2 = __security_cookie ^ &var_114
    int32_t __saved_edi
    int32_t var_124 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_6 = *(data_27e7a40 + 0x548)
    
    if (eax_6 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float eax_10
    char* edx
    eax_10, edx = sub_487cf0(arg3, sx.d(*(*(eax_6 + 0x45844) + 0x458)))
    bool cond:0 = (data_3165dc8 & 1) != 0
    float var_100 = eax_10
    
    if (not(cond:0))
        data_3165dc8.d |= 1
        int32_t var_c_1 = 0
        char const* const var_128_1 = "players"
        data_3165dc4 = sub_510710(data_307ca3c, edx)
        int32_t var_c_2 = 0xffffffff
    
    data_3092a04
    int32_t eax_13 = sub_50eb00(data_3165dc4, 0)
    float var_80
    float var_3c[0x8]
    sub_50d8d0(eax_13, eax_13, &var_80, var_100, &var_3c)
    var_114 = 5
    int32_t eax_14
    int32_t esi_1
    
    if (arg3 != 0xffffffff)
        int32_t eax_15 = sub_46b360(arg3)
        esi_1 = eax_15
        
        if (esi_1 != 0xffffffff)
            eax_14 = *sub_46b2b0(esi_1)
        else
            eax_14 = eax_15
    else
        esi_1 = arg3
        eax_14 = 0xffffffff
    
    if (*((eax_14 << 2) + &data_c020f8) != 0)
        var_114 = 4
    
    int32_t eax_17
    
    if (esi_1 != 0xffffffff)
        eax_17 = *sub_46b2b0(esi_1)
    else
        eax_17 = eax_14 | esi_1
    
    if (*((eax_17 << 2) + &data_c020e8) != 0)
        var_114 -= 1
    
    int32_t var_10c = 0
    float eax_19 = var_100
    int32_t var_110 = var_114
    int32_t eax_20 = sub_510860(eax_19)
    var_114 = eax_20
    
    if ((data_3165dc8 & 2) == 0)
        data_3165dc8.d |= 2
        int32_t var_c_3 = 1
        data_3165dc0 = sub_4f5220(data_307ca64, "tbl_opponentIcons")
        int32_t var_c_4 = 0xffffffff
    
    int32_t ebx_1 = data_3165dc0
    var_100 = sub_4fc3d0(&data_be1cb8, eax_20)
    void var_c0
    int32_t eax_23 = sub_4fab00(eax_20, &var_c0, ebx_1, &var_80)
    float eax_24 = var_100
    int32_t var_130_1 = __builtin_memcpy(&var_80, eax_23, 0x40)
    int32_t eax_25
    int80_t result
    result, eax_25 =
        sub_4f66d0(&var_100, *(eax_24 i+ 4), ebx_1, &var_110, fconvert.s(float.t(1)), nullptr, nullptr)
    int32_t ebx_2 = data_3165dc0
    __builtin_memcpy(&var_80, eax_25, 0x40)
    void* eax_26 = sub_4fc3d0(&data_be1cb8, var_114)
    int128_t* eax_27 = sub_4f6e90(ebx_2, eax_26, &data_83f3d3)
    int32_t* esi_7 = *(eax_26 + 4)
    var_100 = eax_27
    float edi_3 = *(sub_4f7720(&var_110, ebx_2 * 0x118 + *sub_4f4890(esi_7), var_100) + 0x434)
    int32_t eax_32 = sub_4f5220(data_307c5cc, "ico_goalBack")
    void* eax_33 = sub_4f4890(data_307c1d8)
    float edx_7 = *(eax_33 + 0xc)
    var_100 = *(eax_33 + 8)
    float edx_8 = *(eax_33 + 0x14)
    var_110 = fconvert.s(fconvert.t(*(eax_33 + 0x10)) - fconvert.t(var_100))
    var_100 = var_110
    float var_10c_1 = fconvert.s(fconvert.t(edx_8) - fconvert.t(edx_7))
    float var_fc_1 = var_10c_1
    float* var_130_3 = &var_100
    float* var_134_1 = &var_80
    __builtin_memcpy(&var_80, sub_4fa9f0(eax_32, edx_8, var_10c_1, &var_c0, edi_3), 0x40)
    var_110 = fconvert.s(fconvert.t(var_80))
    float var_10c_2 = fconvert.s(float.t(0))
    float var_7c
    float var_108 = fconvert.s(fneg(fconvert.t(var_7c)))
    float var_74
    var_100 = fconvert.s(fconvert.t(var_74))
    int32_t var_fc_2 = 0
    int32_t var_f4_1 = 0
    int32_t var_f8_1 = 0
    int32_t var_f0 = 0x3f800000
    float var_e8 = var_10c_2
    int32_t var_ec = var_110
    float var_e4 = var_108
    __builtin_memcpy(&var_80, &var_100, 0x20)
    sub_405f60(&var_100, &var_3c)
    __builtin_memcpy(arg4, &var_100, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_114)
    return result
}

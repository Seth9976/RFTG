// 函数名称: sub_435690
// 虚拟地址: 0x435690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_435690(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694fbc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_134
    int32_t eax_2 = __security_cookie ^ &var_134
    int32_t __saved_edi
    int32_t var_144 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_6 = *(data_27e7a40 + 0x548)
    
    if (eax_6 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_10
    char* edx
    eax_10, edx = sub_487cf0(arg3, sx.d(*(*(eax_6 + 0x45844) + 0x458)))
    var_134 = eax_10
    
    if ((data_3165dbc & 1) == 0)
        data_3165dbc.d |= 1
        int32_t var_c_1 = 0
        char const* const var_148_1 = "players"
        data_3165db8 = sub_510710(data_307ca3c, edx)
        int32_t var_c_2 = 0xffffffff
    
    data_3092a04
    int32_t eax_13 = sub_50eb00(data_3165db8, 0)
    float var_80
    float var_3c[0x8]
    int32_t eax_14
    int80_t st0
    st0, eax_14 = sub_50d8d0(eax_13, eax_13, &var_80, var_134, &var_3c)
    
    if (arg3 != 0xffffffff)
        sub_46b360(arg3)
    
    int32_t var_130 = sub_434c70(arg5)
    int32_t var_12c = 0
    float eax_18 = sub_510860(var_134)
    float var_120 = eax_18
    
    if ((data_3165dbc & 2) == 0)
        data_3165dbc.d |= 2
        int32_t var_c_3 = 1
        data_3165db4 = sub_4f5220(data_307ca64, "rgn_opponentGoalArea")
        int32_t var_c_4 = 0xffffffff
    
    int32_t ebx_2 = data_3165db4
    var_134 = sub_4fc3d0(&data_be1cb8, eax_18)
    void var_c0
    int32_t eax_21 = sub_4fab00(eax_18, &var_c0, ebx_2, &var_80)
    void* eax_22 = var_134
    int32_t var_150_1 = __builtin_memcpy(&var_80, eax_21, 0x40)
    void var_100
    int32_t eax_23
    int80_t result
    result, eax_23 =
        sub_4f66d0(&var_100, *(eax_22 + 4), ebx_2, &var_130, fconvert.s(float.t(1)), nullptr, nullptr)
    int32_t ebx_3 = data_3165db4
    __builtin_memcpy(&var_80, eax_23, 0x40)
    void* eax_24 = sub_4fc3d0(&data_be1cb8, var_120)
    int128_t* eax_25 = sub_4f6e90(ebx_3, eax_24, &data_83f3d3)
    int32_t* esi_6 = *(eax_24 + 4)
    var_120 = eax_25
    float edi_4 = *(sub_4f7720(&var_130, ebx_3 * 0x118 + *sub_4f4890(esi_6), var_120) + 0x434)
    int32_t eax_30 = sub_4f5220(data_307c1d8, "img_card")
    void* eax_31 = sub_4f4890(data_307c1d8)
    float edx_7 = *(eax_31 + 0xc)
    var_120 = *(eax_31 + 8)
    float edx_8 = *(eax_31 + 0x14)
    var_130 = fconvert.s(fconvert.t(*(eax_31 + 0x10)) - fconvert.t(var_120))
    var_120 = var_130
    float var_12c_1 = fconvert.s(fconvert.t(edx_8) - fconvert.t(edx_7))
    float var_11c_1 = var_12c_1
    float* var_150_3 = &var_120
    float* var_154_1 = &var_80
    __builtin_memcpy(&var_80, sub_4fa9f0(eax_30, edx_8, var_12c_1, &var_100, edi_4), 0x40)
    var_130 = fconvert.s(fconvert.t(var_80))
    float var_12c_2 = fconvert.s(float.t(0))
    float var_7c
    float var_128 = fconvert.s(fneg(fconvert.t(var_7c)))
    float var_74
    var_120 = fconvert.s(fconvert.t(var_74))
    int32_t var_11c_2 = 0
    int32_t var_114_1 = 0
    int32_t var_118_1 = 0
    int32_t var_110 = 0x3f800000
    float var_108 = var_12c_2
    int32_t var_10c = var_130
    float var_104 = var_128
    __builtin_memcpy(&var_80, &var_120, 0x20)
    sub_405f60(&var_120, &var_3c)
    __builtin_memcpy(arg4, &var_120, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_134)
    return result
}

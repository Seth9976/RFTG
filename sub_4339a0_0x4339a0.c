// 函数名称: sub_4339a0
// 虚拟地址: 0x4339a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4339a0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693a58
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_3165a34 & 1) == 0)
        data_3165a34.d |= 1
        int32_t var_8_1 = 0
        char const* const var_bc_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_3165a30 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165a34 & 2) == 0)
        data_3165a34.d |= 2
        int32_t var_8_3 = 1
        char const* const var_bc_2 = "uiAnteResult"
        data_3165a2c = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    sub_50eb00(data_3165a30, 0)
    int32_t eax_8 = sub_50eb00(data_3165a2c, 0)
    int32_t eax_9
    char* edx_4
    eax_9, edx_4 = sub_50eb00(data_3165a2c, 3)
    
    if ((data_3165a34 & 4) == 0)
        data_3165a34.d |= 4
        int32_t var_8_5 = 2
        char const* const var_bc_3 = "card"
        data_3165a28 = sub_510710(data_307c79c, edx_4)
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165a34 & 8) == 0)
        data_3165a34.d |= 8
        int32_t var_8_7 = 3
        data_3165a24 = sub_4f5220(data_307c104, "Card")
        int32_t var_8_8 = 0xffffffff
    
    void* eax_14 = sub_4f4890(data_307c104)
    float ecx_3 = *(eax_14 + 8)
    float edx_5 = *(eax_14 + 0xc)
    float var_20 = *(eax_14 + 0x10)
    int32_t edx_7 = data_3165a24
    long double x87_r7_3 = fconvert.t(*(eax_14 + 0x14)) - fconvert.t(edx_5)
    var_20 = fconvert.s(fconvert.t(var_20) - fconvert.t(ecx_3))
    int32_t eax_16 = data_3165a28
    float var_1c_1 = fconvert.s(x87_r7_3)
    float var_88[0x4]
    int32_t eax_17
    int80_t st0
    st0, eax_17 = sub_50fbc0(eax_16, eax_8, &var_20, &var_88, eax_16, edx_7)
    int32_t edx_9 = data_3165a24
    int32_t eax_18 = data_3165a28
    float var_58[0x8]
    __builtin_memcpy(&var_58, eax_17, 0x20)
    int32_t eax_19
    int32_t edx_11
    int80_t result
    result, eax_19, edx_11 = sub_50fbc0(eax_18, eax_9, &var_20, &var_88, eax_18, edx_9)
    void var_38
    int32_t ecx_8 = __builtin_memcpy(&var_38, eax_19, 0x20)
    float* ecx_9
    float (* esi_5)[0x4]
    long double x87_r5_2
    int32_t var_bc_7
    void var_a8
    
    if (arg3 == 0 || arg3 == 1)
        x87_r5_2 = fconvert.t(0.5f)
        esi_5 = &var_a8
        var_bc_7 = ecx_8
        ecx_9 = &var_38
    else if (arg3 != 2)
        int32_t var_bc_6 = ecx_8
        ecx_9 = &var_38
        
        if (arg3 != 3)
            esi_5 = &var_a8
            x87_r5_2 = fconvert.t(fconvert.s(float.t(arg2) / (float.t(arg3) - fconvert.t(1.0))))
        else
            esi_5 = &var_88
            x87_r5_2 = fconvert.t(fconvert.s(float.t(arg2 + 2) / fconvert.t(5.0)))
    else
        edx_11 = arg2 + 1
        esi_5 = &var_88
        x87_r5_2 = fconvert.t(fconvert.s(float.t(edx_11) / fconvert.t(3.0)))
        var_bc_7 = ecx_8
        ecx_9 = &var_38
    __builtin_memcpy(arg1, sub_466080(&var_58, edx_11, ecx_9, esi_5, fconvert.s(x87_r5_2)), 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

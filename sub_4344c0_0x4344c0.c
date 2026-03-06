// 函数名称: sub_4344c0
// 虚拟地址: 0x4344c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4344c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6939a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_f4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_3165a10 & 1) == 0)
        data_3165a10.d |= 1
        int32_t var_8_1 = 0
        char const* const var_f8_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_3165a0c = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165a10 & 2) == 0)
        data_3165a10.d |= 2
        int32_t var_8_3 = 1
        char const* const var_f8_2 = "ui_zoom_goal"
        data_3165a08 = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    float var_74[0x8]
    float var_54
    int80_t result = sub_50d8d0(&var_74, sub_50eb00(data_3165a0c, 0), &var_54, data_3165a08, &var_74)
    float eax_10 = sub_510860(data_3165a08)
    float var_94
    float var_8c
    int32_t eax_18
    float ecx_4
    int32_t* edx_6
    
    if (arg2 s< 0xc)
        void* eax_15 = sub_4f4890(data_307c1dc)
        bool cond:1_1 = (data_3165a10 & 8) != 0
        float edx_7 = *(eax_15 + 0xc)
        var_94 = *(eax_15 + 8)
        var_8c = *(eax_15 + 0x10)
        edx_6 = *(eax_15 + 0x14)
        var_8c = fconvert.s(fconvert.t(var_8c) - fconvert.t(var_94))
        ecx_4 = fconvert.s(fconvert.t(edx_6) - fconvert.t(edx_7))
        float var_88_3 = ecx_4
        
        if (not(cond:1_1))
            data_3165a10.d |= 8
            int32_t var_8_7 = 3
            int32_t eax_17
            eax_17, edx_6 = sub_4f5220(data_307c1fc, "goalSmall")
            data_3165a00 = eax_17
            int32_t var_8_8 = 0xffffffff
        
        eax_18 = data_3165a00
    else
        void* eax_11 = sub_4f4890(data_307c1d8)
        float ecx_3 = *(eax_11 + 0xc)
        var_94 = *(eax_11 + 8)
        float eax_12 = *(eax_11 + 0x14)
        var_8c = *(eax_11 + 0x10)
        ecx_4 = fconvert.s(fconvert.t(var_8c) - fconvert.t(var_94))
        var_8c = ecx_4
        edx_6 = fconvert.s(fconvert.t(eax_12) - fconvert.t(ecx_3))
        int32_t* var_88_1 = edx_6
        
        if ((data_3165a10 & 4) == 0)
            data_3165a10.d |= 4
            int32_t var_8_5 = 2
            int32_t eax_14
            eax_14, edx_6 = sub_4f5220(data_307c1fc, "goalBig")
            data_3165a04 = eax_14
            int32_t var_8_6 = 0xffffffff
        
        eax_18 = data_3165a04
    
    float* var_f8_4 = &var_8c
    float* var_fc_3 = &var_54
    void var_e4
    __builtin_memcpy(&var_54, sub_4fa9f0(eax_18, edx_6, ecx_4, &var_e4, eax_10), 0x40)
    float var_84 = fconvert.s(fconvert.t(var_54))
    float var_80_2 = fconvert.s(float.t(0))
    float var_50
    float var_7c_2 = fconvert.s(fneg(fconvert.t(var_50)))
    float var_48
    float var_a4 = fconvert.s(fconvert.t(var_48))
    int32_t var_a0 = 0
    int32_t var_98 = 0
    int32_t var_9c = 0
    var_94 = 1f
    var_8c = var_80_2
    float var_90_2 = var_84
    float var_88_4 = var_7c_2
    void var_34
    __builtin_memcpy(&var_34, &var_a4, 0x20)
    sub_405f60(&var_a4, &var_74)
    __builtin_memcpy(arg1, &var_a4, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

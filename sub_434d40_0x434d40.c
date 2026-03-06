// 函数名称: sub_434d40
// 虚拟地址: 0x434d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_434d40(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_695d14
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_80 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = data_3092a04
    
    if ((data_316605c & 1) == 0)
        data_316605c.d |= 1
        int32_t var_8_1 = 0
        char const* const var_84_1 = "players"
        int32_t eax_5
        eax_5, arg2 = sub_510710(data_307ca3c, arg2)
        data_3166058 = eax_5
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316605c & 2) == 0)
        data_316605c.d |= 2
        int32_t var_8_3 = 1
        char const* const var_84_2 = "uiGoals"
        data_3166054 = sub_510710(data_307ca78, arg2)
        int32_t var_8_4 = 0xffffffff
    
    if ((data_316605c & 4) == 0)
        data_316605c.d |= 4
        int32_t var_8_5 = 2
        data_3166050 = sub_4f5220(data_307c9ec, "rgn_goals_large")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_316605c & 8) == 0)
        data_316605c.d |= 8
        int32_t var_8_7 = 3
        data_316604c = sub_4f5220(data_307c9ec, "rgn_goals_small")
        int32_t var_8_8 = 0xffffffff
    
    int32_t eax_10 = sub_50eb00(data_3166058, 0)
    int32_t eax_11 = sub_434ba0()
    float* var_9c
    int32_t var_98
    int32_t var_94
    float* var_90
    float* var_8c
    int32_t eax_15
    int32_t ecx_5
    float var_24
    float var_1c
    
    if (arg3 s< 0xc)
        void* eax_16 = sub_4f4890(data_307c1dc)
        float edx_6 = *(eax_16 + 8)
        float ecx_6 = *(eax_16 + 0xc)
        float eax_17 = *(eax_16 + 0x14)
        var_24 = *(eax_16 + 0x10)
        var_1c = fconvert.s(fconvert.t(var_24) - fconvert.t(edx_6))
        var_24 = var_1c
        float var_20_3 = fconvert.s(fconvert.t(eax_17) - fconvert.t(ecx_6))
        
        if ((data_316605c & 0x20) == 0)
            data_316605c.d |= 0x20
            int32_t var_8_11 = 5
            data_3166044 = sub_4f5220(data_307c1dc, "img_card")
            int32_t var_8_12 = 0xffffffff
        
        int32_t var_84_4 = 0
        int32_t var_88_6 = 0
        var_8c = &var_24
        int32_t ecx_8 = data_3166054
        var_90 = &var_1c
        var_1c = 0f
        eax_15 = data_316604c
        var_94 = eax_15
        var_98 = ecx_8
        ecx_5 = data_3166044
        void var_70
        var_9c = &var_70
    else
        void* eax_12 = sub_4f4890(data_307c1d8)
        float ecx_2 = *(eax_12 + 8)
        float edx_2 = *(eax_12 + 0xc)
        var_24 = *(eax_12 + 0x10)
        float edx_3 = *(eax_12 + 0x14)
        var_1c = fconvert.s(fconvert.t(var_24) - fconvert.t(ecx_2))
        var_24 = var_1c
        float var_20_1 = fconvert.s(fconvert.t(edx_3) - fconvert.t(edx_2))
        
        if ((data_316605c & 0x10) == 0)
            data_316605c.d |= 0x10
            int32_t var_8_9 = 4
            data_3166048 = sub_4f5220(data_307c1d8, "img_card")
            int32_t var_8_10 = 0xffffffff
        
        int32_t edx_5 = data_3166050
        int32_t var_84_3 = 0
        int32_t var_88_4 = 0
        var_1c = 0f
        var_8c = &var_24
        eax_15 = data_3166054
        var_90 = &var_1c
        var_94 = edx_5
        var_98 = eax_15
        void var_50
        var_9c = &var_50
        ecx_5 = data_3166048
    int32_t var_18_3 = eax_11
    int32_t eax_20
    int80_t result
    result, eax_20 =
        sub_50fd20(eax_15, eax_10, ecx_5, var_9c, var_98, var_94, var_90, var_8c, nullptr, 0)
    __builtin_memcpy(arg4, eax_20, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

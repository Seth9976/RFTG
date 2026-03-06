// 函数名称: sub_434fe0
// 虚拟地址: 0x434fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_434fe0(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_695ca4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_80 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = data_3092a04
    
    if ((data_3166040 & 1) == 0)
        data_3166040.d |= 1
        int32_t var_8_1 = 0
        char const* const var_84_1 = "players"
        int32_t eax_5
        eax_5, arg2 = sub_510710(data_307ca3c, arg2)
        data_316603c = eax_5
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166040 & 2) == 0)
        data_3166040.d |= 2
        int32_t var_8_3 = 1
        char const* const var_84_2 = "ui_console"
        data_3166038 = sub_510710(data_307ca78, arg2)
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166040 & 4) == 0)
        data_3166040.d |= 4
        int32_t var_8_5 = 2
        data_3166034 = sub_4f5220(data_307ca40, "tbl_goals_lrg")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166040 & 8) == 0)
        data_3166040.d |= 8
        int32_t var_8_7 = 3
        data_3166030 = sub_4f5220(data_307ca40, "tbl_goals_sml")
        int32_t var_8_8 = 0xffffffff
    
    int32_t eax_10 = sub_50eb00(data_316603c, 0)
    float* var_9c
    int32_t var_98
    int32_t var_94
    float* var_90
    float* var_8c
    float var_1c
    int32_t eax_16
    int32_t ecx_5
    float ebx_2
    float var_24
    
    if (arg3 s< 0xc)
        *(data_27e7a40 + 0x74)
        ebx_2 = sub_434c70(arg3)
        void* eax_18 = sub_4f4890(data_307c1dc)
        float ecx_6 = *(eax_18 + 8)
        float edx_7 = *(eax_18 + 0xc)
        var_24 = *(eax_18 + 0x10)
        float edx_8 = *(eax_18 + 0x14)
        var_1c = fconvert.s(fconvert.t(var_24) - fconvert.t(ecx_6))
        var_24 = var_1c
        float var_20_3 = fconvert.s(fconvert.t(edx_8) - fconvert.t(edx_7))
        
        if ((data_3166040 & 0x20) == 0)
            data_3166040.d |= 0x20
            int32_t var_8_11 = 5
            data_3166028 = sub_4f5220(data_307c1dc, "img_card")
            int32_t var_8_12 = 0xffffffff
        
        int32_t var_84_5 = 0
        int32_t var_88_6 = 0
        int32_t var_18_4 = 0
        var_8c = &var_24
        eax_16 = data_3166038
        var_90 = &var_1c
        var_94 = data_3166030
        var_98 = eax_16
        void var_70
        var_9c = &var_70
        ecx_5 = data_3166028
    else
        *(data_27e7a40 + 0x74)
        ebx_2 = sub_434c70(arg3)
        void* eax_13 = sub_4f4890(data_307c1d8)
        float ecx_2 = *(eax_13 + 8)
        float edx_2 = *(eax_13 + 0xc)
        var_24 = *(eax_13 + 0x10)
        float edx_3 = *(eax_13 + 0x14)
        var_1c = fconvert.s(fconvert.t(var_24) - fconvert.t(ecx_2))
        var_24 = var_1c
        float var_20_1 = fconvert.s(fconvert.t(edx_3) - fconvert.t(edx_2))
        
        if ((data_3166040 & 0x10) == 0)
            data_3166040.d |= 0x10
            int32_t var_8_9 = 4
            data_316602c = sub_4f5220(data_307c1d8, "img_card")
            int32_t var_8_10 = 0xffffffff
        
        int32_t var_84_4 = 0
        int32_t var_88_4 = 0
        int32_t var_18_2 = 0
        var_8c = &var_24
        eax_16 = data_3166038
        var_90 = &var_1c
        var_94 = data_3166034
        var_98 = eax_16
        void var_50
        var_9c = &var_50
        ecx_5 = data_316602c
    var_1c = ebx_2
    int32_t eax_21
    int80_t result
    result, eax_21 =
        sub_50fd20(eax_16, eax_10, ecx_5, var_9c, var_98, var_94, var_90, var_8c, nullptr, 0)
    __builtin_memcpy(arg4, eax_21, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

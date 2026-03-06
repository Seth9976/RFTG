// 函数名称: sub_435cd0
// 虚拟地址: 0x435cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_435cd0(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_695bc4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_78 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    int32_t eax_13
    float var_1c
    
    if (arg3 != 0)
        if ((data_3166008 & 8) == 0)
            data_3166008.d |= 8
            int32_t var_8_7 = 3
            char const* const var_7c_4 = "players"
            data_3165ff8 = sub_510710(data_307ca3c, arg2)
            int32_t var_8_8 = 0xffffffff
        
        int32_t eax_16 = sub_50eb00(data_3165ff8, 0)
        int32_t eax_19 = sub_487cf0(arg3, sx.d(*(sub_418a10() + 0x458)))
        
        if ((data_3166008 & 0x10) == 0)
            data_3166008.d |= 0x10
            int32_t var_8_9 = 4
            data_3165ff4 = sub_4f5220(data_307ca64, "tbl_opponentIcons")
            int32_t var_8_10 = 0xffffffff
        
        if ((data_3166008 & 0x20) == 0)
            data_3166008.d |= 0x20
            int32_t var_8_11 = 5
            data_3165ff0 = sub_4f5220(data_307c5cc, "ico_vpChit")
            int32_t var_8_12 = 0xffffffff
        
        float eax_23
        int32_t edx_7
        eax_23, edx_7 = sub_418560(data_307c2e4)
        var_1c = eax_23
        int32_t var_24 = 4
        int32_t var_20_1 = 0
        int32_t var_18_1 = edx_7
        float var_68[0x8]
        int80_t st0_1
        st0_1, eax_13 = sub_50fd20(&var_68, eax_16, data_3165ff0, &var_68, eax_19, data_3165ff4, 
            &var_24, &var_1c, nullptr, 0)
    else
        if ((data_3166008 & 1) == 0)
            data_3166008.d |= 1
            int32_t var_8_1 = arg3
            char const* const var_7c_1 = "players"
            data_3166004 = sub_510710(data_307ca3c, arg2)
            int32_t var_8_2 = 0xffffffff
        
        int32_t eax_5
        char* edx_1
        eax_5, edx_1 = sub_50eb00(data_3166004, 0)
        
        if ((data_3166008 & 2) == 0)
            data_3166008.d |= 2
            int32_t var_8_3 = 1
            char const* const var_7c_2 = "ui_console"
            data_3166000 = sub_510710(data_307ca78, edx_1)
            int32_t var_8_4 = 0xffffffff
        
        if ((data_3166008 & 4) == 0)
            data_3166008.d |= 4
            int32_t var_8_5 = 2
            data_3165ffc = sub_4f5220(data_307ca40, "img_vp_prestige")
            int32_t var_8_6 = 0xffffffff
        
        float eax_11
        int32_t edx_2
        eax_11, edx_2 = sub_418560(data_307c2e4)
        int32_t ecx_1 = data_3165ffc
        int32_t var_18 = edx_2
        int32_t edx_3 = data_3166000
        var_1c = eax_11
        float var_48[0x9]
        int80_t st0
        st0, eax_13 = sub_50fbc0(&var_48, eax_5, &var_1c, &var_48, edx_3, ecx_1)
    __builtin_memcpy(arg4, eax_13, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

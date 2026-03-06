// 函数名称: sub_462dd0
// 虚拟地址: 0x462dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_462dd0(int32_t arg1, int32_t arg2, int128_t* arg3, char arg4, char arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_695a1a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_4c
    int32_t eax_2 = __security_cookie ^ &var_4c
    int32_t __saved_edi
    int32_t var_5c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.b = arg4
    
    if (*(data_27e7fd0 + 0x27) == 0)
        void* edx_2 = *(data_27e7a40 + 0x548)
        *(edx_2 + 0x2c079) = result.b
        
        if (result.b == 0)
            if ((data_3165fac & 4) == 0)
                data_3165fac.d |= 4
                int32_t var_c_5 = 2
                int32_t eax_12
                eax_12, edx_2 = sub_4f5220(data_307c794, "animDlg")
                data_3165fa0 = eax_12
                int32_t var_c_6 = 0xffffffff
            
            int32_t var_60_8 = 1
            sub_4fa4e0(arg2, data_3165fa0, edx_2.b)
            int80_t st0_3
            st0_3, result = sub_4fa8a0(arg6, 1, fconvert.s(float.t(0)))
        else if (arg5 == 0)
            int128_t* var_60_4 = arg3
            *(arg3 + 8) = 1
            sub_4fa8a0(arg6, 1, fconvert.s(float.t(0)))
            
            if ((data_3165fac & 1) == 0)
                data_3165fac.d |= 1
                int32_t var_c_1 = 0
                data_3165fa8 = sub_4f5220(data_307c794, "animDlg")
                int32_t var_c_2 = 0xffffffff
            
            float edx_3 = data_3165fa8
            int32_t var_60_6 = 0
            sub_4fa4e0(arg2, edx_3, edx_3.b)
            int128_t* eax_8
            char edx_4
            eax_8, edx_4 = sub_4f6e90(data_3165fa8, sub_4fc3d0(&data_be1cb8, arg2), &data_83f3d3)
            *(eax_8 + 0x14) = fconvert.s(float.t(1))
            
            if ((data_3165fac & 2) == 0)
                data_3165fac.d |= 2
                int32_t var_c_3 = 1
                int32_t eax_10
                eax_10, edx_4 = sub_4f5220(data_307c790, "animBg")
                data_3165fa4 = eax_10
                int32_t var_c_4 = 0xffffffff
            
            int32_t var_60_7 = 0
            result = sub_4fa4e0(arg6, data_3165fa4, edx_4)
        else
            sub_440510(result, edx_2, arg3, arg2, arg6)
            sub_4fa8a0(arg6, 0, fconvert.s(float.t(0)))
            sub_4d6480(data_307bf28)
            result = sub_4d66f0(&var_4c)
    else if (result.b != 0)
        result = data_307c794
        arg3.b = arg5 != 0
        data_30d6f38 = result
        data_30d6f41 = arg3.b
    else
        data_30d6f38 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_4c)
    return result
}

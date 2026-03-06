// 函数名称: sub_436780
// 虚拟地址: 0x436780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_436780(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6928cc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1a0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7a40
    float* eax_12
    void var_68
    
    if (arg3 != *(eax_3 + 0x74))
        void var_190
        __builtin_memcpy(&var_68, sub_45fb20(eax_3, &var_190, arg3, &var_190), 0x40)
        void var_88
        int80_t st0_2
        st0_2, eax_12 = sub_430a50(&var_88)
    else
        int32_t* ebx_1 = data_307c530
        void var_110
        int32_t eax_4
        int80_t st0
        st0, eax_4 = sub_40a930(&var_110)
        void var_a8
        __builtin_memcpy(&var_a8, eax_4, 0x40)
        
        if ((data_31657d8 & 1) == 0)
            data_31657d8.d |= 1
            int32_t var_8_1 = 0
            data_31657d4 = sub_4f5220(ebx_1, "tbl_myIcons")
            int32_t var_8_2 = 0xffffffff
        
        int32_t* ebx_2 = data_307c5cc
        
        if ((data_31657d8 & 2) == 0)
            data_31657d8.d |= 2
            int32_t var_8_3 = 1
            data_31657d0 = sub_4f5220(ebx_2, "ico_goalBack")
            int32_t var_8_4 = 0xffffffff
        
        sub_418a10()
        int32_t var_20 = 4
        int32_t var_1c_1 = 0
        int32_t var_1ac_1 = 1
        int32_t var_b8 = 5
        int32_t var_b4_1 = 1
        void var_150
        int32_t eax_7
        int32_t edx_1
        int80_t st0_1
        st0_1, eax_7, edx_1 =
            sub_4f66d0(&var_150, ebx_1, data_31657d4, &var_20, fconvert.s(float.t(1)), &var_b8, nullptr)
        int32_t eax_8 = data_31657d0
        __builtin_memcpy(&var_68, eax_7, 0x40)
        int32_t* eax_9 = sub_4f5350(eax_8, edx_1, ebx_2, &var_68)
        int32_t ecx_2 = eax_9[1]
        float var_28 = *eax_9
        int32_t var_24_1 = ecx_2
        int32_t var_1c_2 = eax_9[3]
        var_20 = eax_9[2]
        eax_12 = sub_430000(&var_28, 1)
    __builtin_memcpy(arg4, eax_12, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return arg4
}

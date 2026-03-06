// 函数名称: sub_40bd80
// 虚拟地址: 0x40bd80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_40bd80(int32_t arg1, int32_t arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6961dc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_e0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_307c184
    char* entry_ebx
    char eax_4 = sub_4f65a0(&entry_ebx[4], *entry_ebx)
    int32_t esi_3
    
    if (eax_4 != 0)
        void var_d0
        int32_t eax_5
        int80_t st0_1
        st0_1, eax_5 = sub_40a930(&var_d0)
        long double x87_r6_1 = fconvert.t(data_8c4d34)
        int32_t eax_6 = *(entry_ebx + 8)
        void var_58
        int32_t ecx
        int32_t esi_2
        esi_2, ecx = __builtin_memcpy(&var_58, eax_5, 0x40)
        int32_t var_f0_1 = ecx
        void var_90
        int32_t* eax_7 = sub_4f8710(esi_2, &var_90, eax_6, &var_58, arg4, arg3, fconvert.s(x87_r6_1), 
            nullptr, nullptr, nullptr)
        int32_t var_70_1 = eax_7[1]
        int32_t var_6c_1 = eax_7[2]
        esi_3 = 0xffffffff
        int32_t var_68_1 = eax_7[3]
        
        if (*eax_7 == 2)
            esi_3 = eax_7[4]
        
        if ((data_3166148 & 1) == 0)
            data_3166148.d |= 1
            int32_t var_8_1 = 0
            data_3166144 = sub_4f5220(data_307c184, "BtnOk")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_3166148 & 2) == 0)
            data_3166148.d |= 2
            int32_t var_8_3 = 1
            data_3166140 = sub_4f5220(data_307c184, "BtnBack")
    
    int32_t result
    
    if (eax_4 != 0 && (esi_3 == data_3166144 || esi_3 == data_3166140))
        *entry_ebx = 0
        result = 1
    else
        result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

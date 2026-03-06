// 函数名称: sub_4bcd30
// 虚拟地址: 0x4bcd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4bcd30(int32_t arg1, int32_t* arg2, char arg3, char* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_699370
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_12c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_307c620
    char eax_5 = sub_4f65a0(&arg4[4], *arg4)
    char var_55_1
    bool p_1
    
    if (eax_5 != 0)
        var_55_1 = 1
        float.t(0) - fconvert.t(data_307cd1c)
        p_1 = unimplemented  {test ah, 0x44}
    
    if (eax_5 == 0 || p_1)
        var_55_1 = 0
    
    data_307c62c
    char eax_6 = sub_4f65a0(&arg4[0x14], arg4[0x10])
    data_307c624
    char eax_7
    int32_t* ecx_1
    int32_t edx_1
    eax_7, ecx_1, edx_1 = sub_4f65a0(&arg4[0xc], arg4[8])
    
    if ((data_3166968 & 1) == 0)
        data_3166968.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_9
        eax_9, edx_1 = sub_4f5220(data_307c744, "dlgSlideAnim")
        data_3166964 = eax_9
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166968 & 2) == 0)
        data_3166968.d |= 2
        int32_t var_8_3 = 1
        ecx_1 = data_307c740
        int32_t eax_10
        eax_10, edx_1 = sub_4f5220(ecx_1, "animBg")
        data_3166960 = eax_10
        int32_t var_8_4 = 0xffffffff
    
    int32_t* var_130_3 = ecx_1
    char eax_12
    int32_t ecx_3
    int32_t edx_2
    eax_12, ecx_3, edx_2 = sub_4faeb0(data_3166964, edx_1, *(arg4 + 0x34), fconvert.s(float.t(0)))
    void var_dc
    void var_54
    
    if (eax_12 == 0)
        if (*(arg4 + 0x40) s<= *(arg4 + 0x190) && arg4[0x38] != eax_12)
            if (sub_4bcc00(&arg4[0x3c]) == 0)
                sub_408f10()
                sub_4ba5d0(0)
            
            int32_t var_130_5 = *(arg4 + 0x190)
            int32_t var_134_3 = *(arg4 + 0x40)
            char* var_68
            int32_t edx_4 = sub_4c4a50(&var_68, "%d/%d")
            int32_t var_8_5 = 2
            
            if ((data_3166968 & 4) == 0)
                data_3166968.d |= 4
                var_8_5.b = 3
                int32_t eax_16
                eax_16, edx_4 = sub_4f5220(data_307c744, "txtProgress")
                data_316695c = eax_16
                var_8_5.b = 2
            
            char* const eax_17 = var_68
            
            if (eax_17 == 0)
                eax_17 = &data_83f3d3
            
            char* ecx_6 = data_316695c
            int32_t var_130_6 = 0
            char* const var_134_5 = eax_17
            sub_4f9300(*(arg4 + 0x34), edx_4, ecx_6, ecx_6.b)
            int32_t var_8_6 = 0xffffffff
            sub_4c43d0(&var_68)
        
        int32_t eax_19
        int80_t st0_1
        st0_1, eax_19 = sub_40a930(&var_dc)
        long double x87_r6_2 = fconvert.t(data_8c4d34)
        int32_t eax_20 = *(arg4 + 0x34)
        int32_t ecx_8
        int32_t esi_4
        esi_4, ecx_8 = __builtin_memcpy(&var_54, eax_19, 0x40)
        int32_t var_13c_2 = ecx_8
        void var_84
        ecx_3, edx_2 = sub_4f8710(esi_4, &var_84, eax_20, &var_54, arg5, arg3, fconvert.s(x87_r6_2), 
            nullptr, nullptr, nullptr)
    
    unimplemented  {fldz }
    int32_t var_130_8 = ecx_3
    float var_130_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    int32_t* eax_22
    int32_t ecx_11
    int32_t edx_6
    eax_22, ecx_11, edx_6 = sub_4faeb0(data_3166964, edx_2, *(arg4 + 0x34), var_130_9)
    
    if (eax_22.b != 0)
        unimplemented  {fldz }
        int32_t var_130_10 = ecx_11
        float var_130_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        eax_22 = sub_4faeb0(data_3166960, edx_6, *(arg4 + 0x18), var_130_11)
        
        if (eax_22.b == 0)
            int32_t eax_24 = sub_40a930(&var_dc)
            unimplemented  {call 0x40a930}
            int32_t esi_5 = eax_24
            eax_24.b = arg3
            __builtin_memcpy(&var_54, esi_5, 0x40)
            void var_9c
            int32_t* eax_25 = sub_4f92a0(eax_24.b, &var_54, arg5, &var_9c, *(arg4 + 0x18))
            int32_t var_80_1 = eax_25[1]
            int32_t var_7c_1 = eax_25[2]
            eax_22 = eax_25[4]
            int32_t var_78_1 = eax_25[3]
            int32_t* var_74_1 = eax_22
            
            if (*eax_25 == 0)
                if ((data_3166968 & 8) == 0)
                    data_3166968.d |= 8
                    int32_t var_8_7 = 4
                    data_3166958 = sub_4f5220(data_307c740, "tblStatsFull")
                    int32_t var_8_8 = 0xffffffff
                
                void var_11c
                int32_t eax_27 = sub_40a930(&var_11c)
                unimplemented  {call 0x40a930}
                __builtin_memcpy(&var_54, eax_27, 0x40)
                eax_22 = sub_4bc5a0(*(arg4 + 0x18), data_3166958, &var_54, &arg4[0x24], arg5, arg3)
                unimplemented  {call 0x4bc5a0}
    
    int32_t result
    
    if (var_55_1 != 0)
        int32_t eax_29 = arg3.d
        result = sub_4bbef0(eax_29, arg4, arg2, arg5, eax_29.b)
    else if (eax_6 != 0)
        float* eax_30 = arg5
        result = sub_4bbb00(eax_30, arg4, arg2, eax_30, arg3)
    else if (eax_7 == 0)
        result = 0
    else
        result = sub_4bb860(eax_22, arg2, arg4, arg5, arg3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

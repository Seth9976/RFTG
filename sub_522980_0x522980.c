// 函数名称: sub_522980
// 虚拟地址: 0x522980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_522980(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d459
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    char* i_1 = *(arg5 + 4)
    
    if (i_1 != 0)
        char* i
        
        do
            if (arg3(zx.d(*i_1), eax_2) == 0)
                break
            
            i = i_1
            i_1 = &i_1[1]
        while (i != 0xffffffff)
    
    int128_t* eax_5 = *(arg5 + 4)
    
    if (i_1 == eax_5)
        *arg4 = data_be1ecc
        arg4[1] = data_be1ed0
        arg4[2] = data_be1ed4
        void* ecx_2 = data_be1ed4
        
        if (ecx_2 != 0 && *ecx_2 != 0)
            void* eax_7 = sub_4c4060(&arg4[2])
            *(eax_7 + 4) += 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg4
    
    if (eax_5 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const var_14 = &data_83f3d3
    sub_4c4690(&var_14, eax_5)
    int32_t var_8_1 = 1
    int32_t var_24
    sub_522600(&var_24, &var_14)
    var_8_1.b = 2
    int32_t edx_1 = var_24
    *(arg5 + 4) = i_1
    char* var_1c
    char* ecx_6 = var_1c
    int32_t var_20
    arg4[1] = var_20
    *arg4 = edx_1
    arg4[2] = ecx_6
    
    if (ecx_6 != 0 && *ecx_6 != 0)
        void* eax_12 = sub_4c4060(&arg4[2])
        *(eax_12 + 4) += 1
        ecx_6 = var_1c
    
    int32_t var_18_1 = 1
    var_8_1.b = 1
    
    if (ecx_6 != 0 && *ecx_6 != 0)
        void* eax_14 = sub_4c4060(&var_1c)
        int32_t temp1_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_14 + 0xc) + 0x10
            sub_4f4430(eax_14, sub_4f4380(esi_4), esi_4)
    
    var_8_1.b = 0
    char* const eax_17 = var_14
    
    if (eax_17 != 0 && *eax_17 != 0)
        void* eax_19 = sub_4c4060(&var_14)
        int32_t temp2_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_6 = *(eax_19 + 0xc) + 0x10
            sub_4f4430(eax_19, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

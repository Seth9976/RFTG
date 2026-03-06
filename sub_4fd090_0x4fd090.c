// 函数名称: sub_4fd090
// 虚拟地址: 0x4fd090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fd090(int32_t arg1, int32_t arg2, char* arg3, int128_t* arg4, int128_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ea49
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_18 = 0
    
    if (arg3 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = sub_4c42b0(arg4, arg3)
    int32_t var_8_2 = 0
    int32_t var_18_1 = 1
    
    if (arg5 != 0)
        edx = sub_4c4620(arg4, arg5)
    
    char* const ecx = *arg4
    
    if (ecx == 0)
        ecx = &data_83f3d3
    
    int32_t var_8_3 = 1
    char* var_14
    sub_4c4510(sub_4fcc60(&var_14, edx, ecx, &var_14, &(*U"][}{")[1], U"][}{"))
    var_8_3.b = 0
    char* eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        eax_8 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            eax_8 = sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    void* ecx_2 = *arg4
    
    if (ecx_2 == 0)
        ecx_2 = &data_83f3d3
    
    int32_t var_8_4 = 2
    sub_4c4510(sub_4fcc60(eax_8, &var_14, ecx_2, &var_14, &(*U"][}{")[3], &(*U"][}{")[2]))
    var_8_4.b = 0
    char* eax_13 = var_14
    
    if (eax_13 != 0 && *eax_13 != 0)
        void* eax_15 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_15 + 0xc) + 0x10
            sub_4f4430(eax_15, sub_4f4380(esi_4), esi_4)
    
    *arg4
    int32_t var_8_5 = 3
    sub_4c4510(sub_4fcc30(&var_14))
    var_8_5.b = 0
    char* eax_20 = var_14
    
    if (eax_20 != 0 && *eax_20 != 0)
        void* eax_22 = sub_4c4060(&var_14)
        int32_t temp2_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_7 = *(eax_22 + 0xc) + 0x10
            sub_4f4430(eax_22, sub_4f4380(esi_7), esi_7)
    
    *arg4
    int32_t var_8_6 = 4
    sub_4c4510(sub_4fcc30(&var_14))
    var_8_6.b = 0
    char* eax_27 = var_14
    
    if (eax_27 != 0 && *eax_27 != 0)
        void* eax_29 = sub_4c4060(&var_14)
        int32_t temp3_1 = *(eax_29 + 4)
        *(eax_29 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_10 = *(eax_29 + 0xc) + 0x10
            sub_4f4430(eax_29, sub_4f4380(esi_10), esi_10)
    
    sub_4fd020(arg4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

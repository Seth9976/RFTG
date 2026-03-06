// 函数名称: sub_4d0220
// 虚拟地址: 0x4d0220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t** __convention("regparm")sub_4d0220(int32_t arg1, char* arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$_Mpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_54 = 0x2e
    char* var_58 = arg2
    char* eax_3
    char* ecx
    eax_3, ecx = sub_5a8f10(var_58, var_54)
    
    if (eax_3 != 0)
        char const* const var_54_1 = ".zip"
        var_58 = eax_3
        uint32_t eax_4
        int32_t edx
        eax_4, ecx, edx = sub_5a9697(var_58, var_54_1)
        
        if (eax_4 == 0)
            int32_t** eax_5 = sub_4d0000(eax_4, edx, arg2, arg3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
    
    int32_t var_54_3 = 2
    var_58 = ecx
    char** var_18 = &var_58
    
    if (arg2 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_58, arg2)
    void var_20
    int32_t edx_1 = sub_500300(&var_20, var_58)
    int32_t var_8_1 = 0
    int32_t var_54_4 = 0
    var_58 = &var_20
    int32_t* var_3c
    __builtin_memset(&var_3c, 0, 0x1c)
    int32_t* var_28
    char* eax_7 = sub_500130(0, edx_1, &var_28, var_58)
    char* var_1c
    
    if (eax_7.b == 0)
        int32_t var_8_2 = 0xffffffff
        char* eax_8 = var_1c
        
        if (eax_8 != 0 && *eax_8 != 0)
            eax_8 = sub_4c4060(&var_1c)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_8 + 0xc) + 0x10
                sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
        
        eax_8.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    char var_54_6 = arg4.b
    var_58 = arg3
    char* ebx
    ebx.b = __vcasan::OnAsanReport(eax_7, arg4, &var_3c, var_58, var_54_6)
    int32_t* eax_13 = var_3c
    
    if (eax_13 != 0)
        zip_close(eax_13)
        void* var_38
        zip_fclose(var_38)
    
    sub_5a8c61(var_28)
    int32_t var_8_3 = 0xffffffff
    void* eax_15 = var_1c
    
    if (eax_15 != 0 && *eax_15 != 0)
        eax_15 = sub_4c4060(&var_1c)
        int32_t temp1_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_15 + 0xc) + 0x10
            sub_4f4430(eax_15, sub_4f4380(esi_4), esi_4)
    
    eax_15.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_15
}

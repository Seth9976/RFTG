// 函数名称: sub_40b2c0
// 虚拟地址: 0x40b2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_40b2c0(int32_t arg1, int32_t arg2, int32_t arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cfb9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    *arg4 = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t var_18_1 = 1
    char* var_14
    int32_t var_8_2
    char** eax_7
    
    if (arg3 s<= 0x15180)
        if (arg3 s> 0xe10)
            int32_t var_2c_1 = arg3 s/ 0xe10
            eax_7 = sub_4c4a50(&var_14, "%d hours")
            var_8_2 = 2
            goto label_40b372
        
        int32_t eax_21 = (arg3 + 0x1e) s/ 0x3c
        int32_t var_2c_4 = eax_21
        int32_t var_8_3
        char** eax_22
        
        if (eax_21 s> 1)
            eax_22 = sub_4c4a50(&var_14, "%d minutes")
            var_8_3 = 4
        else
            eax_22 = sub_4c4a50(&var_14, "1 minute")
            var_8_3 = 3
        
        sub_4c4510(eax_22)
        var_8_3.b = 0
        sub_4c43d0(&var_14)
    else
        int32_t var_2c = (arg3 + 0xa8c0) s/ 0x15180
        eax_7 = sub_4c4a50(&var_14, "%d days")
        var_8_2 = 1
    label_40b372:
        sub_4c4510(eax_7)
        var_8_2.b = 0
        char* eax_12 = var_14
        
        if (eax_12 != 0 && *eax_12 != 0)
            void* eax_14 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_1 = *(eax_14 + 0xc) + 0x10
                sub_4f4430(eax_14, sub_4f4380(esi_1), esi_1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

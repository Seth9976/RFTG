// 函数名称: sub_4e6800
// 虚拟地址: 0x4e6800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_4e6800(int32_t arg1, int32_t arg2, char** arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e5b9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    char** var_2c = arg3
    int32_t var_8_1 = 1
    char* arg_8
    char** ecx = arg_8
    int32_t* var_14 = &var_2c
    var_2c = ecx
    char* ecx_1 = arg_8
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        void* eax_4 = sub_4c4060(&var_2c)
        *(eax_4 + 4) += 1
    
    char** eax_5
    int32_t edx
    eax_5, edx = sub_4e64f0(&var_14)
    var_8_1.b = 2
    char* ecx_2 = var_14
    
    if (ecx_2 == 0)
        ecx_2 = &data_83f3d3
    
    char** esi = arg4
    var_2c = esi
    sub_51ece0(eax_5, edx, ecx_2, var_2c)
    var_8_1.b = 1
    int32_t* eax_6 = var_14
    int32_t var_18_1 = 1
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            char** esi_2 = *(eax_8 + 0xc) + 0x10
            int32_t* eax_9 = sub_4f4380(esi_2)
            var_2c = esi_2
            sub_4f4430(eax_8, eax_9, var_2c)
            esi = arg4
    
    var_8_1.b = 0
    char* eax_11 = arg_8
    
    if (eax_11 != 0 && *eax_11 != 0)
        void* eax_13 = sub_4c4060(&arg_8)
        int32_t temp1_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp1_1 == 1)
            char** esi_4 = *(eax_13 + 0xc) + 0x10
            int32_t* eax_14 = sub_4f4380(esi_4)
            var_2c = esi_4
            sub_4f4430(eax_13, eax_14, var_2c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg4
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return esi
}

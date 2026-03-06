// 函数名称: sub_522d90
// 虚拟地址: 0x522d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_522d90(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e901
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_20
    sub_522980(&var_20, arg2, sub_522b40, &var_20, arg3)
    int32_t var_8_1 = 1
    int32_t esi = var_20
    char* var_18
    char* ecx_1
    bool cond:0_1
    int32_t var_1c
    
    if (esi == 2 || esi == 3 || esi == 4)
        sub_522420(arg3)
        ecx_1 = var_18
        *arg4 = esi
        arg4[1] = var_1c
        arg4[2] = ecx_1
        cond:0_1 = ecx_1 == 0
        
        if (ecx_1 != 0)
            if (*ecx_1 != 0)
                void* eax_8 = sub_4c4060(&arg4[2])
                *(eax_8 + 4) += 1
                ecx_1 = var_18
            
            cond:0_1 = ecx_1 == 0
    else
        arg4[1] = var_1c
        ecx_1 = var_18
        *arg4 = esi
        arg4[2] = ecx_1
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            void* eax_5 = sub_4c4060(&arg4[2])
            *(eax_5 + 4) += 1
            ecx_1 = var_18
        
        cond:0_1 = ecx_1 == 0
    var_8_1.b = 0
    int32_t var_14_1 = 1
    
    if (not(cond:0_1) && *ecx_1 != 0)
        void* eax_10 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_10 + 0xc) + 0x10
            sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

// 函数名称: sub_537dd0
// 虚拟地址: 0x537dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_537dd0(int32_t arg1, int32_t arg2, void* arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e8c1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_18 = 0
    void* const eax_3 = &data_840680
    char* const eax_4
    
    while (true)
        if (*eax_3 == *(arg3 + 4))
            eax_4 = *(eax_3 + 4)
            break
        
        eax_3 += 8
        
        if (*(eax_3 + 4) == 0)
            eax_4 = &data_83f3d3
            break
    
    char* ecx
    
    do
        ecx.b = *eax_4
        eax_4 = &eax_4[1]
    while (ecx.b != 0)
    
    void* var_2c = arg3
    char* var_14
    sub_4e6b50(&var_14, &eax_4[1], ecx, &var_14, data_3079208)
    int32_t var_8_2 = 1
    *arg4 = &data_83f3d3
    int32_t var_18_1 = 1
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        *(sub_4c4060(&var_14) + 8)
        eax_7 = var_14
    
    if (eax_7 == 0)
        eax_7 = &data_83f3d3
    
    sub_4c4690(arg4, eax_7)
    var_8_2.b = 0
    char* eax_10 = var_14
    
    if (eax_10 != 0 && *eax_10 != 0)
        void* eax_12 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_3), esi_3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg4
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

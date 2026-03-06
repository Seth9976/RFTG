// 函数名称: sub_4088c0
// 虚拟地址: 0x4088c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_4088c0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e760
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_1c
    sub_4080b0(&var_1c, arg1)
    int32_t var_8_1 = 0
    char* var_14
    sub_500000(&var_1c, &var_14)
    char* const eax_4 = var_14
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    char* const var_38_1 = eax_4
    sub_5a9d3d()
    char* eax_5 = var_14
    
    if (eax_5 != 0 && *eax_5 != 0)
        void* eax_7 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_7 + 0xc) + 0x10
            sub_4f4430(eax_7, sub_4f4380(esi_2), esi_2)
    
    int32_t var_8_2 = 0xffffffff
    char* var_18
    char* eax_10 = var_18
    
    if (eax_10 != 0 && *eax_10 != 0)
        void* eax_12 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_4), esi_4)
    
    void var_24
    sub_407fd0(&var_24, arg1)
    int32_t var_8_3 = 1
    sub_500000(&var_24, &var_14)
    char* eax_16 = var_14
    
    if (eax_16 == 0)
        eax_16 = &data_83f3d3
    
    char* var_38_5 = eax_16
    sub_5a9d3d()
    char* eax_17 = var_14
    
    if (eax_17 != 0 && *eax_17 != 0)
        void* eax_19 = sub_4c4060(&var_14)
        int32_t temp2_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_7 = *(eax_19 + 0xc) + 0x10
            sub_4f4430(eax_19, sub_4f4380(esi_7), esi_7)
    
    int32_t var_8_4 = 0xffffffff
    char* result_1
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_9 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_9), esi_9)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

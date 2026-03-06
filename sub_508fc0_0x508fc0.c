// 函数名称: sub_508fc0
// 虚拟地址: 0x508fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_508fc0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d720
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_2c = arg1
    int32_t var_8_1 = 0
    char* arg_4
    var_2c = arg_4
    char* ecx_1 = arg_4
    int32_t* var_18 = &var_2c
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        void* eax_4 = sub_4c4060(&var_2c)
        *(eax_4 + 4) += 1
    
    char* var_14
    sub_50a1e0(&var_14, var_2c)
    void* eax_6 = sub_50a4a0(&var_14)
    
    if (eax_6 == 0)
        var_8_1.b = 0
        char* eax_18 = var_14
        
        if (eax_18 != 0 && *eax_18 != 0)
            void* eax_20 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp0_1 == 1)
                char* esi_6 = *(eax_20 + 0xc) + 0x10
                int32_t* eax_21 = sub_4f4380(esi_6)
                var_2c = esi_6
                sub_4f4430(eax_20, eax_21, var_2c)
        
        int32_t var_8_3 = 0xffffffff
        char* eax_23 = arg_4
        
        if (eax_23 != 0 && *eax_23 != 0)
            void* eax_25 = sub_4c4060(&arg_4)
            int32_t temp2_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp2_1 == 1)
                char* esi_8 = *(eax_25 + 0xc) + 0x10
                int32_t* eax_26 = sub_4f4380(esi_8)
                var_2c = esi_8
                sub_4f4430(eax_25, eax_26, var_2c)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t result = *eax_6
    var_8_1.b = 0
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        void* eax_9 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp1_1 == 1)
            char* esi_2 = *(eax_9 + 0xc) + 0x10
            int32_t* eax_10 = sub_4f4380(esi_2)
            var_2c = esi_2
            sub_4f4430(eax_9, eax_10, var_2c)
    
    int32_t var_8_2 = 0xffffffff
    char* eax_12 = arg_4
    
    if (eax_12 != 0 && *eax_12 != 0)
        void* eax_14 = sub_4c4060(&arg_4)
        int32_t temp3_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp3_1 == 1)
            char* esi_4 = *(eax_14 + 0xc) + 0x10
            int32_t* eax_15 = sub_4f4380(esi_4)
            var_2c = esi_4
            sub_4f4430(eax_14, eax_15, var_2c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

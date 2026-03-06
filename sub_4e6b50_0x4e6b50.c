// 函数名称: sub_4e6b50
// 虚拟地址: 0x4e6b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_4e6b50(int32_t arg1, int32_t arg2, char* arg3, char** arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e569
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_1c = 0
    char** var_14
    sub_51c990(&var_14)
    char* var_34 = arg3
    int32_t var_8_2 = 1
    char** arg_8
    char* ecx_1 = arg_8[8]
    int32_t* var_20 = &var_34
    var_34 = ecx_1
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        void* eax_4 = sub_4c4060(&var_34)
        *(eax_4 + 4) += 1
    
    char* var_18
    char* ecx_2 = sub_51fd90(&var_18)
    var_8_2.b = 2
    char* eax_5 = var_18
    arg_8 = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        void* eax_7 = sub_4c4060(&arg_8)
        *(eax_7 + 4) += 1
    
    var_8_2.b = 3
    data_30785f4
    var_34 = &arg_8
    sub_4c4510(var_34)
    var_8_2.b = 2
    
    if (eax_5 != 0 && *eax_5 != 0)
        void* eax_9 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            char* esi_3 = *(eax_9 + 0xc) + 0x10
            int32_t* eax_10 = sub_4f4380(esi_3)
            var_34 = esi_3
            ecx_2 = sub_4f4430(eax_9, eax_10, var_34)
    
    var_34 = ecx_2
    char* ecx_4 = *(arg5 + 0x20)
    arg_8 = &var_34
    var_34 = ecx_4
    
    if (ecx_4 != 0 && *ecx_4 != 0)
        void* eax_13 = sub_4c4060(&var_34)
        *(eax_13 + 4) += 1
    
    sub_4e6920(arg4)
    char** esi_4 = var_14
    int32_t var_1c_1 = 1
    arg_8 = esi_4
    
    if (esi_4 != 0 && *esi_4 != 0)
        void* eax_15 = sub_4c4060(&arg_8)
        *(eax_15 + 4) += 1
    
    var_8_2.b = 4
    var_34 = &arg_8
    sub_4c4510(var_34)
    var_8_2.b = 2
    
    if (esi_4 != 0 && *esi_4 != 0)
        void* eax_17 = sub_4c4060(&arg_8)
        int32_t temp1_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp1_1 == 1)
            char* esi_6 = *(eax_17 + 0xc) + 0x10
            int32_t* eax_18 = sub_4f4380(esi_6)
            var_34 = esi_6
            sub_4f4430(eax_17, eax_18, var_34)
            esi_4 = var_14
    
    var_8_2.b = 1
    char* eax_20 = var_18
    
    if (eax_20 != 0 && *eax_20 != 0)
        void* eax_22 = sub_4c4060(&var_18)
        int32_t temp2_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp2_1 == 1)
            char* esi_8 = *(eax_22 + 0xc) + 0x10
            int32_t* eax_23 = sub_4f4380(esi_8)
            var_34 = esi_8
            sub_4f4430(eax_22, eax_23, var_34)
            esi_4 = var_14
    
    var_8_2.b = 0
    
    if (esi_4 != 0 && *esi_4 != 0)
        void* eax_26 = sub_4c4060(&var_14)
        int32_t temp3_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp3_1 == 1)
            char* esi_10 = *(eax_26 + 0xc) + 0x10
            int32_t* eax_27 = sub_4f4380(esi_10)
            var_34 = esi_10
            sub_4f4430(eax_26, eax_27, var_34)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

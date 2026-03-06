// 函数名称: sub_522690
// 虚拟地址: 0x522690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_522690(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d049
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_20
    int32_t ecx
    int32_t ecx_1 = sub_5224f0(ecx, "NULL", &var_20, arg2)
    int32_t var_8_1 = 1
    int32_t eax_3 = var_20
    char* var_18
    int32_t* result
    char* esi_1
    
    if (eax_3 != 2 && eax_3 != 3 && eax_3 != 4)
        result = arg1
        esi_1 = var_18
        *result = eax_3
        int32_t var_1c
        result[1] = var_1c
        result[2] = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            void* eax_6 = sub_4c4060(&result[2])
            *(eax_6 + 4) += 1
        
        goto label_52270c
    
    void var_2c
    int32_t* eax_7 = sub_5224f0(ecx_1, "null", &var_2c, arg2)
    var_8_1.b = 2
    int32_t edx_1 = eax_7[1]
    var_20 = *eax_7
    int32_t edx_2 = sub_4c4510(&eax_7[2])
    var_8_1.b = 1
    char* var_24
    char* eax_9 = var_24
    
    if (eax_9 != 0 && *eax_9 != 0)
        void* eax_11 = sub_4c4060(&var_24)
        int32_t temp0_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_4 = *(eax_11 + 0xc) + 0x10
            edx_2 = sub_4f4430(eax_11, sub_4f4380(esi_4), esi_4)
    
    int32_t eax_14 = var_20
    bool cond:0_1
    
    if (eax_14 == 2 || eax_14 == 3 || eax_14 == 4)
        result = arg1
        sub_5225d0(result, edx_2, 0x840380)
        var_8_1.b = 0
        char* eax_19 = var_18
        int32_t var_14_2 = 1
        
        if (eax_19 != 0)
            cond:0_1 = *eax_19 == 0
            goto label_5227ec
    else
        result = arg1
        esi_1 = var_18
        *result = eax_14
        result[1] = edx_1
        result[2] = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            void* eax_17 = sub_4c4060(&result[2])
            *(eax_17 + 4) += 1
        
    label_52270c:
        int32_t var_14_1 = 1
        var_8_1.b = 0
        
        if (esi_1 != 0)
            cond:0_1 = *esi_1 == 0
        label_5227ec:
            
            if (not(cond:0_1))
                void* eax_21 = sub_4c4060(&var_18)
                int32_t temp1_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_6 = *(eax_21 + 0xc) + 0x10
                    sub_4f4430(eax_21, sub_4f4380(esi_6), esi_6)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

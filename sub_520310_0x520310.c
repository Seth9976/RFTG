// 函数名称: sub_520310
// 虚拟地址: 0x520310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_520310(int32_t arg1, char*** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d310
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_30 = &data_30785f8
    char const* const var_34 = "%s/res/"
    char* var_14
    char** var_38 = &var_14
    char*** esi = arg2
    char*** var_30_1 = esi
    var_38 = sub_4c4a50(var_38, var_34)
    int32_t var_8_1 = 0
    var_38 = var_14
    char* ecx_2 = var_14
    arg2 = &var_38
    
    if (ecx_2 != 0 && *ecx_2 != 0)
        void* eax_4 = sub_4c4060(&var_38)
        *(eax_4 + 4) += 1
    
    if (sub_520070(var_38, arg1) == 0)
        int32_t var_30_3 = 0x3078700
        char const* const var_34_2 = "%s/sys/"
        char* var_18
        var_38 = &var_18
        char*** var_30_4 = esi
        int32_t var_34_3 = arg1
        var_38 = sub_4c4a50(var_38, var_34_2)
        var_8_1.b = 1
        var_38 = var_18
        char* ecx_8 = var_18
        arg2 = &var_38
        
        if (ecx_8 != 0 && *ecx_8 != 0)
            void* eax_11 = sub_4c4060(&var_38)
            *(eax_11 + 4) += 1
        
        var_8_1.b = 0
        bool cond:0_1 = sub_520070() == 0
        char* eax_13 = var_18
        
        if (cond:0_1)
            if (eax_13 != 0 && *eax_13 != 0)
                void* eax_19 = sub_4c4060(&var_18)
                int32_t temp1_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_6 = *(eax_19 + 0xc) + 0x10
                    sub_4f4430(eax_19, sub_4f4380(esi_6), esi_6)
            
            int32_t var_8_3 = 0xffffffff
            void* eax_22 = var_14
            
            if (eax_22 != 0 && *eax_22 != 0)
                eax_22 = sub_4c4060(&var_14)
                int32_t temp3_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_8 = *(eax_22 + 0xc) + 0x10
                    sub_4f4430(eax_22, sub_4f4380(esi_8), esi_8)
            
            eax_22.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_22
        
        if (eax_13 != 0 && *eax_13 != 0)
            void* eax_15 = sub_4c4060(&var_18)
            int32_t temp2_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_4 = *(eax_15 + 0xc) + 0x10
                sub_4f4430(eax_15, sub_4f4380(esi_4), esi_4)
    
    int32_t var_8_2 = 0xffffffff
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        eax_6 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_6 + 0xc) + 0x10
            sub_4f4430(eax_6, sub_4f4380(esi_2), esi_2)
    
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6
}

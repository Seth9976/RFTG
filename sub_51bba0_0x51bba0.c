// 函数名称: sub_51bba0
// 虚拟地址: 0x51bba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_51bba0(int128_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* var_2c = arg1
    char* var_14
    int32_t* var_30 = &var_14
    sub_51b510(var_30, var_2c)
    int32_t var_8_1 = 0
    char* eax_4 = var_14
    char ecx_1
    
    if (eax_4 != 0)
        ecx_1 = *eax_4
    
    if (eax_4 == 0 || ecx_1 == 0)
        int32_t var_8_2 = 0xffffffff
    else if (ecx_1 == 0x21)
        int32_t var_8_3 = 0xffffffff
    else
        var_2c = &data_88bacc
        var_30 = eax_4
        char* eax_5 = sub_5a8e80(var_30, var_2c)
        char* eax_6
        int128_t* ecx_2
        
        if (eax_5 == 0)
            var_2c = &data_88bad0
            var_30 = eax_4
            eax_6, ecx_2 = sub_5a8e80(var_30, var_2c)
        
        if (eax_5 == 0 && eax_6 == 0)
            char* edx_1 = var_14
            var_2c = ecx_2
            var_2c = edx_1
            char* ecx_3 = var_14
            int128_t** var_18_1 = &var_2c
            
            if (ecx_3 != 0 && *ecx_3 != 0)
                void* eax_8 = sub_4c4060(&var_2c)
                *(eax_8 + 4) += 1
            
            void* eax_9 = sub_508fc0(ecx_3)
            
            if (eax_9 != 0)
                int32_t eax_10 = *(eax_9 + 8)
                
                if (eax_10 == 1 || eax_10 == 2)
                    int32_t var_8_4 = 0xffffffff
                    int32_t* eax_11 = sub_4c43d0(&var_14)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_11
            
            char* eax_12 = var_14
            
            if (eax_12 == 0)
                eax_12 = &data_83f3d3
            
            char* eax_13
            int32_t* ecx_7
            eax_13, ecx_7 = sub_508bc0(eax_12)
            
            if (data_30785f1 == 0)
                var_2c = nullptr
                var_30 = ecx_7
                var_30 = var_14
                char* ecx_11 = var_14
                int32_t** var_18_2 = &var_30
                
                if (ecx_11 != 0 && *ecx_11 != 0)
                    void* eax_16 = sub_4c4060(&var_30)
                    *(eax_16 + 4) += 1
                
                sub_509b00(var_30)
            else
                char* edx_2 = var_14
                
                if (edx_2 == 0)
                    edx_2 = &data_83f3d3
                
                char** eax_14
                char edx_3
                eax_14, edx_3 = sub_509140(eax_13, edx_2)
                var_2c = nullptr
                sub_520800(eax_14, edx_3, eax_14, var_2c.b)
            
            int32_t var_8_5 = 0xffffffff
            eax_4 = var_14
        else
            eax_4 = var_14
            var_8_3 = 0xffffffff
    
    if (eax_4 != 0 && *eax_4 != 0)
        eax_4 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            int128_t* esi_4 = *(eax_4 + 0xc) + 0x10
            int32_t* eax_18 = sub_4f4380(esi_4)
            var_2c = esi_4
            eax_4 = sub_4f4430(eax_4, eax_18, var_2c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}

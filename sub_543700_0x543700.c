// 函数名称: sub_543700
// 虚拟地址: 0x543700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_543700(int128_t* arg1)
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
    char* ecx = var_14
    
    if (ecx == 0 || *ecx == 0)
        int32_t var_8_2 = 0xffffffff
        
        if (ecx != 0 && *ecx != 0)
            void* eax_5 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                int128_t* esi_2 = *(eax_5 + 0xc) + 0x10
                int32_t* eax_6 = sub_4f4380(esi_2)
                var_2c = esi_2
                sub_4f4430(eax_5, eax_6, var_2c)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    var_2c = ecx
    var_2c = ecx
    char* ecx_3 = var_14
    int128_t** var_18 = &var_2c
    
    if (ecx_3 != 0 && *ecx_3 != 0)
        void* eax_10 = sub_4c4060(&var_2c)
        *(eax_10 + 4) += 1
    
    char** result = sub_508fc0(ecx_3)
    
    if (result == 0)
        char* eax_12 = var_14
        
        if (eax_12 == 0)
            eax_12 = &data_83f3d3
        
        char* eax_13
        int32_t* ecx_4
        eax_13, ecx_4 = sub_508bc0(eax_12)
        char* edx_1 = var_14
        var_2c = nullptr
        var_30 = ecx_4
        var_30 = edx_1
        char* ecx_5 = var_14
        int32_t** var_18_1 = &var_30
        
        if (ecx_5 != 0 && *ecx_5 != 0)
            void* eax_15 = sub_4c4060(&var_30)
            *(eax_15 + 4) += 1
        
        sub_509b00(var_30)
        char* edx_2 = var_14
        
        if (edx_2 == 0)
            edx_2 = &data_83f3d3
        
        result = sub_509140(eax_13, edx_2)
    
    int32_t var_8_3 = 0xffffffff
    char* eax_17 = var_14
    
    if (eax_17 != 0 && *eax_17 != 0)
        void* eax_19 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp1_1 == 1)
            int128_t* esi_5 = *(eax_19 + 0xc) + 0x10
            int32_t* eax_20 = sub_4f4380(esi_5)
            var_2c = esi_5
            sub_4f4430(eax_19, eax_20, var_2c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

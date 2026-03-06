// 函数名称: sub_4c76f0
// 虚拟地址: 0x4c76f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* const __convention("regparm")sub_4c76f0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eab0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg3 = 0
    sub_4c4590(&data_83f3d3)
    sub_4c4590(&data_83f3d3)
    int128_t* var_1c = *arg4
    char* const var_14 = &data_83f3d3
    int32_t var_8_1 = 0
    
    if (sub_4c7680(&var_14, &var_1c) == 0)
        int32_t var_8_2 = 0xffffffff
        char* const eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            eax_6 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_6 + 0xc) + 0x10
                sub_4f4430(eax_6, sub_4f4380(esi_2), esi_2)
        
        eax_6.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    char* const edi_2 = var_14
    char* const eax_10 = &data_83f3d3
    
    if (edi_2 != 0)
        eax_10 = edi_2
    
    int32_t* var_34_2 = arg3
    int32_t eax_11 = sub_5a957c(eax_10, "HTTP/1.1 %d")
    int32_t eax_13
    
    if (eax_11 != 1)
        char* const eax_12 = &data_83f3d3
        
        if (edi_2 != 0)
            eax_12 = edi_2
        
        int32_t* var_34_3 = arg3
        eax_13 = sub_5a957c(eax_12, "HTTP/1.0 %d")
    
    if (eax_11 == 1 || eax_13 == 1)
        int128_t* ebx_3 = var_1c
        int32_t* eax_15
        
        if (*arg3 != 0xc8)
            char* const eax_14 = &data_83f3d3
            
            if (edi_2 != 0)
                eax_14 = edi_2
            
            char* const var_34_4 = eax_14
            sub_4c5680("http response line: %s")
            int32_t var_8_3 = 0xffffffff
            
            if (edi_2 != 0 && *edi_2 != 0)
                eax_15 = sub_4c4060(&var_14)
                int32_t temp2_1 = eax_15[1]
                eax_15[1] -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_4 = eax_15[3] + 0x10
                    sub_4f4430(eax_15, sub_4f4380(esi_4), esi_4)
                    int32_t eax_19
                    eax_19.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_19
            
            goto label_4c79e4
        
        int32_t var_20 = 0xffffffff
        char* const var_18 = &data_83f3d3
        var_8_1.b = 1
        
        if (sub_4c7680(&var_18, &var_1c) == 0)
        label_4c791b:
            var_8_1.b = 0
            sub_4c43d0(&var_18)
            int32_t var_8_4 = 0xffffffff
            sub_4c43d0(&var_14)
            int32_t* eax_30
            eax_30.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_30
        
        while (true)
            char* const edi_6 = var_18
            
            if (edi_6 == 0)
                break
            
            if (*edi_6 == 0)
                break
            
            if (*(sub_4c4060(&var_18) + 8) == 0)
                break
            
            int32_t* var_34_6 = &var_20
            sub_5a957c(edi_6, "Content-Length: %d")
            var_8_1.b = 0
            
            if (*edi_6 != 0)
                void* eax_25 = sub_4c4060(&var_18)
                int32_t temp3_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_6 = *(eax_25 + 0xc) + 0x10
                    sub_4f4430(eax_25, sub_4f4380(esi_6), esi_6)
            
            var_18 = &data_83f3d3
            var_8_1.b = 1
            
            if (sub_4c7680(&var_18, &var_1c) == 0)
                goto label_4c791b
        
        int128_t* edi_10 = var_1c
        sub_4c4690(arg5, ebx_3)
        var_8_1.b = 0
        sub_4c43d0(&var_18)
        int32_t ebx_5 = var_20
        
        if (ebx_5 s< 0)
            sub_4c4620(arg6, edi_10)
        label_4c79d8:
            int32_t var_8_6 = 0xffffffff
            sub_4c43d0(&var_14)
        label_4c79e4:
            eax_15.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_15
        
        if (ebx_5 == 0)
            goto label_4c79d8
        
        void* eax_35 = edi_10 - *arg4
        void* ecx_13 = arg4[1] - eax_35
        
        if (ecx_13 s>= ebx_5)
            if (ecx_13 s> ebx_5)
                sub_4c5680("extra data after http response")
            
            sub_4c4690(arg6, edi_10)
            goto label_4c79d8
        
        if (eax_35 + ebx_5 + 1 s> arg4[2])
            int32_t* var_34_10 = arg4
            sub_4c6490(eax_35 + ebx_5 + 1, arg4)
    
    int32_t var_8_5 = 0xffffffff
    sub_4c43d0(&var_14)
    int32_t* eax_37
    eax_37.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_37
}

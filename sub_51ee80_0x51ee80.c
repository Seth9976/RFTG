// 函数名称: sub_51ee80
// 虚拟地址: 0x51ee80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_51ee80(int32_t arg1, int32_t arg2, char* arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e381
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_3c = arg3
    int32_t var_20 = 0
    char** var_1c = &var_3c
    
    if (arg3 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_3c, arg3)
    char* var_14
    sub_50a1e0(&var_14, var_3c)
    int32_t var_8_1 = 1
    char** var_24 = &var_3c
    sub_4c42b0(&var_3c, &data_30785f8)
    char* var_18
    sub_50a1e0(&var_18)
    var_8_1.b = 2
    char* eax_4 = var_18
    char* edx
    
    if (eax_4 == 0 || *eax_4 == 0)
        edx = nullptr
    else
        edx = *(sub_4c4060(&var_18) + 8)
        eax_4 = var_18
    
    char* ecx = var_14
    
    if (ecx == 0)
        ecx = &data_83f3d3
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    var_3c = edx
    uint32_t eax_7
    char* ecx_1
    eax_7, ecx_1 = sub_5a9f0b(eax_4, ecx, var_3c)
    char** esi_3
    
    if (eax_7 != 0)
        var_3c = ecx_1
        char** var_24_1 = &var_3c
        sub_4c42b0(&var_3c, 0x3078700)
        sub_50a1e0(&var_1c, var_3c)
        var_8_1.b = 3
        char** eax_20 = var_1c
        char* edx_1
        
        if (eax_20 == 0 || *eax_20 == 0)
            edx_1 = nullptr
        else
            edx_1 = *(sub_4c4060(&var_1c) + 8)
            eax_20 = var_1c
        
        char* ecx_6 = var_14
        
        if (ecx_6 == 0)
            ecx_6 = &data_83f3d3
        
        if (eax_20 == 0)
            eax_20 = &data_83f3d3
        
        var_3c = edx_1
        
        if (sub_5a9f0b(eax_20, ecx_6, var_3c) == 0)
            char* eax_24 = var_14
            char* esi_6 = &data_83f3d3
            
            if (eax_24 != 0)
                esi_6 = eax_24
            
            char** eax_25 = var_1c
            int32_t eax_26
            
            if (eax_25 == 0 || *eax_25 == 0)
                eax_26 = 0
            else
                eax_26 = *(sub_4c4060(&var_1c) + 8)
            
            char* esi_7 = &esi_6[eax_26]
            
            if (*esi_7 == 0x2f)
                esi_7 = &esi_7[1]
            
            var_3c = 4
            uint32_t eax_29
            int32_t edx_2
            eax_29, edx_2 = sub_5a7934(esi_7, "sys/", var_3c)
            
            if (eax_29 == 0)
                esi_3 = arg4
                sub_4c4330(esi_7, edx_2, esi_3)
                int32_t var_20_4 = 1
                var_8_1.b = 2
                sub_4c43d0(&var_1c)
            else
                char* eax_30 = var_14
                esi_3 = arg4
                *esi_3 = eax_30
                
                if (eax_30 != 0 && *eax_30 != 0)
                    void* eax_32 = sub_4c4060(esi_3)
                    *(eax_32 + 4) += 1
                
                int32_t var_20_3 = 1
                var_8_1.b = 2
                sub_4c43d0(&var_1c)
            
        label_51efe8:
            var_8_1.b = 1
            sub_4c43d0(&var_18)
            var_8_1.b = 0
            sub_4c43d0(&var_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi_3
        
        char* ecx_10 = var_14
        *arg4 = ecx_10
        
        if (ecx_10 != 0 && *ecx_10 != 0)
            void* eax_35 = sub_4c4060(arg4)
            *(eax_35 + 4) += 1
        
        var_8_1.b = 2
        char** eax_36 = var_1c
        int32_t var_20_5 = 1
        
        if (eax_36 != 0 && *eax_36 != 0)
            void* eax_38 = sub_4c4060(&var_1c)
            int32_t temp0_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp0_1 == 1)
                char* esi_9 = *(eax_38 + 0xc) + 0x10
                int32_t* eax_39 = sub_4f4380(esi_9)
                var_3c = esi_9
                sub_4f4430(eax_38, eax_39, var_3c)
    else
        char* eax_8 = var_14
        char* esi_2 = &data_83f3d3
        
        if (eax_8 != 0)
            esi_2 = eax_8
        
        char* eax_9 = var_18
        int32_t eax_10
        
        if (eax_9 == 0 || *eax_9 == 0)
            eax_10 = 0
        else
            eax_10 = *(sub_4c4060(&var_18) + 8)
        
        void* edi_1 = &esi_2[eax_10]
        
        if (esi_2[eax_10] == 0x2f)
            edi_1 += 1
        
        var_3c = 4
        uint32_t eax_13 = sub_5a7934(edi_1, "res/", var_3c)
        uint32_t eax_14
        
        if (eax_13 != 0)
            var_3c = 5
            eax_14 = sub_5a7934(edi_1, "xbin/", var_3c)
        
        if (eax_13 != 0 && eax_14 != 0)
            char* eax_15 = var_14
            esi_3 = arg4
            *esi_3 = eax_15
            
            if (eax_15 != 0 && *eax_15 != 0)
                void* eax_17 = sub_4c4060(esi_3)
                *(eax_17 + 4) += 1
            
            int32_t var_20_1 = 1
            goto label_51efe8
        
        if (edi_1 == 0)
            var_3c = "XString::XString"
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, var_3c)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c42b0(arg4, edi_1)
        int32_t var_20_2 = 1
    var_8_1.b = 1
    char* eax_41 = var_18
    
    if (eax_41 != 0 && *eax_41 != 0)
        void* eax_43 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp1_1 == 1)
            char* esi_11 = *(eax_43 + 0xc) + 0x10
            int32_t* eax_44 = sub_4f4380(esi_11)
            var_3c = esi_11
            sub_4f4430(eax_43, eax_44, var_3c)
    
    var_8_1.b = 0
    char* eax_46 = var_14
    
    if (eax_46 != 0 && *eax_46 != 0)
        void* eax_48 = sub_4c4060(&var_14)
        int32_t temp2_1 = *(eax_48 + 4)
        *(eax_48 + 4) -= 1
        
        if (temp2_1 == 1)
            char* esi_13 = *(eax_48 + 0xc) + 0x10
            int32_t* eax_49 = sub_4f4380(esi_13)
            var_3c = esi_13
            sub_4f4430(eax_48, eax_49, var_3c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

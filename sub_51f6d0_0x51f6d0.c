// 函数名称: sub_51f6d0
// 虚拟地址: 0x51f6d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_51f6d0(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e2e1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_34 = ebx
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_24 = 0
    int32_t var_8_1 = 1
    
    if (data_8bc5ff == 0)
        sub_4c5870("gCompilingMode", &data_83f3d3, "DefLoad.cpp", 0x12c, "AssetSourceGetFullPath")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_2c
    int32_t* eax_4 = &var_2c
    int32_t* var_30
    sub_51f5c0(eax_4, arg2, &var_30)
    int32_t esi = var_2c
    char* arg_8
    char* var_20
    char* lpFileName_1
    int32_t* eax_12
    
    if (esi != 0)
        char* ecx_3 = arg_8
        
        if (ecx_3 == 0)
            ecx_3 = &data_83f3d3
        
        char* var_18
        sub_509f10(eax_4, &var_18, ecx_3, &var_18)
        var_8_1.b = 4
        var_20 = nullptr
        
        if (esi s> 0)
            void* eax_32
            
            do
                char* edi_3 = var_30[var_20]
                
                if (edi_3 == 0)
                    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char* var_1c
                sub_4c42b0(&var_1c, edi_3)
                var_8_1.b = 5
                var_8_1.b = 6
                char* var_28
                char* const eax_15 = *sub_4c48a0(&var_18, &var_28, &var_1c)
                
                if (eax_15 == 0)
                    eax_15 = &data_83f3d3
                
                sub_51ece0(eax_15, &lpFileName_1, eax_15, &lpFileName_1)
                var_8_1.b = 8
                char* eax_16 = var_28
                
                if (eax_16 != 0 && *eax_16 != 0)
                    void* eax_18 = sub_4c4060(&var_28)
                    int32_t temp2_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t esi_6 = *(eax_18 + 0xc) + 0x10
                        sub_4f4430(eax_18, sub_4f4380(esi_6), esi_6)
                
                var_8_1.b = 9
                char* eax_21 = var_1c
                
                if (eax_21 != 0 && *eax_21 != 0)
                    void* eax_23 = sub_4c4060(&var_1c)
                    int32_t temp6_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        int32_t esi_8 = *(eax_23 + 0xc) + 0x10
                        sub_4f4430(eax_23, sub_4f4380(esi_8), esi_8)
                
                char* lpFileName = lpFileName_1
                
                if (lpFileName == 0)
                    lpFileName = &data_83f3d3
                
                if (GetFileAttributesA(lpFileName) != 0xffffffff)
                    char* lpFileName_4 = lpFileName_1
                    *arg1 = lpFileName_4
                    
                    if (lpFileName_4 != 0 && *lpFileName_4 != 0)
                        void* eax_37 = sub_4c4060(arg1)
                        *(eax_37 + 4) += 1
                        lpFileName_4 = lpFileName_1
                    
                    int32_t var_24_2 = 1
                    var_8_1.b = 4
                    
                    if (lpFileName_4 != 0 && *lpFileName_4 != 0)
                        void* eax_39 = sub_4c4060(&lpFileName_1)
                        int32_t temp8_1 = *(eax_39 + 4)
                        *(eax_39 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            int32_t esi_12 = *(eax_39 + 0xc) + 0x10
                            sub_4f4430(eax_39, sub_4f4380(esi_12), esi_12)
                    
                    var_8_1.b = 1
                    char* eax_42 = var_18
                    
                    if (eax_42 != 0 && *eax_42 != 0)
                        void* eax_44 = sub_4c4060(&var_18)
                        int32_t temp9_1 = *(eax_44 + 4)
                        *(eax_44 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            int32_t esi_14 = *(eax_44 + 0xc) + 0x10
                            sub_4f4430(eax_44, sub_4f4380(esi_14), esi_14)
                    
                    var_8_1.b = 0
                    char* eax_47 = arg_8
                    
                    if (eax_47 != 0 && *eax_47 != 0)
                        void* eax_49 = sub_4c4060(&arg_8)
                        int32_t temp10_1 = *(eax_49 + 4)
                        *(eax_49 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            int32_t esi_16 = *(eax_49 + 0xc) + 0x10
                            sub_4f4430(eax_49, sub_4f4380(esi_16), esi_16)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg1
                
                var_8_1.b = 4
                char* lpFileName_3 = lpFileName_1
                
                if (lpFileName_3 != 0 && *lpFileName_3 != 0)
                    void* eax_28 = sub_4c4060(&lpFileName_1)
                    int32_t temp7_1 = *(eax_28 + 4)
                    *(eax_28 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        int32_t esi_10 = *(eax_28 + 0xc) + 0x10
                        sub_4f4430(eax_28, sub_4f4380(esi_10), esi_10)
                
                eax_32 = &var_20[1]
                var_20 = eax_32
            while (eax_32 s< var_2c)
        
        char* edi_10 = *var_30
        
        if (edi_10 == 0)
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c42b0(&var_20, edi_10)
        var_8_1.b = 0xa
        int32_t* eax_53
        int32_t edx_4
        eax_53, edx_4 = sub_4c48a0(&var_18, &var_30, &var_20)
        var_8_1.b = 0xb
        char* const eax_54 = *eax_53
        
        if (eax_54 == 0)
            eax_54 = &data_83f3d3
        
        sub_51ece0(eax_54, edx_4, eax_54, arg1)
        var_8_1.b = 0xa
        int32_t* eax_55 = var_30
        int32_t var_24_3 = 1
        
        if (eax_55 != 0 && *eax_55 != 0)
            void* eax_57 = sub_4c4060(&var_30)
            int32_t temp1_1 = *(eax_57 + 4)
            *(eax_57 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_19 = *(eax_57 + 0xc) + 0x10
                sub_4f4430(eax_57, sub_4f4380(esi_19), esi_19)
        
        var_8_1.b = 4
        char* eax_60 = var_20
        
        if (eax_60 != 0 && *eax_60 != 0)
            void* eax_62 = sub_4c4060(&var_20)
            int32_t temp5_1 = *(eax_62 + 4)
            *(eax_62 + 4) -= 1
            
            if (temp5_1 == 1)
                int32_t esi_21 = *(eax_62 + 0xc) + 0x10
                sub_4f4430(eax_62, sub_4f4380(esi_21), esi_21)
        
        var_8_1.b = 1
        char* eax_65 = var_18
        
        if (eax_65 != 0 && *eax_65 != 0)
            eax_12 = &var_18
            goto label_51fb4f
    else
        sub_4c42b0(&lpFileName_1, ".xml")
        var_8_1.b = 2
        int32_t* eax_5
        int32_t edx_1
        eax_5, edx_1 = sub_4c48a0(&arg_8, &var_20, &lpFileName_1)
        var_8_1.b = 3
        char* const ecx_1 = *eax_5
        
        if (ecx_1 == 0)
            ecx_1 = &data_83f3d3
        
        sub_51ece0(arg1, edx_1, ecx_1, arg1)
        var_8_1.b = 2
        char* eax_7 = var_20
        int32_t var_24_1 = 1
        
        if (eax_7 != 0 && *eax_7 != 0)
            void* eax_9 = sub_4c4060(&var_20)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_3 = *(eax_9 + 0xc) + 0x10
                sub_4f4430(eax_9, sub_4f4380(esi_3), esi_3)
        
        var_8_1.b = 1
        char* lpFileName_2 = lpFileName_1
        
        if (lpFileName_2 != 0 && *lpFileName_2 != 0)
            eax_12 = &lpFileName_1
        label_51fb4f:
            void* eax_66 = sub_4c4060(eax_12)
            int32_t temp4_1 = *(eax_66 + 4)
            *(eax_66 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_23 = *(eax_66 + 0xc) + 0x10
                sub_4f4430(eax_66, sub_4f4380(esi_23), esi_23)
    var_8_1.b = 0
    char* eax_69 = arg_8
    
    if (eax_69 != 0 && *eax_69 != 0)
        void* eax_71 = sub_4c4060(&arg_8)
        int32_t temp3_1 = *(eax_71 + 4)
        *(eax_71 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_25 = *(eax_71 + 0xc) + 0x10
            sub_4f4430(eax_71, sub_4f4380(esi_25), esi_25)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}

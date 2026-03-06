// 函数名称: sub_51b510
// 虚拟地址: 0x51b510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_51b510(char** arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e3d9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* edi = arg2
    int32_t var_1c = 0
    char* eax_3 = sub_5a8f10(edi, 0x2e)
    char* var_2c = eax_3
    
    if (eax_3 == 0)
        sub_4c42b0(arg1, &data_83f3d3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    if (edi == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const var_18 = &data_83f3d3
    int32_t edx = sub_4c4690(&var_18, edi)
    int32_t var_8_1 = 1
    char* const ecx_2 = &data_83f3d3
    
    if (var_18 != 0)
        ecx_2 = var_18
    
    char* var_14
    sub_51ee80(&var_14, edx, ecx_2, &var_14)
    var_8_1.b = 2
    char** ebx_4
    char const (** var_34)[0x5]
    char const (** var_30)[0x5]
    char* eax_54
    int32_t esi_22
    
    if (sub_5a9697(var_2c, ".xml") != 0)
        int32_t ebx_5 = 0
        int32_t esi_17
        char const (** edi_13)[0x5]
        
        while (true)
            sub_51f5c0(&var_34, ebx_5, &var_30)
            edi_13 = var_34
            esi_17 = 0
            
            if (edi_13 s> 0)
                break
            
        label_51b906:
            ebx_5 += 1
            
            if (ebx_5 s>= 0x23)
                ebx_4 = arg1
                sub_4c42b0(ebx_4, &data_83f3d3)
                var_8_1.b = 1
                eax_54 = var_14
                goto label_51b922
        
        void** edx_8
        
        while (true)
            uint32_t eax_57
            eax_57, edx_8 = sub_5a9697(var_30[esi_17], var_2c)
            
            if (eax_57 == 0)
                break
            
            esi_17 += 1
            
            if (esi_17 s>= edi_13)
                goto label_51b906
        
        void* eax_68 = &data_840680
        void* ebx_6
        
        while (true)
            if (*eax_68 == ebx_5)
                ebx_6 = *(eax_68 + 4)
                break
            
            eax_68 += 8
            
            if (*(eax_68 + 4) == 0)
                ebx_6 = &data_83f3d3
                break
        
        char* eax_69 = var_14
        int16_t* const ecx_29
        
        if (eax_69 == 0 || *eax_69 == 0)
            char** var_48_15 = &var_14
            sub_4c40c0(1, edx_8)
            char* edx_9 = var_14
            ecx_29 = &data_88bac8
            char i
            
            do
                i = *ecx_29
                *edx_9 = i
                ecx_29 += 1
                edx_9 = &edx_9[1]
            while (i != 0)
        else
            int16_t* esi_23 = *(sub_4c4060(&var_14) + 8)
            sub_4c4160(esi_23 + 1, edx_8, &var_14, esi_23 + 1, 1)
            ecx_29.w = 0x2e
            *(esi_23 + var_14) = 0x2e
        
        if (*ebx_6 != 0)
            char* eax_73 = var_14
            
            if (eax_73 == 0 || *eax_73 == 0)
                void* eax_74 = ebx_6
                void** edx_11 = eax_74 + 1
                
                do
                    ecx_29.b = *eax_74
                    eax_74 += 1
                while (ecx_29.b != 0)
                
                char** var_48_16 = &var_14
                sub_4c40c0(eax_74 - edx_11, edx_11)
                char* edx_12 = var_14
                void* ecx_31 = ebx_6
                char i_1
                
                do
                    i_1 = *ecx_31
                    *edx_12 = i_1
                    ecx_31 += 1
                    edx_12 = &edx_12[1]
                while (i_1 != 0)
            else
                int32_t edi_18 = *(sub_4c4060(&var_14) + 8)
                void* eax_78 = ebx_6
                void** edx_13 = eax_78 + 1
                
                do
                    ecx_29.b = *eax_78
                    eax_78 += 1
                while (ecx_29.b != 0)
                
                void* eax_79 = eax_78 - edx_13
                void* eax_80 = eax_79 + edi_18
                sub_4c4160(eax_80, edx_13, &var_14, eax_80, 1)
                sub_5ab990(&var_14[edi_18], ebx_6, eax_79 + 1)
        
        char* eax_83 = var_14
        ebx_4 = arg1
        *ebx_4 = eax_83
        
        if (eax_83 != 0 && *eax_83 != 0)
            void* eax_82 = sub_4c4060(ebx_4)
            *(eax_82 + 4) += 1
            eax_83 = var_14
        
        int32_t var_1c_4 = 1
        var_8_1.b = 1
        
        if (eax_83 != 0 && *eax_83 != 0)
            if (*(eax_83 - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp4_1 = *(eax_83 - 0xc)
            *(eax_83 - 0xc) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_27 = *(eax_83 - 4) + 0x10
                sub_4f4430(&eax_83[0xfffffff0], sub_4f4380(esi_27), esi_27)
        
        var_8_1.b = 0
        char* eax_87 = var_18
        
        if (eax_87 != 0 && *eax_87 != 0)
            if (*(eax_87 - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp7_1 = *(eax_87 - 0xc)
            *(eax_87 - 0xc) -= 1
            
            if (temp7_1 == 1)
                esi_22 = *(eax_87 - 4) + 0x10
                sub_4f4430(&eax_87[0xfffffff0], sub_4f4380(esi_22), esi_22)
    else
        char* eax_8 = var_14
        
        if (eax_8 == 0)
            eax_8 = &data_83f3d3
        
        char* eax_9 = sub_508bc0(eax_8)
        char** esi_2
        
        if (eax_9 == 0)
            esi_2 = arg1
            sub_4c4330(&data_83f3d3, eax_9, esi_2)
        label_51b626:
            int32_t var_1c_1 = 1
            var_8_1.b = 1
            sub_4c43d0(&var_14)
            var_8_1.b = 0
            sub_4c43d0(&var_18)
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi_2
        
        sub_51f5c0(&var_2c, eax_9, &var_34)
        char* esi_3 = var_2c
        
        if (esi_3 == 0)
            char* eax_12 = var_14
            esi_2 = arg1
            *esi_2 = eax_12
            
            if (eax_12 != 0 && *eax_12 != 0)
                void* eax_14 = sub_4c4060(esi_2)
                *(eax_14 + 4) += 1
            
            goto label_51b626
        
        char* eax_15 = sub_554aa0(&data_840680, eax_9, eax_9)
        char* ecx_10
        
        do
            ecx_10.b = *eax_15
            eax_15 = &eax_15[1]
        while (ecx_10.b != 0)
        int32_t var_28_1 = 0
        
        if (esi_3 s> 0)
            var_30 = eax_3 - edi - (eax_15 - &eax_15[1] + 1)
            
            while (true)
                char* const var_24 = &data_83f3d3
                var_8_1.b = 3
                sub_4c4690(&var_24, edi)
                int32_t eax_21 = sub_4c4620(&var_24, var_34[var_28_1])
                char* const ebx_3 = var_24
                char* const ecx_13 = &data_83f3d3
                
                if (ebx_3 != 0)
                    ecx_13 = ebx_3
                
                char* lpFileName_1
                sub_51ece0(eax_21, &lpFileName_1, ecx_13, &lpFileName_1)
                var_8_1.b = 4
                char* lpFileName = lpFileName_1
                
                if (lpFileName == 0)
                    lpFileName = &data_83f3d3
                
                uint32_t eax_22
                int32_t edx_5
                eax_22, edx_5 = GetFileAttributesA(lpFileName)
                
                if (eax_22 != 0xffffffff)
                    sub_4c4330(&data_83f3d3, edx_5, arg1)
                    var_8_1.b = 3
                    char* lpFileName_3 = lpFileName_1
                    int32_t var_1c_2 = 1
                    
                    if (lpFileName_3 != 0 && *lpFileName_3 != 0)
                        void* eax_34 = sub_4c4060(&lpFileName_1)
                        int32_t temp2_1 = *(eax_34 + 4)
                        *(eax_34 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            int32_t esi_10 = *(eax_34 + 0xc) + 0x10
                            sub_4f4430(eax_34, sub_4f4380(esi_10), esi_10)
                    
                    var_8_1.b = 2
                    
                    if (ebx_3 != 0 && *ebx_3 != 0)
                        void* eax_38 = sub_4c4060(&var_24)
                        int32_t temp5_1 = *(eax_38 + 4)
                        *(eax_38 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            int32_t esi_12 = *(eax_38 + 0xc) + 0x10
                            sub_4f4430(eax_38, sub_4f4380(esi_12), esi_12)
                    
                    var_8_1.b = 1
                    char* eax_41 = var_14
                    
                    if (eax_41 != 0 && *eax_41 != 0)
                        void* eax_43 = sub_4c4060(&var_14)
                        int32_t temp8_1 = *(eax_43 + 4)
                        *(eax_43 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            int32_t esi_14 = *(eax_43 + 0xc) + 0x10
                            sub_4f4430(eax_43, sub_4f4380(esi_14), esi_14)
                    
                    var_8_1.b = 0
                    char* const eax_46 = var_18
                    
                    if (eax_46 != 0 && *eax_46 != 0)
                        void* eax_48 = sub_4c4060(&var_18)
                        int32_t temp9_1 = *(eax_48 + 4)
                        *(eax_48 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            int32_t esi_16 = *(eax_48 + 0xc) + 0x10
                            sub_4f4430(eax_48, sub_4f4380(esi_16), esi_16)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg1
                
                var_8_1.b = 3
                char* lpFileName_2 = lpFileName_1
                
                if (lpFileName_2 != 0 && *lpFileName_2 != 0)
                    void* eax_24 = sub_4c4060(&lpFileName_1)
                    int32_t temp3_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t esi_6 = *(eax_24 + 0xc) + 0x10
                        sub_4f4430(eax_24, sub_4f4380(esi_6), esi_6)
                
                var_8_1.b = 2
                
                if (ebx_3 != 0 && *ebx_3 != 0)
                    void* eax_28 = sub_4c4060(&var_24)
                    int32_t temp6_1 = *(eax_28 + 4)
                    *(eax_28 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        int32_t esi_8 = *(eax_28 + 0xc) + 0x10
                        sub_4f4430(eax_28, sub_4f4380(esi_8), esi_8)
                
                int32_t eax_32 = var_28_1 + 1
                var_28_1 = eax_32
                
                if (eax_32 s>= var_2c)
                    break
                
                edi = arg2
        
        eax_54 = var_14
        ebx_4 = arg1
        *ebx_4 = eax_54
        
        if (eax_54 != 0 && *eax_54 != 0)
            void* eax_53 = sub_4c4060(ebx_4)
            *(eax_53 + 4) += 1
            eax_54 = var_14
        
        var_8_1.b = 1
    label_51b922:
        int32_t var_1c_3 = 1
        
        if (eax_54 != 0 && *eax_54 != 0)
            void* eax_59 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_59 + 4)
            *(eax_59 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_20 = *(eax_59 + 0xc) + 0x10
                sub_4f4430(eax_59, sub_4f4380(esi_20), esi_20)
        
        var_8_1.b = 0
        char* const eax_62 = var_18
        
        if (eax_62 != 0 && *eax_62 != 0)
            void* eax_64 = sub_4c4060(&var_18)
            int32_t temp1_1 = *(eax_64 + 4)
            *(eax_64 + 4) -= 1
            
            if (temp1_1 == 1)
                esi_22 = *(eax_64 + 0xc) + 0x10
                sub_4f4430(eax_64, sub_4f4380(esi_22), esi_22)
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx_4
}

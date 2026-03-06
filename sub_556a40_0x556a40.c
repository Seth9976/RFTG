// 函数名称: sub_556a40
// 虚拟地址: 0x556a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_556a40(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d2d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_48 = arg4
    int32_t* esi = arg3
    int32_t* var_50 = esi
    char* result_1
    sub_5569a0(&var_48, &result_1)
    int32_t var_8_1 = 0
    char* const result_2 = result_1
    int32_t var_58 = 0
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    int32_t* var_c4_1 = &var_58
    sub_5a957c(result_2, &data_85f660)
    int32_t eax_5 = var_58 + 1
    var_58 = eax_5
    char* result
    
    if (eax_5 == esi[1])
        esi[1] = eax_5
        var_8_1.b = 1
        char* var_44
        sub_4c4510(sub_5569a0(&var_48, &var_44))
        var_8_1.b = 0
        char* eax_10 = var_44
        
        if (eax_10 != 0 && *eax_10 != 0)
            void* eax_12 = sub_4c4060(&var_44)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_4 = *(eax_12 + 0xc) + 0x10
                sub_4f4430(eax_12, sub_4f4380(esi_4), esi_4)
                esi = var_50
        
        char* result_3 = result_1
        *esi = 0
        
        if (result_3 == 0)
            result_3 = &data_83f3d3
        
        int32_t* var_c4_6 = esi
        sub_5a957c(result_3, &data_85f660)
        int32_t eax_15 = *esi
        
        if (eax_15 s> 0)
            int32_t eax_19 = eax_15 * var_58
            esi[3] = eax_19
            int32_t eax_20 = eax_19 * 0x2c
            int128_t* eax_21 = sub_4cce80(eax_20)
            sub_5abfc0(eax_21, 0, eax_20)
            esi[4] = eax_21
            var_8_1.b = 2
            sub_4c4510(sub_5569a0(&var_48, &var_44))
            var_8_1.b = 0
            char* eax_23 = var_44
            
            if (eax_23 != 0 && *eax_23 != 0)
                void* eax_25 = sub_4c4060(&var_44)
                int32_t temp2_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_8 = *(eax_25 + 0xc) + 0x10
                    sub_4f4430(eax_25, sub_4f4380(esi_8), esi_8)
                    esi = var_50
            
            var_8_1.b = 3
            sub_4c4510(sub_5569a0(&var_48, &var_44))
            var_8_1.b = 0
            char* eax_29 = var_44
            
            if (eax_29 != 0 && *eax_29 != 0)
                void* eax_31 = sub_4c4060(&var_44)
                int32_t temp4_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp4_1 == 1)
                    int32_t esi_10 = *(eax_31 + 0xc) + 0x10
                    sub_4f4430(eax_31, sub_4f4380(esi_10), esi_10)
                    esi = var_50
            
            int32_t i_1 = 0
            
            if (*esi s> 0)
                int32_t i
                
                do
                    var_8_1.b = 4
                    char* var_64
                    sub_4c4510(sub_5569a0(&var_48, &var_64))
                    var_8_1.b = 0
                    char* eax_35 = var_64
                    
                    if (eax_35 != 0 && *eax_35 != 0)
                        void* eax_37 = sub_4c4060(&var_64)
                        int32_t temp6_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            int32_t esi_12 = *(eax_37 + 0xc) + 0x10
                            sub_4f4430(eax_37, sub_4f4380(esi_12), esi_12)
                            esi = var_50
                    
                    var_8_1.b = 5
                    char* var_60
                    sub_4c4510(sub_5569a0(&var_48, &var_60))
                    var_8_1.b = 0
                    char* eax_41 = var_60
                    
                    if (eax_41 != 0 && *eax_41 != 0)
                        void* eax_43 = sub_4c4060(&var_60)
                        int32_t temp7_1 = *(eax_43 + 4)
                        *(eax_43 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            int32_t esi_14 = *(eax_43 + 0xc) + 0x10
                            sub_4f4430(eax_43, sub_4f4380(esi_14), esi_14)
                            esi = var_50
                    
                    int32_t* eax_49 = i_1 * var_58 * 0x2c + esi[4]
                    *eax_49 = 0
                    eax_49[1] = 0
                    eax_49[2] = 0
                    eax_49[3] = 0x3f800000
                    eax_49[7] = 0x3f800000
                    eax_49[8] = 0x3f800000
                    eax_49[9] = 0x3f800000
                    char* result_9 = result_1
                    
                    if (result_9 == 0)
                        result_9 = &data_83f3d3
                    
                    void* var_c4_21 = &eax_49[6]
                    void* var_c8_1 = &eax_49[5]
                    void* var_cc_3 = &eax_49[4]
                    
                    if (sub_5a957c(result_9, "%f %f %f") != 3)
                        sub_4c5870("count == 3", &data_83f3d3, "AnimImport.cpp", 0x5a, 
                            "sAnimExtractDataFromText")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t eax_52 = var_58
                    var_44 = 1
                    
                    if (eax_52 s> 1)
                        void* ecx_26
                        
                        do
                            float* ebx_11 = &var_44[i_1 * eax_52] * 0x2c + esi[4]
                            char* var_74
                            int32_t* esi_15 = sub_5569a0(&var_48, &var_74)
                            var_8_1.b = 6
                            char* result_4 = result_1
                            char* const result_10 = &data_83f3d3
                            
                            if (result_4 != 0)
                                result_10 = result_4
                            
                            char* const ecx_2 = *esi_15
                            
                            if (ecx_2 == 0)
                                ecx_2 = &data_83f3d3
                            
                            if (result_10 != ecx_2)
                                if (result_4 != 0 && *result_4 != 0)
                                    void* eax_55 = sub_4c4060(&result_1)
                                    int32_t temp8_1 = *(eax_55 + 4)
                                    *(eax_55 + 4) -= 1
                                    
                                    if (temp8_1 == 1)
                                        int32_t esi_17 = *(eax_55 + 0xc) + 0x10
                                        sub_4f4430(eax_55, sub_4f4380(esi_17), esi_17)
                                
                                result_4 = *esi_15
                                result_1 = result_4
                                
                                if (result_4 != 0 && *result_4 != 0)
                                    void* eax_59 = sub_4c4060(&result_1)
                                    *(eax_59 + 4) += 1
                                    result_4 = result_1
                            
                            var_8_1.b = 0
                            char* edi_19 = var_74
                            
                            if (edi_19 != 0 && *edi_19 != 0)
                                if (*(edi_19 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t temp9_1 = *(edi_19 - 0xc)
                                *(edi_19 - 0xc) -= 1
                                
                                if (temp9_1 == 1)
                                    int32_t esi_19 = *(edi_19 - 4) + 0x10
                                    sub_4f4430(&edi_19[0xfffffff0], sub_4f4380(esi_19), esi_19)
                                
                                result_4 = result_1
                            
                            if (result_4 == 0)
                                result_4 = &data_83f3d3
                            
                            void* var_c4_25 = &ebx_11[9]
                            void* var_c8_2 = &ebx_11[8]
                            void* var_cc_4 = &ebx_11[7]
                            int32_t eax_62 = sub_5a957c(result_4, "%f %f %f")
                            char* var_78
                            int32_t* esi_20 = sub_5569a0(&var_48, &var_78)
                            var_8_1.b = 7
                            char* result_5 = result_1
                            char* const result_11 = &data_83f3d3
                            
                            if (result_5 != 0)
                                result_11 = result_5
                            
                            char* const ecx_7 = *esi_20
                            
                            if (ecx_7 == 0)
                                ecx_7 = &data_83f3d3
                            
                            if (result_11 != ecx_7)
                                if (result_5 != 0 && *result_5 != 0)
                                    void* eax_65 = sub_4c4060(&result_1)
                                    int32_t temp10_1 = *(eax_65 + 4)
                                    *(eax_65 + 4) -= 1
                                    
                                    if (temp10_1 == 1)
                                        int32_t esi_22 = *(eax_65 + 0xc) + 0x10
                                        sub_4f4430(eax_65, sub_4f4380(esi_22), esi_22)
                                
                                result_5 = *esi_20
                                result_1 = result_5
                                
                                if (result_5 != 0 && *result_5 != 0)
                                    void* eax_69 = sub_4c4060(&result_1)
                                    *(eax_69 + 4) += 1
                                    result_5 = result_1
                            
                            var_8_1.b = 0
                            char* edi_24 = var_78
                            
                            if (edi_24 != 0 && *edi_24 != 0)
                                if (*(edi_24 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t temp11_1 = *(edi_24 - 0xc)
                                *(edi_24 - 0xc) -= 1
                                
                                if (temp11_1 == 1)
                                    int32_t esi_24 = *(edi_24 - 4) + 0x10
                                    sub_4f4430(&edi_24[0xfffffff0], sub_4f4380(esi_24), esi_24)
                                
                                result_5 = result_1
                            
                            if (result_5 == 0)
                                result_5 = &data_83f3d3
                            
                            float var_34
                            int32_t* var_c4_29 = &var_34
                            float var_38
                            int32_t* var_c8_3 = &var_38
                            float var_3c
                            float* var_cc_5 = &var_3c
                            int32_t var_54_2 = eax_62 + sub_5a957c(result_5, "%f %f %f")
                            char* var_70
                            int32_t* esi_25 = sub_5569a0(&var_48, &var_70)
                            var_8_1.b = 8
                            char* result_6 = result_1
                            char* const result_12 = &data_83f3d3
                            
                            if (result_6 != 0)
                                result_12 = result_6
                            
                            char* const ecx_10 = *esi_25
                            
                            if (ecx_10 == 0)
                                ecx_10 = &data_83f3d3
                            
                            if (result_12 != ecx_10)
                                if (result_6 != 0 && *result_6 != 0)
                                    void* eax_75 = sub_4c4060(&result_1)
                                    int32_t temp12_1 = *(eax_75 + 4)
                                    *(eax_75 + 4) -= 1
                                    
                                    if (temp12_1 == 1)
                                        int32_t esi_27 = *(eax_75 + 0xc) + 0x10
                                        sub_4f4430(eax_75, sub_4f4380(esi_27), esi_27)
                                
                                result_6 = *esi_25
                                result_1 = result_6
                                
                                if (result_6 != 0 && *result_6 != 0)
                                    void* eax_79 = sub_4c4060(&result_1)
                                    *(eax_79 + 4) += 1
                                    result_6 = result_1
                            
                            var_8_1.b = 0
                            char* edi_29 = var_70
                            
                            if (edi_29 != 0 && *edi_29 != 0)
                                if (*(edi_29 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t temp13_1 = *(edi_29 - 0xc)
                                *(edi_29 - 0xc) -= 1
                                
                                if (temp13_1 == 1)
                                    int32_t esi_29 = *(edi_29 - 4) + 0x10
                                    sub_4f4430(&edi_29[0xfffffff0], sub_4f4380(esi_29), esi_29)
                                
                                result_6 = result_1
                            
                            if (result_6 == 0)
                                result_6 = &data_83f3d3
                            
                            float var_28
                            int32_t* var_c4_33 = &var_28
                            float var_2c
                            int32_t* var_c8_4 = &var_2c
                            float var_30
                            int32_t* var_cc_6 = &var_30
                            int32_t var_54_3 = var_54_2 + sub_5a957c(result_6, "%f %f %f")
                            char* var_68
                            int32_t* esi_30 = sub_5569a0(&var_48, &var_68)
                            var_8_1.b = 9
                            char* result_7 = result_1
                            char* const result_13 = &data_83f3d3
                            
                            if (result_7 != 0)
                                result_13 = result_7
                            
                            char* const ecx_13 = *esi_30
                            
                            if (ecx_13 == 0)
                                ecx_13 = &data_83f3d3
                            
                            if (result_13 != ecx_13)
                                if (result_7 != 0 && *result_7 != 0)
                                    void* eax_85 = sub_4c4060(&result_1)
                                    int32_t temp14_1 = *(eax_85 + 4)
                                    *(eax_85 + 4) -= 1
                                    
                                    if (temp14_1 == 1)
                                        int32_t esi_32 = *(eax_85 + 0xc) + 0x10
                                        sub_4f4430(eax_85, sub_4f4380(esi_32), esi_32)
                                
                                result_7 = *esi_30
                                result_1 = result_7
                                
                                if (result_7 != 0 && *result_7 != 0)
                                    void* eax_89 = sub_4c4060(&result_1)
                                    *(eax_89 + 4) += 1
                                    result_7 = result_1
                            
                            var_8_1.b = 0
                            char* edi_34 = var_68
                            
                            if (edi_34 != 0 && *edi_34 != 0)
                                if (*(edi_34 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t temp15_1 = *(edi_34 - 0xc)
                                *(edi_34 - 0xc) -= 1
                                
                                if (temp15_1 == 1)
                                    int32_t esi_34 = *(edi_34 - 4) + 0x10
                                    sub_4f4430(&edi_34[0xfffffff0], sub_4f4380(esi_34), esi_34)
                                
                                result_7 = result_1
                            
                            if (result_7 == 0)
                                result_7 = &data_83f3d3
                            
                            float var_1c
                            int32_t* var_c4_37 = &var_1c
                            float var_20
                            int32_t* var_c8_5 = &var_20
                            float var_24
                            int32_t* var_cc_7 = &var_24
                            int32_t eax_92 = sub_5a957c(result_7, "%f %f %f")
                            float var_9c = fconvert.s(fconvert.t(var_3c))
                            int32_t var_54_4 = var_54_3 + eax_92
                            float var_98_1 = fconvert.s(fconvert.t(var_30))
                            float var_94_1 = fconvert.s(fconvert.t(var_24))
                            float var_90_1 = fconvert.s(fconvert.t(var_38))
                            float var_8c_1 = fconvert.s(fconvert.t(var_2c))
                            float var_88_1 = fconvert.s(fconvert.t(var_20))
                            float var_84_1 = fconvert.s(fconvert.t(var_34))
                            float var_80_1 = fconvert.s(fconvert.t(var_28))
                            float var_7c_1 = fconvert.s(fconvert.t(var_1c))
                            __builtin_memcpy(&var_3c, &var_9c, 0x24)
                            float var_b0[0x5]
                            float* eax_93 = sub_413580(&var_3c, &var_b0)
                            int32_t edx_3 = eax_93[1]
                            int32_t esi_36 = eax_93[2]
                            int32_t eax_94 = eax_93[3]
                            *ebx_11 = *eax_93
                            ebx_11[1] = edx_3
                            ebx_11[2] = esi_36
                            ebx_11[3] = eax_94
                            char* var_6c
                            char** eax_95 = sub_5569a0(&var_48, &var_6c)
                            var_8_1.b = 0xa
                            char* result_8 = result_1
                            char* result_14 = &data_83f3d3
                            
                            if (result_8 != 0)
                                result_14 = result_8
                            
                            char* ecx_18 = *eax_95
                            
                            if (ecx_18 == 0)
                                ecx_18 = &data_83f3d3
                            
                            if (result_14 != ecx_18)
                                if (result_8 != 0 && *result_8 != 0)
                                    void* eax_97 = sub_4c4060(&result_1)
                                    int32_t temp16_1 = *(eax_97 + 4)
                                    *(eax_97 + 4) -= 1
                                    
                                    if (temp16_1 == 1)
                                        int32_t esi_38 = *(eax_97 + 0xc) + 0x10
                                        sub_4f4430(eax_97, sub_4f4380(esi_38), esi_38)
                                
                                result_8 = *eax_95
                                result_1 = result_8
                                
                                if (result_8 != 0 && *result_8 != 0)
                                    void* eax_101 = sub_4c4060(&result_1)
                                    *(eax_101 + 4) += 1
                                    result_8 = result_1
                            
                            var_8_1.b = 0
                            char* ecx_20 = var_6c
                            
                            if (ecx_20 != 0 && *ecx_20 != 0)
                                if (*(ecx_20 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t temp17_1 = *(ecx_20 - 0xc)
                                *(ecx_20 - 0xc) -= 1
                                
                                if (temp17_1 == 1)
                                    int32_t esi_40 = *(ecx_20 - 4) + 0x10
                                    sub_4f4430(&ecx_20[0xfffffff0], sub_4f4380(esi_40), esi_40)
                                
                                result_8 = result_1
                            
                            if (result_8 == 0)
                                result_8 = &data_83f3d3
                            
                            void* var_c4_41 = &ebx_11[6]
                            void* var_c8_6 = &ebx_11[5]
                            void* var_cc_8 = &ebx_11[4]
                            
                            if (var_54_4 + sub_5a957c(result_8, "%f %f %f") != 0xf)
                                sub_4c5870("count == 15", &data_83f3d3, "AnimImport.cpp", 0x7a, 
                                    "sAnimExtractDataFromText")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            eax_52 = var_58
                            esi = var_50
                            ecx_26 = &var_44[1]
                            var_44 = ecx_26
                        while (ecx_26 s< eax_52)
                    
                    i = i_1 + 1
                    i_1 = i
                while (i s< *esi)
            
            int32_t var_8_4 = 0xffffffff
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp5_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp5_1 == 1)
                    int32_t esi_42 = *(result + 0xc) + 0x10
                    sub_4f4430(result, sub_4f4380(esi_42), esi_42)
            
            result.b = 1
        else
            int32_t var_8_3 = 0xffffffff
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp3_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_6 = *(result + 0xc) + 0x10
                    sub_4f4430(result, sub_4f4380(esi_6), esi_6)
            
            result.b = 0
    else
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_2 = *(result + 0xc) + 0x10
                sub_4f4430(result, sub_4f4380(esi_2), esi_2)
        
        result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

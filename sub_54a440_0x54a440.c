// 函数名称: sub_54a440
// 虚拟地址: 0x54a440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_54a440(int32_t arg1, int32_t arg2, char* arg3, char** arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e879
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_48 = 0
    char* const arg_8
    char* ebx = arg_8
    char* var_64 = arg3
    int32_t* var_4c = &var_64
    
    if (ebx == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_64, ebx)
    char* var_18
    sub_50a1e0(&var_18, var_64)
    int32_t var_8_1 = 1
    char* var_1c
    int32_t edx = sub_4e7280(&var_1c, ebx)
    char* eax_4 = var_1c
    
    if (eax_4 == 0 || *eax_4 == 0)
        var_64 = ebx
        sub_4c5680("OpenGl shader failed to read file: %s")
        *arg4 = &data_83f3d3
        var_8_1.b = 1
        char* eax_5 = var_1c
        int32_t var_48_1 = 1
        
        if (eax_5 != 0 && *eax_5 != 0)
            void* eax_7 = sub_4c4060(&var_1c)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                char* esi_2 = *(eax_7 + 0xc) + 0x10
                int32_t* eax_8 = sub_4f4380(esi_2)
                var_64 = esi_2
                sub_4f4430(eax_7, eax_8, var_64)
        
        var_8_1.b = 0
        char* eax_10 = var_18
        
        if (eax_10 != 0 && *eax_10 != 0)
            void* eax_12 = sub_4c4060(&var_18)
            int32_t temp1_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp1_1 == 1)
                char* esi_4 = *(eax_12 + 0xc) + 0x10
                int32_t* eax_13 = sub_4f4380(esi_4)
                var_64 = esi_4
                sub_4f4430(eax_12, eax_13, var_64)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg4
    
    arg_8 = &data_83f3d3
    var_8_1.b = 3
    int32_t var_30 = 1
    char* var_34 = eax_4
    char* var_2c
    
    if (arg5 != 0)
        char* eax_16 = var_18
        
        if (eax_16 == 0)
            eax_16 = &data_83f3d3
        
        var_64 = eax_16
        int32_t var_68_1 = 0
        var_8_1.b = 4
        char* eax_18 = *sub_4c4a50(&var_2c, "#line %d "%s"\n")
        
        if (eax_18 == 0)
            eax_18 = &data_83f3d3
        
        var_64 = eax_18
        edx = sub_4c4620(&arg_8, var_64)
        var_8_1.b = 3
        char* eax_20 = var_2c
        
        if (eax_20 != 0 && *eax_20 != 0)
            void* eax_22 = sub_4c4060(&var_2c)
            int32_t temp2_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp2_1 == 1)
                char* esi_6 = *(eax_22 + 0xc) + 0x10
                int32_t* eax_23 = sub_4f4380(esi_6)
                var_64 = esi_6
                edx = sub_4f4430(eax_22, eax_23, var_64)
    
    char* var_28
    var_64 = &var_28
    sub_51ee80(&var_28, edx, ebx, var_64)
    var_8_1.b = 5
    var_64 = var_28
    char* ecx_7 = var_28
    var_4c = &var_64
    
    if (ecx_7 != 0 && *ecx_7 != 0)
        void* eax_27 = sub_4c4060(&var_64)
        *(eax_27 + 4) += 1
    
    char* var_24
    sub_51fd90(&var_24)
    var_8_1.b = 6
    sub_51c990(&var_4c)
    var_8_1.b = 7
    var_64 = var_24
    char* ecx_9 = var_24
    char* var_44 = &var_64
    
    if (ecx_9 != 0 && *ecx_9 != 0)
        void* eax_29 = sub_4c4060(&var_64)
        *(eax_29 + 4) += 1
    
    char* ecx_10 = sub_51c9c0()
    
    if (*var_34 != 0)
        do
            char** edx_3 = sub_54a2f0(&var_44, &var_34)
            var_8_1.b = 8
            char* ebx_2 = var_44
            char* const eax_31 = &data_83f3d3
            
            if (ebx_2 != 0)
                eax_31 = ebx_2
            
            char* var_14
            var_64 = &var_14
            char* ecx_11
            void** edx_4
            ecx_11, edx_4 = sub_54a380(eax_31, edx_3)
            var_8_1.b = 9
            char* esi_8 = var_14
            
            if (esi_8 == 0 || *esi_8 == 0)
                if (ebx_2 != 0 && *ebx_2 != 0)
                    char* const eax_75 = arg_8
                    
                    if (eax_75 == 0 || *eax_75 == 0)
                        edx_4 = sub_4c42b0(&arg_8, ebx_2)
                    else
                        int32_t edi_20 = *(sub_4c4060(&arg_8) + 8)
                        char* eax_78 = ebx_2
                        void** edx_11 = &eax_78[1]
                        
                        do
                            ecx_11.b = *eax_78
                            eax_78 = &eax_78[1]
                        while (ecx_11.b != 0)
                        
                        void* eax_79 = eax_78 - edx_11
                        void* eax_80 = eax_79 + edi_20
                        var_64 = 1
                        sub_4c4160(eax_80, edx_11, &arg_8, eax_80, var_64.b)
                        edx_4 = sub_5ab990(&arg_8[edi_20], ebx_2, eax_79 + 1)
                    
                    esi_8 = var_14
                
                char* const eax_81 = arg_8
                
                if (eax_81 == 0 || *eax_81 == 0)
                    var_64 = &arg_8
                    sub_4c40c0(1, edx_4)
                    int16_t* const eax_82 = &data_862374
                    int32_t edx_13 = arg_8 - &data_862374
                    char i
                    
                    do
                        i = *eax_82
                        *(eax_82 + edx_13) = i
                        eax_82 += 1
                    while (i != 0)
                else
                    int16_t* esi_28 = *(sub_4c4060(&arg_8) + 8)
                    var_64 = 1
                    sub_4c4160(esi_28 + 1, edx_4, &arg_8, esi_28 + 1, var_64.b)
                    *(esi_28 + arg_8) = 0xa
                    esi_8 = var_14
            else
                var_64 = ecx_11
                char** eax_32 = &var_64
                var_64 = esi_8
                char** var_50_1 = &var_64
                
                if (*esi_8 != 0)
                    eax_32 = sub_4c4060(eax_32)
                    eax_32[1] = &eax_32[1][1]
                
                char* var_20
                int32_t* var_6c_1 = &var_20
                var_8_1.b = 0xa
                sub_4c40c0(1, sub_4e6800(eax_32, &var_2c, ecx_11, &var_2c))
                char* ebx_3 = var_20
                int16_t* const eax_33 = &data_862374
                char i_1
                
                do
                    i_1 = *eax_33
                    *(eax_33 + ebx_3 - &data_862374) = i_1
                    eax_33 += 1
                while (i_1 != 0)
                var_8_1.b = 0xb
                char* eax_34 = var_2c
                
                if (eax_34 == 0)
                    eax_34 = &data_83f3d3
                
                var_64 = arg5.d
                char* var_3c
                int32_t* eax_35 = sub_54a440(&var_3c, eax_34, var_64, eax_2)
                var_64 = &var_20
                var_8_1.b = 0xc
                var_8_1.b = 0xd
                char* var_38
                char* edi_7 = *sub_4c48a0(eax_35, &var_38, var_64)
                
                if (edi_7 != 0 && *edi_7 != 0)
                    char* const eax_37 = arg_8
                    
                    if (eax_37 == 0 || *eax_37 == 0)
                        sub_4c42b0(&arg_8, edi_7)
                    else
                        int32_t ebx_4 = *(sub_4c4060(&arg_8) + 8)
                        void* eax_40 = edi_7
                        void** edx_9 = eax_40 + 1
                        char i_2
                        
                        do
                            i_2 = *eax_40
                            eax_40 += 1
                        while (i_2 != 0)
                        void* eax_41 = eax_40 - edx_9
                        void* eax_42 = eax_41 + ebx_4
                        var_64 = 1
                        sub_4c4160(eax_42, edx_9, &arg_8, eax_42, var_64.b)
                        sub_5ab990(&arg_8[ebx_4], edi_7, eax_41 + 1)
                        ebx_3 = var_20
                
                var_8_1.b = 0xc
                char* eax_43 = var_38
                
                if (eax_43 != 0 && *eax_43 != 0)
                    void* eax_45 = sub_4c4060(&var_38)
                    int32_t temp10_1 = *(eax_45 + 4)
                    *(eax_45 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        char* esi_13 = *(eax_45 + 0xc) + 0x10
                        int32_t* eax_46 = sub_4f4380(esi_13)
                        var_64 = esi_13
                        sub_4f4430(eax_45, eax_46, var_64)
                
                var_8_1.b = 0xb
                char* eax_48 = var_3c
                
                if (eax_48 != 0 && *eax_48 != 0)
                    void* eax_50 = sub_4c4060(&var_3c)
                    int32_t temp12_1 = *(eax_50 + 4)
                    *(eax_50 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        char* esi_15 = *(eax_50 + 0xc) + 0x10
                        int32_t* eax_51 = sub_4f4380(esi_15)
                        var_64 = esi_15
                        sub_4f4430(eax_50, eax_51, var_64)
                
                var_8_1.b = 0xa
                
                if (ebx_3 != 0 && *ebx_3 != 0)
                    void* eax_54 = sub_4c4060(&var_20)
                    int32_t temp13_1 = *(eax_54 + 4)
                    *(eax_54 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        char* esi_17 = *(eax_54 + 0xc) + 0x10
                        int32_t* eax_55 = sub_4f4380(esi_17)
                        var_64 = esi_17
                        sub_4f4430(eax_54, eax_55, var_64)
                
                if (arg5 != 0)
                    char* eax_57 = var_18
                    
                    if (eax_57 == 0)
                        eax_57 = &data_83f3d3
                    
                    var_64 = eax_57
                    int32_t var_68_7 = var_30
                    char* var_40
                    char** eax_58
                    char ecx_18
                    eax_58, ecx_18 = sub_4c4a50(&var_40, "#line %d "%s"\n")
                    var_8_1.b = 0xe
                    char* edi_14 = *eax_58
                    
                    if (edi_14 != 0 && *edi_14 != 0)
                        char* const eax_59 = arg_8
                        
                        if (eax_59 == 0 || *eax_59 == 0)
                            sub_4c42b0(&arg_8, edi_14)
                        else
                            int32_t ebx_6 = *(sub_4c4060(&arg_8) + 8)
                            char* eax_62 = edi_14
                            void** edx_10 = &eax_62[1]
                            char i_3
                            
                            do
                                i_3 = *eax_62
                                eax_62 = &eax_62[1]
                            while (i_3 != 0)
                            void* eax_63 = eax_62 - edx_10
                            void* eax_64 = eax_63 + ebx_6
                            var_64 = 1
                            sub_4c4160(eax_64, edx_10, &arg_8, eax_64, var_64.b)
                            sub_5ab990(&arg_8[ebx_6], edi_14, eax_63 + 1)
                    
                    var_8_1.b = 0xa
                    char* eax_65 = var_40
                    
                    if (eax_65 != 0 && *eax_65 != 0)
                        void* eax_67 = sub_4c4060(&var_40)
                        int32_t temp15_1 = *(eax_67 + 4)
                        *(eax_67 + 4) -= 1
                        
                        if (temp15_1 == 1)
                            char* esi_22 = *(eax_67 + 0xc) + 0x10
                            int32_t* eax_68 = sub_4f4380(esi_22)
                            var_64 = esi_22
                            sub_4f4430(eax_67, eax_68, var_64)
                
                var_8_1.b = 9
                char* eax_70 = var_2c
                
                if (eax_70 != 0 && *eax_70 != 0)
                    void* eax_72 = sub_4c4060(&var_2c)
                    int32_t temp14_1 = *(eax_72 + 4)
                    *(eax_72 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        char* esi_24 = *(eax_72 + 0xc) + 0x10
                        int32_t* eax_73 = sub_4f4380(esi_24)
                        var_64 = esi_24
                        sub_4f4430(eax_72, eax_73, var_64)
                
                esi_8 = var_14
            
            var_30 += 1
            var_8_1.b = 8
            
            if (esi_8 != 0 && *esi_8 != 0)
                if (*(esi_8 - 0x10) != 0xfafafafa)
                    var_64 = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, var_64)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp9_1 = *(esi_8 - 0xc)
                *(esi_8 - 0xc) -= 1
                
                if (temp9_1 == 1)
                    void* edi_22 = data_26a44e4
                    char* esi_30 = *(esi_8 - 4) + 0x10
                    
                    if (edi_22 == 0)
                        sub_4f4250()
                        edi_22 = data_26a44e4
                    
                    int32_t edx_14 = 0
                    int32_t* edi_23
                    
                    while (true)
                        if (esi_30 s<= 1 << (edx_14.b + 4))
                            edi_23 = edi_22 + edx_14 * 0x14
                            break
                        
                        edx_14 += 1
                        
                        if (edx_14 s>= 7)
                            edi_23 = edi_22 + 0x8c
                            break
                    
                    var_64 = esi_30
                    sub_4f4430(&esi_8[0xfffffff0], edi_23, var_64)
            
            var_8_1.b = 7
            char* ebx_9 = var_44
            
            if (ebx_9 != 0 && *ebx_9 != 0)
                if (*(ebx_9 - 0x10) != 0xfafafafa)
                    var_64 = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, var_64)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp11_1 = *(ebx_9 - 0xc)
                *(ebx_9 - 0xc) -= 1
                
                if (temp11_1 == 1)
                    void* edi_24 = data_26a44e4
                    char* esi_32 = *(ebx_9 - 4) + 0x10
                    
                    if (edi_24 == 0)
                        sub_4f4250()
                        edi_24 = data_26a44e4
                    
                    int32_t edx_15 = 0
                    int32_t* edi_25
                    
                    while (true)
                        if (esi_32 s<= 1 << (edx_15.b + 4))
                            edi_25 = edi_24 + edx_15 * 0x14
                            break
                        
                        edx_15 += 1
                        
                        if (edx_15 s>= 7)
                            edi_25 = edi_24 + 0x8c
                            break
                    
                    var_64 = esi_32
                    sub_4f4430(&ebx_9[0xfffffff0], edi_25, var_64)
            
            ecx_10 = var_34
        while (*ecx_10 != 0)
    
    int32_t* esi_33 = var_4c
    var_64 = ecx_10
    char** var_50_2 = &var_64
    var_64 = esi_33
    
    if (esi_33 != 0 && *esi_33 != 0)
        void* eax_91 = sub_4c4060(&var_64)
        *(eax_91 + 4) += 1
    
    sub_51c9c0()
    char* const ebx_10 = arg_8
    *arg4 = ebx_10
    
    if (ebx_10 != 0 && *ebx_10 != 0)
        void* eax_93 = sub_4c4060(arg4)
        *(eax_93 + 4) += 1
    
    int32_t var_48_2 = 1
    var_8_1.b = 6
    
    if (esi_33 != 0 && *esi_33 != 0)
        void* eax_95 = sub_4c4060(&var_4c)
        int32_t temp3_1 = *(eax_95 + 4)
        *(eax_95 + 4) -= 1
        
        if (temp3_1 == 1)
            char* esi_35 = *(eax_95 + 0xc) + 0x10
            int32_t* eax_96 = sub_4f4380(esi_35)
            var_64 = esi_35
            sub_4f4430(eax_95, eax_96, var_64)
    
    var_8_1.b = 5
    char* eax_98 = var_24
    
    if (eax_98 != 0 && *eax_98 != 0)
        void* eax_100 = sub_4c4060(&var_24)
        int32_t temp4_1 = *(eax_100 + 4)
        *(eax_100 + 4) -= 1
        
        if (temp4_1 == 1)
            char* esi_37 = *(eax_100 + 0xc) + 0x10
            int32_t* eax_101 = sub_4f4380(esi_37)
            var_64 = esi_37
            sub_4f4430(eax_100, eax_101, var_64)
    
    var_8_1.b = 3
    char* eax_103 = var_28
    
    if (eax_103 != 0 && *eax_103 != 0)
        void* eax_105 = sub_4c4060(&var_28)
        int32_t temp5_1 = *(eax_105 + 4)
        *(eax_105 + 4) -= 1
        
        if (temp5_1 == 1)
            char* esi_39 = *(eax_105 + 0xc) + 0x10
            int32_t* eax_106 = sub_4f4380(esi_39)
            var_64 = esi_39
            sub_4f4430(eax_105, eax_106, var_64)
    
    var_8_1.b = 2
    
    if (ebx_10 != 0 && *ebx_10 != 0)
        void* eax_109 = sub_4c4060(&arg_8)
        int32_t temp6_1 = *(eax_109 + 4)
        *(eax_109 + 4) -= 1
        
        if (temp6_1 == 1)
            char* esi_41 = *(eax_109 + 0xc) + 0x10
            int32_t* eax_110 = sub_4f4380(esi_41)
            var_64 = esi_41
            sub_4f4430(eax_109, eax_110, var_64)
    
    var_8_1.b = 1
    char* eax_112 = var_1c
    
    if (eax_112 != 0 && *eax_112 != 0)
        void* eax_114 = sub_4c4060(&var_1c)
        int32_t temp7_1 = *(eax_114 + 4)
        *(eax_114 + 4) -= 1
        
        if (temp7_1 == 1)
            char* esi_43 = *(eax_114 + 0xc) + 0x10
            int32_t* eax_115 = sub_4f4380(esi_43)
            var_64 = esi_43
            sub_4f4430(eax_114, eax_115, var_64)
    
    var_8_1.b = 0
    char* eax_117 = var_18
    
    if (eax_117 != 0 && *eax_117 != 0)
        void* eax_119 = sub_4c4060(&var_18)
        int32_t temp8_1 = *(eax_119 + 4)
        *(eax_119 + 4) -= 1
        
        if (temp8_1 == 1)
            char* esi_45 = *(eax_119 + 0xc) + 0x10
            int32_t* eax_120 = sub_4f4380(esi_45)
            var_64 = esi_45
            sub_4f4430(eax_119, eax_120, var_64)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

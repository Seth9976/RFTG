// 函数名称: sub_4bdd00
// 虚拟地址: 0x4bdd00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4bdd00(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, char arg7, char arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694032
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_8c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165abc & 1) == 0)
        data_3165abc.d |= 1
        int32_t var_c_1 = 0
        data_316114c = sub_4f5220(data_307c740, "tblStatsFull")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165abc & 2) == 0)
        data_3165abc.d |= 2
        int32_t var_c_3 = 1
        data_3165ab8 = sub_4f5220(data_307c730, "txtName")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165abc & 4) == 0)
        data_3165abc.d |= 4
        int32_t var_c_5 = 2
        data_3165ab4 = sub_4f5220(data_307c730, "txtValue")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165abc & 8) == 0)
        data_3165abc.d |= 8
        int32_t var_c_7 = 3
        data_3165ab0 = sub_4f5220(data_307c730, "txtValueCol1")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165abc & 0x10) == 0)
        data_3165abc.d |= 0x10
        int32_t var_c_9 = 4
        data_3165aac = sub_4f5220(data_307c730, "txtValueCol2")
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165abc & 0x20) == 0)
        data_3165abc.d |= 0x20
        int32_t var_c_11 = 5
        data_3165aa8 = sub_4f5220(data_307c730, "imgBtn")
        int32_t var_c_12 = 0xffffffff
    
    if ((data_3165abc & 0x40) == 0)
        data_3165abc.d |= 0x40
        int32_t var_c_13 = 6
        data_3165aa4 = sub_4f5220(data_307c730, "imgBtnCol1")
        int32_t var_c_14 = 0xffffffff
    
    if ((data_3165abc & 0x80) == 0)
        data_3165abc.d |= 0x80
        int32_t var_c_15 = 7
        data_3165aa0 = sub_4f5220(data_307c730, "imgBtnCol2")
        int32_t var_c_16 = 0xffffffff
    
    if ((data_3165abc.d & 0x100) == 0)
        data_3165abc.d |= 0x100
        int32_t var_c_17 = 8
        data_3165a9c = sub_4f5220(data_307c730, "imgIcon")
        int32_t var_c_18 = 0xffffffff
    
    void* ebx = arg1
    int128_t* eax_16 = sub_4f6e90(data_316114c, sub_4fc3d0(&data_be1cb8, *(ebx + 0x18)), &data_83f3d3)
    int32_t ecx_4 = *eax_16
    float var_38 = fconvert.s(float.t(0))
    int32_t edi_2 = data_316114c
    eax_16[0x12].d = ecx_4 + 1
    *(eax_16 + 0x124) = 1
    *(eax_16 + 0x12c) = 1
    *(eax_16 + 0x128) = arg2
    eax_16[0x13].d = arg2
    float var_34 = fconvert.s(fconvert.t(*(ebx + 0x30)))
    int128_t* result = sub_4f6e90(edi_2, sub_4fc3d0(&data_be1cb8, *(ebx + 0x18)), &data_83f3d3)
    *(result + 0x154) = var_38
    *(result + 0x158) = var_34
    int128_t* result_1 = nullptr
    
    if (arg2 s> 0)
        int32_t var_20_1 = 0
        
        while (true)
            int32_t esi_4 = *(ebx + 0x18)
            int32_t edi_4 = data_316114c
            int32_t var_30 = var_20_1
            int128_t* result_2 = result_1
            void* eax_19
            int32_t ecx_7
            eax_19, ecx_7 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_4 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_7 = *(eax_19 + (edi_4 << 2) + 0x30)
            int128_t* eax_20
            
            if (edx_7 != 0)
                eax_20 = sub_4fc1e0(ecx_7, edx_7)
            else
                eax_20, edx_7 = sub_4fc0d0()
                *(eax_20 + 4) = &data_83f3d3
                *(eax_19 + (edi_4 << 2) + 0x30) = *(eax_20 + 0x1bc)
            
            char* esi_6 = *(eax_19 + 4)
            
            if (*(esi_6 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_6 == 0)
                sub_520800(eax_20, edx_7.b, esi_6, 0)
                
                if (*esi_6 == 0)
                    sub_509540(esi_6)
            
            int32_t eax_25 = *(sub_4f7720(&var_30, edi_4 * 0x118 + ***esi_6, eax_20) + 0x434)
            char* eax_26
            void* edx_11
            eax_26, edx_11 = sub_4fd8f0(eax_25, arg3, *(arg3 + (result_1 << 3) + 4), "Stats")
            
            if (eax_26 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* const var_70
            
            if (*eax_26 != 0)
                char* eax_27 = eax_26
                void** edx_12 = &eax_27[1]
                char i
                
                do
                    i = *eax_27
                    eax_27 = &eax_27[1]
                while (i != 0)
                char* const* var_90_1 = &var_70
                sub_4c40c0(eax_27 - edx_12, edx_12)
                char* eax_29 = eax_26
                edx_11 = var_70 - eax_26
                char i_1
                
                do
                    i_1 = *eax_29
                    *(eax_29 + edx_11) = i_1
                    eax_29 = &eax_29[1]
                while (i_1 != 0)
            else
                var_70 = &data_83f3d3
            
            char* var_6c
            int32_t* var_90_2 = &var_6c
            int32_t var_c_19 = 9
            sub_4c40c0(0xd, edx_11)
            char const* const eax_30 = "{stat_normal}"
            void* edx_15 = var_6c - "{stat_normal}"
            char const i_2
            
            do
                i_2 = *eax_30
                *(eax_30 + edx_15) = i_2
                eax_30 = &eax_30[1]
            while (i_2 != 0)
            var_c_19.b = 0xa
            var_c_19.b = 0xb
            char* eax_32 = *sub_4c48a0(&var_6c, &var_38, &var_70)
            char* const edi_8 = &data_83f3d3
            
            if (eax_32 != 0)
                edi_8 = eax_32
            
            int32_t ebx_2 = data_3165ab8
            int32_t eax_33
            int32_t ecx_13
            eax_33, ecx_13 = sub_4fc3d0(&data_be1cb8, eax_25)
            
            if (ebx_2 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_16 = *(eax_33 + (ebx_2 << 2) + 0x30)
            int128_t* eax_34
            
            if (edx_16 != 0)
                eax_34 = sub_4fc1e0(ecx_13, edx_16)
            else
                eax_34 = sub_4fc0d0()
                *(eax_34 + 4) = &data_83f3d3
                *(eax_33 + (ebx_2 << 2) + 0x30) = *(eax_34 + 0x1bc)
            
            *(eax_34 + 0x64) = *eax_34 + 1
            sub_4c4590(edi_8)
            *(eax_34 + 0x151) = 0
            var_c_19.b = 0xa
            float eax_36 = var_38
            
            if (eax_36 != 0 && *eax_36 != 0)
                if (*(eax_36 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(eax_36 - 0xc)
                *(eax_36 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    void* edi_9 = data_26a44e4
                    int32_t esi_12 = *(eax_36 - 4) + 0x10
                    
                    if (edi_9 == 0)
                        sub_4f4250()
                        edi_9 = data_26a44e4
                    
                    int32_t edx_19 = 0
                    int32_t* edi_10
                    
                    while (true)
                        if (esi_12 s<= 1 << (edx_19.b + 4))
                            edi_10 = edi_9 + edx_19 * 0x14
                            break
                        
                        edx_19 += 1
                        
                        if (edx_19 s>= 7)
                            edi_10 = edi_9 + 0x8c
                            break
                    
                    sub_4f4430(eax_36 - 0x10, edi_10, esi_12)
            
            var_c_19.b = 9
            char* ebx_5 = var_6c
            
            if (ebx_5 != 0 && *ebx_5 != 0)
                if (*(ebx_5 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp1_1 = *(ebx_5 - 0xc)
                *(ebx_5 - 0xc) -= 1
                
                if (temp1_1 == 1)
                    void* edi_11 = data_26a44e4
                    int32_t esi_14 = *(ebx_5 - 4) + 0x10
                    
                    if (edi_11 == 0)
                        sub_4f4250()
                        edi_11 = data_26a44e4
                    
                    int32_t edx_20 = 0
                    int32_t* edi_13
                    
                    while (true)
                        if (esi_14 s<= 1 << (edx_20.b + 4))
                            edi_13 = edi_11 + edx_20 * 0x14
                            break
                        
                        edx_20 += 1
                        
                        if (edx_20 s>= 7)
                            edi_13 = edi_11 + 0x8c
                            break
                    
                    sub_4f4430(&ebx_5[0xfffffff0], edi_13, esi_14)
            
            int32_t var_c_20 = 0xffffffff
            char* const ebx_6 = var_70
            
            if (ebx_6 != 0 && *ebx_6 != 0)
                if (*(ebx_6 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp2_1 = *(ebx_6 - 0xc)
                *(ebx_6 - 0xc) -= 1
                
                if (temp2_1 == 1)
                    void* edi_14 = data_26a44e4
                    int32_t esi_16 = *(ebx_6 - 4) + 0x10
                    
                    if (edi_14 == 0)
                        sub_4f4250()
                        edi_14 = data_26a44e4
                    
                    int32_t edx_21 = 0
                    int32_t* edi_16
                    
                    while (true)
                        if (esi_16 s<= 1 << (edx_21.b + 4))
                            edi_16 = edi_14 + edx_21 * 0x14
                            break
                        
                        edx_21 += 1
                        
                        if (edx_21 s>= 7)
                            edi_16 = edi_14 + 0x8c
                            break
                    
                    sub_4f4430(&ebx_6[0xfffffff0], edi_16, esi_16)
            
            int32_t ebx_7 = data_3165a9c
            int32_t var_24_1 = 0
            int32_t var_28 = 0
            void* eax_43
            int32_t ecx_18
            eax_43, ecx_18 = sub_4fc3d0(&data_be1cb8, eax_25)
            
            if (ebx_7 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_22 = *(eax_43 + (ebx_7 << 2) + 0x30)
            int128_t* eax_44
            
            if (edx_22 != 0)
                eax_44 = sub_4fc1e0(ecx_18, edx_22)
            else
                eax_44, edx_22 = sub_4fc0d0()
                *(eax_44 + 4) = &data_83f3d3
                *(eax_43 + (ebx_7 << 2) + 0x30) = *(eax_44 + 0x1bc)
            
            char* esi_19 = *(eax_43 + 4)
            
            if (*(esi_19 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_19 == 0)
                sub_520800(eax_44, edx_22.b, esi_19, 0)
                
                if (*esi_19 == 0)
                    sub_509540(esi_19)
            
            int32_t edi_18 = *(sub_4f7720(&var_28, ebx_7 * 0x118 + ***esi_19, eax_44) + 0x434)
            void* eax_50
            char edx_26
            eax_50, edx_26 = sub_4fc3d0(&data_be1cb8, edi_18)
            int32_t* ebx_10 = *(eax_50 + 4)
            
            if (ebx_10[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ebx_10 == 0)
                edx_26 = sub_520800(eax_50, edx_26, ebx_10, 0)
                
                if (*ebx_10 == 0)
                    edx_26 = sub_509540(ebx_10)
            
            void* esi_21 = **ebx_10
            float i_3 = 0f
            
            if (*(esi_21 + 4) s> 0)
                do
                    int32_t var_90_7 = 1
                    edx_26 = sub_4fa4e0(edi_18, i_3, edx_26)
                    i_3 += 1
                while (i_3 s< *(esi_21 + 4))
            
            int32_t ecx_24 = 0
            void* const eax_54 = &data_840c38
            char const* const eax_56
            
            while (true)
                if (*eax_54 == *(arg3 + (result_1 << 3)))
                    eax_56 = (&data_840c40)[ecx_24 * 3]
                    
                    if (eax_56 != 0)
                        break
                else
                    eax_54 += 0xc
                    ecx_24 += 1
                    
                    if (eax_54 s< &data_841208)
                        continue
                
                eax_56 = "imgDefault"
                break
            
            int32_t var_90_8 = 0
            int32_t var_94_12 = ecx_24
            float eax_57
            char edx_29
            eax_57, edx_29 = sub_4f5220(data_307c734, eax_56)
            sub_4fa4e0(edi_18, eax_57, edx_29)
            void* ebx_34
            bool cond:9_1
            
            if (arg6 == 0)
                int128_t* eax_138 =
                    sub_4f6e90(data_3165aac, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                *(eax_138 + 0x64) = *eax_138 + 1
                sub_4c4590(&data_83f3d3)
                int32_t edi_33 = data_3165aa0
                *(eax_138 + 0x151) = 1
                *(sub_4f6e90(edi_33, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3) + 0x21) = 1
                char** eax_186
                int32_t* eax_196
                
                if (arg5 == 0)
                    int128_t* eax_198 =
                        sub_4f6e90(data_3165ab0, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                    *(eax_198 + 0x64) = *eax_198 + 1
                    sub_4c4590(&data_83f3d3)
                    int32_t edi_55 = data_3165aa4
                    *(eax_198 + 0x151) = 1
                    *(sub_4f6e90(edi_55, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3) + 0x21) = 1
                    
                    if (arg7 == 0 || *(arg4 + (result_1 << 2)) s< 0)
                        *(sub_4f6e90(data_3165aa8, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                            + 0x21) = 1
                        char* var_3c
                        sub_4bdc70(&var_3c, arg4, *(arg4 + (result_1 << 2)), 0)
                        int32_t var_c_41 = 0x17
                        char* eax_220 = var_3c
                        char* var_68_8 = &data_83f3d3
                        
                        if (eax_220 != 0)
                            var_68_8 = eax_220
                        
                        int128_t* eax_222 =
                            sub_4f6e90(data_3165ab4, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_222 + 0x64) = *eax_222 + 1
                        sub_4c4590(var_68_8)
                        *(eax_222 + 0x151) = 1
                        int32_t var_c_42 = 0xffffffff
                        char* eax_224 = var_3c
                        
                        if (eax_224 != 0 && *eax_224 != 0)
                            eax_196 = &var_3c
                        label_4bf0fa:
                            ebx_34 = sub_4c4060(eax_196)
                            int32_t temp5_1 = *(ebx_34 + 4)
                            *(ebx_34 + 4) -= 1
                            cond:9_1 = temp5_1 != 1
                        label_4bf0ff:
                            
                            if (not(cond:9_1))
                                int32_t esi_116 = *(ebx_34 + 0xc) + 0x10
                                sub_4f4430(ebx_34, sub_4f4380(esi_116), esi_116)
                    else
                        int128_t* eax_203 =
                            sub_4f6e90(data_3165ab4, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_203 + 0x64) = *eax_203 + 1
                        sub_4c4590(&data_83f3d3)
                        *(eax_203 + 0x151) = 1
                        char* var_40
                        sub_4bdc70(&var_40, arg4, *(arg4 + (result_1 << 2)), 0)
                        int32_t var_c_39 = 0x16
                        char* eax_206 = var_40
                        char* var_68_7 = &data_83f3d3
                        
                        if (eax_206 != 0)
                            var_68_7 = eax_206
                        
                        int128_t* eax_208 =
                            sub_4f6e90(data_3165aa8, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_208 + 0x64) = *eax_208 + 1
                        sub_4c4590(var_68_7)
                        *(eax_208 + 0x151) = 1
                        int32_t var_c_40 = 0xffffffff
                        char* eax_210 = var_40
                        
                        if (eax_210 == 0 || *eax_210 == 0)
                            *(sub_4f6e90(data_3165aa8, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                                + 0x21) = 0
                        else
                            eax_186 = &var_40
                        label_4beff0:
                            void* eax_211 = sub_4c4060(eax_186)
                            int32_t temp7_1 = *(eax_211 + 4)
                            *(eax_211 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                int32_t esi_107 = *(eax_211 + 0xc) + 0x10
                                sub_4f4430(eax_211, sub_4f4380(esi_107), esi_107)
                            
                            *(sub_4f6e90(data_3165aa8, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                                + 0x21) = 0
                else
                    int32_t* var_78_2
                    int32_t* eax_145
                    
                    if (arg7 != 0)
                        eax_145 = result_1 * 4
                        var_78_2 = eax_145
                    
                    int32_t ebx_44
                    
                    if (arg7 == 0 || *(eax_145 + arg4) s< 0)
                        int128_t* eax_162
                        int32_t edx_54
                        eax_162, edx_54 =
                            sub_4f6e90(data_3165aa4, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_162 + 0x21) = 1
                        int32_t* eax_165 = result_1 * 4
                        var_78_2 = eax_165
                        char* var_4c
                        sub_4bdc70(&var_4c, edx_54, *(eax_165 + arg4), 0)
                        int32_t var_c_33 = 0x13
                        char* eax_167 = var_4c
                        char* const var_68_4 = &data_83f3d3
                        
                        if (eax_167 != 0)
                            var_68_4 = eax_167
                        
                        int128_t* eax_169 =
                            sub_4f6e90(data_3165ab0, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_169 + 0x64) = *eax_169 + 1
                        sub_4c4590(var_68_4)
                        *(eax_169 + 0x151) = 1
                        int32_t var_c_34 = 0xffffffff
                        char* eax_171 = var_4c
                        
                        if (eax_171 != 0 && *eax_171 != 0)
                            void* eax_173 = sub_4c4060(&var_4c)
                            int32_t temp3_1 = *(eax_173 + 4)
                            *(eax_173 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                int32_t esi_83 = *(eax_173 + 0xc) + 0x10
                                sub_4f4430(eax_173, sub_4f4380(esi_83), esi_83)
                        
                        ebx_44 = eax_25
                    else
                        int128_t* eax_147 =
                            sub_4f6e90(data_3165ab0, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_147 + 0x64) = *eax_147 + 1
                        int32_t edx_51 = sub_4c4590(&data_83f3d3)
                        *(eax_147 + 0x151) = 1
                        char* var_50
                        sub_4bdc70(&var_50, edx_51, *(var_78_2 + arg4), 0)
                        int32_t var_c_31 = 0x12
                        char* eax_150 = var_50
                        char* const var_68_3 = &data_83f3d3
                        
                        if (eax_150 != 0)
                            var_68_3 = eax_150
                        
                        int128_t* eax_152 =
                            sub_4f6e90(data_3165aa4, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_152 + 0x64) = *eax_152 + 1
                        sub_4c4590(var_68_3)
                        *(eax_152 + 0x151) = 1
                        int32_t var_c_32 = 0xffffffff
                        char* eax_154 = var_50
                        
                        if (eax_154 != 0 && *eax_154 != 0)
                            void* eax_156 = sub_4c4060(&var_50)
                            int32_t temp6_1 = *(eax_156 + 4)
                            *(eax_156 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                int32_t esi_74 = *(eax_156 + 0xc) + 0x10
                                sub_4f4430(eax_156, sub_4f4380(esi_74), esi_74)
                        
                        ebx_44 = eax_25
                        *(sub_4f6e90(data_3165aa4, sub_4fc3d0(&data_be1cb8, ebx_44), &data_83f3d3)
                            + 0x21) = 0
                    
                    if (arg8 == 0 || *(var_78_2 + arg5) s< 0)
                        int128_t* eax_188
                        int32_t edx_62
                        eax_188, edx_62 =
                            sub_4f6e90(data_3165aa8, sub_4fc3d0(&data_be1cb8, ebx_44), &data_83f3d3)
                        *(eax_188 + 0x21) = 1
                        char* var_44
                        sub_4bdc70(&var_44, edx_62, *(var_78_2 + arg5), 0)
                        int32_t var_c_37 = 0x15
                        char* eax_191 = var_44
                        char* var_68_6 = &data_83f3d3
                        
                        if (eax_191 != 0)
                            var_68_6 = eax_191
                        
                        int128_t* eax_193 =
                            sub_4f6e90(data_3165ab4, sub_4fc3d0(&data_be1cb8, ebx_44), &data_83f3d3)
                        *(eax_193 + 0x64) = *eax_193 + 1
                        sub_4c4590(var_68_6)
                        *(eax_193 + 0x151) = 1
                        int32_t var_c_38 = 0xffffffff
                        char* eax_195 = var_44
                        
                        if (eax_195 != 0 && *eax_195 != 0)
                            eax_196 = &var_44
                            goto label_4bf0fa
                    else
                        int128_t* eax_178 =
                            sub_4f6e90(data_3165ab4, sub_4fc3d0(&data_be1cb8, ebx_44), &data_83f3d3)
                        *(eax_178 + 0x64) = *eax_178 + 1
                        int32_t edx_59 = sub_4c4590(&data_83f3d3)
                        *(eax_178 + 0x151) = 1
                        char* var_48
                        sub_4bdc70(&var_48, edx_59, *(var_78_2 + arg5), 0)
                        int32_t var_c_35 = 0x14
                        char* eax_181 = var_48
                        char* var_68_5 = &data_83f3d3
                        
                        if (eax_181 != 0)
                            var_68_5 = eax_181
                        
                        int128_t* eax_183 =
                            sub_4f6e90(data_3165aa8, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        *(eax_183 + 0x64) = *eax_183 + 1
                        sub_4c4590(var_68_5)
                        *(eax_183 + 0x151) = 1
                        int32_t var_c_36 = 0xffffffff
                        char* eax_185 = var_48
                        
                        if (eax_185 != 0 && *eax_185 != 0)
                            eax_186 = &var_48
                            goto label_4beff0
                        
                        *(sub_4f6e90(data_3165aa8, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                            + 0x21) = 0
            else
                int32_t* var_78_1
                int32_t eax_59
                
                if (arg7 != 0)
                    eax_59 = result_1 << 2
                    var_78_1 = eax_59
                
                if (arg7 == 0 || *(eax_59 + arg4) s< 0)
                    int32_t ebx_17 = data_3165aa0
                    int32_t eax_78
                    int32_t ecx_28
                    eax_78, ecx_28 = sub_4fc3d0(&data_be1cb8, eax_25)
                    
                    if (ebx_17 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_32 = *(eax_78 + (ebx_17 << 2) + 0x30)
                    int128_t* eax_79
                    
                    if (edx_32 != 0)
                        eax_79 = sub_4fc1e0(ecx_28, edx_32)
                    else
                        eax_79 = sub_4fc0d0()
                        *(eax_79 + 4) = &data_83f3d3
                        *(eax_78 + (ebx_17 << 2) + 0x30) = *(eax_79 + 0x1bc)
                    
                    *(eax_79 + 0x21) = 1
                    int32_t* eax_82 = result_1 * 4
                    var_78_1 = eax_82
                    char* var_60
                    sub_4bdc70(&var_60, arg4, *(eax_82 + arg4), 0)
                    int32_t var_c_23 = 0xd
                    char* eax_84 = var_60
                    char* const edi_23 = &data_83f3d3
                    
                    if (eax_84 != 0)
                        edi_23 = eax_84
                    
                    int32_t ebx_18 = data_3165aac
                    int32_t eax_85
                    int32_t ecx_31
                    eax_85, ecx_31 = sub_4fc3d0(&data_be1cb8, eax_25)
                    
                    if (ebx_18 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_34 = *(eax_85 + (ebx_18 << 2) + 0x30)
                    int128_t* eax_86
                    
                    if (edx_34 != 0)
                        eax_86 = sub_4fc1e0(ecx_31, edx_34)
                    else
                        eax_86 = sub_4fc0d0()
                        *(eax_86 + 4) = &data_83f3d3
                        *(eax_85 + (ebx_18 << 2) + 0x30) = *(eax_86 + 0x1bc)
                    
                    *(eax_86 + 0x64) = *eax_86 + 1
                    sub_4c4590(edi_23)
                    *(eax_86 + 0x151) = 1
                    int32_t var_c_24 = 0xffffffff
                    char* eax_88 = var_60
                    
                    if (eax_88 != 0 && *eax_88 != 0)
                        void* eax_90 = sub_4c4060(&var_60)
                        int32_t temp8_1 = *(eax_90 + 4)
                        *(eax_90 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            int32_t esi_39 = *(eax_90 + 0xc) + 0x10
                            sub_4f4430(eax_90, sub_4f4380(esi_39), esi_39)
                else
                    int128_t* eax_61 =
                        sub_4f6e90(data_3165aac, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                    *(eax_61 + 0x64) = *eax_61 + 1
                    sub_4c4590(&data_83f3d3)
                    *(eax_61 + 0x151) = 1
                    char* var_64
                    sub_4bdc70(&var_64, arg4, *(var_78_1 + arg4), 0)
                    int32_t var_c_21 = 0xc
                    char* eax_65 = var_64
                    char* const var_68_1 = &data_83f3d3
                    
                    if (eax_65 != 0)
                        var_68_1 = eax_65
                    
                    int128_t* eax_67 =
                        sub_4f6e90(data_3165aa0, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                    *(eax_67 + 0x64) = *eax_67 + 1
                    sub_4c4590(var_68_1)
                    *(eax_67 + 0x151) = 1
                    int32_t var_c_22 = 0xffffffff
                    char* eax_71 = var_64
                    
                    if (eax_71 != 0 && *eax_71 != 0)
                        void* eax_73 = sub_4c4060(&var_64)
                        int32_t temp4_1 = *(eax_73 + 4)
                        *(eax_73 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            int32_t esi_30 = *(eax_73 + 0xc) + 0x10
                            sub_4f4430(eax_73, sub_4f4380(esi_30), esi_30)
                    
                    *(sub_4f6e90(data_3165aa0, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        + 0x21) = 0
                
                if (arg8 == 0 || *(var_78_1 + arg5) s< 0)
                    int32_t ebx_27 = data_3165aa4
                    int32_t eax_111
                    int32_t ecx_36
                    eax_111, ecx_36 = sub_4fc3d0(&data_be1cb8, eax_25)
                    
                    if (ebx_27 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_40 = *(eax_111 + (ebx_27 << 2) + 0x30)
                    int128_t* eax_112
                    
                    if (edx_40 != 0)
                        eax_112 = sub_4fc1e0(ecx_36, edx_40)
                    else
                        eax_112 = sub_4fc0d0()
                        *(eax_112 + 4) = &data_83f3d3
                        *(eax_111 + (ebx_27 << 2) + 0x30) = *(eax_112 + 0x1bc)
                    
                    *(eax_112 + 0x21) = 1
                    char* var_58
                    sub_4bdc70(&var_58, arg9, *(var_78_1 + arg5), arg9.b)
                    int32_t var_c_27 = 0xf
                    char* eax_115 = var_58
                    char* const edi_29 = &data_83f3d3
                    
                    if (eax_115 != 0)
                        edi_29 = eax_115
                    
                    int32_t ebx_28 = data_3165ab0
                    int32_t eax_116
                    int32_t ecx_40
                    eax_116, ecx_40 = sub_4fc3d0(&data_be1cb8, eax_25)
                    
                    if (ebx_28 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_42 = *(eax_116 + (ebx_28 << 2) + 0x30)
                    int128_t* eax_117
                    
                    if (edx_42 != 0)
                        eax_117 = sub_4fc1e0(ecx_40, edx_42)
                    else
                        eax_117 = sub_4fc0d0()
                        *(eax_117 + 4) = &data_83f3d3
                        *(eax_116 + (ebx_28 << 2) + 0x30) = *(eax_117 + 0x1bc)
                    
                    *(eax_117 + 0x64) = *eax_117 + 1
                    sub_4c4590(edi_29)
                    *(eax_117 + 0x151) = 1
                    int32_t var_c_28 = 0xffffffff
                    char* eax_121 = var_58
                    
                    if (eax_121 != 0 && *eax_121 != 0)
                        void* eax_123 = sub_4c4060(&var_58)
                        int32_t temp10_1 = *(eax_123 + 4)
                        *(eax_123 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            int32_t esi_56 = *(eax_123 + 0xc) + 0x10
                            sub_4f4430(eax_123, sub_4f4380(esi_56), esi_56)
                else
                    int128_t* eax_95 =
                        sub_4f6e90(data_3165ab0, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                    *(eax_95 + 0x64) = *eax_95 + 1
                    sub_4c4590(&data_83f3d3)
                    *(eax_95 + 0x151) = 1
                    char* var_5c
                    sub_4bdc70(&var_5c, arg5, *(var_78_1 + arg5), arg9.b)
                    int32_t var_c_25 = 0xe
                    char* eax_98 = var_5c
                    char* const var_68_2 = &data_83f3d3
                    
                    if (eax_98 != 0)
                        var_68_2 = eax_98
                    
                    int128_t* eax_100 =
                        sub_4f6e90(data_3165aa4, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                    *(eax_100 + 0x64) = *eax_100 + 1
                    sub_4c4590(var_68_2)
                    *(eax_100 + 0x151) = 1
                    int32_t var_c_26 = 0xffffffff
                    char* eax_104 = var_5c
                    
                    if (eax_104 != 0 && *eax_104 != 0)
                        void* eax_106 = sub_4c4060(&var_5c)
                        int32_t temp9_1 = *(eax_106 + 4)
                        *(eax_106 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            int32_t esi_47 = *(eax_106 + 0xc) + 0x10
                            sub_4f4430(eax_106, sub_4f4380(esi_47), esi_47)
                    
                    *(sub_4f6e90(data_3165aa4, sub_4fc3d0(&data_be1cb8, eax_25), &data_83f3d3)
                        + 0x21) = 0
                
                int32_t ebx_31 = data_3165aa8
                int32_t eax_126
                int32_t ecx_41
                eax_126, ecx_41 = sub_4fc3d0(&data_be1cb8, eax_25)
                
                if (ebx_31 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_44 = *(eax_126 + (ebx_31 << 2) + 0x30)
                int128_t* eax_127
                
                if (edx_44 != 0)
                    eax_127 = sub_4fc1e0(ecx_41, edx_44)
                else
                    eax_127 = sub_4fc0d0()
                    *(eax_127 + 4) = &data_83f3d3
                    *(eax_126 + (ebx_31 << 2) + 0x30) = *(eax_127 + 0x1bc)
                
                *(eax_127 + 0x21) = 1
                char* var_54
                sub_4bdc70(&var_54, var_78_1, *(var_78_1 + arg6), 0)
                int32_t var_c_29 = 0x11
                char* eax_130 = var_54
                char* edi_31 = &data_83f3d3
                
                if (eax_130 != 0)
                    edi_31 = eax_130
                
                int32_t ebx_32 = data_3165ab4
                int32_t eax_131
                int32_t ecx_44
                eax_131, ecx_44 = sub_4fc3d0(&data_be1cb8, eax_25)
                
                if (ebx_32 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_46 = *(eax_131 + (ebx_32 << 2) + 0x30)
                int128_t* eax_132
                
                if (edx_46 != 0)
                    eax_132 = sub_4fc1e0(ecx_44, edx_46)
                else
                    eax_132 = sub_4fc0d0()
                    *(eax_132 + 4) = &data_83f3d3
                    *(eax_131 + (ebx_32 << 2) + 0x30) = *(eax_132 + 0x1bc)
                
                *(eax_132 + 0x64) = *eax_132 + 1
                sub_4c4590(edi_31)
                *(eax_132 + 0x151) = 1
                int32_t var_c_30 = 0xffffffff
                char* eax_134 = var_54
                
                if (eax_134 != 0 && *eax_134 != 0)
                    ebx_34 = sub_4c4060(&var_54)
                    int32_t temp11_1 = *(ebx_34 + 4)
                    *(ebx_34 + 4) -= 1
                    cond:9_1 = temp11_1 != 1
                    goto label_4bf0ff
            result = result_1 + 1
            result_1 = result
            
            if (result s>= arg2)
                break
            
            ebx = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

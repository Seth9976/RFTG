// 函数名称: sub_413fc0
// 虚拟地址: 0x413fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_413fc0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, char arg9, int32_t arg10)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6955d2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_6c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx = arg5
    int32_t eax_4 = *sub_4f4890(arg3)
    int32_t ecx_1 = ebx * 0x118
    
    if (*(eax_4 + ecx_1 + 4) != 2)
        sub_4c5870("el.type == UI_TABLE", &data_83f3d3, "UIDef.cpp", 0xafd, "UIElementTableDimensions")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi_1 = *(eax_4 + ecx_1 + 0x8c)
    int32_t result = *(eax_4 + ecx_1 + 0x88)
    int32_t edx = 0
    int32_t var_28 = esi_1
    int32_t result_1 = result
    int32_t var_44 = 0
    
    if (result s> 0)
        while (true)
            int32_t ecx_2 = 0
            int32_t var_48_1 = 0
            
            if (esi_1 s> 0)
                int32_t esi_3 = esi_1 * edx + arg7
                
                while (true)
                    int32_t var_1c_1 = edx
                    int32_t edx_1 = *(arg4 + 8)
                    int32_t edi_2 = esi_3 + ecx_2
                    int32_t var_20 = ecx_2
                    
                    if (edx_1 == 0)
                        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                            0x45, "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint32_t eax_8 = zx.d(edx_1.w)
                    
                    if (eax_8 u< data_be1cbc)
                        void* esi_4 = data_be1cb8
                        int32_t ecx_4 = eax_8 * 0x438
                        
                        if (*(ecx_4 + esi_4 + 0x434) == edx_1)
                            void* esi_5 = esi_4 + eax_8 * 0x438
                            
                            if (ebx s>= 0x100)
                                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                                    "UIStateElementGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t edx_2 = *(esi_5 + (ebx << 2) + 0x30)
                            int128_t* eax_10
                            
                            if (edx_2 != 0)
                                eax_10 = sub_4fc1e0(ecx_4, edx_2)
                            else
                                eax_10, edx_2 = sub_4fc0d0()
                                *(eax_10 + 4) = &data_83f3d3
                                *(esi_5 + (ebx << 2) + 0x30) = *(eax_10 + 0x1bc)
                            
                            char* esi_6 = *(esi_5 + 4)
                            
                            if (*(esi_6 + 4) != 0x1e)
                                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, 
                                    "UIDef.cpp", 0xfd, "UIDefGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            if (*esi_6 == 0)
                                sub_520800(eax_10, edx_2.b, esi_6, 0)
                                
                                if (*esi_6 == 0)
                                    sub_509540(esi_6)
                            
                            int32_t eax_15 = *(sub_4f7720(&var_20, ***esi_6 + ecx_1, eax_10) + 0x434)
                            
                            if (edi_2 s< arg6 + arg7)
                                int32_t eax_19
                                
                                if (arg10 == 0)
                                    eax_19 = edi_2
                                else
                                    eax_19 = *(arg10 + (edi_2 << 2))
                                
                                void* eax_21 = eax_19 * 0x1f8 + arg8
                                int32_t i = sub_4194b0()
                                int32_t i_8 = *(eax_21 + 0x140)
                                int32_t ecx_13 = 0
                                int32_t edi_3
                                
                                if (i_8 s<= 0)
                                label_4141e1:
                                    edi_3 = 0xffffffff
                                else
                                    void* edx_7 = eax_21
                                    
                                    while (*edx_7 != i)
                                        ecx_13 += 1
                                        edx_7 += 0x50
                                        
                                        if (ecx_13 s>= i_8)
                                            goto label_4141e1
                                    
                                    edi_3 = ecx_13
                                
                                char* const var_58 = &data_83f3d3
                                int32_t var_c_1 = 0
                                int32_t eax_23 = *(eax_21 + 0x1dc) - 1
                                char var_59_1 = 0
                                
                                if (eax_23 u> 5)
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\MultiplayerMenu.cpp", 
                                        0x14b, "DrawGameTable")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                switch (eax_23)
                                    case 0
                                        char** eax_30
                                        
                                        if (*(eax_21 + 0x18c) != 1)
                                            if (edi_3 s< 0)
                                                var_59_1 = 1
                                            
                                            var_c_1.b = 3
                                            char* var_3c
                                            sub_4c4510(sub_4c4a50(&var_3c, "Forming"))
                                            var_c_1.b = 0
                                            char* eax_32 = var_3c
                                            
                                            if (eax_32 != 0 && *eax_32 != 0)
                                                eax_30 = &var_3c
                                            label_414337:
                                                void* eax_33 = sub_4c4060(eax_30)
                                                int32_t temp2_1 = *(eax_33 + 4)
                                                *(eax_33 + 4) -= 1
                                                
                                                if (temp2_1 == 1)
                                                    int32_t esi_9 = *(eax_33 + 0xc) + 0x10
                                                    sub_4f4430(eax_33, sub_4f4380(esi_9), esi_9)
                                        else
                                            if (edi_3 s< 0)
                                                sub_4c5870("whoMe >= 0", &data_83f3d3, 
                                                    "..\code\MultiplayerMenu.cpp", 0x105, 
                                                    "DrawGameTable")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            if (*(eax_21 + edi_3 * 0x50 + 0x30) != 4)
                                                int32_t edx_8 = 0
                                                
                                                if (i_8 s> 0)
                                                    void* eax_27 = eax_21 + 0x30
                                                    int32_t i_6 = i_8
                                                    int32_t i_1
                                                    
                                                    do
                                                        if (*eax_27 == 0)
                                                            edx_8 += 1
                                                        
                                                        eax_27 += 0x50
                                                        i_1 = i_6
                                                        i_6 -= 1
                                                    while (i_1 != 1)
                                                
                                                int32_t i_9 = i_8
                                                int32_t var_74_2 = edx_8
                                                var_c_1.b = 2
                                                char* var_40
                                                sub_4c4510(sub_4c4a50(&var_40, "Forming"))
                                                var_c_1.b = 0
                                                char* eax_29 = var_40
                                                
                                                if (eax_29 != 0 && *eax_29 != 0)
                                                    eax_30 = &var_40
                                                    goto label_414337
                                            else
                                                var_c_1.b = 1
                                                void var_2c
                                                sub_4c4510(sub_4c4a50(&var_2c, "Invited"))
                                                var_c_1.b = 0
                                                sub_4c43d0(&var_2c)
                                                var_59_1 = 1
                                    case 1
                                        if (edi_3 s>= 0)
                                            int32_t eax_37 = 0
                                            
                                            if (i_8 s<= 0)
                                            label_414387:
                                                
                                                if (sub_4139c0(eax_21) == 0)
                                                    int32_t eax_40 = 0
                                                    
                                                    if (i_8 s<= 0)
                                                    label_4143b8:
                                                        
                                                        if (sub_4ba0e0(eax_21, edi_3) != 2)
                                                            sub_4c4590("Waiting")
                                                        else
                                                            sub_4c4590("Your Turn")
                                                            var_59_1 = 1
                                                    else
                                                        void* ecx_16 = eax_21 + 0x30
                                                        
                                                        while (*ecx_16 != 6)
                                                            eax_40 += 1
                                                            ecx_16 += 0x50
                                                            
                                                            if (eax_40 s>= i_8)
                                                                goto label_4143b8
                                                        
                                                        sub_4c4590("Opponent Timed Out")
                                                else
                                                    sub_4c4590("Time Expired")
                                            else
                                                void* ecx_15 = eax_21 + 0x30
                                                
                                                while (*ecx_15 != 2)
                                                    eax_37 += 1
                                                    ecx_15 += 0x50
                                                    
                                                    if (eax_37 s>= i_8)
                                                        goto label_414387
                                                
                                                sub_4c4590("Opponent Forfeited")
                                        else
                                            sub_4c4590("Game Started")
                                    case 2
                                        sub_4c4590("Complete")
                                        
                                        if (edi_3 s>= 0)
                                            var_59_1 = 1
                                    case 3, 4
                                        sub_4c4590("Abandoned")
                                    case 5
                                        sub_4c4590("Formation Expired")
                                
                                if ((data_3165ee0 & 1) == 0)
                                    data_3165ee0.d |= 1
                                    var_c_1.b = 4
                                    data_3165edc = sub_4f5220(data_307c54c, "btnTrash")
                                    var_c_1.b = 0
                                
                                int32_t ebx_4 = data_3165edc
                                int32_t eax_43
                                int32_t ecx_19
                                eax_43, ecx_19 = sub_4fc3d0(&data_be1cb8, eax_15)
                                
                                if (ebx_4 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_9 = *(eax_43 + (ebx_4 << 2) + 0x30)
                                int128_t* eax_44
                                
                                if (edx_9 != 0)
                                    eax_44 = sub_4fc1e0(ecx_19, edx_9)
                                else
                                    eax_44 = sub_4fc0d0()
                                    *(eax_44 + 4) = &data_83f3d3
                                    *(eax_43 + (ebx_4 << 2) + 0x30) = *(eax_44 + 0x1bc)
                                
                                *(eax_44 + 0x21) = arg9 == 0
                                *(sub_4fc3d0(&data_be1cb8, eax_15) + 8) = 0
                                
                                if ((data_3165ee0 & 2) == 0)
                                    data_3165ee0.d |= 2
                                    var_c_1.b = 5
                                    data_315f950 = sub_4f5220(data_307c54c, "txtName1")
                                    int32_t eax_48 = sub_4f5220(data_307c54c, "txtName2")
                                    int32_t* ecx_21 = data_307c54c
                                    data_315f954 = eax_48
                                    int32_t eax_49 = sub_4f5220(ecx_21, "txtName3")
                                    int32_t* edx_12 = data_307c54c
                                    data_315f958 = eax_49
                                    data_315f95c = sub_4f5220(edx_12, "txtName4")
                                    var_c_1.b = 0
                                
                                if ((data_3165ee0 & 4) == 0)
                                    data_3165ee0.d |= 4
                                    var_c_1.b = 6
                                    data_3165ed8 = sub_4f5220(data_307c54c, "txtDesc")
                                    var_c_1.b = 0
                                
                                if ((data_3165ee0 & 8) == 0)
                                    data_3165ee0.d |= 8
                                    var_c_1.b = 7
                                    data_3165ed4 = sub_4f5220(data_307c54c, "txtDescYourTurn")
                                    var_c_1.b = 0
                                
                                if ((data_3165ee0 & 0x10) == 0)
                                    data_3165ee0.d |= 0x10
                                    var_c_1.b = 8
                                    data_3165ed0 = sub_4f5220(data_307c54c, "imgExpansion")
                                    var_c_1.b = 0
                                
                                int32_t eax_55 = sub_413f50(eax_21)
                                int32_t ebx_5 = data_3165ed0
                                int32_t eax_56
                                int32_t ecx_24
                                eax_56, ecx_24 = sub_4fc3d0(&data_be1cb8, eax_15)
                                
                                if (ebx_5 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_14 = *(eax_56 + (ebx_5 << 2) + 0x30)
                                int128_t* eax_57
                                
                                if (edx_14 != 0)
                                    eax_57 = sub_4fc1e0(ecx_24, edx_14)
                                else
                                    eax_57 = sub_4fc0d0()
                                    *(eax_57 + 4) = &data_83f3d3
                                    *(eax_56 + (ebx_5 << 2) + 0x30) = *(eax_57 + 0x1bc)
                                
                                int32_t edx_16 = *eax_57 + 1
                                *(eax_57 + 0x98) = eax_55
                                *(eax_57 + 0x94) = edx_16
                                int32_t i_2 = 0
                                int32_t i_5 = 0
                                void* var_4c_1 = eax_21 + 0xc
                                
                                do
                                    int32_t esi_16 = (&data_315f950)[i_2]
                                    
                                    if (i_2 s>= *(eax_21 + 0x140))
                                        if (eax_15 == 0)
                                            sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                                "c:\ax2010\engine\DataArray.h", 0x45, 
                                                "DataArray<struct UIState>::DataArrayGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        uint32_t eax_68 = zx.d(eax_15.w)
                                        int32_t ecx_30
                                        int32_t edx_20
                                        
                                        if (eax_68 u< data_be1cbc)
                                            edx_20 = data_be1cb8
                                            ecx_30 = eax_68 * 0x438
                                        
                                        if (eax_68 u>= data_be1cbc
                                                || *(ecx_30 + edx_20 + 0x434) != eax_15)
                                            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                                "c:\ax2010\engine\DataArray.h", 0x46, 
                                                "DataArray<struct UIState>::DataArrayGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t ebx_9 = edx_20 + eax_68 * 0x438
                                        
                                        if (esi_16 s>= 0x100)
                                            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, 
                                                "UIDef.cpp", 0x518, "UIStateElementGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t edx_21 = *(ebx_9 + (esi_16 << 2) + 0x30)
                                        int128_t* eax_70
                                        
                                        if (edx_21 != 0)
                                            eax_70 = sub_4fc1e0(ecx_30, edx_21)
                                        else
                                            eax_70 = sub_4fc0d0()
                                            *(eax_70 + 4) = &data_83f3d3
                                            *(ebx_9 + (esi_16 << 2) + 0x30) = *(eax_70 + 0x1bc)
                                        
                                        *(eax_70 + 0x64) = *eax_70 + 1
                                        char* ecx_32 = *(eax_70 + 0x68)
                                        
                                        if (ecx_32 != 0 && ecx_32 != &data_83f3d3)
                                            if (*ecx_32 != 0)
                                                void* eax_72 = sub_4c4060(eax_70 + 0x68)
                                                int32_t temp4_1 = *(eax_72 + 4)
                                                *(eax_72 + 4) -= 1
                                                
                                                if (temp4_1 == 1)
                                                    int32_t esi_19 = *(eax_72 + 0xc) + 0x10
                                                    sub_4f4430(eax_72, sub_4f4380(esi_19), esi_19)
                                            
                                            i_2 = i_5
                                            *(eax_70 + 0x68) = &data_83f3d3
                                        
                                        *(eax_70 + 0x151) = 1
                                    else
                                        if (eax_15 == 0)
                                            sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                                "c:\ax2010\engine\DataArray.h", 0x45, 
                                                "DataArray<struct UIState>::DataArrayGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        uint32_t eax_61 = zx.d(eax_15.w)
                                        int32_t ecx_28
                                        int32_t edx_17
                                        
                                        if (eax_61 u< data_be1cbc)
                                            edx_17 = data_be1cb8
                                            ecx_28 = eax_61 * 0x438
                                        
                                        if (eax_61 u>= data_be1cbc
                                                || *(ecx_28 + edx_17 + 0x434) != eax_15)
                                            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                                "c:\ax2010\engine\DataArray.h", 0x46, 
                                                "DataArray<struct UIState>::DataArrayGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t ebx_7 = edx_17 + eax_61 * 0x438
                                        
                                        if (esi_16 s>= 0x100)
                                            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, 
                                                "UIDef.cpp", 0x518, "UIStateElementGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t edx_18 = *(ebx_7 + (esi_16 << 2) + 0x30)
                                        int128_t* eax_63
                                        
                                        if (edx_18 != 0)
                                            eax_63 = sub_4fc1e0(ecx_28, edx_18)
                                        else
                                            eax_63 = sub_4fc0d0()
                                            *(eax_63 + 4) = &data_83f3d3
                                            *(ebx_7 + (esi_16 << 2) + 0x30) = *(eax_63 + 0x1bc)
                                        
                                        *(eax_63 + 0x64) = *eax_63 + 1
                                        sub_4c4590(var_4c_1)
                                        *(eax_63 + 0x151) = 1
                                    
                                    var_4c_1 += 0x50
                                    i_2 += 1
                                    i_5 = i_2
                                while (i_2 s< 4)
                                
                                if (var_59_1 == 0)
                                    uint32_t esi_27 = zx.d(eax_15.w)
                                    int32_t ebx_16
                                    
                                    if (esi_27 u< data_be1cbc)
                                        ebx_16 = data_be1cb8
                                    
                                    if (esi_27 u>= data_be1cbc
                                            || *(esi_27 * 0x438 + ebx_16 + 0x434) != eax_15)
                                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                            "c:\ax2010\engine\DataArray.h", 0x46, 
                                            "DataArray<struct UIState>::DataArrayGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t eax_96 = esi_27 * 0x438
                                    int32_t ebx_17 = ebx_16 + eax_96
                                    int32_t eax_97 = data_3165ed4
                                    
                                    if (eax_97 s>= 0x100)
                                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                            0x518, "UIStateElementGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t edx_27 = *(ebx_17 + (eax_97 << 2) + 0x30)
                                    int128_t* eax_98
                                    
                                    if (edx_27 != 0)
                                        eax_98 = sub_4fc1e0(eax_15, edx_27)
                                    else
                                        eax_98 = sub_4fc0d0()
                                        *(eax_98 + 4) = &data_83f3d3
                                        *(ebx_17 + ((eax_97 + 0xc) << 2)) = *(eax_98 + 0x1bc)
                                    
                                    *(eax_98 + 0x64) = *eax_98 + 1
                                    char* ecx_44 = *(eax_98 + 0x68)
                                    
                                    if (ecx_44 != 0 && ecx_44 != &data_83f3d3)
                                        if (*ecx_44 != 0)
                                            void* eax_100 = sub_4c4060(eax_98 + 0x68)
                                            int32_t temp5_1 = *(eax_100 + 4)
                                            *(eax_100 + 4) -= 1
                                            
                                            if (temp5_1 == 1)
                                                int32_t esi_29 = *(eax_100 + 0xc) + 0x10
                                                ecx_44 = sub_4f4430(eax_100, sub_4f4380(esi_29), esi_29)
                                        
                                        *(eax_98 + 0x68) = &data_83f3d3
                                    
                                    *(eax_98 + 0x151) = 1
                                    char* const edi_16 = &data_83f3d3
                                    
                                    if (var_58 != 0)
                                        edi_16 = var_58
                                    
                                    int32_t ebx_19
                                    
                                    if (esi_27 u< data_be1cbc)
                                        ebx_19 = data_be1cb8
                                    
                                    if (esi_27 u>= data_be1cbc
                                            || *(esi_27 * 0x438 + ebx_19 + 0x434) != eax_15)
                                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                            "c:\ax2010\engine\DataArray.h", 0x46, 
                                            "DataArray<struct UIState>::DataArrayGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t esi_31 = data_3165ed8
                                    int32_t ebx_20 = ebx_19 + eax_96
                                    
                                    if (esi_31 s>= 0x100)
                                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                            0x518, "UIStateElementGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t edx_29 = *(ebx_20 + (esi_31 << 2) + 0x30)
                                    int128_t* eax_104
                                    
                                    if (edx_29 != 0)
                                        eax_104 = sub_4fc1e0(ecx_44, edx_29)
                                    else
                                        eax_104 = sub_4fc0d0()
                                        *(eax_104 + 4) = &data_83f3d3
                                        *(ebx_20 + (esi_31 << 2) + 0x30) = *(eax_104 + 0x1bc)
                                    
                                    *(eax_104 + 0x64) = *eax_104 + 1
                                    sub_4c4590(edi_16)
                                    *(eax_104 + 0x151) = 1
                                else
                                    char* const var_38_1 = &data_83f3d3
                                    
                                    if (var_58 != 0)
                                        var_38_1 = var_58
                                    
                                    uint32_t esi_21 = zx.d(eax_15.w)
                                    int32_t ebx_11
                                    
                                    if (esi_21 u< data_be1cbc)
                                        ebx_11 = data_be1cb8
                                    
                                    if (esi_21 u>= data_be1cbc
                                            || *(esi_21 * 0x438 + ebx_11 + 0x434) != eax_15)
                                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                            "c:\ax2010\engine\DataArray.h", 0x46, 
                                            "DataArray<struct UIState>::DataArrayGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t eax_79 = esi_21 * 0x438
                                    int32_t ebx_12 = ebx_11 + eax_79
                                    int32_t eax_80 = data_3165ed4
                                    
                                    if (eax_80 s>= 0x100)
                                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                            0x518, "UIStateElementGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t edx_24 = *(ebx_12 + (eax_80 << 2) + 0x30)
                                    int128_t* eax_81
                                    
                                    if (edx_24 != 0)
                                        eax_81 = sub_4fc1e0(eax_15, edx_24)
                                    else
                                        eax_81 = sub_4fc0d0()
                                        *(eax_81 + 4) = &data_83f3d3
                                        *(ebx_12 + ((eax_80 + 0xc) << 2)) = *(eax_81 + 0x1bc)
                                    
                                    *(eax_81 + 0x64) = *eax_81 + 1
                                    sub_4c4590(var_38_1)
                                    *(eax_81 + 0x151) = 1
                                    int32_t eax_85
                                    int32_t ecx_36
                                    
                                    if (esi_21 u< data_be1cbc)
                                        eax_85 = data_be1cb8
                                        ecx_36 = *(esi_21 * 0x438 + eax_85 + 0x434)
                                    
                                    if (esi_21 u>= data_be1cbc || ecx_36 != eax_15)
                                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                            "c:\ax2010\engine\DataArray.h", 0x46, 
                                            "DataArray<struct UIState>::DataArrayGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t esi_23 = data_3165ed8
                                    int32_t ebx_14 = eax_85 + eax_79
                                    
                                    if (esi_23 s>= 0x100)
                                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                            0x518, "UIStateElementGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t edx_26 = *(ebx_14 + (esi_23 << 2) + 0x30)
                                    int128_t* eax_86
                                    
                                    if (edx_26 != 0)
                                        eax_86 = sub_4fc1e0(ecx_36, edx_26)
                                    else
                                        eax_86 = sub_4fc0d0()
                                        *(eax_86 + 4) = &data_83f3d3
                                        *(ebx_14 + (esi_23 << 2) + 0x30) = *(eax_86 + 0x1bc)
                                    
                                    *(eax_86 + 0x64) = *eax_86 + 1
                                    char* ecx_38 = *(eax_86 + 0x68)
                                    
                                    if (ecx_38 != 0 && ecx_38 != &data_83f3d3)
                                        if (*ecx_38 != 0)
                                            void* eax_90 = sub_4c4060(eax_86 + 0x68)
                                            int32_t temp6_1 = *(eax_90 + 4)
                                            *(eax_90 + 4) -= 1
                                            
                                            if (temp6_1 == 1)
                                                int32_t esi_25 = *(eax_90 + 0xc) + 0x10
                                                sub_4f4430(eax_90, sub_4f4380(esi_25), esi_25)
                                        
                                        *(eax_86 + 0x68) = &data_83f3d3
                                    
                                    *(eax_86 + 0x151) = 1
                                
                                if ((data_3165ee0 & 0x20) == 0)
                                    data_3165ee0.d |= 0x20
                                    var_c_1.b = 9
                                    data_315f960 = sub_4f5220(data_307c54c, "imgP1")
                                    int32_t eax_108 = sub_4f5220(data_307c54c, "imgP2")
                                    int32_t* ecx_49 = data_307c54c
                                    data_315f964 = eax_108
                                    int32_t eax_109 = sub_4f5220(ecx_49, "imgP3")
                                    int32_t* edx_31 = data_307c54c
                                    data_315f968 = eax_109
                                    data_315f96c = sub_4f5220(edx_31, "imgP4")
                                    var_c_1.b = 0
                                
                                if ((data_3165ee0 & 0x40) == 0)
                                    data_3165ee0.d |= 0x40
                                    var_c_1.b = 0xa
                                    int32_t eax_112 = sub_4f5220(data_307c54c, "imgP1Cover")
                                    int32_t* ecx_50 = data_307c54c
                                    data_315f970 = eax_112
                                    int32_t eax_113 = sub_4f5220(ecx_50, "imgP2Cover")
                                    int32_t* edx_32 = data_307c54c
                                    data_315f974 = eax_113
                                    data_315f978 = sub_4f5220(edx_32, "imgP3Cover")
                                    data_315f97c = sub_4f5220(data_307c54c, "imgP4Cover")
                                    var_c_1.b = 0
                                
                                int32_t eax_117 = *(eax_21 + 0x194)
                                int32_t ebx_22 = 0
                                
                                if (eax_117 == 1)
                                    ebx_22 = eax_117
                                
                                if (eax_117 == 3)
                                    ebx_22 += 1
                                
                                if (eax_117 == 4)
                                    ebx_22 += 1
                                
                                int32_t eax_118 = *(eax_21 + 0x1a0)
                                
                                if (eax_118 == 1)
                                    ebx_22 += 1
                                
                                if (eax_118 == 3)
                                    ebx_22 += 1
                                
                                if (eax_118 == 4)
                                    ebx_22 += 1
                                
                                int32_t eax_119 = *(eax_21 + 0x1ac)
                                
                                if (eax_119 == 1)
                                    ebx_22 += 1
                                
                                if (eax_119 == 3)
                                    ebx_22 += 1
                                
                                if (eax_119 == 4)
                                    ebx_22 += 1
                                
                                int32_t eax_120 = *(eax_21 + 0x1b8)
                                
                                if (eax_120 == 1)
                                    ebx_22 += 1
                                
                                if (eax_120 == 3)
                                    ebx_22 += 1
                                
                                if (eax_120 == 4)
                                    ebx_22 += 1
                                
                                int32_t i_7 = *(eax_21 + 0x140)
                                int32_t edi_17 = 0
                                
                                if (i_7 s> 0)
                                    void* eax_121 = eax_21 + 0x30
                                    int32_t i_3
                                    
                                    do
                                        if (*eax_121 != 4)
                                            edi_17 += 1
                                        
                                        eax_121 += 0x50
                                        i_3 = i_7
                                        i_7 -= 1
                                    while (i_3 != 1)
                                
                                for (int32_t i_4 = 0; i_4 s< 4; i_4 += 1)
                                    i_7.b = i_4 s>= ebx_22
                                    uint32_t edx_33 = zx.d(i_7.b)
                                    uint32_t var_70_8 = edx_33
                                    sub_4fa4e0(eax_15, (&data_315f960)[i_4], edx_33.b)
                                    i_7.b = i_4 s>= edi_17
                                    uint32_t edx_34 = zx.d(i_7.b)
                                    uint32_t var_78_1 = edx_34
                                    sub_4fa4e0(eax_15, (&data_315f970)[i_4], edx_34.b)
                                
                                int32_t var_c_2 = 0xffffffff
                                
                                if (var_58 != 0 && *var_58 != 0)
                                    if (*(var_58 - 0x10) != 0xfafafafa)
                                        sub_4c5870(
                                            "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                            &data_83f3d3, "xString.cpp", 0x20, 
                                            "XStringMagicDataStructFromCharPtr")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t temp8_1 = *(var_58 - 0xc)
                                    *(var_58 - 0xc) -= 1
                                    
                                    if (temp8_1 == 1)
                                        void* esi_34 = data_26a44e4
                                        int32_t ebx_24 = *(var_58 - 4) + 0x10
                                        
                                        if (esi_34 == 0)
                                            sub_4f4250()
                                            esi_34 = data_26a44e4
                                        
                                        int32_t eax_126 = 0
                                        void** esi_35
                                        
                                        while (true)
                                            if (ebx_24 s<= 1 << (eax_126.b + 4))
                                                esi_35 = esi_34 + eax_126 * 0x14
                                                break
                                            
                                            eax_126 += 1
                                            
                                            if (eax_126 s>= 7)
                                                esi_35 = esi_34 + 0x8c
                                                break
                                        
                                        esi_35[3] -= 1
                                        
                                        if (ebx_24 s<= 0x400 || esi_35[4] != 0xffffffff)
                                            int32_t eax_128 = esi_35[4]
                                            int32_t* ecx_52 = esi_35[1]
                                            
                                            if (ecx_52 == 0)
                                            label_414cfe:
                                                sub_4c5870("IsPointerFromAllocator(pItem)", 
                                                    &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
                                                    "XAllocator::Free")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            while (true)
                                                void* edx_36 = &ecx_52[1]
                                                ecx_52 = *ecx_52
                                                
                                                if (&var_58[0xfffffff0] u>= edx_36 &&
                                                        &var_58[0xfffffff0]
                                                        u< edx_36 + esi_35[2] * eax_128 && mods.dp.d(
                                                        sx.q(&var_58[0xfffffff0] - edx_36), eax_128) == 0)
                                                    *(var_58 - 0x10) = *esi_35
                                                    *esi_35 = &var_58[0xfffffff0]
                                                    break
                                                
                                                if (ecx_52 == 0)
                                                    goto label_414cfe
                                        else
                                            _aligned_free_base(&var_58[0xfffffff0])
                            else
                                if (eax_15 == 0)
                                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x45, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                uint32_t ecx_11 = zx.d(eax_15.w)
                                int32_t edx_6
                                
                                if (ecx_11 u< data_be1cbc)
                                    edx_6 = data_be1cb8
                                
                                if (ecx_11 u>= data_be1cbc
                                        || *(ecx_11 * 0x438 + edx_6 + 0x434) != eax_15)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                *(ecx_11 * 0x438 + edx_6 + 8) = 1
                            
                            ebx = arg5
                            edx = var_44
                            int32_t eax_136 = var_48_1 + 1
                            var_48_1 = eax_136
                            
                            if (eax_136 s< var_28)
                                ecx_2 = var_48_1
                                continue
                            
                            result = result_1
                            esi_1 = var_28
                            break
                    
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            edx += 1
            var_44 = edx
            
            if (edx s>= result)
                break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

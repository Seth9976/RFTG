// 函数名称: sub_4152a0
// 虚拟地址: 0x4152a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4152a0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696124
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_168 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = *(data_27e7a40 + 0x2c4958)
    int32_t edi = 0
    int32_t esi = 0
    int32_t var_140 = 0
    void var_138
    int32_t var_a8[0x24]
    
    if (eax_4 s> 0)
        int32_t eax_5 = sub_4194b0()
        void* var_150_1 = &var_138
        int32_t* ebx_2 = data_27e7a40 + 0xc18
        
        do
            int32_t edx_1 = *ebx_2
            int32_t eax_6 = 0
            
            if (edx_1 s> 0)
                void* ecx = &ebx_2[-0x50]
                
                do
                    if (*ecx == eax_5)
                        edi = var_140
                        goto label_415352
                    
                    eax_6 += 1
                    ecx += 0x50
                while (eax_6 s< edx_1)
                
                edi = var_140
            
            eax_6 = 0xffffffff
        label_415352:
            int32_t edx_2
            
            if (ebx_2[0x27] == 1 && ebx_2[0x13] == 1)
                edx_2 = eax_6 * 5
            
            if (ebx_2[0x27] != 1 || ebx_2[0x13] != 1 || ebx_2[edx_2 * 4 - 0x44] != 4)
                if (sub_4194d0(esi) == 0)
                    *var_150_1 = esi
                    var_150_1 += 4
                else
                    var_a8[edi] = esi
                    edi += 1
                    var_140 = edi
            else
                var_a8[edi] = esi
                edi += 1
                var_140 = edi
            
            esi += 1
            ebx_2 = &ebx_2[0x7e]
        while (esi s< eax_4)
    
    void* ebx_3 = data_27e7a40
    int32_t i = 0
    
    if (eax_4 s> 0)
        int32_t* edx_5 = arg4 + 0x14
        void* ecx_1 = &var_138 - (edi << 2)
        
        do
            int32_t esi_2
            
            if (i s>= edi)
                esi_2 = *ecx_1
            else
                esi_2 = var_a8[i]
            
            *edx_5 = esi_2
            i += 1
            ecx_1 += 4
            edx_5 = &edx_5[1]
        while (i s< *(ebx_3 + 0x2c4958))
    
    int32_t ecx_2 = *(ebx_3 + 0x2c9048)
    int32_t esi_3 = 0
    int32_t eax_11 = 0
    int32_t var_148_1 = 0
    
    if (ecx_2 s> 0)
        void* edi_3 = &var_138
        void* edx_6 = ebx_3 + 0x2c4b44
        
        do
            if (*edx_6 != 1)
                *edi_3 = eax_11
                edi_3 += 4
            else
                var_a8[esi_3] = eax_11
                esi_3 += 1
            
            eax_11 += 1
            edx_6 += 0x1f8
        while (eax_11 s< ecx_2)
        
        var_148_1 = esi_3
    
    int32_t i_1 = 0
    
    if (ecx_2 s> 0)
        void* edx_7 = arg4 + 0xa4
        void* ecx_3 = &var_138 - (esi_3 << 2)
        
        do
            int32_t esi_5
            
            if (i_1 s>= var_148_1)
                esi_5 = *ecx_3
            else
                esi_5 = var_a8[i_1]
            
            *edx_7 = esi_5
            i_1 += 1
            ecx_3 += 4
            edx_7 += 4
        while (i_1 s< *(ebx_3 + 0x2c9048))
    
    int32_t* esi_6
    
    if ((data_3166130 & 1) != 0)
        esi_6 = arg3
    else
        data_3166130.d |= 1
        esi_6 = arg3
        int32_t var_8_1 = 0
        int32_t eax_12 = sub_4f5220(esi_6, "tblGamesYours")
        int32_t var_8_2 = 0xffffffff
        ebx_3 = data_27e7a40
        data_316612c = eax_12
    
    int32_t eax_15 = *(arg4 + 0x10) * 4
    int32_t ecx_5 = *(ebx_3 + 0x2c4958) - eax_15
    
    if (ecx_5 s>= 4)
        ecx_5 = 4
    
    int32_t eax_16 = data_316612c
    sub_413fc0(eax_16, arg4 + 0x14, esi_6, arg4, eax_16, ecx_5, eax_15, ebx_3 + 0xad8, 1, arg4 + 0x14)
    
    if ((data_3166130 & 2) == 0)
        data_3166130.d |= 2
        int32_t var_8_3 = 1
        data_3166128 = sub_4f5220(esi_6, "tblGamesOpen")
        int32_t var_8_4 = 0xffffffff
    
    void* edx_9 = data_27e7a40
    int32_t eax_20 = *(arg4 + 0xc) * 4
    int32_t ecx_8 = *(edx_9 + 0x2c9048) - eax_20
    
    if (ecx_8 s>= 4)
        ecx_8 = 4
    
    sub_413fc0(eax_20, edx_9 + 0x2c4968, esi_6, arg4, data_3166128, ecx_8, eax_20, edx_9 + 0x2c4968, 0, 
        arg4 + 0xa4)
    
    if ((data_3166130 & 4) == 0)
        data_3166130.d |= 4
        int32_t var_8_5 = 2
        data_3166124 = sub_4f5220(esi_6, "btnQuickplay")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166130 & 8) == 0)
        data_3166130.d |= 8
        int32_t var_8_7 = 3
        data_3166120 = sub_4f5220(esi_6, "btnCustom")
        int32_t var_8_8 = 0xffffffff
    
    bool cond:0 = *(data_27e7a40 + 0x2c4958) s< 0x24
    int32_t edx_12 = *(arg4 + 8)
    
    if (edx_12 == 0)
        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
            "DataArray<struct UIState>::DataArrayGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t eax_25 = zx.d(edx_12.w)
    
    if (eax_25 u< data_be1cbc)
        int32_t esi_7 = data_be1cb8
        int32_t ecx_12 = eax_25 * 0x438
        
        if (*(ecx_12 + esi_7 + 0x434) == edx_12)
            int32_t ebx_6 = esi_7 + eax_25 * 0x438
            int32_t esi_8 = data_3166124
            
            if (esi_8 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t edx_13 = *(ebx_6 + (esi_8 << 2) + 0x30)
            int128_t* eax_29
            int32_t ecx_13
            
            if (edx_13 != 0)
                eax_29, ecx_13 = sub_4fc1e0(ecx_12, edx_13)
            else
                eax_29 = sub_4fc0d0()
                *(eax_29 + 4) = &data_83f3d3
                *(ebx_6 + (esi_8 << 2) + 0x30) = *(eax_29 + 0x1bc)
            
            ecx_13.b = cond:0 == 0
            *(eax_29 + 0x23) = ecx_13.b
            int32_t edx_14 = *(arg4 + 8)
            char var_139_1 = ecx_13.b
            
            if (edx_14 == 0)
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                    "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            uint32_t eax_32 = zx.d(edx_14.w)
            
            if (eax_32 u< data_be1cbc)
                int32_t esi_9 = data_be1cb8
                int32_t ecx_15 = eax_32 * 0x438
                
                if (*(ecx_15 + esi_9 + 0x434) == edx_14)
                    int32_t ebx_7 = esi_9 + eax_32 * 0x438
                    int32_t esi_10 = data_3166120
                    
                    if (esi_10 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_4c5a30()
                            noreturn
                        
                        breakpoint
                    
                    int32_t edx_15 = *(ebx_7 + (esi_10 << 2) + 0x30)
                    int128_t* eax_36
                    int32_t ecx_16
                    
                    if (edx_15 != 0)
                        eax_36, ecx_16 = sub_4fc1e0(ecx_15, edx_15)
                    else
                        eax_36 = sub_4fc0d0()
                        *(eax_36 + 4) = &data_83f3d3
                        *(ebx_7 + (esi_10 << 2) + 0x30) = *(eax_36 + 0x1bc)
                    
                    ecx_16.b = var_139_1
                    void* esi_11 = data_27e7a40
                    *(eax_36 + 0x23) = ecx_16.b
                    int32_t eax_39
                    int32_t edx_16
                    edx_16:eax_39 = sx.q(*(esi_11 + 0x2c4958) + 3)
                    int32_t esi_12 = *(arg4 + 0x10)
                    int32_t eax_42
                    int32_t edx_18
                    edx_18:eax_42 = sx.q(*(esi_11 + 0x2c9048) + 3)
                    int32_t edx_19
                    edx_19.b = esi_12 == 0
                    int32_t ecx_20 = *(arg4 + 0xc)
                    ebx_7.b = ecx_20 == 0
                    int32_t eax_45
                    eax_45.b = ecx_20 s>= ((eax_42 + (edx_18 & 3)) s>> 2) - 1
                    var_140:3.b = eax_45.b
                    var_140.b = edx_19.b
                    edx_19.b = esi_12 s>= (((edx_16 & 3) + eax_39) s>> 2) - 1
                    var_140:1.b = edx_19.b
                    var_140:2.b = ebx_7.b
                    int32_t* esi_13
                    
                    if ((data_3166130 & 0x10) != 0)
                        esi_13 = arg3
                    else
                        data_3166130.d |= 0x10
                        esi_13 = arg3
                        int32_t var_8_9 = 4
                        data_315f980 = sub_4f5220(esi_13, "btnYourPrev")
                        data_315f984 = sub_4f5220(esi_13, "btnYourNext")
                        data_315f988 = sub_4f5220(esi_13, "btnOpenPrev")
                        int32_t eax_49
                        eax_49, edx_19 = sub_4f5220(esi_13, "btnOpenNext")
                        data_315f98c = eax_49
                        int32_t var_8_10 = 0xffffffff
                    
                    if ((data_3166130 & 0x20) == 0)
                        data_3166130.d |= 0x20
                        int32_t var_8_11 = 5
                        data_315f990 = sub_4f5220(esi_13, "imgYourPrev")
                        data_315f994 = sub_4f5220(esi_13, "imgYourNext")
                        data_315f998 = sub_4f5220(esi_13, "imgOpenPrev")
                        int32_t eax_53
                        eax_53, edx_19 = sub_4f5220(esi_13, "imgOpenNext")
                        data_315f99c = eax_53
                        int32_t var_8_12 = 0xffffffff
                    
                    int32_t esi_14 = 0
                    
                    while (true)
                        uint32_t var_16c_2 = zx.d(*(&var_140 + esi_14))
                        sub_4fa4e0(*(arg4 + 8), (&data_315f990)[esi_14], edx_19.b)
                        int32_t edx_20 = *(arg4 + 8)
                        int32_t edi_6 = (&data_315f980)[esi_14]
                        
                        if (edx_20 == 0)
                            sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                "c:\ax2010\engine\DataArray.h", 0x45, 
                                "DataArray<struct UIState>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        uint32_t eax_58 = zx.d(edx_20.w)
                        
                        if (eax_58 u< data_be1cbc)
                            void* ecx_23 = eax_58 * 0x438 + data_be1cb8
                            
                            if (*(ecx_23 + 0x434) == edx_20)
                                int32_t eax_60 = eax_58 * 0x438 + data_be1cb8
                                
                                if (edi_6 s>= 0x100)
                                    break
                                
                                edx_19 = *(eax_60 + (edi_6 << 2) + 0x30)
                                int128_t* result
                                int32_t ecx_24
                                
                                if (edx_19 != 0)
                                    result, ecx_24 = sub_4fc1e0(ecx_23, edx_19)
                                else
                                    result, edx_19 = sub_4fc0d0()
                                    *(result + 4) = &data_83f3d3
                                    *(eax_60 + (edi_6 << 2) + 0x30) = *(result + 0x1bc)
                                
                                ecx_24.b = *(&var_140 + esi_14)
                                esi_14 += 1
                                *(result + 0x21) = ecx_24.b
                                
                                if (esi_14 s< 4)
                                    continue
                                
                                fsbase->NtTib.ExceptionList = ExceptionList
                                sub_5a6aba(eax_2 ^ &__saved_ebp)
                                return result
                        
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

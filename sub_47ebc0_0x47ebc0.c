// 函数名称: sub_47ebc0
// 虚拟地址: 0x47ebc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_47ebc0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69417a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t eax_2 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_3165b00 & 1) != 0
    *(eax_3 + 0x2c) = sub_47dfc0
    
    if (not(cond:0))
        data_3165b00.d |= 1
        int32_t var_c_1 = 0
        data_3165afc = sub_4f5220(data_307c748, "tblStoreItem")
        int32_t var_c_2 = 0xffffffff
    
    int128_t* eax_7 = sub_4f6e90(data_3165afc, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_1 = data_3165afc
    *(eax_7 + 0x11c) = sub_47df90
    int128_t* eax_9 = sub_4f6e90(edi_1, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    eax_9[0x12].d = *eax_9 + 1
    *(eax_9 + 0x124) = 1
    *(eax_9 + 0x128) = 3
    *(eax_9 + 0x12c) = 1
    eax_9[0x13].d = 3
    int32_t var_38 = 0
    int32_t var_20 = 0
    
    while (true)
        int32_t edi_3 = data_3165afc
        int32_t var_28 = var_20
        int32_t var_24_1 = var_38
        void* eax_11
        int32_t ecx_2
        eax_11, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (edi_3 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_2 = *(eax_11 + (edi_3 << 2) + 0x30)
        int128_t* eax_12
        
        if (edx_2 != 0)
            eax_12 = sub_4fc1e0(ecx_2, edx_2)
        else
            eax_12, edx_2 = sub_4fc0d0()
            *(eax_12 + 4) = &data_83f3d3
            *(eax_11 + (edi_3 << 2) + 0x30) = *(eax_12 + 0x1bc)
        
        char* esi_7 = *(eax_11 + 4)
        
        if (*(esi_7 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_7 == 0)
            sub_520800(eax_12, edx_2.b, esi_7, 0)
            
            if (*esi_7 == 0)
                sub_509540(esi_7)
        
        int32_t eax_17 = *(sub_4f7720(&var_28, edi_3 * 0x118 + ***esi_7, eax_12) + 0x434)
        int32_t* esi_8 = data_307c754
        
        if ((data_3165b00 & 2) == 0)
            data_3165b00.d |= 2
            int32_t var_c_3 = 1
            data_3165af8 = sub_4f5220(esi_8, "expIcon")
            int32_t var_c_4 = 0xffffffff
        
        if ((data_3165b00 & 4) == 0)
            data_3165b00.d |= 4
            int32_t var_c_5 = 2
            data_3165af4 = sub_4f5220(esi_8, "expName")
            int32_t var_c_6 = 0xffffffff
        
        if ((data_3165b00 & 8) == 0)
            data_3165b00.d |= 8
            int32_t var_c_7 = 3
            data_3165af0 = sub_4f5220(esi_8, "expPrice")
            int32_t var_c_8 = 0xffffffff
        
        if ((data_3165b00 & 0x10) == 0)
            data_3165b00.d |= 0x10
            int32_t var_c_9 = 4
            data_3165aec = sub_4f5220(esi_8, "expReq")
            int32_t var_c_10 = 0xffffffff
        
        int32_t ecx_6 = 0
        void* const eax_22 = &data_841208
        int32_t eax_24
        int32_t ecx_8
        int32_t edx_7
        int32_t edx_8
        int32_t ebx_2
        
        while (true)
            if (*eax_22 != var_38 + 2)
                eax_22 += 0x28
                ecx_6 += 1
                
                if (eax_22 s< &data_841320)
                    continue
            else if (ecx_6 * 0x28 != 0xff7bedf8)
                edx_7 = *(&data_841220)[ecx_6 * 0xa]
                ebx_2 = data_3165af8
                eax_24, ecx_8 = sub_4fc3d0(&data_be1cb8, eax_17)
                
                if (ebx_2 s< 0x100)
                    edx_8 = *(eax_24 + (ebx_2 << 2) + 0x30)
                    break
                
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4c5870("retval", &data_83f3d3, "..\code\StoreDlg.cpp", 0xe8, "GetExpDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int128_t* eax_25
        
        if (edx_8 != 0)
            eax_25 = sub_4fc1e0(ecx_8, edx_8)
        else
            eax_25 = sub_4fc0d0()
            *(eax_25 + 4) = &data_83f3d3
            *(eax_24 + (ebx_2 << 2) + 0x30) = *(eax_25 + 0x1bc)
        
        int32_t ebx_3 = data_3165af4
        int32_t edx_10 = *eax_25 + 1
        *(eax_25 + 0x98) = edx_7
        *(eax_25 + 0x94) = edx_10
        char* edx_11 = (&data_841224)[ecx_6 * 0xa]
        int32_t eax_26
        int32_t ecx_11
        eax_26, ecx_11 = sub_4fc3d0(&data_be1cb8, eax_17)
        
        if (ebx_3 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_12 = *(eax_26 + (ebx_3 << 2) + 0x30)
        int128_t* eax_27
        
        if (edx_12 != 0)
            eax_27 = sub_4fc1e0(ecx_11, edx_12)
        else
            eax_27 = sub_4fc0d0()
            *(eax_27 + 4) = &data_83f3d3
            *(eax_26 + (ebx_3 << 2) + 0x30) = *(eax_27 + 0x1bc)
        
        *(eax_27 + 0x64) = *eax_27 + 1
        sub_4c4590(edx_11)
        *(eax_27 + 0x151) = 1
        char eax_32
        
        if (data_be1cd8 == 1)
            int32_t eax_31 = SteamApps(eax_2)
            eax_32 = (*(*eax_31 + 0x1c))(*(ecx_6 * 0x28 + 0x841210))
        
        char* const eax_47
        int32_t ecx_18
        int128_t* esi_19
        
        if (data_be1cd8 != 1 || eax_32 == 0)
            char* eax_38 = (&data_841228)[ecx_6 * 0xa]
            int32_t ebx_7 = data_3165af0
            int32_t eax_39
            int32_t ecx_19
            eax_39, ecx_19 = sub_4fc3d0(&data_be1cb8, eax_17)
            
            if (ebx_7 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_25 = *(eax_39 + (ebx_7 << 2) + 0x30)
            int128_t* eax_40
            int32_t ecx_20
            
            if (edx_25 != 0)
                eax_40, ecx_20 = sub_4fc1e0(ecx_19, edx_25)
            else
                eax_40 = sub_4fc0d0()
                *(eax_40 + 4) = &data_83f3d3
                ecx_20 = *(eax_40 + 0x1bc)
                *(eax_39 + (ebx_7 << 2) + 0x30) = ecx_20
            
            *(eax_40 + 0x64) = *eax_40 + 1
            sub_4c4590(eax_38)
            *(eax_40 + 0x151) = 1
            char eax_42
            
            if (*(ecx_6 * 0x28 + &data_841208) == 3)
                eax_42, ecx_20 = sub_4b95c0(ecx_20, 2)
            
            if (*(ecx_6 * 0x28 + &data_841208) != 3 || eax_42 != 0)
                char eax_48
                
                if (*(ecx_6 * 0x28 + &data_841208) == 4)
                    eax_48 = sub_4b95c0(ecx_20, 2)
                
                if (*(ecx_6 * 0x28 + &data_841208) != 4 || eax_48 != 0)
                    int32_t edi_12 = data_3165aec
                    int32_t eax_51
                    int32_t ecx_22
                    eax_51, ecx_22 = sub_4fc3d0(&data_be1cb8, eax_17)
                    
                    if (edi_12 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_28 = *(eax_51 + (edi_12 << 2) + 0x30)
                    int128_t* eax_52
                    
                    if (edx_28 != 0)
                        eax_52, ecx_18 = sub_4fc1e0(ecx_22, edx_28)
                    else
                        eax_52, ecx_18 = sub_4fc0d0()
                        *(eax_52 + 4) = &data_83f3d3
                        *(eax_51 + (edi_12 << 2) + 0x30) = *(eax_52 + 0x1bc)
                    
                    esi_19 = eax_52
                    *(esi_19 + 0x64) = *esi_19 + 1
                    eax_47 = &data_83f3d3
                else
                    esi_19 = sub_4f6e90(data_3165aec, sub_4fc3d0(&data_be1cb8, eax_17), &data_83f3d3)
                    ecx_18 = *esi_19 + 1
                    *(esi_19 + 0x64) = ecx_18
                    eax_47 = "Requires\rRebel vs Imperium"
            else
                int32_t ebx_9 = data_3165aec
                int32_t eax_43
                eax_43, ecx_18 = sub_4fc3d0(&data_be1cb8, eax_17)
                esi_19 = sub_4f6e90(ebx_9, eax_43, &data_83f3d3)
                *(esi_19 + 0x64) = *esi_19 + 1
                eax_47 = "Requires\rGathering Storm"
        else
            int32_t edi_9 = data_3165af0
            int32_t eax_33
            int32_t ecx_15
            eax_33, ecx_15 = sub_4fc3d0(&data_be1cb8, eax_17)
            
            if (edi_9 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_17 = *(eax_33 + (edi_9 << 2) + 0x30)
            int128_t* eax_34
            
            if (edx_17 != 0)
                eax_34 = sub_4fc1e0(ecx_15, edx_17)
            else
                eax_34 = sub_4fc0d0()
                *(eax_34 + 4) = &data_83f3d3
                *(eax_33 + (edi_9 << 2) + 0x30) = *(eax_34 + 0x1bc)
            
            *(eax_34 + 0x64) = *eax_34 + 1
            sub_4c4590("Owned")
            int32_t ebx_6 = data_3165aec
            *(eax_34 + 0x151) = 1
            int32_t eax_35
            int32_t ecx_17
            eax_35, ecx_17 = sub_4fc3d0(&data_be1cb8, eax_17)
            
            if (ebx_6 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_20 = *(eax_35 + (ebx_6 << 2) + 0x30)
            
            if (edx_20 != 0)
                int128_t* eax_37
                eax_37, ecx_18 = sub_4fc1e0(ecx_17, edx_20)
                esi_19 = eax_37
                *(esi_19 + 0x64) = *esi_19 + 1
            else
                int128_t* eax_36 = sub_4fc0d0()
                *(eax_36 + 4) = &data_83f3d3
                ecx_18 = *(eax_36 + 0x1bc)
                *(eax_35 + (ebx_6 << 2) + 0x30) = ecx_18
                esi_19 = eax_36
                *(esi_19 + 0x64) = *esi_19 + 1
            
            eax_47 = &data_83f3d3
        
        sub_4c4590(eax_47)
        *(esi_19 + 0x151) = 1
        char ebx_11
        
        if (var_38 != 2)
            ebx_11 = 0
        else
            char eax_55 = sub_4b95c0(ecx_18, 4)
            
            if (eax_55 != 0 || *(data_27e7a54 + 0x210) != eax_55)
                ebx_11 = 0
            else
                ebx_11 = 1
        
        if ((data_3165b00 & 0x20) == 0)
            data_3165b00.d |= 0x20
            int32_t var_c_11 = 5
            data_3165ae8 = sub_4f5220(esi_8, "img_storeNew")
            int32_t var_c_12 = 0xffffffff
        
        float edx_31 = data_3165ae8
        int32_t eax_56
        eax_56.b = ebx_11 == 0
        uint32_t var_50_2 = zx.d(eax_56.b)
        sub_4fa4e0(eax_17, edx_31, edx_31.b)
        int32_t eax_59 = var_38 + 1
        var_38 = eax_59
        
        if (eax_59 s>= 3)
            break
    
    int32_t* eax_60 = data_307c748
    
    if ((data_3165b00 & 0x40) == 0)
        data_3165b00.d |= 0x40
        int32_t var_c_13 = 6
        data_3165ae4 = sub_4f5220(eax_60, "txtError")
    
    char* const var_2c_2 = &data_83f3d3
    int32_t var_c_14 = 7
    int32_t ebx_12 = data_3165ae4
    int32_t eax_62
    int32_t ecx_25
    eax_62, ecx_25 = sub_4fc3d0(&data_be1cb8, arg1)
    
    if (ebx_12 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_32 = *(eax_62 + (ebx_12 << 2) + 0x30)
    int128_t* eax_72
    
    if (edx_32 != 0)
        eax_72 = sub_4fc1e0(ecx_25, edx_32)
    else
        eax_72 = sub_4fc0d0()
        *(eax_72 + 4) = &data_83f3d3
        *(eax_62 + (ebx_12 << 2) + 0x30) = *(eax_72 + 0x1bc)
    
    *(eax_72 + 0x64) = *eax_72 + 1
    sub_4c4590(&data_83f3d3)
    *(eax_72 + 0x151) = 1
    
    if ((data_3165b00 & 0x80) == 0)
        data_3165b00.d |= 0x80
        var_c_14.b = 9
        data_3165ae0 = sub_4f5220(data_307c748, "btnRestore")
        var_c_14.b = 7
    
    data_be1cd8
    int32_t edi_15 = data_3165ae0
    int32_t eax_77
    int32_t ecx_27
    eax_77, ecx_27 = sub_4fc3d0(&data_be1cb8, arg1)
    
    if (edi_15 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_35 = *(eax_77 + (edi_15 << 2) + 0x30)
    int128_t* result
    
    if (edx_35 != 0)
        result = sub_4fc1e0(ecx_27, edx_35)
    else
        result = sub_4fc0d0()
        *(result + 4) = &data_83f3d3
        *(eax_77 + (edi_15 << 2) + 0x30) = *(result + 0x1bc)
    
    *(result + 0x21) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

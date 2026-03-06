// 函数名称: sub_45af30
// 虚拟地址: 0x45af30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_45af30(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694694
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_134 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_4 = *(data_27e7a40 + 0x548)
    char* ecx = *(eax_4 + 0x43350)
    
    if ((data_3165c0c & 1) == 0)
        data_3165c0c.d |= 1
        int32_t var_c_1 = 0
        data_3165c08 = sub_4f5220(data_307c500, "tblPlayers")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165c0c & 2) == 0)
        data_3165c0c.d |= 2
        int32_t var_c_3 = 1
        data_3161150 = sub_4f5220(data_307c500, "tblItems")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165c0c & 4) == 0)
        data_3165c0c.d |= 4
        int32_t var_c_5 = 2
        data_3165c04 = sub_4f5220(data_307c500, "txtRound")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165c0c & 8) == 0)
        data_3165c0c.d |= 8
        int32_t var_c_7 = 3
        data_3165c00 = sub_4f5220(data_307c500, "tblPhases")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165c0c & 0x10) == 0)
        data_3165c0c.d |= 0x10
        int32_t var_c_9 = 4
        data_3165bfc = sub_4f5220(data_307c504, "imgMoreText")
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165c0c & 0x20) == 0)
        data_3165c0c.d |= 0x20
        int32_t var_c_11 = 5
        data_3165bf8 = sub_4f5220(data_307c504, "imgPrestige")
        int32_t var_c_12 = 0xffffffff
    
    void* eax_13 = *(data_27e7a40 + 0x548)
    
    if (eax_13 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_15 = *(eax_13 + 0x45844)
    int32_t ebx = sx.d(*(eax_15 + 0x458))
    int128_t* eax_17 = sub_4f6e90(data_3165c08, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    eax_17[0x12].d = *eax_17 + 1
    *(eax_17 + 0x124) = ebx
    *(eax_17 + 0x128) = 1
    *(eax_17 + 0x12c) = ebx
    eax_17[0x13].d = 1
    float i_8 = 0f
    char* var_108
    float i_10
    
    if (*(eax_15 + 0x458) s> 0)
        int32_t var_dc_1 = 0
        float i
        
        do
            int32_t ebx_1 = data_3165c08
            int32_t var_fc_1 = var_dc_1
            i_10 = i_8
            void* eax_19
            int32_t ecx_6
            eax_19, ecx_6 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (ebx_1 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_5 = *(eax_19 + (ebx_1 << 2) + 0x30)
            int128_t* eax_20
            
            if (edx_5 != 0)
                eax_20 = sub_4fc1e0(ecx_6, edx_5)
            else
                eax_20 = sub_4fc0d0()
                *(eax_20 + 4) = &data_83f3d3
                edx_5 = *(eax_20 + 0x1bc)
                *(eax_19 + (ebx_1 << 2) + 0x30) = edx_5
            
            char* esi_4 = *(eax_19 + 4)
            
            if (*(esi_4 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_4 == 0)
                sub_520800(eax_20, edx_5.b, esi_4, 0)
                
                if (*esi_4 == 0)
                    sub_509540(esi_4)
            
            int32_t ecx_9 = *(sub_4f7720(&i_10, ebx_1 * 0x118 + ***esi_4, eax_20) + 0x434)
            
            if ((data_3165c0c & 0x40) == 0)
                data_3165c0c.d |= 0x40
                int32_t var_c_13 = 6
                data_3165bf4 = sub_4f5220(data_307c510, "imgAvatar")
                int32_t var_c_14 = 0xffffffff
            
            if ((data_3165c0c & 0x80) == 0)
                data_3165c0c.d |= 0x80
                int32_t var_c_15 = 7
                data_3165bf0 = sub_4f5220(data_307c510, "txtName")
                int32_t var_c_16 = 0xffffffff
            
            int32_t eax_29
            char** edx_8
            eax_29, edx_8 = sub_424340()
            int32_t edi_3
            
            switch (eax_29)
                case 5
                    edi_3 = data_307c02c
                case 6, 0xd
                    edi_3 = data_307c030
                case 7
                    edi_3 = data_307c034
                case 8
                    edi_3 = data_307c000
                case 9
                    edi_3 = data_307bff8
                case 0xa
                    edi_3 = data_307bffc
                case 0xb
                    edi_3 = data_307c004
                case 0xc
                    edi_3 = data_307c038
                case 0xe
                    edi_3 = data_307c014
                case 0xf
                    edi_3 = data_307c008
                case 0x10
                    edi_3 = data_307c010
                case 0x11
                    edi_3 = data_307c00c
                default
                    edi_3 = data_307c018
            
            char** var_138_1 = &var_108
            sub_424120(i_8, edx_8)
            int32_t var_c_17 = 8
            int32_t ebx_5 = data_3165bf4
            int32_t eax_31
            int32_t ecx_10
            eax_31, ecx_10 = sub_4fc3d0(&data_be1cb8, ecx_9)
            
            if (ebx_5 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_9 = *(eax_31 + (ebx_5 << 2) + 0x30)
            int128_t* eax_32
            
            if (edx_9 != 0)
                eax_32 = sub_4fc1e0(ecx_10, edx_9)
            else
                eax_32 = sub_4fc0d0()
                *(eax_32 + 4) = &data_83f3d3
                *(eax_31 + (ebx_5 << 2) + 0x30) = *(eax_32 + 0x1bc)
            
            int32_t ecx_11 = *eax_32
            *(eax_32 + 0x98) = edi_3
            char* edi_4 = var_108
            *(eax_32 + 0x94) = ecx_11 + 1
            char* const var_f8_1 = &data_83f3d3
            
            if (edi_4 != 0)
                var_f8_1 = edi_4
            
            int32_t ebx_6 = data_3165bf0
            int32_t eax_33
            int32_t ecx_13
            eax_33, ecx_13 = sub_4fc3d0(&data_be1cb8, ecx_9)
            
            if (ebx_6 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_11 = *(eax_33 + (ebx_6 << 2) + 0x30)
            int128_t* eax_34
            
            if (edx_11 != 0)
                eax_34 = sub_4fc1e0(ecx_13, edx_11)
            else
                eax_34 = sub_4fc0d0()
                *(eax_34 + 4) = &data_83f3d3
                *(eax_33 + (ebx_6 << 2) + 0x30) = *(eax_34 + 0x1bc)
            
            *(eax_34 + 0x64) = *eax_34 + 1
            sub_4c4590(var_f8_1)
            *(eax_34 + 0x151) = 1
            int32_t var_c_18 = 0xffffffff
            
            if (edi_4 != 0 && *edi_4 != 0)
                if (*(edi_4 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp1_1 = *(edi_4 - 0xc)
                *(edi_4 - 0xc) -= 1
                
                if (temp1_1 == 1)
                    void* edi_5 = data_26a44e4
                    int32_t esi_11 = *(edi_4 - 4) + 0x10
                    
                    if (edi_5 == 0)
                        sub_4f4250()
                        edi_5 = data_26a44e4
                    
                    int32_t edx_13 = 0
                    int32_t* edi_6
                    
                    while (true)
                        if (esi_11 s<= 1 << (edx_13.b + 4))
                            edi_6 = edi_5 + edx_13 * 0x14
                            break
                        
                        edx_13 += 1
                        
                        if (edx_13 s>= 7)
                            edi_6 = edi_5 + 0x8c
                            break
                    
                    sub_4f4430(&edi_4[0xfffffff0], edi_6, esi_11)
            
            i = i_8 i+ 1
            i_8 = i
        while (i s< sx.d(*(eax_15 + 0x458)))
    
    if ((data_3165c0c.d & 0x100) == 0)
        data_3165c0c.d |= 0x100
        int32_t var_c_19 = 9
        data_3165bec = sub_4f5220(data_307c500, "txtLog")
        int32_t var_c_20 = 0xffffffff
    
    int32_t* eax_42 = data_307c504
    void* eax_43 = *(data_27e7a40 + 0x548)
    
    if (eax_43 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_51 = sx.d(*(*(eax_43 + 0x45844) + 0x1ec2))
    int32_t var_138_3 = eax_51
    char* var_13c_10 = ecx
    int32_t var_c_21 = 0xa
    char* eax_53 = *sub_4c4a50(&var_108, "Round %d / %d")
    char* edi_7 = &data_83f3d3
    
    if (eax_53 != 0)
        edi_7 = eax_53
    
    int32_t ebx_9 = data_3165c04
    int32_t eax_54
    int32_t ecx_18
    eax_54, ecx_18 = sub_4fc3d0(&data_be1cb8, arg1)
    
    if (ebx_9 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_17 = *(eax_54 + (ebx_9 << 2) + 0x30)
    int128_t* eax_56
    
    if (edx_17 != 0)
        eax_56 = sub_4fc1e0(ecx_18, edx_17)
    else
        eax_56 = sub_4fc0d0()
        *(eax_56 + 4) = &data_83f3d3
        *(eax_54 + (ebx_9 << 2) + 0x30) = *(eax_56 + 0x1bc)
    
    *(eax_56 + 0x64) = *eax_56 + 1
    sub_4c4590(edi_7)
    *(eax_56 + 0x151) = 1
    int32_t var_c_22 = 0xffffffff
    char* eax_58 = var_108
    
    if (eax_58 != 0 && *eax_58 != 0)
        if (*(eax_58 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp0_1 = *(eax_58 - 0xc)
        *(eax_58 - 0xc) -= 1
        
        if (temp0_1 == 1)
            void* edi_8 = data_26a44e4
            int32_t esi_16 = *(eax_58 - 4) + 0x10
            
            if (edi_8 == 0)
                sub_4f4250()
                edi_8 = data_26a44e4
            
            int32_t edx_20 = 0
            int32_t* edi_9
            
            while (true)
                if (esi_16 s<= 1 << (edx_20.b + 4))
                    edi_9 = edi_8 + edx_20 * 0x14
                    break
                
                edx_20 += 1
                
                if (edx_20 s>= 7)
                    edi_9 = edi_8 + 0x8c
                    break
            
            sub_4f4430(&eax_58[0xfffffff0], edi_9, esi_16)
    
    int32_t eax_62 = *(eax_4 + 0x43354)
    int32_t esi_18
    
    if (eax_62 != ecx)
        int32_t ebx_14 = data_3165bec
        int32_t eax_75
        int32_t ecx_24
        eax_75, ecx_24 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (ebx_14 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_25 = *(eax_75 + (ebx_14 << 2) + 0x30)
        int128_t* eax_77
        
        if (edx_25 != 0)
            eax_77 = sub_4fc1e0(ecx_24, edx_25)
        else
            eax_77 = sub_4fc0d0()
            *(eax_77 + 4) = &data_83f3d3
            *(eax_75 + (ebx_14 << 2) + 0x30) = *(eax_77 + 0x1bc)
        
        *(eax_77 + 0x64) = *eax_77 + 1
        sub_4c4590(&data_83f3d3)
        *(eax_77 + 0x151) = 1
        esi_18 = arg1
    else
        char* eax_67 = *((*(eax_4 + 0x43358) + (eax_62 << 2)) * 0x1c0 + *(data_27e7a40 + 0x548)
            + 0x2c0c0 + (*(eax_4 + 0x4335c) << 2) + 0x1a8)
        char* const var_120_2 = &data_83f3d3
        
        if (eax_67 != 0)
            var_120_2 = eax_67
        
        esi_18 = arg1
        int32_t edi_10 = data_3165bec
        int32_t eax_68
        int32_t ecx_23
        eax_68, ecx_23 = sub_4fc3d0(&data_be1cb8, esi_18)
        
        if (edi_10 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_23 = *(eax_68 + (edi_10 << 2) + 0x30)
        int128_t* eax_71
        
        if (edx_23 != 0)
            eax_71 = sub_4fc1e0(ecx_23, edx_23)
        else
            eax_71 = sub_4fc0d0()
            *(eax_71 + 4) = &data_83f3d3
            *(eax_68 + (edi_10 << 2) + 0x30) = *(eax_71 + 0x1bc)
        
        *(eax_71 + 0x64) = *eax_71 + 1
        sub_4c4590(var_120_2)
        *(eax_71 + 0x151) = 1
    
    int32_t eax_80 = ecx * 0x700
    void* var_e8 = nullptr
    int32_t ecx_26 = 0
    float var_fc_2
    int32_t ecx_27
    int32_t ebx_16
    int32_t edi_12
    
    while (true)
        if (*(*(data_27e7a40 + 0x548) + eax_80 + 0x2c0c1) != 0)
            edi_12 = data_3161150
            i_10 = fconvert.s(fconvert.t(100f))
            var_e8 = 0xffffffff
            var_fc_2 = fconvert.s(fconvert.t(10f))
            int32_t eax_83
            eax_83, ecx_27 = sub_4fc3d0(&data_be1cb8, esi_18)
            ebx_16 = eax_83
            
            if (edi_12 s< 0x100)
                break
            
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ecx_26 += 1
        eax_80 += 0x1c0
        
        if (ecx_26 s>= 4)
            edi_12 = data_3161150
            i_10 = fconvert.s(fconvert.t(70f))
            var_fc_2 = fconvert.s(fconvert.t(10f))
            int32_t eax_81
            eax_81, ecx_27 = sub_4fc3d0(&data_be1cb8, esi_18)
            ebx_16 = eax_81
            
            if (edi_12 s< 0x100)
                break
            
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    int32_t edx_29 = *(ebx_16 + (edi_12 << 2) + 0x30)
    int32_t* eax_85
    
    if (edx_29 != 0)
        eax_85 = sub_4fc1e0(ecx_27, edx_29)
    else
        eax_85 = sub_4fc0d0()
        eax_85[1] = &data_83f3d3
        *(ebx_16 + (edi_12 << 2) + 0x30) = eax_85[0x6f]
    
    float i_14 = i_10
    int32_t edi_13 = data_3161150
    eax_85[0x1f] = *eax_85 + 1
    eax_85[0x21] = var_fc_2
    eax_85[0x20] = i_14
    int32_t var_e0 = sx.d(*(eax_15 + 0x458))
    int32_t eax_87
    int32_t ecx_30
    eax_87, ecx_30 = sub_4fc3d0(&data_be1cb8, esi_18)
    
    if (edi_13 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_34 = *(eax_87 + (edi_13 << 2) + 0x30)
    int32_t* eax_89
    
    if (edx_34 != 0)
        eax_89 = sub_4fc1e0(ecx_30, edx_34)
    else
        eax_89 = sub_4fc0d0()
        eax_89[1] = &data_83f3d3
        *(eax_87 + (edi_13 << 2) + 0x30) = eax_89[0x6f]
    
    int32_t edi_14 = data_3165c00
    eax_89[0x48] = *eax_89 + 1
    int32_t ecx_34 = var_e0
    eax_89[0x49] = ecx_34
    eax_89[0x4b] = ecx_34
    eax_89[0x4a] = 6 - var_e8
    eax_89[0x4c] = 6 - var_e8
    int32_t eax_90
    int32_t ecx_35
    eax_90, ecx_35 = sub_4fc3d0(&data_be1cb8, esi_18)
    
    if (edi_14 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_37 = *(eax_90 + (edi_14 << 2) + 0x30)
    int128_t* eax_92
    
    if (edx_37 != 0)
        eax_92 = sub_4fc1e0(ecx_35, edx_37)
    else
        eax_92 = sub_4fc0d0()
        *(eax_92 + 4) = &data_83f3d3
        *(eax_90 + (edi_14 << 2) + 0x30) = *(eax_92 + 0x1bc)
    
    eax_92[0x12].d = *eax_92 + 1
    *(eax_92 + 0x124) = 1
    *(eax_92 + 0x12c) = 1
    void* ecx_39 = var_e8
    *(eax_92 + 0x128) = 6 - var_e8
    eax_92[0x13].d = 6 - var_e8
    void* eax_93 = ecx_39
    void* var_f8_2 = ecx_39
    void* ebx_17
    
    if (ecx_39 s< 6)
        int32_t var_50_1 = 0
        
        while (true)
            int32_t ebx_18 = data_3165c00
            int32_t eax_94 = eax_93 - ecx_39
            var_108 = *((eax_93 << 2) + &data_862450)
            int32_t var_78 = var_50_1
            int32_t var_74_1 = eax_94
            
            if (esi_18 == 0)
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                    "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t eax_96 = zx.d(esi_18.w)
            
            if (eax_96 u< data_be1cbc)
                int32_t edx_40 = data_be1cb8
                int32_t ecx_42 = eax_96 * 0x438
                
                if (*(ecx_42 + edx_40 + 0x434) == esi_18)
                    void* eax_97 = eax_96 * 0x438
                    void* esi_22 = eax_97 + edx_40
                    
                    if (ebx_18 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_41 = *(esi_22 + (ebx_18 << 2) + 0x30)
                    int128_t* eax_98
                    
                    if (edx_41 != 0)
                        eax_98 = sub_4fc1e0(ecx_42, edx_41)
                    else
                        eax_98, edx_41 = sub_4fc0d0()
                        *(eax_98 + 4) = &data_83f3d3
                        *(esi_22 + (ebx_18 << 2) + 0x30) = *(eax_98 + 0x1bc)
                    
                    char* esi_23 = *(esi_22 + 4)
                    
                    if (*(esi_23 + 4) != 0x1e)
                        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                            "UIDefGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*esi_23 == 0)
                        sub_520800(eax_98, edx_41.b, esi_23, 0)
                        
                        if (*esi_23 == 0)
                            sub_509540(esi_23)
                    
                    int32_t esi_24 = *(sub_4f7720(&var_78, ebx_18 * 0x118 + ***esi_23, eax_98) + 0x434)
                    int32_t eax_104
                    
                    if ((data_3165c0c.d & 0x200) != 0)
                        eax_104 = data_3165be8
                    else
                        data_3165c0c.d |= 0x200
                        int32_t var_c_23 = 0xb
                        eax_104 = sub_4f5220(data_307c50c, "txtPhase")
                        data_3165be8 = eax_104
                        int32_t var_c_24 = 0xffffffff
                    
                    void* const edi_16
                    
                    if (var_108 - 1 u<= 9)
                        switch (var_108)
                            case 1
                                edi_16 = &data_85ce50
                                goto label_45bd97
                            case 2, 8
                                edi_16 = &data_85ce54
                                goto label_45bd97
                            case 3, 9
                                edi_16 = &data_85ce58
                                goto label_45bd97
                            case 4
                                edi_16 = &data_85ce60
                                goto label_45bd97
                            case 5
                                edi_16 = &data_85ce64
                                goto label_45bd97
                            case 7
                                edi_16 = &data_85ce5c
                                goto label_45bd97
                            case 0xa
                                edi_16 = &data_85ce4c
                            label_45bd97:
                                
                                if (esi_24 == 0)
                                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x45, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                uint32_t ecx_49 = zx.d(esi_24.w)
                                
                                if (ecx_49 u< data_be1cbc)
                                    int32_t ebx_21 = data_be1cb8
                                    
                                    if (*(ecx_49 * 0x438 + ebx_21 + 0x434) == esi_24)
                                        int32_t ecx_50 = ecx_49 * 0x438
                                        int32_t ebx_22 = ebx_21 + ecx_50
                                        
                                        if (eax_104 s>= 0x100)
                                            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, 
                                                "UIDef.cpp", 0x518, "UIStateElementGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t edx_46 = *(ebx_22 + (eax_104 << 2) + 0x30)
                                        int128_t* eax_105
                                        
                                        if (edx_46 != 0)
                                            eax_105 = sub_4fc1e0(ecx_50, edx_46)
                                        else
                                            eax_105 = sub_4fc0d0()
                                            *(eax_105 + 4) = &data_83f3d3
                                            *(ebx_22 + ((eax_104 + 0xc) << 2)) = *(eax_105 + 0x1bc)
                                        
                                        *(eax_105 + 0x64) = *eax_105 + 1
                                        sub_4c4590(edi_16)
                                        *(eax_105 + 0x151) = 1
                                        int32_t var_ec_1 = 0
                                        
                                        if (*(eax_15 + 0x458) s> 0)
                                            while (true)
                                                if ((data_3165c0c.d & 0x400) == 0)
                                                    data_3165c0c.d |= 0x400
                                                    int32_t var_c_25 = 0xc
                                                    data_3165be4 = sub_4f5220(eax_42, "bg")
                                                    int32_t var_c_26 = 0xffffffff
                                                
                                                int32_t esi_27 = data_3161150
                                                int32_t var_58 = var_ec_1
                                                int32_t var_54_1 = eax_94
                                                
                                                if (eax_96 u< data_be1cbc)
                                                    int32_t ecx_55 = data_be1cb8
                                                    
                                                    if (*(eax_96 * 0x438 + ecx_55 + 0x434) == arg1)
                                                        void* ebx_24 = eax_97 + ecx_55
                                                        
                                                        if (esi_27 s>= 0x100)
                                                            sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                "UIStateElementGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_4c5a30()
                                                            noreturn
                                                        
                                                        int32_t edx_50 =
                                                            *(ebx_24 + (esi_27 << 2) + 0x30)
                                                        int128_t* eax_111
                                                        
                                                        if (edx_50 != 0)
                                                            eax_111 = sub_4fc1e0(ecx_55, edx_50)
                                                        else
                                                            eax_111, edx_50 = sub_4fc0d0()
                                                            *(eax_111 + 4) = &data_83f3d3
                                                            *(ebx_24 + (esi_27 << 2) + 0x30) =
                                                                *(eax_111 + 0x1bc)
                                                        
                                                        char* ebx_25 = *(ebx_24 + 4)
                                                        
                                                        if (*(ebx_25 + 4) != 0x1e)
                                                            sub_4c5870(
                                                                "ptr->assetType == ASSET_TYPE_UI", 
                                                                &data_83f3d3, "UIDef.cpp", 0xfd, 
                                                                "UIDefGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_4c5a30()
                                                            noreturn
                                                        
                                                        if (*ebx_25 == 0)
                                                            sub_520800(eax_111, edx_50.b, ebx_25, 0)
                                                            
                                                            if (*ebx_25 == 0)
                                                                sub_509540(ebx_25)
                                                        
                                                        ebx_17 = *(sub_4f7720(&var_58, 
                                                            esi_27 * 0x118 + ***ebx_25, eax_111) + 0x434)
                                                        void* var_10c_1 = ebx_17
                                                        
                                                        if (ebx_17 == 0)
                                                            sub_4c5870("id != DATAID_NULL", 
                                                                &data_83f3d3, 
                                                                "c:\ax2010\engine\DataArray.h", 0x45, 
                                                                "DataArray<struct UIState>::DataArrayGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_4c5a30()
                                                            noreturn
                                                        
                                                        uint32_t ecx_61 = zx.d(ebx_17.w)
                                                        
                                                        if (ecx_61 u< data_be1cbc)
                                                            int32_t edx_52 = data_be1cb8
                                                            
                                                            if (*(ecx_61 * 0x438 + edx_52 + 0x434)
                                                                    == ebx_17)
                                                                void* eax_119 = ecx_61 * 0x438
                                                                int32_t* esi_30 =
                                                                    *(eax_119 + edx_52 + 4)
                                                                
                                                                if (esi_30[1] != 0x1e)
                                                                    sub_4c5870(
                                                                        "ptr->assetType == ASSET_TYPE_UI", 
                                                                        &data_83f3d3, "UIDef.cpp", 0xfd, 
                                                                        "UIDefGet")
                                                                    
                                                                    if (IsDebuggerPresent() == 1)
                                                                        breakpoint
                                                                    
                                                                    sub_4c5a30()
                                                                    noreturn
                                                                
                                                                if (*esi_30 == 0)
                                                                    sub_520800(eax_119, edx_52.b, esi_30, 0)
                                                                    
                                                                    if (*esi_30 == 0)
                                                                        sub_509540(esi_30)
                                                                
                                                                void** edx_53 = *esi_30
                                                                void* edi_18 = *edx_53
                                                                float i_1 = 0f
                                                                
                                                                if (*(edi_18 + 4) s> 0)
                                                                    do
                                                                        int32_t var_138_5 = 1
                                                                        edx_53 =
                                                                            sub_4fa4e0(ebx_17, i_1, edx_53.b)
                                                                        i_1 += 1
                                                                    while (i_1 s< *(edi_18 + 4))
                                                                
                                                                if (ecx_61 u< data_be1cbc)
                                                                    int32_t ecx_63 = data_be1cb8
                                                                    
                                                                    if (*(ecx_61 * 0x438 + ecx_63 + 0x434)
                                                                            == ebx_17)
                                                                        int32_t eax_124 = data_3165be4
                                                                        void* edi_20 = eax_119 + ecx_63
                                                                        
                                                                        if (eax_124 s>= 0x100)
                                                                            sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                "UIStateElementGet")
                                                                            
                                                                            if (IsDebuggerPresent() == 1)
                                                                                breakpoint
                                                                            
                                                                            sub_4c5a30()
                                                                            noreturn
                                                                        
                                                                        int32_t edx_54 =
                                                                            *(edi_20 + (eax_124 << 2) + 0x30)
                                                                        int128_t* eax_125
                                                                        
                                                                        if (edx_54 != 0)
                                                                            eax_125 = sub_4fc1e0(ecx_63, edx_54)
                                                                        else
                                                                            eax_125 = sub_4fc0d0()
                                                                            *(eax_125 + 4) = &data_83f3d3
                                                                            *(edi_20 + ((eax_124 + 0xc) << 2)) =
                                                                                *(eax_125 + 0x1bc)
                                                                        
                                                                        *eax_125 += 1
                                                                        void* eax_126 = data_27e7a40
                                                                        int16_t var_e3_1 = 0x3232
                                                                        char var_e1_1 = 0xff
                                                                        int32_t edx_55 = 0x32.d
                                                                        i_10 = -nanf
                                                                        char* esi_32 = &(*(eax_126 + 0x548))[
                                                                            (var_ec_1 + (ecx << 2)) * 0x1c0
                                                                            + 0x2c0c0]
                                                                        
                                                                        if (var_f8_2 s>= 0)
                                                                            int32_t eax_130 =
                                                                                *(esi_32 + (var_f8_2 << 2) + 0x1a8)
                                                                            char var_d0_1
                                                                            
                                                                            if (eax_130 != 0)
                                                                                var_d0_1 = 0
                                                                            
                                                                            if (eax_130 == 0 || *eax_130 == 0)
                                                                                var_d0_1 = 1
                                                                            
                                                                            float edx_57 = data_3165bfc
                                                                            char* var_138_6 = var_d0_1.d
                                                                            sub_4fa4e0(ebx_17, edx_57, edx_57.b)
                                                                        
                                                                        if (var_f8_2 + 1 u> 6)
                                                                            sub_4c5870("Halt", &data_83f3d3, 
                                                                                "..\code\RFTGClient.cpp", 0x6251, 
                                                                                "UILogUpdate")
                                                                            
                                                                            if (IsDebuggerPresent() == 1)
                                                                                breakpoint
                                                                            
                                                                            sub_4c5a30()
                                                                            noreturn
                                                                        
                                                                        int128_t* i_3
                                                                        char* edx_56
                                                                        bool cond:17_1
                                                                        bool cond:19_1
                                                                        
                                                                        switch (var_f8_2)
                                                                            case nullptr
                                                                                if (esi_32[0xc] == 1)
                                                                                    int32_t* esi_70
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x80000) != 0)
                                                                                        esi_70 = eax_42
                                                                                    else
                                                                                        data_3165c0c.d |= 0x80000
                                                                                        esi_70 = eax_42
                                                                                        int32_t var_c_47 = 0x17
                                                                                        data_3165bc0 =
                                                                                            sub_4f5220(esi_70, "imgExplore")
                                                                                        int32_t var_c_48 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x100000) == 0)
                                                                                        data_3165c0c.d |= 0x100000
                                                                                        int32_t var_c_49 = 0x18
                                                                                        data_3165bbc =
                                                                                            sub_4f5220(esi_70, "txtExploreDraw")
                                                                                        int32_t var_c_50 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x200000) == 0)
                                                                                        data_3165c0c.d |= 0x200000
                                                                                        int32_t var_c_51 = 0x19
                                                                                        data_3165bb8 =
                                                                                            sub_4f5220(esi_70, "txtExploreKeep")
                                                                                        int32_t var_c_52 = 0xffffffff
                                                                                    
                                                                                    int128_t* eax_220 = sub_4f6e90(
                                                                                        data_3165bc0, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_220 += 1
                                                                                    int128_t* eax_222 = sub_4f6e90(
                                                                                        data_3165bbc, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_222 += 1
                                                                                    int128_t* eax_224 = sub_4f6e90(
                                                                                        data_3165bb8, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_224 += 1
                                                                                    *(esi_32 + 0x14)
                                                                                    int32_t var_c_53 = 0x1a
                                                                                    char* var_a0
                                                                                    char* eax_227 = *sub_4c4ab0(&var_a0)
                                                                                    char* var_120_7 = &data_83f3d3
                                                                                    
                                                                                    if (eax_227 != 0)
                                                                                        var_120_7 = eax_227
                                                                                    
                                                                                    int128_t* eax_229 = sub_4f6e90(
                                                                                        data_3165bbc, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *(eax_229 + 0x64) = *eax_229 + 1
                                                                                    sub_4c4590(var_120_7)
                                                                                    *(eax_229 + 0x151) = 1
                                                                                    int32_t var_c_54 = 0xffffffff
                                                                                    char* eax_233 = var_a0
                                                                                    
                                                                                    if (eax_233 != 0 && *eax_233 != 0)
                                                                                        void* eax_235 = sub_4c4060(&var_a0)
                                                                                        int32_t temp2_1 = *(eax_235 + 4)
                                                                                        *(eax_235 + 4) -= 1
                                                                                        
                                                                                        if (temp2_1 == 1)
                                                                                            int32_t esi_82 = *(eax_235 + 0xc) + 0x10
                                                                                            sub_4f4430(eax_235, sub_4f4380(esi_82), 
                                                                                                esi_82)
                                                                                    
                                                                                    *(esi_32 + 0x18)
                                                                                    int32_t var_c_55 = 0x1b
                                                                                    int128_t* i_9
                                                                                    char* eax_240 = *sub_4c4ab0(&i_9)
                                                                                    char* var_120_8 = &data_83f3d3
                                                                                    
                                                                                    if (eax_240 != 0)
                                                                                        var_120_8 = eax_240
                                                                                    
                                                                                    int128_t* eax_242 = sub_4f6e90(
                                                                                        data_3165bb8, 
                                                                                        sub_4fc3d0(&data_be1cb8, var_10c_1), 
                                                                                        &data_83f3d3)
                                                                                    *(eax_242 + 0x64) = *eax_242 + 1
                                                                                    sub_4c4590(var_120_8)
                                                                                    *(eax_242 + 0x151) = 1
                                                                                    int32_t var_c_56 = 0xffffffff
                                                                                    i_3 = i_9
                                                                                    
                                                                                    if (i_3 != 0 && *i_3 != 0)
                                                                                        i_3 = sub_4c4060(&i_9)
                                                                                        int32_t temp5_1 = *(i_3 + 4)
                                                                                        *(i_3 + 4) -= 1
                                                                                        
                                                                                        if (temp5_1 == 1)
                                                                                            int32_t esi_88 = *(i_3 + 0xc) + 0x10
                                                                                            sub_4f4430(i_3, sub_4f4380(esi_88), 
                                                                                                esi_88)
                                                                                    
                                                                                    ebx_17 = var_10c_1
                                                                                
                                                                                float edx_89 = data_3165bf8
                                                                                i_3.b = esi_32[0xf] == 0
                                                                                uint32_t var_138_12 = zx.d(i_3.b)
                                                                                sub_4fa4e0(ebx_17, edx_89, edx_89.b)
                                                                                
                                                                                if (esi_32[0xe] != 0)
                                                                                label_45e31f:
                                                                                    int32_t* eax_493 = sub_4f6e90(
                                                                                        data_3165be4, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    float i_16 = i_10
                                                                                    eax_493[0x22] = *eax_493 + 1
                                                                                    eax_493[0x24] = edx_55
                                                                                    eax_493[0x23] = i_16
                                                                                else
                                                                                    cond:17_1 = esi_32[0xd] == 0
                                                                                label_45e302:
                                                                                    
                                                                                    if (not(cond:17_1))
                                                                                        goto label_45e31f
                                                                            case 1
                                                                                if (esi_32[0x1c] == 1)
                                                                                    if ((data_3165c0c.d & &__dos_header)
                                                                                            == 0)
                                                                                        data_3165c0c.d |= &__dos_header
                                                                                        int32_t var_c_57 = 0x1c
                                                                                        data_3165bb4 =
                                                                                            sub_4f5220(data_307c504, "tblDevelop")
                                                                                        int32_t var_c_58 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & &data_800000)
                                                                                            == 0)
                                                                                        data_3165c0c.d |= &data_800000
                                                                                        int32_t var_c_59 = 0x1d
                                                                                        data_3165bb0 =
                                                                                            sub_4f5220(data_307c508, "txtDevelop")
                                                                                        int32_t var_c_60 = 0xffffffff
                                                                                    
                                                                                    int128_t* eax_252 = sub_4f6e90(
                                                                                        data_3165bb4, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_252 += 1
                                                                                    int32_t edx_91 = *(esi_32 + 0x28)
                                                                                    int128_t* eax_254 = sub_4f6e90(
                                                                                        data_3165bb4, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    eax_254[0x12].d = *eax_254 + 1
                                                                                    *(eax_254 + 0x124) = edx_91
                                                                                    *(eax_254 + 0x12c) = edx_91
                                                                                    *(eax_254 + 0x128) = 1
                                                                                    eax_254[0x13].d = 1
                                                                                    int32_t i_6 = 0
                                                                                    
                                                                                    if (*(esi_32 + 0x28) s> 0)
                                                                                        int32_t var_34_1 = 0
                                                                                        void* var_110_3 = &esi_32[0x20]
                                                                                        int32_t i_2
                                                                                        
                                                                                        do
                                                                                            char* edi_62 = data_3165bb4
                                                                                            int32_t i_12 = i_6
                                                                                            int32_t var_7c_1 = var_34_1
                                                                                            var_108 = edi_62
                                                                                            void* eax_257 =
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                            int128_t* eax_258 = sub_4f6e90(edi_62, 
                                                                                                eax_257, &data_83f3d3)
                                                                                            int32_t eax_259 =
                                                                                                sub_4f4890(*(eax_257 + 4))
                                                                                            int32_t edi_65 = *(sub_4f7720(&i_12, 
                                                                                                var_108 * 0x118 + *eax_259, eax_258)
                                                                                                + 0x434)
                                                                                            *(*var_110_3 * 0x128 + 0x2691caf)
                                                                                            int32_t var_c_61 = 0x1e
                                                                                            char* var_a8
                                                                                            char* eax_265 = *sub_4c4ab0(&var_a8)
                                                                                            char* var_120_9 = &data_83f3d3
                                                                                            
                                                                                            if (eax_265 != 0)
                                                                                                var_120_9 = eax_265
                                                                                            
                                                                                            int128_t* eax_267 = sub_4f6e90(
                                                                                                data_3165bb0, 
                                                                                                sub_4fc3d0(&data_be1cb8, edi_65), 
                                                                                                &data_83f3d3)
                                                                                            *(eax_267 + 0x64) = *eax_267 + 1
                                                                                            sub_4c4590(var_120_9)
                                                                                            *(eax_267 + 0x151) = 1
                                                                                            int32_t var_c_62 = 0xffffffff
                                                                                            char* eax_269 = var_a8
                                                                                            
                                                                                            if (eax_269 != 0 && *eax_269 != 0)
                                                                                                int32_t* eax_271 = sub_4c4060(&var_a8)
                                                                                                int32_t temp3_1 = eax_271[1]
                                                                                                eax_271[1] -= 1
                                                                                                
                                                                                                if (temp3_1 == 1)
                                                                                                    int32_t esi_102 = eax_271[3] + 0x10
                                                                                                    sub_4f4430(eax_271, 
                                                                                                        sub_4f4380(esi_102), esi_102)
                                                                                            
                                                                                            var_110_3 += 4
                                                                                            ebx_17 = var_10c_1
                                                                                            i_2 = i_6 + 1
                                                                                            i_6 = i_2
                                                                                        while (i_2 s< *(esi_32 + 0x28))
                                                                                
                                                                                edx_56.b = esi_32[0x1e] == 0
                                                                                uint32_t var_138_14 = zx.d(edx_56.b)
                                                                                sub_4fa4e0(ebx_17, data_3165bf8, 
                                                                                    edx_56.b)
                                                                                cond:19_1 = esi_32[0x1d] == 0
                                                                            label_45cf5d:
                                                                                
                                                                                if (not(cond:19_1))
                                                                                    int32_t* eax_278 = sub_4f6e90(
                                                                                        data_3165be4, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    float i_15 = i_10
                                                                                    eax_278[0x22] = *eax_278 + 1
                                                                                    eax_278[0x23] = i_15
                                                                                    eax_278[0x24] = edx_55
                                                                            case 2
                                                                                if (esi_32[0x2c] == 1)
                                                                                    if ((data_3165c0c.d & 0x1000000) == 0)
                                                                                        data_3165c0c.d |= 0x1000000
                                                                                        int32_t var_c_63 = 0x1f
                                                                                        data_3165bac =
                                                                                            sub_4f5220(data_307c504, "tblSettle")
                                                                                        int32_t var_c_64 = 0xffffffff
                                                                                    
                                                                                    int128_t* eax_282 = sub_4f6e90(
                                                                                        data_3165bac, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_282 += 1
                                                                                    int32_t edx_102 = *(esi_32 + 0x50)
                                                                                    i_3 = sub_4f6e90(data_3165bac, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    i_3[0x12].d = *i_3 + 1
                                                                                    *(i_3 + 0x124) = edx_102
                                                                                    *(i_3 + 0x12c) = edx_102
                                                                                    *(i_3 + 0x128) = 1
                                                                                    i_3[0x13].d = 1
                                                                                    int128_t* i_7 = nullptr
                                                                                    
                                                                                    if (*(esi_32 + 0x50) s> 0)
                                                                                        int32_t var_3c_1 = 0
                                                                                        void* var_120_10 = &esi_32[0x30]
                                                                                        
                                                                                        do
                                                                                            char* edi_74 = data_3165bac
                                                                                            int128_t* i_11 = i_7
                                                                                            int32_t var_84_1 = var_3c_1
                                                                                            var_108 = edi_74
                                                                                            void* eax_286 =
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                            int32_t* eax_287 = sub_4f6e90(edi_74, 
                                                                                                eax_286, &data_83f3d3)
                                                                                            int32_t eax_288 =
                                                                                                sub_4f4890(*(eax_286 + 4))
                                                                                            int32_t ebx_47 = *(sub_4f7720(&i_11, 
                                                                                                var_108 * 0x118 + *eax_288, eax_287)
                                                                                                + 0x434)
                                                                                            void* eax_292
                                                                                            char edx_109
                                                                                            eax_292, edx_109 = sub_4f4890(
                                                                                                *(sub_4fc3d0(&data_be1cb8, ebx_47) + 4))
                                                                                            float j = 0f
                                                                                            
                                                                                            if (*(eax_292 + 4) s> 0)
                                                                                                do
                                                                                                    int32_t var_138_15 = 1
                                                                                                    edx_109 = sub_4fa4e0(ebx_47, j, edx_109)
                                                                                                    j += 1
                                                                                                while (j s< *(eax_292 + 4))
                                                                                            
                                                                                            void* edi_80 =
                                                                                                *var_120_10 * 0x128 + &data_2691ca8
                                                                                            void* var_110_4 = edi_80
                                                                                            
                                                                                            if ((*(edi_80 + 0x10) & 2) != 0)
                                                                                                if ((data_3165c0c.d & 0x2000000) == 0)
                                                                                                    data_3165c0c.d |= 0x2000000
                                                                                                    int32_t var_c_65 = 0x20
                                                                                                    data_3165ba8 =
                                                                                                        sub_4f5220(data_307c518, "imgHalo")
                                                                                                    int32_t var_c_66 = 0xffffffff
                                                                                                
                                                                                                int128_t* eax_297 = sub_4f6e90(
                                                                                                    data_3165ba8, 
                                                                                                    sub_4fc3d0(&data_be1cb8, ebx_47), 
                                                                                                    &data_83f3d3)
                                                                                                *eax_297 += 1
                                                                                                int32_t eax_299 =
                                                                                                    sx.d(*(var_110_4 + 0xe)) - 1
                                                                                                
                                                                                                if (eax_299 u> 4)
                                                                                                    sub_4c5870("Halt", &data_83f3d3, 
                                                                                                        "..\code\RFTGClient.cpp", 0x1a19, 
                                                                                                        "GetHaloTexture")
                                                                                                    
                                                                                                    if (IsDebuggerPresent() == 1)
                                                                                                        breakpoint
                                                                                                    
                                                                                                    sub_4c5a30()
                                                                                                    noreturn
                                                                                                
                                                                                                int32_t var_11c_3
                                                                                                
                                                                                                switch (eax_299)
                                                                                                    case 0
                                                                                                        var_11c_3 = data_307bd2c
                                                                                                    case 1
                                                                                                        var_11c_3 = data_307bd20
                                                                                                    case 2
                                                                                                        var_11c_3 = data_307bd24
                                                                                                    case 3
                                                                                                        var_11c_3 = data_307bd28
                                                                                                    case 4
                                                                                                        var_11c_3 = data_307bd30
                                                                                                
                                                                                                int128_t* eax_303 = sub_4f6e90(
                                                                                                    data_3165ba8, 
                                                                                                    sub_4fc3d0(&data_be1cb8, ebx_47), 
                                                                                                    &data_83f3d3)
                                                                                                edi_80 = var_110_4
                                                                                                *(eax_303 + 0x94) = *eax_303 + 1
                                                                                                *(eax_303 + 0x98) = var_11c_3
                                                                                            
                                                                                            if ((data_3165c0c.d & 0x4000000) == 0)
                                                                                                data_3165c0c.d |= 0x4000000
                                                                                                int32_t var_c_67 = 0x21
                                                                                                data_3165ba4 =
                                                                                                    sub_4f5220(data_307c518, "imgWorld")
                                                                                                int32_t var_c_68 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165c0c.d & 0x8000000) == 0)
                                                                                                data_3165c0c.d |= 0x8000000
                                                                                                int32_t var_c_69 = 0x22
                                                                                                data_3165ba0 =
                                                                                                    sub_4f5220(data_307c518, "txtWorld")
                                                                                                int32_t var_c_70 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165c0c.d & 0x10000000) == 0)
                                                                                                data_3165c0c.d |= 0x10000000
                                                                                                int32_t var_c_71 = 0x23
                                                                                                data_3165b9c =
                                                                                                    sub_4f5220(data_307c518, "txtWorldMil")
                                                                                                int32_t var_c_72 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165c0c.d & 0x20000000) == 0)
                                                                                                data_3165c0c.d |= 0x20000000
                                                                                                int32_t var_c_73 = 0x24
                                                                                                data_3165b98 =
                                                                                                    sub_4f5220(data_307c518, "txtWorldProd")
                                                                                                int32_t var_c_74 = 0xffffffff
                                                                                            
                                                                                            char eax_309 = (*(edi_80 + 0x10)).b
                                                                                            int32_t var_11c_4
                                                                                            
                                                                                            if ((eax_309 & 1) != 0)
                                                                                                var_11c_4 = data_3165b9c
                                                                                            else if (*(edi_80 + 6) == 2
                                                                                                    || (eax_309 & 2) != 0
                                                                                                    || *(edi_80 + 0xe) == 0)
                                                                                                var_11c_4 = data_3165ba0
                                                                                            else
                                                                                                var_11c_4 = data_3165b98
                                                                                            
                                                                                            int128_t* eax_312 = sub_4f6e90(
                                                                                                data_3165ba4, 
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_47), 
                                                                                                &data_83f3d3)
                                                                                            *eax_312 += 1
                                                                                            int128_t* eax_314 = sub_4f6e90(
                                                                                                var_11c_4, 
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_47), 
                                                                                                &data_83f3d3)
                                                                                            *eax_314 += 1
                                                                                            char* eax_316 = sub_427a90(var_110_4)
                                                                                            int32_t edi_88 = data_3165ba4
                                                                                            var_108 = eax_316
                                                                                            int128_t* eax_318 = sub_4f6e90(edi_88, 
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_47), 
                                                                                                &data_83f3d3)
                                                                                            char* edx_117 = var_108
                                                                                            *(eax_318 + 0x94) = *eax_318 + 1
                                                                                            *(eax_318 + 0x98) = edx_117
                                                                                            *(var_110_4 + 7)
                                                                                            int32_t var_c_75 = 0x25
                                                                                            char* var_cc
                                                                                            char* eax_322 = *sub_4c4ab0(&var_cc)
                                                                                            char* var_110_5 = &data_83f3d3
                                                                                            
                                                                                            if (eax_322 != 0)
                                                                                                var_110_5 = eax_322
                                                                                            
                                                                                            int128_t* eax_324 = sub_4f6e90(
                                                                                                var_11c_4, 
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_47), 
                                                                                                &data_83f3d3)
                                                                                            *(eax_324 + 0x64) = *eax_324 + 1
                                                                                            sub_4c4590(var_110_5)
                                                                                            *(eax_324 + 0x151) = 1
                                                                                            int32_t var_c_76 = 0xffffffff
                                                                                            char* eax_326 = var_cc
                                                                                            
                                                                                            if (eax_326 != 0 && *eax_326 != 0)
                                                                                                void* eax_328 = sub_4c4060(&var_cc)
                                                                                                int32_t temp7_1 = *(eax_328 + 4)
                                                                                                *(eax_328 + 4) -= 1
                                                                                                
                                                                                                if (temp7_1 == 1)
                                                                                                    int32_t esi_130 =
                                                                                                        *(eax_328 + 0xc) + 0x10
                                                                                                    sub_4f4430(eax_328, 
                                                                                                        sub_4f4380(esi_130), esi_130)
                                                                                            
                                                                                            var_120_10 += 8
                                                                                            ebx_17 = var_10c_1
                                                                                            i_3 = i_7 + 1
                                                                                            i_7 = i_3
                                                                                        while (i_3 s< *(esi_32 + 0x50))
                                                                                
                                                                                float edx_119 = data_3165bf8
                                                                                i_3.b = esi_32[0x2e] == 0
                                                                                uint32_t var_138_17 = zx.d(i_3.b)
                                                                                sub_4fa4e0(ebx_17, edx_119, edx_119.b)
                                                                                cond:17_1 = esi_32[0x2d] == 0
                                                                                goto label_45e302
                                                                            case 3
                                                                                if (esi_32[0x118] == 1)
                                                                                    if ((data_3165c0c.d & 0x40000000) == 0)
                                                                                        data_3165c0c.d |= 0x40000000
                                                                                        int32_t var_c_77 = 0x26
                                                                                        data_3165b94 =
                                                                                            sub_4f5220(eax_42, "imgTrade")
                                                                                        int32_t var_c_78 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x80000000) == 0)
                                                                                        data_3165c0c.d |= 0x80000000
                                                                                        int32_t var_c_79 = 0x27
                                                                                        data_3165b90 =
                                                                                            sub_4f5220(eax_42, "txtTrade")
                                                                                        int32_t var_c_80 = 0xffffffff
                                                                                    
                                                                                    int128_t* eax_337 = sub_4f6e90(
                                                                                        data_3165b94, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_337 += 1
                                                                                    int128_t* eax_339 = sub_4f6e90(
                                                                                        data_3165b90, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_339 += 1
                                                                                    int32_t eax_341 = *(esi_32 + 0x11c) - 1
                                                                                    
                                                                                    if (eax_341 u> 4)
                                                                                        sub_4c5870("Halt", &data_83f3d3, 
                                                                                            "..\code\RFTGClient.cpp", 0x4205, 
                                                                                            "GoodIconGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t var_11c_5
                                                                                    
                                                                                    switch (eax_341)
                                                                                        case 0
                                                                                            var_11c_5 = data_307c290
                                                                                        case 1
                                                                                            var_11c_5 = data_307c294
                                                                                        case 2
                                                                                            var_11c_5 = data_307c298
                                                                                        case 3
                                                                                            var_11c_5 = data_307c29c
                                                                                        case 4
                                                                                            var_11c_5 = data_307c2a0
                                                                                    
                                                                                    int128_t* eax_344 = sub_4f6e90(
                                                                                        data_3165b94, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *(eax_344 + 0x94) = *eax_344 + 1
                                                                                    *(eax_344 + 0x98) = var_11c_5
                                                                                    *(esi_32 + 0x120)
                                                                                    int32_t var_c_81 = 0x28
                                                                                    char* var_b4
                                                                                    char* eax_348 = *sub_4c4ab0(&var_b4)
                                                                                    char* var_120_11 = &data_83f3d3
                                                                                    
                                                                                    if (eax_348 != 0)
                                                                                        var_120_11 = eax_348
                                                                                    
                                                                                    int128_t* eax_350 = sub_4f6e90(
                                                                                        data_3165b90, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *(eax_350 + 0x64) = *eax_350 + 1
                                                                                    sub_4c4590(var_120_11)
                                                                                    *(eax_350 + 0x151) = 1
                                                                                    int32_t var_c_82 = 0xffffffff
                                                                                    char* eax_352 = var_b4
                                                                                    
                                                                                    if (eax_352 != 0 && *eax_352 != 0)
                                                                                        int32_t* eax_354 = sub_4c4060(&var_b4)
                                                                                        int32_t temp4_1 = eax_354[1]
                                                                                        eax_354[1] -= 1
                                                                                        
                                                                                        if (temp4_1 == 1)
                                                                                            int32_t esi_143 = eax_354[3] + 0x10
                                                                                            sub_4f4430(eax_354, 
                                                                                                sub_4f4380(esi_143), esi_143)
                                                                                    
                                                                                    ebx_17 = var_10c_1
                                                                                
                                                                                edx_56.b = esi_32[0x11a] == 0
                                                                                uint32_t var_138_19 = zx.d(edx_56.b)
                                                                                sub_4fa4e0(ebx_17, data_3165bf8, 
                                                                                    edx_56.b)
                                                                                cond:19_1 = esi_32[0x119] == 0
                                                                                goto label_45cf5d
                                                                            case 4
                                                                                if (esi_32[0x124] == 1)
                                                                                    if ((data_3165b8c.b & 1) == 0)
                                                                                        data_3165b8c |= 1
                                                                                        int32_t var_c_83 = 0x29
                                                                                        data_3165b88 =
                                                                                            sub_4f5220(eax_42, "tblConsume")
                                                                                        int32_t var_c_84 = 0xffffffff
                                                                                    
                                                                                    int128_t* eax_362 = sub_4f6e90(
                                                                                        data_3165b88, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_362 += 1
                                                                                    int32_t ecx_138
                                                                                    ecx_138.b = *(esi_32 + 0x130) s> 0
                                                                                    int32_t edx_124
                                                                                    edx_124.b = *(esi_32 + 0x12c) s> 0
                                                                                    int32_t eax_363
                                                                                    eax_363.b = *(esi_32 + 0x128) s> 0
                                                                                    int32_t ecx_140 =
                                                                                        ecx_138 + edx_124 + eax_363
                                                                                    i_3 = sub_4f6e90(data_3165b88, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    i_3[0x12].d = *i_3 + 1
                                                                                    *(i_3 + 0x124) = ecx_140
                                                                                    *(i_3 + 0x128) = 1
                                                                                    *(i_3 + 0x12c) = ecx_140
                                                                                    i_3[0x13].d = 1
                                                                                    int128_t* i_5 = nullptr
                                                                                    
                                                                                    if (ecx_140 s> 0)
                                                                                        int32_t var_2c_1 = 0
                                                                                        
                                                                                        do
                                                                                            if ((data_3165b8c.b & 2) == 0)
                                                                                                data_3165b8c |= 2
                                                                                                int32_t var_c_85 = 0x2a
                                                                                                data_3165b84 =
                                                                                                    sub_4f5220(data_307c514, "imgVP")
                                                                                                int32_t var_c_86 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165b8c.b & 4) == 0)
                                                                                                data_3165b8c |= 4
                                                                                                int32_t var_c_87 = 0x2b
                                                                                                data_3165b80 =
                                                                                                    sub_4f5220(data_307c514, "imgCard")
                                                                                                int32_t var_c_88 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165b8c.b & 8) == 0)
                                                                                                data_3165b8c |= 8
                                                                                                int32_t var_c_89 = 0x2c
                                                                                                data_3165b7c =
                                                                                                    sub_4f5220(data_307c514, "imgPrestige")
                                                                                                int32_t var_c_90 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165b8c.b & 0x10) == 0)
                                                                                                data_3165b8c |= 0x10
                                                                                                int32_t var_c_91 = 0x2d
                                                                                                data_3165b78 =
                                                                                                    sub_4f5220(data_307c514, "txtCard")
                                                                                                int32_t var_c_92 = 0xffffffff
                                                                                            
                                                                                            int32_t edx_127 = data_3165b88
                                                                                            int32_t var_64_1 = var_2c_1
                                                                                            int128_t* i_13 = i_5
                                                                                            void* eax_371 =
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                            int32_t* eax_372 = sub_4f6e90(edx_127, 
                                                                                                eax_371, &data_83f3d3)
                                                                                            void* eax_375
                                                                                            char edx_131
                                                                                            eax_375, edx_131 = sub_4f7720(&i_13, 
                                                                                                edx_127 * 0x118
                                                                                                    + *sub_4f4890(*(eax_371 + 4)), 
                                                                                                eax_372)
                                                                                            int32_t edi_106 = *(eax_375 + 0x434)
                                                                                            int32_t var_138_20 = 1
                                                                                            char edx_132 = sub_4fa4e0(edi_106, 
                                                                                                data_3165b7c, edx_131)
                                                                                            int32_t var_140_1 = 1
                                                                                            sub_4fa4e0(edi_106, data_3165b84, 
                                                                                                edx_132)
                                                                                            float edx_133 = data_3165b80
                                                                                            int32_t var_148_1 = 1
                                                                                            char edx_134 =
                                                                                                sub_4fa4e0(edi_106, edx_133, edx_133.b)
                                                                                            void* ebx_55
                                                                                            bool cond:28_1
                                                                                            
                                                                                            if (*(esi_32 + 0x12c) != 0 && i_5 == 0)
                                                                                                int32_t var_138_21 = 0
                                                                                                sub_4fa4e0(edi_106, data_3165b80, 
                                                                                                    edx_134)
                                                                                                *(esi_32 + 0x12c)
                                                                                                int32_t var_c_93 = 0x2e
                                                                                                char* var_c4
                                                                                                char* eax_384 = *sub_4c4ab0(&var_c4)
                                                                                                char* var_114_4 = &data_83f3d3
                                                                                                
                                                                                                if (eax_384 != 0)
                                                                                                    var_114_4 = eax_384
                                                                                                
                                                                                                int128_t* eax_386 = sub_4f6e90(
                                                                                                    data_3165b78, 
                                                                                                    sub_4fc3d0(&data_be1cb8, edi_106), 
                                                                                                    &data_83f3d3)
                                                                                                *(eax_386 + 0x64) = *eax_386 + 1
                                                                                                sub_4c4590(var_114_4)
                                                                                                *(eax_386 + 0x151) = 1
                                                                                                int32_t var_c_94 = 0xffffffff
                                                                                                char* eax_390 = var_c4
                                                                                                
                                                                                                if (eax_390 != 0 && *eax_390 != 0)
                                                                                                    ebx_55 = sub_4c4060(&var_c4)
                                                                                                    int32_t temp6_1 = *(ebx_55 + 4)
                                                                                                    *(ebx_55 + 4) -= 1
                                                                                                    cond:28_1 = temp6_1 != 1
                                                                                                label_45dc1e:
                                                                                                    
                                                                                                    if (not(cond:28_1))
                                                                                                        int32_t esi_167 = *(ebx_55 + 0xc) + 0x10
                                                                                                        sub_4f4430(ebx_55, sub_4f4380(esi_167), 
                                                                                                            esi_167)
                                                                                            else
                                                                                                int32_t* eax_403
                                                                                                
                                                                                                if (*(esi_32 + 0x130) == 0
                                                                                                        || i_5 != ecx_140 - 1)
                                                                                                    int32_t var_138_23 = 0
                                                                                                    sub_4fa4e0(edi_106, data_3165b84, 
                                                                                                        edx_134)
                                                                                                    *(esi_32 + 0x128)
                                                                                                    int32_t var_c_97 = 0x30
                                                                                                    char* var_bc
                                                                                                    char* eax_407 = *sub_4c4ab0(&var_bc)
                                                                                                    char* var_114_6 = &data_83f3d3
                                                                                                    
                                                                                                    if (eax_407 != 0)
                                                                                                        var_114_6 = eax_407
                                                                                                    
                                                                                                    int128_t* eax_409 = sub_4f6e90(
                                                                                                        data_3165b78, 
                                                                                                        sub_4fc3d0(&data_be1cb8, edi_106), 
                                                                                                        &data_83f3d3)
                                                                                                    *(eax_409 + 0x64) = *eax_409 + 1
                                                                                                    sub_4c4590(var_114_6)
                                                                                                    *(eax_409 + 0x151) = 1
                                                                                                    int32_t var_c_98 = 0xffffffff
                                                                                                    char* eax_411 = var_bc
                                                                                                    
                                                                                                    if (eax_411 != 0 && *eax_411 != 0)
                                                                                                        eax_403 = &var_bc
                                                                                                    label_45dc19:
                                                                                                        ebx_55 = sub_4c4060(eax_403)
                                                                                                        int32_t temp8_1 = *(ebx_55 + 4)
                                                                                                        *(ebx_55 + 4) -= 1
                                                                                                        cond:28_1 = temp8_1 != 1
                                                                                                        goto label_45dc1e
                                                                                                else
                                                                                                    float edx_136 = data_3165b7c
                                                                                                    int32_t var_138_22 = 0
                                                                                                    sub_4fa4e0(edi_106, edx_136, edx_136.b)
                                                                                                    *(esi_32 + 0x130)
                                                                                                    int32_t var_c_95 = 0x2f
                                                                                                    char* var_a4
                                                                                                    char* eax_396 = *sub_4c4ab0(&var_a4)
                                                                                                    char* var_114_5 = &data_83f3d3
                                                                                                    
                                                                                                    if (eax_396 != 0)
                                                                                                        var_114_5 = eax_396
                                                                                                    
                                                                                                    int128_t* eax_398 = sub_4f6e90(
                                                                                                        data_3165b78, 
                                                                                                        sub_4fc3d0(&data_be1cb8, edi_106), 
                                                                                                        &data_83f3d3)
                                                                                                    *(eax_398 + 0x64) = *eax_398 + 1
                                                                                                    sub_4c4590(var_114_5)
                                                                                                    *(eax_398 + 0x151) = 1
                                                                                                    int32_t var_c_96 = 0xffffffff
                                                                                                    char* eax_402 = var_a4
                                                                                                    
                                                                                                    if (eax_402 != 0 && *eax_402 != 0)
                                                                                                        eax_403 = &var_a4
                                                                                                        goto label_45dc19
                                                                                            ebx_17 = var_10c_1
                                                                                            i_3 = i_5 + 1
                                                                                            i_5 = i_3
                                                                                        while (i_3 s< ecx_140)
                                                                                
                                                                                float edx_139 = data_3165bf8
                                                                                i_3.b = esi_32[0x126] == 0
                                                                                uint32_t var_138_25 = zx.d(i_3.b)
                                                                                sub_4fa4e0(ebx_17, edx_139, edx_139.b)
                                                                                cond:17_1 = esi_32[0x125] == 0
                                                                                goto label_45e302
                                                                            case 5
                                                                                char* ecx_65
                                                                                
                                                                                if (esi_32[0x168] == 1)
                                                                                    if ((data_3165b8c.b & 0x20) == 0)
                                                                                        data_3165b8c |= 0x20
                                                                                        int32_t var_c_99 = 0x31
                                                                                        data_3165b74 =
                                                                                            sub_4f5220(eax_42, "tblProduce")
                                                                                        int32_t var_c_100 = 0xffffffff
                                                                                    
                                                                                    int128_t* eax_419 = sub_4f6e90(
                                                                                        data_3165b74, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    *eax_419 += 1
                                                                                    int32_t edi_113 = data_3165b74
                                                                                    int32_t eax_420
                                                                                    eax_420.b = *(esi_32 + 0x1a0) s> 0
                                                                                    int32_t ecx_153
                                                                                    ecx_153.b = *(esi_32 + 0x19c) s> 0
                                                                                    var_108 =
                                                                                        eax_420 + ecx_153 + *(esi_32 + 0x194)
                                                                                    int128_t* eax_424 = sub_4f6e90(edi_113, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17), 
                                                                                        &data_83f3d3)
                                                                                    ecx_65 = var_108
                                                                                    eax_424[0x12].d = *eax_424 + 1
                                                                                    *(eax_424 + 0x124) = ecx_65
                                                                                    *(eax_424 + 0x128) = 1
                                                                                    *(eax_424 + 0x12c) = ecx_65
                                                                                    eax_424[0x13].d = 1
                                                                                    int32_t var_110_6 = 0
                                                                                    
                                                                                    if (ecx_65 s> 0)
                                                                                        int32_t var_1c_1 = 0
                                                                                        void* var_114_7 = &esi_32[0x170]
                                                                                        int32_t eax_489
                                                                                        
                                                                                        do
                                                                                            if ((data_3165b8c.b & 0x40) == 0)
                                                                                                data_3165b8c |= 0x40
                                                                                                int32_t var_c_101 = 0x32
                                                                                                data_3165b70 =
                                                                                                    sub_4f5220(data_307c514, "imgVP")
                                                                                                int32_t var_c_102 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165b8c.b & 0x80) == 0)
                                                                                                data_3165b8c |= 0x80
                                                                                                int32_t var_c_103 = 0x33
                                                                                                data_3165b6c =
                                                                                                    sub_4f5220(data_307c514, "imgCard")
                                                                                                int32_t var_c_104 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165b8c & 0x100) == 0)
                                                                                                data_3165b8c |= 0x100
                                                                                                int32_t var_c_105 = 0x34
                                                                                                data_3165b68 =
                                                                                                    sub_4f5220(data_307c514, "imgPrestige")
                                                                                                int32_t var_c_106 = 0xffffffff
                                                                                            
                                                                                            if ((data_3165b8c & 0x200) == 0)
                                                                                                data_3165b8c |= 0x200
                                                                                                int32_t var_c_107 = 0x35
                                                                                                data_3165b64 =
                                                                                                    sub_4f5220(data_307c514, "txtCard")
                                                                                                int32_t var_c_108 = 0xffffffff
                                                                                            
                                                                                            int32_t ecx_156 = data_3165b74
                                                                                            var_e0 = var_110_6
                                                                                            int32_t var_dc_2 = var_1c_1
                                                                                            void* eax_433 =
                                                                                                sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                            int32_t* eax_434 = sub_4f6e90(ecx_156, 
                                                                                                eax_433, &data_83f3d3)
                                                                                            int32_t esi_177 = *(sub_4f7720(&var_e0, 
                                                                                                ecx_156 * 0x118
                                                                                                    + *sub_4f4890(*(eax_433 + 4)), 
                                                                                                eax_434) + 0x434)
                                                                                            float edx_148 = data_3165b68
                                                                                            int32_t var_138_26 = 1
                                                                                            char edx_149 =
                                                                                                sub_4fa4e0(esi_177, edx_148, edx_148.b)
                                                                                            int32_t var_140_2 = 1
                                                                                            char edx_150 = sub_4fa4e0(esi_177, 
                                                                                                data_3165b70, edx_149)
                                                                                            int32_t var_148_2 = 0
                                                                                            sub_4fa4e0(esi_177, data_3165b6c, 
                                                                                                edx_150)
                                                                                            int32_t eax_442 = *(esi_32 + 0x194)
                                                                                            char** eax_455
                                                                                            
                                                                                            if (var_110_6 s>= eax_442)
                                                                                                ecx_65 = esi_32
                                                                                                
                                                                                                if (*(ecx_65 + 0x19c) != 0
                                                                                                        && var_110_6 == eax_442)
                                                                                                    int32_t ebx_64 = data_307c0fc
                                                                                                    int128_t* eax_460 = sub_4f6e90(
                                                                                                        data_3165b6c, 
                                                                                                        sub_4fc3d0(&data_be1cb8, esi_177), 
                                                                                                        &data_83f3d3)
                                                                                                    *(eax_460 + 0x94) = *eax_460 + 1
                                                                                                    *(eax_460 + 0x98) = ebx_64
                                                                                                    char* var_c8
                                                                                                    sub_4c42b0(&var_c8, &data_83f3d3)
                                                                                                    int32_t var_c_111 = 0x37
                                                                                                    *(esi_32 + 0x19c)
                                                                                                    var_c_111.b = 0x38
                                                                                                    char* var_d8
                                                                                                    char* eax_464 = *sub_4c4ab0(&var_d8)
                                                                                                    char* var_120_15 = &data_83f3d3
                                                                                                    
                                                                                                    if (eax_464 != 0)
                                                                                                        var_120_15 = eax_464
                                                                                                    
                                                                                                    int32_t* eax_466 = sub_4f6e90(
                                                                                                        data_3165b64, 
                                                                                                        sub_4fc3d0(&data_be1cb8, esi_177), 
                                                                                                        &data_83f3d3)
                                                                                                    eax_466[0x19] = *eax_466 + 1
                                                                                                    sub_4c4590(var_120_15)
                                                                                                    *(eax_466 + 0x151) = 1
                                                                                                    var_c_111.b = 0x37
                                                                                                    char* eax_468 = var_d8
                                                                                                    
                                                                                                    if (eax_468 != 0 && *eax_468 != 0)
                                                                                                        int32_t* eax_470 = sub_4c4060(&var_d8)
                                                                                                        int32_t temp9_1 = eax_470[1]
                                                                                                        eax_470[1] -= 1
                                                                                                        
                                                                                                        if (temp9_1 == 1)
                                                                                                            int32_t esi_194 = eax_470[3] + 0x10
                                                                                                            sub_4f4430(eax_470, 
                                                                                                                sub_4f4380(esi_194), esi_194)
                                                                                                    
                                                                                                    int32_t var_c_112 = 0xffffffff
                                                                                                    char* eax_473 = var_c8
                                                                                                    
                                                                                                    if (eax_473 != 0 && *eax_473 != 0)
                                                                                                        eax_455 = &var_c8
                                                                                                        goto label_45e04b
                                                                                                    
                                                                                                    ebx_17 = var_10c_1
                                                                                                else if (*(ecx_65 + 0x1a0) != 0)
                                                                                                    float edx_155 = data_3165b68
                                                                                                    int32_t var_138_29 = 0
                                                                                                    char edx_156 =
                                                                                                        sub_4fa4e0(esi_177, edx_155, edx_155.b)
                                                                                                    int32_t var_140_3 = 1
                                                                                                    sub_4fa4e0(esi_177, data_3165b6c, 
                                                                                                        edx_156)
                                                                                                    
                                                                                                    if (*(esi_32 + 0x1a0) s<= 1)
                                                                                                    label_45e280:
                                                                                                        int32_t ebx_70 = data_3165b64
                                                                                                        int32_t eax_484
                                                                                                        eax_484, ecx_65 =
                                                                                                            sub_4fc3d0(&data_be1cb8, esi_177)
                                                                                                        int128_t* eax_485 = sub_4f6e90(ebx_70, 
                                                                                                            eax_484, &data_83f3d3)
                                                                                                        *(eax_485 + 0x64) = *eax_485 + 1
                                                                                                        sub_4c4590(&data_83f3d3)
                                                                                                        *(eax_485 + 0x151) = 1
                                                                                                        ebx_17 = var_10c_1
                                                                                                    else
                                                                                                        int32_t var_c_113 = 0x39
                                                                                                        char* var_c0
                                                                                                        char* eax_479 = *sub_4c4ab0(&var_c0)
                                                                                                        char* var_120_16 = &data_83f3d3
                                                                                                        
                                                                                                        if (eax_479 != 0)
                                                                                                            var_120_16 = eax_479
                                                                                                        
                                                                                                        int32_t ebx_68 = data_3165b64
                                                                                                        int32_t eax_480
                                                                                                        eax_480, ecx_65 =
                                                                                                            sub_4fc3d0(&data_be1cb8, esi_177)
                                                                                                        int128_t* eax_481 = sub_4f6e90(ebx_68, 
                                                                                                            eax_480, &data_83f3d3)
                                                                                                        *(eax_481 + 0x64) = *eax_481 + 1
                                                                                                        sub_4c4590(var_120_16)
                                                                                                        *(eax_481 + 0x151) = 1
                                                                                                        int32_t var_c_114 = 0xffffffff
                                                                                                        char* eax_483 = var_c0
                                                                                                        
                                                                                                        if (eax_483 == 0 || *eax_483 == 0)
                                                                                                            ebx_17 = var_10c_1
                                                                                                        else
                                                                                                            eax_455 = &var_c0
                                                                                                        label_45e04b:
                                                                                                            void* eax_456 = sub_4c4060(eax_455)
                                                                                                            int32_t temp10_1 = *(eax_456 + 4)
                                                                                                            *(eax_456 + 4) -= 1
                                                                                                            
                                                                                                            if (temp10_1 == 1)
                                                                                                                int32_t esi_185 =
                                                                                                                    *(eax_456 + 0xc) + 0x10
                                                                                                                sub_4f4430(eax_456, 
                                                                                                                    sub_4f4380(esi_185), esi_185)
                                                                                                            
                                                                                                            ebx_17 = var_10c_1
                                                                                            else
                                                                                                int32_t eax_445 = *(var_114_7 - 4) - 1
                                                                                                
                                                                                                if (eax_445 u> 4)
                                                                                                    sub_4c5870("Halt", &data_83f3d3, 
                                                                                                        "..\code\RFTGClient.cpp", 0x4205, 
                                                                                                        "GoodIconGet")
                                                                                                    
                                                                                                    if (IsDebuggerPresent() == 1)
                                                                                                        breakpoint
                                                                                                    
                                                                                                    sub_4c5a30()
                                                                                                    noreturn
                                                                                                
                                                                                                int32_t ebx_60
                                                                                                
                                                                                                switch (eax_445)
                                                                                                    case 0
                                                                                                        ebx_60 = data_307c290
                                                                                                    case 1
                                                                                                        ebx_60 = data_307c294
                                                                                                    case 2
                                                                                                        ebx_60 = data_307c298
                                                                                                    case 3
                                                                                                        ebx_60 = data_307c29c
                                                                                                    case 4
                                                                                                        ebx_60 = data_307c2a0
                                                                                                
                                                                                                int128_t* eax_447 = sub_4f6e90(
                                                                                                    data_3165b6c, 
                                                                                                    sub_4fc3d0(&data_be1cb8, esi_177), 
                                                                                                    &data_83f3d3)
                                                                                                *(eax_447 + 0x94) = *eax_447 + 1
                                                                                                *(eax_447 + 0x98) = ebx_60
                                                                                                
                                                                                                if (*var_114_7 == 1)
                                                                                                    goto label_45e280
                                                                                                
                                                                                                int32_t var_c_109 = 0x36
                                                                                                char* var_d4
                                                                                                char* eax_450 = *sub_4c4ab0(&var_d4)
                                                                                                char* var_120_14 = &data_83f3d3
                                                                                                
                                                                                                if (eax_450 != 0)
                                                                                                    var_120_14 = eax_450
                                                                                                
                                                                                                int32_t* eax_452 = sub_4f6e90(
                                                                                                    data_3165b64, 
                                                                                                    sub_4fc3d0(&data_be1cb8, esi_177), 
                                                                                                    &data_83f3d3)
                                                                                                eax_452[0x19] = *eax_452 + 1
                                                                                                sub_4c4590(var_120_14)
                                                                                                *(eax_452 + 0x151) = 1
                                                                                                int32_t var_c_110 = 0xffffffff
                                                                                                char* eax_454 = var_d4
                                                                                                
                                                                                                if (eax_454 != 0 && *eax_454 != 0)
                                                                                                    eax_455 = &var_d4
                                                                                                    goto label_45e04b
                                                                                                
                                                                                                ebx_17 = var_10c_1
                                                                                            var_114_7 += 8
                                                                                            eax_489 = var_110_6 + 1
                                                                                            var_110_6 = eax_489
                                                                                        while (eax_489 s< var_108)
                                                                                
                                                                                ecx_65.b = esi_32[0x16a] == 0
                                                                                uint32_t edx_159 = zx.d(ecx_65.b)
                                                                                uint32_t var_138_30 = edx_159
                                                                                sub_4fa4e0(ebx_17, data_3165bf8, 
                                                                                    edx_159.b)
                                                                                cond:17_1 = esi_32[0x169] == 0
                                                                                goto label_45e302
                                                                            case 0xffffffff
                                                                                if (*esi_32 == 0)
                                                                                    cond:17_1 = esi_32[1] == 0
                                                                                else if (
                                                                                        *(*(esi_32 + 8) * 0x128 + 0x2691cae)
                                                                                        != 2)
                                                                                    if ((data_3165c0c.d & 0x2000) == 0)
                                                                                        data_3165c0c.d |= 0x2000
                                                                                        int32_t var_c_33 = 0x10
                                                                                        data_3165bd8 =
                                                                                            sub_4f5220(data_307c504, "tblSettle")
                                                                                        int32_t var_c_34 = 0xffffffff
                                                                                    
                                                                                    int32_t edi_28 = data_3165bd8
                                                                                    int32_t eax_164
                                                                                    int32_t ecx_85
                                                                                    eax_164, ecx_85 =
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                    
                                                                                    if (edi_28 s>= 0x100)
                                                                                        sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                            &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                            "UIStateElementGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t edx_72 =
                                                                                        *(eax_164 + (edi_28 << 2) + 0x30)
                                                                                    int128_t* eax_165
                                                                                    
                                                                                    if (edx_72 != 0)
                                                                                        eax_165 = sub_4fc1e0(ecx_85, edx_72)
                                                                                    else
                                                                                        eax_165 = sub_4fc0d0()
                                                                                        *(eax_165 + 4) = &data_83f3d3
                                                                                        *(eax_164 + (edi_28 << 2) + 0x30) =
                                                                                            *(eax_165 + 0x1bc)
                                                                                    
                                                                                    int32_t edx_73 = data_3165bd8
                                                                                    *eax_165 += 1
                                                                                    int32_t eax_166
                                                                                    int32_t ecx_87
                                                                                    eax_166, ecx_87 =
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                    
                                                                                    if (edx_73 s>= 0x100)
                                                                                        sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                            &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                            "UIStateElementGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t edx_74 =
                                                                                        *(eax_166 + (edx_73 << 2) + 0x30)
                                                                                    int128_t* eax_168
                                                                                    
                                                                                    if (edx_74 != 0)
                                                                                        eax_168 = sub_4fc1e0(ecx_87, edx_74)
                                                                                    else
                                                                                        eax_168 = sub_4fc0d0()
                                                                                        *(eax_168 + 4) = &data_83f3d3
                                                                                        *(eax_166 + (edx_73 << 2) + 0x30) =
                                                                                            *(eax_168 + 0x1bc)
                                                                                    
                                                                                    eax_168[0x12].d = *eax_168 + 1
                                                                                    *(eax_168 + 0x128) = 1
                                                                                    eax_168[0x13].d = 1
                                                                                    *(eax_168 + 0x124) = 1
                                                                                    *(eax_168 + 0x12c) = 1
                                                                                    int32_t edi_29 = data_3165bd8
                                                                                    int32_t var_6c_1 = 0
                                                                                    int32_t var_70 = 0
                                                                                    void* eax_169
                                                                                    int32_t ecx_91
                                                                                    eax_169, ecx_91 =
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                    
                                                                                    if (edi_29 s>= 0x100)
                                                                                        sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                            &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                            "UIStateElementGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t edx_76 =
                                                                                        *(eax_169 + (edi_29 << 2) + 0x30)
                                                                                    int128_t* eax_170
                                                                                    
                                                                                    if (edx_76 != 0)
                                                                                        eax_170 = sub_4fc1e0(ecx_91, edx_76)
                                                                                    else
                                                                                        eax_170 = sub_4fc0d0()
                                                                                        *(eax_170 + 4) = &data_83f3d3
                                                                                        edx_76 = *(eax_170 + 0x1bc)
                                                                                        *(eax_169 + (edi_29 << 2) + 0x30) =
                                                                                            edx_76
                                                                                    
                                                                                    char* esi_51 = *(eax_169 + 4)
                                                                                    
                                                                                    if (*(esi_51 + 4) != 0x1e)
                                                                                        sub_4c5870(
                                                                                            "ptr->assetType == ASSET_TYPE_UI", 
                                                                                            &data_83f3d3, "UIDef.cpp", 0xfd, 
                                                                                            "UIDefGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    if (*esi_51 == 0)
                                                                                        sub_520800(eax_170, edx_76.b, esi_51, 0)
                                                                                        
                                                                                        if (*esi_51 == 0)
                                                                                            sub_509540(esi_51)
                                                                                    
                                                                                    int32_t ebx_34 = *(sub_4f7720(&var_70, 
                                                                                        edi_29 * 0x118 + ***esi_51, eax_170)
                                                                                        + 0x434)
                                                                                    void* eax_177
                                                                                    char edx_78
                                                                                    eax_177, edx_78 = sub_4f4890(
                                                                                        *(sub_4fc3d0(&data_be1cb8, ebx_34) + 4))
                                                                                    float i_4 = 0f
                                                                                    
                                                                                    if (*(eax_177 + 4) s> 0)
                                                                                        do
                                                                                            int32_t var_138_8 = 1
                                                                                            edx_78 = sub_4fa4e0(ebx_34, i_4, edx_78)
                                                                                            i_4 += 1
                                                                                        while (i_4 s< *(eax_177 + 4))
                                                                                    
                                                                                    void* edi_35 =
                                                                                        *(esi_32 + 8) * 0x128 + &data_2691ca8
                                                                                    void* var_110_2 = edi_35
                                                                                    
                                                                                    if ((*(edi_35 + 0x10) & 2) != 0)
                                                                                        if ((data_3165c0c.d & 0x4000) == 0)
                                                                                            data_3165c0c.d |= 0x4000
                                                                                            int32_t var_c_35 = 0x11
                                                                                            data_3165bd4 =
                                                                                                sub_4f5220(data_307c518, "imgHalo")
                                                                                            int32_t var_c_36 = 0xffffffff
                                                                                        
                                                                                        int128_t* eax_181 = sub_4f6e90(
                                                                                            data_3165bd4, 
                                                                                            sub_4fc3d0(&data_be1cb8, ebx_34), 
                                                                                            &data_83f3d3)
                                                                                        *eax_181 += 1
                                                                                        int32_t eax_184 =
                                                                                            sx.d(*(var_110_2 + 0xe)) - 1
                                                                                        
                                                                                        if (eax_184 u> 4)
                                                                                            sub_4c5870("Halt", &data_83f3d3, 
                                                                                                "..\code\RFTGClient.cpp", 0x1a19, 
                                                                                                "GetHaloTexture")
                                                                                            
                                                                                            if (IsDebuggerPresent() == 1)
                                                                                                breakpoint
                                                                                            
                                                                                            sub_4c5a30()
                                                                                            noreturn
                                                                                        
                                                                                        int32_t var_11c_1
                                                                                        
                                                                                        switch (eax_184)
                                                                                            case 0
                                                                                                var_11c_1 = data_307bd2c
                                                                                            case 1
                                                                                                var_11c_1 = data_307bd20
                                                                                            case 2
                                                                                                var_11c_1 = data_307bd24
                                                                                            case 3
                                                                                                var_11c_1 = data_307bd28
                                                                                            case 4
                                                                                                var_11c_1 = data_307bd30
                                                                                        
                                                                                        int128_t* eax_187 = sub_4f6e90(
                                                                                            data_3165bd4, 
                                                                                            sub_4fc3d0(&data_be1cb8, ebx_34), 
                                                                                            &data_83f3d3)
                                                                                        edi_35 = var_110_2
                                                                                        *(eax_187 + 0x94) = *eax_187 + 1
                                                                                        *(eax_187 + 0x98) = var_11c_1
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x8000) == 0)
                                                                                        data_3165c0c.d |= 0x8000
                                                                                        int32_t var_c_37 = 0x12
                                                                                        data_3165bd0 =
                                                                                            sub_4f5220(data_307c518, "imgWorld")
                                                                                        int32_t var_c_38 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x10000) == 0)
                                                                                        data_3165c0c.d |= 0x10000
                                                                                        int32_t var_c_39 = 0x13
                                                                                        data_3165bcc =
                                                                                            sub_4f5220(data_307c518, "txtWorld")
                                                                                        int32_t var_c_40 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x20000) == 0)
                                                                                        data_3165c0c.d |= 0x20000
                                                                                        int32_t var_c_41 = 0x14
                                                                                        data_3165bc8 =
                                                                                            sub_4f5220(data_307c518, "txtWorldMil")
                                                                                        int32_t var_c_42 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x40000) == 0)
                                                                                        data_3165c0c.d |= 0x40000
                                                                                        int32_t var_c_43 = 0x15
                                                                                        data_3165bc4 =
                                                                                            sub_4f5220(data_307c518, "txtWorldProd")
                                                                                        int32_t var_c_44 = 0xffffffff
                                                                                    
                                                                                    char eax_194 = (*(edi_35 + 0x10)).b
                                                                                    int32_t var_11c_2
                                                                                    
                                                                                    if ((eax_194 & 1) != 0)
                                                                                        var_11c_2 = data_3165bc8
                                                                                    else if (*(edi_35 + 6) == 2
                                                                                            || (eax_194 & 2) != 0
                                                                                            || *(edi_35 + 0xe) == 0)
                                                                                        var_11c_2 = data_3165bcc
                                                                                    else
                                                                                        var_11c_2 = data_3165bc4
                                                                                    
                                                                                    int128_t* eax_197 = sub_4f6e90(
                                                                                        data_3165bd0, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_34), 
                                                                                        &data_83f3d3)
                                                                                    *eax_197 += 1
                                                                                    int128_t* eax_199 = sub_4f6e90(
                                                                                        var_11c_2, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_34), 
                                                                                        &data_83f3d3)
                                                                                    *eax_199 += 1
                                                                                    char* eax_201 = sub_427a90(var_110_2)
                                                                                    int32_t edi_43 = data_3165bd0
                                                                                    var_108 = eax_201
                                                                                    int128_t* eax_203 = sub_4f6e90(edi_43, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_34), 
                                                                                        &data_83f3d3)
                                                                                    char* edx_84 = var_108
                                                                                    *(eax_203 + 0x94) = *eax_203 + 1
                                                                                    *(eax_203 + 0x98) = edx_84
                                                                                    *(var_110_2 + 7)
                                                                                    int32_t var_c_45 = 0x16
                                                                                    char* var_b8
                                                                                    char* eax_207 = *sub_4c4ab0(&var_b8)
                                                                                    char* var_120_6 = &data_83f3d3
                                                                                    
                                                                                    if (eax_207 != 0)
                                                                                        var_120_6 = eax_207
                                                                                    
                                                                                    int128_t* eax_209 = sub_4f6e90(
                                                                                        var_11c_2, 
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_34), 
                                                                                        &data_83f3d3)
                                                                                    *(eax_209 + 0x64) = *eax_209 + 1
                                                                                    sub_4c4590(var_120_6)
                                                                                    *(eax_209 + 0x151) = 1
                                                                                    int32_t var_c_46 = 0xffffffff
                                                                                    char* eax_211 = var_b8
                                                                                    
                                                                                    if (eax_211 != 0 && *eax_211 != 0)
                                                                                        void* eax_213 = sub_4c4060(&var_b8)
                                                                                        int32_t temp11_1 = *(eax_213 + 4)
                                                                                        *(eax_213 + 4) -= 1
                                                                                        
                                                                                        if (temp11_1 == 1)
                                                                                            int32_t esi_69 = *(eax_213 + 0xc) + 0x10
                                                                                            sub_4f4430(eax_213, sub_4f4380(esi_69), 
                                                                                                esi_69)
                                                                                    
                                                                                    ebx_17 = var_10c_1
                                                                                    cond:17_1 = esi_32[1] == 0
                                                                                else
                                                                                    if ((data_3165c0c.d & 0x800) == 0)
                                                                                        data_3165c0c.d |= 0x800
                                                                                        int32_t var_c_27 = 0xd
                                                                                        data_3165be0 =
                                                                                            sub_4f5220(data_307c504, "tblDevelop")
                                                                                        int32_t var_c_28 = 0xffffffff
                                                                                    
                                                                                    if ((data_3165c0c.d & 0x1000) == 0)
                                                                                        data_3165c0c.d |= 0x1000
                                                                                        int32_t var_c_29 = 0xe
                                                                                        data_3165bdc =
                                                                                            sub_4f5220(data_307c508, "txtDevelop")
                                                                                        int32_t var_c_30 = 0xffffffff
                                                                                    
                                                                                    int32_t edi_22 = data_3165be0
                                                                                    int32_t eax_136
                                                                                    int32_t ecx_68
                                                                                    eax_136, ecx_68 =
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                    
                                                                                    if (edi_22 s>= 0x100)
                                                                                        sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                            &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                            "UIStateElementGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t edx_59 =
                                                                                        *(eax_136 + (edi_22 << 2) + 0x30)
                                                                                    int128_t* eax_137
                                                                                    
                                                                                    if (edx_59 != 0)
                                                                                        eax_137 = sub_4fc1e0(ecx_68, edx_59)
                                                                                    else
                                                                                        eax_137 = sub_4fc0d0()
                                                                                        *(eax_137 + 4) = &data_83f3d3
                                                                                        *(eax_136 + (edi_22 << 2) + 0x30) =
                                                                                            *(eax_137 + 0x1bc)
                                                                                    
                                                                                    *eax_137 += 1
                                                                                    int32_t edi_23 = data_3165be0
                                                                                    int32_t eax_138
                                                                                    int32_t ecx_70
                                                                                    eax_138, ecx_70 =
                                                                                        sub_4fc3d0(&data_be1cb8, ebx_17)
                                                                                    
                                                                                    if (edi_23 s>= 0x100)
                                                                                        sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                            &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                            "UIStateElementGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t edx_60 =
                                                                                        *(eax_138 + (edi_23 << 2) + 0x30)
                                                                                    int128_t* eax_139
                                                                                    
                                                                                    if (edx_60 != 0)
                                                                                        eax_139 = sub_4fc1e0(ecx_70, edx_60)
                                                                                    else
                                                                                        eax_139 = sub_4fc0d0()
                                                                                        *(eax_139 + 4) = &data_83f3d3
                                                                                        *(eax_138 + (edi_23 << 2) + 0x30) =
                                                                                            *(eax_139 + 0x1bc)
                                                                                    
                                                                                    eax_139[0x12].d = *eax_139 + 1
                                                                                    *(eax_139 + 0x128) = 1
                                                                                    eax_139[0x13].d = 1
                                                                                    *(eax_139 + 0x124) = 1
                                                                                    *(eax_139 + 0x12c) = 1
                                                                                    int32_t var_110_1 = 0
                                                                                    
                                                                                    if (*(esi_32 + 0x28) s<= 0)
                                                                                        cond:17_1 = esi_32[1] == 0
                                                                                    else
                                                                                        int32_t var_60 = 0
                                                                                        int32_t var_5c_1 = 0
                                                                                        
                                                                                        while (true)
                                                                                            int32_t esi_37 = data_3165be0
                                                                                            
                                                                                            if (ecx_61 u< data_be1cbc)
                                                                                                int32_t ecx_73 = data_be1cb8
                                                                                                
                                                                                                if (*(ecx_61 * 0x438 + ecx_73 + 0x434)
                                                                                                        == ebx_17)
                                                                                                    void* ebx_27 = eax_119 + ecx_73
                                                                                                    
                                                                                                    if (esi_37 s>= 0x100)
                                                                                                        sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                                            &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                                            "UIStateElementGet")
                                                                                                        
                                                                                                        if (IsDebuggerPresent() == 1)
                                                                                                            breakpoint
                                                                                                        
                                                                                                        sub_4c5a30()
                                                                                                        noreturn
                                                                                                    
                                                                                                    int32_t edx_63 =
                                                                                                        *(ebx_27 + (esi_37 << 2) + 0x30)
                                                                                                    int128_t* eax_142
                                                                                                    
                                                                                                    if (edx_63 != 0)
                                                                                                        eax_142 = sub_4fc1e0(ecx_73, edx_63)
                                                                                                    else
                                                                                                        eax_142, edx_63 = sub_4fc0d0()
                                                                                                        *(eax_142 + 4) = &data_83f3d3
                                                                                                        *(ebx_27 + (esi_37 << 2) + 0x30) =
                                                                                                            *(eax_142 + 0x1bc)
                                                                                                    
                                                                                                    char* ebx_28 = *(ebx_27 + 4)
                                                                                                    
                                                                                                    if (*(ebx_28 + 4) != 0x1e)
                                                                                                        sub_4c5870(
                                                                                                            "ptr->assetType == ASSET_TYPE_UI", 
                                                                                                            &data_83f3d3, "UIDef.cpp", 0xfd, 
                                                                                                            "UIDefGet")
                                                                                                        
                                                                                                        if (IsDebuggerPresent() == 1)
                                                                                                            breakpoint
                                                                                                        
                                                                                                        sub_4c5a30()
                                                                                                        noreturn
                                                                                                    
                                                                                                    if (*ebx_28 == 0)
                                                                                                        sub_520800(eax_142, edx_63.b, ebx_28, 0)
                                                                                                        
                                                                                                        if (*ebx_28 == 0)
                                                                                                            sub_509540(ebx_28)
                                                                                                    
                                                                                                    int32_t ebx_29 = *(sub_4f7720(&var_60, 
                                                                                                        esi_37 * 0x118 + ***ebx_28, eax_142)
                                                                                                        + 0x434)
                                                                                                    *(*(esi_32 + 8) * 0x128 + 0x2691caf)
                                                                                                    int32_t var_c_31 = 0xf
                                                                                                    char* var_8c
                                                                                                    char* eax_151 = *sub_4c4ab0(&var_8c)
                                                                                                    char* edi_25 = &data_83f3d3
                                                                                                    
                                                                                                    if (eax_151 != 0)
                                                                                                        edi_25 = eax_151
                                                                                                    
                                                                                                    if (ebx_29 == 0)
                                                                                                        sub_4c5870("id != DATAID_NULL", 
                                                                                                            &data_83f3d3, 
                                                                                                            "c:\ax2010\engine\DataArray.h", 0x45, 
                                                                                                            "DataArray<struct UIState>::DataArrayGet")
                                                                                                        
                                                                                                        if (IsDebuggerPresent() == 1)
                                                                                                            breakpoint
                                                                                                        
                                                                                                        sub_4c5a30()
                                                                                                        noreturn
                                                                                                    
                                                                                                    uint32_t eax_153 = zx.d(ebx_29.w)
                                                                                                    
                                                                                                    if (eax_153 u< data_be1cbc)
                                                                                                        int32_t edx_66 = data_be1cb8
                                                                                                        int32_t ecx_79 = eax_153 * 0x438
                                                                                                        
                                                                                                        if (*(ecx_79 + edx_66 + 0x434)
                                                                                                                == ebx_29)
                                                                                                            int32_t ebx_30 =
                                                                                                                edx_66 + eax_153 * 0x438
                                                                                                            int32_t eax_155 = data_3165bdc
                                                                                                            
                                                                                                            if (eax_155 s>= 0x100)
                                                                                                                sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                                                                    &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                                                                    "UIStateElementGet")
                                                                                                                
                                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                                    breakpoint
                                                                                                                
                                                                                                                sub_4c5a30()
                                                                                                                noreturn
                                                                                                            
                                                                                                            int32_t edx_67 =
                                                                                                                *(ebx_30 + (eax_155 << 2) + 0x30)
                                                                                                            int128_t* eax_156
                                                                                                            
                                                                                                            if (edx_67 != 0)
                                                                                                                eax_156 = sub_4fc1e0(ecx_79, edx_67)
                                                                                                            else
                                                                                                                eax_156 = sub_4fc0d0()
                                                                                                                *(eax_156 + 4) = &data_83f3d3
                                                                                                                *(ebx_30 + ((eax_155 + 0xc) << 2)) =
                                                                                                                    *(eax_156 + 0x1bc)
                                                                                                            
                                                                                                            *(eax_156 + 0x64) = *eax_156 + 1
                                                                                                            sub_4c4590(edi_25)
                                                                                                            *(eax_156 + 0x151) = 1
                                                                                                            int32_t var_c_32 = 0xffffffff
                                                                                                            char* eax_158 = var_8c
                                                                                                            
                                                                                                            if (eax_158 != 0 && *eax_158 != 0)
                                                                                                                if (*(eax_158 - 0x10) != 0xfafafafa)
                                                                                                                    sub_4c5870(
                                                                                                                        "pStringData->mXStringMagicNumber == 
                                                                                                                            XSTRING_MAGIC_NUMBER", 
                                                                                                                        &data_83f3d3, "xString.cpp", 0x20, 
                                                                                                                        "XStringMagicDataStructFromCharPtr")
                                                                                                                    
                                                                                                                    if (IsDebuggerPresent() == 1)
                                                                                                                        breakpoint
                                                                                                                    
                                                                                                                    sub_4c5a30()
                                                                                                                    noreturn
                                                                                                                
                                                                                                                int32_t temp12_1 = *(eax_158 - 0xc)
                                                                                                                *(eax_158 - 0xc) -= 1
                                                                                                                
                                                                                                                if (temp12_1 == 1)
                                                                                                                    void* edi_26 = data_26a44e4
                                                                                                                    int32_t esi_44 = *(eax_158 - 4) + 0x10
                                                                                                                    
                                                                                                                    if (edi_26 == 0)
                                                                                                                        sub_4f4250()
                                                                                                                        edi_26 = data_26a44e4
                                                                                                                    
                                                                                                                    int32_t edx_68 = 0
                                                                                                                    int32_t* edi_27
                                                                                                                    
                                                                                                                    while (true)
                                                                                                                        if (esi_44 s<= 1 << (edx_68.b + 4))
                                                                                                                            edi_27 = edi_26 + edx_68 * 0x14
                                                                                                                            break
                                                                                                                        
                                                                                                                        edx_68 += 1
                                                                                                                        
                                                                                                                        if (edx_68 s>= 7)
                                                                                                                            edi_27 = edi_26 + 0x8c
                                                                                                                            break
                                                                                                                    
                                                                                                                    sub_4f4430(&eax_158[0xfffffff0], 
                                                                                                                        edi_27, esi_44)
                                                                                                            
                                                                                                            ebx_17 = var_10c_1
                                                                                                            int32_t eax_162 = var_110_1 + 1
                                                                                                            var_110_1 = eax_162
                                                                                                            
                                                                                                            if (eax_162 s< *(esi_32 + 0x28))
                                                                                                                continue
                                                                                                            
                                                                                                            cond:17_1 = esi_32[1] == 0
                                                                                                            break
                                                                                                    
                                                                                                    sub_4c5870(
                                                                                                        "DataArrayTryToGet(id) != NULL", 
                                                                                                        &data_83f3d3, 
                                                                                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                                                                                        "DataArray<struct UIState>::DataArrayGet")
                                                                                                    
                                                                                                    if (IsDebuggerPresent() == 1)
                                                                                                        breakpoint
                                                                                                    
                                                                                                    sub_4c5a30()
                                                                                                    noreturn
                                                                                            
                                                                                            sub_4c5870(
                                                                                                "DataArrayTryToGet(id) != NULL", 
                                                                                                &data_83f3d3, 
                                                                                                "c:\ax2010\engine\DataArray.h", 0x46, 
                                                                                                "DataArray<struct UIState>::DataArrayGet")
                                                                                            
                                                                                            if (IsDebuggerPresent() == 1)
                                                                                                breakpoint
                                                                                            
                                                                                            sub_4c5a30()
                                                                                            noreturn
                                                                                
                                                                                goto label_45e302
                                                                        
                                                                        int32_t eax_495 = var_ec_1 + 1
                                                                        var_ec_1 = eax_495
                                                                        
                                                                        if (eax_495 s>= sx.d(*(eax_15 + 0x458)))
                                                                            break
                                                                        
                                                                        continue
                                                                
                                                                sub_4c5870(
                                                                    "DataArrayTryToGet(id) != NULL", 
                                                                    &data_83f3d3, 
                                                                    "c:\ax2010\engine\DataArray.h", 0x46, 
                                                                    "DataArray<struct UIState>::DataArrayGet")
                                                                
                                                                if (IsDebuggerPresent() == 1)
                                                                    breakpoint
                                                                
                                                                sub_4c5a30()
                                                                noreturn
                                                        
                                                        sub_4c5870("DataArrayTryToGet(id) != NULL", 
                                                            &data_83f3d3, 
                                                            "c:\ax2010\engine\DataArray.h", 0x46, 
                                                            "DataArray<struct UIState>::DataArrayGet")
                                                        
                                                        if (IsDebuggerPresent() == 1)
                                                            breakpoint
                                                        
                                                        sub_4c5a30()
                                                        noreturn
                                                
                                                sub_4c5870("DataArrayTryToGet(id) != NULL", 
                                                    &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
                                                    "DataArray<struct UIState>::DataArrayGet")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                        
                                        eax_93 = var_f8_2 + 1
                                        var_f8_2 = eax_93
                                        
                                        if (eax_93 s>= 6)
                                            break
                                        
                                        esi_18 = arg1
                                        ecx_39 = var_e8
                                        continue
                                
                                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                    "c:\ax2010\engine\DataArray.h", 0x46, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1657, 
                        "PhaseNumeralDot")
                    
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
    
    ebx_17.b = *(eax_4 + 0x43350) != eax_51
    
    if ((data_3165b8c & 0x400) == 0)
        data_3165b8c |= 0x400
        int32_t var_c_115 = 0x3a
        data_3165b60 = sub_4f5220(data_307c500, "btnPrev")
        int32_t var_c_116 = 0xffffffff
    
    if ((data_3165b8c & 0x800) == 0)
        data_3165b8c |= 0x800
        int32_t var_c_117 = 0x3b
        data_3165b5c = sub_4f5220(data_307c500, "btnNext")
        int32_t var_c_118 = 0xffffffff
    
    if ((data_3165b8c & 0x1000) == 0)
        data_3165b8c |= 0x1000
        int32_t var_c_119 = 0x3c
        data_3165b58 = sub_4f5220(data_307c500, "imgPrev")
        int32_t var_c_120 = 0xffffffff
    
    if ((data_3165b8c & 0x2000) == 0)
        data_3165b8c |= 0x2000
        int32_t var_c_121 = 0x3d
        data_3165b54 = sub_4f5220(data_307c500, "imgNext")
        int32_t var_c_122 = 0xffffffff
    
    float edx_163 = data_3165b60
    int32_t var_138_31 = 0
    char edx_164 = sub_4fa4e0(arg1, edx_163, edx_163.b)
    int32_t var_140_4 = 0
    char edx_165 = sub_4fa4e0(arg1, data_3165b58, edx_164)
    ebx_17.b = ebx_17.b == 0
    void* var_148_3 = ebx_17
    sub_4fa4e0(arg1, data_3165b5c, edx_165)
    float edx_166 = data_3165b54
    void* var_150 = ebx_17
    int32_t result = sub_4fa4e0(arg1, edx_166, edx_166.b)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

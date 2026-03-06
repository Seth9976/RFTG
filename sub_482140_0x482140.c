// 函数名称: sub_482140
// 虚拟地址: 0x482140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_482140(void* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69965a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t eax_2 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = arg1
    void* eax_3 = sub_4fc3d0(&data_be1cb8, ebx)
    bool cond:0 = (data_31669fc & 1) != 0
    int32_t* esi_1 = data_307c16c
    *(eax_3 + 0x2c) = sub_481a30
    
    if (not(cond:0))
        data_31669fc.d |= 1
        int32_t var_c_1 = 0
        data_315ff24 = sub_4f5220(esi_1, "tblPlayer1")
        data_315ff28 = sub_4f5220(esi_1, "tblPlayer2")
        data_315ff2c = sub_4f5220(esi_1, "tblPlayer3")
        data_315ff30 = sub_4f5220(esi_1, "tblPlayer4")
        int32_t var_c_2 = 0xffffffff
    
    *(sub_4f6e90(data_315ff24, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3) + 0x11c) = sub_481770
    *(sub_4f6e90(data_315ff28, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3) + 0x11c) = sub_481790
    *(sub_4f6e90(data_315ff2c, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3) + 0x11c) = sub_4817b0
    *(sub_4f6e90(data_315ff30, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3) + 0x11c) = sub_4817d0
    float eax_16 = sub_40c7a0(&data_307cd0c)
    void* eax_17 = sub_40c7a0(&data_307cd0c)
    int32_t ecx = 0
    
    if (*(eax_17 + 0x50) != 0)
        ecx = 1
    
    if (*(eax_17 + 0x5c) != 0)
        ecx += 1
    
    if (*(eax_17 + 0x68) != 0)
        ecx += 1
    
    if (*(eax_17 + 0x74) != 0)
        ecx += 1
    
    eax_17.b = ecx != 2
    sub_4fa770(ebx, 1, zx.d(eax_17.b))
    int32_t eax_19 = *(sub_40c7a0(&data_307cd0c) + 0x4c)
    char eax_20
    
    if (eax_19 s< 1 || eax_19 s> 3)
        eax_20 = 0
    else
        eax_20 = 1
    
    sub_4fa770(ebx, 4, zx.d(eax_20 == 0))
    int32_t eax_23 = *(sub_40c7a0(&data_307cd0c) + 0x4c)
    char eax_24
    
    if (eax_23 s< 2 || eax_23 s> 3)
        eax_24 = 0
    else
        eax_24 = 1
    
    char eax_25
    int32_t ecx_4
    eax_25, ecx_4 = sub_4b95c0(sub_4fa770(ebx, 0x10, zx.d(eax_24 == 0)), 3)
    
    if (eax_25 != 0)
        char eax_26
        eax_26, ecx_4 = sub_4b95c0(ecx_4, 2)
        
        if (eax_26 == 0)
            if ((data_31669fc & 2) == 0)
                data_31669fc.d |= 2
                int32_t var_c_3 = 1
                data_31669f8 = sub_4f5220(esi_1, "txtRequire")
                int32_t var_c_4 = 0xffffffff
            
            int128_t* eax_30 = sub_4f6e90(data_31669f8, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3)
            ecx_4 = *eax_30 + 1
            *(eax_30 + 0x64) = ecx_4
            sub_4c4590("RvI Requires Gathering Storm")
            ebx = arg1
            *(eax_30 + 0x151) = 1
    
    char eax_31
    int32_t ecx_6
    eax_31, ecx_6 = sub_4b95c0(ecx_4, 4)
    
    if (eax_31 != 0 && sub_4b95c0(ecx_6, 3) == 0)
        if ((data_31669fc & 4) == 0)
            data_31669fc.d |= 4
            int32_t var_c_5 = 2
            data_31669f4 = sub_4f5220(esi_1, "txtRequire")
            int32_t var_c_6 = 0xffffffff
        
        int128_t* eax_35 = sub_4f6e90(data_31669f4, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3)
        *(eax_35 + 0x64) = *eax_35 + 1
        sub_4c4590("RvI Requires Rebel vs Imperium")
        ebx = arg1
        *(eax_35 + 0x151) = 1
    
    if ((data_31669fc & 8) == 0)
        data_31669fc.d |= 8
        int32_t var_c_7 = 3
        data_31669f0 = sub_4f5220(esi_1, "btnTutorial")
        int32_t var_c_8 = 0xffffffff
    
    bool cond:1 = data_307d080 != 0
    uint32_t var_80_3 = zx.d(cond:1)
    sub_4fa4e0(ebx, data_31669f0, cond:1)
    int32_t eax_41 = data_307d080
    
    if (eax_41 == 0 || (eax_41 == 6 && data_307d088 != 2))
        eax_41 = 1
    else
        eax_41.b = 0
    
    sub_4fa770(ebx, 0x80, eax_41)
    
    if ((data_31669fc & 0x10) == 0)
        data_31669fc.d |= 0x10
        int32_t var_c_9 = 4
        data_31669ec = sub_4f5220(esi_1, "btnTimer")
        int32_t var_c_10 = 0xffffffff
    
    int32_t eax_44 = *(eax_16 i+ 0x8c)
    char const* const var_40
    
    if (eax_44 == 0)
        var_40 = "1 Week"
    else if (eax_44 == 1)
        var_40 = "30 Min"
    else
        if (eax_44 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x76a, "GetTimeLimitText")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_40 = "4 Weeks"
    
    int128_t* eax_50 = sub_4f6e90(data_31669ec, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3)
    *(eax_50 + 0x64) = *eax_50 + 1
    char edx_5 = sub_4c4590(var_40)
    *(eax_50 + 0x151) = 1
    
    if ((data_31669fc & 0x20) == 0)
        data_31669fc.d |= 0x20
        int32_t var_c_11 = 5
        int32_t eax_52
        eax_52, edx_5 = sub_4f5220(esi_1, "btnStart")
        data_31669e8 = eax_52
        int32_t var_c_12 = 0xffffffff
    
    if ((data_31669fc & 0x40) == 0)
        data_31669fc.d |= 0x40
        int32_t var_c_13 = 6
        int32_t eax_53
        eax_53, edx_5 = sub_4f5220(esi_1, "btnCreate")
        data_31669e4 = eax_53
        int32_t var_c_14 = 0xffffffff
    
    if ((data_31669fc & 0x80) == 0)
        data_31669fc.d |= 0x80
        int32_t var_c_15 = 7
        int32_t eax_54
        eax_54, edx_5 = sub_4f5220(esi_1, "btnAccept")
        data_31669e0 = eax_54
        int32_t var_c_16 = 0xffffffff
    
    if ((data_31669fc.d & 0x100) == 0)
        data_31669fc.d |= 0x100
        int32_t var_c_17 = 8
        int32_t eax_55
        eax_55, edx_5 = sub_4f5220(esi_1, "btnJoin")
        data_31669dc = eax_55
        int32_t var_c_18 = 0xffffffff
    
    if ((data_31669fc.d & 0x200) == 0)
        data_31669fc.d |= 0x200
        int32_t var_c_19 = 9
        int32_t eax_56
        eax_56, edx_5 = sub_4f5220(esi_1, "btnDecline")
        data_31669d8 = eax_56
        int32_t var_c_20 = 0xffffffff
    
    if ((data_31669fc.d & 0x400) == 0)
        data_31669fc.d |= 0x400
        int32_t var_c_21 = 0xa
        int32_t eax_57
        eax_57, edx_5 = sub_4f5220(esi_1, "btnLeave")
        data_31669d4 = eax_57
        int32_t var_c_22 = 0xffffffff
    
    if ((data_31669fc.d & 0x800) == 0)
        data_31669fc.d |= 0x800
        int32_t var_c_23 = 0xb
        int32_t eax_58
        eax_58, edx_5 = sub_4f5220(esi_1, "btnBack")
        data_31669d0 = eax_58
        int32_t var_c_24 = 0xffffffff
    
    int32_t eax_59 = data_307d080
    void* var_44
    
    if (eax_59 == 0)
        int128_t* eax_61 = sub_4f6e90(data_31669e8, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_16 = data_31669e4
        *(eax_61 + 0x21) = 0
        int128_t* eax_63 = sub_4f6e90(edi_16, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_18 = data_31669dc
        *(eax_63 + 0x21) = 1
        int128_t* eax_65 = sub_4f6e90(edi_18, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_20 = data_31669e0
        *(eax_65 + 0x21) = 1
        int128_t* eax_67 = sub_4f6e90(edi_20, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_22 = data_31669d8
        *(eax_67 + 0x21) = 1
        int128_t* eax_69 = sub_4f6e90(edi_22, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_24 = data_31669d4
        *(eax_69 + 0x21) = 1
        *(sub_4f6e90(edi_24, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x21) = 1
    else if (eax_59 == 3)
        char edx_7 = sub_4fa2c0(arg1, 1)
        int32_t var_88_4 = 1
        char edx_8 = sub_4fa4e0(arg1, data_31669e4, edx_7)
        int32_t var_90_1 = 1
        sub_4fa4e0(arg1, data_31669e8, edx_8)
        int128_t* eax_76 = sub_4f6e90(data_31669e4, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_28 = data_31669e8
        *(eax_76 + 0x22) = 0
        int128_t* eax_78 = sub_4f6e90(edi_28, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_30 = data_31669e0
        *(eax_78 + 0x22) = 0
        int128_t* eax_80 = sub_4f6e90(edi_30, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_32 = data_31669dc
        *(eax_80 + 0x22) = 0
        int128_t* eax_82 = sub_4f6e90(edi_32, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_34 = data_31669d8
        *(eax_82 + 0x22) = 0
        int128_t* eax_84 = sub_4f6e90(edi_34, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_36 = data_31669d4
        *(eax_84 + 0x22) = 0
        int128_t* eax_86 = sub_4f6e90(edi_36, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_38 = data_31669d0
        *(eax_86 + 0x22) = 0
        *(sub_4f6e90(edi_38, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x22) = 0
        sub_4075c0()
        void* eax_89
        void* edx_9
        eax_89, edx_9 = sub_40c6f0(&data_307d084)
        int32_t esi_46 = *(eax_89 + 0x140)
        var_44 = 0xffffffff
        void* var_40_1 = nullptr
        void* eax_91
        
        if (esi_46 s> 0)
            int32_t eax_90 = sub_4194b0()
            void* ecx_12 = eax_89
            
            do
                if (*ecx_12 == eax_90)
                    var_44 = var_40_1
                
                edx_9 = var_40_1 + 1
                ecx_12 += 0x50
                var_40_1 = edx_9
            while (edx_9 s< esi_46)
            
            eax_91 = var_44
        
        if (esi_46 s> 0 && eax_91 != 0xffffffff)
            if (*(eax_89 + eax_91 * 0x50 + 0x30) != 4 || *(eax_89 + 0x1dc) != 1)
                float edx_18 = data_31669dc
                int32_t var_80_8 = 1
                char edx_19 = sub_4fa4e0(arg1, edx_18, edx_18.b)
                int32_t var_88_7 = 1
                char edx_20 = sub_4fa4e0(arg1, data_31669e0, edx_19)
                int32_t var_90_4 = 1
                sub_4fa4e0(arg1, data_31669d8, edx_20)
                float edx_21 = data_31669d4
                int32_t var_98_2 = 0
                sub_4fa4e0(arg1, edx_21, edx_21.b)
                sub_407670()
            else
                int32_t var_80_7 = 1
                sub_4fa4e0(arg1, data_31669dc, edx_9.b)
                float edx_15 = data_31669e0
                int32_t var_88_6 = 0
                char edx_16 = sub_4fa4e0(arg1, edx_15, edx_15.b)
                int32_t var_90_3 = 0
                char edx_17 = sub_4fa4e0(arg1, data_31669d8, edx_16)
                int32_t var_98_1 = 1
                sub_4fa4e0(arg1, data_31669d4, edx_17)
                sub_407670()
        else
            int32_t var_80_5 = 0
            sub_4fa4e0(arg1, data_31669dc, edx_9.b)
            bool cond:2_1 = *(data_27e7a40 + 0x2c4958) s>= 0x24
            *(sub_4f6e90(data_31669dc, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x23) = cond:2_1
            int32_t var_80_6 = 1
            char edx_13 = sub_4fa4e0(arg1, data_31669e0, cond:2_1)
            int32_t var_88_5 = 1
            sub_4fa4e0(arg1, data_31669d8, edx_13)
            float edx_14 = data_31669d4
            int32_t var_90_2 = 1
            sub_4fa4e0(arg1, edx_14, edx_14.b)
            sub_407670()
    else if (eax_59 == 2 || eax_59 == 1)
        int32_t var_80_10 = 1
        char edx_27 = sub_4fa4e0(arg1, data_31669e8, edx_5)
        int32_t var_88_9 = 0
        sub_4fa4e0(arg1, data_31669e4, edx_27)
        void* eax_123 = sub_40c7a0(&data_307cd0c)
        int32_t ecx_21 = 0
        
        if (*(eax_123 + 0x50) != 0)
            ecx_21 = 1
        
        if (*(eax_123 + 0x5c) != 0)
            ecx_21 += 1
        
        if (*(eax_123 + 0x68) != 0)
            ecx_21 += 1
        
        if (*(eax_123 + 0x74) != 0)
            ecx_21 += 1
        
        bool cond:4_1 = ecx_21 s< 2
        int32_t var_80_11 = 1
        *(sub_4f6e90(data_31669e4, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x23) = cond:4_1
        char edx_29 = sub_4fa4e0(arg1, data_31669dc, cond:4_1)
        int32_t var_88_10 = 1
        sub_4fa4e0(arg1, data_31669e0, edx_29)
        float edx_30 = data_31669d8
        int32_t var_90_6 = 1
        char edx_31 = sub_4fa4e0(arg1, edx_30, edx_30.b)
        int32_t var_98_4 = 1
        sub_4fa4e0(arg1, data_31669d4, edx_31)
    else
        int32_t var_80_9 = 1
        char edx_22 = sub_4fa4e0(arg1, data_31669e8, edx_5)
        int32_t var_88_8 = 1
        sub_4fa4e0(arg1, data_31669e4, edx_22)
        float edx_23 = data_31669dc
        int32_t var_90_5 = 1
        char edx_24 = sub_4fa4e0(arg1, edx_23, edx_23.b)
        int32_t var_98_3 = 1
        char edx_25 = sub_4fa4e0(arg1, data_31669e0, edx_24)
        int32_t var_a0_1 = 1
        sub_4fa4e0(arg1, data_31669d8, edx_25)
        float edx_26 = data_31669d4
        int32_t var_a8_1 = 1
        sub_4fa4e0(arg1, edx_26, edx_26.b)
    
    int32_t (* var_28)() = sub_481890
    int32_t (* var_24)() = sub_4818a0
    int32_t (* var_20)() = sub_4818b0
    int32_t (* var_1c)() = sub_4818c0
    var_44 = 1
    int32_t (** var_40_2)() = &var_28
    char var_48_1
    
    while (true)
        int32_t eax_132 = sub_40d320(var_44 - 1)
        
        if (arg1 == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t esi_53 = zx.d(arg1.w)
        
        if (esi_53 u< data_be1cbc)
            int32_t ecx_23 = data_be1cb8
            
            if (*(esi_53 * 0x438 + ecx_23 + 0x434) == arg1)
                void* ebx_6 = esi_53 * 0x438
                void* eax_135 = ebx_6 + ecx_23
                
                if (eax_132 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_33 = *(eax_135 + (eax_132 << 2) + 0x30)
                int128_t* eax_136
                
                if (edx_33 != 0)
                    eax_136 = sub_4fc1e0(ecx_23, edx_33)
                else
                    eax_136 = sub_4fc0d0()
                    *(eax_136 + 4) = &data_83f3d3
                    *(eax_135 + (eax_132 << 2) + 0x30) = *(eax_136 + 0x1bc)
                
                *(eax_136 + 0x11c) = *var_40_2
                
                if (esi_53 u< data_be1cbc)
                    int32_t eax_137 = data_be1cb8
                    
                    if (*(esi_53 * 0x438 + eax_137 + 0x434) == arg1)
                        void* esi_55 = ebx_6 + eax_137
                        int32_t edx_36 = *(esi_55 + (eax_132 << 2) + 0x30)
                        int128_t* eax_138
                        
                        if (edx_36 != 0)
                            eax_138 = sub_4fc1e0(arg1, edx_36)
                        else
                            eax_138 = sub_4fc0d0()
                            *(eax_138 + 4) = &data_83f3d3
                            edx_36 = *(eax_138 + 0x1bc)
                            *(esi_55 + (eax_132 << 2) + 0x30) = edx_36
                        
                        char* esi_56 = *(esi_55 + 4)
                        
                        if (*(esi_56 + 4) != 0x1e)
                            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 
                                0xfd, "UIDefGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        if (*esi_56 == 0)
                            sub_520800(eax_138, edx_36.b, esi_56, 0)
                            
                            if (*esi_56 == 0)
                                sub_509540(esi_56)
                        
                        void* eax_142 = sub_4f7720(&data_84074c, eax_132 * 0x118 + ***esi_56, eax_138)
                        void* edi_50 = var_44
                        int32_t ebx_8 = *(eax_142 + 0x434)
                        float eax_143 = sub_410b50(edi_50)
                        float eax_144 = sub_410a70(edi_50)
                        int32_t ecx_29 = 0
                        void* const eax_145 = &data_841208
                        
                        while (true)
                            if (*eax_145 == edi_50)
                                if (ecx_29 * 0x28 != 0xff7bedf8)
                                    int32_t eax_146 = *(ecx_29 * 0x28 + 0x84120c)
                                    
                                    if (eax_146 == 0)
                                        var_48_1 = 1
                                    else if (eax_146 == 1)
                                        char eax_148
                                        
                                        if (data_be1cd8 == 1)
                                            int32_t eax_149 = SteamApps(eax_2)
                                            eax_148 = (*(*eax_149 + 0x1c))(*(ecx_29 * 0x28 + 0x841210))
                                        else
                                            eax_148 = 0
                                        
                                        var_48_1 = eax_148
                                    else
                                        var_48_1 = 0
                                else
                                    var_48_1 = 0
                                
                                break
                            
                            eax_145 += 0x28
                            ecx_29 += 1
                            
                            if (eax_145 s>= &data_841320)
                                var_48_1 = 0
                                break
                        
                        if (ebx_8 == 0)
                            sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                "c:\ax2010\engine\DataArray.h", 0x45, 
                                "DataArray<struct UIState>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        uint32_t eax_151 = zx.d(ebx_8.w)
                        
                        if (eax_151 u< data_be1cbc)
                            int32_t edx_40 = data_be1cb8
                            
                            if (*(eax_151 * 0x438 + edx_40 + 0x434) == ebx_8)
                                int32_t eax_152 = eax_151 * 0x438
                                int32_t* esi_60 = *(eax_152 + edx_40 + 4)
                                
                                if (esi_60[1] != 0x1e)
                                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, 
                                        "UIDef.cpp", 0xfd, "UIDefGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                if (*esi_60 == 0)
                                    edx_40 = sub_520800(eax_152, edx_40.b, esi_60, 0)
                                    
                                    if (*esi_60 == 0)
                                        edx_40 = sub_509540(esi_60)
                                
                                void* eax_155 = **esi_60
                                float i = 0f
                                var_44 = eax_155
                                
                                if (*(eax_155 + 4) s> 0)
                                    do
                                        int32_t var_80_13 = 1
                                        edx_40 = sub_4fa4e0(ebx_8, i, edx_40.b)
                                        i += 1
                                    while (i s< *(var_44 + 4))
                                
                                edx_40.b = var_48_1 == 0
                                uint32_t var_80_14 = zx.d(edx_40.b)
                                sub_4fa4e0(ebx_8, eax_143, edx_40.b)
                                int32_t edx_41 = var_48_1.d
                                int32_t var_88_11 = edx_41
                                sub_4fa4e0(ebx_8, eax_144, edx_41.b)
                                char var_68_3 = 0
                                
                                if (edi_50 == 1)
                                    var_68_3 = *(eax_16 i+ 0x87)
                                else if (edi_50 s> 4)
                                    if (edi_50 - 1 == *(eax_16 i+ 0x4c))
                                        var_68_3 = 1
                                else if (edi_50 - 1 s<= *(eax_16 i+ 0x4c))
                                    var_68_3 = 1
                                
                                if ((data_31669fc.d & 0x1000) == 0)
                                    data_31669fc.d |= 0x1000
                                    int32_t var_c_25 = 0xc
                                    data_31669cc = sub_4f5220(data_307c190, "SelectionRing")
                                    int32_t var_c_26 = 0xffffffff
                                
                                float ecx_38
                                ecx_38.b = var_68_3 == 0
                                uint32_t edx_44 = zx.d(ecx_38.b)
                                uint32_t var_80_15 = edx_44
                                sub_4fa4e0(ebx_8, data_31669cc, edx_44.b)
                                var_40_2 = &var_40_2[1]
                                var_44 = edi_50 + 1
                                
                                if (edi_50 s>= 4)
                                    break
                                
                                continue
                        
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                
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
    
    if ((data_31669fc.d & 0x2000) == 0)
        data_31669fc.d |= 0x2000
        int32_t var_c_27 = 0xd
        data_31669c8 = sub_4f5220(esi_1, "txtTimeRemainingLabel")
        int32_t var_c_28 = 0xffffffff
    
    int32_t eax_167 = data_307d080
    int32_t (* var_60)()
    void* frequency
    void* performanceCount
    
    if (eax_167 == 3 || (eax_167 == 6 && data_307d088 == 2))
        sub_4075c0()
        int32_t eax_182 = data_307d088 - 1
        
        if (eax_182 u> 3)
            sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x12e, "GameDescGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t (** ebx_10)()
        
        switch (eax_182)
            case 0, 3
                sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x127, "GameDescGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case 1
                ebx_10 = data_307d084 * 0x1f8 + data_27e7a40 + 0xad8
                var_40_2 = ebx_10
            label_4832bd:
                QueryPerformanceCounter(&performanceCount)
                void* performanceCount_1 = performanceCount
                void* esi_64 = performanceCount_1 - ebx_10[0x7c]
                int32_t var_2c
                int32_t edi_55 = sbb.d(var_2c, ebx_10[0x7d], performanceCount_1 u< ebx_10[0x7c])
                
                if ((data_3160a20 & 1) == 0)
                    data_3160a20.d |= 1
                    QueryPerformanceFrequency(&frequency)
                    data_3160a18 = frequency
                    int32_t var_34
                    data_3160a1c = var_34
                
                int32_t eax_187
                uint32_t edx_50
                eax_187, edx_50 = __allmul(esi_64, edi_55, 0x3e8, 0)
                int32_t eax_189
                int32_t edx_51
                edx_51:eax_189 =
                    muls.dp.d(0x10624dd3, __aulldiv(eax_187, edx_50, data_3160a18, data_3160a1c))
                int32_t edx_52 = edx_51 s>> 6
                int32_t ecx_48 = ebx_10[0x76] - ((edx_52 u>> 0x1f) + edx_52)
                var_60 = &data_83f3d3
                int32_t var_c_29 = 0xe
                
                if (ecx_48 s> 0)
                    char** eax_197
                    
                    if (ecx_48 s> 0x15180)
                        int32_t var_80_19 = (ecx_48 + 0xa8c0) s/ 0x15180
                        eax_197 = sub_4c4a50(&var_44, "%d days")
                        var_c_29.b = 0xf
                    else if (ecx_48 s<= 0xe10)
                        int32_t eax_205 = (ecx_48 + 0x1e) s/ 0x3c
                        int32_t var_80_21 = eax_205
                        
                        if (eax_205 s> 1)
                            eax_197 = sub_4c4a50(&var_44, "%d minutes")
                            var_c_29.b = 0x12
                        else
                            eax_197 = sub_4c4a50(&var_44, "1 minute")
                            var_c_29.b = 0x11
                    else
                        int32_t var_80_20 = ecx_48 s/ 0xe10
                        eax_197 = sub_4c4a50(&var_44, "%d hours")
                        var_c_29.b = 0x10
                    
                    sub_4c4510(eax_197)
                    var_c_29.b = 0xe
                    void* eax_206 = var_44
                    
                    if (eax_206 != 0 && *eax_206 != 0)
                        void* eax_208 = sub_4c4060(&var_44)
                        int32_t temp6_1 = *(eax_208 + 4)
                        *(eax_208 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            int32_t esi_66 = *(eax_208 + 0xc) + 0x10
                            sub_4f4430(eax_208, sub_4f4380(esi_66), esi_66)
                else
                    ebx_10[0x77] = 6
                    sub_4c4590("INVITATION EXPIRED")
                
                sub_407670()
                int32_t (* ebx_12)() = var_60
                
                if (var_40_2[0x77] != 6)
                    int32_t (* eax_211)() = &data_83f3d3
                    
                    if (ebx_12 != 0)
                        eax_211 = ebx_12
                    
                    int32_t (* var_80_24)() = eax_211
                    int32_t (** esi_67)() = sub_4c4a50(&var_44, "Invitation expires in %s")
                    var_c_29.b = 0x13
                    int32_t (* ecx_51)() = &data_83f3d3
                    
                    if (ebx_12 != 0)
                        ecx_51 = ebx_12
                    
                    int32_t (* eax_213)() = *esi_67
                    
                    if (eax_213 == 0)
                        eax_213 = &data_83f3d3
                    
                    if (ecx_51 != eax_213)
                        if (ebx_12 != 0 && *ebx_12 != 0)
                            void* eax_215 = sub_4c4060(&var_60)
                            int32_t temp7_1 = *(eax_215 + 4)
                            *(eax_215 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                int32_t esi_69 = *(eax_215 + 0xc) + 0x10
                                sub_4f4430(eax_215, sub_4f4380(esi_69), esi_69)
                        
                        int32_t (* eax_218)() = *esi_67
                        var_60 = eax_218
                        
                        if (eax_218 != 0 && *eax_218 != 0)
                            void* eax_220 = sub_4c4060(&var_60)
                            *(eax_220 + 4) += 1
                        
                        ebx_12 = var_60
                    
                    var_c_29.b = 0xe
                    void* edi_59 = var_44
                    
                    if (edi_59 != 0 && *edi_59 != 0)
                        if (*(edi_59 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp8_1 = *(edi_59 - 0xc)
                        *(edi_59 - 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            int32_t esi_71 = *(edi_59 - 4) + 0x10
                            sub_4f4430(edi_59 - 0x10, sub_4f4380(esi_71), esi_71)
                
                int32_t (* edi_61)() = &data_83f3d3
                
                if (ebx_12 != 0)
                    edi_61 = ebx_12
                
                uint32_t eax_225 = zx.d(arg1.w)
                int32_t ecx_56
                int32_t edx_63
                
                if (eax_225 u< data_be1cbc)
                    edx_63 = data_be1cb8
                    ecx_56 = eax_225 * 0x438
                
                if (eax_225 u>= data_be1cbc || *(ecx_56 + edx_63 + 0x434) != arg1)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ebx_13 = edx_63 + eax_225 * 0x438
                int32_t eax_228 = data_31669c8
                
                if (eax_228 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_64 = *(ebx_13 + (eax_228 << 2) + 0x30)
                int128_t* eax_230
                
                if (edx_64 != 0)
                    eax_230 = sub_4fc1e0(ecx_56, edx_64)
                else
                    eax_230 = sub_4fc0d0()
                    *(eax_230 + 4) = &data_83f3d3
                    *(ebx_13 + ((eax_228 + 0xc) << 2)) = *(eax_230 + 0x1bc)
                
                *(eax_230 + 0x64) = *eax_230 + 1
                sub_4c4590(edi_61)
                int32_t var_c_30 = 0xffffffff
                int32_t (* eax_232)() = var_60
                *(eax_230 + 0x151) = 1
                
                if (eax_232 != 0 && *eax_232 != 0)
                    if (*(eax_232 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp9_1 = *(eax_232 - 0xc)
                    *(eax_232 - 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        void* edi_62 = data_26a44e4
                        int32_t esi_76 = *(eax_232 - 4) + 0x10
                        
                        if (edi_62 == 0)
                            sub_4f4250()
                            edi_62 = data_26a44e4
                        
                        int32_t edx_67 = 0
                        int32_t* edi_63
                        
                        while (true)
                            if (esi_76 s<= 1 << (edx_67.b + 4))
                                edi_63 = edi_62 + edx_67 * 0x14
                                break
                            
                            edx_67 += 1
                            
                            if (edx_67 s>= 7)
                                edi_63 = edi_62 + 0x8c
                                break
                        
                        sub_4f4430(eax_232 - 0x10, edi_63, esi_76)
            case 2
                int32_t (** edx_48)() = data_307d084 * 0x1f8 + data_27e7a40 + 0x2c4968
                var_40_2 = edx_48
                ebx_10 = edx_48
                goto label_4832bd
    else
        int32_t edi_53 = data_31669c8
        int32_t eax_168
        int32_t ecx_40
        eax_168, ecx_40 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (edi_53 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_45 = *(eax_168 + (edi_53 << 2) + 0x30)
        int128_t* eax_178
        
        if (edx_45 != 0)
            eax_178 = sub_4fc1e0(ecx_40, edx_45)
        else
            eax_178 = sub_4fc0d0()
            *(eax_178 + 4) = &data_83f3d3
            *(eax_168 + (edi_53 << 2) + 0x30) = *(eax_178 + 0x1bc)
        
        *(eax_178 + 0x64) = *eax_178 + 1
        sub_4c4590(&data_83f3d3)
        *(eax_178 + 0x151) = 1
    
    int32_t* esi_77
    
    if ((data_31669fc.d & 0x4000) != 0)
        esi_77 = esi_1
    else
        data_31669fc.d |= 0x4000
        esi_77 = esi_1
        int32_t var_c_31 = 0x14
        data_31669c4 = sub_4f5220(esi_77, "chkAdv2P")
        int32_t var_c_32 = 0xffffffff
    
    if ((data_31669fc.d & 0x8000) == 0)
        data_31669fc.d |= 0x8000
        int32_t var_c_33 = 0x15
        data_31669c0 = sub_4f5220(esi_77, "chkGoals")
        int32_t var_c_34 = 0xffffffff
    
    if ((data_31669fc.d & 0x10000) == 0)
        data_31669fc.d |= 0x10000
        int32_t var_c_35 = 0x16
        data_31669bc = sub_4f5220(esi_77, "chkTakeovers")
        int32_t var_c_36 = 0xffffffff
    
    if ((data_31669fc.d & 0x20000) == 0)
        data_31669fc.d |= 0x20000
        int32_t var_c_37 = 0x17
        data_31669b8 = sub_4f5220(esi_77, "chkRvIScenario")
        int32_t var_c_38 = 0xffffffff
    
    void* eax_241
    char edx_68
    eax_241, edx_68 = sub_40c7a0(&data_307cd0c)
    int32_t ecx_59 = 0
    
    if (*(eax_241 + 0x50) != 0)
        ecx_59 = 1
    
    if (*(eax_241 + 0x5c) != 0)
        ecx_59 += 1
    
    if (*(eax_241 + 0x68) != 0)
        ecx_59 += 1
    
    if (*(eax_241 + 0x74) != 0)
        ecx_59 += 1
    
    void* const eax_242
    
    if (ecx_59 == 2)
        eax_242, edx_68 = sub_40c7a0(&data_307cd0c)
    
    if (ecx_59 != 2 || *(eax_242 + 0x84) != 0)
        eax_242 = 1
    else
        eax_242.b = 0
    
    void* const var_80_28 = eax_242
    sub_4fa4e0(arg1, data_31669c4, edx_68)
    int32_t eax_245 = *(sub_40c7a0(&data_307cd0c) + 0x4c)
    void* const eax_246
    
    if (eax_245 s>= 1 && eax_245 s<= 3)
        eax_246 = sub_40c7a0(&data_307cd0c)
    
    if (eax_245 s< 1 || eax_245 s> 3 || *(eax_246 + 0x85) != 0)
        eax_246 = 1
    else
        eax_246.b = 0
    
    float edx_69 = data_31669c0
    void* const var_80_29 = eax_246
    sub_4fa4e0(arg1, edx_69, edx_69.b)
    void* eax_248
    char edx_70
    eax_248, edx_70 = sub_40c7a0(&data_307cd0c)
    int32_t eax_249 = *(eax_248 + 0x4c)
    void* const eax_250
    
    if (eax_249 s>= 2 && eax_249 s<= 3)
        eax_250, edx_70 = sub_40c7a0(&data_307cd0c)
    
    if (eax_249 s< 2 || eax_249 s> 3 || *(eax_250 + 0x86) != 0)
        eax_250 = 1
    else
        eax_250.b = 0
    
    void* const var_80_30 = eax_250
    sub_4fa4e0(arg1, data_31669bc, edx_70)
    void* eax_253
    char edx_71
    eax_253, edx_71 = sub_40c7a0(&data_307cd0c)
    int32_t eax_254 = *(eax_253 + 0x4c)
    float edi_64
    
    if (eax_254 s< 2 || eax_254 s> 3)
        edi_64 = eax_16
        eax_254 = 1
    else
        edi_64 = eax_16
        
        if (*(edi_64 i+ 0x44) != 2)
            eax_254 = 1
        else
            eax_254.b = 0
    
    int32_t var_80_31 = eax_254
    sub_4fa4e0(arg1, data_31669b8, edx_71)
    void* esi_79 = arg1 & 0xffff
    void* result_2 = nullptr
    int128_t* result_1 = nullptr
    frequency = esi_79 * 0x438
    
    while (true)
        if ((data_31669fc.d & 0x40000) == 0)
            data_31669fc.d |= 0x40000
            int32_t var_c_39 = 0x18
            data_31669b4 = sub_4f5220(data_307c170, "bgPlayer")
        
        if ((data_31669fc.d & 0x80000) == 0)
            data_31669fc.d |= 0x80000
            int32_t var_c_40 = 0x19
            data_31669b0 = sub_4f5220(data_307c170, "btnEmpty")
        
        if ((data_31669fc.d & 0x100000) == 0)
            data_31669fc.d |= 0x100000
            int32_t var_c_41 = 0x1a
            data_31669ac = sub_4f5220(data_307c170, "btnFrame")
        
        var_60 = &data_83f3d3
        int32_t var_c_42 = 0x1b
        var_48_1.d = fconvert.s(float.t(1))
        void* performanceCount_2 = edi_64 i+ result_2 * 0xc
        int32_t eax_261 = *(performanceCount_2 + 0x50)
        int32_t var_50_3 = data_31669b0
        int32_t var_64_1 = 0
        performanceCount = performanceCount_2
        
        switch (eax_261)
            case 0
                sub_4c4590(&data_83f3d3)
                var_50_3 = data_31669b0
            case 1
                if (data_307d080 != 0)
                    sub_4075c0()
                    int32_t eax_265 = data_307d080
                    int32_t eax_268
                    
                    if ((eax_265 == 1 || eax_265 == 2) && result_2 == 0)
                        sub_4c4590(data_27e7a54)
                        eax_268 = sub_4ba260(*(data_27e7a54 + 0x18))
                    label_483b3e:
                        var_64_1 = eax_268
                        sub_407670()
                        var_50_3 = data_31669ac
                    else
                        if (eax_265 != 3 && eax_265 != 6)
                        label_483b2a:
                            sub_4c4590("open")
                            eax_268 = data_307c580
                            var_48_1.d = fconvert.s(fconvert.t(0.300000012f))
                            goto label_483b3e
                        
                        int32_t eax_269 = data_307d088
                        
                        if (eax_269 != 2 && eax_269 != 3)
                            sub_4c4590(data_27e7a54)
                            eax_268 = sub_4ba260(*(data_27e7a54 + 0x18))
                            goto label_483b3e
                        
                        void* eax_272 = sub_40c6f0(&data_307d084)
                        
                        if (result_2 s>= *(eax_272 + 0x140))
                            goto label_483b2a
                        
                        void* esi_83 = result_1 * 0x50 + eax_272
                        sub_4c4590(esi_83 + 0xc)
                        var_64_1 = sub_4ba260(*(esi_83 + 0x2c))
                        
                        if (*(esi_83 + 0x30) != 4)
                            sub_407670()
                            var_50_3 = data_31669ac
                        else
                            var_48_1.d = fconvert.s(fconvert.t(0.300000012f))
                            sub_407670()
                            var_50_3 = data_31669ac
                else
                    if (result_2 != 0)
                        sub_4c5870("i == 0", &data_83f3d3, "..\code\RftGVR.cpp", 0x144f, 
                            "CreateGameUpdateNew")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_4c4590(data_27e7a54)
                    var_64_1 = sub_4ba260(*(data_27e7a54 + 0x18))
                    var_50_3 = data_31669ac
            case 2
                sub_4c4590("AI")
                var_50_3 = data_31669ac
                
                switch (*(edi_64 i+ ((result_1 * 3 + 0x15) << 2)) + 0xf)
                    case 0, 1, 4
                        var_64_1 = data_307c018
                    case 5
                        var_64_1 = data_307c02c
                    case 6
                        var_64_1 = data_307c030
                    case 7
                        var_64_1 = data_307c034
                    case 8
                        var_64_1 = data_307c000
                    case 9
                        var_64_1 = data_307bff8
                    case 0xa
                        var_64_1 = data_307bffc
                    case 0xb
                        var_64_1 = data_307c004
                    case 0xc
                        var_64_1 = data_307c038
                    case 0xd
                        var_64_1 = data_307c030
                    case 0xe
                        var_64_1 = data_307c014
                    case 0xf
                        var_64_1 = data_307c008
                    case 0x10
                        var_64_1 = data_307c010
                    case 0x11
                        var_64_1 = data_307c00c
                    default
                        var_64_1 = data_307c018
            case 3
                int32_t eax_276 = data_307d080
                
                if (eax_276 == 2)
                    int32_t i_1 = *(performanceCount_2 + 0x58)
                    sub_4075c0()
                    void* ecx_69 = data_27e7a40
                    int32_t eax_277 = *(ecx_69 + 0x3188e4)
                    int32_t ebx_16 = 0
                    
                    if (eax_277 s<= 0)
                    label_483b8d:
                        sub_407670()
                    label_483ba2:
                        *(performanceCount_2 + 0x50) = 0
                        sub_4c4590(&data_83f3d3)
                        var_50_3 = data_31669b0
                    else
                        void* ecx_70 = ecx_69 + 0x317ad4
                        
                        while (*ecx_70 != i_1)
                            ebx_16 += 1
                            ecx_70 += 0x3c
                            
                            if (ebx_16 s>= eax_277)
                                goto label_483b8d
                        
                        sub_407670()
                        
                        if (ebx_16 == 0xffffffff)
                            goto label_483ba2
                        
                        sub_4075c0()
                        int32_t esi_90 = ebx_16 * 0x3c
                        sub_4c4590(esi_90 + data_27e7a40 + 0x317aec)
                        var_48_1.d = fconvert.s(fconvert.t(0.5f))
                        var_64_1 = sub_4ba260(*(esi_90 + data_27e7a40 + 0x317b0c))
                        var_50_3 = data_31669ac
                        sub_407670()
                else if (eax_276 == 3)
                    sub_4075c0()
                    void* eax_286 = sub_40c6f0(&data_307d084)
                    int32_t edx_79 = 0
                    int32_t ecx_74 = 0
                    void* esi_91 = edi_64 i+ 0x50
                    
                    while (true)
                        if (result_2 == ecx_74)
                            if (edx_79 != 0xffffffff)
                                if (edx_79 s>= *(eax_286 + 0x140))
                                    sub_4c5870("playerIndex < setup.numPlayers", &data_83f3d3, 
                                        "..\code\RftGVR.cpp", 0x14a3, "CreateGameUpdateNew")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* esi_94 = edx_79 * 0x50 + eax_286
                                sub_4c4590(esi_94 + 0xc)
                                var_64_1 = sub_4ba260(*(esi_94 + 0x2c))
                                var_50_3 = data_31669ac
                                
                                if (*(esi_94 + 0x30) == 4)
                                    var_48_1.d = fconvert.s(fconvert.t(0.300000012f))
                            
                            sub_407670()
                            break
                        
                        if (*esi_91 != 0)
                            edx_79 += 1
                        
                        ecx_74 += 1
                        esi_91 += 0xc
                        
                        if (ecx_74 s>= 4)
                            sub_407670()
                            break
        
        var_28 = nullptr
        int32_t ebx_17 = (&data_315ff24)[result_1]
        int32_t var_24_1 = 0
        
        if (esi_79 u< data_be1cbc)
            int32_t ecx_71 = data_be1cb8
            
            if (*(esi_79 * 0x438 + ecx_71 + 0x434) == arg1)
                void* esi_85 = frequency + ecx_71
                
                if (ebx_17 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_77 = *(esi_85 + (ebx_17 << 2) + 0x30)
                int128_t* eax_281
                
                if (edx_77 != 0)
                    eax_281 = sub_4fc1e0(ecx_71, edx_77)
                else
                    eax_281, edx_77 = sub_4fc0d0()
                    *(eax_281 + 4) = &data_83f3d3
                    *(esi_85 + (ebx_17 << 2) + 0x30) = *(eax_281 + 0x1bc)
                
                char* esi_95 = *(esi_85 + 4)
                
                if (*(esi_95 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*esi_95 == 0)
                    sub_520800(eax_281, edx_77.b, esi_95, 0)
                    
                    if (*esi_95 == 0)
                        sub_509540(esi_95)
                
                int32_t eax_303 = *(sub_4f7720(&var_28, ebx_17 * 0x118 + ***esi_95, eax_281) + 0x434)
                
                if (eax_303 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t edi_67 = zx.d(eax_303.w)
                
                if (edi_67 u< data_be1cbc)
                    int32_t esi_96 = data_be1cb8
                    
                    if (*(edi_67 * 0x438 + esi_96 + 0x434) == eax_303)
                        int32_t eax_307 = edi_67 * 0x438
                        int32_t esi_97 = esi_96 + eax_307
                        int32_t eax_308 = data_31669b4
                        
                        if (eax_308 s>= 0x100)
                            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                                "UIStateElementGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t edx_88 = *(esi_97 + (eax_308 << 2) + 0x30)
                        int128_t* eax_309
                        
                        if (edx_88 != 0)
                            eax_309 = sub_4fc1e0(eax_303, edx_88)
                        else
                            eax_309 = sub_4fc0d0()
                            *(eax_309 + 4) = &data_83f3d3
                            *(esi_97 + ((eax_308 + 0xc) << 2)) = *(eax_309 + 0x1bc)
                        
                        *(eax_309 + 0x21) = 0
                        
                        if (edi_67 u< data_be1cbc)
                            int32_t ebx_21 = data_be1cb8
                            
                            if (*(edi_67 * 0x438 + ebx_21 + 0x434) == eax_303)
                                int32_t esi_98 = data_31669b4
                                int32_t ebx_22 = ebx_21 + eax_307
                                
                                if (esi_98 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_89 = *(ebx_22 + (esi_98 << 2) + 0x30)
                                int128_t* eax_312
                                
                                if (edx_89 != 0)
                                    eax_312 = sub_4fc1e0(eax_303, edx_89)
                                else
                                    eax_312 = sub_4fc0d0()
                                    *(eax_312 + 4) = &data_83f3d3
                                    *(ebx_22 + (esi_98 << 2) + 0x30) = *(eax_312 + 0x1bc)
                                
                                *(eax_312 + 0x22) = 1
                                
                                if (edi_67 u< data_be1cbc)
                                    int32_t ebx_23 = data_be1cb8
                                    
                                    if (*(edi_67 * 0x438 + ebx_23 + 0x434) == eax_303)
                                        int32_t esi_99 = data_31669b0
                                        int32_t ebx_24 = ebx_23 + eax_307
                                        
                                        if (esi_99 s>= 0x100)
                                            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, 
                                                "UIDef.cpp", 0x518, "UIStateElementGet")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t edx_90 = *(ebx_24 + (esi_99 << 2) + 0x30)
                                        int128_t* eax_315
                                        
                                        if (edx_90 != 0)
                                            eax_315 = sub_4fc1e0(eax_303, edx_90)
                                        else
                                            eax_315 = sub_4fc0d0()
                                            *(eax_315 + 4) = &data_83f3d3
                                            *(ebx_24 + (esi_99 << 2) + 0x30) = *(eax_315 + 0x1bc)
                                        
                                        *(eax_315 + 0x21) = 1
                                        
                                        if (edi_67 u< data_be1cbc)
                                            int32_t ebx_25 = data_be1cb8
                                            
                                            if (*(edi_67 * 0x438 + ebx_25 + 0x434) == eax_303)
                                                int32_t esi_100 = data_31669b0
                                                int32_t ebx_26 = ebx_25 + eax_307
                                                
                                                if (esi_100 s>= 0x100)
                                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, 
                                                        "UIDef.cpp", 0x518, "UIStateElementGet")
                                                    
                                                    if (IsDebuggerPresent() == 1)
                                                        breakpoint
                                                    
                                                    sub_4c5a30()
                                                    noreturn
                                                
                                                int32_t edx_91 = *(ebx_26 + (esi_100 << 2) + 0x30)
                                                int128_t* eax_318
                                                
                                                if (edx_91 != 0)
                                                    eax_318 = sub_4fc1e0(eax_303, edx_91)
                                                else
                                                    eax_318 = sub_4fc0d0()
                                                    *(eax_318 + 4) = &data_83f3d3
                                                    *(ebx_26 + (esi_100 << 2) + 0x30) =
                                                        *(eax_318 + 0x1bc)
                                                
                                                *(eax_318 + 0x22) = 1
                                                
                                                if (edi_67 u< data_be1cbc)
                                                    int32_t ebx_27 = data_be1cb8
                                                    
                                                    if (*(edi_67 * 0x438 + ebx_27 + 0x434) == eax_303)
                                                        int32_t esi_101 = data_31669ac
                                                        int32_t ebx_28 = ebx_27 + eax_307
                                                        
                                                        if (esi_101 s>= 0x100)
                                                            sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                "UIStateElementGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_4c5a30()
                                                            noreturn
                                                        
                                                        int32_t edx_92 =
                                                            *(ebx_28 + (esi_101 << 2) + 0x30)
                                                        int128_t* eax_321
                                                        
                                                        if (edx_92 != 0)
                                                            eax_321 = sub_4fc1e0(eax_303, edx_92)
                                                        else
                                                            eax_321 = sub_4fc0d0()
                                                            *(eax_321 + 4) = &data_83f3d3
                                                            *(ebx_28 + (esi_101 << 2) + 0x30) =
                                                                *(eax_321 + 0x1bc)
                                                        
                                                        *(eax_321 + 0x21) = 1
                                                        
                                                        if (edi_67 u< data_be1cbc)
                                                            int32_t ebx_29 = data_be1cb8
                                                            
                                                            if (*(edi_67 * 0x438 + ebx_29 + 0x434)
                                                                    == eax_303)
                                                                int32_t esi_102 = data_31669ac
                                                                int32_t ebx_30 = ebx_29 + eax_307
                                                                
                                                                if (esi_102 s>= 0x100)
                                                                    sub_4c5870("idx < MAX_UI_ELEMENTS", 
                                                                        &data_83f3d3, "UIDef.cpp", 0x518, 
                                                                        "UIStateElementGet")
                                                                    
                                                                    if (IsDebuggerPresent() == 1)
                                                                        breakpoint
                                                                    
                                                                    sub_4c5a30()
                                                                    noreturn
                                                                
                                                                int32_t edx_93 =
                                                                    *(ebx_30 + (esi_102 << 2) + 0x30)
                                                                int128_t* eax_324
                                                                
                                                                if (edx_93 != 0)
                                                                    eax_324 = sub_4fc1e0(eax_303, edx_93)
                                                                else
                                                                    eax_324 = sub_4fc0d0()
                                                                    *(eax_324 + 4) = &data_83f3d3
                                                                    *(ebx_30 + (esi_102 << 2) + 0x30) =
                                                                        *(eax_324 + 0x1bc)
                                                                
                                                                *(eax_324 + 0x22) = 1
                                                                
                                                                if (edi_67 u< data_be1cbc)
                                                                    int32_t esi_103 = data_be1cb8
                                                                    
                                                                    if (*(edi_67 * 0x438 + esi_103 + 0x434)
                                                                            == eax_303)
                                                                        int32_t esi_104 = esi_103 + eax_307
                                                                        
                                                                        if (var_50_3 s>= 0x100)
                                                                            break
                                                                        
                                                                        int32_t edx_94 =
                                                                            *(esi_104 + (var_50_3 << 2) + 0x30)
                                                                        int128_t* eax_327
                                                                        int32_t ecx_96
                                                                        
                                                                        if (edx_94 != 0)
                                                                            eax_327, ecx_96 =
                                                                                sub_4fc1e0(eax_303, edx_94)
                                                                        else
                                                                            eax_327 = sub_4fc0d0()
                                                                            *(eax_327 + 4) = &data_83f3d3
                                                                            ecx_96 = *(eax_327 + 0x1bc)
                                                                            *(esi_104 + (var_50_3 << 2) + 0x30) =
                                                                                ecx_96
                                                                        
                                                                        *(eax_327 + 0x21) = 0
                                                                        int128_t* result_3 = result_1
                                                                        
                                                                        if (result_3 == 0)
                                                                        label_4841fa:
                                                                            
                                                                            if (result_3 == 1)
                                                                                goto label_4841ff
                                                                        else
                                                                            if (result_3 != 1)
                                                                                if (data_307d080 != 3)
                                                                                    int32_t esi_105
                                                                                    
                                                                                    if (edi_67 u< data_be1cbc)
                                                                                        esi_105 = data_be1cb8
                                                                                    
                                                                                    if (edi_67 u>= data_be1cbc
                                                                                            || *(edi_67 * 0x438 + esi_105 + 0x434)
                                                                                            != eax_303)
                                                                                        sub_4c5870(
                                                                                            "DataArrayTryToGet(id) != NULL", 
                                                                                            &data_83f3d3, 
                                                                                            "c:\ax2010\engine\DataArray.h", 0x46, 
                                                                                            "DataArray<struct UIState>::DataArrayGet")
                                                                                        
                                                                                        if (IsDebuggerPresent() == 1)
                                                                                            breakpoint
                                                                                        
                                                                                        sub_4c5a30()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t esi_106 = esi_105 + eax_307
                                                                                    int32_t edx_96 =
                                                                                        *(esi_106 + (var_50_3 << 2) + 0x30)
                                                                                    int128_t* eax_330
                                                                                    
                                                                                    if (edx_96 != 0)
                                                                                        eax_330 = sub_4fc1e0(ecx_96, edx_96)
                                                                                    else
                                                                                        eax_330 = sub_4fc0d0()
                                                                                        *(eax_330 + 4) = &data_83f3d3
                                                                                        *(esi_106 + (var_50_3 << 2) + 0x30) =
                                                                                            *(eax_330 + 0x1bc)
                                                                                    
                                                                                    *(eax_330 + 0x22) = 0
                                                                                    result_3 = result_1
                                                                                
                                                                                goto label_4841fa
                                                                            
                                                                        label_4841ff:
                                                                            
                                                                            if (data_307d080 == 2)
                                                                                int32_t eax_331
                                                                                
                                                                                if (edi_67 u< data_be1cbc)
                                                                                    eax_331 = data_be1cb8
                                                                                
                                                                                if (edi_67 u>= data_be1cbc
                                                                                        || *(edi_67 * 0x438 + eax_331 + 0x434)
                                                                                        != eax_303)
                                                                                    sub_4c5870(
                                                                                        "DataArrayTryToGet(id) != NULL", 
                                                                                        &data_83f3d3, 
                                                                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                                                                        "DataArray<struct UIState>::DataArrayGet")
                                                                                    
                                                                                    if (IsDebuggerPresent() == 1)
                                                                                        breakpoint
                                                                                    
                                                                                    sub_4c5a30()
                                                                                    noreturn
                                                                                
                                                                                *(sub_4f6e90(var_50_3, 
                                                                                    eax_307 + eax_331, &data_83f3d3)
                                                                                    + 0x22) = 0
                                                                        
                                                                        if (var_64_1 == 0)
                                                                            *(sub_4f6e90(data_31669b4, 
                                                                                sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                                &data_83f3d3) + 0x21) = 1
                                                                        else
                                                                            var_48_1.d = fconvert.s(
                                                                                fconvert.t(var_48_1.d)
                                                                                * fconvert.t(255.0))
                                                                            long double x87_r7_8 = float.t(0)
                                                                            long double x87_r6_1 =
                                                                                fconvert.t(var_48_1.d)
                                                                            x87_r6_1 - x87_r7_8
                                                                            result_3.w =
                                                                                (x87_r6_1 < x87_r7_8 ? 1 : 0) << 8 | (
                                                                                is_unordered.t(x87_r6_1, x87_r7_8) ? 1
                                                                                : 0) << 0xa
                                                                                | (x87_r6_1 == x87_r7_8 ? 1 : 0) << 0xe
                                                                                | 0x3000
                                                                            bool p_1 = unimplemented  {test ah, 0x5}
                                                                            long double x87_r7_9
                                                                            
                                                                            if (p_1)
                                                                                x87_r7_9 = x87_r7_8 + fconvert.t(0.5)
                                                                            else
                                                                                x87_r7_9 = x87_r7_8 - fconvert.t(0.5)
                                                                            
                                                                            char eax_332 = sub_685f40(x87_r7_9)
                                                                            var_44.b = 0xff
                                                                            var_44:3.b = eax_332
                                                                            var_44:1.w = 0xffff
                                                                            void* ebx_32 = var_44
                                                                            var_40_2.b = 0
                                                                            var_40_2:1.w = 0
                                                                            var_40_2:3.b = 0
                                                                            int32_t* eax_334 = sub_4f6e90(
                                                                                data_31669b4, 
                                                                                sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                                &data_83f3d3)
                                                                            int32_t edx_99 = *eax_334 + 1
                                                                            eax_334[0x24] = var_40_2
                                                                            eax_334[0x23] = ebx_32
                                                                            int32_t ebx_33 = data_31669b4
                                                                            eax_334[0x22] = edx_99
                                                                            int128_t* eax_336 = sub_4f6e90(ebx_33, 
                                                                                sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                                &data_83f3d3)
                                                                            *(eax_336 + 0x94) = *eax_336 + 1
                                                                            *(eax_336 + 0x98) = var_64_1
                                                                        
                                                                        if ((data_31669fc.d & 0x200000) == 0)
                                                                            data_31669fc.d |= 0x200000
                                                                            var_c_42.b = 0x1c
                                                                            data_31669a8 =
                                                                                sub_4f5220(data_307c170, "txtName")
                                                                            var_c_42.b = 0x1b
                                                                        
                                                                        if ((data_31669fc.d & &__dos_header)
                                                                                == 0)
                                                                            data_31669fc.d |= &__dos_header
                                                                            var_c_42.b = 0x1d
                                                                            data_31669a4 =
                                                                                sub_4f5220(data_307c170, "bgName")
                                                                            var_c_42.b = 0x1b
                                                                        
                                                                        int32_t (* eax_342)() = var_60
                                                                        var_48_1.d = &data_83f3d3
                                                                        
                                                                        if (eax_342 != 0)
                                                                            var_48_1.d = eax_342
                                                                        
                                                                        int128_t* eax_344 = sub_4f6e90(
                                                                            data_31669a8, 
                                                                            sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                            &data_83f3d3)
                                                                        *(eax_344 + 0x64) = *eax_344 + 1
                                                                        sub_4c4590(var_48_1.d)
                                                                        bool cond:13_1 = var_60 == 0
                                                                        *(eax_344 + 0x151) = 1
                                                                        int32_t (* eax_346)() = &data_83f3d3
                                                                        
                                                                        if (not(cond:13_1))
                                                                            eax_346 = var_60
                                                                        
                                                                        char* const ecx_102 = &data_83f3d3
                                                                        int32_t eax_348
                                                                        
                                                                        while (true)
                                                                            char edx_103 = *eax_346
                                                                            char temp10_1 = *ecx_102
                                                                            bool c_2 = edx_103 u< temp10_1
                                                                            
                                                                            if (edx_103 == temp10_1)
                                                                                if (edx_103 == 0)
                                                                                    eax_348 = 0
                                                                                    break
                                                                                
                                                                                edx_103 = *(eax_346 + 1)
                                                                                char temp13_1 = ecx_102[1]
                                                                                c_2 = edx_103 u< temp13_1
                                                                                
                                                                                if (edx_103 == temp13_1)
                                                                                    eax_346 += 2
                                                                                    ecx_102 = &ecx_102[2]
                                                                                    
                                                                                    if (edx_103 != 0)
                                                                                        continue
                                                                                    
                                                                                    eax_348 = 0
                                                                                    break
                                                                            
                                                                            bool c_3 = unimplemented  {sbb eax, eax}
                                                                            eax_348 = sbb.d(
                                                                                sbb.d(eax_346, eax_346, c_2), 
                                                                                0xffffffff, c_3)
                                                                            break
                                                                        
                                                                        float edx_104 = data_31669a4
                                                                        eax_348.b = eax_348 == 0
                                                                        uint32_t var_80_32 = zx.d(eax_348.b)
                                                                        sub_4fa4e0(eax_303, edx_104, edx_104.b)
                                                                        
                                                                        if ((data_31669fc.d & &data_800000)
                                                                                == 0)
                                                                            data_31669fc.d |= &data_800000
                                                                            var_c_42.b = 0x1e
                                                                            int32_t eax_351 = sub_4f5220(
                                                                                data_307c170, "btn_AIdifficultyEasy")
                                                                            int32_t* ecx_104 = data_307c170
                                                                            data_315ff34 = eax_351
                                                                            int32_t eax_352 = sub_4f5220(ecx_104, 
                                                                                "btn_AIdifficultyMedium")
                                                                            int32_t* edx_105 = data_307c170
                                                                            data_315ff38 = eax_352
                                                                            data_315ff3c = sub_4f5220(edx_105, 
                                                                                "btn_AIdifficultyHard")
                                                                            var_c_42.b = 0x1b
                                                                        
                                                                        *(sub_4f6e90(data_315ff34, 
                                                                            sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                            &data_83f3d3) + 0x21) = 1
                                                                        *(sub_4f6e90(data_315ff38, 
                                                                            sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                            &data_83f3d3) + 0x21) = 1
                                                                        *(sub_4f6e90(data_315ff3c, 
                                                                            sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                            &data_83f3d3) + 0x21) = 1
                                                                        
                                                                        if (*(performanceCount + 0x50) == 2)
                                                                            *(sub_4f6e90(
                                                                                (&data_315ff34)[*(eax_16
                                                                                    i+ ((result_1 * 3 + 0x15) << 2))], 
                                                                                sub_4fc3d0(&data_be1cb8, eax_303), 
                                                                                &data_83f3d3) + 0x21) = 0
                                                                        
                                                                        int32_t var_c_43 = 0xffffffff
                                                                        int32_t (* eax_365)() = var_60
                                                                        
                                                                        if (eax_365 != 0 && *eax_365 != 0)
                                                                            void* eax_367 = sub_4c4060(&var_60)
                                                                            int32_t temp14_1 = *(eax_367 + 4)
                                                                            *(eax_367 + 4) -= 1
                                                                            
                                                                            if (temp14_1 == 1)
                                                                                void* edx_107 = data_26a44e4
                                                                                int32_t esi_126 =
                                                                                    *(eax_367 + 0xc) + 0x10
                                                                                
                                                                                if (edx_107 == 0)
                                                                                    sub_4f4250()
                                                                                    edx_107 = data_26a44e4
                                                                                
                                                                                int32_t eax_368 = 0
                                                                                int32_t* edi_85
                                                                                
                                                                                while (true)
                                                                                    if (esi_126 s<= 1 << (eax_368.b + 4))
                                                                                        edi_85 = edx_107 + eax_368 * 0x14
                                                                                        break
                                                                                    
                                                                                    eax_368 += 1
                                                                                    
                                                                                    if (eax_368 s>= 7)
                                                                                        edi_85 = edx_107 + 0x8c
                                                                                        break
                                                                                
                                                                                sub_4f4430(eax_367, edi_85, esi_126)
                                                                        
                                                                        void* result = result_1 + 1
                                                                        result_1 = result
                                                                        
                                                                        if (result s>= 4)
                                                                            fsbase->NtTib.ExceptionList =
                                                                                ExceptionList
                                                                            return result
                                                                        
                                                                        edi_64 = eax_16
                                                                        result_2 = result
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
                                        
                                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                            "c:\ax2010\engine\DataArray.h", 0x46, 
                                            "DataArray<struct UIState>::DataArrayGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                
                                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                    "c:\ax2010\engine\DataArray.h", 0x46, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                        
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                
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
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

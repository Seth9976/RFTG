// 函数名称: sub_451b10
// 虚拟地址: 0x451b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_451b10(int128_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6949c6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_e4
    int32_t eax_2 = __security_cookie ^ &var_e4
    int32_t __saved_edi
    int32_t var_f4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = data_315fbd0
    void** edx
    
    if ((data_3165ca4 & 1) == 0)
        data_3165ca4.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_6 = sub_4f5220(data_307c110, "tblExplore")
        int32_t* ecx_1 = data_307c110
        data_315fd20 = eax_6
        int32_t eax_7 = sub_4f5220(ecx_1, "tblDevelop")
        int32_t* edx_1 = data_307c110
        data_315fd24 = eax_7
        data_315fd28 = sub_4f5220(edx_1, "tblSettle")
        int32_t eax_10 = sub_4f5220(data_307c110, "tblTrade")
        int32_t* ecx_2 = data_307c110
        data_315fd2c = eax_10
        int32_t eax_11 = sub_4f5220(ecx_2, "tblConsume")
        int32_t* edx_2 = data_307c110
        data_315fd30 = eax_11
        data_315fd34 = sub_4f5220(edx_2, "tblProduce")
        int32_t eax_14 = sub_4f5220(data_307c110, "tblSettle2")
        int32_t* ecx_3 = data_307c110
        data_315fd38 = eax_14
        int32_t eax_15 = sub_4f5220(ecx_3, "tblSettle2Down")
        int32_t* edx_3 = data_307c110
        data_315fd3c = eax_15
        data_315fd40 = sub_4f5220(edx_3, "tblConsume2")
        int32_t eax_18
        eax_18, edx = sub_4f5220(data_307c110, "tblProduce2")
        data_315fd44 = eax_18
        int32_t var_c_2 = 0xffffffff
    
    for (int32_t* i = &data_315fd20; i s< &data_315fd48; i = &i[1])
        int32_t var_f8_1 = 1
        edx = sub_4fa4e0(arg1, *i, edx.b)
    
    char* var_d4
    int32_t* var_f8_2 = &var_d4
    sub_4c40c0(6, edx)
    char const* const eax_20 = "{help}"
    void* edx_5 = var_d4 - "{help}"
    char const i_1
    
    do
        i_1 = *eax_20
        *(edx_5 + eax_20) = i_1
        eax_20 = &eax_20[1]
    while (i_1 != 0)
    int32_t var_c_3 = 1
    
    if ((data_3165ca4 & 2) == 0)
        data_3165ca4.d |= 2
        var_c_3.b = 2
        int32_t eax_22
        eax_22, edx_5 = sub_4f5220(data_307c110, "Darken")
        data_3165ca0 = eax_22
        var_c_3.b = 1
    
    int128_t* ebx = arg1
    int32_t var_f8_3 = 1
    char edx_6 = sub_4fa4e0(ebx, data_3165ca0, edx_5.b)
    
    if ((data_3165ca4 & 4) == 0)
        data_3165ca4.d |= 4
        var_c_3.b = 3
        int32_t eax_24
        eax_24, edx_6 = sub_4f5220(data_307c110, "txtVP")
        data_3165c9c = eax_24
        var_c_3.b = 1
    
    int32_t var_f8_4 = 1
    int32_t eax_27
    int32_t edx_8
    eax_27, edx_8 = sub_4fa4e0(ebx, data_3165c9c, edx_6)
    void var_88
    sub_44fae0(eax_27, edx_8, edi, &var_88)
    var_c_3.b = 4
    int32_t var_c4 = 0
    void* var_e0
    char* var_d0
    char const* const var_cc
    int32_t var_28
    
    if (var_28 s> 0)
        while (true)
            int32_t eax_29 = var_c4 * 2
            int32_t var_84[0x17]
            float eax_31 = sub_450470(var_84[eax_29 * 2])
            
            if (ebx == 0)
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                    "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t eax_33 = zx.d(ebx.w)
            
            if (eax_33 u< data_be1cbc)
                void* edx_9 = data_be1cb8
                int32_t ecx_8 = eax_33 * 0x438
                
                if (*(ecx_8 + edx_9 + 0x434) == ebx)
                    void* esi_1 = edx_9 + eax_33 * 0x438
                    
                    if (eax_31 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_10 = *(esi_1 + (eax_31 << 2) + 0x30)
                    int128_t* eax_35
                    
                    if (edx_10 != 0)
                        eax_35 = sub_4fc1e0(ecx_8, edx_10)
                    else
                        eax_35 = sub_4fc0d0()
                        *(eax_35 + 4) = &data_83f3d3
                        edx_10 = *(eax_35 + 0x1bc)
                        *(esi_1 + (eax_31 << 2) + 0x30) = edx_10
                    
                    char* esi_2 = *(esi_1 + 4)
                    
                    if (*(esi_2 + 4) != 0x1e)
                        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                            "UIDefGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*esi_2 == 0)
                        sub_520800(eax_35, edx_10.b, esi_2, 0)
                        
                        if (*esi_2 == 0)
                            sub_509540(esi_2)
                    
                    void* eax_39
                    char edx_14
                    eax_39, edx_14 = sub_4f7720(&data_84074c, eax_31 i* 0x118 + ***esi_2, eax_35)
                    int32_t esi_3 = *(eax_39 + 0x434)
                    int32_t var_f8_5 = 0
                    sub_4fa4e0(arg1, eax_31, edx_14)
                    int32_t* eax_60
                    
                    switch ((&var_f4)[eax_29 * 2 + 0x1b])
                        case 0
                            int32_t* edi_2 = data_307c114
                            
                            if ((data_3165ca4 & 8) == 0)
                                data_3165ca4.d |= 8
                                var_c_3.b = 5
                                data_3165c98 = sub_4f5220(edi_2, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4 & 0x10) == 0)
                                data_3165ca4.d |= 0x10
                                var_c_3.b = 6
                                data_3165c94 = sub_4f5220(edi_2, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_2
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_48 =
                                sub_4f6e90(data_3165c94, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_48 + 0x64) = *eax_48 + 1
                            int32_t edx_16 = sub_4c4590(var_e0)
                            *(eax_48 + 0x151) = 1
                            char* eax_52 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_52 == 0)
                                eax_52 = &data_83f3d3
                            
                            var_c_3.b = 7
                            char* var_9c
                            void* eax_55 = *sub_44be60(&var_9c, &var_d4, 
                                sub_4fd8f0(eax_52, edx_16, eax_52, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_55 != 0)
                                var_e0 = eax_55
                            
                            int32_t* eax_57 =
                                sub_4f6e90(data_3165c98, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_58 = var_e0
                            eax_57[0x19] = *eax_57 + 1
                            sub_4c4590(eax_58)
                            *(eax_57 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_59 = var_9c
                            
                            if (eax_59 != 0 && *eax_59 != 0)
                                eax_60 = &var_9c
                            label_453ad5:
                                ebx = sub_4c4060(eax_60)
                                int32_t temp4_1 = *(ebx + 4)
                                *(ebx + 4) -= 1
                                
                                if (temp4_1 == 1)
                                    int32_t esi_106 = *(ebx + 0xc) + 0x10
                                    sub_4f4430(ebx, sub_4f4380(esi_106), esi_106)
                        case 1
                            int32_t* edi_5 = data_307c134
                            
                            if ((data_3165ca4 & 0x20) == 0)
                                data_3165ca4.d |= 0x20
                                var_c_3.b = 8
                                data_3165c90 = sub_4f5220(edi_5, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4 & 0x40) == 0)
                                data_3165ca4.d |= 0x40
                                var_c_3.b = 9
                                data_3165c8c = sub_4f5220(edi_5, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_5
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_67 =
                                sub_4f6e90(data_3165c8c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_67 + 0x64) = *eax_67 + 1
                            int32_t edx_18 = sub_4c4590(var_e0)
                            *(eax_67 + 0x151) = 1
                            char* eax_71 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_71 == 0)
                                eax_71 = &data_83f3d3
                            
                            var_c_3.b = 0xa
                            char* var_a0
                            void* eax_74 = *sub_44be60(&var_a0, &var_d4, 
                                sub_4fd8f0(eax_71, edx_18, eax_71, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_74 != 0)
                                var_e0 = eax_74
                            
                            int32_t* eax_76 =
                                sub_4f6e90(data_3165c90, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_77 = var_e0
                            eax_76[0x19] = *eax_76 + 1
                            sub_4c4590(eax_77)
                            *(eax_76 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_78 = var_a0
                            
                            if (eax_78 != 0 && *eax_78 != 0)
                                eax_60 = &var_a0
                                goto label_453ad5
                        case 2
                            int32_t* edi_8 = data_307c118
                            
                            if ((data_3165ca4 & 0x80) == 0)
                                data_3165ca4.d |= 0x80
                                var_c_3.b = 0xb
                                data_3165c88 = sub_4f5220(edi_8, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x100) == 0)
                                data_3165ca4.d |= 0x100
                                var_c_3.b = 0xc
                                data_3165c84 = sub_4f5220(edi_8, "PowerText2")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x200) == 0)
                                data_3165ca4.d |= 0x200
                                var_c_3.b = 0xd
                                data_3165c80 = sub_4f5220(edi_8, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x400) == 0)
                                data_3165ca4.d |= 0x400
                                var_c_3.b = 0xe
                                data_3165c7c = sub_4f5220(edi_8, "PowerPhaseText2")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_8
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_87 =
                                sub_4f6e90(data_3165c80, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_87 + 0x64) = *eax_87 + 1
                            sub_4c4590(var_e0)
                            *(eax_87 + 0x151) = 1
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_94 =
                                sub_4f6e90(data_3165c7c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_95 = var_e0
                            *(eax_94 + 0x64) = *eax_94 + 1
                            int32_t edx_22 = sub_4c4590(eax_95)
                            *(eax_94 + 0x151) = 1
                            char* eax_97 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_97 == 0)
                                eax_97 = &data_83f3d3
                            
                            var_c_3.b = 0xf
                            char* var_98
                            void* eax_100 = *sub_44be60(&var_98, &var_d4, 
                                sub_4fd8f0(eax_97, edx_22, eax_97, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_100 != 0)
                                var_e0 = eax_100
                            
                            int128_t* eax_102 =
                                sub_4f6e90(data_3165c88, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_102 + 0x64) = *eax_102 + 1
                            int32_t edx_23 = sub_4c4590(var_e0)
                            *(eax_102 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_106 = var_98
                            
                            if (eax_106 != 0 && *eax_106 != 0)
                                eax_106 = sub_4c4060(&var_98)
                                int32_t temp5_1 = *(eax_106 + 4)
                                *(eax_106 + 4) -= 1
                                
                                if (temp5_1 == 1)
                                    int32_t esi_23 = *(eax_106 + 0xc) + 0x10
                                    eax_106, edx_23 = sub_4f4430(eax_106, sub_4f4380(esi_23), esi_23)
                            
                            char* ecx_23 = (&var_f4)[eax_29 * 2 + 0x1e]
                            
                            if (ecx_23 == 0)
                                ecx_23 = &data_83f3d3
                            
                            var_c_3.b = 0x10
                            char* var_90
                            void* eax_112 = *sub_44be60(&var_90, &var_d4, 
                                sub_4fd8f0(eax_106, edx_23, ecx_23, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_112 != 0)
                                var_e0 = eax_112
                            
                            int32_t* eax_114 =
                                sub_4f6e90(data_3165c84, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_115 = var_e0
                            eax_114[0x19] = *eax_114 + 1
                            sub_4c4590(eax_115)
                            *(eax_114 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_116 = var_90
                            
                            if (eax_116 != 0 && *eax_116 != 0)
                                eax_60 = &var_90
                                goto label_453ad5
                        case 3
                            int32_t* edi_14 = data_307c11c
                            
                            if ((data_3165ca4.d & 0x800) == 0)
                                data_3165ca4.d |= 0x800
                                var_c_3.b = 0x11
                                data_3165c78 = sub_4f5220(edi_14, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x1000) == 0)
                                data_3165ca4.d |= 0x1000
                                var_c_3.b = 0x12
                                data_3165c74 = sub_4f5220(edi_14, "PowerText2")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x2000) == 0)
                                data_3165ca4.d |= 0x2000
                                var_c_3.b = 0x13
                                data_3165c70 = sub_4f5220(edi_14, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x4000) == 0)
                                data_3165ca4.d |= 0x4000
                                var_c_3.b = 0x14
                                data_3165c6c = sub_4f5220(edi_14, "PowerPhaseText2")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_14
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_125 =
                                sub_4f6e90(data_3165c70, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_125 + 0x64) = *eax_125 + 1
                            sub_4c4590(var_e0)
                            *(eax_125 + 0x151) = 1
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_132 =
                                sub_4f6e90(data_3165c6c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_133 = var_e0
                            *(eax_132 + 0x64) = *eax_132 + 1
                            int32_t edx_27 = sub_4c4590(eax_133)
                            *(eax_132 + 0x151) = 1
                            char* eax_135 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_135 == 0)
                                eax_135 = &data_83f3d3
                            
                            var_c_3.b = 0x15
                            char* var_94
                            void* eax_138 = *sub_44be60(&var_94, &var_d4, 
                                sub_4fd8f0(eax_135, edx_27, eax_135, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_138 != 0)
                                var_e0 = eax_138
                            
                            int128_t* eax_140 =
                                sub_4f6e90(data_3165c78, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_140 + 0x64) = *eax_140 + 1
                            int32_t edx_28 = sub_4c4590(var_e0)
                            *(eax_140 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_144 = var_94
                            
                            if (eax_144 != 0 && *eax_144 != 0)
                                eax_144 = sub_4c4060(&var_94)
                                int32_t temp6_1 = *(eax_144 + 4)
                                *(eax_144 + 4) -= 1
                                
                                if (temp6_1 == 1)
                                    int32_t esi_36 = *(eax_144 + 0xc) + 0x10
                                    eax_144, edx_28 = sub_4f4430(eax_144, sub_4f4380(esi_36), esi_36)
                            
                            char* ecx_29 = (&var_f4)[eax_29 * 2 + 0x1e]
                            
                            if (ecx_29 == 0)
                                ecx_29 = &data_83f3d3
                            
                            var_c_3.b = 0x16
                            char* var_b4
                            void* eax_150 = *sub_44be60(&var_b4, &var_d4, 
                                sub_4fd8f0(eax_144, edx_28, ecx_29, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_150 != 0)
                                var_e0 = eax_150
                            
                            int32_t* eax_152 =
                                sub_4f6e90(data_3165c74, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_153 = var_e0
                            eax_152[0x19] = *eax_152 + 1
                            sub_4c4590(eax_153)
                            *(eax_152 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_154 = var_b4
                            
                            if (eax_154 != 0 && *eax_154 != 0)
                                eax_60 = &var_b4
                                goto label_453ad5
                        case 4
                            int32_t* edi_20 = data_307c120
                            
                            if ((data_3165ca4.d & 0x8000) == 0)
                                data_3165ca4.d |= 0x8000
                                var_c_3.b = 0x17
                                data_3165c68 = sub_4f5220(edi_20, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x10000) == 0)
                                data_3165ca4.d |= 0x10000
                                var_c_3.b = 0x18
                                data_3165c64 = sub_4f5220(edi_20, "PowerText2")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x20000) == 0)
                                data_3165ca4.d |= 0x20000
                                var_c_3.b = 0x19
                                data_3165c60 = sub_4f5220(edi_20, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x40000) == 0)
                                data_3165ca4.d |= 0x40000
                                var_c_3.b = 0x1a
                                data_3165c5c = sub_4f5220(edi_20, "PowerPhaseText2")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_20
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_163 =
                                sub_4f6e90(data_3165c60, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_163 + 0x64) = *eax_163 + 1
                            sub_4c4590(var_e0)
                            *(eax_163 + 0x151) = 1
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_170 =
                                sub_4f6e90(data_3165c5c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_171 = var_e0
                            *(eax_170 + 0x64) = *eax_170 + 1
                            int32_t edx_32 = sub_4c4590(eax_171)
                            *(eax_170 + 0x151) = 1
                            char* eax_173 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_173 == 0)
                                eax_173 = &data_83f3d3
                            
                            var_c_3.b = 0x1b
                            char* var_c0
                            void* eax_176 = *sub_44be60(&var_c0, &var_d4, 
                                sub_4fd8f0(eax_173, edx_32, eax_173, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_176 != 0)
                                var_e0 = eax_176
                            
                            int128_t* eax_178 =
                                sub_4f6e90(data_3165c68, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_178 + 0x64) = *eax_178 + 1
                            int32_t edx_33 = sub_4c4590(var_e0)
                            *(eax_178 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_182 = var_c0
                            
                            if (eax_182 != 0 && *eax_182 != 0)
                                eax_182 = sub_4c4060(&var_c0)
                                int32_t temp7_1 = *(eax_182 + 4)
                                *(eax_182 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    int32_t esi_49 = *(eax_182 + 0xc) + 0x10
                                    eax_182, edx_33 = sub_4f4430(eax_182, sub_4f4380(esi_49), esi_49)
                            
                            char* ecx_35 = (&var_f4)[eax_29 * 2 + 0x1e]
                            
                            if (ecx_35 == 0)
                                ecx_35 = &data_83f3d3
                            
                            var_c_3.b = 0x1c
                            char* var_ac
                            void* eax_188 = *sub_44be60(&var_ac, &var_d4, 
                                sub_4fd8f0(eax_182, edx_33, ecx_35, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_188 != 0)
                                var_e0 = eax_188
                            
                            int32_t* eax_190 =
                                sub_4f6e90(data_3165c64, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_191 = var_e0
                            eax_190[0x19] = *eax_190 + 1
                            sub_4c4590(eax_191)
                            *(eax_190 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_192 = var_ac
                            
                            if (eax_192 != 0 && *eax_192 != 0)
                                eax_60 = &var_ac
                                goto label_453ad5
                        case 5
                            int32_t* edi_26 = data_307c124
                            
                            if ((data_3165ca4.d & 0x80000) == 0)
                                data_3165ca4.d |= 0x80000
                                var_c_3.b = 0x1d
                                data_3165c58 = sub_4f5220(edi_26, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x100000) == 0)
                                data_3165ca4.d |= 0x100000
                                var_c_3.b = 0x1e
                                data_3165c54 = sub_4f5220(edi_26, "PowerText2")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x200000) == 0)
                                data_3165ca4.d |= 0x200000
                                var_c_3.b = 0x1f
                                data_3165c50 = sub_4f5220(edi_26, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & &__dos_header) == 0)
                                data_3165ca4.d |= &__dos_header
                                var_c_3.b = 0x20
                                data_3165c4c = sub_4f5220(edi_26, "PowerPhaseText2")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_26
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_201 =
                                sub_4f6e90(data_3165c50, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_201 + 0x64) = *eax_201 + 1
                            sub_4c4590(var_e0)
                            *(eax_201 + 0x151) = 1
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_208 =
                                sub_4f6e90(data_3165c4c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_209 = var_e0
                            *(eax_208 + 0x64) = *eax_208 + 1
                            int32_t edx_37 = sub_4c4590(eax_209)
                            *(eax_208 + 0x151) = 1
                            char* eax_211 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_211 == 0)
                                eax_211 = &data_83f3d3
                            
                            var_c_3.b = 0x21
                            char* var_8c
                            void* eax_214 = *sub_44be60(&var_8c, &var_d4, 
                                sub_4fd8f0(eax_211, edx_37, eax_211, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_214 != 0)
                                var_e0 = eax_214
                            
                            int128_t* eax_216 =
                                sub_4f6e90(data_3165c58, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_216 + 0x64) = *eax_216 + 1
                            int32_t edx_38 = sub_4c4590(var_e0)
                            *(eax_216 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_220 = var_8c
                            
                            if (eax_220 != 0 && *eax_220 != 0)
                                eax_220 = sub_4c4060(&var_8c)
                                int32_t temp8_1 = *(eax_220 + 4)
                                *(eax_220 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    int32_t esi_62 = *(eax_220 + 0xc) + 0x10
                                    eax_220, edx_38 = sub_4f4430(eax_220, sub_4f4380(esi_62), esi_62)
                            
                            char* ecx_41 = (&var_f4)[eax_29 * 2 + 0x1e]
                            
                            if (ecx_41 == 0)
                                ecx_41 = &data_83f3d3
                            
                            var_c_3.b = 0x22
                            char* var_a4
                            void* eax_226 = *sub_44be60(&var_a4, &var_d4, 
                                sub_4fd8f0(eax_220, edx_38, ecx_41, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_226 != 0)
                                var_e0 = eax_226
                            
                            int32_t* eax_228 =
                                sub_4f6e90(data_3165c54, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_229 = var_e0
                            eax_228[0x19] = *eax_228 + 1
                            sub_4c4590(eax_229)
                            *(eax_228 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_230 = var_a4
                            
                            if (eax_230 != 0 && *eax_230 != 0)
                                eax_60 = &var_a4
                                goto label_453ad5
                        case 6
                            int32_t* edi_32 = data_307c128
                            
                            if ((data_3165ca4.d & &data_800000) == 0)
                                data_3165ca4.d |= &data_800000
                                var_c_3.b = 0x23
                                data_3165c48 = sub_4f5220(edi_32, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x1000000) == 0)
                                data_3165ca4.d |= 0x1000000
                                var_c_3.b = 0x24
                                data_3165c44 = sub_4f5220(edi_32, "PowerText2")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x2000000) == 0)
                                data_3165ca4.d |= 0x2000000
                                var_c_3.b = 0x25
                                data_3165c40 = sub_4f5220(edi_32, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x4000000) == 0)
                                data_3165ca4.d |= 0x4000000
                                var_c_3.b = 0x26
                                data_3165c3c = sub_4f5220(edi_32, "PowerPhaseText2")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_32
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_239 =
                                sub_4f6e90(data_3165c40, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_239 + 0x64) = *eax_239 + 1
                            sub_4c4590(var_e0)
                            *(eax_239 + 0x151) = 1
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_246 =
                                sub_4f6e90(data_3165c3c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_247 = var_e0
                            *(eax_246 + 0x64) = *eax_246 + 1
                            int32_t edx_42 = sub_4c4590(eax_247)
                            *(eax_246 + 0x151) = 1
                            char* eax_249 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_249 == 0)
                                eax_249 = &data_83f3d3
                            
                            var_c_3.b = 0x27
                            char* var_bc
                            void* eax_252 = *sub_44be60(&var_bc, &var_d4, 
                                sub_4fd8f0(eax_249, edx_42, eax_249, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_252 != 0)
                                var_e0 = eax_252
                            
                            int128_t* eax_254 =
                                sub_4f6e90(data_3165c48, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_254 + 0x64) = *eax_254 + 1
                            int32_t edx_43 = sub_4c4590(var_e0)
                            *(eax_254 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_258 = var_bc
                            
                            if (eax_258 != 0 && *eax_258 != 0)
                                eax_258 = sub_4c4060(&var_bc)
                                int32_t temp9_1 = *(eax_258 + 4)
                                *(eax_258 + 4) -= 1
                                
                                if (temp9_1 == 1)
                                    int32_t esi_75 = *(eax_258 + 0xc) + 0x10
                                    eax_258, edx_43 = sub_4f4430(eax_258, sub_4f4380(esi_75), esi_75)
                            
                            char* ecx_47 = (&var_f4)[eax_29 * 2 + 0x1e]
                            
                            if (ecx_47 == 0)
                                ecx_47 = &data_83f3d3
                            
                            var_c_3.b = 0x28
                            char* var_b8
                            void* eax_264 = *sub_44be60(&var_b8, &var_d4, 
                                sub_4fd8f0(eax_258, edx_43, ecx_47, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_264 != 0)
                                var_e0 = eax_264
                            
                            int128_t* eax_266 =
                                sub_4f6e90(data_3165c44, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_267 = var_e0
                            *(eax_266 + 0x64) = *eax_266 + 1
                            sub_4c4590(eax_267)
                            *(eax_266 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_268 = var_b8
                            
                            if (eax_268 != 0 && *eax_268 != 0)
                                eax_60 = &var_b8
                                goto label_453ad5
                        case 7
                            int32_t* edi_44 = data_307c12c
                            
                            if ((data_3165ca4.d & 0x80000000) == 0)
                                data_3165ca4.d |= 0x80000000
                                var_c_3.b = 0x2f
                                data_3165c28 = sub_4f5220(edi_44, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165c24 & 1) == 0)
                                data_3165c24.d |= 1
                                var_c_3.b = 0x30
                                data_3165c20 = sub_4f5220(edi_44, "PowerText2")
                                var_c_3.b = 4
                            
                            if ((data_3165c24 & 2) == 0)
                                data_3165c24.d |= 2
                                var_c_3.b = 0x31
                                data_3165c1c = sub_4f5220(edi_44, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            if ((data_3165c24 & 4) == 0)
                                data_3165c24.d |= 4
                                var_c_3.b = 0x32
                                data_3165c18 = sub_4f5220(edi_44, "PowerPhaseText2")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_44
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_315 =
                                sub_4f6e90(data_3165c1c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_315 + 0x64) = *eax_315 + 1
                            sub_4c4590(var_e0)
                            *(eax_315 + 0x151) = 1
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_322 =
                                sub_4f6e90(data_3165c18, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_323 = var_e0
                            *(eax_322 + 0x64) = *eax_322 + 1
                            int32_t edx_52 = sub_4c4590(eax_323)
                            *(eax_322 + 0x151) = 1
                            char* const eax_325 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_325 == 0)
                                eax_325 = &data_83f3d3
                            
                            var_c_3.b = 0x33
                            void* eax_328 = *sub_44be60(&var_cc, &var_d4, 
                                sub_4fd8f0(eax_325, edx_52, eax_325, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_328 != 0)
                                var_e0 = eax_328
                            
                            int128_t* eax_330 =
                                sub_4f6e90(data_3165c28, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_330 + 0x64) = *eax_330 + 1
                            int32_t edx_53 = sub_4c4590(var_e0)
                            *(eax_330 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_334 = var_cc
                            
                            if (eax_334 != 0 && *eax_334 != 0)
                                eax_334 = sub_4c4060(&var_cc)
                                int32_t temp11_1 = *(eax_334 + 4)
                                *(eax_334 + 4) -= 1
                                
                                if (temp11_1 == 1)
                                    int32_t esi_101 = *(eax_334 + 0xc) + 0x10
                                    eax_334, edx_53 = sub_4f4430(eax_334, sub_4f4380(esi_101), esi_101)
                            
                            char* ecx_59 = (&var_f4)[eax_29 * 2 + 0x1e]
                            
                            if (ecx_59 == 0)
                                ecx_59 = &data_83f3d3
                            
                            var_c_3.b = 0x34
                            void* eax_340 = *sub_44be60(&var_d0, &var_d4, 
                                sub_4fd8f0(eax_334, edx_53, ecx_59, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_340 != 0)
                                var_e0 = eax_340
                            
                            int128_t* eax_342 =
                                sub_4f6e90(data_3165c20, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_343 = var_e0
                            *(eax_342 + 0x64) = *eax_342 + 1
                            sub_4c4590(eax_343)
                            *(eax_342 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_344 = var_d0
                            
                            if (eax_344 != 0 && *eax_344 != 0)
                                eax_60 = &var_d0
                                goto label_453ad5
                        case 8
                            int32_t* edi_38 = data_307c130
                            
                            if ((data_3165ca4.d & 0x8000000) == 0)
                                data_3165ca4.d |= 0x8000000
                                var_c_3.b = 0x29
                                data_3165c38 = sub_4f5220(edi_38, "PowerText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x10000000) == 0)
                                data_3165ca4.d |= 0x10000000
                                var_c_3.b = 0x2a
                                data_3165c34 = sub_4f5220(edi_38, "PowerText2")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x20000000) == 0)
                                data_3165ca4.d |= 0x20000000
                                var_c_3.b = 0x2b
                                data_3165c30 = sub_4f5220(edi_38, "PowerPhaseText")
                                var_c_3.b = 4
                            
                            if ((data_3165ca4.d & 0x40000000) == 0)
                                data_3165ca4.d |= 0x40000000
                                var_c_3.b = 0x2c
                                data_3165c2c = sub_4f5220(edi_38, "PowerPhaseText2")
                                var_c_3.b = 4
                            
                            *sub_4fc3d0(&data_be1cb8, esi_3) = edi_38
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_277 =
                                sub_4f6e90(data_3165c30, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_277 + 0x64) = *eax_277 + 1
                            sub_4c4590(var_e0)
                            *(eax_277 + 0x151) = 1
                            
                            switch ((&var_f4)[eax_29 * 2 + 0x1c] - 1)
                                case 0
                                    var_e0 = &data_85d24c
                                case 1
                                    var_e0 = &data_85d250
                                case 2
                                    var_e0 = "III:"
                                case 3
                                    var_e0 = &data_85d25c
                                case 4
                                    var_e0 = &data_85d260
                                case 6
                                    var_e0 = &data_85d264
                                case 9
                                    var_e0 = &data_85d248
                                default
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, 
                                        "PhaseNumeral")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                            
                            int128_t* eax_284 =
                                sub_4f6e90(data_3165c2c, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_285 = var_e0
                            *(eax_284 + 0x64) = *eax_284 + 1
                            int32_t edx_47 = sub_4c4590(eax_285)
                            *(eax_284 + 0x151) = 1
                            char* eax_287 = (&var_f4)[eax_29 * 2 + 0x1d]
                            
                            if (eax_287 == 0)
                                eax_287 = &data_83f3d3
                            
                            var_c_3.b = 0x2d
                            char* var_b0
                            void* eax_290 = *sub_44be60(&var_b0, &var_d4, 
                                sub_4fd8f0(eax_287, edx_47, eax_287, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_290 != 0)
                                var_e0 = eax_290
                            
                            int128_t* eax_292 =
                                sub_4f6e90(data_3165c38, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            *(eax_292 + 0x64) = *eax_292 + 1
                            int32_t edx_48 = sub_4c4590(var_e0)
                            *(eax_292 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_296 = var_b0
                            
                            if (eax_296 != 0 && *eax_296 != 0)
                                eax_296 = sub_4c4060(&var_b0)
                                int32_t temp10_1 = *(eax_296 + 4)
                                *(eax_296 + 4) -= 1
                                
                                if (temp10_1 == 1)
                                    int32_t esi_88 = *(eax_296 + 0xc) + 0x10
                                    eax_296, edx_48 = sub_4f4430(eax_296, sub_4f4380(esi_88), esi_88)
                            
                            char* ecx_53 = (&var_f4)[eax_29 * 2 + 0x1e]
                            
                            if (ecx_53 == 0)
                                ecx_53 = &data_83f3d3
                            
                            var_c_3.b = 0x2e
                            char* var_a8
                            void* eax_302 = *sub_44be60(&var_a8, &var_d4, 
                                sub_4fd8f0(eax_296, edx_48, ecx_53, nullptr))
                            var_e0 = &data_83f3d3
                            
                            if (eax_302 != 0)
                                var_e0 = eax_302
                            
                            int128_t* eax_304 =
                                sub_4f6e90(data_3165c34, sub_4fc3d0(&data_be1cb8, esi_3), &data_83f3d3)
                            void* eax_305 = var_e0
                            *(eax_304 + 0x64) = *eax_304 + 1
                            sub_4c4590(eax_305)
                            *(eax_304 + 0x151) = 1
                            var_c_3.b = 4
                            char* eax_306 = var_a8
                            
                            if (eax_306 != 0 && *eax_306 != 0)
                                eax_60 = &var_a8
                                goto label_453ad5
                    
                    int32_t eax_349 = var_c4 + 1
                    var_c4 = eax_349
                    
                    if (eax_349 s>= var_28)
                        break
                    
                    ebx = arg1
                    continue
            
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    void** edx_54 = data_27e7a40
    void* eax_370 = edx_54[0x152]
    
    if (eax_370 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_375 = sub_44bf90(sx.d(*(*(*(eax_370 + 0x45844) + edi * 0x14 + 0x46c) + 4)))
    var_cc = eax_375
    
    if (eax_375 != 0)
        void** var_f8_30 = &var_e0
        sub_4c40c0(4, edx_54)
        void* esi_107 = var_e0
        char const* const eax_376 = "{vp}"
        void* edx_56 = esi_107 - "{vp}"
        char const i_2
        
        do
            i_2 = *eax_376
            *(eax_376 + edx_56) = i_2
            eax_376 = &eax_376[1]
        while (i_2 != 0)
        var_c_3.b = 0x35
        char* i_3 = *eax_375
        
        while (i_3 != 0)
            char* eax_377
            int32_t ecx_65
            void* edx_57
            eax_377, ecx_65, edx_57 = sub_4fd8f0(eax_376, edx_56, i_3, nullptr)
            bool cond:5_1 = *eax_377 == 0
            var_d0 = eax_377
            
            if (not(cond:5_1))
                if (esi_107 == 0 || *esi_107 == 0)
                    do
                        ecx_65.b = *eax_377
                        eax_377 = &eax_377[1]
                    while (ecx_65.b != 0)
                    
                    void* eax_378 = eax_377 - &eax_377[1]
                    
                    if (eax_378 s<= 0)
                        sub_4c5870("length > 0", &data_83f3d3, "xString.cpp", 0x27, 
                            "sXStringAllocBufferLength")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t edx_59 = 0
                    int32_t* esi_109
                    
                    while (true)
                        if (eax_378 + 0x11 s<= 1 << (edx_59 + 4).b)
                            esi_109 = data_26a44e4 + edx_59 * 0x14
                            break
                        
                        edx_59 += 1
                        
                        if (edx_59 s>= 7)
                            esi_109 = data_26a44e4 + 0x8c
                            break
                    
                    esi_109[3] += 1
                    int32_t* eax_381
                    int32_t ecx_67
                    
                    if (eax_378 + 0x11 s<= 0x400 || esi_109[4] != 0xffffffff)
                        if (*esi_109 == 0)
                            sub_4f4170(esi_109)
                        
                        eax_381 = *esi_109
                        *esi_109 = *eax_381
                    else
                        eax_381, ecx_67 = sub_4cce80(eax_378 + 0x11)
                    
                    eax_381[2] = eax_378
                    esi_107 = &eax_381[4]
                    *eax_381 = 0xfafafafa
                    eax_381[1] = 1
                    eax_381[3] = eax_378 + 1
                    char* eax_383 = var_d0
                    var_e0 = esi_107
                    edx_57 = esi_107 - eax_383
                    
                    do
                        ecx_67.b = *eax_383
                        *(eax_383 + edx_57) = ecx_67.b
                        eax_383 = &eax_383[1]
                    while (ecx_67.b != 0)
                else
                    if (*(esi_107 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    ebx = var_d0
                    int32_t edi_53 = *(esi_107 - 8)
                    void* eax_384 = ebx
                    void** edx_62 = eax_384 + 1
                    
                    do
                        ecx_65.b = *eax_384
                        eax_384 += 1
                    while (ecx_65.b != 0)
                    
                    void* eax_385 = eax_384 - edx_62
                    void* eax_386 = eax_385 + edi_53
                    sub_4c4160(eax_386, edx_62, &var_e0, eax_386, 1)
                    esi_107 = var_e0
                    edx_57 = sub_5ab990(esi_107 + edi_53, ebx, eax_385 + 1)
            
            if (esi_107 == 0 || *esi_107 == 0)
                if (data_26a44e4 == 0)
                    sub_4f4250()
                
                int32_t edx_63 = 0
                int32_t* esi_113
                
                while (true)
                    if (1 << (edx_63.b + 4) s>= 0x12)
                        esi_113 = data_26a44e4 + edx_63 * 0x14
                        break
                    
                    edx_63 += 1
                    
                    if (edx_63 s>= 7)
                        esi_113 = data_26a44e4 + 0x8c
                        break
                
                esi_113[3] += 1
                
                if (*esi_113 == 0)
                    sub_4f4170(esi_113)
                
                int32_t* eax_389 = *esi_113
                *esi_113 = *eax_389
                esi_107 = &eax_389[4]
                *eax_389 = 0xfafafafa
                eax_389[1] = 1
                eax_389[2] = 1
                eax_389[3] = 2
                char* eax_390 = &data_86232c
                var_e0 = esi_107
                edx_56 = esi_107 - &data_86232c
                int32_t ecx_70
                
                do
                    ecx_70.b = *eax_390
                    *(eax_390 + edx_56) = ecx_70.b
                    eax_390 = &eax_390[1]
                while (ecx_70.b != 0)
            else
                if (*(esi_107 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* edi_54 = *(esi_107 - 8)
                sub_4c4160(edi_54 + 1, edx_57, &var_e0, edi_54 + 1, 1)
                edx_56.w = 0xd
                esi_107 = var_e0
                *(esi_107 + edi_54) = 0xd
            
            char const* const eax_392 = var_cc
            i_3 = *(eax_392 + 4)
            eax_376 = &eax_392[4]
            var_cc = eax_376
        
        int32_t* edi_55 = data_307c110
        
        if ((data_3165c24 & 8) == 0)
            data_3165c24.d |= 8
            var_c_3.b = 0x36
            int32_t eax_393
            eax_393, edx_56 = sub_4f5220(edi_55, "vpBg")
            data_3165c14 = eax_393
            var_c_3.b = 0x35
        
        if ((data_3165c24 & 0x10) == 0)
            data_3165c24.d |= 0x10
            var_c_3.b = 0x37
            int32_t eax_394
            eax_394, edx_56 = sub_4f5220(edi_55, "txtVP")
            data_3165c10 = eax_394
            var_c_3.b = 0x35
        
        int32_t var_f8_31 = 0
        char edx_66 = sub_4fa4e0(arg1, data_3165c14, edx_56.b)
        int32_t var_100_18 = 0
        sub_4fa4e0(arg1, data_3165c10, edx_66)
        var_d0 = &data_83f3d3
        
        if (esi_107 != 0)
            var_d0 = esi_107
        
        if (arg1 == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_403 = zx.d(arg1.w)
        int32_t ecx_75
        int32_t edx_67
        
        if (eax_403 u< data_be1cbc)
            edx_67 = data_be1cb8
            ecx_75 = eax_403 * 0x438
        
        if (eax_403 u>= data_be1cbc || *(ecx_75 + edx_67 + 0x434) != arg1)
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ebx_64 = edx_67 + eax_403 * 0x438
        int32_t eax_406 = data_3165c10
        
        if (eax_406 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_68 = *(ebx_64 + (eax_406 << 2) + 0x30)
        int128_t* eax_408
        
        if (edx_68 != 0)
            eax_408 = sub_4fc1e0(ecx_75, edx_68)
        else
            eax_408 = sub_4fc0d0()
            *(eax_408 + 4) = &data_83f3d3
            *(ebx_64 + ((eax_406 + 0xc) << 2)) = *(eax_408 + 0x1bc)
        
        char* eax_409 = var_d0
        *(eax_408 + 0x64) = *eax_408 + 1
        sub_4c4590(eax_409)
        *(eax_408 + 0x151) = 1
        var_c_3.b = 4
        
        if (esi_107 != 0 && *esi_107 != 0)
            if (*(esi_107 - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp3_1 = *(esi_107 - 0xc)
            *(esi_107 - 0xc) -= 1
            
            if (temp3_1 == 1)
                void* ebx_66 = data_26a44e4
                int32_t edi_60 = *(esi_107 - 4) + 0x10
                
                if (ebx_66 == 0)
                    sub_4f4250()
                    ebx_66 = data_26a44e4
                
                int32_t edx_71 = 0
                int32_t* ebx_67
                
                while (true)
                    if (edi_60 s<= 1 << (edx_71.b + 4))
                        ebx_67 = ebx_66 + edx_71 * 0x14
                        break
                    
                    edx_71 += 1
                    
                    if (edx_71 s>= 7)
                        ebx_67 = ebx_66 + 0x8c
                        break
                
                ebx_67[3] -= 1
                
                if (edi_60 s<= 0x400 || ebx_67[4] != 0xffffffff)
                    char* eax_413 = ebx_67[4]
                    char* edi_62 = ebx_67[1]
                    void* edx_73 = ebx_67[2] * eax_413
                    var_d0 = eax_413
                    void* var_c8_1 = edx_73
                    
                    if (edi_62 == 0)
                    label_454505:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        char* eax_418 = *edi_62
                        void* ecx_78 = &edi_62[4]
                        var_cc = eax_418
                        edi_62 = eax_418
                        
                        if (esi_107 - 0x10 u>= ecx_78 && esi_107 - 0x10 u< edx_73 + ecx_78)
                            if (mods.dp.d(sx.q(esi_107 - 0x10 - ecx_78), var_d0) == 0)
                                *(esi_107 - 0x10) = *ebx_67
                                *ebx_67 = esi_107 - 0x10
                                break
                            
                            eax_418 = edi_62
                        
                        if (eax_418 == 0)
                            goto label_454505
                        
                        edx_73 = var_c8_1
                else
                    _aligned_free_base(esi_107 - 0x10)
    
    var_c_3.b = 1
    sub_5a71d9(&var_88, 0x10, 6, sub_450450)
    int32_t result = 0xffffffff
    int32_t var_c_4 = 0xffffffff
    char* edi_63 = var_d4
    
    if (edi_63 != 0 && *edi_63 != 0)
        if (*(edi_63 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp2_1 = *(edi_63 - 0xc)
        *(edi_63 - 0xc) -= 1
        
        if (temp2_1 == 1)
            void* esi_115 = data_26a44e4
            int32_t ebx_69 = *(edi_63 - 4) + 0x10
            
            if (esi_115 == 0)
                sub_4f4250()
                esi_115 = data_26a44e4
            
            int32_t eax_422 = 0
            void** esi_116
            
            while (true)
                if (ebx_69 s<= 1 << (eax_422.b + 4))
                    esi_116 = esi_115 + eax_422 * 0x14
                    break
                
                eax_422 += 1
                
                if (eax_422 s>= 7)
                    esi_116 = esi_115 + 0x8c
                    break
            
            esi_116[3] -= 1
            
            if (ebx_69 s<= 0x400 || esi_116[4] != 0xffffffff)
                int32_t eax_424 = esi_116[4]
                int32_t* ecx_80 = esi_116[1]
                
                if (ecx_80 == 0)
                label_45464e:
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    void* edx_78 = &ecx_80[1]
                    ecx_80 = *ecx_80
                    
                    if (&edi_63[0xfffffff0] u>= edx_78
                            && &edi_63[0xfffffff0] u< edx_78 + esi_116[2] * eax_424)
                        int32_t eax_428
                        int32_t edx_79
                        edx_79:eax_428 = sx.q(&edi_63[0xfffffff0] - edx_78)
                        result = divs.dp.d(edx_79:eax_428, eax_424)
                        
                        if (mods.dp.d(edx_79:eax_428, eax_424) == 0)
                            *(edi_63 - 0x10) = *esi_116
                            *esi_116 = &edi_63[0xfffffff0]
                            break
                    
                    if (ecx_80 == 0)
                        goto label_45464e
            else
                result = _aligned_free_base(&edi_63[0xfffffff0])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_e4)
    return result
}

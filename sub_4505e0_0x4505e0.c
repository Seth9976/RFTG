// 函数名称: sub_4505e0
// 虚拟地址: 0x4505e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4505e0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694b26
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_10c = __security_cookie ^ &__saved_edi
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx = data_315fbd0
    int32_t* esi = data_307c1fc
    int32_t edx
    
    if ((data_3165cd4 & 1) == 0)
        data_3165cd4.d |= 1
        int32_t var_c_1 = 0
        eax_3, edx = sub_4f5220(esi, "txtVP")
        data_3165cd0 = eax_3
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165cd4 & 2) == 0)
        data_3165cd4.d |= 2
        int32_t var_c_3 = 1
        eax_3, edx = sub_4f5220(esi, "txtTitle")
        data_3165ccc = eax_3
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165cd4 & 4) == 0)
        data_3165cd4.d |= 4
        int32_t var_c_5 = 2
        eax_3, edx = sub_4f5220(esi, "txtPoints")
        data_3165cc8 = eax_3
        int32_t var_c_6 = 0xffffffff
    
    char const* const var_b8 = "First to have 5+ VP chips"
    char const* const var_b4 = "First with 4 kinds of worlds\r"
    "{noveltyproductionworld}{noveltywindfallworld} Novelty\r{rareproductionworld}{rarewindfallworld} "
    "Rare\r{genesproductionworld}{geneswindfallwo"
    char const* const var_b0 = "First to have 3 {alien}ALIEN{help} cards"
    char const* const var_ac = "First to discard cards by exceeding your hand limit"
    char const* const var_a8 = "First to have powers in every phase (I-V), plus a Trade power ($)"
    char const* const var_a4 = "First to place a 6-cost {vpquestion} variable VP development.  "
    "{br}{br}{br}Note: Pan-Galactic Research is not a variable VP development."
    char const* const var_a0 = "First to have 3 {uplift}UPLIFT{help} cards"
    char const* const var_9c = "First to have 4 goods\r(at the same time)"
    char const* const var_98 = "First to have 8 cards in empire"
    char const* const var_94 = "First to have a negative military total and 2 worlds\rOR\ra takeover power and 2 military worlds"
    char const* const var_90 = "First to have 2 Prestige and 3 VP chips"
    char const* const var_8c =
        "First to have 3 {imperium}IMPERIUM{help} cards\rOR\r4 military worlds {militaryworld}"
    char const* const var_88 = "Highest military total\r(6+, ignoring temporary / specialized military)"
    char const* const var_84 = "Most Novelty {noveltyproductionworld}{noveltywindfallworld} and\rRare "
    "worlds {rareproductionworld}{rarewindfallworld}\r(3+, can mix)"
    char const* const var_80 = "Most developments {development} (4+)"
    char const* const var_7c = "Most production worlds\r(4+, any mix of kinds)\r"
    "{noveltyproductionworld}{rareproductionworld}{genesproductionworld}{alienproductionworld}"
    char const* const var_78 = "Most Explore (I) powers (3+)"
    char const* const var_74 = "Most Rebel {br}military worlds {rebelmilitaryworld} (3+)"
    char const* const var_70 = "Most Prestige {prestige} (3+)"
    char const* const var_6c = "Most Consume powers\r(3+, ignoring Trade powers)"
    char* ecx = (&var_b8)[ebx]
    char const* const var_68 = "Galactic Standard of Living"
    char const* const var_64 = "System Diversity"
    char const* const var_60 = "Overlord Discoveries"
    char const* const var_5c = "Budget Surplus"
    char const* const var_58 = "Innovation Leader"
    char const* const var_54 = "Galactic Status"
    char const* const var_50 = "Uplift Knowledge"
    char const* const var_4c = "Galactic Riches"
    char const* const var_48 = "Expansion Leader"
    char const* const var_44 = "Peace/War Leader"
    char const* const var_40 = "Galactic Standing"
    char const* const var_3c = "Military Influence"
    char const* const var_38 = "Greatest Military"
    char const* const var_34 = "Largest Industry"
    char const* const var_30 = "Greatest Infrastructure"
    char const* const var_2c = "Production Leader"
    char const* const var_28 = "Research Leader"
    char const* const var_24 = "Propaganda Edge"
    char const* const var_20 = "Galactic Prestige"
    char const* const var_1c = "Prosperity Lead"
    char* eax_4 = sub_4fd8f0(eax_3, edx, ecx, nullptr)
    
    if (eax_4 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* result_1
    int32_t edx_1 = sub_4c42b0(&result_1, eax_4)
    int32_t var_c_7 = 3
    char* result_3
    char* var_e8
    char* result_9
    char* var_d8
    
    if (ebx == 1 || ebx == 0xd || ebx == 0xf)
        sub_4c42b0(&result_3, "{help2}")
        var_c_7.b = 4
        var_c_7.b = 5
        sub_4c4510(sub_4c48a0(&result_3, &result_9, &result_1))
        var_c_7.b = 4
        char* result_12 = result_9
        
        if (result_12 != 0 && *result_12 != 0)
            void* eax_10 = sub_4c4060(&result_9)
            int32_t temp0_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_4 = *(eax_10 + 0xc) + 0x10
                sub_4f4430(eax_10, sub_4f4380(esi_4), esi_4)
        
        var_c_7.b = 3
        char* result_5 = result_3
        
        if (result_5 != 0 && *result_5 != 0)
            void* eax_14 = sub_4c4060(&result_3)
            int32_t temp1_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_6 = *(eax_14 + 0xc) + 0x10
                sub_4f4430(eax_14, sub_4f4380(esi_6), esi_6)
    else
        var_c_7.b = 6
        var_c_7.b = 7
        sub_4c4510(sub_4c48a0(sub_4c4330("{help}", edx_1, &var_d8), &var_e8, &result_1))
        var_c_7.b = 6
        sub_4c43d0(&var_e8)
        var_c_7.b = 3
        sub_4c43d0(&var_d8)
    
    var_e8 = (&var_68)[ebx]
    sub_4c42b0(&result_9, U"35")
    var_c_7.b = 8
    
    if (ebx s>= 0xc)
        sub_4c4590(U"5")
    
    char* result_2 = result_1
    result_3 = &data_83f3d3
    
    if (result_2 != 0)
        result_3 = result_2
    
    int128_t* eax_19 = sub_4f6e90(data_3165cd0, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    char* result_6 = result_3
    *(eax_19 + 0x64) = *eax_19 + 1
    sub_4c4590(result_6)
    int32_t ebx_6 = data_3165ccc
    *(eax_19 + 0x151) = 1
    int128_t* eax_21 = sub_4f6e90(ebx_6, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    char* eax_22 = var_e8
    *(eax_21 + 0x64) = *eax_21 + 1
    sub_4c4590(eax_22)
    char* result_7 = result_9
    *(eax_21 + 0x151) = 1
    result_3 = &data_83f3d3
    
    if (result_7 != 0)
        result_3 = result_7
    
    int128_t* eax_24 = sub_4f6e90(data_3165cc8, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_24 + 0x64) = *eax_24 + 1
    sub_4c4590(result_3)
    *(eax_24 + 0x151) = 1
    
    if ((data_3165cd4 & 8) == 0)
        data_3165cd4.d |= 8
        var_c_7.b = 9
        data_3165cc4 = sub_4f5220(data_307c1fc, "Darken")
        var_c_7.b = 8
    
    float edx_4 = data_3165cc4
    int32_t var_110_6 = 1
    sub_4fa4e0(arg1, edx_4, edx_4.b)
    
    if ((data_3165cd4 & 0x10) == 0)
        data_3165cd4.d |= 0x10
        var_c_7.b = 0xa
        data_3165cc0 = sub_4f5220(esi, "tblPlayers")
        var_c_7.b = 8
    
    if ((data_3165cd4 & 0x20) == 0)
        data_3165cd4.d |= 0x20
        var_c_7.b = 0xb
        data_3165cbc = sub_4f5220(data_307c200, "txtPlayer")
        var_c_7.b = 8
    
    if ((data_3165cd4 & 0x40) == 0)
        data_3165cd4.d |= 0x40
        var_c_7.b = 0xc
        data_3165cb8 = sub_4f5220(data_307c200, "txtValue")
        var_c_7.b = 8
    
    if ((data_3165cd4 & 0x80) == 0)
        data_3165cd4.d |= 0x80
        var_c_7.b = 0xd
        data_3165cb4 = sub_4f5220(data_307c200, "imgGoalSmall")
        var_c_7.b = 8
    
    if ((data_3165cd4.d & 0x100) == 0)
        data_3165cd4.d |= 0x100
        var_c_7.b = 0xe
        data_3165cb0 = sub_4f5220(data_307c200, "imgGoalBig")
        var_c_7.b = 8
    
    if ((data_3165cd4.d & 0x200) == 0)
        data_3165cd4.d |= 0x200
        var_c_7.b = 0xf
        data_3165cac = sub_4f5220(data_307c200, "imgGoalHex")
        var_c_7.b = 8
    
    if ((data_3165cd4.d & 0x400) == 0)
        data_3165cd4.d |= 0x400
        var_c_7.b = 0x10
        data_3165ca8 = sub_4f5220(data_307c200, "txtGoalValue")
        var_c_7.b = 8
    
    void* eax_40 = *(data_27e7a40 + 0x548)
    
    if (eax_40 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* ebx_10 = *(eax_40 + 0x45844)
    int32_t edx_7 = sx.d(ebx_10[0x458])
    int32_t edi_6 = data_3165cc0
    var_e8 = ebx_10
    int32_t* eax_43 = sub_4f6e90(edi_6, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    char** edx_8 = edx_7
    eax_43[0x48] = *eax_43 + 1
    void* result_10 = nullptr
    eax_43[0x49] = 1
    eax_43[0x4a] = edx_8
    eax_43[0x4b] = 1
    eax_43[0x4c] = edx_8
    bool cond:1 = ebx_10[0x458] s<= 0
    result_3 = nullptr
    
    if (not(cond:1))
        while (true)
            void* result_11
            
            if (result_10 != 0xffffffff)
                void* ecx_12 = *(data_27e7a40 + 0x548)
                int32_t eax_44 = 0
                edx_8 = nullptr
                
                while (true)
                    if (ecx_12 == 0)
                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                            0xcc, "GetGame")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (eax_44 s>= sx.d(*(*(ecx_12 + 0x45844) + 0x458)))
                        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x2e0, 
                            "PlayerSeatToWho")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(edx_8 + ecx_12 + 0x218) == result_10)
                        result_11 = *(eax_44 * 0x1f98 + ecx_12 + 0x21c)
                        break
                    
                    eax_44 += 1
                    edx_8 = &edx_8[0x7e6]
            else
                result_11 = result_10
            
            int32_t* var_110_7 = &var_d8
            sub_424120(result_11, edx_8)
            void* edi_9 = result_11 * 0xb4
            var_c_7.b = 0x11
            void* edi_10 = edi_9 + ebx_10
            *(edi_10 + ebx + 0x8f)
            char* var_f4
            sub_4c4ab0(&var_f4)
            var_c_7.b = 0x12
            void* ebx_12
            
            if (ebx == 0xb)
                int32_t i_3 = sx.d(*(edi_10 + 0x56))
                int32_t i = i_3
                int32_t esi_22 = 0
                int32_t eax_49
                
                for (; i != 0xffffffff; i = sx.d(*(ebx_10 + (eax_49 << 2) + 0x476)))
                    eax_49 = i * 5
                    
                    if ((*(*(ebx_10 + (eax_49 << 2) + 0x46c) + 0x10) & 1) != 0)
                        esi_22 += 1
                
                int32_t i_1 = i_3
                int32_t ecx_14 = 0
                int32_t eax_51
                
                for (; i_1 != 0xffffffff; i_1 = sx.d(*(ebx_10 + (eax_51 << 2) + 0x476)))
                    eax_51 = i_1 * 5
                    
                    if ((*(*(ebx_10 + (eax_51 << 2) + 0x46c) + 0x10) & 0x400) != 0)
                        ecx_14 += 1
                
                int32_t var_110_8 = esi_22
                int32_t var_114_15 = ecx_14
                char* var_d0
                char** eax_53 = sub_4c4a50(&var_d0, "%d/%d")
                var_c_7.b = 0x13
                char* ecx_15 = var_f4
                char* const edx_11 = &data_83f3d3
                
                if (ecx_15 != 0)
                    edx_11 = ecx_15
                
                char* eax_54 = *eax_53
                
                if (eax_54 == 0)
                    eax_54 = &data_83f3d3
                
                if (edx_11 != eax_54)
                    if (ecx_15 != 0 && *ecx_15 != 0)
                        void* eax_56 = sub_4c4060(&var_f4)
                        int32_t temp5_1 = *(eax_56 + 4)
                        *(eax_56 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            int32_t esi_24 = *(eax_56 + 0xc) + 0x10
                            sub_4f4430(eax_56, sub_4f4380(esi_24), esi_24)
                    
                    char* eax_59 = *eax_53
                    var_f4 = eax_59
                    
                    if (eax_59 != 0 && *eax_59 != 0)
                        void* eax_61 = sub_4c4060(&var_f4)
                        *(eax_61 + 4) += 1
                
                var_c_7.b = 0x12
                char* eax_62 = var_d0
                
                if (eax_62 != 0 && *eax_62 != 0)
                    ebx_12 = sub_4c4060(&var_d0)
                    goto label_4510b0
            else if (ebx == 0xa)
                int32_t var_110_10 = sx.d(*(edi_10 + 0xa6))
                int32_t var_114_16 = sx.d(*(edi_10 + 0xa3))
                var_c_7.b = 0x14
                char* var_cc
                sub_4c4510(sub_4c4a50(&var_cc, "%d/%d"))
                var_c_7.b = 0x12
                char* eax_68 = var_cc
                
                if (eax_68 != 0 && *eax_68 != 0)
                    ebx_12 = sub_4c4060(&var_cc)
                label_4510b0:
                    int32_t temp4_1 = *(ebx_12 + 4)
                    *(ebx_12 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        int32_t esi_30 = *(ebx_12 + 0xc) + 0x10
                        sub_4f4430(ebx_12, sub_4f4380(esi_30), esi_30)
            else if (ebx == 9)
                int32_t eax_71 = sub_49c940(result_11, ebx - 8, ebx_10)
                int32_t i_2 = sx.d(*(edi_10 + 0x46))
                int32_t esi_26 = 0
                
                for (; i_2 != 0xffffffff; i_2 = sx.d(*(ebx_10 + ((i_2 * 5 + 0x11d) << 2))))
                    if (*(*(ebx_10 + i_2 * 0x14 + 0x46c) + 6) == 1)
                        esi_26 += 1
                
                int32_t var_110_12 = eax_71
                int32_t var_114_17 = esi_26
                char* var_c0
                char** eax_72 = sub_4c4a50(&var_c0, "%d/%d")
                var_c_7.b = 0x15
                char* ecx_19 = var_f4
                char* edx_17 = &data_83f3d3
                
                if (ecx_19 != 0)
                    edx_17 = ecx_19
                
                char* eax_73 = *eax_72
                
                if (eax_73 == 0)
                    eax_73 = &data_83f3d3
                
                if (edx_17 != eax_73)
                    if (ecx_19 != 0 && *ecx_19 != 0)
                        void* eax_75 = sub_4c4060(&var_f4)
                        int32_t temp6_1 = *(eax_75 + 4)
                        *(eax_75 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            int32_t esi_28 = *(eax_75 + 0xc) + 0x10
                            sub_4f4430(eax_75, sub_4f4380(esi_28), esi_28)
                    
                    char* eax_78 = *eax_72
                    var_f4 = eax_78
                    
                    if (eax_78 != 0 && *eax_78 != 0)
                        void* eax_80 = sub_4c4060(&var_f4)
                        *(eax_80 + 4) += 1
                
                var_c_7.b = 0x12
                char* eax_81 = var_c0
                
                if (eax_81 != 0 && *eax_81 != 0)
                    ebx_12 = &eax_81[0xfffffff0]
                    
                    if (*(eax_81 - 0x10) == 0xfafafafa)
                        goto label_4510b0
                    
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            int32_t esi_31 = data_3165cc0
            int32_t var_c8 = 0
            char* result_4 = result_3
            
            if (arg1 == 0)
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                    "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t eax_86 = zx.d(arg1.w)
            
            if (eax_86 u< data_be1cbc)
                void* edi_18 = data_be1cb8
                int32_t ecx_22 = eax_86 * 0x438
                
                if (*(ecx_22 + edi_18 + 0x434) == arg1)
                    void* edi_19 = edi_18 + eax_86 * 0x438
                    
                    if (esi_31 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_19 = *(edi_19 + (esi_31 << 2) + 0x30)
                    int128_t* eax_88
                    
                    if (edx_19 != 0)
                        eax_88 = sub_4fc1e0(ecx_22, edx_19)
                    else
                        eax_88, edx_19 = sub_4fc0d0()
                        *(eax_88 + 4) = &data_83f3d3
                        *(edi_19 + (esi_31 << 2) + 0x30) = *(eax_88 + 0x1bc)
                    
                    char* edi_20 = *(edi_19 + 4)
                    
                    if (*(edi_20 + 4) != 0x1e)
                        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                            "UIDefGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*edi_20 == 0)
                        sub_520800(eax_88, edx_19.b, edi_20, 0)
                        
                        if (*edi_20 == 0)
                            sub_509540(edi_20)
                    
                    int32_t ecx_27 = *(sub_4f7720(&var_c8, esi_31 * 0x118 + ***edi_20, eax_88) + 0x434)
                    char* eax_93 = var_d8
                    char* const var_f8_1 = &data_83f3d3
                    
                    if (eax_93 != 0)
                        var_f8_1 = eax_93
                    
                    if (ecx_27 == 0)
                        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                            0x45, "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint32_t edi_22 = zx.d(ecx_27.w)
                    
                    if (edi_22 u< data_be1cbc)
                        int32_t edx_21 = data_be1cb8
                        
                        if (*(edi_22 * 0x438 + edx_21 + 0x434) == ecx_27)
                            int32_t eax_97 = edi_22 * 0x438
                            int32_t esi_34 = eax_97 + edx_21
                            int32_t eax_98 = data_3165cbc
                            
                            if (eax_98 s>= 0x100)
                                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                                    "UIStateElementGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t edx_22 = *(esi_34 + (eax_98 << 2) + 0x30)
                            int128_t* eax_99
                            
                            if (edx_22 != 0)
                                eax_99 = sub_4fc1e0(ecx_27, edx_22)
                            else
                                eax_99 = sub_4fc0d0()
                                *(eax_99 + 4) = &data_83f3d3
                                *(esi_34 + ((eax_98 + 0xc) << 2)) = *(eax_99 + 0x1bc)
                            
                            *(eax_99 + 0x64) = *eax_99 + 1
                            sub_4c4590(var_f8_1)
                            *(eax_99 + 0x151) = 1
                            char* eax_101 = var_f4
                            char* const var_f8_2 = &data_83f3d3
                            
                            if (eax_101 != 0)
                                var_f8_2 = eax_101
                            
                            if (edi_22 u< data_be1cbc)
                                int32_t ecx_29 = data_be1cb8
                                
                                if (*(edi_22 * 0x438 + ecx_29 + 0x434) == ecx_27)
                                    int32_t eax_104 = data_3165cb8
                                    int32_t ebx_18 = eax_97 + ecx_29
                                    
                                    if (eax_104 s>= 0x100)
                                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                            0x518, "UIStateElementGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t edx_26 = *(ebx_18 + (eax_104 << 2) + 0x30)
                                    int128_t* eax_105
                                    
                                    if (edx_26 != 0)
                                        eax_105 = sub_4fc1e0(ecx_29, edx_26)
                                    else
                                        eax_105 = sub_4fc0d0()
                                        *(eax_105 + 4) = &data_83f3d3
                                        *(ebx_18 + ((eax_104 + 0xc) << 2)) = *(eax_105 + 0x1bc)
                                    
                                    *(eax_105 + 0x64) = *eax_105 + 1
                                    sub_4c4590(var_f8_2)
                                    void* edx_27 = data_27e7a40
                                    *(eax_105 + 0x151) = 1
                                    void* eax_107 = *(edx_27 + 0x548)
                                    
                                    if (eax_107 == 0)
                                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                            "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    void* eax_109 = *(eax_107 + 0x45844) + edi_9
                                    void* var_f8_3
                                    
                                    if (*(eax_109 + ebx + 0x67) == 0)
                                        int32_t eax_110 = sx.d(*(eax_109 + ebx + 0x7b))
                                        int32_t eax_111 = neg.d(eax_110)
                                        var_f8_3 = sbb.d(eax_111, eax_111, eax_110 != 0) & 3
                                    else
                                        int32_t edx_28
                                        edx_28.b = ebx s>= 0xc
                                        edx_27 = edx_28 * 2 + 3
                                        var_f8_3 = edx_27
                                    
                                    float ecx_34 = data_3165cb4
                                    int32_t eax_114
                                    eax_114.b = ebx s< 0xc
                                    int32_t var_110_15 = 1
                                    sub_4fa4e0(ecx_27, ecx_34, edx_27.b)
                                    float edx_29 = data_3165cb0
                                    int32_t var_118_2 = 1
                                    char edx_30 = sub_4fa4e0(ecx_27, edx_29, edx_29.b)
                                    int32_t var_120_1 = 1
                                    sub_4fa4e0(ecx_27, data_3165cac, edx_30)
                                    
                                    if (edi_22 u< data_be1cbc)
                                        int32_t eax_119 = data_be1cb8
                                        
                                        if (*(edi_22 * 0x438 + eax_119 + 0x434) == ecx_27)
                                            int32_t edi_25 = eax_97 + eax_119
                                            int32_t eax_120 = data_3165ca8
                                            
                                            if (eax_120 s>= 0x100)
                                                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, 
                                                    "UIDef.cpp", 0x518, "UIStateElementGet")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            int32_t edx_31 = *(edi_25 + (eax_120 << 2) + 0x30)
                                            int128_t* eax_121
                                            
                                            if (edx_31 != 0)
                                                eax_121 = sub_4fc1e0(ecx_34, edx_31)
                                            else
                                                eax_121 = sub_4fc0d0()
                                                *(eax_121 + 4) = &data_83f3d3
                                                *(edi_25 + ((eax_120 + 0xc) << 2)) = *(eax_121 + 0x1bc)
                                            
                                            *(eax_121 + 0x64) = *eax_121 + 1
                                            sub_4c4590(&data_83f3d3)
                                            *(eax_121 + 0x151) = 1
                                            
                                            if (var_f8_3 s> 0)
                                                float var_f8_4
                                                
                                                if (eax_114 != 1)
                                                    var_f8_4 = data_3165cb0
                                                else
                                                    var_f8_4 = data_3165cb4
                                                
                                                var_c_7.b = 0x16
                                                char* var_bc
                                                char* eax_124 = *sub_4c4ab0(&var_bc)
                                                char* var_ec_2 = &data_83f3d3
                                                
                                                if (eax_124 != 0)
                                                    var_ec_2 = eax_124
                                                
                                                int32_t edi_26 = ecx_27
                                                int32_t ebx_21 = data_3165ca8
                                                int32_t eax_125
                                                int32_t ecx_37
                                                eax_125, ecx_37 = sub_4fc3d0(&data_be1cb8, edi_26)
                                                
                                                if (ebx_21 s>= 0x100)
                                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, 
                                                        "UIDef.cpp", 0x518, "UIStateElementGet")
                                                    
                                                    if (IsDebuggerPresent() == 1)
                                                        breakpoint
                                                    
                                                    sub_4c5a30()
                                                    noreturn
                                                
                                                int32_t edx_35 = *(eax_125 + (ebx_21 << 2) + 0x30)
                                                int128_t* eax_126
                                                
                                                if (edx_35 != 0)
                                                    eax_126 = sub_4fc1e0(ecx_37, edx_35)
                                                else
                                                    eax_126 = sub_4fc0d0()
                                                    *(eax_126 + 4) = &data_83f3d3
                                                    *(eax_125 + (ebx_21 << 2) + 0x30) =
                                                        *(eax_126 + 0x1bc)
                                                
                                                *(eax_126 + 0x64) = *eax_126 + 1
                                                char edx_38 = sub_4c4590(var_ec_2)
                                                *(eax_126 + 0x151) = 1
                                                var_c_7.b = 0x12
                                                char* ebx_23 = var_bc
                                                
                                                if (ebx_23 != 0 && *ebx_23 != 0)
                                                    if (*(ebx_23 - 0x10) != 0xfafafafa)
                                                        sub_4c5870(
                                                            "pStringData->mXStringMagicNumber == 
                                                                XSTRING_MAGIC_NUMBER", 
                                                            &data_83f3d3, "xString.cpp", 0x20, 
                                                            "XStringMagicDataStructFromCharPtr")
                                                        
                                                        if (IsDebuggerPresent() == 1)
                                                            breakpoint
                                                        
                                                        sub_4c5a30()
                                                        noreturn
                                                    
                                                    int32_t temp10_1 = *(ebx_23 - 0xc)
                                                    *(ebx_23 - 0xc) -= 1
                                                    
                                                    if (temp10_1 == 1)
                                                        int32_t esi_46 = *(ebx_23 - 4) + 0x10
                                                        edx_38 = sub_4f4430(&ebx_23[0xfffffff0], 
                                                            sub_4f4380(esi_46), esi_46)
                                                        edi_26 = ecx_27
                                                
                                                int32_t var_110_17 = 0
                                                char edx_39 = sub_4fa4e0(edi_26, var_f8_4, edx_38)
                                                int32_t var_118_3 = 0
                                                sub_4fa4e0(edi_26, data_3165cac, edx_39)
                                            
                                            var_c_7.b = 0x11
                                            char* eax_133 = var_f4
                                            
                                            if (eax_133 != 0 && *eax_133 != 0)
                                                if (*(eax_133 - 0x10) != 0xfafafafa)
                                                    sub_4c5870(
                                                        "pStringData->mXStringMagicNumber == 
                                                            XSTRING_MAGIC_NUMBER", 
                                                        &data_83f3d3, "xString.cpp", 0x20, 
                                                        "XStringMagicDataStructFromCharPtr")
                                                    
                                                    if (IsDebuggerPresent() == 1)
                                                        breakpoint
                                                    
                                                    sub_4c5a30()
                                                    noreturn
                                                
                                                int32_t temp8_1 = *(eax_133 - 0xc)
                                                *(eax_133 - 0xc) -= 1
                                                
                                                if (temp8_1 == 1)
                                                    void* edi_28 = data_26a44e4
                                                    int32_t esi_48 = *(eax_133 - 4) + 0x10
                                                    
                                                    if (edi_28 == 0)
                                                        sub_4f4250()
                                                        edi_28 = data_26a44e4
                                                    
                                                    int32_t edx_40 = 0
                                                    int32_t* edi_29
                                                    
                                                    while (true)
                                                        if (esi_48 s<= 1 << (edx_40.b + 4))
                                                            edi_29 = edi_28 + edx_40 * 0x14
                                                            break
                                                        
                                                        edx_40 += 1
                                                        
                                                        if (edx_40 s>= 7)
                                                            edi_29 = edi_28 + 0x8c
                                                            break
                                                    
                                                    sub_4f4430(&eax_133[0xfffffff0], edi_29, esi_48)
                                            
                                            var_c_7.b = 8
                                            char* eax_136 = var_d8
                                            
                                            if (eax_136 != 0 && *eax_136 != 0)
                                                if (*(eax_136 - 0x10) != 0xfafafafa)
                                                    sub_4c5870(
                                                        "pStringData->mXStringMagicNumber == 
                                                            XSTRING_MAGIC_NUMBER", 
                                                        &data_83f3d3, "xString.cpp", 0x20, 
                                                        "XStringMagicDataStructFromCharPtr")
                                                    
                                                    if (IsDebuggerPresent() == 1)
                                                        breakpoint
                                                    
                                                    sub_4c5a30()
                                                    noreturn
                                                
                                                int32_t temp9_1 = *(eax_136 - 0xc)
                                                *(eax_136 - 0xc) -= 1
                                                
                                                if (temp9_1 == 1)
                                                    void* edi_30 = data_26a44e4
                                                    int32_t esi_50 = *(eax_136 - 4) + 0x10
                                                    
                                                    if (edi_30 == 0)
                                                        sub_4f4250()
                                                        edi_30 = data_26a44e4
                                                    
                                                    int32_t edx_41 = 0
                                                    int32_t* edi_31
                                                    
                                                    while (true)
                                                        if (esi_50 s<= 1 << (edx_41.b + 4))
                                                            edi_31 = edi_30 + edx_41 * 0x14
                                                            break
                                                        
                                                        edx_41 += 1
                                                        
                                                        if (edx_41 s>= 7)
                                                            edi_31 = edi_30 + 0x8c
                                                            break
                                                    
                                                    sub_4f4430(&eax_136[0xfffffff0], edi_31, esi_50)
                                            
                                            char* ecx_42 = var_e8
                                            edx_8 = sx.d(ecx_42[0x458])
                                            void* result_8 = &result_3[1]
                                            result_3 = result_8
                                            
                                            if (result_8 s>= edx_8)
                                                break
                                            
                                            ebx_10 = ecx_42
                                            result_10 = result_8
                                            continue
                                    
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
            
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    var_c_7.b = 3
    char* result_13 = result_9
    
    if (result_13 != 0 && *result_13 != 0)
        if (*(result_13 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp2_1 = *(result_13 - 0xc)
        *(result_13 - 0xc) -= 1
        
        if (temp2_1 == 1)
            void* edi_32 = data_26a44e4
            int32_t esi_52 = *(result_13 - 4) + 0x10
            
            if (edi_32 == 0)
                sub_4f4250()
                edi_32 = data_26a44e4
            
            int32_t edx_43 = 0
            int32_t* edi_33
            
            while (true)
                if (esi_52 s<= 1 << (edx_43.b + 4))
                    edi_33 = edi_32 + edx_43 * 0x14
                    break
                
                edx_43 += 1
                
                if (edx_43 s>= 7)
                    edi_33 = edi_32 + 0x8c
                    break
            
            sub_4f4430(&result_13[0xfffffff0], edi_33, esi_52)
    
    int32_t var_c_8 = 0xffffffff
    char* result = result_1
    
    if (result != 0 && *result != 0)
        if (*(result - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp3_1 = *(result - 0xc)
        *(result - 0xc) -= 1
        
        if (temp3_1 == 1)
            void* edx_44 = data_26a44e4
            int32_t esi_54 = *(result - 4) + 0x10
            
            if (edx_44 == 0)
                sub_4f4250()
                edx_44 = data_26a44e4
            
            int32_t eax_165 = 0
            int32_t* edi_35
            
            while (true)
                if (esi_54 s<= 1 << (eax_165.b + 4))
                    edi_35 = edx_44 + eax_165 * 0x14
                    break
                
                eax_165 += 1
                
                if (eax_165 s>= 7)
                    edi_35 = edx_44 + 0x8c
                    break
            
            result = sub_4f4430(&result[0xfffffff0], edi_35, esi_54)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

// 函数名称: sub_456240
// 虚拟地址: 0x456240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_456240()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697336
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_2cc
    int32_t eax_2 = __security_cookie ^ &var_2cc
    int32_t __saved_edi
    int32_t var_2dc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx = data_31663cc
    void* ecx = *(data_27e7a40 + 0x548)
    void var_1e0
    int32_t eax_6
    int32_t edx
    int80_t st0
    st0, eax_6, edx = sub_40a930(&var_1e0)
    void var_60
    __builtin_memcpy(&var_60, eax_6, 0x40)
    int32_t* esi_1 = data_307c1fc
    bool cond:0 = (data_31663c8 & 1) != 0
    int32_t* var_2c8 = esi_1
    
    if (not(cond:0))
        data_31663c8.d |= 1
        int32_t var_c_1 = 0
        eax_6, edx = sub_4f5220(esi_1, "txtVP")
        data_31663c4 = eax_6
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31663c8 & 2) == 0)
        data_31663c8.d |= 2
        int32_t var_c_3 = 1
        eax_6, edx = sub_4f5220(esi_1, "txtTitle")
        data_31663c0 = eax_6
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31663c8 & 4) == 0)
        data_31663c8.d |= 4
        int32_t var_c_5 = 2
        eax_6, edx = sub_4f5220(esi_1, "txtPoints")
        data_31663bc = eax_6
        int32_t var_c_6 = 0xffffffff
    
    char const* const var_280 = "First to have 5+ VP chips"
    char const* const var_27c = "First with 4 kinds of worlds\r"
    "{noveltyproductionworld}{noveltywindfallworld} Novelty\r{rareproductionworld}{rarewindfallworld} "
    "Rare\r{genesproductionworld}{geneswindfallwo"
    char const* const var_278 = "First to have 3 {alien}ALIEN{help} cards"
    char const* const var_274 = "First to discard cards by exceeding your hand limit"
    char const* const var_270 = "First to have powers in every phase (I-V), plus a Trade power ($)"
    char const* const var_26c = "First to place a 6-cost {vpquestion} variable VP development.  "
    "{br}{br}{br}Note: Pan-Galactic Research is not a variable VP development."
    char const* const var_268 = "First to have 3 {uplift}UPLIFT{help} cards"
    char const* const var_264 = "First to have 4 goods\r(at the same time)"
    char const* const var_260 = "First to have 8 cards in empire"
    char const* const var_25c = "First to have a negative military total and 2 worlds\rOR\ra takeover power and 2 military worlds"
    char const* const var_258 = "First to have 2 Prestige and 3 VP chips"
    char const* const var_254 =
        "First to have 3 {imperium}IMPERIUM{help} cards\rOR\r4 military worlds {militaryworld}"
    char const* const var_250 =
        "Highest military total\r(6+, ignoring temporary / specialized military)"
    char const* const var_24c = "Most Novelty {noveltyproductionworld}{noveltywindfallworld} and\rRare "
    "worlds {rareproductionworld}{rarewindfallworld}\r(3+, can mix)"
    char const* const var_248 = "Most developments {development} (4+)"
    char const* const var_244 = "Most production worlds\r(4+, any mix of kinds)\r"
    "{noveltyproductionworld}{rareproductionworld}{genesproductionworld}{alienproductionworld}"
    char const* const var_240 = "Most Explore (I) powers (3+)"
    char const* const var_23c = "Most Rebel {br}military worlds {rebelmilitaryworld} (3+)"
    char const* const var_238 = "Most Prestige {prestige} (3+)"
    char const* const var_234 = "Most Consume powers\r(3+, ignoring Trade powers)"
    char* ecx_1 = (&var_280)[ebx]
    char const* const var_230 = "Galactic Standard of Living"
    char const* const var_22c = "System Diversity"
    char const* const var_228 = "Overlord Discoveries"
    char const* const var_224 = "Budget Surplus"
    char const* const var_220 = "Innovation Leader"
    char const* const var_21c = "Galactic Status"
    char const* const var_218 = "Uplift Knowledge"
    char const* const var_214 = "Galactic Riches"
    char const* const var_210 = "Expansion Leader"
    char const* const var_20c = "Peace/War Leader"
    char const* const var_208 = "Galactic Standing"
    char const* const var_204 = "Military Influence"
    char const* const var_200 = "Greatest Military"
    char const* const var_1fc = "Largest Industry"
    char const* const var_1f8 = "Greatest Infrastructure"
    char const* const var_1f4 = "Production Leader"
    char const* const var_1f0 = "Research Leader"
    char const* const var_1ec = "Propaganda Edge"
    char const* const var_1e8 = "Galactic Prestige"
    char const* const var_1e4 = "Prosperity Lead"
    char* eax_7 = sub_4fd8f0(eax_6, edx, ecx_1, nullptr)
    
    if (eax_7 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* var_2a0
    int32_t edx_1 = sub_4c42b0(&var_2a0, eax_7)
    int32_t var_c_7 = 3
    int32_t* var_2c4
    char* var_2bc
    float var_2b8
    char* var_2a4
    int32_t ecx_5
    
    if (ebx == 1 || ebx == 0xd || ebx == 0xf)
        sub_4c42b0(&var_2c4, "{help2}")
        var_c_7.b = 4
        int32_t* eax_11
        eax_11, ecx_5 = sub_4c48a0(&var_2c4, &var_2a4, &var_2a0)
        var_c_7.b = 5
        sub_4c4510(eax_11)
        var_c_7.b = 4
        char* eax_12 = var_2a4
        
        if (eax_12 != 0 && *eax_12 != 0)
            void* eax_14 = sub_4c4060(&var_2a4)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_5 = *(eax_14 + 0xc) + 0x10
                ecx_5 = sub_4f4430(eax_14, sub_4f4380(esi_5), esi_5)
        
        var_c_7.b = 3
        int32_t* eax_17 = var_2c4
        
        if (eax_17 != 0 && *eax_17 != 0)
            void* eax_19 = sub_4c4060(&var_2c4)
            int32_t temp1_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_7 = *(eax_19 + 0xc) + 0x10
                ecx_5 = sub_4f4430(eax_19, sub_4f4380(esi_7), esi_7)
    else
        var_c_7.b = 6
        var_c_7.b = 7
        sub_4c4510(sub_4c48a0(sub_4c4330("{help}", edx_1, &var_2bc), &var_2b8, &var_2a0))
        var_c_7.b = 6
        sub_4c43d0(&var_2b8)
        var_c_7.b = 3
        ecx_5 = sub_4c43d0(&var_2bc)
    
    char* var_29c = (&var_230)[ebx]
    sub_4c42b0(&var_2a4, U"35")
    var_c_7.b = 8
    
    if (ebx s>= 0xc)
        sub_4c4590(U"5")
    
    int32_t var_2e0_7 = ecx_5
    int32_t ecx_6
    int32_t edx_2
    int80_t st0_1
    st0_1, ecx_6, edx_2 = sub_4f5f30(var_2c8, &var_60, 0, fconvert.s(fconvert.t(*(ecx + 0xbfcc))))
    char* eax_23 = var_2a0
    char* var_2b4 = &data_83f3d3
    
    if (eax_23 != 0)
        var_2b4 = eax_23
    
    char* eax_24 = data_31663c4
    var_2b8 = fconvert.s(fconvert.t(*(ecx + 0xbfcc)))
    void* var_2e0_9 = &var_60
    int32_t var_2e4_6 = ecx_6
    float var_2e4_7 = fconvert.s(fconvert.t(var_2b8))
    var_2bc = eax_24
    int32_t eax_25 = sub_4f62d0(eax_24, var_2e4_7, edx_2)
    int32_t* ebx_4 = var_2c8
    void var_a0
    __builtin_memcpy(&var_a0, eax_25, 0x40)
    int32_t eax_26 = sub_4f4890(ebx_4)
    int32_t edx_3 = sub_4f5010(&var_a0, var_2bc * 0x118 + *eax_26, var_2b4, 1)
    char* eax_28 = data_31663c0
    var_2b8 = fconvert.s(fconvert.t(*(ecx + 0xbfcc)))
    void* var_2e0_10 = &var_60
    void* var_2e4_8 = ecx
    float var_2e4_9 = fconvert.s(fconvert.t(var_2b8))
    var_2bc = eax_28
    int32_t eax_29 = sub_4f62d0(eax_28, var_2e4_9, edx_3)
    int32_t* ebx_5 = var_2c8
    __builtin_memcpy(&var_a0, eax_29, 0x40)
    int32_t eax_30 = sub_4f4890(ebx_5)
    int32_t edx_4 = sub_4f5010(&var_a0, var_2bc * 0x118 + *eax_30, var_29c, 0)
    char* eax_32 = var_2a4
    char* const var_2b4_1 = &data_83f3d3
    
    if (eax_32 != 0)
        var_2b4_1 = eax_32
    
    char* eax_33 = data_31663bc
    var_2b8 = fconvert.s(fconvert.t(*(ecx + 0xbfcc)))
    void* var_2e0_11 = &var_60
    void* var_2e4_10 = ecx
    float var_2e4_11 = fconvert.s(fconvert.t(var_2b8))
    int16_t top = 0xfffe
    var_2bc = eax_33
    int32_t eax_34 = sub_4f62d0(eax_33, var_2e4_11, edx_4)
    int32_t* ebx_6 = var_2c8
    __builtin_memcpy(&var_a0, eax_34, 0x40)
    int32_t eax_35 = sub_4f4890(ebx_6)
    sub_4f5010(&var_a0, var_2bc * 0x118 + *eax_35, var_2b4_1, 0)
    
    if ((data_31663c8 & 8) == 0)
        data_31663c8.d |= 8
        var_c_7.b = 9
        data_31663b8 = sub_4f5220(ebx_6, "tblPlayers")
        var_c_7.b = 8
    
    if ((data_31663c8 & 0x10) == 0)
        data_31663c8.d |= 0x10
        var_c_7.b = 0xa
        data_31663b4 = sub_4f5220(data_307c200, "txtPlayer")
        var_c_7.b = 8
    
    if ((data_31663c8 & 0x20) == 0)
        data_31663c8.d |= 0x20
        var_c_7.b = 0xb
        data_31663b0 = sub_4f5220(data_307c200, "txtValue")
        var_c_7.b = 8
    
    if ((data_31663c8 & 0x40) == 0)
        data_31663c8.d |= 0x40
        var_c_7.b = 0xc
        data_31663ac = sub_4f5220(data_307c200, "imgGoalSmall")
        var_c_7.b = 8
    
    if ((data_31663c8 & 0x80) == 0)
        data_31663c8.d |= 0x80
        var_c_7.b = 0xd
        data_31663a8 = sub_4f5220(data_307c200, "imgGoalBig")
        var_c_7.b = 8
    
    if ((data_31663c8.d & 0x100) == 0)
        data_31663c8.d |= 0x100
        var_c_7.b = 0xe
        data_31663a4 = sub_4f5220(data_307c200, "imgGoalHex")
        var_c_7.b = 8
    
    if ((data_31663c8.d & 0x200) == 0)
        data_31663c8.d |= 0x200
        var_c_7.b = 0xf
        data_31663a0 = sub_4f5220(data_307c200, "txtGoalValue")
        var_c_7.b = 8
    
    float ecx_14 = data_27e7a40
    void* eax_46 = *(ecx_14 i+ 0x548)
    
    if (eax_46 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float ebx_7 = *(eax_46 + 0x45844)
    int32_t* esi_19 = nullptr
    bool cond:1 = *(ebx_7 i+ 0x458) s> 0
    var_2b8 = ebx_7
    int32_t* var_2b4_2 = nullptr
    
    if (cond:1)
        while (true)
            if (esi_19 != 0xffffffff)
                ecx_14 = *(data_27e7a40 + 0x548)
                int32_t eax_50 = 0
                int32_t edx_8 = 0
                
                while (true)
                    if (ecx_14 == 0)
                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                            0xcc, "GetGame")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (eax_50 s>= sx.d(*(*(ecx_14 i+ 0x45844) + 0x458)))
                        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x2e0, 
                            "PlayerSeatToWho")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(ecx_14 i+ edx_8 + 0x218) == esi_19)
                        var_2c4 = *(eax_50 * 0x1f98 i+ ecx_14 + 0x21c)
                        break
                    
                    eax_50 += 1
                    edx_8 += 0x1f98
            else
                var_2c4 = esi_19
            
            float var_2e8_3 = ecx_14
            unimplemented  {fld st0, dword [ecx+0xbfcc]}
            int32_t* ecx_15 = data_307c1fc
            float var_2e8_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t var_288 = 0
            int32_t* var_284_1 = esi_19
            int32_t eax_54 =
                sub_4f66d0(&var_280, ecx_15, data_31663b8, &var_288, var_2e8_4, nullptr, nullptr)
            unimplemented  {call 0x4f66d0}
            unimplemented  {fld1 }
            float var_2e0_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            __builtin_memcpy(&var_a0, eax_54, 0x40)
            char** edx_9 = sub_4f5f30(data_307c200, &var_a0, 0, var_2e0_12)
            unimplemented  {call 0x4f5f30}
            int32_t* edi_15 = var_2c4
            int32_t* var_2f0_2 = &var_2bc
            sub_424120(edi_15, edx_9)
            int32_t edi_16 = edi_15 * 0xb4
            int32_t eax_57 = ebx + edi_16
            var_c_7.b = 0x10
            *(eax_57 i+ ebx_7 + 0x8f)
            int32_t* edx_10 = sub_4c4ab0(&var_2c8)
            var_c_7.b = 0x11
            int32_t* eax_72
            
            if (ebx == 0xb)
                int32_t i_3 = sx.d(*(edi_16 i+ ebx_7 + 0x56))
                int32_t i = i_3
                int32_t esi_22 = 0
                void* eax_59
                
                for (; i != 0xffffffff; i = sx.d(*(eax_59 + 0x476)))
                    eax_59 = ebx_7 i+ i * 0x14
                    
                    if ((*(*(eax_59 + 0x46c) + 0x10) & 1) != 0)
                        esi_22 += 1
                
                int32_t i_1 = i_3
                int32_t edx_13 = 0
                int32_t eax_60
                
                for (; i_1 != 0xffffffff; i_1 = sx.d(*(ebx_7 i+ (eax_60 << 2) + 0x476)))
                    eax_60 = i_1 * 5
                    
                    if ((*(*(ebx_7 i+ (eax_60 << 2) + 0x46c) + 0x10) & 0x400) != 0)
                        edx_13 += 1
                
                int32_t var_2e0_13 = esi_22
                int32_t var_2e4_19 = edx_13
                char* var_294
                char** eax_62 = sub_4c4a50(&var_294, "%d/%d")
                var_c_7.b = 0x12
                int32_t* ecx_18 = var_2c8
                edx_10 = &data_83f3d3
                
                if (ecx_18 != 0)
                    edx_10 = ecx_18
                
                char* eax_63 = *eax_62
                
                if (eax_63 == 0)
                    eax_63 = &data_83f3d3
                
                if (edx_10 != eax_63)
                    if (ecx_18 != 0 && *ecx_18 != 0)
                        void* eax_65 = sub_4c4060(&var_2c8)
                        int32_t temp5_1 = *(eax_65 + 4)
                        *(eax_65 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            int32_t esi_24 = *(eax_65 + 0xc) + 0x10
                            edx_10 = sub_4f4430(eax_65, sub_4f4380(esi_24), esi_24)
                    
                    char* eax_68 = *eax_62
                    var_2c8 = eax_68
                    
                    if (eax_68 != 0 && *eax_68 != 0)
                        void* eax_70 = sub_4c4060(&var_2c8)
                        *(eax_70 + 4) += 1
                
                var_c_7.b = 0x11
                char* eax_71 = var_294
                
                if (eax_71 != 0 && *eax_71 != 0)
                    eax_72 = &var_294
                    goto label_456ccb
            else
                int32_t esi_26
                
                if (ebx == 0xa)
                    int32_t var_2e0_15 = sx.d(*(edi_16 i+ ebx_7 + 0xa6))
                    int32_t var_2e4_20 = sx.d(*(edi_16 i+ ebx_7 + 0xa3))
                    var_c_7.b = 0x13
                    edx_10 = sub_4c4510(sub_4c4a50(&var_29c, "%d/%d"))
                    var_c_7.b = 0x11
                    char* eax_79 = var_29c
                    
                    if (eax_79 != 0 && *eax_79 != 0)
                        eax_72 = &var_29c
                    label_456ccb:
                        int32_t* eax_73 = sub_4c4060(eax_72)
                        int32_t temp4_1 = eax_73[1]
                        eax_73[1] -= 1
                        
                        if (temp4_1 == 1)
                            esi_26 = eax_73[3] + 0x10
                            edx_10 = sub_4f4430(eax_73, sub_4f4380(esi_26), esi_26)
                else if (ebx == 9)
                    int32_t eax_80 = sub_49c940(var_2c4, ebx - 8, ebx_7)
                    int32_t i_2 = sx.d(*(edi_16 i+ ebx_7 + 0x46))
                    int32_t esi_28 = 0
                    
                    for (; i_2 != 0xffffffff; i_2 = sx.d(*(ebx_7 i+ ((i_2 * 5 + 0x11d) << 2))))
                        if (*(*(ebx_7 i+ i_2 * 0x14 + 0x46c) + 6) == 1)
                            esi_28 += 1
                    
                    int32_t var_2e0_17 = eax_80
                    int32_t var_2e4_21 = esi_28
                    char* var_290
                    int32_t** eax_81 = sub_4c4a50(&var_290, "%d/%d")
                    var_c_7.b = 0x14
                    int32_t* ecx_23 = var_2c8
                    edx_10 = &data_83f3d3
                    
                    if (ecx_23 != 0)
                        edx_10 = ecx_23
                    
                    int32_t* eax_82 = *eax_81
                    
                    if (eax_82 == 0)
                        eax_82 = &data_83f3d3
                    
                    if (edx_10 != eax_82)
                        if (ecx_23 != 0 && *ecx_23 != 0)
                            void* eax_84 = sub_4c4060(&var_2c8)
                            int32_t temp6_1 = *(eax_84 + 4)
                            *(eax_84 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                int32_t esi_30 = *(eax_84 + 0xc) + 0x10
                                edx_10 = sub_4f4430(eax_84, sub_4f4380(esi_30), esi_30)
                        
                        int32_t* eax_87 = *eax_81
                        var_2c8 = eax_87
                        
                        if (eax_87 != 0 && *eax_87 != 0)
                            void* eax_89 = sub_4c4060(&var_2c8)
                            *(eax_89 + 4) += 1
                    
                    var_c_7.b = 0x11
                    char* ebx_12 = var_290
                    
                    if (ebx_12 != 0 && *ebx_12 != 0)
                        if (*(ebx_12 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp7_1 = *(ebx_12 - 0xc)
                        *(ebx_12 - 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            esi_26 = *(ebx_12 - 4) + 0x10
                            edx_10 = sub_4f4430(&ebx_12[0xfffffff0], sub_4f4380(esi_26), esi_26)
            char* eax_91 = var_2bc
            char* const var_2c0_1 = &data_83f3d3
            
            if (eax_91 != 0)
                var_2c0_1 = eax_91
            
            int32_t* ecx_25 = data_307c200
            unimplemented  {fld1 }
            int32_t eax_92 = data_31663b4
            void* var_2e0_20 = &var_a0
            int32_t* var_2e4_22 = ecx_25
            float var_2e4_23 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            var_2c4 = ecx_25
            int32_t eax_93
            char edx_18
            eax_93, edx_18 = sub_4f62d0(eax_92, var_2e4_23, edx_10)
            void var_160
            __builtin_memcpy(&var_160, eax_93, 0x40)
            int32_t* esi_33 = var_2c4
            
            if (esi_33[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_33 == 0)
                sub_520800(eax_93, edx_18, esi_33, 0)
                
                if (*esi_33 == 0)
                    sub_509540(esi_33)
            
            int32_t edx_19 = sub_4f5010(&var_160, eax_92 * 0x118 + ***esi_33, var_2c0_1, 0)
            int32_t* eax_96 = var_2c8
            int32_t* var_2c0_2 = &data_83f3d3
            
            if (eax_96 != 0)
                var_2c0_2 = eax_96
            
            int32_t* ecx_29 = data_307c200
            unimplemented  {fld1 }
            int32_t* eax_97 = data_31663b0
            void* var_2e0_21 = &var_a0
            int32_t* var_2e4_25 = ecx_29
            float var_2e4_26 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            top -= 2
            var_2c4 = eax_97
            int32_t eax_98
            char edx_20
            eax_98, edx_20 = sub_4f62d0(eax_97, var_2e4_26, edx_19)
            void var_1a0
            __builtin_memcpy(&var_1a0, eax_98, 0x40)
            
            if (ecx_29[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_29 == 0)
                sub_520800(eax_98, edx_20, ecx_29, 0)
                
                if (*ecx_29 == 0)
                    sub_509540(ecx_29)
            
            sub_4f5010(&var_1a0, var_2c4 * 0x118 + ***ecx_29, var_2c0_2, 0)
            int32_t* edx_21 = data_27e7a40
            void* eax_101 = edx_21[0x152]
            
            if (eax_101 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_102 = *(eax_101 + 0x45844)
            int32_t eax_104
            
            if (*(eax_57 + eax_102 + 0x67) == 0)
                int32_t eax_105 = sx.d(*(eax_57 + eax_102 + 0x7b))
                int32_t eax_106 = neg.d(eax_105)
                eax_104 = sbb.d(eax_106, eax_106, eax_105 != 0) & 3
            else
                int32_t eax_103
                eax_103.b = ebx s>= 0xc
                eax_104 = eax_103 * 2 + 3
            
            int32_t eax_108
            eax_108.b = ebx s< 0xc
            
            if (eax_104 s> 0)
                if (eax_108 != 1)
                    edx_21 = data_31663a8
                    var_2c4 = edx_21
                else
                    var_2c4 = data_31663ac
                
                int32_t* ecx_35 = data_307c200
                unimplemented  {fld1 }
                void* var_2e0_22 = &var_a0
                int32_t* var_2e4_28 = ecx_35
                float var_2e4_29 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t eax_110
                char edx_22
                eax_110, edx_22 = sub_4f62d0(var_2c4, var_2e4_29, edx_21)
                void var_120
                __builtin_memcpy(&var_120, eax_110, 0x40)
                
                if (ecx_35[1] != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_35 == 0)
                    sub_520800(eax_110, edx_22, ecx_35, 0)
                    
                    if (*ecx_35 == 0)
                        sub_509540(ecx_35)
                
                void* eax_114 = var_2c4 * 0x118 + ***ecx_35
                int32_t edx_23 = sub_4f67d0(eax_114, nullptr, *(eax_114 + 0x68), eax_114, &data_be1ae0, 
                    &var_120, nullptr, nullptr)
                unimplemented  {call 0x4f67d0}
                int32_t* ecx_40 = data_307c200
                int32_t eax_115 = data_31663a4
                unimplemented  {fld1 }
                void* var_2e0_23 = &var_a0
                int32_t* var_2e4_30 = ecx_40
                float var_2e4_31 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t eax_116
                char edx_24
                eax_116, edx_24 = sub_4f62d0(eax_115, var_2e4_31, edx_23)
                __builtin_memcpy(&var_230, eax_116, 0x40)
                
                if (ecx_40[1] != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_40 == 0)
                    sub_520800(eax_116, edx_24, ecx_40, 0)
                    
                    if (*ecx_40 == 0)
                        sub_509540(ecx_40)
                
                void* eax_121 = eax_115 * 0x118 + ***ecx_40
                sub_4f67d0(eax_121, nullptr, *(eax_121 + 0x68), eax_121, &data_be1ae0, &var_230, 
                    nullptr, nullptr)
                unimplemented  {call 0x4f67d0}
                char* var_28c
                char** eax_123
                int32_t edx_25
                eax_123, edx_25 = sub_4c4ab0(&var_28c)
                var_c_7.b = 0x15
                char* eax_124 = *eax_123
                char* var_2c0_4 = &data_83f3d3
                
                if (eax_124 != 0)
                    var_2c0_4 = eax_124
                
                int32_t* ecx_44 = data_307c200
                unimplemented  {fld1 }
                int32_t eax_125 = data_31663a0
                void* var_2e0_24 = &var_a0
                int32_t* var_2e4_32 = ecx_44
                float var_2e4_33 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t eax_126
                char edx_26
                eax_126, edx_26 = sub_4f62d0(eax_125, var_2e4_33, edx_25)
                __builtin_memcpy(&var_1e0, eax_126, 0x40)
                
                if (ecx_44[1] != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_44 == 0)
                    sub_520800(eax_126, edx_26, ecx_44, 0)
                    
                    if (*ecx_44 == 0)
                        sub_509540(ecx_44)
                
                sub_4f5010(&var_1e0, eax_125 * 0x118 + ***ecx_44, var_2c0_4, 0)
                var_c_7.b = 0x11
                char* ebx_13 = var_28c
                
                if (ebx_13 != 0 && *ebx_13 != 0)
                    if (*(ebx_13 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp11_1 = *(ebx_13 - 0xc)
                    *(ebx_13 - 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        int32_t esi_47 = *(ebx_13 - 4) + 0x10
                        sub_4f4430(&ebx_13[0xfffffff0], sub_4f4380(esi_47), esi_47)
            
            var_c_7.b = 0x10
            int32_t* eax_131 = var_2c8
            
            if (eax_131 != 0 && *eax_131 != 0)
                if (eax_131[-4] != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp9_1 = eax_131[-3]
                eax_131[-3] -= 1
                
                if (temp9_1 == 1)
                    void* edi_32 = data_26a44e4
                    int32_t esi_49 = eax_131[-1] + 0x10
                    
                    if (edi_32 == 0)
                        sub_4f4250()
                        edi_32 = data_26a44e4
                    
                    int32_t edx_27 = 0
                    int32_t* edi_33
                    
                    while (true)
                        if (esi_49 s<= 1 << (edx_27.b + 4))
                            edi_33 = edi_32 + edx_27 * 0x14
                            break
                        
                        edx_27 += 1
                        
                        if (edx_27 s>= 7)
                            edi_33 = edi_32 + 0x8c
                            break
                    
                    sub_4f4430(&eax_131[-4], edi_33, esi_49)
            
            var_c_7.b = 8
            char* eax_134 = var_2bc
            
            if (eax_134 != 0 && *eax_134 != 0)
                if (*(eax_134 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp10_1 = *(eax_134 - 0xc)
                *(eax_134 - 0xc) -= 1
                
                if (temp10_1 == 1)
                    void* edi_34 = data_26a44e4
                    int32_t esi_51 = *(eax_134 - 4) + 0x10
                    
                    if (edi_34 == 0)
                        sub_4f4250()
                        edi_34 = data_26a44e4
                    
                    int32_t edx_28 = 0
                    int32_t* edi_35
                    
                    while (true)
                        if (esi_51 s<= 1 << (edx_28.b + 4))
                            edi_35 = edi_34 + edx_28 * 0x14
                            break
                        
                        edx_28 += 1
                        
                        if (edx_28 s>= 7)
                            edi_35 = edi_34 + 0x8c
                            break
                    
                    sub_4f4430(&eax_134[0xfffffff0], edi_35, esi_51)
            
            ecx_14 = var_2b8
            void* eax_138 = var_2b4_2 + 1
            var_2b4_2 = eax_138
            
            if (eax_138 s>= sx.d(*(ecx_14 i+ 0x458)))
                break
            
            esi_19 = var_2b4_2
            ebx_7 = ecx_14
    
    var_c_7.b = 3
    char* eax_48 = var_2a4
    
    if (eax_48 != 0 && *eax_48 != 0)
        if (*(eax_48 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp2_1 = *(eax_48 - 0xc)
        *(eax_48 - 0xc) -= 1
        
        if (temp2_1 == 1)
            void* edi_36 = data_26a44e4
            int32_t esi_53 = *(eax_48 - 4) + 0x10
            
            if (edi_36 == 0)
                sub_4f4250()
                edi_36 = data_26a44e4
            
            int32_t edx_31 = 0
            int32_t* edi_37
            
            while (true)
                if (esi_53 s<= 1 << (edx_31.b + 4))
                    edi_37 = edi_36 + edx_31 * 0x14
                    break
                
                edx_31 += 1
                
                if (edx_31 s>= 7)
                    edi_37 = edi_36 + 0x8c
                    break
            
            sub_4f4430(&eax_48[0xfffffff0], edi_37, esi_53)
    
    int32_t result = 0xffffffff
    int32_t var_c_8 = 0xffffffff
    char* ebx_16 = var_2a0
    
    if (ebx_16 != 0 && *ebx_16 != 0)
        if (*(ebx_16 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp3_1 = *(ebx_16 - 0xc)
        *(ebx_16 - 0xc) -= 1
        
        if (temp3_1 == 1)
            void* edx_32 = data_26a44e4
            int32_t esi_55 = *(ebx_16 - 4) + 0x10
            
            if (edx_32 == 0)
                sub_4f4250()
                edx_32 = data_26a44e4
            
            int32_t eax_156 = 0
            int32_t* edi_39
            
            while (true)
                if (esi_55 s<= 1 << (eax_156.b + 4))
                    edi_39 = edx_32 + eax_156 * 0x14
                    break
                
                eax_156 += 1
                
                if (eax_156 s>= 7)
                    edi_39 = edx_32 + 0x8c
                    break
            
            result = sub_4f4430(&ebx_16[0xfffffff0], edi_39, esi_55)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_2cc)
    return result
}

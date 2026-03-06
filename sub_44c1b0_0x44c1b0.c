// 函数名称: sub_44c1b0
// 虚拟地址: 0x44c1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_44c1b0(int32_t arg1, int32_t arg2, char* arg3, char** arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e150
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* ebx = arg3
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    int32_t edx = sub_4c42b0(arg4, "{help}")
    int32_t var_8_2 = 0
    void* eax_4 = *(data_27e7a40 + 0x548)
    int32_t var_14_1 = 1
    
    if (eax_4 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_6 = *(eax_4 + 0x45844)
    arg3.b = *(eax_6 + 0x45a)
    int32_t eax_7
    
    if (arg3.b s<= 1 || arg3.b s>= 4 || *(eax_6 + 0x45c) != 0)
        eax_7 = 0
    else
        eax_7 = 1
    
    char* var_18
    
    switch (sx.d(*ebx) - 1)
        case 0
            if ((*(ebx + 8) & 1) != 0)
                int128_t* esi_1 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_1 = &data_85f840
                
                void var_38
                int32_t* eax_13
                int32_t edx_1
                eax_13, edx_1 = sub_4c4330(" extra card", edx, &var_38)
                int32_t var_8_3 = 1
                var_8_3.b = 2
                var_8_3.b = 3
                var_8_3.b = 4
                var_8_3.b = 5
                void var_2b4
                void var_2a0
                void var_168
                void var_30
                int128_t* eax_18 = *sub_44be60(&var_168, 
                    sub_4c48a0(
                        sub_44bee0(&var_30, sub_4c4330("draw ", edx_1, &var_2a0), sx.d(ebx[0x10])), 
                        &var_2b4, eax_13), 
                    esi_1)
                
                if (eax_18 == 0)
                    eax_18 = &data_83f3d3
                
                sub_4c4620(arg4, eax_18)
                var_8_3.b = 4
                sub_4c43d0(&var_168)
                var_8_3.b = 3
                sub_4c43d0(&var_2b4)
                var_8_3.b = 2
                sub_4c43d0(&var_30)
                var_8_3.b = 1
                sub_4c43d0(&var_2a0)
                var_8_3.b = 0
                edx = sub_4c43d0(&var_38)
            
            if ((*(ebx + 8) & 2) != 0)
                int128_t* esi_2 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_2 = &data_85f840
                
                void var_180
                int32_t* eax_23
                int32_t edx_2
                eax_23, edx_2 = sub_4c4330(" extra card", edx, &var_180)
                int32_t var_8_4 = 6
                var_8_4.b = 7
                var_8_4.b = 8
                var_8_4.b = 9
                var_8_4.b = 0xa
                void var_218
                void var_178
                void var_48
                void var_40
                int128_t* eax_28 = *sub_44be60(&var_178, 
                    sub_4c48a0(
                        sub_44bee0(&var_218, sub_4c4330("keep ", edx_2, &var_48), sx.d(ebx[0x10])), 
                        &var_40, eax_23), 
                    esi_2)
                
                if (eax_28 == 0)
                    eax_28 = &data_83f3d3
                
                sub_4c4620(arg4, eax_28)
                var_8_4.b = 9
                sub_4c43d0(&var_178)
                var_8_4.b = 8
                sub_4c43d0(&var_40)
                var_8_4.b = 7
                sub_4c43d0(&var_218)
                var_8_4.b = 6
                sub_4c43d0(&var_48)
                var_8_4.b = 0
                sub_4c43d0(&var_180)
            
            if ((*(ebx + 8) & 4) != 0)
                sub_4c4620(arg4, "may discard cards from your entire hand when exploring")
            
            if ((*(ebx + 8) & 8) != 0)
                sub_4c4620(arg4, "may discard 1 card from your hand to gain 1 prestige {prestige}")
        case 1
            if ((*(ebx + 8) & 1) != 0)
                int128_t* esi_3 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_3 = &data_85f840
                
                void var_220
                int32_t* eax_37
                int32_t edx_3
                eax_37, edx_3 = sub_4c4330(" card", edx, &var_220)
                int32_t var_8_5 = 0xb
                var_8_5.b = 0xc
                var_8_5.b = 0xd
                var_8_5.b = 0xe
                var_8_5.b = 0xf
                var_8_5.b = 0x10
                void var_268
                void var_188
                void var_60
                void var_58
                void var_50
                int128_t* eax_43 = *sub_44be60(&var_50, 
                    sub_44be60(&var_268, 
                        sub_4c48a0(
                            sub_44bee0(&var_188, sub_4c4330("draw ", edx_3, &var_60), sx.d(ebx[0x10])), 
                            &var_58, eax_37), 
                        esi_3), 
                    " at start of phase")
                
                if (eax_43 == 0)
                    eax_43 = &data_83f3d3
                
                sub_4c4620(arg4, eax_43)
                var_8_5.b = 0xf
                sub_4c43d0(&var_50)
                var_8_5.b = 0xe
                sub_4c43d0(&var_268)
                var_8_5.b = 0xd
                sub_4c43d0(&var_58)
                var_8_5.b = 0xc
                sub_4c43d0(&var_188)
                var_8_5.b = 0xb
                sub_4c43d0(&var_60)
                var_8_5.b = 0
                edx = sub_4c43d0(&var_220)
            
            if ((*(ebx + 8) & 2) != 0)
                int32_t var_2c8_14 = sx.d(ebx[0x10])
                int32_t var_8_6 = 0x11
                void var_68
                int128_t* eax_49 = *sub_4c4a50(&var_68, "-%d development cost")
                
                if (eax_49 == 0)
                    eax_49 = &data_83f3d3
                
                sub_4c4620(arg4, eax_49)
                var_8_6.b = 0
                edx = sub_4c43d0(&var_68)
            
            if ((*(ebx + 8) & 8) != 0)
                int128_t* esi_4 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_4 = &data_85f840
                
                void var_80
                int32_t* eax_54
                int32_t edx_4
                eax_54, edx_4 = sub_4c4330(" card", edx, &var_80)
                int32_t var_8_7 = 0x12
                var_8_7.b = 0x13
                var_8_7.b = 0x14
                var_8_7.b = 0x15
                var_8_7.b = 0x16
                var_8_7.b = 0x17
                void var_290
                void var_198
                void var_190
                void var_78
                void var_70
                int128_t* eax_60 = *sub_44be60(&var_190, 
                    sub_44be60(&var_70, 
                        sub_4c48a0(
                            sub_44bee0(&var_78, sub_4c4330("draw ", edx_4, &var_198), sx.d(ebx[0x10])), 
                            &var_290, eax_54), 
                        esi_4), 
                    " at the start of this phase, then discard 1 card from hand")
                
                if (eax_60 == 0)
                    eax_60 = &data_83f3d3
                
                sub_4c4620(arg4, eax_60)
                var_8_7.b = 0x16
                sub_4c43d0(&var_190)
                var_8_7.b = 0x15
                sub_4c43d0(&var_70)
                var_8_7.b = 0x14
                sub_4c43d0(&var_290)
                var_8_7.b = 0x13
                sub_4c43d0(&var_78)
                var_8_7.b = 0x12
                sub_4c43d0(&var_198)
                var_8_7.b = 0
                edx = sub_4c43d0(&var_80)
            
            if ((*(ebx + 8) & 4) != 0)
                int128_t* esi_5 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_5 = &data_85f840
                
                void var_98
                int32_t* eax_65
                int32_t edx_5
                eax_65, edx_5 = sub_4c4330(" card", edx, &var_98)
                int32_t var_8_8 = 0x18
                var_8_8.b = 0x19
                var_8_8.b = 0x1a
                var_8_8.b = 0x1b
                var_8_8.b = 0x1c
                var_8_8.b = 0x1d
                void var_270
                void var_228
                void var_1a0
                void var_90
                void var_88
                int128_t* eax_71 = *sub_44be60(&var_228, 
                    sub_44be60(&var_88, 
                        sub_4c48a0(
                            sub_44bee0(&var_90, sub_4c4330("draw ", edx_5, &var_270), sx.d(ebx[0x10])), 
                            &var_1a0, eax_65), 
                        esi_5), 
                    " after placing a development")
                
                if (eax_71 == 0)
                    eax_71 = &data_83f3d3
                
                sub_4c4620(arg4, eax_71)
                var_8_8.b = 0x1c
                sub_4c43d0(&var_228)
                var_8_8.b = 0x1b
                sub_4c43d0(&var_88)
                var_8_8.b = 0x1a
                sub_4c43d0(&var_1a0)
                var_8_8.b = 0x19
                sub_4c43d0(&var_90)
                var_8_8.b = 0x18
                sub_4c43d0(&var_270)
                var_8_8.b = 0
                edx = sub_4c43d0(&var_98)
            
            if ((*(ebx + 8) & 0x10) != 0)
                int128_t* esi_6 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_6 = &data_85f840
                
                void var_1b0
                int32_t* eax_76
                int32_t edx_6
                eax_76, edx_6 = sub_4c4330(" card", edx, &var_1b0)
                int32_t var_8_9 = 0x1e
                var_8_9.b = 0x1f
                var_8_9.b = 0x20
                var_8_9.b = 0x21
                var_8_9.b = 0x22
                void var_230
                void var_1a8
                void var_a8
                void var_a0
                int128_t* eax_81 = *sub_44be60(&var_1a8, 
                    sub_4c48a0(
                        sub_44bee0(&var_230, 
                            sub_4c4330(
                                "discard from empire to reduce cost of placing a development by ", 
                                edx_6, &var_a8), 
                            sx.d(ebx[0x10])), 
                        &var_a0, eax_76), 
                    esi_6)
                
                if (eax_81 == 0)
                    eax_81 = &data_83f3d3
                
                sub_4c4620(arg4, eax_81)
                var_8_9.b = 0x21
                sub_4c43d0(&var_1a8)
                var_8_9.b = 0x20
                sub_4c43d0(&var_a0)
                var_8_9.b = 0x1f
                sub_4c43d0(&var_230)
                var_8_9.b = 0x1e
                sub_4c43d0(&var_a8)
                var_8_9.b = 0
                sub_4c43d0(&var_1b0)
            
            if ((*(ebx + 8) & 0x20) != 0)
                sub_4c4620(arg4, "put 1 card from a development payment under this world")
            
            if ((*(ebx + 8) & 0x40) != 0)
                sub_4c4620(arg4, "gain 1 prestige {prestige} after placing a development {development}")
            
            if ((*(ebx + 8) & 0x80) != 0)
                sub_4c4620(arg4, 
                    "gain 1 prestige {prestige} after placing a Rebel development {rebeldevelopment}")
            
            if ((*(ebx + 8) & 0x100) != 0)
                sub_4c4620(arg4, 
                    "gain 1 prestige {prestige} after placing a 6-cost development {6costdevelopment}")
            
            if ((*(ebx + 8) & 0x200) != 0)
                int32_t var_2c8_28 = sx.d(ebx[0x10])
                int32_t var_8_10 = 0x23
                void var_b0
                int128_t* eax_104 = *sub_4c4a50(&var_b0, 
                    "may discard a Rare Elements good {raregood} for -%d development cost")
                
                if (eax_104 == 0)
                    eax_104 = &data_83f3d3
                
                sub_4c4620(arg4, eax_104)
                var_8_10.b = 0
                sub_4c43d0(&var_b0)
        case 2
            int32_t ecx_54 = *(ebx + 8)
            int128_t* esi_8 = arg4
            int32_t var_20_1 = *(ebx + 0xc)
            
            if ((ecx_54 & 1) != 0)
                if ((ecx_54 & 0x20000000) != 0)
                    sub_4c4620(esi_8, "may discard a Genes good {genesgood} to ")
                
                sub_4c4620(esi_8, "reduce the cost of ")
                
                if ((*(ebx + 8) & 2) != 0)
                    sub_4c4620(esi_8, "Novelty ")
                
                if ((*(ebx + 8) & 4) != 0)
                    sub_4c4620(esi_8, "Rare ")
                
                if ((*(ebx + 8) & 8) != 0)
                    sub_4c4620(esi_8, "Gene ")
                
                if ((*(ebx + 8) & 0x10) != 0)
                    sub_4c4620(esi_8, "Alien ")
                
                sub_4c4620(esi_8, "non-military worlds ")
                int32_t ecx_57 = *(ebx + 8)
                int32_t var_20_2 = *(ebx + 0xc)
                int128_t* var_2c8_30
                
                if ((ecx_57 & 2) != 0)
                    var_2c8_30 = "{noveltynonmilitaryworld} "
                else if ((ecx_57 & 4) != 0)
                    var_2c8_30 = "{rarenonmilitaryworld} "
                else if ((ecx_57 & 8) != 0)
                    var_2c8_30 = "{genesnonmilitaryworld} "
                else if ((ecx_57 & 0x10) == 0)
                    var_2c8_30 = "{nonmilitaryworld} "
                else
                    var_2c8_30 = "{aliennonmilitaryworld} "
                
                int32_t var_8_11 = 0x24
                var_8_11.b = 0x25
                void var_2b0
                void var_b8
                int128_t* eax_141 = *sub_44bee0(&var_2b0, 
                    sub_4c4330("by ", sub_4c4620(esi_8, var_2c8_30), &var_b8), sx.d(ebx[0x10]))
                
                if (eax_141 == 0)
                    eax_141 = &data_83f3d3
                
                sub_4c4620(esi_8, eax_141)
                var_8_11.b = 0x24
                sub_4c43d0(&var_2b0)
                var_8_11.b = 0
                sub_4c43d0(&var_b8)
            
            int32_t ecx_64 = *(ebx + 8)
            int32_t var_20_3 = *(ebx + 0xc)
            
            if ((ecx_64 & 0x20) == 0)
                if ((ecx_64 & 0x80) != 0)
                    char eax_190 = ebx[0x10]
                    int32_t var_8_14
                    char** ecx_83
                    
                    if (eax_190 != 1)
                        int32_t var_2c8_41 = sx.d(eax_190)
                        var_8_14 = 0x2f
                        char* var_e0
                        int128_t* eax_195 = *sub_4c4a50(&var_e0, 
                            "may discard up to %d cards to gain +1 Military apiece until the end of the phase")
                        
                        if (eax_195 == 0)
                            eax_195 = &data_83f3d3
                        
                        sub_4c4620(esi_8, eax_195)
                        ecx_83 = &var_e0
                    else
                        var_8_14 = 0x2e
                        char* var_1c8
                        int128_t* eax_192 = *sub_4c4330(
                            "may discard a card to gain +1 Military until the end of the phase", 0, 
                            &var_1c8)
                        
                        if (eax_192 == 0)
                            eax_192 = &data_83f3d3
                        
                        sub_4c4620(esi_8, eax_192)
                        ecx_83 = &var_1c8
                    
                    var_8_14.b = 0
                    sub_4c43d0(ecx_83)
                
                int32_t ecx_84 = *(ebx + 8)
                int32_t var_20_4 = *(ebx + 0xc)
                
                if ((ecx_84 & 0x80000000) != 0)
                    void var_f0
                    int32_t* eax_200
                    int32_t edx_16
                    eax_200, edx_16 = sub_4c4330(" Military until the end of the phase", 0, &var_f0)
                    int32_t var_8_15 = 0x30
                    var_8_15.b = 0x31
                    var_8_15.b = 0x32
                    var_8_15.b = 0x33
                    void var_240
                    void var_1d0
                    void var_e8
                    int128_t* eax_204 = *sub_4c48a0(
                        sub_44bee0(&var_e8, 
                            sub_4c4330("spend 1 prestige {prestige} to gain +", edx_16, &var_1d0), 
                            sx.d(ebx[0x10])), 
                        &var_240, eax_200)
                    
                    if (eax_204 == 0)
                        eax_204 = &data_83f3d3
                    
                    sub_4c4620(esi_8, eax_204)
                    var_8_15.b = 0x32
                    sub_4c43d0(&var_240)
                    var_8_15.b = 0x31
                    sub_4c43d0(&var_e8)
                    var_8_15.b = 0x30
                    sub_4c43d0(&var_1d0)
                    var_8_15.b = 0
                    sub_4c43d0(&var_f0)
                else if ((ecx_84 & 0x10000000) != 0)
                    void var_100
                    int32_t* eax_209
                    int32_t edx_17
                    eax_209, edx_17 = sub_4c4330(" Military until end of the phase", 0, &var_100)
                    int32_t var_8_16 = 0x34
                    var_8_16.b = 0x35
                    var_8_16.b = 0x36
                    var_8_16.b = 0x37
                    void var_298
                    void var_1d8
                    void var_f8
                    int128_t* eax_213 = *sub_4c48a0(
                        sub_44bee0(&var_f8, 
                            sub_4c4330("may discard a Rare Elements good {raregood} to gain +", edx_17, 
                                &var_1d8), 
                            sx.d(ebx[0x10])), 
                        &var_298, eax_209)
                    
                    if (eax_213 == 0)
                        eax_213 = &data_83f3d3
                    
                    sub_4c4620(esi_8, eax_213)
                    var_8_16.b = 0x36
                    sub_4c43d0(&var_298)
                    var_8_16.b = 0x35
                    sub_4c43d0(&var_f8)
                    var_8_16.b = 0x34
                    sub_4c43d0(&var_1d8)
                    var_8_16.b = 0
                    sub_4c43d0(&var_100)
                else if ((ecx_84 & 0x40000000) == 0)
                    int32_t edx_21 = 0
                    
                    if ((ecx_84 & 0x100) == 0)
                    label_44d34f:
                        
                        if ((*(ebx + 8) & 0x4000) != 0)
                            sub_4c4620(esi_8, "may place a")
                            int32_t ecx_124 = *(ebx + 8)
                            int32_t var_20_5 = *(ebx + 0xc)
                            int128_t* var_2c8_62
                            
                            if ((ecx_124 & 0x200) != 0)
                                var_2c8_62 = " Rebel military world {rebelmilitaryworld}"
                            else if ((ecx_124 & 0x400) != 0)
                                var_2c8_62 = " Chromosome military world  {militarychromosomeworld}"
                            else if ((ecx_124 & 0x10) == 0)
                                var_2c8_62 = " military world {militaryworld}"
                            else
                                var_2c8_62 = "n Alien military world {alienmilitaryworld} as "
                                "non-military {aliennonmilitaryworld}"
                            
                            edx_21 = sub_4c4620(esi_8, var_2c8_62)
                            
                            if ((*(ebx + 8) & 0x10) == 0)
                                edx_21 = sub_4c4620(esi_8, 
                                    " as non-military {nonmilitaryworld} at a cost equal to defense")
                            
                            if (ebx[0x10] s> 0)
                                int32_t var_8_19 = 0x4c
                                var_8_19.b = 0x4d
                                void var_258
                                void var_148
                                int128_t* eax_293 = *sub_44bee0(&var_258, 
                                    sub_4c4330(" -", edx_21, &var_148), sx.d(ebx[0x10]))
                                
                                if (eax_293 == 0)
                                    eax_293 = &data_83f3d3
                                
                                sub_4c4620(esi_8, eax_293)
                                var_8_19.b = 0x4c
                                sub_4c43d0(&var_258)
                                var_8_19.b = 0
                                edx_21 = sub_4c43d0(&var_148)
                            
                            if ((*(ebx + 8) & 0x610) == 0)
                                edx_21 = sub_4c4620(esi_8, 
                                    "\r(cannot be used on Alien worlds 
                                        {alienwindfallworld}{alienproductionworld})")
                        
                        if ((*(ebx + 8) & 0x8000) != 0)
                            int32_t var_8_20 = 0x4e
                            var_8_20.b = 0x4f
                            var_8_20.b = 0x50
                            void var_288
                            void var_200
                            void var_150
                            int128_t* eax_305 = *sub_44be60(&var_200, 
                                sub_44bee0(&var_150, sub_4c4330(-", edx_21, &var_288), 
                                sx.d(ebx[0x10])), 
                                " cost when using a pay for Military power {payformilitarypower}")
                            
                            if (eax_305 == 0)
                                eax_305 = &data_83f3d3
                            
                            sub_4c4620(esi_8, eax_305)
                            var_8_20.b = 0x4f
                            sub_4c43d0(&var_200)
                            var_8_20.b = 0x4e
                            sub_4c43d0(&var_150)
                            var_8_20.b = 0
                            edx_21 = sub_4c43d0(&var_288)
                        
                        if ((*(ebx + 8) & 0x10000) != 0)
                            edx_21 = sub_4c4620(esi_8, 
                                "gain 1 prestige {prestige} after using a pay for Military power 
                                    {payformilitarypower}")
                        
                        if ((*(ebx + 8) & 0x80000) != 0)
                            int128_t* edi_14 = &data_83f3d3
                            
                            if (ebx[0x10] != 1)
                                edi_14 = &data_85f840
                            
                            int32_t var_8_21 = 0x51
                            var_8_21.b = 0x52
                            var_8_21.b = 0x53
                            var_8_21.b = 0x54
                            var_8_21.b = 0x55
                            void var_260
                            void var_208
                            void var_160
                            void var_158
                            void var_28
                            int128_t* eax_319 = *sub_44be60(&var_158, 
                                sub_44be60(&var_208, 
                                    sub_44be60(&var_160, 
                                        sub_44bee0(&var_260, sub_4c4330("draw ", edx_21, &var_28), 
                                            sx.d(ebx[0x10])), 
                                        " card"), 
                                    edi_14), 
                                " after placing a world")
                            
                            if (eax_319 == 0)
                                eax_319 = &data_83f3d3
                            
                            sub_4c4620(esi_8, eax_319)
                            var_8_21.b = 0x54
                            sub_4c43d0(&var_158)
                            var_8_21.b = 0x53
                            sub_4c43d0(&var_208)
                            var_8_21.b = 0x52
                            sub_4c43d0(&var_160)
                            var_8_21.b = 0x51
                            sub_4c43d0(&var_260)
                            var_8_21.b = 0
                            edx_21 = sub_4c43d0(&var_28)
                        
                        if ((*(ebx + 8) & 0x100000) != 0)
                            int128_t* edi_15 = &data_83f3d3
                            
                            if (ebx[0x10] != 1)
                                edi_15 = &data_85f840
                            
                            int32_t var_8_22 = 0x56
                            var_8_22.b = 0x57
                            var_8_22.b = 0x58
                            var_8_22.b = 0x59
                            var_8_22.b = 0x5a
                            void var_210
                            void var_170
                            void var_3c
                            void var_34
                            void var_2c
                            int128_t* eax_329 = *sub_44be60(&var_210, 
                                sub_44be60(&var_170, 
                                    sub_44be60(&var_2c, 
                                        sub_44bee0(&var_34, 
                                            sub_4c4330("after placing a world, draw ", edx_21, 
                                                &var_3c), 
                                            sx.d(ebx[0x10])), 
                                        " card"), 
                                    edi_15), 
                                " and discard 1 card")
                            
                            if (eax_329 == 0)
                                eax_329 = &data_83f3d3
                            
                            sub_4c4620(esi_8, eax_329)
                            var_8_22.b = 0x59
                            sub_4c43d0(&var_210)
                            var_8_22.b = 0x58
                            sub_4c43d0(&var_170)
                            var_8_22.b = 0x57
                            sub_4c43d0(&var_2c)
                            var_8_22.b = 0x56
                            sub_4c43d0(&var_34)
                            var_8_22.b = 0
                            sub_4c43d0(&var_3c)
                        
                        if ((*(ebx + 8) & &__dos_header) != 0)
                            sub_4c4620(esi_8, 
                                "gain 1 prestige {prestige} after conquering a Rebel military world 
                                    {rebelmilitaryworld}")
                        
                        if ((*(ebx + 8) & &data_800000) != 0)
                            sub_4c4620(esi_8, "put 1 card from a world payment under this world")
                        
                        if ((*(ebx + 8) & 0x1000000) != 0)
                            sub_4c4620(esi_8, 
                                "may place a second world {nonmilitaryworld}{militaryworld}. Powers gained "
                            "from either world don't take effect until the end of the phase.")
                        
                        if ((*(ebx + 8) & 0x4000000) != 0)
                            sub_4c4620(esi_8, 
                                "may place a second military world using leftover Military strength")
                        
                        if ((*(ebx + 0xc) & 1) != 0)
                            sub_4c4620(esi_8, 
                                "put a good {anygood} on a production world {productionworld} after placing 
                                    it")
                        
                        if ((*(ebx + 0xc) & 2) != 0)
                            sub_4c4620(esi_8, 
                                "gain 1 prestige {prestige} after placing a production world 
                                    {productionworld}")
                        
                        if ((*(ebx + 0xc) & 4) != 0)
                            sub_4c4620(esi_8, 
                                "take over {takeover_imperium} a Rebel military world {rebelmilitaryworld}")
                        
                        if ((*(ebx + 0xc) & 8) != 0)
                            sub_4c4620(esi_8, 
                                "take over {takeover_rebel} from an empire with at least 1 "
                            "{imperium}IMPERIUM{help} card, adding 2 Military for each Rebel military "
                            "world {rebelmilitaryworld} in your empire")
                        
                        if ((*(ebx + 0xc) & 0x10) != 0)
                            sub_4c4620(esi_8, 
                                "take over {takeover_military} from an empire with a total Military of at "
                            "least 1")
                            
                            if ((*(ebx + 0xc) & 0x40) != 0)
                                sub_4c4620(esi_8, 
                                    " (if successful, destroy world and gain 2 prestige {prestige})")
                        
                        if ((*(ebx + 0xc) & 0x20) != 0)
                            sub_4c4620(esi_8, 
                                "spend 1 prestige {prestige} to take over {takeover_attempt_all} from any "
                            "player's empire (gain 2 prestige {prestige} if successful)")
                        
                        if ((*(ebx + 0xc) & 0x80) != 0)
                            sub_4c4620(esi_8, 
                                "+2 takeover defense{takeover_defense}per Rebel military world "
                            "{rebelmilitaryworld} and +1 per other military world {militaryworld}")
                        
                        if ((*(ebx + 0xc) & 0x100) != 0)
                            sub_4c4620(esi_8, 
                                "may spend 1 prestige {prestige} to defeat 1 takeover attempt 
                                    {takeover_attempt}")
                        
                        if ((*(ebx + 0xc) & 0x200) != 0)
                            sub_4c4620(esi_8, 
                                "may replace a non-military world {nonmilitaryworld} with a 0-3 higher cost "
                            "world of the same kind at no cost to gain 1 prestige {prestige}")
                        
                        if ((*(ebx + 0xc) & 0x400) != 0)
                            sub_4c4620(arg4, 
                                "may flip a card, if it is a non-military world {nonmilitaryworld}, place it "
                            "at no cost; if not, keep it")
                    else if ((ecx_84 & 0x800) == 0)
                        if ((ecx_84 & 0x1000) == 0)
                            char* esi_9 = &data_860230
                            
                            if (ebx[0x10] s<= 0)
                                esi_9 = &data_83f3d3
                            
                            void var_1e8
                            int32_t* eax_231
                            int32_t edx_22
                            eax_231, edx_22 = sub_4c4330(" additional Military ", 0, &var_1e8)
                            int32_t var_8_18 = 0x3c
                            var_8_18.b = 0x3d
                            var_8_18.b = 0x3e
                            void var_280
                            void var_118
                            sub_4c48a0(
                                sub_44bee0(&var_280, sub_4c4330(esi_9, edx_22, &var_118), 
                                    sx.d(ebx[0x10])), 
                                &var_18, eax_231)
                            var_8_18.b = 0x40
                            sub_4c43d0(&var_280)
                            var_8_18.b = 0x41
                            sub_4c43d0(&var_118)
                            var_8_18.b = 0x42
                            int32_t edx_24 = sub_4c43d0(&var_1e8)
                            char** esi_10
                            
                            if ((*(ebx + 8) & 2) == 0)
                                esi_10 = arg4
                            else
                                var_8_18.b = 0x43
                                void var_120
                                char* const eax_239 = *sub_44be60(&var_120, &var_18, 
                                    "towards Novelty worlds {noveltyproductionworld}{noveltywindfallworld}")
                                
                                if (eax_239 == 0)
                                    eax_239 = &data_83f3d3
                                
                                esi_10 = arg4
                                sub_4c4620(esi_10, eax_239)
                                var_8_18.b = 0x42
                                edx_24 = sub_4c43d0(&var_120)
                            
                            if ((*(ebx + 8) & 4) != 0)
                                var_8_18.b = 0x44
                                void var_250
                                char* const eax_245 = *sub_44be60(&var_250, &var_18, 
                                    "towards Rare worlds {rareproductionworld}{rarewindfallworld}")
                                
                                if (eax_245 == 0)
                                    eax_245 = &data_83f3d3
                                
                                sub_4c4620(esi_10, eax_245)
                                var_8_18.b = 0x42
                                edx_24 = sub_4c43d0(&var_250)
                            
                            if ((*(ebx + 8) & 8) != 0)
                                var_8_18.b = 0x45
                                void var_128
                                int128_t* eax_251 = *sub_44be60(&var_128, &var_18, 
                                    "towards Gene worlds {genesproductionworld}{geneswindfallworld}")
                                
                                if (eax_251 == 0)
                                    eax_251 = &data_83f3d3
                                
                                sub_4c4620(esi_10, eax_251)
                                var_8_18.b = 0x42
                                edx_24 = sub_4c43d0(&var_128)
                            
                            if ((*(ebx + 8) & 0x10) != 0)
                                var_8_18.b = 0x46
                                void var_1f0
                                int128_t* eax_257 = *sub_44be60(&var_1f0, &var_18, 
                                    "towards Alien worlds {alienproductionworld}{alienwindfallworld}")
                                
                                if (eax_257 == 0)
                                    eax_257 = &data_83f3d3
                                
                                sub_4c4620(esi_10, eax_257)
                                var_8_18.b = 0x42
                                edx_24 = sub_4c43d0(&var_1f0)
                            
                            if ((*(ebx + 8) & 0x200) == 0)
                                char* esi_11 = &data_860230
                                
                                if (ebx[0x10] s<= 0)
                                    esi_11 = &data_83f3d3
                                
                                void var_140
                                int32_t* eax_265
                                int32_t edx_25
                                eax_265, edx_25 = sub_4c4330(" Military", edx_24, &var_140)
                                var_8_18.b = 0x48
                                var_8_18.b = 0x49
                                var_8_18.b = 0x4a
                                var_8_18.b = 0x4b
                                void var_2a8
                                void var_1f8
                                void var_138
                                int128_t* eax_270 = *sub_4c48a0(
                                    sub_44bee0(&var_138, sub_4c4330(esi_11, edx_25, &var_1f8), 
                                        sx.d(ebx[0x10])), 
                                    &var_2a8, eax_265)
                                
                                if (eax_270 == 0)
                                    eax_270 = &data_83f3d3
                                
                                sub_4c4620(arg4, eax_270)
                                var_8_18.b = 0x4a
                                sub_4c43d0(&var_2a8)
                                var_8_18.b = 0x49
                                sub_4c43d0(&var_138)
                                var_8_18.b = 0x48
                                sub_4c43d0(&var_1f8)
                                var_8_18.b = 0x42
                                sub_4c43d0(&var_140)
                                esi_10 = arg4
                            else
                                var_8_18.b = 0x47
                                void var_130
                                int128_t* eax_263 = *sub_44be60(&var_130, &var_18, 
                                    "towards Rebel military worlds {rebelmilitaryworld}")
                                
                                if (eax_263 == 0)
                                    eax_263 = &data_83f3d3
                                
                                sub_4c4620(esi_10, eax_263)
                                var_8_18.b = 0x42
                                sub_4c43d0(&var_130)
                            
                            if ((*(ebx + 8) & 0x2000) != 0)
                                sub_4c4620(esi_10, 
                                    " if player has an {imperium}IMPERIUM{help} card in empire")
                            
                            var_8_18.b = 0
                            edx_21 = sub_4c43d0(&var_18)
                            esi_8 = arg4
                            goto label_44d34f
                        
                        sub_4c4620(esi_8, 
                            "+1 Military per chromosome world {chromosome} in the player's empire")
                    else
                        sub_4c4620(esi_8, 
                            "+1 Military per military world {militaryworld} in the player's empire")
                else
                    void var_110
                    int32_t* eax_218
                    int32_t edx_19
                    eax_218, edx_19 = sub_4c4330(" Military until end of the phase", 0, &var_110)
                    int32_t var_8_17 = 0x38
                    var_8_17.b = 0x39
                    var_8_17.b = 0x3a
                    var_8_17.b = 0x3b
                    void var_248
                    void var_1e0
                    void var_108
                    int128_t* eax_222 = *sub_4c48a0(
                        sub_44bee0(&var_108, 
                            sub_4c4330("may discard an Alien Tech good {aliengood} to gain +", edx_19, 
                                &var_1e0), 
                            sx.d(ebx[0x10])), 
                        &var_248, eax_218)
                    
                    if (eax_222 == 0)
                        eax_222 = &data_83f3d3
                    
                    sub_4c4620(esi_8, eax_222)
                    var_8_17.b = 0x3a
                    sub_4c43d0(&var_248)
                    var_8_17.b = 0x39
                    sub_4c43d0(&var_108)
                    var_8_17.b = 0x38
                    sub_4c43d0(&var_1e0)
                    var_8_17.b = 0
                    sub_4c43d0(&var_110)
            else
                int32_t edx_9 = sub_4c4620(esi_8, "discard from empire to ")
                
                if ((*(ebx + 8) & 0x40) != 0)
                    edx_9 = sub_4c4620(esi_8, 
                        "place a non-military world {nonmilitaryworld} at 0 cost\r(cannot be used on Alien "
                    "worlds {alienproductionworld}{alienwindfallworld})")
                
                if ((*(ebx + 8) & 0x100) != 0)
                    void var_c8
                    int32_t* eax_155
                    int32_t edx_10
                    eax_155, edx_10 = sub_4c4330(" Military until the end of the phase", edx_9, &var_c8)
                    int32_t var_8_12 = 0x26
                    var_8_12.b = 0x27
                    var_8_12.b = 0x28
                    var_8_12.b = 0x29
                    void var_238
                    void var_1b8
                    void var_c0
                    int128_t* eax_159 = *sub_4c48a0(
                        sub_44bee0(&var_c0, sub_4c4330("gain +", edx_10, &var_238), sx.d(ebx[0x10])), 
                        &var_1b8, eax_155)
                    
                    if (eax_159 == 0)
                        eax_159 = &data_83f3d3
                    
                    sub_4c4620(esi_8, eax_159)
                    var_8_12.b = 0x28
                    sub_4c43d0(&var_1b8)
                    var_8_12.b = 0x27
                    sub_4c43d0(&var_c0)
                    var_8_12.b = 0x26
                    sub_4c43d0(&var_238)
                    var_8_12.b = 0
                    sub_4c43d0(&var_c8)
                
                if ((*(ebx + 8) & 0x20000) != 0)
                    int32_t edx_11 = sub_4c4620(esi_8, 
                        "place a non-military world {nonmilitaryworld} as military {militaryworld} ")
                    
                    if (ebx[0x10] s> 0)
                        void var_d8
                        int32_t* eax_165
                        int32_t edx_12
                        eax_165, edx_12 = sub_4c4330(" defense ", edx_11, &var_d8)
                        int32_t var_8_13 = 0x2a
                        var_8_13.b = 0x2b
                        var_8_13.b = 0x2c
                        var_8_13.b = 0x2d
                        void var_278
                        void var_1c0
                        void var_d0
                        int128_t* eax_169 = *sub_4c48a0(
                            sub_44bee0(&var_d0, sub_4c4330("\rat -", edx_12, &var_278), 
                                sx.d(ebx[0x10])), 
                            &var_1c0, eax_165)
                        
                        if (eax_169 == 0)
                            eax_169 = &data_83f3d3
                        
                        sub_4c4620(esi_8, eax_169)
                        var_8_13.b = 0x2c
                        sub_4c43d0(&var_1c0)
                        var_8_13.b = 0x2b
                        sub_4c43d0(&var_d0)
                        var_8_13.b = 0x2a
                        sub_4c43d0(&var_278)
                        var_8_13.b = 0
                        sub_4c43d0(&var_d8)
                    
                    if ((*(ebx + 8) & 0x40000) != 0)
                        int128_t* var_2c8_39
                        
                        if (eax_7 == 0)
                            var_2c8_39 =
                                "(cannot be used with pay for Military {payformilitarypower} powers)"
                        else
                            var_2c8_39 = "\r(cannot be used with takeover {takeover_attempt} or pay for "
                            "Military {payformilitarypower} powers)"
                        
                        sub_4c4620(esi_8, var_2c8_39)
                    
                    if ((*(ebx + 8) & 0x200000) != 0)
                        sub_4c4620(esi_8, " and gain 2 prestige {prestige} ")
                
                if ((*(ebx + 8) & 0x2000000) != 0)
                    sub_4c4620(esi_8, 
                        "place a military world {militaryworld} after placing another world (cannot be used "
                    "with takeover {takeover_attempt} or pay for Military {payformilitarypower} 
                            powers)")
                
                if ((*(ebx + 8) & 0x8000000) != 0)
                    sub_4c4620(esi_8, 
                        "place a non-military world {nonmilitaryworld} at 0 cost\r(cannot be used to place "
                    "Alien worlds {alienproductionworld}{alienwindfallworld})")
                
                if ((*(ebx + 0xc) & 0x10) != 0)
                    sub_4c4620(esi_8, 
                        "take over {takeover_military} from an empire with at least +1 Military")
                
                if ((*(ebx + 0xc) & 8) != 0)
                    sub_4c4620(arg4, 
                        "take over {takeover_rebel} from an empire with at least 1 {imperium}IMPERIUM{help} "
                    "card, adding 2 Military for each Rebel military world {rebelmilitaryworld} in your "
                    "empire")
        case 3
            int32_t eax_368 = *(ebx + 8)
            int32_t var_20_6 = *(ebx + 0xc)
            
            if ((eax_368 & 1) != 0)
                char* const esi_12 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_12 = &data_85f840
                
                int32_t var_8_23 = 0x5b
                var_8_23.b = 0x5c
                var_8_23.b = 0x5d
                var_8_23.b = 0x5e
                var_8_23.b = 0x5f
                void var_64
                void var_5c
                void var_54
                void var_4c
                void var_44
                char* const eax_374 = *sub_44be60(&var_44, 
                    sub_44be60(&var_4c, 
                        sub_44be60(&var_54, 
                            sub_44bee0(&var_5c, sub_4c4330("draw ", 0, &var_64), sx.d(ebx[0x10])), 
                            " extra card"), 
                        esi_12), 
                    " when trading any good {anygood}")
                
                if (eax_374 == 0)
                    eax_374 = &data_83f3d3
                
                sub_4c4620(arg4, eax_374)
                var_8_23.b = 0x5e
                sub_4c43d0(&var_44)
                var_8_23.b = 0x5d
                sub_4c43d0(&var_4c)
                var_8_23.b = 0x5c
                sub_4c43d0(&var_54)
                var_8_23.b = 0x5b
                sub_4c43d0(&var_5c)
                var_8_23.b = 0
                sub_4c43d0(&var_64)
            else if ((eax_368 & 2) != 0)
                char* const esi_13 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_13 = &data_85f840
                
                int32_t var_8_24 = 0x60
                var_8_24.b = 0x61
                var_8_24.b = 0x62
                var_8_24.b = 0x63
                var_8_24.b = 0x64
                void var_8c
                void var_84
                void var_7c
                void var_74
                void var_6c
                char* const eax_381 = *sub_44be60(&var_6c, 
                    sub_44be60(&var_74, 
                        sub_44be60(&var_7c, 
                            sub_44bee0(&var_84, sub_4c4330("draw ", 0, &var_8c), sx.d(ebx[0x10])), 
                            " extra card"), 
                        esi_13), 
                    " when trading a Novelty good {noveltygood}")
                
                if (eax_381 == 0)
                    eax_381 = &data_83f3d3
                
                sub_4c4620(arg4, eax_381)
                var_8_24.b = 0x63
                sub_4c43d0(&var_6c)
                var_8_24.b = 0x62
                sub_4c43d0(&var_74)
                var_8_24.b = 0x61
                sub_4c43d0(&var_7c)
                var_8_24.b = 0x60
                sub_4c43d0(&var_84)
                var_8_24.b = 0
                sub_4c43d0(&var_8c)
            else if ((eax_368 & 4) != 0)
                char* const esi_14 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_14 = &data_85f840
                
                int32_t var_8_25 = 0x65
                var_8_25.b = 0x66
                var_8_25.b = 0x67
                var_8_25.b = 0x68
                var_8_25.b = 0x69
                void var_b4
                void var_ac
                void var_a4
                void var_9c
                void var_94
                char* const eax_388 = *sub_44be60(&var_94, 
                    sub_44be60(&var_9c, 
                        sub_44be60(&var_a4, 
                            sub_44bee0(&var_ac, sub_4c4330("draw ", 0, &var_b4), sx.d(ebx[0x10])), 
                            " extra card"), 
                        esi_14), 
                    " when trading a Rare Elements good {raregood}")
                
                if (eax_388 == 0)
                    eax_388 = &data_83f3d3
                
                sub_4c4620(arg4, eax_388)
                var_8_25.b = 0x68
                sub_4c43d0(&var_94)
                var_8_25.b = 0x67
                sub_4c43d0(&var_9c)
                var_8_25.b = 0x66
                sub_4c43d0(&var_a4)
                var_8_25.b = 0x65
                sub_4c43d0(&var_ac)
                var_8_25.b = 0
                sub_4c43d0(&var_b4)
            else if ((eax_368 & 0x40) != 0)
                sub_4c4620(arg4, 
                    "draw 1 extra card when trading a Genes good {genesgood} for each Chromosome 
                        world{chromosome}")
            else if ((eax_368 & 8) != 0)
                char* const esi_15 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_15 = &data_85f840
                
                int32_t var_8_26 = 0x6a
                var_8_26.b = 0x6b
                var_8_26.b = 0x6c
                var_8_26.b = 0x6d
                var_8_26.b = 0x6e
                void var_dc
                void var_d4
                void var_cc
                void var_c4
                void var_bc
                char* const eax_395 = *sub_44be60(&var_bc, 
                    sub_44be60(&var_c4, 
                        sub_44be60(&var_cc, 
                            sub_44bee0(&var_d4, sub_4c4330("draw ", 0, &var_dc), sx.d(ebx[0x10])), 
                            " extra card"), 
                        esi_15), 
                    " when trading a Genes good {genesgood}")
                
                if (eax_395 == 0)
                    eax_395 = &data_83f3d3
                
                sub_4c4620(arg4, eax_395)
                var_8_26.b = 0x6d
                sub_4c43d0(&var_bc)
                var_8_26.b = 0x6c
                sub_4c43d0(&var_c4)
                var_8_26.b = 0x6b
                sub_4c43d0(&var_cc)
                var_8_26.b = 0x6a
                sub_4c43d0(&var_d4)
                var_8_26.b = 0
                sub_4c43d0(&var_dc)
            else if ((eax_368 & 0x10) != 0)
                char* const esi_16 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_16 = &data_85f840
                
                int32_t var_8_27 = 0x6f
                var_8_27.b = 0x70
                var_8_27.b = 0x71
                var_8_27.b = 0x72
                var_8_27.b = 0x73
                void var_104
                void var_fc
                void var_f4
                void var_ec
                void var_e4
                char* const eax_402 = *sub_44be60(&var_e4, 
                    sub_44be60(&var_ec, 
                        sub_44be60(&var_f4, 
                            sub_44bee0(&var_fc, sub_4c4330("draw ", 0, &var_104), sx.d(ebx[0x10])), 
                            " extra card"), 
                        esi_16), 
                    " when trading an Alien Tech good {aliengood}")
                
                if (eax_402 == 0)
                    eax_402 = &data_83f3d3
                
                sub_4c4620(arg4, eax_402)
                var_8_27.b = 0x72
                sub_4c43d0(&var_e4)
                var_8_27.b = 0x71
                sub_4c43d0(&var_ec)
                var_8_27.b = 0x70
                sub_4c43d0(&var_f4)
                var_8_27.b = 0x6f
                sub_4c43d0(&var_fc)
                var_8_27.b = 0
                sub_4c43d0(&var_104)
            else if ((eax_368 & 0x20) != 0)
                char* const esi_17 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    esi_17 = &data_85f840
                
                int32_t var_8_28 = 0x74
                var_8_28.b = 0x75
                var_8_28.b = 0x76
                var_8_28.b = 0x77
                var_8_28.b = 0x78
                void var_12c
                void var_124
                void var_11c
                void var_114
                void var_10c
                char* const eax_409 = *sub_44be60(&var_10c, 
                    sub_44be60(&var_114, 
                        sub_44be60(&var_11c, 
                            sub_44bee0(&var_124, sub_4c4330("draw ", 0, &var_12c), sx.d(ebx[0x10])), 
                            " extra card"), 
                        esi_17), 
                    " when trading a good from this world")
                
                if (eax_409 == 0)
                    eax_409 = &data_83f3d3
                
                sub_4c4620(arg4, eax_409)
                var_8_28.b = 0x77
                sub_4c43d0(&var_10c)
                var_8_28.b = 0x76
                sub_4c43d0(&var_114)
                var_8_28.b = 0x75
                sub_4c43d0(&var_11c)
                var_8_28.b = 0x74
                sub_4c43d0(&var_124)
                var_8_28.b = 0
                sub_4c43d0(&var_12c)
            else if ((eax_368 & 0x80) != 0)
                sub_4c4620(arg4, "a good on this world cannot be sold")
            else if ((eax_368 & 0x100) != 0)
                int128_t* esi_18 = arg4
                sub_4c4620(esi_18, "discard 1 good to gain cards equal to its Trade price")
                char const* const var_2c8_9
                
                if ((*(ebx + 8) & 0x200) == 0)
                    var_2c8_9 = " plus any Trade powers"
                else
                    var_2c8_9 = " (do not apply Trade powers)"
                
                sub_4c4620(esi_18, var_2c8_9)
            else if ((eax_368 & 0x4000000) != 0)
                sub_4c4620(arg4, "draw 1 card")
            else if ((eax_368 & 0x8000000) != 0)
                sub_4c4620(arg4, 
                    "name a number from 1-7 and flip a card; keep it if its cost or defense matches named "
                "number")
            else if ((eax_368 & 0x20000000) != 0)
                sub_4c4620(arg4, 
                    "may ante a card of cost or defense 1-6 to flip that number of cards\rif none have a "
                "larger cost or defense, lose your ante\rotherwise, keep your ante and ")
            else if ((eax_368 & 0x40000000) != 0)
                sub_4c4620(arg4, "gain {1vp} VP")
            else if ((eax_368 & 0x10000000) != 0)
                char** esi_19 = arg4
                int32_t edx_28 = sub_4c4620(esi_19, "may discard ")
                
                if ((*(ebx + 8) & 0x10000) == 0)
                    int32_t eax_415
                    eax_415.b = ebx[0x11]
                    int128_t* esi_20 = &data_83f3d3
                    void var_16c
                    void var_164
                    void var_15c
                    int32_t var_14_3
                    int32_t edx_29
                    int32_t* edi_16
                    
                    if (eax_415.b == 1)
                        int32_t* eax_436
                        eax_436, edx_29 = sub_4c4330(U"a", edx_28, &var_16c)
                        edi_16 = eax_436
                        int32_t var_8_35 = 0x79
                        var_14_3 = 3
                    else
                        esi_20 = &data_85f840
                        int32_t var_8_29 = 0x7a
                        int32_t var_14_2 = 5
                        int32_t* eax_418
                        eax_418, edx_29 = sub_44bee0(&var_15c, sub_4c4330("up to ", edx_28, &var_164), 
                            sx.d(ebx[0x11]))
                        edi_16 = eax_418
                        int32_t var_8_30 = 0x7b
                        var_14_3 = 0xd
                    
                    int32_t var_8_31 = 0x7c
                    var_8_31.b = 0x7d
                    var_8_31.b = 0x7e
                    var_8_31.b = 0x7f
                    var_8_31.b = 0x80
                    void var_154
                    void var_14c
                    void var_144
                    void var_13c
                    void var_134
                    int128_t* eax_424 = *sub_44be60(&var_134, 
                        sub_44be60(&var_13c, 
                            sub_44be60(&var_144, 
                                sub_4c48a0(sub_4c4330(&data_83f3d3, edx_29, &var_154), &var_14c, 
                                    edi_16), 
                                " card"), 
                            esi_20), 
                        " to ")
                    
                    if (eax_424 == 0)
                        eax_424 = &data_83f3d3
                    
                    esi_19 = arg4
                    sub_4c4620(esi_19, eax_424)
                    var_8_31.b = 0x7f
                    sub_4c43d0(&var_134)
                    var_8_31.b = 0x7e
                    sub_4c43d0(&var_13c)
                    var_8_31.b = 0x7d
                    sub_4c43d0(&var_144)
                    var_8_31.b = 0x7c
                    sub_4c43d0(&var_14c)
                    var_8_31.b = 0x7b
                    sub_4c43d0(&var_154)
                    int32_t var_8_32 = 0x7a
                    
                    if ((var_14_3.b & 8) != 0)
                        var_14_3 &= 0xfffffff7
                        sub_4c43d0(&var_15c)
                    
                    int32_t var_8_33 = 0x79
                    
                    if ((var_14_3.b & 4) != 0)
                        var_14_3 &= 0xfffffffb
                        sub_4c43d0(&var_164)
                    
                    int32_t var_8_34 = 0
                    
                    if ((var_14_3.b & 2) != 0)
                        int32_t var_14_4 = var_14_3 & 0xfffffffd
                        sub_4c43d0(&var_16c)
                else
                    sub_4c4620(esi_19, "2 cards to ")
                
                if ((*(ebx + 8) & 0x1000000) != 0)
                    sub_4c4620(esi_19, "gain {1vp} VP")
                    
                    if (ebx[0x11] s> 1)
                        sub_4c4620(esi_19, " apiece")
                    
                    sub_4c4620(esi_19, " (these VPs may not be doubled)")
                
                if ((*(ebx + 8) & 0x200000) != 0)
                    sub_4c4620(esi_19, "draw a card")
                
                if ((*(ebx + 8) & 0x2000000) != 0)
                    sub_4c4620(arg4, "gain 1 prestige {prestige}")
            else if ((eax_368 & 0x80000) == 0)
                char** esi_21 = arg4
                sub_4c4620(esi_21, "discard ")
                int32_t ecx_266 = *(ebx + 8)
                int32_t var_20_7 = *(ebx + 0xc)
                
                if ((ecx_266 & 0x20000) != 0)
                    sub_4c4620(esi_21, "3 different kinds of goods")
                else if ((ecx_266 & 0x40000) != 0)
                    sub_4c4620(esi_21, "up to 4 different kinds of goods")
                else if ((ecx_266 & 0x100000) == 0)
                    int32_t edx_31
                    
                    if (ebx[0x11] s<= 1)
                        void* const var_2c8_97
                        
                        if ((ecx_266 & 0x10000) != 0)
                            var_2c8_97 = &data_860fe8
                        else if ((ecx_266 & 0x8000) == 0)
                            var_2c8_97 = &data_860ffc
                        else
                            var_2c8_97 = "this world's "
                        
                        edx_31 = sub_4c4620(esi_21, var_2c8_97)
                    else
                        int32_t var_8_36 = 0x81
                        var_8_36.b = 0x82
                        var_8_36.b = 0x83
                        void var_184
                        void var_17c
                        void var_174
                        char* const eax_455 = *sub_44be60(&var_174, 
                            sub_44bee0(&var_17c, sub_4c4330("up to ", 0, &var_184), sx.d(ebx[0x11])), 
                            &data_860fe4)
                        
                        if (eax_455 == 0)
                            eax_455 = &data_83f3d3
                        
                        sub_4c4620(esi_21, eax_455)
                        var_8_36.b = 0x82
                        sub_4c43d0(&var_174)
                        var_8_36.b = 0x81
                        sub_4c43d0(&var_17c)
                        var_8_36.b = 0
                        edx_31 = sub_4c43d0(&var_184)
                    
                    char* const eax_464
                    
                    if (ebx[0x11] == 1)
                        eax_464 = &data_83f3d3
                    
                    if (ebx[0x11] != 1 || (*(ebx + 8) & 0x10000) != 0)
                        eax_464 = &data_85f840
                    
                    sub_4c4330(eax_464, edx_31, &var_18)
                    int32_t var_8_37 = 0x84
                    int32_t ecx_275 = *(ebx + 8)
                    int32_t var_20_8 = *(ebx + 0xc)
                    
                    if ((ecx_275 & 0x800) != 0)
                        char* eax_468 = var_18
                        
                        if (eax_468 == 0)
                            eax_468 = &data_83f3d3
                        
                        char* var_2c8_98 = eax_468
                        var_8_37.b = 0x85
                        char* var_18c
                        char* eax_470 = *sub_4c4a50(&var_18c, "Novelty good%s {noveltygood}")
                        
                        if (eax_470 == 0)
                            eax_470 = &data_83f3d3
                        
                        sub_4c4620(esi_21, eax_470)
                        var_8_37.b = 0x84
                        sub_4c43d0(&var_18c)
                    else if ((ecx_275 & 0x1000) != 0)
                        char* eax_475 = var_18
                        
                        if (eax_475 == 0)
                            eax_475 = &data_83f3d3
                        
                        char* var_2c8_100 = eax_475
                        var_8_37.b = 0x86
                        char* var_194
                        char* eax_477 = *sub_4c4a50(&var_194, "Rare Elements good%s {raregood}")
                        
                        if (eax_477 == 0)
                            eax_477 = &data_83f3d3
                        
                        sub_4c4620(esi_21, eax_477)
                        var_8_37.b = 0x84
                        sub_4c43d0(&var_194)
                    else if ((ecx_275 & 0x2000) != 0)
                        char* eax_482 = var_18
                        
                        if (eax_482 == 0)
                            eax_482 = &data_83f3d3
                        
                        char* var_2c8_102 = eax_482
                        var_8_37.b = 0x87
                        char* var_19c
                        char* eax_484 = *sub_4c4a50(&var_19c, "Genes good%s {genesgood}")
                        
                        if (eax_484 == 0)
                            eax_484 = &data_83f3d3
                        
                        sub_4c4620(esi_21, eax_484)
                        var_8_37.b = 0x84
                        sub_4c43d0(&var_19c)
                    else if ((ecx_275 & 0x4000) != 0)
                        char* eax_489 = var_18
                        
                        if (eax_489 == 0)
                            eax_489 = &data_83f3d3
                        
                        char* var_2c8_104 = eax_489
                        var_8_37.b = 0x88
                        char* var_1a4
                        char* eax_491 = *sub_4c4a50(&var_1a4, "Alien Tech good%s {aliengood}")
                        
                        if (eax_491 == 0)
                            eax_491 = &data_83f3d3
                        
                        sub_4c4620(esi_21, eax_491)
                        var_8_37.b = 0x84
                        sub_4c43d0(&var_1a4)
                    else if ((ecx_275 & 0x400) != 0)
                        char* eax_493 = var_18
                        
                        if (eax_493 == 0)
                            eax_493 = &data_83f3d3
                        
                        char* var_2c8_106 = eax_493
                        var_8_37.b = 0x89
                        char* var_1ac
                        int128_t* eax_495 = *sub_4c4a50(&var_1ac, "good%s {anygood}")
                        
                        if (eax_495 == 0)
                            eax_495 = &data_83f3d3
                        
                        sub_4c4620(esi_21, eax_495)
                        var_8_37.b = 0x84
                        sub_4c43d0(&var_1ac)
                    
                    var_8_37.b = 0
                    sub_4c43d0(&var_18)
                else
                    sub_4c4620(esi_21, "1 prestige {prestige}")
                
                int32_t edx_33 = sub_4c4620(esi_21, " to gain ")
                
                if ((*(ebx + 8) & 0x1000000) != 0)
                    int32_t var_8_38 = 0x8a
                    void var_1b4
                    char* eax_502 = *sub_4c4330(&data_83f3d3, edx_33, &var_1b4)
                    
                    if (eax_502 == 0)
                        eax_502 = &data_83f3d3
                    
                    sub_4c4620(esi_21, eax_502)
                    var_8_38.b = 0
                    sub_4c43d0(&var_1b4)
                    int32_t eax_504 = sx.d(ebx[0x10])
                    char const* const var_2c8_109
                    
                    if (eax_504 == 1)
                        var_2c8_109 = "{1vp} VP"
                    else if (eax_504 == 2)
                        var_2c8_109 = "{2vp} VP"
                    else
                        if (eax_504 != 3)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x56b9, 
                                "get_power_text")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        var_2c8_109 = "{3vp} VP"
                    
                    sub_4c4620(esi_21, var_2c8_109)
                    int32_t ecx_282 = *(ebx + 8)
                    int32_t var_20_9 = *(ebx + 0xc)
                    edx_33 = 0
                    
                    if ((ecx_282 & 0x2000000) != 0 && (ecx_282 & 0xe00000) != 0)
                        edx_33 = sub_4c4620(esi_21, &data_849224)
                    else if ((ecx_282 & 0x2e00000) != 0)
                        edx_33 = sub_4c4620(esi_21, " and ")
                
                if ((*(ebx + 8) & 0x200000) != 0)
                    int128_t* edi_17 = &data_83f3d3
                    
                    if (ebx[0x10] != 1)
                        edi_17 = &data_85f840
                    
                    int32_t var_8_39 = 0x8b
                    var_8_39.b = 0x8c
                    var_8_39.b = 0x8d
                    var_8_39.b = 0x8e
                    void var_1d4
                    void var_1cc
                    void var_1c4
                    void var_1bc
                    char* const eax_524 = *sub_44be60(&var_1bc, 
                        sub_44be60(&var_1c4, 
                            sub_44bee0(&var_1cc, sub_4c4330(&data_83f3d3, edx_33, &var_1d4), 
                                sx.d(ebx[0x10])), 
                            " card"), 
                        edi_17)
                    
                    if (eax_524 == 0)
                        eax_524 = &data_83f3d3
                    
                    sub_4c4620(esi_21, eax_524)
                    var_8_39.b = 0x8d
                    sub_4c43d0(&var_1bc)
                    var_8_39.b = 0x8c
                    sub_4c43d0(&var_1c4)
                    var_8_39.b = 0x8b
                    sub_4c43d0(&var_1cc)
                    var_8_39.b = 0
                    edx_33 = sub_4c43d0(&var_1d4)
                    
                    if ((*(ebx + 8) & 0x2000000) != 0)
                        edx_33 = sub_4c4620(esi_21, " and ")
                
                if ((*(ebx + 8) & &__dos_header) != 0)
                    edx_33 = sub_4c4620(esi_21, "2 cards")
                    
                    if ((*(ebx + 8) & 0x2000000) != 0)
                        edx_33 = sub_4c4620(esi_21, " and ")
                
                if ((*(ebx + 8) & &data_800000) != 0)
                    edx_33 = sub_4c4620(esi_21, "3 cards")
                    
                    if ((*(ebx + 8) & 0x2000000) != 0)
                        edx_33 = sub_4c4620(esi_21, " and ")
                
                if ((*(ebx + 8) & 0x2000000) != 0)
                    int32_t var_8_40 = 0x8f
                    var_8_40.b = 0x90
                    var_8_40.b = 0x91
                    void var_1ec
                    void var_1e4
                    void var_1dc
                    char* const eax_552 = *sub_44be60(&var_1dc, 
                        sub_44bee0(&var_1e4, sub_4c4330(&data_83f3d3, edx_33, &var_1ec), 
                            sx.d(ebx[0x10])), 
                        " prestige {prestige}")
                    
                    if (eax_552 == 0)
                        eax_552 = &data_83f3d3
                    
                    sub_4c4620(esi_21, eax_552)
                    var_8_40.b = 0x90
                    sub_4c43d0(&var_1dc)
                    var_8_40.b = 0x8f
                    sub_4c43d0(&var_1e4)
                    var_8_40.b = 0
                    sub_4c43d0(&var_1ec)
                
                if (ebx[0x11] s> 1)
                    goto label_44e738
                
                if ((*(ebx + 8) & 0x40000) != 0)
                    esi_21 = arg4
                label_44e738:
                    sub_4c4620(esi_21, " each")
            else
                sub_4c4620(arg4, 
                    "discard all goods to gain VP chips equal to 1 less than the number of goods discarded")
        case 4
            if ((*(ebx + 8) & 0x80) != 0)
                edx = sub_4c4620(arg4, "may discard a card to ")
            
            if ((*(ebx + 8) & 1) != 0)
                if (arg5 - 2 u> 3)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5700, "get_power_text")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char const* const var_2c8_116
                
                switch (arg5)
                    case 2
                        var_2c8_116 = "produce a Novelty good {noveltygood}"
                    case 3
                        var_2c8_116 = "produce a Rare Elements good {raregood}"
                    case 4
                        var_2c8_116 = "produce a Genes good {genesgood}"
                    case 5
                        var_2c8_116 = "produce an Alien Tech good {aliengood}"
                
                edx = sub_4c4620(arg4, var_2c8_116)
            
            if ((*(ebx + 8) & 2) != 0)
                edx = sub_4c4620(arg4, "produce on any windfall world {windfallworld}")
            
            if ((*(ebx + 8) & 4) != 0)
                edx = sub_4c4620(arg4, "produce on a Novelty windfall world {noveltywindfallworld}")
            
            if ((*(ebx + 8) & 8) != 0)
                edx = sub_4c4620(arg4, "produce on a Rare windfall world {rarewindfallworld}")
            
            if ((*(ebx + 8) & 0x10) != 0)
                edx = sub_4c4620(arg4, "produce on a Genes windfall world {geneswindfallworld}")
                
                if ((*(ebx + 8) & 0x40) != 0)
                    edx = sub_4c4620(arg4, " (not this world)")
            
            if ((*(ebx + 8) & 0x20) != 0)
                edx = sub_4c4620(arg4, "produce on an Alien windfall world {alienwindfallworld}")
            
            if ((*(ebx + 8) & 0x100) != 0)
                char* const edi_18 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    edi_18 = &data_85f840
                
                int32_t var_8_41 = 0x92
                var_8_41.b = 0x93
                var_8_41.b = 0x94
                var_8_41.b = 0x95
                void var_20c
                void var_204
                void var_1fc
                void var_1f4
                char* const eax_595 = *sub_44be60(&var_1f4, 
                    sub_44be60(&var_1fc, 
                        sub_44bee0(&var_204, sub_4c4330("draw ", edx, &var_20c), sx.d(ebx[0x10])), 
                        " card"), 
                    edi_18)
                
                if (eax_595 == 0)
                    eax_595 = &data_83f3d3
                
                sub_4c4620(arg4, eax_595)
                var_8_41.b = 0x94
                sub_4c43d0(&var_1f4)
                var_8_41.b = 0x93
                sub_4c43d0(&var_1fc)
                var_8_41.b = 0x92
                sub_4c43d0(&var_204)
                var_8_41.b = 0
                edx = sub_4c43d0(&var_20c)
            
            if ((*(ebx + 8) & 0x200) != 0)
                char* const edi_19 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    edi_19 = &data_85f840
                
                int32_t var_8_42 = 0x96
                var_8_42.b = 0x97
                var_8_42.b = 0x98
                var_8_42.b = 0x99
                var_8_42.b = 0x9a
                void var_234
                void var_22c
                void var_224
                void var_21c
                void var_214
                char* const eax_605 = *sub_44be60(&var_214, 
                    sub_44be60(&var_21c, 
                        sub_44be60(&var_224, 
                            sub_44bee0(&var_22c, sub_4c4330("draw ", edx, &var_234), sx.d(ebx[0x10])), 
                            " card"), 
                        edi_19), 
                    " if this world produced a good this phase")
                
                if (eax_605 == 0)
                    eax_605 = &data_83f3d3
                
                sub_4c4620(arg4, eax_605)
                var_8_42.b = 0x99
                sub_4c43d0(&var_214)
                var_8_42.b = 0x98
                sub_4c43d0(&var_21c)
                var_8_42.b = 0x97
                sub_4c43d0(&var_224)
                var_8_42.b = 0x96
                sub_4c43d0(&var_22c)
                var_8_42.b = 0
                edx = sub_4c43d0(&var_234)
            
            if ((*(ebx + 8) & 0x400) != 0)
                edx = sub_4c4620(arg4, 
                    "gain 1 prestige {prestige} if this world produced a good this phase")
            
            if ((*(ebx + 8) & 0x800) != 0)
                edx = sub_4c4620(arg4, 
                    "draw 1 card for each Novelty good {noveltygood} produced this phase")
            
            if ((*(ebx + 8) & 0x1000) != 0)
                edx = sub_4c4620(arg4, 
                    "draw 1 card for each Rare Elements good {raregood} produced this phase")
            
            if ((*(ebx + 8) & 0x2000) != 0)
                edx =
                    sub_4c4620(arg4, "draw 1 card for each Genes good {genesgood} produced this phase")
            
            if ((*(ebx + 8) & 0x4000) != 0)
                edx = sub_4c4620(arg4, 
                    "draw 1 card for each Alien Tech good {aliengood} produced this phase")
            
            if ((*(ebx + 8) & 0x8000) != 0)
                edx = sub_4c4620(arg4, 
                    "draw 1 card for each Genes world {genesproductionworld}{geneswindfallworld}")
            
            if ((*(ebx + 8) & 0x10000) != 0)
                edx = sub_4c4620(arg4, "draw 1 card if you produced more goods than any other player")
            
            if ((*(ebx + 8) & 0x20000) != 0)
                edx =
                    sub_4c4620(arg4, "draw 1 card for each different kind of good produced this phase")
            
            if ((*(ebx + 8) & 0x40000) != 0)
                int128_t* edi_20 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    edi_20 = &data_85f840
                
                int32_t var_8_43 = 0x9b
                var_8_43.b = 0x9c
                var_8_43.b = 0x9d
                var_8_43.b = 0x9e
                var_8_43.b = 0x9f
                void var_25c
                void var_254
                void var_24c
                void var_244
                void var_23c
                int128_t* eax_647 = *sub_44be60(&var_23c, 
                    sub_44be60(&var_244, 
                        sub_44be60(&var_24c, 
                            sub_44bee0(&var_254, sub_4c4330("draw ", edx, &var_25c), sx.d(ebx[0x10])), 
                            " card"), 
                        edi_20), 
                    " if you produced more Novelty goods {noveltygood} than any other player")
                
                if (eax_647 == 0)
                    eax_647 = &data_83f3d3
                
                sub_4c4620(arg4, eax_647)
                var_8_43.b = 0x9e
                sub_4c43d0(&var_23c)
                var_8_43.b = 0x9d
                sub_4c43d0(&var_244)
                var_8_43.b = 0x9c
                sub_4c43d0(&var_24c)
                var_8_43.b = 0x9b
                sub_4c43d0(&var_254)
                var_8_43.b = 0
                edx = sub_4c43d0(&var_25c)
            
            if ((*(ebx + 8) & 0x80000) != 0)
                int128_t* edi_21 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    edi_21 = &data_85f840
                
                int32_t var_8_44 = 0xa0
                var_8_44.b = 0xa1
                var_8_44.b = 0xa2
                var_8_44.b = 0xa3
                var_8_44.b = 0xa4
                void var_284
                void var_27c
                void var_274
                void var_26c
                void var_264
                int128_t* eax_657 = *sub_44be60(&var_264, 
                    sub_44be60(&var_26c, 
                        sub_44be60(&var_274, 
                            sub_44bee0(&var_27c, sub_4c4330("draw ", edx, &var_284), sx.d(ebx[0x10])), 
                            " card"), 
                        edi_21), 
                    " if you produced more Rare goods {raregood} than any other player")
                
                if (eax_657 == 0)
                    eax_657 = &data_83f3d3
                
                sub_4c4620(arg4, eax_657)
                var_8_44.b = 0xa3
                sub_4c43d0(&var_264)
                var_8_44.b = 0xa2
                sub_4c43d0(&var_26c)
                var_8_44.b = 0xa1
                sub_4c43d0(&var_274)
                var_8_44.b = 0xa0
                sub_4c43d0(&var_27c)
                var_8_44.b = 0
                edx = sub_4c43d0(&var_284)
            
            if ((*(ebx + 8) & 0x100000) != 0)
                int128_t* edi_22 = &data_83f3d3
                
                if (ebx[0x10] != 1)
                    edi_22 = &data_85f840
                
                int32_t var_8_45 = 0xa5
                var_8_45.b = 0xa6
                var_8_45.b = 0xa7
                var_8_45.b = 0xa8
                var_8_45.b = 0xa9
                void var_2ac
                void var_2a4
                void var_29c
                void var_294
                void var_28c
                int128_t* eax_667 = *sub_44be60(&var_28c, 
                    sub_44be60(&var_294, 
                        sub_44be60(&var_29c, 
                            sub_44bee0(&var_2a4, sub_4c4330("draw ", edx, &var_2ac), sx.d(ebx[0x10])), 
                            " card"), 
                        edi_22), 
                    " if you produced more Genes goods {genesgood} than any other player")
                
                if (eax_667 == 0)
                    eax_667 = &data_83f3d3
                
                sub_4c4620(arg4, eax_667)
                var_8_45.b = 0xa8
                sub_4c43d0(&var_28c)
                var_8_45.b = 0xa7
                sub_4c43d0(&var_294)
                var_8_45.b = 0xa6
                sub_4c43d0(&var_29c)
                var_8_45.b = 0xa5
                sub_4c43d0(&var_2a4)
                var_8_45.b = 0
                sub_4c43d0(&var_2ac)
            
            if ((*(ebx + 8) & 0x200000) != 0)
                sub_4c4620(arg4, 
                    "gain 1 prestige {prestige} if you have more Chromosome worlds{chromosome}than any other 
                        player")
            
            if ((*(ebx + 8) & &__dos_header) != 0)
                sub_4c4620(arg4, "draw 1 card for each military world {militaryworld}")
            
            if ((*(ebx + 8) & &data_800000) != 0)
                sub_4c4620(arg4, "draw 1 card for each Rebel world {rebelworld}")
            
            if ((*(ebx + 8) & 0x1000000) != 0)
                sub_4c4620(arg4, "draw 1 card for each Rebel military world {rebelmilitaryworld}")
            
            if ((*(ebx + 8) & 0x2000000) != 0)
                sub_4c4620(arg4, "draw 1 card for each {imperium}IMPERIUM{help} card")
            
            if ((*(ebx + 8) & 0x4000000) != 0)
                sub_4c4620(arg4, 
                    "draw 2 cards for each {uplift}UPLIFT{help} Chromosome {chromosome} world")
            
            if ((*(ebx + 8) & 0x8000000) != 0)
                sub_4c4620(arg4, "draw 1 card for each 5+ cost development")
            
            if ((*(ebx + 8) & 0x10000000) != 0)
                sub_4c4620(arg4, "draw all cards saved under this world")
            
            if ((*(ebx + 8) & 0x20000000) != 0)
                sub_4c4620(arg4, "shift any Rare goods {raregood} to this world")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}

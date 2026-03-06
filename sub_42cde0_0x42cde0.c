// 函数名称: sub_42cde0
// 虚拟地址: 0x42cde0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_42cde0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6989de
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_12c
    int32_t eax_2 = __security_cookie ^ &var_12c
    int32_t __saved_edi
    int32_t var_13c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = *(data_27e7a40 + 0x548)
    
    if (ebx == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx = ebx[0x11611]
    void var_110
    int32_t eax_7
    char edx
    int80_t result
    result, eax_7, edx = sub_40a930(&var_110)
    void var_90
    __builtin_memcpy(&var_90, eax_7, 0x40)
    int32_t* esi_1 = data_307c530
    
    if ((data_31667ac & 1) == 0)
        data_31667ac.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_8
        eax_8, edx = sub_4f5220(esi_1, "rgn_phases")
        data_31667a8 = eax_8
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31667ac & 2) == 0)
        data_31667ac.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_9
        eax_9, edx = sub_4f5220(esi_1, "rgn_playerCards")
        data_31667a4 = eax_9
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31667ac & 4) == 0)
        data_31667ac.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_10
        eax_10, edx = sub_4f5220(esi_1, "rgn_opponents")
        data_31667a0 = eax_10
        int32_t var_c_6 = 0xffffffff
    
    if ((data_31667ac & 8) == 0)
        data_31667ac.d |= 8
        int32_t var_c_7 = 3
        int32_t eax_11
        eax_11, edx = sub_4f5220(esi_1, "rgn_playerTableau")
        data_316679c = eax_11
        int32_t var_c_8 = 0xffffffff
    
    if ((data_31667ac & 0x10) == 0)
        data_31667ac.d |= 0x10
        int32_t var_c_9 = 4
        int32_t eax_12
        eax_12, edx = sub_4f5220(esi_1, "tbl_goalsBig")
        data_3166798 = eax_12
        int32_t var_c_10 = 0xffffffff
    
    if ((data_31667ac & 0x20) == 0)
        data_31667ac.d |= 0x20
        int32_t var_c_11 = 5
        int32_t eax_13
        eax_13, edx = sub_4f5220(esi_1, "tbl_goalsSmall")
        data_3166794 = eax_13
        int32_t var_c_12 = 0xffffffff
    
    if ((data_31667ac & 0x40) == 0)
        data_31667ac.d |= 0x40
        int32_t var_c_13 = 6
        int32_t eax_14
        eax_14, edx = sub_4f5220(esi_1, "goalcard_big")
        data_3166790 = eax_14
        int32_t var_c_14 = 0xffffffff
    
    if ((data_31667ac & 0x80) == 0)
        data_31667ac.d |= 0x80
        int32_t var_c_15 = 7
        int32_t eax_15
        eax_15, edx = sub_4f5220(esi_1, "goalcard_small")
        data_316678c = eax_15
        int32_t var_c_16 = 0xffffffff
    
    if ((data_31667ac.d & 0x100) == 0)
        data_31667ac.d |= 0x100
        int32_t var_c_17 = 8
        int32_t eax_16
        eax_16, edx = sub_4f5220(esi_1, "tbl_myIcons")
        data_3166788 = eax_16
        int32_t var_c_18 = 0xffffffff
    
    if ((data_31667ac.d & 0x200) == 0)
        data_31667ac.d |= 0x200
        int32_t var_c_19 = 9
        int32_t eax_17
        eax_17, edx = sub_4f5220(esi_1, "txt_deckCount")
        data_3166784 = eax_17
        int32_t var_c_20 = 0xffffffff
    
    if ((data_31667ac.d & 0x400) == 0)
        data_31667ac.d |= 0x400
        int32_t var_c_21 = 0xa
        int32_t eax_18
        eax_18, edx = sub_4f5220(esi_1, "txt_discardCount")
        data_3166780 = eax_18
        int32_t var_c_22 = 0xffffffff
    
    if ((data_31667ac.d & 0x800) == 0)
        data_31667ac.d |= 0x800
        int32_t var_c_23 = 0xb
        int32_t eax_19
        eax_19, edx = sub_4f5220(esi_1, "txt_vpPool")
        data_316677c = eax_19
        int32_t var_c_24 = 0xffffffff
    
    if ((data_31667ac.d & 0x1000) == 0)
        data_31667ac.d |= 0x1000
        int32_t var_c_25 = 0xc
        int32_t eax_20
        eax_20, edx = sub_4f5220(esi_1, "txt_prompt")
        data_3166778 = eax_20
        int32_t var_c_26 = 0xffffffff
    
    if ((data_31667ac.d & 0x2000) == 0)
        data_31667ac.d |= 0x2000
        int32_t var_c_27 = 0xd
        int32_t eax_21
        eax_21, edx = sub_4f5220(esi_1, "txt_playerVPTotal")
        data_3166774 = eax_21
        int32_t var_c_28 = 0xffffffff
    
    if ((data_31667ac.d & 0x4000) == 0)
        data_31667ac.d |= 0x4000
        int32_t var_c_29 = 0xe
        int32_t eax_22
        eax_22, edx = sub_4f5220(esi_1, "img_playerAvatar")
        data_3166770 = eax_22
        int32_t var_c_30 = 0xffffffff
    
    if ((data_31667ac.d & 0x8000) == 0)
        data_31667ac.d |= 0x8000
        int32_t var_c_31 = 0xf
        int32_t eax_23
        eax_23, edx = sub_4f5220(esi_1, "imgGoalBg")
        data_316676c = eax_23
        int32_t var_c_32 = 0xffffffff
    
    if ((data_31667ac.d & 0x10000) == 0)
        data_31667ac.d |= 0x10000
        int32_t var_c_33 = 0x10
        int32_t eax_24
        eax_24, edx = sub_4f5220(esi_1, "img_IconRole1")
        data_3166768 = eax_24
        int32_t var_c_34 = 0xffffffff
    
    if ((data_31667ac.d & 0x20000) == 0)
        data_31667ac.d |= 0x20000
        int32_t var_c_35 = 0x11
        int32_t eax_25
        eax_25, edx = sub_4f5220(esi_1, "img_IconRole2")
        data_3166764 = eax_25
        int32_t var_c_36 = 0xffffffff
    
    if ((data_31667ac.d & 0x40000) == 0)
        data_31667ac.d |= 0x40000
        int32_t var_c_37 = 0x12
        int32_t eax_26
        eax_26, edx = sub_4f5220(esi_1, "img_IconRole1Prestige")
        data_3166760 = eax_26
        int32_t var_c_38 = 0xffffffff
    
    if ((data_31667ac.d & 0x80000) == 0)
        data_31667ac.d |= 0x80000
        int32_t var_c_39 = 0x13
        int32_t eax_27
        eax_27, edx = sub_4f5220(esi_1, "img_IconRole2Prestige")
        data_316675c = eax_27
        int32_t var_c_40 = 0xffffffff
    
    int32_t var_140_1 = 1
    char edx_1 = sub_4fa4e0(*ebx, data_31667a0, edx)
    int32_t var_148 = 1
    sub_4fa4e0(*ebx, data_31667a4, edx_1)
    float edx_2 = data_316679c
    int32_t var_150 = 1
    char edx_3 = sub_4fa4e0(*ebx, edx_2, edx_2.b)
    int32_t var_158 = 1
    char edx_4 = sub_4fa4e0(*ebx, data_3166790, edx_3)
    int32_t var_160 = 1
    sub_4fa4e0(*ebx, data_316678c, edx_4)
    float edx_5 = data_3166798
    int32_t var_168 = 1
    char edx_6 = sub_4fa4e0(*ebx, edx_5, edx_5.b)
    int32_t var_170 = 1
    char edx_7 = sub_4fa4e0(*ebx, data_3166794, edx_6)
    int32_t var_178 = 1
    sub_4fa4e0(*ebx, data_3166788, edx_7)
    char eax_39 = *(ecx + 0x45a)
    int32_t eax_40
    
    if (eax_39 s<= 0 || eax_39 s>= 4 || *(ecx + 0x45b) != 0)
        eax_40 = 0
    else
        eax_40 = 1
    
    bool edx_8 = eax_40 == 0
    uint32_t var_140_2 = zx.d(edx_8)
    sub_4fa4e0(*ebx, data_316676c, edx_8)
    sub_4248a0(ecx)
    int32_t var_c_41 = 0x14
    char* var_124
    char* eax_44 = *sub_4c4ab0(&var_124)
    char* var_128 = &data_83f3d3
    
    if (eax_44 != 0)
        var_128 = eax_44
    
    int128_t* eax_46 = sub_4f6e90(data_3166784, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    char* eax_47 = var_128
    *(eax_46 + 0x64) = *eax_46 + 1
    sub_4c4590(eax_47)
    *(eax_46 + 0x151) = 1
    int32_t var_c_42 = 0xffffffff
    char* eax_48 = var_124
    
    if (eax_48 != 0 && *eax_48 != 0)
        void* eax_50 = sub_4c4060(&var_124)
        int32_t temp0_1 = *(eax_50 + 4)
        *(eax_50 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_8 = *(eax_50 + 0xc) + 0x10
            sub_4f4430(eax_50, sub_4f4380(esi_8), esi_8)
    
    int32_t ecx_6
    ecx_6.b = data_c020d4 s<= 0
    int32_t var_c_43 = 0x15
    char* eax_56 = *sub_4c4ab0(&var_128)
    var_124 = &data_83f3d3
    
    if (eax_56 != 0)
        var_124 = eax_56
    
    int128_t* eax_58 = sub_4f6e90(data_3166780, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    *(eax_58 + 0x64) = *eax_58 + 1
    sub_4c4590(var_124)
    *(eax_58 + 0x151) = 1
    int32_t var_c_44 = 0xffffffff
    char* eax_62 = var_128
    
    if (eax_62 != 0 && *eax_62 != 0)
        void* eax_64 = sub_4c4060(&var_128)
        int32_t temp1_1 = *(eax_64 + 4)
        *(eax_64 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_14 = *(eax_64 + 0xc) + 0x10
            sub_4f4430(eax_64, sub_4f4380(esi_14), esi_14)
    
    int32_t ecx_8
    ecx_8.b = data_c02118 s<= 0
    int32_t var_c_45 = 0x16
    char* eax_70 = *sub_4c4ab0(&var_128)
    var_124 = &data_83f3d3
    
    if (eax_70 != 0)
        var_124 = eax_70
    
    int128_t* eax_72 = sub_4f6e90(data_316677c, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    *(eax_72 + 0x64) = *eax_72 + 1
    sub_4c4590(var_124)
    *(eax_72 + 0x151) = 1
    int32_t var_c_46 = 0xffffffff
    char* eax_76 = var_128
    
    if (eax_76 != 0 && *eax_76 != 0)
        void* eax_78 = sub_4c4060(&var_128)
        int32_t temp2_1 = *(eax_78 + 4)
        *(eax_78 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_20 = *(eax_78 + 0xc) + 0x10
            sub_4f4430(eax_78, sub_4f4380(esi_20), esi_20)
    
    char* eax_81 = *(data_27e7a40 + 0x74)
    var_128 = eax_81
    sub_42c680(eax_81)
    int32_t var_c_47 = 0x17
    char* var_120
    char* eax_83 = *sub_4c4ab0(&var_120)
    var_124 = &data_83f3d3
    
    if (eax_83 != 0)
        var_124 = eax_83
    
    int128_t* eax_85 = sub_4f6e90(data_3166774, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    *(eax_85 + 0x64) = *eax_85 + 1
    sub_4c4590(var_124)
    *(eax_85 + 0x151) = 1
    int32_t var_c_48 = 0xffffffff
    char* eax_89 = var_120
    
    if (eax_89 != 0 && *eax_89 != 0)
        void* eax_91 = sub_4c4060(&var_120)
        int32_t temp3_1 = *(eax_91 + 4)
        *(eax_91 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_26 = *(eax_91 + 0xc) + 0x10
            sub_4f4430(eax_91, sub_4f4380(esi_26), esi_26)
    
    if ((data_31667ac.d & 0x100000) == 0)
        data_31667ac.d |= 0x100000
        int32_t var_c_49 = 0x18
        data_3166758 = sub_4f5220(esi_1, "imgOkGlow")
        int32_t var_c_50 = 0xffffffff
    
    void* eax_95 = sub_419400(&var_120)
    
    if (eax_95.b != 0)
        eax_95.b = *(*(data_27e7a40 + 0x548) + 0x438b3)
    
    int32_t* esi_27 = ebx
    uint32_t edx_14 = zx.d(eax_95.b == 0)
    uint32_t var_140_8 = edx_14
    sub_4fa4e0(*esi_27, data_3166758, edx_14.b)
    char* edx_15 = data_3166778
    int32_t eax_99 = *esi_27
    char var_129 = 0
    char edx_16 = GSI1::QueryMiniPDBForTiDefnUDT2(eax_99, edx_15, &var_129)
    
    if (esi_27[0x10e51].b == 1 && var_129 == 0 && *(data_27e7a40 + 0x2c4960) == 2)
        sub_4d6480(data_307bf10)
        char var_35_1 = 1
        void var_4c
        edx_16 = sub_4d66f0(&var_4c)
    
    esi_27[0x10e51].b = var_129
    int32_t var_140_10 = 1
    sub_4fa4e0(*esi_27, data_3166768, edx_16)
    float edx_17 = data_3166764
    int32_t var_148_2 = 1
    int32_t edx_18 = sub_4fa4e0(*esi_27, edx_17, edx_17.b)
    
    if (sub_41e630() == 0)
        int32_t eax_120 = sub_418a10()
        int32_t edx_25 = var_128 * 0xb4
        int32_t eax_122 = sub_41eac0(*(eax_120 + edx_25 + 0x2c), edx_25, &var_129)
        float edx_26 = data_3166760
        int32_t ebx_14 = eax_122
        eax_122.b = var_129 == 0
        uint32_t var_140_15 = zx.d(eax_122.b)
        char edx_27 = sub_4fa4e0(*esi_27, edx_26, edx_26.b)
        
        if (ebx_14 != 0)
            int32_t var_140_16 = 0
            sub_4fa4e0(*esi_27, data_3166768, edx_27)
            int128_t* eax_127 =
                sub_4f6e90(data_3166768, sub_4fc3d0(&data_be1cb8, *esi_27), &data_83f3d3)
            esi_27 = ebx
            *(eax_127 + 0x94) = *eax_127 + 1
            *(eax_127 + 0x98) = ebx_14
        
        float edx_28 = data_316675c
        int32_t var_140_17 = 1
        sub_4fa4e0(*esi_27, edx_28, edx_28.b)
    else
        char* edi_10 = var_128 * 0xb4
        var_120 = edi_10
        int32_t eax_106 = sub_41eac0(*(sub_418a10() + edi_10 + 0x2c), edx_18, &var_129)
        float edx_19 = data_3166760
        int32_t ebx_12 = eax_106
        eax_106.b = var_129 == 0
        uint32_t var_140_11 = zx.d(eax_106.b)
        int32_t edx_20 = sub_4fa4e0(*esi_27, edx_19, edx_19.b)
        
        if (ebx_12 != 0)
            int32_t var_140_12 = 0
            sub_4fa4e0(*esi_27, data_3166768, edx_20.b)
            int128_t* eax_111
            eax_111, edx_20 = sub_4f6e90(data_3166768, sub_4fc3d0(&data_be1cb8, *esi_27), &data_83f3d3)
            esi_27 = ebx
            edi_10 = var_120
            *(eax_111 + 0x94) = *eax_111 + 1
            *(eax_111 + 0x98) = ebx_12
        
        int32_t eax_114 = sub_41eac0(*(sub_418a10() + edi_10 + 0x30), edx_20, &var_129)
        bool cond:4_1 = var_129 == 0
        uint32_t var_140_13 = zx.d(cond:4_1)
        sub_4fa4e0(*esi_27, data_316675c, cond:4_1)
        
        if (eax_114 != 0)
            float edx_23 = data_3166764
            int32_t var_140_14 = 0
            sub_4fa4e0(*esi_27, edx_23, edx_23.b)
            int128_t* eax_119 =
                sub_4f6e90(data_3166764, sub_4fc3d0(&data_be1cb8, *esi_27), &data_83f3d3)
            esi_27 = ebx
            *(eax_119 + 0x94) = *eax_119 + 1
            *(eax_119 + 0x98) = eax_114
    
    if ((data_31667ac.d & 0x200000) == 0)
        data_31667ac.d |= 0x200000
        int32_t var_c_51 = 0x19
        data_3166754 = sub_4f5220(esi_1, "imgPrestigeAction")
        int32_t var_c_52 = 0xffffffff
    
    bool cond:5 = *(ecx + 0x45a) != 3
    uint32_t var_140_18 = zx.d(cond:5)
    sub_4fa4e0(*esi_27, data_3166754, cond:5)
    
    if ((data_31667ac.d & &__dos_header) == 0)
        data_31667ac.d |= &__dos_header
        int32_t var_c_53 = 0x1a
        data_3166750 = sub_4f5220(data_307c604, "imgPrestige")
        int32_t var_c_54 = 0xffffffff
    
    int32_t ebx_15 = data_3166754
    void* eax_134 = sub_4fc3d0(&data_be1cb8, *esi_27)
    char* eax_135 = sub_4f6e90(ebx_15, eax_134, &data_83f3d3)
    int32_t* esi_36 = *(eax_134 + 4)
    var_120 = eax_135
    int32_t esi_37 = *(sub_4f7720(&data_84074c, ebx_15 * 0x118 + *sub_4f4890(esi_36), var_120) + 0x434)
    char eax_139
    char edx_31
    eax_139, edx_31 = sub_41f1f0(var_128)
    uint32_t var_140_19 = zx.d(eax_139)
    sub_4fa4e0(esi_37, data_3166750, edx_31)
    char* eax_143 = sub_4ba260(*(data_27e7a54 + 0x18))
    int32_t esi_38 = *ebx
    int32_t edi_18 = data_3166770
    var_120 = eax_143
    int32_t* eax_145 = sub_4f6e90(edi_18, sub_4fc3d0(&data_be1cb8, esi_38), &data_83f3d3)
    char* edx_33 = var_120
    int32_t edi_20 = data_31667a8
    eax_145[0x25] = *eax_145 + 1
    eax_145[0x26] = edx_33
    int128_t* eax_147 = sub_4f6e90(edi_20, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    float var_140_20 = fconvert.s(float.t(1))
    *(eax_147 + 0x13c) = *eax_147 + 1
    eax_147[0x14].d = sub_423b70
    sub_4f9fe0(*ebx, &var_90)
    
    if ((data_31667ac.d & &data_800000) == 0)
        data_31667ac.d |= &data_800000
        int32_t var_c_55 = 0x1b
        data_316674c = sub_4f5220(esi_1, "tbl_myIcons")
        int32_t var_c_56 = 0xffffffff
    
    *ebx
    void var_d0
    int32_t eax_151 = sub_4fab00(edi_20, &var_d0, data_316674c, &var_90)
    int32_t eax_152 = data_316674c
    char* var_140_22 = var_128
    __builtin_memcpy(&var_90, eax_151, 0x40)
    sub_425870(eax_152, ecx, esi_1, esi_1, eax_152)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_12c)
    return result
}

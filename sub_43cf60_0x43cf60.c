// 函数名称: sub_43cf60
// 虚拟地址: 0x43cf60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __fastcallsub_43cf60(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6968c2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_bc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7a40
    
    if (*(eax_3 + 0x548) == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi = *(eax_3 + 0x548)
    long double x87_r7 = float.t(1)
    int32_t var_74 = sx.d(*(*(edi + 0x45844) + 0x458))
    int32_t eax_6
    eax_6.b = *(edi + 0xbfb0) == arg1
    float var_64
    
    if (eax_6.b == 0)
        var_64 = fconvert.s(fconvert.t(-1f))
    else
        var_64 = fconvert.s(x87_r7)
    
    float var_68 = fconvert.s(
        fconvert.t(data_8c4d34) * fconvert.t(var_64) * fconvert.t(1000.0) / fconvert.t(600.0)
        + fconvert.t(*(edi + (arg1 << 2) + 0xbfb4)))
    long double x87_r6_7 = fconvert.t(var_68)
    *(edi + (arg1 << 2) + 0xbfb4) = fconvert.s(x87_r6_7)
    var_68 = fconvert.s(x87_r6_7)
    int32_t eax_7
    long double st0
    st0, eax_7 = sub_465dd0(fconvert.s(fconvert.t(var_68)), fconvert.s(float.t(0)), fconvert.s(x87_r7))
    var_68 = fconvert.s(st0)
    long double x87_r7_4 = fconvert.t(var_68)
    *(edi + (arg1 << 2) + 0xbfb4) = fconvert.s(x87_r7_4)
    float var_64_1 = fconvert.s(x87_r7_4)
    int32_t eax_8
    
    if (arg1 != 0xffffffff)
        eax_8 = *sub_46b2b0(arg1)
    else
        eax_8 = eax_7 | arg1
    
    int32_t eax_10
    int32_t ecx_1
    char* edx
    eax_10, ecx_1, edx = sub_487cf0(eax_8, var_74)
    
    if (eax_10 == 0xffffffff)
        sub_4c5870("opponentUI != -1", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3ab4, 
            "OpponentPanelUpdateVR")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((data_3166254 & 1) == 0)
        data_3166254.d |= 1
        int32_t var_8_1 = 0
        char const* const var_c0_2 = "ui_opponent_zoom"
        int32_t eax_13
        eax_13, ecx_1 = sub_510710(data_307ca78, edx)
        data_3166250 = eax_13
        int32_t var_8_2 = 0xffffffff
    
    int32_t ebx_2 = eax_10 * 0xb8
    void var_38
    int32_t* eax_17
    int32_t ecx_3
    eax_17, ecx_3 = sub_50c140(*sub_510b30(
        __builtin_memcpy(&var_38, *sub_50c140(*sub_510b30(ecx_1, arg2)) + ebx_2 + 8, 0x24), arg2))
    int32_t edi_2 = data_3166250
    var_68 = fconvert.s(fconvert.t(*(*eax_17 + ebx_2 + 0x78)))
    float var_5c[0x9]
    int32_t ecx_4 =
        __builtin_memcpy(&var_5c, edi_2 * 0xb8 + *sub_50c140(*sub_510b30(ecx_3, arg2)) + 8, 0x24)
    int32_t edi_5 = data_3166250
    int32_t eax_22
    int32_t ecx_5
    eax_22, ecx_5 = sub_50c140(*sub_510b30(ecx_4, arg2))
    int32_t var_c0_3 = ecx_5
    float var_74_1 = fconvert.s(fconvert.t(*(edi_5 * 0xb8 + *eax_22 + 0x78)))
    float var_ac[0xb]
    int32_t eax_23
    int80_t st0_1
    long double x87_r0
    st0_1, eax_23 =
        sub_43cd90(eax_22, &var_ac, &var_5c, x87_r0, &var_ac, fconvert.s(fconvert.t(var_64_1)))
    long double x87_r6_8 = float.t(0)
    int32_t ecx_7 = __builtin_memcpy(&var_38, eax_23, 0x24)
    float var_64_2 = fconvert.s(fconvert.t(var_64_1) - x87_r6_8)
    float var_6c = fconvert.s(float.t(1) - x87_r6_8)
    var_6c = fconvert.s(fconvert.t(var_64_2) / fconvert.t(var_6c))
    long double result_2 = float.t(0)
    long double result_1 = fconvert.t(var_6c)
    result_1 - result_2
    eax_23.w = (result_1 < result_2 ? 1 : 0) << 8 | (is_unordered.t(result_1, result_2) ? 1 : 0) << 0xa
        | (result_1 == result_2 ? 1 : 0) << 0xe | 0x3000
    long double result = result_1
    bool p = unimplemented  {test ah, 0x41}
    long double x87_r7_14
    
    if (p)
        long double x87_r6_11 = float.t(1)
        x87_r6_11 - result_2
        eax_23.w = (x87_r6_11 < result_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, result_2) ? 1 : 0) << 0xa
            | (x87_r6_11 == result_2 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            long double x87_r5_1 = fconvert.t(2.0)
            long double x87_r4_1 = fconvert.t(3.0)
            var_6c = fconvert.s(result_2 * result_2 * (x87_r4_1 - result_2 * x87_r5_1))
            long double x87_r5_3 = fconvert.t(var_6c)
            var_6c = fconvert.s(x87_r5_3 * x87_r5_3 * (x87_r4_1 - x87_r5_1 * x87_r5_3))
            long double x87_r6_18 = fconvert.t(var_68)
            x87_r7_14 = (fconvert.t(var_74_1) - x87_r6_18) * fconvert.t(var_6c) + x87_r6_18
        else
            result = result_2
            x87_r7_14 = fconvert.t(var_74_1)
    else
        result = result_2
        x87_r7_14 = fconvert.t(var_68)
    
    float var_64_3 = fconvert.s(x87_r7_14)
    int128_t* eax_26 = sub_50c830(eax_10, arg2, sub_510b30(ecx_7, arg2))
    eax_26[0x48].d = *(eax_26 + 0x5c) + 1
    int128_t* eax_29 =
        sub_50c830(eax_10, arg2, sub_510b30(__builtin_memcpy(eax_26 + 0x484, &var_38, 0x24), arg2))
    int32_t edx_9 = *(eax_29 + 0x5c) + 1
    *(eax_29 + 0x4ac) = fconvert.s(fconvert.t(var_64_3))
    *(eax_29 + 0x4a8) = edx_9
    int32_t eax_31 = sub_510860(eax_10)
    
    if (*(data_27e7a40 + 0x2c4960) == 0)
        sub_4c5870("gCClient->activeGame.gameType != GAME_NONE", &data_83f3d3, 
            "..\code\RFTGClient.cpp", 0x3ac5, "OpponentPanelUpdateVR")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_34 = sub_4fc3d0(&data_be1cb8, eax_31)
    bool cond:3 = (data_3166254 & 2) != 0
    int32_t* edi_9 = data_307ca64
    *(eax_34 + 8) = 0
    
    if (not(cond:3))
        data_3166254.d |= 2
        int32_t var_8_3 = 1
        data_316624c = sub_4f5220(edi_9, "AvatarImage")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166254 & 4) == 0)
        data_3166254.d |= 4
        int32_t var_8_5 = 2
        data_3166248 = sub_4f5220(edi_9, "txt_opponentVPTotal")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166254 & 8) == 0)
        data_3166254.d |= 8
        int32_t var_8_7 = 3
        data_3166244 = sub_4f5220(edi_9, "txt_oppopentName")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166254 & 0x10) == 0)
        data_3166254.d |= 0x10
        int32_t var_8_9 = 4
        data_3166240 = sub_4f5220(edi_9, "rgn_opponentAction0")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166254 & 0x20) == 0)
        data_3166254.d |= 0x20
        int32_t var_8_11 = 5
        data_316623c = sub_4f5220(edi_9, "rgn_opponentAction1")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3166254 & 0x40) == 0)
        data_3166254.d |= 0x40
        int32_t var_8_13 = 6
        data_3166238 = sub_4f5220(edi_9, "rgn_opponentAction0Prestige")
        int32_t var_8_14 = 0xffffffff
    
    if ((data_3166254 & 0x80) == 0)
        data_3166254.d |= 0x80
        int32_t var_8_15 = 7
        data_3166234 = sub_4f5220(edi_9, "rgn_opponentAction1Prestige")
        int32_t var_8_16 = 0xffffffff
    
    if ((data_3166254.d & 0x100) == 0)
        data_3166254.d |= 0x100
        int32_t var_8_17 = 8
        data_3166230 = sub_4f5220(edi_9, "rgn_opponentActionOnlyOne")
        int32_t var_8_18 = 0xffffffff
    
    if ((data_3166254.d & 0x200) == 0)
        data_3166254.d |= 0x200
        int32_t var_8_19 = 9
        data_316622c = sub_4f5220(edi_9, "rgn_opponentActionOnlyOnePrestige")
        int32_t var_8_20 = 0xffffffff
    
    if (arg1 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3ada, "OpponentPanelUpdateVR")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg1)
        case 0
            *(sub_4fc3d0(&data_be1cb8, eax_31) + 0x2c) = sub_43ccb0
        case 1
            *(sub_4fc3d0(&data_be1cb8, eax_31) + 0x2c) = sub_43cce0
        case 2
            *(sub_4fc3d0(&data_be1cb8, eax_31) + 0x2c) = sub_43cd30
        case 3
            *(sub_4fc3d0(&data_be1cb8, eax_31) + 0x2c) = sub_43cd60
    
    int32_t eax_49 = sub_4ba260(sub_424340())
    int128_t* eax_51 = sub_4f6e90(data_316624c, sub_4fc3d0(&data_be1cb8, eax_31), &data_83f3d3)
    *(eax_51 + 0x94) = *eax_51 + 1
    *(eax_51 + 0x98) = eax_49
    int32_t eax_52 = sub_418a10()
    sub_42c680(arg1)
    char** eax_54
    char* ecx_15
    eax_54, ecx_15 = sub_4c4ab0(&var_6c)
    int32_t var_8_21 = 0xa
    char* eax_55 = *eax_54
    
    if (eax_55 == 0)
        eax_55 = &data_83f3d3
    
    int32_t edx_11 = data_3166248
    int32_t var_c0_5 = 1
    char* var_c4_12 = eax_55
    sub_4f9300(eax_31, edx_11, ecx_15, edx_11.b)
    int32_t var_8_22 = 0xffffffff
    sub_4c43d0(&var_6c)
    
    if ((data_3166254.d & 0x400) == 0)
        data_3166254.d |= 0x400
        int32_t var_8_23 = 0xb
        data_3165db0 = sub_4f5220(edi_9, "tbl_opponentIcons")
        int32_t var_8_24 = 0xffffffff
    
    float* var_c8_2 = &var_68
    char* ecx_17 = sub_424120(arg1, sub_43b810(eax_31, arg1))
    int32_t var_8_25 = 0xc
    float eax_60 = var_68
    
    if (eax_60 == 0)
        eax_60 = &data_83f3d3
    
    int32_t edx_13 = data_3166244
    int32_t var_c0_7 = 1
    float var_c4_15 = eax_60
    int32_t edx_14 = sub_4f9300(eax_31, edx_13, ecx_17, edx_13.b)
    void* edi_13 = arg1 * 0xb4
    char var_5d
    char* ecx_18 = &var_5d
    
    if (sub_41e630() == 0)
        int32_t eax_80 = sub_41eac0(*(edi_13 + eax_52 + 0x2c), eax_52, ecx_18)
        float edx_23 = data_316622c
        int32_t esi_16 = eax_80
        eax_80.b = var_5d == 0
        uint32_t ecx_22 = zx.d(eax_80.b)
        uint32_t var_c0_14 = ecx_22
        int32_t edx_24 = sub_4fa4e0(eax_31, edx_23, edx_23.b)
        
        if (esi_16 != 0)
            int32_t var_c0_15 = esi_16
            int32_t var_c4_23 = data_3166230
            sub_4f9350(eax_31, edx_24, ecx_22)
    else
        void* edi_14 = edi_13 + eax_52
        int32_t eax_64 = sub_41eac0(*(edi_14 + 0x2c), edx_14, ecx_18)
        ecx_18.b = var_5d == 0
        uint32_t edx_15 = zx.d(ecx_18.b)
        uint32_t var_c0_8 = edx_15
        int32_t edx_16 = sub_4fa4e0(eax_31, data_3166238, edx_15.b)
        int32_t edx_18
        
        if (eax_64 == 0)
            int32_t var_c0_10 = 1
            edx_18 = sub_4fa4e0(eax_31, data_3166240, edx_16.b)
        else
            int32_t ecx_19 = data_3166240
            int32_t var_c0_9 = eax_64
            int32_t var_c4_17 = ecx_19
            sub_4f9350(eax_31, edx_16, ecx_19)
            float edx_17 = data_3166240
            int32_t var_c8_4 = 0
            edx_18 = sub_4fa4e0(eax_31, edx_17, edx_17.b)
        
        int32_t eax_72 = sub_41eac0(*(edi_14 + 0x30), edx_18, &var_5d)
        char* ecx_20
        ecx_20.b = var_5d == 0
        uint32_t edx_19 = zx.d(ecx_20.b)
        uint32_t var_c0_11 = edx_19
        int32_t edx_20 = sub_4fa4e0(eax_31, data_3166234, edx_19.b)
        
        if (eax_72 == 0)
            int32_t var_c0_13 = 1
            sub_4fa4e0(eax_31, data_316623c, edx_20.b)
        else
            int32_t ecx_21 = data_316623c
            int32_t var_c0_12 = eax_72
            int32_t var_c4_20 = ecx_21
            sub_4f9350(eax_31, edx_20, ecx_21)
            float edx_21 = data_316623c
            int32_t var_c8_5 = 0
            sub_4fa4e0(eax_31, edx_21, edx_21.b)
    
    if ((data_3166254.d & 0x800) == 0)
        data_3166254.d |= 0x800
        var_8_25.b = 0xd
        data_3166228 = sub_4f5220(edi_9, "rgn_opponentTableau")
        var_8_25.b = 0xc
    
    int32_t var_7c_2 = 0
    int128_t* eax_86 = sub_4f6e90(data_3166228, sub_4fc3d0(&data_be1cb8, eax_31), &data_83f3d3)
    eax_86[0x12].d = *eax_86 + 1
    *(eax_86 + 0x124) = 0
    *(eax_86 + 0x128) = var_7c_2
    *(eax_86 + 0x12c) = 0
    eax_86[0x13].d = var_7c_2
    int32_t edx_27
    
    if ((data_3166254.d & 0x1000) == 0)
        data_3166254.d |= 0x1000
        var_8_25.b = 0xe
        int32_t eax_88
        eax_88, edx_27 = sub_4f5220(edi_9, "imgPrestigeAction")
        data_3166224 = eax_88
        var_8_25.b = 0xc
    
    edx_27.b = *(eax_52 + 0x45a) != 3
    uint32_t var_c0_16 = zx.d(edx_27.b)
    int32_t edx_28 = sub_4fa4e0(eax_31, data_3166224, edx_27.b)
    
    if ((data_3166254.d & 0x2000) == 0)
        data_3166254.d |= 0x2000
        var_8_25.b = 0xf
        int32_t eax_91
        eax_91, edx_28 = sub_4f5220(data_307c604, "imgPrestige")
        data_3166220 = eax_91
        var_8_25.b = 0xc
    
    int32_t eax_93 = sub_4f77f0(data_3166224, edx_28, eax_31, &data_84074c)
    char eax_95
    char edx_30
    eax_95, edx_30 = sub_41f1f0(arg1)
    uint32_t var_c0_17 = zx.d(eax_95)
    sub_4fa4e0(eax_93, data_3166220, edx_30)
    int32_t var_8_26 = 0xffffffff
    sub_4c43d0(&var_68)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

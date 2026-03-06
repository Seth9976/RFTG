// 函数名称: sub_488ed0
// 虚拟地址: 0x488ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_488ed0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_699a42
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_6b4
    int32_t var_1c = __security_cookie ^ &var_6b4
    int32_t ebx
    int32_t var_6b8 = ebx
    int32_t esi
    int32_t var_6bc = esi
    int32_t edi
    int32_t var_6c0 = edi
    int32_t var_6c4 = __security_cookie ^ &var_6c0
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_5 = sub_685f40(fconvert.t(data_8c4d34) * fconvert.t(1000.0))
    data_30929a8
    long double x87_r6 = float.t(1)
    data_315ff40 += eax_5
    int32_t ecx = data_30929bc
    int32_t edx = data_30929c0
    data_315ff44 += 1
    int32_t var_690 = data_30929b8
    int32_t var_68c = ecx
    int32_t var_684 = data_30929c4
    int32_t var_688 = edx
    int32_t var_680 = data_30929c8
    int32_t var_678 = data_30929d0
    int32_t var_67c = data_30929cc
    void var_448
    __builtin_memcpy(&var_448, &var_690, 0x1c)
    long double x87_r6_1 = fconvert.t(data_30929a4)
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6 / x87_r6)) * x87_r6_1))
    float var_510 = fconvert.s(fneg(x87_r6_3))
    float var_42c = var_510
    float var_428 = fconvert.s(fneg(x87_r6_1))
    float var_424 = fconvert.s(x87_r6_3)
    float var_420 = fconvert.s(x87_r6_1)
    float var_520 = fconvert.s(fconvert.t(data_30929ac))
    float var_41c = var_520
    float var_51c = fconvert.s(fconvert.t(data_30929b0))
    int16_t top = 0
    float var_418 = var_51c
    data_3092a04
    void var_414
    __builtin_memcpy(&var_414, &data_be4c5c, 0x20)
    char* edx_5 = sub_50cce0(data_307ca3c, &var_448)
    
    if ((data_3166ecc & 1) == 0)
        data_3166ecc.d |= 1
        int32_t var_c_1 = 0
        char const* const var_6c8_1 = "players"
        data_3160ee8 = sub_510710(data_307ca3c, edx_5)
        int32_t var_c_2 = 0xffffffff
    
    data_3092a04
    int32_t eax_13 = sub_50eb00(data_3160ee8, 0)
    int32_t var_694 = sub_479090(1)
    int32_t eax_14
    eax_14.b = data_27c05f2 != 0
    int32_t ecx_5
    char* edx_7
    ecx_5, edx_7 = sub_510950(eax_13, 0x100, eax_14.b)
    
    if ((data_3166ecc & 2) == 0)
        data_3166ecc.d |= 2
        int32_t var_c_3 = 1
        char const* const var_6c8_3 = "ui_hand"
        int32_t eax_16
        eax_16, ecx_5, edx_7 = sub_510710(data_307ca78, edx_7)
        data_3166ec8 = eax_16
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3166ecc & 4) == 0)
        data_3166ecc.d |= 4
        int32_t var_c_5 = 2
        char const* const var_6c8_4 = "uiPhase"
        int32_t eax_18
        eax_18, ecx_5 = sub_510710(data_307ca78, edx_7)
        data_3166ec4 = eax_18
        int32_t var_c_6 = 0xffffffff
    
    int32_t esi_1 = data_3166ec4
    int32_t ecx_6 = sub_510b30(ecx_5, eax_13)
    int128_t* eax_21
    char* edx_9
    eax_21, edx_9 = sub_50c830(esi_1, eax_13, ecx_6)
    bool cond:2 = (data_3166ecc & 8) != 0
    *(eax_21 + 0x4c8) = 1
    char var_6a0 = 0
    
    if (not(cond:2))
        data_3166ecc.d |= 8
        int32_t var_c_7 = 3
        char const* const var_6c8_5 = "dlgUI"
        int32_t eax_23
        eax_23, ecx_6, edx_9 = sub_510710(data_307ca78, edx_9)
        data_3166ec0 = eax_23
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3166ecc & 0x10) == 0)
        data_3166ecc.d |= 0x10
        int32_t var_c_9 = 4
        char const* const var_6c8_6 = "dlgUISub"
        int32_t eax_25
        eax_25, ecx_6 = sub_510710(data_307ca78, edx_9)
        data_3166ebc = eax_25
        int32_t var_c_10 = 0xffffffff
    
    int32_t* esi_2 = data_30d6f38
    int32_t* eax_26 = data_307c69c
    int32_t* var_6b0 = esi_2
    
    if (esi_2 == eax_26)
        if (data_307d960 == 1)
            data_307d964 = data_307d920
        label_489229:
            ecx_6 = data_26a44b4
            esi_2 = **(ecx_6 + data_307d968 * 0x10)
        else
            if (data_307d8cc == 1)
                goto label_489229
            
            esi_2 = eax_26
        
        var_6b0 = esi_2
    
    int32_t* eax_29 = data_307c174
    
    if (esi_2 == eax_29)
        esi_2 = eax_29
        
        if (data_307d8c8 != 0)
            esi_2 = data_307c178
        
        var_6b0 = esi_2
    
    if (esi_2 == data_307c500)
        sub_4075c0()
        
        if (*(*(data_27e7a40 + 0x548) + 0x43350) == 0)
            esi_2 = data_307c16c
            var_6a0 = 1
            var_6b0 = esi_2
        
        sub_407670()
    
    int128_t* eax_34 = sub_50c830(data_3166ec8, eax_13, sub_510b30(ecx_6, eax_13))
    int32_t ecx_9 = *(eax_34 + 0x5c) + 1
    *(eax_34 + 0x64) = ecx_9
    *(eax_34 + 0x68) = 1
    char* var_6ac
    int128_t* eax_41
    int32_t edx_17
    
    if (esi_2 != 0)
        int32_t ebx_3 = data_3166ec0
        int32_t eax_42 = sub_510b30(ecx_9, eax_13)
        int128_t* eax_44 = sub_50c830(ebx_3, eax_13, eax_42)
        int32_t ebx_4 = data_3166ec0
        *(eax_44 + 0x64) = *(eax_44 + 0x5c) + 1
        *(eax_44 + 0x68) = 0
        sub_50c830(ebx_4, eax_13, sub_510b30(eax_42, eax_13))[6].d = esi_2
        void* eax_49
        int32_t ecx_16
        eax_49, ecx_16 = sub_510860(data_3166ec0)
        int32_t ebx_5 = data_3166ec0
        int32_t eax_50 = sub_510b30(ecx_16, eax_13)
        *(sub_50c830(ebx_5, eax_13, eax_50) + 0x4c8) = 1
        int32_t ecx_27
        
        if (data_30d6f3c == 0)
            int32_t ebx_10 = data_3166ebc
            int32_t eax_71 = sub_510b30(eax_50, eax_13)
            int128_t* eax_73 = sub_50c830(ebx_10, eax_13, eax_71)
            int32_t ebx_11 = data_3166ec0
            *(eax_73 + 0x64) = *(eax_73 + 0x5c) + 1
            *(eax_73 + 0x68) = 1
            int128_t* eax_76 = sub_50c830(ebx_11, eax_13, sub_510b30(eax_71, eax_13))
            ecx_27 = *(eax_76 + 0x5c) + 1
            eax_76[0x4b].d = ecx_27
            *(eax_76 + 0x4b4) = 1
        else
            int32_t eax_54
            int32_t ecx_18
            eax_54, ecx_18 = sub_510860(data_3166ebc)
            int32_t ebx_6 = data_30d6f3c
            var_6ac = data_3166ebc
            int32_t eax_56 = sub_510b30(ecx_18, eax_13)
            sub_50c830(var_6ac, eax_13, eax_56)[6].d = ebx_6
            int32_t* ecx_20 = data_30d6f3c
            float eax_59
            char edx_26
            eax_59, edx_26 = sub_4f5220(ecx_20, "bg")
            int32_t var_6d0_1 = 1
            sub_4fa4e0(eax_54, eax_59, edx_26)
            int32_t ebx_7 = data_3166ebc
            int32_t eax_61 = sub_510b30(ecx_20, eax_13)
            int128_t* eax_63 = sub_50c830(ebx_7, eax_13, eax_61)
            int32_t ebx_8 = data_3166ebc
            *(eax_63 + 0x64) = *(eax_63 + 0x5c) + 1
            *(eax_63 + 0x68) = 0
            int32_t eax_64 = sub_510b30(eax_61, eax_13)
            int128_t* eax_66 = sub_50c830(ebx_8, eax_13, eax_64)
            int32_t ebx_9 = data_3166ebc
            *(eax_66 + 0x4c8) = 1
            int128_t* eax_69
            int32_t edx_32
            eax_69, edx_32 = sub_50c830(ebx_9, eax_13, sub_510b30(eax_64, eax_13))
            eax_69[0x4b].d = *(eax_69 + 0x5c) + 1
            *(eax_69 + 0x4b4) = 1
            ecx_27 = sub_487440(data_30d6f3c, edx_32, eax_54)
            esi_2 = var_6b0
        
        if (esi_2 != data_307c794)
            if (esi_2 != data_307c500)
                int32_t var_6c8_7 = 1
                int32_t var_6cc_2 = ecx_27
                float eax_77
                char edx_36
                eax_77, edx_36 = sub_4f5220(esi_2, "bg")
                sub_4fa4e0(eax_49, eax_77, edx_36)
            
            if (esi_2 == data_307c16c || esi_2 == data_307c500)
                int32_t var_6c8_8 = 1
                int32_t var_6cc_4 = ecx_27
                float eax_79
                char edx_37
                eax_79, edx_37 = sub_4f5220(esi_2, "Darken")
                sub_4fa4e0(eax_49, eax_79, edx_37)
        
        int32_t edx_38 = var_6a0.d
        int80_t st0_1
        st0_1, eax_41, edx_17 = sub_4874f0(data_30d6f38, edx_38, eax_49, var_694, edx_38.b)
    else
        if (data_30d6f3c != esi_2)
            sub_4c5870("gRftGVR.subDlg == NULL", &data_83f3d3, "..\code\RftGVR.cpp", 0x1a29, 
                "RftGVRUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t esi_3 = data_3166ec0
        int32_t eax_36 = sub_510b30(ecx_9, eax_13)
        int128_t* eax_38 = sub_50c830(esi_3, eax_13, eax_36)
        int32_t esi_4 = data_3166ebc
        *(eax_38 + 0x64) = *(eax_38 + 0x5c) + 1
        *(eax_38 + 0x68) = 1
        eax_41, edx_17 = sub_50c830(esi_4, eax_13, sub_510b30(eax_36, eax_13))
        *(eax_41 + 0x64) = *(eax_41 + 0x5c) + 1
        *(eax_41 + 0x68) = 1
    
    uint32_t ecx_32 = zx.d(data_30d72c0)
    sub_41a2c0(eax_41, edx_17, ecx_32, ecx_32.b)
    data_30d72c0 = 0
    sub_4075c0()
    sub_43f610()
    char* edx_40 = sub_43d8c0(sub_510860(data_3166ec4))
    
    if ((data_3166ecc & 0x20) == 0)
        data_3166ecc.d |= 0x20
        int32_t var_c_11 = 5
        char const* const var_6c8_11 = "ui_opponent_left"
        int32_t eax_86
        char* edx_41
        eax_86, edx_41 = sub_510710(data_307ca78, edx_40)
        data_315ff48 = eax_86
        char const* const var_6c8_12 = "ui_opponent_middle"
        int32_t eax_88
        char* edx_42
        eax_88, edx_42 = sub_510710(data_307ca78, edx_41)
        data_315ff4c = eax_88
        char const* const var_6c8_13 = "ui_opponent_right"
        data_315ff50 = sub_510710(data_307ca78, edx_42)
        int32_t var_c_12 = 0xffffffff
    
    char* edx_44
    int32_t* i
    
    for (i = &data_315ff48; i s< &data_315ff54; )
        void* eax_93
        eax_93, edx_44 = sub_4fc3d0(&data_be1cb8, sub_510860(*i))
        i = &i[1]
        *(eax_93 + 8) = 1
    
    void* eax_94 = data_27e7a40
    i.b = 0
    
    if (*(eax_94 + 0x2c4960) != 0)
        void* eax_95 = *(eax_94 + 0x548)
        
        if (eax_95 == 0)
            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                "GetGame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* ecx_35 = *(eax_95 + 0x45844)
        eax_95.b = *(ecx_35 + 0x45a)
        
        if (eax_95.b s> 0 && eax_95.b s< 4 && *(ecx_35 + 0x45b) == 0)
            i.b = 1
    
    if ((data_3166ecc & 0x40) == 0)
        data_3166ecc.d |= 0x40
        int32_t var_c_13 = 6
        char const* const var_6c8_14 = "uiGoals"
        data_3166eb8 = sub_510710(data_307ca78, edx_44)
        int32_t var_c_14 = 0xffffffff
    
    void* eax_101
    char* edx_46
    eax_101, edx_46 = sub_4fc3d0(&data_be1cb8, sub_510860(data_3166eb8))
    edx_46.b = i.b == 0
    *(eax_101 + 8) = edx_46.b
    
    if ((data_3166ecc & 0x80) == 0)
        data_3166ecc.d |= 0x80
        int32_t var_c_15 = 7
        char const* const var_6c8_15 = "uiPhaseBG"
        data_3166eb4 = sub_510710(data_307ca78, edx_46)
        int32_t var_c_16 = 0xffffffff
    
    int32_t eax_105 = sub_510860(data_3166eb4)
    i.b = *(data_27e7a40 + 0x2c4960) == 0
    void* eax_106 = sub_4fc3d0(&data_be1cb8, eax_105)
    char* edx_48 = data_27e7a40
    *(eax_106 + 8) = i.b
    
    if (*(edx_48 + 0x2c4960) != 0)
        int32_t esi_9 = 0
        
        if (var_694 s> 0)
            do
                if (esi_9 != *(data_27e7a40 + 0x74))
                    sub_43cf60(esi_9, eax_13)
                    top -= 1
                    unimplemented  {call 0x43cf60}
                
                esi_9 += 1
            while (esi_9 s< var_694)
        
        sub_442f20(sub_510860(data_3166ec0))
        char* edx_51 = sub_43ec10(eax_13)
        
        if ((data_3166ecc.d & 0x100) == 0)
            data_3166ecc.d |= 0x100
            int32_t var_c_17 = 8
            char const* const var_6c8_17 = "ui_military"
            data_3166eb0 = sub_510710(data_307ca78, edx_51)
            int32_t var_c_18 = 0xffffffff
        
        int32_t eax_113 = sub_510860(data_3166eb0)
        void* ecx_39 = data_27e7a40
        
        if (*(*(ecx_39 + 0x548) + 0x2c0b0) == 0)
            int128_t* eax_137
            eax_137, edx_48 = sub_50c830(data_3166eb0, eax_13, sub_510b30(ecx_39, eax_13))
            *(eax_137 + 0x64) = *(eax_137 + 0x5c) + 1
            *(eax_137 + 0x68) = 1
        else
            int128_t* eax_117 = sub_50c830(data_3166eb0, eax_13, sub_510b30(ecx_39, eax_13))
            *(eax_117 + 0x64) = *(eax_117 + 0x5c) + 1
            *(eax_117 + 0x68) = 0
            edx_48 = sub_424f90(eax_113)
    
    if ((data_3166ecc.d & 0x200) == 0)
        data_3166ecc.d |= 0x200
        int32_t var_c_19 = 9
        char const* const var_6c8_19 = "uiSearch"
        data_3166eac = sub_510710(data_307ca78, edx_48)
        int32_t var_c_20 = 0xffffffff
    
    char* edx_57 = sub_443ef0(sub_510860(data_3166eac))
    
    if ((data_3166ecc.d & 0x400) == 0)
        data_3166ecc.d |= 0x400
        int32_t var_c_21 = 0xa
        char const* const var_6c8_21 = "uiGambling"
        data_3166ea8 = sub_510710(data_307ca78, edx_57)
        int32_t var_c_22 = 0xffffffff
    
    char* edx_59 = sub_488500(sub_510860(data_3166ea8))
    
    if ((data_3166ecc.d & 0x800) == 0)
        data_3166ecc.d |= 0x800
        int32_t var_c_23 = 0xb
        char const* const var_6c8_23 = "uiTakeover"
        data_3166ea4 = sub_510710(data_307ca78, edx_59)
        int32_t var_c_24 = 0xffffffff
    
    char* edx_61 = sub_487eb0(sub_510860(data_3166ea4))
    
    if ((data_3166ecc.d & 0x1000) == 0)
        data_3166ecc.d |= 0x1000
        int32_t var_c_25 = 0xc
        char const* const var_6c8_25 = "uiCardset"
        data_3166ea0 = sub_510710(data_307ca78, edx_61)
        int32_t var_c_26 = 0xffffffff
    
    sub_510860(data_3166ea0)
    sub_443c70()
    int16_t top_1 = top - 1
    unimplemented  {call 0x443c70}
    sub_43f090(eax_13)
    char* edx_63 = sub_43da20(eax_13)
    
    if ((data_3166ecc.d & 0x2000) == 0)
        data_3166ecc.d |= 0x2000
        int32_t var_c_27 = 0xd
        char const* const var_6c8_27 = "ui_help"
        data_3166e9c = sub_510710(data_307ca78, edx_63)
        int32_t var_c_28 = 0xffffffff
    
    int32_t eax_139 = sub_510860(data_3166e9c)
    
    if ((data_3166ecc.d & 0x4000) == 0)
        data_3166ecc.d |= 0x4000
        int32_t var_c_29 = 0xe
        data_3166e98 = sub_4f5220(data_307c9f0, "txt_prompt")
        int32_t var_c_30 = 0xffffffff
    
    bool var_6b1
    char* edx_66 = GSI1::QueryMiniPDBForTiDefnUDT2(eax_139, data_3166e98, &var_6b1)
    
    if ((data_3166ecc.d & 0x8000) == 0)
        data_3166ecc.d |= 0x8000
        int32_t var_c_31 = 0xf
        char const* const var_6c8_29 = "uiPause"
        data_3166e94 = sub_510710(data_307ca78, edx_66)
        int32_t var_c_32 = 0xffffffff
    
    int32_t ecx_46
    char* edx_68
    ecx_46, edx_68 = sub_4879a0(sub_510860(data_3166e94))
    sub_407670()
    
    if ((data_3166ecc.d & 0x10000) == 0)
        data_3166ecc.d |= 0x10000
        int32_t var_c_33 = 0x10
        char const* const var_6c8_31 = "player_000"
        int32_t eax_146
        eax_146, ecx_46 = sub_510710(data_307ca78, edx_68)
        data_3166e90 = eax_146
        int32_t var_c_34 = 0xffffffff
    
    int128_t* eax_149 = sub_50c830(data_3166e90, eax_13, sub_510b30(ecx_46, eax_13))
    eax_149[0x4c].d = *(eax_149 + 0x5c) + 1
    *(eax_149 + 0x4c4) = sub_4792d0
    int32_t eax_150
    int32_t* edx_72
    eax_150, edx_72 = sub_47bef0(&data_3092a08)
    data_30d6f08 = eax_150
    int32_t i_3 = 0
    float var_670
    float var_66c
    float var_668
    float var_660
    float var_65c
    float var_658
    void var_648
    int32_t var_5c0
    float var_540
    int32_t var_530
    int32_t var_52c
    int32_t var_528
    int32_t var_524
    int32_t* var_4f0
    
    if (eax_150 s> 0)
        int32_t i_1
        
        do
            int32_t* ebx_18 = i_3 * 0x88a0 + &data_3092a08
            var_6b0 = ebx_18
            int32_t* eax_152 = sub_47c200(ebx_18, edx_72, &data_30929a4, &var_690)
            var_530 = *eax_152
            var_52c = eax_152[1]
            var_528 = eax_152[2]
            var_524 = eax_152[3]
            var_520 = eax_152[4]
            float edx_75 = eax_152[5]
            bool cond:21_1 = data_30d72a0:1.b == 0
            var_51c = edx_75
            data_30d72b4 = 0
            
            if (not(cond:21_1))
                int32_t* var_6c8_33 = &var_530
                sub_4c3740(0x30d727c, edx_75)
            
            sub_4075c0()
            int32_t eax_153
            int32_t ecx_51
            float edx_76
            eax_153, ecx_51, edx_76 = sub_445370(&var_530)
            top_1 -= 1
            unimplemented  {call 0x445370}
            int32_t var_69c_1 = eax_153
            __builtin_memcpy(&var_5c0, 
                sub_510270(&var_648, sub_510b30(ecx_51, data_3092a04), &var_530), 0x7c)
            
            if (eax_153 != 0)
                void* ecx_53 = *(data_27e7a40 + 0x548)
                uint32_t edx_79 = zx.d(eax_153.w)
                int32_t* edi_2
                
                if (edx_79 u< *(ecx_53 + 0x43964))
                    edi_2 = *(ecx_53 + 0x43960)
                
                if (edx_79 u>= *(ecx_53 + 0x43964) || edi_2[edx_79 * 0x2c + 0x2b] != eax_153)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct RFTGGfx>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* esi_16 = edx_79 * 0xb0
                int32_t eax_158 = *(edi_2 + esi_16)
                var_6a0.d = esi_16
                
                if (eax_158 == 0 || eax_158 == 1)
                    char* eax_159 = *(edi_2 + esi_16 + 0x58)
                    var_6ac = eax_159
                    
                    if (eax_159 != 0 && *(edi_2 + esi_16 + 0x5c) == 3)
                        char* eax_160
                        
                        if (eax_159 != 0xffffffff)
                            int32_t eax_161 = 0
                            int32_t esi_17 = 0
                            
                            while (true)
                                if (ecx_53 == 0)
                                    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                        "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                if (eax_161 s>= sx.d(*(*(ecx_53 + 0x45844) + 0x458)))
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x2e0, 
                                        "PlayerSeatToWho")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                if (*(ecx_53 + esi_17 + 0x218) == var_6ac)
                                    esi_16 = var_6a0.d
                                    eax_160 = *(eax_161 * 0x1f98 + ecx_53 + 0x21c)
                                    break
                                
                                eax_161 += 1
                                esi_17 += 0x1f98
                        else
                            eax_160 = eax_159
                        
                        if (*(ecx_53 + 0xbfb0) != eax_160)
                            int32_t ecx_54
                            
                            if (edx_79 u< *(ecx_53 + 0x43964))
                                ecx_54 = *(ecx_53 + 0x43960)
                            
                            if (edx_79 u>= *(ecx_53 + 0x43964)
                                    || *(edx_79 * 0xb0 + ecx_54 + 0xac) != eax_153)
                                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                    "c:\ax2010\engine\DataArray.h", 0x46, 
                                    "DataArray<struct RFTGGfx>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t eax_165
                            int32_t ecx_55
                            eax_165, ecx_55 = sub_446520(esi_16 + ecx_54)
                            char eax_166
                            
                            if (eax_165 == 4)
                                eax_166 = sub_47c480(ecx_55, ebx_18)
                            
                            if (eax_165 != 4 || eax_166 == 0)
                                var_69c_1 = 0
            
            if (data_30d6f38 != 0 || data_30d6f40 != 0)
                var_69c_1 = 0
            
            var_4f0 = &RFTGHitResult::`vftable'{for `InputHitResult'}
            int32_t var_4ec_1 = 0
            int32_t var_4e8 = 0
            int32_t var_4e4_1 = 0
            int32_t edx_82 = sub_5abfc0(&var_4e8, 0, 0x7c)
            ebx_18[1] = 0
            int32_t esi_18 = data_30d72b4
            int32_t edi_7 = 0
            __builtin_memset(&var_4e8, 0, 0x14)
            int32_t var_4dc_1
            int32_t var_640
            float var_63c
            
            if (esi_18 == 0)
                int32_t ecx_60 = var_5c0
                int16_t top_2 = top_1 - 1
                unimplemented  {fld st0, dword [esp+0x17c]}
                
                if (ecx_60 != 0)
                    if (var_69c_1 == 0)
                        goto label_48a18f
                    
                label_489fbd:
                    unimplemented  {fld st0, dword [esp+0x2c]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_1 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    
                    if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | ((top_2 - 1) & 7) << 0xb):1.b & 0x41) == 0)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                    label_48a18f:
                        unimplemented  {fld st0, dword [esp+0x1a0]}
                        unimplemented  {fmul st0, st1}
                        int32_t var_5ac
                        ebx_18[0x2223] = var_5ac
                        int32_t var_5a8
                        ebx_18[0x2224] = var_5a8
                        var_540 = fconvert.s(unimplemented  {fstp dword [esp+0x184], st0})
                        unimplemented  {fstp dword [esp+0x184], st0}
                        var_69c_1 = 0
                        unimplemented  {fld st0, st0}
                        unimplemented  {fmul st0, dword [esp+0x1a4]}
                        float var_53c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x188], st0})
                        unimplemented  {fstp dword [esp+0x188], st0}
                        unimplemented  {fmul st0, dword [esp+0x1a8]}
                        float var_538_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18c], st0})
                        unimplemented  {fstp dword [esp+0x18c], st0}
                        unimplemented  {fld st0, dword [esp+0x194]}
                        unimplemented  {fadd dword [esp+0x184]}
                        var_510 = fconvert.s(unimplemented  {fstp dword [esp+0x1b4], st0})
                        unimplemented  {fstp dword [esp+0x1b4], st0}
                        unimplemented  {fld st0, dword [esp+0x198]}
                        ebx_18[0x2225] = var_510
                        unimplemented  {fadd dword [esp+0x188]}
                        float var_50c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1b8], st0})
                        unimplemented  {fstp dword [esp+0x1b8], st0}
                        unimplemented  {fld st0, dword [esp+0x19c]}
                        ebx_18[0x2226] = var_50c_1
                        unimplemented  {fadd dword [esp+0x18c]}
                        float var_508_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1bc], st0})
                        unimplemented  {fstp dword [esp+0x1bc], st0}
                        ebx_18[0x2227] = var_508_1
                        
                        if (ecx_60 u> 4)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0xc90, 
                                "CalcControllerCursor")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t eax_187
                        
                        switch (ecx_60)
                            case 0
                                eax_187 = 0
                            case 1, 2, 3
                                int32_t eax_188
                                eax_188.b = ecx_60 == 3
                                eax_187 = eax_188 + 1
                            case 4
                                eax_187 = 1
                        
                        unimplemented  {fldz }
                        int32_t var_3d0
                        __builtin_memcpy(&var_3d0, &var_5c0, 0x7c)
                        float var_358_1 = fconvert.s(unimplemented  {fstp dword [esp+0x36c], st0})
                        unimplemented  {fstp dword [esp+0x36c], st0}
                        top_1 = top_2 + 1
                        int32_t edx_91 = var_3d0
                        ebx_18[1] = eax_187
                        int32_t var_3b8_1 = 0
                        int32_t var_3bc_1 = 0
                        var_4ec_1 = 2
                        __builtin_memcpy(&var_4e8, &var_3d0, 0x7c)
                        int32_t var_3c0
                        edi_7 = var_3c0
                        var_4e8 = edx_91
                        int32_t var_3c4
                        edx_82 = var_3c4
                        int32_t var_3cc
                        int32_t var_4e4_4 = var_3cc
                        int32_t var_3c8
                        int32_t var_4e0_3 = var_3c8
                        var_4dc_1 = edx_82
                        int32_t var_4d8_3 = edi_7
                    else
                        int16_t top_4
                        
                        if (ecx_60 == 0)
                            unimplemented  {fstp st1, st0}
                            unimplemented  {fstp st1, st0}
                            top_4 = top_2
                        else
                            unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                            unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                            is_unordered.t(unimplemented  {fcom st0, st1}, 
                                unimplemented  {fcom st0, st1})
                            unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                            unimplemented  {fstp st1, st0}
                            unimplemented  {fstp st1, st0}
                            top_4 = top_2
                            bool p_1 = unimplemented  {test ah, 0x41}
                            
                            if (p_1)
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x1b00, 
                                    "RftGVRUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                        
                        unimplemented  {fld st0, dword [esp+0x1a0]}
                        unimplemented  {fmul st0, st1}
                        var_5c0 = 0
                        var_660 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                        unimplemented  {fstp dword [esp+0x64], st0}
                        unimplemented  {fld st0, st0}
                        unimplemented  {fmul st0, dword [esp+0x1a4]}
                        var_65c = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
                        unimplemented  {fstp dword [esp+0x68], st0}
                        unimplemented  {fmul st0, dword [esp+0x1a8]}
                        var_658 = fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                        unimplemented  {fstp dword [esp+0x6c], st0}
                        unimplemented  {fld st0, dword [esp+0x64]}
                        unimplemented  {fadd dword [esp+0x194]}
                        var_670 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                        unimplemented  {fstp dword [esp+0x54], st0}
                        unimplemented  {fld st0, dword [esp+0x68]}
                        ebx_18[0x2225] = var_670
                        unimplemented  {fadd dword [esp+0x198]}
                        void* eax_180 = data_27e7a40
                        var_66c = fconvert.s(unimplemented  {fstp dword [esp+0x58], st0})
                        unimplemented  {fstp dword [esp+0x58], st0}
                        unimplemented  {fld st0, dword [esp+0x6c]}
                        ebx_18[0x2226] = var_66c
                        unimplemented  {fadd dword [esp+0x19c]}
                        var_668 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
                        unimplemented  {fstp dword [esp+0x5c], st0}
                        ebx_18[0x2227] = var_668
                        int32_t eax_184
                        
                        switch (sub_446520(sub_463f60(*(eax_180 + 0x548) + 0x43960, var_69c_1)) - 1)
                            case 0, 3, 4, 6, 7, 0xa, 0xb
                                eax_184 = 2
                            default
                                eax_184 = 1
                        
                        ebx_18[1] = eax_184
                        var_640 = 0
                        var_63c = 0f
                        sub_5abfc0(&var_640, 0, 0x7c)
                        unimplemented  {fldz }
                        __builtin_memset(&var_640, 0, 0x14)
                        var_640 = var_69c_1
                        var_63c = edx_76
                        var_63c = fconvert.s(unimplemented  {fstp dword [esp+0x88], st0})
                        unimplemented  {fstp dword [esp+0x88], st0}
                        top_1 = top_4 + 1
                        edx_82 = 0
                        var_4ec_1 = 1
                        __builtin_memcpy(&var_4e8, &var_640, 0x7c)
                        var_4e8 = var_640
                        edi_7 = 0
                        float var_4e4_3 = var_63c
                        int32_t var_4e0_2 = 0
                        var_4dc_1 = 0
                        int32_t var_4d8_2 = 0
                else
                    if (var_69c_1 != 0)
                        goto label_489fbd
                    
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_1 = top_2 + 1
            else
                var_640 = 0
                var_63c = 0f
                sub_5abfc0(&var_640, 0, 0x7c)
                float edx_83 = data_30d72a8
                int32_t var_638_1 = 0
                int32_t var_638_2 = data_30d72ac
                int32_t var_634_1 = 0
                int32_t var_634_2 = data_30d72b0
                var_63c = 0f
                var_63c = edx_83
                __builtin_memset(&var_640, 0, 0x14)
                int32_t eax_168 = data_30d72a4
                var_640 = eax_168
                int32_t var_630 = esi_18
                var_4ec_1 = 3
                __builtin_memcpy(&var_4e8, &var_640, 0x7c)
                edi_7 = var_630
                var_4e8 = eax_168
                float eax_169 = var_63c
                ebx_18[0x2225] = edx_83
                float var_4e4_2 = eax_169
                int32_t var_638_3
                int32_t var_4e0_1 = var_638_3
                ebx_18[0x2226] = data_30d72ac
                edx_82 = data_30d72b0
                int32_t var_634_3
                var_4dc_1 = var_634_3
                ebx_18[0x2227] = edx_82
                int32_t var_4d8_1 = edi_7
                int32_t eax_171
                eax_171.b = data_30d72b4 != 2
                ebx_18[1] = eax_171 + 1
            char* edx_84 = sub_47c150(&var_4f0, edx_82, ebx_18, &data_30d6f0c, &var_4f0)
            
            if ((data_3166ecc.d & 0x20000) == 0)
                data_3166ecc.d |= 0x20000
                int32_t var_c_35 = 0x11
                char const* const var_6c8_37 = "ui_zoom_card"
                data_3166e8c = sub_510710(data_307ca78, edx_84)
                int32_t var_c_36 = 0xffffffff
            
            char* eax_177 = sub_510860(data_3166e8c)
            bool cond:11_1 = *(data_27e7a40 + 0x2c4960) != 0
            var_6ac = eax_177
            eax_177.b = data_30d72a0:1.b
            var_6b1 = cond:11_1
            
            if (eax_177.b == 0)
                char** edx_86 = data_30d72b8
                
                if (edx_86 != 0)
                    eax_177 = *edx_86
                    int32_t ecx_63
                    
                    if (eax_177 == 0 || *eax_177 == 0)
                        ecx_63 = 0
                    else
                        if (*(eax_177 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        ecx_63 = *(eax_177 - 8)
                    
                    ecx_63.b = ecx_63 s>= 1
                    
                    if (ecx_63.b != 0)
                        if (eax_177 == 0)
                            eax_177 = &data_83f3d3
                        
                        _strncpy(data_27e7a54, eax_177, 0x10)
                        data_27e7a54[0xf] = 0
                        edx_86 = data_30d72b8
                    
                    edx_86[1] = 0
                    *(data_30d72b8 + 0xc) = 0
                    *(data_30d72b8 + 0x51) = 0
                    eax_177.b = 0
                    data_30d72b8 = 0
                    data_30d72a0:1.b = 0
            
            var_6a0.d = *(data_27e7a40 + 0x548)
            
            if (eax_177.b != 0 && var_4ec_1 != 3)
                int32_t* esi_22
                
                if (var_4ec_1 != 2)
                    esi_22 = data_30d72b8
                else
                    if (var_4dc_1 == 0)
                        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                            0x45, "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint32_t eax_192 = zx.d(var_4dc_1.w)
                    int32_t ecx_76
                    int32_t edx_95
                    
                    if (eax_192 u< data_be1cbc)
                        edx_95 = data_be1cb8
                        ecx_76 = eax_192 * 0x438
                    
                    if (eax_192 u>= data_be1cbc || *(ecx_76 + edx_95 + 0x434) != var_4dc_1)
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_21 = edx_95 + eax_192 * 0x438
                    
                    if (edi_7 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_96 = *(esi_21 + (edi_7 << 2) + 0x30)
                    int128_t* eax_194
                    
                    if (edx_96 != 0)
                        eax_194 = sub_4fc1e0(ecx_76, edx_96)
                    else
                        eax_194 = sub_4fc0d0()
                        *(eax_194 + 4) = &data_83f3d3
                        *(esi_21 + (edi_7 << 2) + 0x30) = *(eax_194 + 0x1bc)
                    
                    esi_22 = data_30d72b8
                    
                    if (&eax_194[0x16] == esi_22)
                        goto label_48a428
                
                void* edx_98 = nullptr
                
                while (true)
                    int32_t eax_196 = *(edx_98 + 0x84134c)
                    void* ecx_79
                    
                    if (eax_196 s>= 0x1d)
                        ecx_79 = &ebx_18[0x1702]
                        
                        if (ebx_18[2] != 0)
                            ecx_79 = &ebx_18[0x1c8f]
                        
                        eax_196 -= 0x1d
                    else
                        ecx_79 = &ebx_18[3]
                    
                    int32_t eax_197 = eax_196 * 0x32c
                    
                    if (*(eax_197 + ecx_79 + 0x327) != 0)
                        break
                    
                    if (*(eax_197 + ecx_79 + 0x326) != 0)
                        break
                    
                    edx_98 += 4
                    
                    if (edx_98 u>= 0x24)
                        void* edx_99 = nullptr
                        
                        while (true)
                            int32_t eax_198 = *(edx_99 + 0x841370)
                            void* ecx_80
                            
                            if (eax_198 s>= 0x1d)
                                ecx_80 = &ebx_18[0x1702]
                                
                                if (ebx_18[2] != 0)
                                    ecx_80 = &ebx_18[0x1c8f]
                                
                                eax_198 -= 0x1d
                            else
                                ecx_80 = &ebx_18[3]
                            
                            int32_t eax_199 = eax_198 * 0x32c
                            
                            if (*(eax_199 + ecx_80 + 0x327) != 0)
                                break
                            
                            if (*(eax_199 + ecx_80 + 0x326) != 0)
                                break
                            
                            edx_99 += 4
                            
                            if (edx_99 u>= 0x1c)
                                void* edx_100 = nullptr
                                
                                while (true)
                                    int32_t eax_200 = *(edx_100 + 0x84138c)
                                    void* ecx_81
                                    
                                    if (eax_200 s>= 0x1d)
                                        ecx_81 = &ebx_18[0x1702]
                                        
                                        if (ebx_18[2] != 0)
                                            ecx_81 = &ebx_18[0x1c8f]
                                        
                                        eax_200 -= 0x1d
                                    else
                                        ecx_81 = &ebx_18[3]
                                    
                                    int32_t eax_201 = eax_200 * 0x32c
                                    
                                    if (*(eax_201 + ecx_81 + 0x327) != 0)
                                        break
                                    
                                    if (*(eax_201 + ecx_81 + 0x326) != 0)
                                        break
                                    
                                    edx_100 += 4
                                    
                                    if (edx_100 u>= 0x1c)
                                        goto label_48a428
                                
                                break
                        
                        break
                
                char* eax_202 = *esi_22
                int32_t ecx_82
                
                if (eax_202 == 0 || *eax_202 == 0)
                    ecx_82 = 0
                else
                    if (*(eax_202 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    ecx_82 = *(eax_202 - 8)
                
                ecx_82.b = ecx_82 s>= 1
                
                if (ecx_82.b != 0)
                    if (eax_202 == 0)
                        eax_202 = &data_83f3d3
                    
                    _strncpy(data_27e7a54, eax_202, 0x10)
                    *(data_27e7a54 + 0xf) = 0
                    esi_22 = data_30d72b8
                
                esi_22[1] = 0
                *(data_30d72b8 + 0xc) = 0
                edx_72 = data_30d72b8
                *(edx_72 + 0x51) = 0
                data_30d72b8 = 0
                data_30d72a0:1.b = 0
                goto label_48aa56
            
        label_48a428:
            void* edx_97 = nullptr
            
            while (true)
                int32_t eax_204 = *(edx_97 + 0x84134c)
                void* ecx_78
                
                if (eax_204 s>= 0x1d)
                    ecx_78 = &ebx_18[0x1702]
                    
                    if (ebx_18[2] != 0)
                        ecx_78 = &ebx_18[0x1c8f]
                    
                    eax_204 -= 0x1d
                else
                    ecx_78 = &ebx_18[3]
                
                int32_t eax_205 = eax_204 * 0x32c
                
                if (*(eax_205 + ecx_78 + 0x327) != 0)
                    break
                
                if (*(eax_205 + ecx_78 + 0x326) != 0)
                    break
                
                edx_97 += 4
                
                if (edx_97 u>= 0x24)
                    void* edx_102 = nullptr
                    
                    while (true)
                        int32_t eax_206 = *(edx_102 + 0x841370)
                        void* ecx_84
                        
                        if (eax_206 s>= 0x1d)
                            ecx_84 = &ebx_18[0x1702]
                            
                            if (ebx_18[2] != 0)
                                ecx_84 = &ebx_18[0x1c8f]
                            
                            eax_206 -= 0x1d
                        else
                            ecx_84 = &ebx_18[3]
                        
                        int32_t eax_207 = eax_206 * 0x32c
                        
                        if (*(eax_207 + ecx_84 + 0x327) != 0)
                            break
                        
                        if (*(eax_207 + ecx_84 + 0x326) != 0)
                            break
                        
                        edx_102 += 4
                        
                        if (edx_102 u>= 0x1c)
                            goto label_48a69e
                    
                    break
            
            if (*(data_27e7a40 + 0x2c4960) != 1 || data_27c0720 != 1)
            label_48a69e:
                void* esi_23 = var_6a0.d
                int32_t edi_8 = *(esi_23 + 0xbfac)
                
                if (edi_8 != 0 || *(esi_23 + 0x2c0ac) != 0xffffffff)
                    void* edx_106 = nullptr
                    
                    while (true)
                        int32_t eax_214 = *(edx_106 + 0x84132c)
                        void* ecx_86
                        
                        if (eax_214 s>= 0x1d)
                            ecx_86 = &ebx_18[0x1702]
                            
                            if (ebx_18[2] != 0)
                                ecx_86 = &ebx_18[0x1c8f]
                            
                            eax_214 -= 0x1d
                        else
                            ecx_86 = &ebx_18[3]
                        
                        int32_t eax_215 = eax_214 * 0x32c
                        
                        if (*(eax_215 + ecx_86 + 0x327) != 0)
                            break
                        
                        if (*(eax_215 + ecx_86 + 0x326) != 0)
                            break
                        
                        edx_106 += 4
                        
                        if (edx_106 u>= 0x10)
                            goto label_48a707
                
                if ((edi_8 == 0 && *(esi_23 + 0x2c0ac) == 0xffffffff) || var_6b1 == 0)
                label_48a707:
                    char eax_216
                    
                    if (edi_8 != 0 || *(esi_23 + 0x2c0ac) != 0xffffffff)
                        eax_216 = sub_47c4d0(4, ebx_18)
                    
                    if ((edi_8 != 0 || *(esi_23 + 0x2c0ac) != 0xffffffff) && eax_216 != 0
                            && var_6b1 != 0)
                        edx_72 = sub_448190(1)
                    else if (*(esi_23 + 0x2c0b0) == 0)
                    label_48a79f:
                        int32_t var_5b4
                        
                        if (*(esi_23 + 0xbfac) != 0 || *(esi_23 + 0x2c0ac) != 0xffffffff
                                || *(esi_23 + 0x2c0b0) != 0)
                            char eax_220 = sub_47c4d0(0, ebx_18)
                            char eax_221
                            
                            if (eax_220 == 0)
                                eax_221 = sub_47c4d0(1, ebx_18)
                            
                            if (eax_220 != 0 || eax_221 != 0)
                                if (var_5b4 == var_6ac || var_6b1 == 0)
                                    goto label_48a805
                                
                                edx_72 = sub_447b40()
                            else
                                if (sub_47c4d0(2, ebx_18) == 0 || var_5b4 == var_6ac || var_6b1 == 0)
                                    goto label_48a805
                                
                                edx_72 = sub_447b40()
                        else
                        label_48a805:
                            
                            if (*(esi_23 + 0x43880) == 0)
                            label_48a851:
                                
                                if (*(esi_23 + 0xbfb0) == 0xffffffff)
                                label_48a8ea:
                                    edx_72 = ebx_18
                                    
                                    if (sub_47c4d0(2, edx_72) == 0)
                                        if (var_4ec_1 != 3)
                                            int32_t var_5b8
                                            
                                            if (var_4ec_1 != 2)
                                                if (var_4ec_1 == 1)
                                                    int32_t* eax_262 = sub_463f60(
                                                        *(data_27e7a40 + 0x548) + 0x43960, var_69c_1)
                                                    ebx_18[1] = 2
                                                    int32_t eax_264 = sub_446520(eax_262) - 1
                                                    
                                                    if (eax_264 u> 0xb)
                                                    label_48ad19:
                                                        
                                                        if (sub_47c4d0(1, ebx_18) == 0)
                                                            edx_72 = ebx_18
                                                            sub_47c4d0(2, edx_72)
                                                        else
                                                            sub_4d6480(data_307beec)
                                                            sub_4d66f0(&var_448)
                                                            edx_72 = sub_4485d0(var_69c_1)
                                                            ebx_18 = var_6b0
                                                    else
                                                        switch (eax_264)
                                                            case 0, 3, 4, 6, 7, 0xa, 0xb
                                                                if (sub_47c4d0(0, ebx_18) == 0)
                                                                    goto label_48ad19
                                                                
                                                                sub_4d6480(data_307beec)
                                                                sub_4d66f0(&var_448)
                                                                edx_72 = sub_446df0(var_69c_1)
                                                                ebx_18 = var_6b0
                                                            case 1, 2, 5, 8, 9
                                                                goto label_48ad19
                                            else if (var_5b8 != var_4ec_1)
                                                ebx_18[1] = 2
                                                char eax_236
                                                int32_t* ecx_91
                                                eax_236, ecx_91, edx_72 = sub_487e50(var_694, eax_13)
                                                int32_t var_5b0
                                                void var_350
                                                char eax_238
                                                
                                                if (eax_236 != 0)
                                                    int32_t var_6c8_39 = 7
                                                    int32_t var_6cc_12 = 0x841370
                                                    sub_47c3a0(var_6b0, edx_72, ecx_91, &var_350)
                                                    int32_t var_6c8_40 = 1
                                                    eax_238, ecx_91, edx_72 =
                                                        sub_4fb5e0(&var_350, var_5b4, var_5b0)
                                                    top_1 -= 1
                                                    unimplemented  {call 0x4fb5e0}
                                                
                                                if (eax_236 == 0 || eax_238 == 0)
                                                    int32_t var_6c8_41 = 9
                                                    int32_t var_6cc_14 = 0x84134c
                                                    sub_47c3a0(var_6b0, edx_72, ecx_91, &var_350)
                                                    int32_t var_6c8_42 = 0
                                                    char eax_240
                                                    eax_240, edx_72 =
                                                        sub_4fb5e0(&var_350, var_5b4, var_5b0)
                                                    top_1 -= 1
                                                    unimplemented  {call 0x4fb5e0}
                                                    
                                                    if (eax_240 == 0)
                                                        char eax_241
                                                        eax_241, edx_72 = sub_488b50(&var_5b8)
                                                        
                                                        if (eax_241 != 0)
                                                            edx_72 = var_6b0
                                                            
                                                            if (sub_47c4d0(1, edx_72) != 0)
                                                                edx_72 = sub_463cf0(&var_5b8)
                                                
                                                ebx_18 = var_6b0
                                            else
                                                ebx_18[1] = 1
                                    else if (data_30d6f3c == 0)
                                        int32_t eax_234 = data_30d6f38
                                        
                                        if (eax_234 != 0)
                                            edx_72 = sub_488c90(eax_234)
                                        else if (data_30d6f40 != 0)
                                            data_30d6f40 = 0
                                        else if (*(data_27e7a40 + 0x2c4960) != 0)
                                            data_30d6f40 = 1
                                    else
                                        data_30d6f3c = 0
                                else
                                    if (sub_47c4d0(0, ebx_18) == 0)
                                        if (sub_47c4d0(1, ebx_18) != 0)
                                            goto label_48a88b
                                        
                                        if (sub_47c4d0(2, ebx_18) == 0)
                                            goto label_48a8ea
                                    
                                label_48a88b:
                                    
                                    if (var_69c_1 == 0)
                                    label_48a8d4:
                                        
                                        if (var_6b1 == 0)
                                            goto label_48a8ea
                                        
                                        edx_72 = sub_447b40()
                                    else
                                        void* eax_229 =
                                            sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, var_69c_1)
                                        void* eax_230 = var_6a0.d
                                        int32_t esi_25 = *(eax_230 + 0xbfb0)
                                        
                                        if (*(eax_229 + 0x5c) != 3)
                                            goto label_48a8d4
                                        
                                        int32_t eax_231
                                        
                                        if (esi_25 != 0xffffffff)
                                            eax_231 = *sub_46b2b0(esi_25)
                                        else
                                            eax_231 = eax_230 | esi_25
                                        
                                        if (*(eax_229 + 0x58) == eax_231 || var_6b1 == 0)
                                            goto label_48a8ea
                                        
                                        edx_72 = sub_447b40()
                            else
                                edx_72 = ebx_18
                                char eax_223 = sub_47c4d0(0, edx_72)
                                char eax_224
                                
                                if (eax_223 == 0)
                                    edx_72 = ebx_18
                                    eax_224 = sub_47c4d0(1, edx_72)
                                
                                if (eax_223 != 0 || eax_224 != 0)
                                    if (var_6b1 == 0)
                                        goto label_48a851
                                    
                                    *(esi_23 + 0x43880) = 0
                                else
                                    edx_72 = ebx_18
                                    
                                    if (sub_47c4d0(2, edx_72) == 0 || var_6b1 == 0)
                                        goto label_48a851
                                    
                                    *(esi_23 + 0x43880) = 0
                    else
                        edx_72 = ebx_18
                        char eax_217 = sub_47c4d0(0, edx_72)
                        char eax_218
                        
                        if (eax_217 == 0)
                            edx_72 = ebx_18
                            eax_218 = sub_47c4d0(1, edx_72)
                        
                        if (eax_217 != 0 || eax_218 != 0)
                            if (var_6b1 == 0)
                                goto label_48a79f
                            
                            *(esi_23 + 0x2c0b0) = 0
                        else
                            edx_72 = ebx_18
                            
                            if (sub_47c4d0(2, edx_72) == 0 || var_6b1 == 0)
                                goto label_48a79f
                            
                            *(esi_23 + 0x2c0b0) = 0
                else
                    edx_72 = sub_448190(2)
            else
                int32_t eax_210 = *(data_27e7a54 + 0x204) * 3
                int32_t ecx_85 = data_27c076c
                
                if (ecx_85 s>= *((eax_210 << 3) + &data_8c77ec) - 1
                        || *((&data_8c77e8)[eax_210 * 2] + (ecx_85 << 3)) != 2)
                    goto label_48a69e
                
                edx_72 = sub_419340()
                
                if (var_6b1 == 0)
                    goto label_48a69e
            
        label_48aa56:
            sub_407670()
            
            if (*ebx_18 == 0)
                int32_t esi_27 = 1
                
                if (ebx_18[1] == 2)
                    esi_27 = 2
                
                edx_72 = sub_4c6110(esi_27)
            
            i_1 = i_3 + 1
            i_3 = i_1
        while (i_1 s< data_30d6f08)
    
    int32_t eax_244
    int32_t ecx_95
    eax_244, ecx_95 = sub_479090(1)
    int32_t edx_116 = data_3092a04
    int32_t edi_11 = 1
    var_6ac = data_3160ee8
    int32_t eax_246 = sub_510b30(ecx_95, edx_116)
    int128_t* eax_248 = sub_50c830(var_6ac, edx_116, eax_246)
    int32_t ecx_98 = *(eax_248 + 0x5c) + 1
    eax_248[7].d = eax_244
    *(eax_248 + 0x74) = 1
    *(eax_248 + 0x6c) = ecx_98
    *(eax_248 + 0x78) = 1
    
    if (eax_244 s> 1)
        do
            data_3092a04
            int32_t esi_28 = sub_50eb00(data_3160ee8, edi_11)
            int32_t eax_249
            eax_249.b = data_27c05f2 != 0
            sub_510950(esi_28, 0x100, eax_249.b)
            sub_510950(esi_28, 0x200, data_27c05f2 == 0)
            sub_4075c0()
            int32_t eax_251 = sub_488ab0(edi_11)
            int32_t ecx_101 = *(data_27e7a40 + 0x2c4960)
            bool edx_118 = false
            
            if (ecx_101 == 1)
                edx_118 = ecx_101.b
            
            if (ecx_101 == 2 && *(eax_251 * 0x70 + data_27e7a4c + 0x14) != 0)
                edx_118 = true
            
            char* edx_119 = sub_510950(esi_28, 0x80, edx_118 == 0)
            sub_407670()
            
            if ((data_3166ecc.d & 0x40000) == 0)
                data_3166ecc.d |= 0x40000
                int32_t var_c_37 = 0x12
                char const* const var_6c8_48 = "player_000"
                data_3166e88 = sub_510710(data_307ca80, edx_119)
                int32_t var_c_38 = 0xffffffff
            
            int32_t ecx_103 = *((edi_11 << 2) + &data_874734)
            var_6ac = data_3166e88
            int32_t eax_256 = sub_510b30(ecx_103, esi_28)
            int128_t* eax_258 = sub_50c830(var_6ac, esi_28, eax_256)
            ecx_98 = *(eax_258 + 0x5c) + 1
            edi_11 += 1
            eax_258[0x4c].d = ecx_98
            *(eax_258 + 0x4c4) = ecx_103
        while (edi_11 s< eax_244)
    
    sub_4075c0()
    
    if (data_30d6f38 == 0 && *(data_27e7a40 + 0x2c4960) == 0 && data_30d7278 == 0)
        ecx_98 = data_307c76c
        data_30d6f38 = ecx_98
    
    sub_407670()
    sub_4075c0()
    unimplemented  {fld st0, dword [0x8c4d34]}
    int32_t edx_123 = data_3092a04
    var_6ac = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    int32_t esi_29 = data_315ff44
    int32_t* eax_260
    int32_t ecx_106
    eax_260, ecx_106 = sub_510b30(ecx_98, edx_123)
    unimplemented  {fld st0, dword [esp+0x18]}
    int32_t var_6c8_49 = esi_29
    int32_t var_6cc_16 = ecx_106
    float var_6cc_17 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    int16_t top_32 = top_1
    sub_50f230(eax_260, var_6cc_17)
    sub_407670()
    int32_t eax_261
    int32_t edx_124
    eax_261, edx_124 = sub_4777c0(0x30929e8)
    
    if (data_30929a0 == 0)
        data_30929f8 = 0
        data_30929fc = 0
        data_3092a00 = 0
    else
        sub_47add0(eax_261, edx_124, 0x30929e8, &data_30929f8, 0x30929e8)
        unimplemented  {call 0x47add0}
    
    sub_4075c0()
    var_6b0 = nullptr
    int32_t i_4 = 0
    int32_t i_2
    
    do
        sub_407670()
        char* eax_278
        char* edx_129
        eax_278, edx_129 = sub_479090(0)
        var_6ac = eax_278
        sub_4075c0()
        int32_t* ebx_20 = var_6b0
        char* var_694_1
        
        if (ebx_20 s< eax_278)
            edx_129 = mods.dp.d(sx.q(eax_278 + ebx_20 - sub_488a60()), eax_278)
            ebx_20 = edx_129
            var_694_1 = edx_129
        else
            var_694_1 = ebx_20
        
        if (ebx_20 != 0)
            if (ebx_20 s<= 0)
                sub_4c5870("modelSeat > 0", &data_83f3d3, "..\code\RftGVR.cpp", 0x1c1f, "RftGVRUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (ebx_20 s>= 4)
                sub_4c5870("modelSeat < 4", &data_83f3d3, "..\code\RftGVR.cpp", 0x1c20, "RftGVRUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_407670()
            __builtin_memcpy(&var_690, sub_479150(&var_448, edx_129, ebx_20, &var_448), 0x20)
            sub_4075c0()
            void* esi_39 = data_27e7a40
            int32_t edi_14
            
            if (data_30d7278 == 0)
                edi_14 = *(esi_39 + 0x2c4960)
            
            int32_t** var_6d0_23
            char var_6cc_21
            int32_t* var_6c8_57
            void* eax_303
            char* ecx_125
            int32_t** edx_146
            
            if (data_30d7278 != 0 || edi_14 == 2)
                int32_t* eax_305 = var_6b0
                __builtin_memcpy(&var_5c0, 
                    sub_488940(eax_305, &var_448, eax_305 + esi_39 + 0x348, &var_448, 
                        i_4 + esi_39 + 0x188, i_4 + data_27e7a4c + 0xc), 
                    0x70)
                __builtin_memcpy(i_4 + esi_39 + 0x188, &var_5c0, 0x70)
                void* var_6e0_3
                int32_t** var_6dc_3
                int32_t* var_6d8_3
                void* var_6d0_25
                char var_6cc_23
                int32_t* eax_310
                int32_t* edx_149
                
                if (*(i_4 + esi_39 + 0x191) != 0)
                    edx_149 = *(i_4 + esi_39 + 0x18c)
                    eax_310 = *(i_4 + esi_39 + 0x188)
                    var_6cc_23 = *(i_4 + esi_39 + 0x190)
                    var_6d0_25 = edx_149
                    int32_t var_6d4_8 = 0
                    var_6d8_3 = eax_310
                    var_6dc_3 = i_4 + esi_39 + 0x188
                    var_6e0_3 = &var_690
                else
                    edx_149 = *(i_4 + esi_39 + 0x188)
                    var_6cc_23 = *(i_4 + esi_39 + 0x190)
                    var_6d0_25 = *(i_4 + esi_39 + 0x18c)
                    int32_t var_6d4_7 = 0
                    var_6d8_3 = edx_149
                    var_6dc_3 = i_4 + esi_39 + 0x188
                    eax_310 = &var_690
                    var_6e0_3 = &var_690
                
                eax_303, edx_146 = sub_4795b0(eax_310, edx_149, var_694_1 * 0xa4 + 0x30d6f44, 
                    var_6e0_3, var_6dc_3, var_6d8_3, 0f, var_6d0_25, var_6cc_23, 0)
                var_6c8_57 = 0xffffffff
                var_6cc_21 = 0
                ecx_125 = var_694_1 * 0xa4 + 0x30d6f44
                var_6d0_23 = i_4 + esi_39 + 0x188
            else
                sub_5abfc0(&var_4f0, 0, 0x70)
                
                if (edi_14 != 0)
                    int32_t var_4ec_3 = *(esi_39 + 0x2c495c)
                else
                    int32_t var_4ec_2 = edi_14
                
                int32_t* esi_40 = var_6b0
                uint32_t edx_145 = esi_40 s< var_6ac
                var_4f0 = esi_40 + 0xb
                eax_303 = sub_4795b0(&var_4f0, edx_145, ebx_20 * 0xa4 + 0x30d6f44, &var_690, &var_4f0, 
                    esi_40 + 0xb, 0f, nullptr, edx_145.b, 1)
                var_6c8_57 = esi_40
                var_6cc_21 = 1
                edx_146 = &var_4f0
                var_6d0_23 = &var_4f0
                ecx_125 = ebx_20 * 0xa4 + 0x30d6f44
            
            sub_4785f0(eax_303, edx_146, ecx_125, var_6d0_23, var_6cc_21, var_6c8_57)
        else
            int32_t eax_283 = sub_478140()
            top_32 -= 1
            unimplemented  {call 0x478140}
            int32_t* var_3d8
            __builtin_memcpy(&var_3d8, eax_283, 0x70)
            int32_t eax_285 = sub_479150(&var_448, 1, 0, &var_448)
            int32_t* edx_133 = var_3d8
            __builtin_memcpy(&var_530, eax_285, 0x20)
            void* var_3d4
            int32_t edx_135 = sub_4785f0(
                sub_4795b0(&var_3d8, edx_133, 0x30d6f44, &var_530, &var_3d8, edx_133, 1.40129846e-45f, 
                    var_3d4, 1, 0), 
                &var_3d8, 0x30d6f44, &var_3d8, 0, 0xffffffff)
            void* ebx_22 = data_27e7a40 + 0xa8
            var_6b1 = false
            __builtin_memcpy(&var_648, 
                sub_488940(&var_3d8, edx_135, &var_6b1, &var_448, ebx_22, &var_3d8), 0x70)
            __builtin_memcpy(ebx_22, &var_648, 0x70)
            void* esi_35 = data_27e7a40
            
            if (data_30d7278 != 0 || *(esi_35 + 0x2c4960) == 2)
                if (sub_488e20(esi_35 + 0x124, ebx_22 + 0xc) != 0)
                label_48b130:
                    void* eax_295 = data_27e7a40
                    *(eax_295 + 0x34c) = *(data_27e7a4c + 8)
                    __builtin_memcpy(esi_35 + 0x118, ebx_22, 0x70)
                    void* ecx_120 = *(eax_295 + 0x28)
                    
                    if (ecx_120 != 0)
                        int32_t** edx_142 = data_27e7bb8
                        uint32_t eax_296 = zx.d(ecx_120.w)
                        
                        if (eax_296 u< edx_142[1])
                            void* eax_298 = &(*edx_142)[eax_296 * 0x13]
                            
                            if (*(eax_298 + 0x48) == ecx_120)
                                float* var_6c8_55 = &var_510
                                void* var_6cc_19 = eax_298 + 0x3c
                                int32_t var_50c_2 = 0x70
                                int32_t var_508_2 = 0xf4271
                                var_510 = -1.58164644e+38f
                                void* ecx_121
                                int32_t** edx_143
                                ecx_121, edx_143 = sub_4c72b0(0xc, edx_142, ecx_120)
                                void* var_6d0_21 = ebx_22
                                void* var_6d4_6 = eax_298 + 0x3c
                                sub_4c72b0(0x70, edx_143, ecx_121)
                else
                    if (sub_488e20(esi_35 + 0x140, ebx_22 + 0x28) != 0)
                        goto label_48b130
                    
                    if (sub_488e20(esi_35 + 0x160, ebx_22 + 0x48) != 0
                            || *(ebx_22 + 4) != *(esi_35 + 0x11c)
                            || *(ebx_22 + 0x68) != *(esi_35 + 0x180)
                            || *(ebx_22 + 0x6c) != *(esi_35 + 0x184)
                            || *(esi_35 + 0x34c) != *(data_27e7a4c + 8))
                        goto label_48b130
            else
                sub_5abfc0(esi_35 + 0x118, 0, 0x70)
                *(esi_35 + 0x34c) = 0
        
        var_6b0 += 1
        i_2 = i_4 + 0x70
        i_4 = i_2
    while (i_2 s< 0x1c0)
    sub_439f40()
    sub_407670()
    __builtin_memcpy(&var_530, sub_477b10(), 0x20)
    var_690 = var_52c
    int32_t var_688_1 = var_524
    int32_t var_68c_1 = var_528
    float var_684_1 = var_520
    int32_t var_514
    int32_t edx_152 = var_514
    int32_t var_518
    int32_t var_67c_1 = var_518
    float var_680_1 = var_51c
    void* eax_315 = data_27e7fd0
    int32_t var_678_1 = edx_152
    float var_464[0x4]
    __builtin_memcpy(&var_464, &var_690, 0x1c)
    
    if (*(eax_315 + 0x27) != 0)
        void* eax_316 = data_27e7fcc
        
        if (eax_316 == 0)
            sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if ((*(eax_316 + 0x3c) & 0x200) != 0 || data_27e7bc1 != 0)
            if (data_26a4568 != 0)
                unimplemented  {fld st0, dword [0x26a456c]}
                unimplemented  {fadd dword [0x26a4578]}
                var_510 = fconvert.s(unimplemented  {fstp dword [esp+0x1b4], st0})
                unimplemented  {fstp dword [esp+0x1b4], st0}
                unimplemented  {fld st0, dword [0x26a457c]}
                unimplemented  {fadd dword [0x26a4570]}
                float var_50c_4 = fconvert.s(unimplemented  {fstp dword [esp+0x1b8], st0})
                unimplemented  {fstp dword [esp+0x1b8], st0}
                unimplemented  {fld st0, dword [0x26a4580]}
                unimplemented  {fadd dword [0x26a4574]}
                float var_508_4 = fconvert.s(unimplemented  {fstp dword [esp+0x1bc], st0})
                unimplemented  {fstp dword [esp+0x1bc], st0}
                unimplemented  {fld st0, dword [esp+0x1b4]}
                unimplemented  {fld st0, qword [0x8a5368]}
                unimplemented  {fmul st1, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                var_540 = fconvert.s(unimplemented  {fstp dword [esp+0x184], st0})
                unimplemented  {fstp dword [esp+0x184], st0}
                unimplemented  {fld st0, dword [esp+0x1b8]}
                float var_680_3 = var_540
                unimplemented  {fmul st0, st1}
                var_690 = data_26a4584
                float var_53c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x188], st0})
                unimplemented  {fstp dword [esp+0x188], st0}
                float var_67c_3 = var_53c_3
                unimplemented  {fmul st0, dword [esp+0x1bc]}
                int32_t var_68c_3 = data_26a4588
                int32_t var_684_3 = data_26a4590
                float var_538_3 = fconvert.s(unimplemented  {fstp dword [esp+0x18c], st0})
                unimplemented  {fstp dword [esp+0x18c], st0}
                float var_678_3 = var_538_3
                int32_t var_688_3 = data_26a458c
                char eax_327 = sub_4e3770(&var_690)
                unimplemented  {call 0x4e3770}
                
                if (eax_327 == 0)
                    sub_4c5870("QuatIsValid(retval.orientation)", &data_83f3d3, "VR.cpp", 0x206, 
                        "VRGetHeadPose")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            else
                int32_t var_680_2 = 0
                int32_t var_67c_2 = 0
                int32_t var_678_2 = 0
                var_690 = 0
                int32_t var_68c_2 = 0
                int32_t var_688_2 = 0
                int32_t var_684_2 = 0x3f800000
            
            __builtin_memcpy(&var_530, &var_690, 0x1c)
            float* eax_320
            eax_320, edx_152 = sub_5087d0(&var_510, &var_464)
            __builtin_memcpy(&var_464, eax_320, 0x1c)
    
    sub_465a20(&var_670, edx_152, &var_464)
    var_510 = var_670
    float var_50c_3 = var_66c
    float var_508_3 = var_668
    sub_405900(&var_660, var_66c, &var_464)
    var_540 = var_660
    float var_53c_2 = var_65c
    float var_538_2 = var_658
    void var_454
    (*(*data_27e7fd8 + 0x48))(&var_454, &data_8409a8, &var_540, &var_510)
    HWND result = GetFocus()
    
    if (data_30785e0 != result)
        data_30d6f0c = 0
        data_30d6f10 = 0
    
    int32_t var_24
    fsbase->NtTib.ExceptionList = var_24
    int32_t var_2c
    sub_5a6aba(var_2c ^ &var_6c4)
    return result
}

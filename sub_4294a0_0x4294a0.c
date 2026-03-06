// 函数名称: sub_4294a0
// 虚拟地址: 0x4294a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4294a0(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, char arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6980d3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_1bc
    int32_t eax_2 = __security_cookie ^ &var_1bc
    int32_t __saved_edi
    int32_t var_1cc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = 0
    void* const eax_6 = &data_841950
    void* const var_1a8
    void* const esi
    
    while (true)
        if (arg2 == *eax_6)
            esi = ecx * 0x6c + &data_841950
            var_1a8 = esi
            break
        
        eax_6 += 0x6c
        ecx += 1
        
        if (eax_6 s>= &data_846e88)
            var_1a8 = &data_841950
            esi = &data_841950
            break
    
    int32_t eax_7 = data_3166610
    void* ecx_1 = *esi
    int32_t* result_9
    
    if ((eax_7.b & 1) != 0)
        result_9 = data_316660c
    else
        result_9 = data_307c10c
        eax_7 |= 1
        data_3166610 = eax_7
        data_316660c = result_9
    
    void* eax_9
    
    if ((eax_7.b & 2) != 0)
        eax_9 = data_3166608
    else
        data_3166610 = eax_7 | 2
        int32_t var_c_1 = 0
        eax_9, arg2 = sub_4f5220(result_9, "card_art")
        int32_t var_c_2 = 0xffffffff
        result_9 = data_316660c
        data_3166608 = eax_9
    
    arg2.b = data_26a44a8
    char var_195 = arg2.b
    int32_t* edx_1 = **(esi + 8)
    int32_t var_1d0 = arg3
    int32_t* result_13 = result_9
    int32_t* var_18c = edx_1
    void* var_1b0 = eax_9
    int32_t* result_3 = result_9
    void var_f0
    __builtin_memcpy(&var_f0, sub_4f62d0(eax_9, fconvert.s(float.t(1)), edx_1), 0x40)
    int32_t eax_11 = sub_4f4890(result_3)
    sub_4f67d0(&var_f0, nullptr, var_18c, var_1b0 * 0x118 + *eax_11, &data_be1ae0, &var_f0, nullptr, 
        nullptr)
    void* eax_14 = var_1a8 + 0x1a
    result_3 = nullptr
    var_1b0 = eax_14
    int32_t* var_1a4
    int32_t* var_1a0
    void var_188
    int32_t eax_29
    int32_t edx_11
    
    while (true)
        void* result_10 = *(eax_14 - 0xe)
        
        if (result_10 != 0)
            void* edx_3 = *(data_27e7a40 + 0x548)
            
            if (edx_3 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* esi_3 = *(edx_3 + 0x45844)
            edx_3.b = *(esi_3 + 0x45a)
            int32_t edx_4
            
            if (edx_3.b s<= 1 || edx_3.b s>= 4 || *(esi_3 + 0x45c) != 0)
                edx_4 = 0
            else
                edx_4 = 1
            
            edx_4.b = edx_4 != 0
            
            if ((*(eax_14 - 1) == 0 || edx_4.b != 0) && (*eax_14 == 0 || var_195 != 0))
                sub_426ed0(result_10, *(eax_14 - 2), &var_18c, &var_1a4, &var_1bc)
                int32_t* ecx_8 = data_316660c
                int32_t* eax_16 = var_18c
                int32_t var_1d0_2 = arg3
                int32_t* var_1d4_4 = ecx_8
                var_1a0 = eax_16
                __builtin_memcpy(&var_f0, sub_4f62d0(eax_16, fconvert.s(float.t(1)), arg3), 0x40)
                int32_t eax_18 = sub_4f4890(ecx_8)
                void* ecx_11 = var_1a0 * 0x118 + *eax_18
                sub_4f67d0(ecx_11, nullptr, *(ecx_11 + 0x68), ecx_11, &data_be1ae0, &var_f0, nullptr, 
                    nullptr)
                int32_t* edx_6 = **(var_1b0 - 0xa)
                int32_t* ecx_14 = data_316660c
                int32_t* eax_21 = var_1a4
                int32_t var_1d0_3 = arg3
                int32_t* var_1d4_6 = ecx_14
                var_1a0 = ecx_14
                void var_b0
                __builtin_memcpy(&var_b0, sub_4f62d0(eax_21, fconvert.s(float.t(1)), arg3), 0x40)
                sub_4f67d0(&var_b0, nullptr, edx_6, eax_21 * 0x118 + *sub_4f4890(var_1a0), 
                    &data_be1ae0, &var_b0, nullptr, nullptr)
                int32_t* eax_25 = var_1bc
                
                if (eax_25 != 0xffffffff)
                    int32_t* ecx_20 = **(var_1b0 - 6)
                    int32_t* ecx_21 = data_316660c
                    int32_t var_1d0_4 = arg3
                    int32_t* var_1d4_8 = ecx_21
                    var_1a0 = eax_25
                    __builtin_memcpy(&var_188, sub_4f62d0(eax_25, fconvert.s(float.t(1)), arg3), 0x40)
                    int32_t eax_27 = sub_4f4890(ecx_21)
                    sub_4f67d0(&var_188, nullptr, ecx_20, var_1a0 * 0x118 + *eax_27, &data_be1ae0, 
                        &var_188, nullptr, nullptr)
                
                eax_14 = var_1b0
            
            result_10 = result_3 + 1
            eax_14 += 0x10
            result_3 = result_10
            var_1b0 = eax_14
            
            if (result_10 s< 6)
                continue
        
        void* result_14 = result_10
        int80_t st0_4
        st0_4, edx_11 = sub_4f5f30(data_316660c, arg3, 1, fconvert.s(float.t(1)))
        eax_29 = 4
        break
    
    if ((data_3166610.b & 4) == 0)
        data_3166610 |= 4
        int32_t var_c_3 = 1
        eax_29, edx_11 = sub_4f5220(data_316660c, "title")
        data_3166604 = eax_29
        int32_t var_c_4 = 0xffffffff
    
    char* eax_31
    void* edx_12
    eax_31, edx_12 = sub_4fd8f0(eax_29, edx_11, *(var_1a8 + 4), "card_title")
    
    if (eax_31 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const edi_1
    
    if (*eax_31 != 0)
        char* eax_34 = eax_31
        void** edx_13 = &eax_34[1]
        char i
        
        do
            i = *eax_34
            eax_34 = &eax_34[1]
        while (i != 0)
        void** var_1d0_6 = &var_1b0
        sub_4c40c0(eax_34 - edx_13, edx_13)
        char* eax_36 = eax_31
        edx_12 = var_1b0 - eax_31
        char i_1
        
        do
            i_1 = *eax_36
            *(eax_36 + edx_12) = i_1
            eax_36 = &eax_36[1]
        while (i_1 != 0)
        edi_1 = var_1b0
    else
        edi_1 = &data_83f3d3
        var_1b0 = &data_83f3d3
    
    int32_t** var_1d0_7 = &result_3
    int32_t var_c_5 = 2
    sub_4c40c0(7, edx_12)
    int32_t* result_12 = result_3
    char const* const eax_37 = "{title}"
    char* const edi_2 = edi_1
    char const i_2
    
    do
        i_2 = *eax_37
        *(result_12 - "{title}" + eax_37) = i_2
        eax_37 = &eax_37[1]
    while (i_2 != 0)
    var_c_5.b = 3
    int32_t* result_1
    sub_4c48a0(&result_3, &result_1, &var_1b0)
    var_c_5.b = 5
    
    if (result_12 != 0 && *result_12 != 0)
        if (result_12[-4] != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp0_1 = result_12[-3]
        result_12[-3] -= 1
        
        if (temp0_1 == 1)
            void* edi_3 = data_26a44e4
            int32_t esi_12 = result_12[-1] + 0x10
            
            if (edi_3 == 0)
                sub_4f4250()
                edi_3 = data_26a44e4
            
            int32_t edx_17 = 0
            int32_t* edi_4
            
            while (true)
                if (esi_12 s<= 1 << (edx_17.b + 4))
                    edi_4 = edi_3 + edx_17 * 0x14
                    break
                
                edx_17 += 1
                
                if (edx_17 s>= 7)
                    edi_4 = edi_3 + 0x8c
                    break
            
            sub_4f4430(&result_12[-4], edi_4, esi_12)
            edi_2 = var_1b0
    
    var_c_5.b = 6
    
    if (edi_2 != 0 && *edi_2 != 0)
        if (*(edi_2 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp1_1 = *(edi_2 - 0xc)
        *(edi_2 - 0xc) -= 1
        
        if (temp1_1 == 1)
            void* edi_5 = data_26a44e4
            int32_t esi_14 = *(edi_2 - 4) + 0x10
            
            if (edi_5 == 0)
                sub_4f4250()
                edi_5 = data_26a44e4
            
            int32_t edx_18 = 0
            int32_t* edi_6
            
            while (true)
                if (esi_14 s<= 1 << (edx_18.b + 4))
                    edi_6 = edi_5 + edx_18 * 0x14
                    break
                
                edx_18 += 1
                
                if (edx_18 s>= 7)
                    edi_6 = edi_5 + 0x8c
                    break
            
            sub_4f4430(&edi_2[0xfffffff0], edi_6, esi_14)
    
    int32_t* result_2 = result_1
    result_3 = &data_83f3d3
    
    if (result_2 != 0)
        result_3 = result_2
    
    int32_t* ecx_33 = data_316660c
    int32_t eax_44 = data_3166604
    int32_t var_1d0_11 = arg3
    int32_t* var_1d4_12 = ecx_33
    var_1bc = ecx_33
    int32_t eax_45
    char edx_20
    eax_45, edx_20 = sub_4f62d0(eax_44, fconvert.s(float.t(1)), arg3)
    __builtin_memcpy(&var_188, eax_45, 0x40)
    int32_t* esi_16 = var_1bc
    
    if (esi_16[1] != 0x1e)
        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*esi_16 == 0)
        sub_520800(eax_45, edx_20, esi_16, 0)
        
        if (*esi_16 == 0)
            sub_509540(esi_16)
    
    sub_4f5010(&var_188, eax_44 * 0x118 + ***esi_16, result_3, 1)
    void* edi_11 = ecx_1 * 0x128
    bool cond:2 = (*(edi_11 + 0x2691cb8) & 2) == 0
    var_1b0 = edi_11
    
    if (not(cond:2))
        if ((data_3166610.b & 8) == 0)
            data_3166610 |= 8
            var_c_5.b = 7
            data_3166600 = sub_4f5220(data_316660c, "world_halo")
            var_c_5.b = 6
        
        int32_t esi_18 = *(data_27e7a40 + 0x74)
        int32_t eax_50 = 1
        
        if (arg7 == esi_18)
            eax_50 = *(sub_46b2b0(esi_18) + 0x1f84)
        
        int32_t ecx_38 = sx.d(*(edi_11 + 0x2691cb6))
        
        if (ecx_38 == 1 && eax_50 != 0)
            ecx_38 = eax_50
        
        if (ecx_38 - 1 u> 4)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1a19, "GetHaloTexture")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (ecx_38)
            case 1
                var_1a8 = data_307bd2c
            case 2
                var_1a8 = data_307bd20
            case 3
                var_1a8 = data_307bd24
            case 4
                var_1a8 = data_307bd28
            case 5
                var_1a8 = data_307bd30
        
        int32_t* ecx_40 = data_316660c
        int32_t eax_54 = data_3166600
        int32_t var_1d0_12 = arg3
        int32_t* var_1d4_16 = ecx_40
        var_1bc = ecx_40
        int32_t eax_55
        char edx_26
        eax_55, edx_26 = sub_4f62d0(eax_54, fconvert.s(float.t(1)), arg3)
        __builtin_memcpy(&var_188, eax_55, 0x40)
        int32_t* esi_20 = var_1bc
        
        if (esi_20[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_20 == 0)
            sub_520800(eax_55, edx_26, esi_20, 0)
            
            if (*esi_20 == 0)
                sub_509540(esi_20)
        
        void* eax_61 = eax_54 * 0x118 + ***esi_20
        sub_4f67d0(eax_61, nullptr, var_1a8, eax_61, &data_be1ae0, &var_188, nullptr, nullptr)
        edi_11 = var_1b0
    
    if (*(edi_11 + 0x2691cae) == 1)
        int32_t* eax_63 = sub_427a90(edi_11 + &data_2691ca8)
        bool cond:3_1 = (data_3166610.b & 0x10) != 0
        var_1a4 = eax_63
        int32_t eax_64
        
        if (cond:3_1)
            eax_64 = data_31665fc
        else
            data_3166610 |= 0x10
            var_c_5.b = 8
            eax_64 = sub_4f5220(data_316660c, "cost_world_circle")
            data_31665fc = eax_64
            var_c_5.b = 6
        
        int32_t* ecx_44 = data_316660c
        int32_t var_1d0_13 = arg3
        int32_t* var_1d4_19 = ecx_44
        var_1bc = ecx_44
        int32_t eax_66
        char edx_29
        eax_66, edx_29 = sub_4f62d0(eax_64, fconvert.s(float.t(1)), arg3)
        __builtin_memcpy(&var_188, eax_66, 0x40)
        int32_t* esi_22 = var_1bc
        
        if (esi_22[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_22 == 0)
            sub_520800(eax_66, edx_29, esi_22, 0)
            
            if (*esi_22 == 0)
                sub_509540(esi_22)
        
        void* eax_72 = eax_64 * 0x118 + ***esi_22
        sub_4f67d0(eax_72, nullptr, var_1a4, eax_72, &data_be1ae0, &var_188, nullptr, nullptr)
        edi_11 = var_1b0
    
    if (*(edi_11 + 0x2691cae) == 2)
        int32_t eax_73
        
        if ((data_3166610.b & 0x20) != 0)
            eax_73 = data_31665f8
        else
            data_3166610 |= 0x20
            var_c_5.b = 9
            eax_73 = sub_4f5220(data_316660c, "cost_dev_diamond")
            data_31665f8 = eax_73
            var_c_5.b = 6
        
        int32_t* ecx_48 = data_316660c
        int32_t var_1d0_14 = arg3
        int32_t* var_1d4_22 = ecx_48
        var_1bc = ecx_48
        int32_t eax_74
        char edx_32
        eax_74, edx_32 = sub_4f62d0(eax_73, fconvert.s(float.t(1)), arg3)
        __builtin_memcpy(&var_188, eax_74, 0x40)
        int32_t* esi_24 = var_1bc
        
        if (esi_24[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_24 == 0)
            sub_520800(eax_74, edx_32, esi_24, 0)
            
            if (*esi_24 == 0)
                sub_509540(esi_24)
        
        void* eax_80 = eax_73 * 0x118 + ***esi_24
        sub_4f67d0(eax_80, nullptr, *(eax_80 + 0x68), eax_80, &data_be1ae0, &var_188, nullptr, nullptr)
        edi_11 = var_1b0
    
    if ((*(edi_11 + 0x2691cb8) & 0x800) != 0)
        int32_t eax_82
        
        if ((data_3166610.b & 0x40) != 0)
            eax_82 = data_31665f4
        else
            data_3166610 |= 0x40
            var_c_5.b = 0xa
            eax_82 = sub_4f5220(data_316660c, "cost_world_chromo")
            data_31665f4 = eax_82
            var_c_5.b = 6
        
        int32_t* ecx_52 = data_316660c
        int32_t var_1d0_15 = arg3
        int32_t* var_1d4_25 = ecx_52
        var_1bc = ecx_52
        int32_t eax_83
        char edx_34
        eax_83, edx_34 = sub_4f62d0(eax_82, fconvert.s(float.t(1)), arg3)
        __builtin_memcpy(&var_188, eax_83, 0x40)
        int32_t* esi_26 = var_1bc
        
        if (esi_26[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_26 == 0)
            sub_520800(eax_83, edx_34, esi_26, 0)
            
            if (*esi_26 == 0)
                sub_509540(esi_26)
        
        void* eax_89 = eax_82 * 0x118 + ***esi_26
        sub_4f67d0(eax_89, nullptr, *(eax_89 + 0x68), eax_89, &data_be1ae0, &var_188, nullptr, nullptr)
        edi_11 = var_1b0
    
    char ebx_3
    
    if ((data_3166610.b & 0x80) != 0)
        ebx_3 = 6
    else
        data_3166610 |= 0x80
        var_c_5.b = 0xb
        ebx_3 = 6
        data_31665f0 = sub_4f5220(data_316660c, "moon_novelty")
        var_c_5.b = 6
    
    if ((data_3166610 & 0x100) == 0)
        data_3166610 |= 0x100
        var_c_5.b = 0xc
        data_31665ec = sub_4f5220(data_316660c, "moon_rare")
        var_c_5.b = ebx_3
    
    if ((data_3166610 & 0x200) == 0)
        data_3166610 |= 0x200
        var_c_5.b = 0xd
        data_31665e8 = sub_4f5220(data_316660c, "moon_genes")
        var_c_5.b = ebx_3
    
    if ((data_3166610 & 0x400) == 0)
        data_3166610 |= 0x400
        var_c_5.b = 0xe
        data_31665e4 = sub_4f5220(data_316660c, "moon_novelty_mil")
        var_c_5.b = ebx_3
    
    if ((data_3166610 & 0x800) == 0)
        data_3166610 |= 0x800
        var_c_5.b = 0xf
        data_31665e0 = sub_4f5220(data_316660c, "moon_rare_mil")
        var_c_5.b = ebx_3
    
    int32_t eax_97
    
    if ((data_3166610 & 0x1000) != 0)
        eax_97 = data_31665dc
    else
        data_3166610 |= 0x1000
        var_c_5.b = 0x10
        eax_97 = sub_4f5220(data_316660c, "moon_genes_mil")
        data_31665dc = eax_97
        var_c_5.b = ebx_3
    
    float var_1d4_34
    int32_t edx_37
    
    if (ecx_1 != 0xa2)
        int32_t ecx_58 = sx.d(*(edi_11 + 0x2691cb6))
        
        if (ecx_58 == 2)
            eax_97 = data_31665e4
            
            if ((*(edi_11 + 0x2691cb8) & 1) != 0)
                goto label_42a2d9
            
            goto label_42a2d4
        
        if (ecx_58 == 3)
            bool cond:5_1 = (*(edi_11 + 0x2691cb8) & 1) == 0
            edx_37 = arg3
            int32_t* ecx_63 = data_316660c
            int32_t var_1d0_17 = edx_37
            int32_t* var_1d4_35 = ecx_63
            var_1d4_34 = fconvert.s(float.t(1))
            var_1bc = ecx_63
            
            if (cond:5_1)
                eax_97 = data_31665ec
            else
                eax_97 = data_31665e0
            
            goto label_42a2f9
        
        if (ecx_58 == 4)
            bool cond:6_1 = (*(edi_11 + 0x2691cb8) & 1) != 0
            edx_37 = arg3
            int32_t* ecx_62 = data_316660c
            int32_t var_1d0_16 = edx_37
            int32_t* var_1d4_33 = ecx_62
            var_1d4_34 = fconvert.s(float.t(1))
            var_1bc = ecx_62
            
            if (not(cond:6_1))
                eax_97 = data_31665e8
            
            goto label_42a2f9
    else
        int32_t eax_100 = *(sub_46b2b0(*(data_27e7a40 + 0x74)) + 0x1f84)
        
        if (eax_100 == 2)
        label_42a2d4:
            eax_97 = data_31665f0
        label_42a2d9:
            edx_37 = arg3
            int32_t* ecx_64 = data_316660c
            int32_t var_1d0_18 = edx_37
            int32_t* var_1d4_36 = ecx_64
            var_1d4_34 = fconvert.s(float.t(1))
            var_1bc = ecx_64
        label_42a2f9:
            __builtin_memcpy(&var_188, sub_4f62d0(eax_97, var_1d4_34, edx_37), 0x40)
            void* ecx_67 = eax_97 * 0x118 + *sub_4f4890(var_1bc)
            sub_4f67d0(ecx_67, nullptr, *(ecx_67 + 0x68), ecx_67, &data_be1ae0, &var_188, nullptr, 
                nullptr)
            edi_11 = var_1b0
            ebx_3 = 6
        else
            if (eax_100 == 3)
                eax_97 = data_31665ec
                goto label_42a2d9
            
            if (eax_100 == 4)
                eax_97 = data_31665e8
                goto label_42a2d9
    
    if ((*(edi_11 + 0x2691cb8) & 0x40) != 0)
        if (*(edi_11 + 0x2691cae) != 1)
            void* eax_116 = *(data_27e7a40 + 0x548)
            
            if (eax_116 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(*(eax_116 + 0x45844) + 0x45a) == 3)
                int32_t eax_120
                
                if ((data_3166610 & 0x4000) != 0)
                    eax_120 = data_31665d4
                else
                    data_3166610 |= 0x4000
                    var_c_5.b = 0x12
                    eax_120 = sub_4f5220(data_316660c, "cost_dev_rebel")
                    data_31665d4 = eax_120
                    var_c_5.b = ebx_3
                
                var_1a4 = data_307ba24
                int32_t* ecx_75 = data_316660c
                int32_t var_1d0_20 = arg3
                int32_t* var_1d4_41 = ecx_75
                var_1bc = ecx_75
                __builtin_memcpy(&var_188, sub_4f62d0(eax_120, fconvert.s(float.t(1)), arg3), 0x40)
                void* ecx_78 = eax_120 * 0x118 + *sub_4f4890(var_1bc)
                sub_4f67d0(&var_188, nullptr, var_1a4, ecx_78, &data_be1ae0, &var_188, nullptr, nullptr)
                edi_11 = var_1b0
                ebx_3 = 6
        else
            int32_t eax_108
            
            if ((data_3166610 & 0x2000) != 0)
                eax_108 = data_31665d8
            else
                data_3166610 |= 0x2000
                var_c_5.b = 0x11
                eax_108 = sub_4f5220(data_316660c, "cost_world_rebel")
                data_31665d8 = eax_108
                var_c_5.b = ebx_3
            
            bool cond:8_1 = (*(edi_11 + 0x2691cb8) & 1) != 0
            result_3 = data_307ba20
            
            if (not(cond:8_1))
                result_3 = data_307ba28
            
            int32_t* ecx_70 = data_316660c
            int32_t var_1d0_19 = arg3
            int32_t* var_1d4_38 = ecx_70
            var_1bc = ecx_70
            int32_t eax_109
            char edx_40
            eax_109, edx_40 = sub_4f62d0(eax_108, fconvert.s(float.t(1)), arg3)
            __builtin_memcpy(&var_188, eax_109, 0x40)
            int32_t* esi_31 = var_1bc
            
            if (esi_31[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_31 == 0)
                sub_520800(eax_109, edx_40, esi_31, 0)
                
                if (*esi_31 == 0)
                    sub_509540(esi_31)
            
            void* eax_115 = eax_108 * 0x118 + ***esi_31
            sub_4f67d0(eax_115, nullptr, result_3, eax_115, &data_be1ae0, &var_188, nullptr, nullptr)
            edi_11 = var_1b0
            ebx_3 = 6
    
    if ((data_3166610 & 0x8000) == 0)
        data_3166610 |= 0x8000
        var_c_5.b = 0x13
        data_31665d0 = sub_4f5220(data_316660c, "cost_world_cost_reg")
        var_c_5.b = ebx_3
    
    if ((data_3166610 & 0x10000) == 0)
        data_3166610 |= 0x10000
        var_c_5.b = 0x14
        data_31665cc = sub_4f5220(data_316660c, "cost_world_cost_mil")
        var_c_5.b = ebx_3
    
    if ((data_3166610 & 0x20000) == 0)
        data_3166610 |= 0x20000
        var_c_5.b = 0x15
        data_31665c8 = sub_4f5220(data_316660c, "cost_world_cost_prod")
        var_c_5.b = ebx_3
    
    int32_t edx_44
    
    if ((*(edi_11 + 0x2691cb8) & 1) == 0)
        if (*(edi_11 + 0x2691cae) != 2 && (*(edi_11 + 0x2691cb8) & 2) == 0)
            edx_44 = data_31665c8
        
        if (*(edi_11 + 0x2691cae) == 2 || (*(edi_11 + 0x2691cb8) & 2) != 0
                || *(edi_11 + 0x2691cb6) == 0)
            edx_44 = data_31665d0
    else
        edx_44 = data_31665cc
    
    sub_4f5120(data_316660c, edx_44, arg3, sx.d(*(edi_11 + 0x2691caf)))
    
    if ((*(edi_11 + 0x2691cb8) & 0x1000) != 0)
        void* eax_130 = *(data_27e7a40 + 0x548)
        
        if (eax_130 == 0)
            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                "GetGame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(*(eax_130 + 0x45844) + 0x45a) == 3)
            var_1a4 = data_307bd14
            int32_t eax_134
            
            if ((data_3166610 & 0x40000) != 0)
                eax_134 = data_31665c4
            else
                data_3166610 |= 0x40000
                var_c_5.b = 0x16
                eax_134 = sub_4f5220(data_316660c, "prestige")
                data_31665c4 = eax_134
                var_c_5.b = ebx_3
            
            int32_t* ecx_83 = data_316660c
            int32_t var_1d0_22 = arg3
            int32_t* var_1d4_48 = ecx_83
            var_1bc = ecx_83
            int32_t eax_135
            char edx_47
            eax_135, edx_47 = sub_4f62d0(eax_134, fconvert.s(float.t(1)), arg3)
            __builtin_memcpy(&var_188, eax_135, 0x40)
            int32_t* esi_35 = var_1bc
            
            if (esi_35[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_35 == 0)
                sub_520800(eax_135, edx_47, esi_35, 0)
                
                if (*esi_35 == 0)
                    sub_509540(esi_35)
            
            void* eax_141 = eax_134 * 0x118 + ***esi_35
            sub_4f67d0(eax_141, nullptr, var_1a4, eax_141, &data_be1ae0, &var_188, nullptr, nullptr)
            edi_11 = var_1b0
            ebx_3 = 6
    
    int32_t result_7 = sx.d(*(edi_11 + 0x2691cb0))
    result_3 = result_7
    
    if (result_7 s>= 0)
        if ((data_3166610 & 0x200000) == 0)
            data_3166610 |= 0x200000
            var_c_5.b = 0x19
            data_31665b8 = sub_4f5220(data_316660c, "cost_world_vp_hex")
            var_c_5.b = ebx_3
        
        if ((data_3166610 & &__dos_header) == 0)
            data_3166610 |= &__dos_header
            var_c_5.b = 0x1a
            data_31665b4 = sub_4f5220(data_316660c, "cost_world_vp_cost")
            var_c_5.b = ebx_3
        
        int32_t* ecx_93 = data_316660c
        int32_t eax_157 = data_31665b8
        int32_t var_1d0_25 = arg3
        int32_t* var_1d4_57 = ecx_93
        var_1bc = ecx_93
        int32_t eax_158
        char edx_54
        eax_158, edx_54 = sub_4f62d0(eax_157, fconvert.s(float.t(1)), arg3)
        __builtin_memcpy(&var_188, eax_158, 0x40)
        int32_t* esi_39 = var_1bc
        
        if (esi_39[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_39 == 0)
            sub_520800(eax_158, edx_54, esi_39, 0)
            
            if (*esi_39 == 0)
                sub_509540(esi_39)
        
        void* eax_164 = eax_157 * 0x118 + ***esi_39
        sub_4f67d0(eax_164, nullptr, *(eax_164 + 0x68), eax_164, &data_be1ae0, &var_188, nullptr, 
            nullptr)
        int32_t eax_166 = data_31665b4
        
        if (*(var_1b0 + 0x2691d38) s<= 0)
            sub_4f5120(data_316660c, eax_166, arg3, result_3)
        else
            int32_t* ecx_97 = data_316660c
            int32_t var_1d0_26 = arg3
            int32_t* var_1d4_59 = ecx_97
            var_1bc = ecx_97
            int32_t eax_167
            char edx_56
            eax_167, edx_56 = sub_4f62d0(eax_166, fconvert.s(float.t(1)), arg3)
            __builtin_memcpy(&var_188, eax_167, 0x40)
            int32_t* esi_41 = var_1bc
            
            if (esi_41[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_41 == 0)
                sub_520800(eax_167, edx_56, esi_41, 0)
                
                if (*esi_41 == 0)
                    sub_509540(esi_41)
            
            sub_4f5010(&var_188, eax_166 * 0x118 + ***esi_41, &data_85ce4c, 0)
    else
        if ((data_3166610 & 0x80000) == 0)
            data_3166610 |= 0x80000
            var_c_5.b = 0x17
            data_31665c0 = sub_4f5220(data_316660c, "cost_world_vp_hex_negative")
            var_c_5.b = ebx_3
        
        if ((data_3166610 & 0x100000) == 0)
            data_3166610 |= 0x100000
            var_c_5.b = 0x18
            data_31665bc = sub_4f5220(data_316660c, "cost_world_vp_cost_negative")
            var_c_5.b = ebx_3
        
        int32_t* ecx_87 = data_316660c
        int32_t eax_145 = data_31665c0
        int32_t var_1d0_23 = arg3
        int32_t* var_1d4_52 = ecx_87
        var_1bc = ecx_87
        int32_t eax_146
        char edx_50
        eax_146, edx_50 = sub_4f62d0(eax_145, fconvert.s(float.t(1)), arg3)
        __builtin_memcpy(&var_188, eax_146, 0x40)
        int32_t* esi_37 = var_1bc
        
        if (esi_37[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_37 == 0)
            sub_520800(eax_146, edx_50, esi_37, 0)
            
            if (*esi_37 == 0)
                sub_509540(esi_37)
        
        void* eax_152 = eax_145 * 0x118 + ***esi_37
        sub_4f67d0(eax_152, nullptr, *(eax_152 + 0x68), eax_152, &data_be1ae0, &var_188, nullptr, 
            nullptr)
        sub_4f5120(data_316660c, data_31665bc, arg3, result_3)
    
    int32_t* (__fastcall* var_1d0_27)(int32_t* arg1) = sub_4c43d0
    char* result_15
    sub_5a7116(&result_15, 4, 4, sub_4c42f0)
    var_c_5.b = 0x1b
    sub_428e00(&result_15, &var_1bc, ecx_1)
    char* const result_16 = result_15
    
    if (result_16 == 0)
        result_16 = &data_83f3d3
    
    char* const ecx_102 = &data_83f3d3
    char* eax_173
    
    while (true)
        char edx_57 = *result_16
        char temp8_1 = *ecx_102
        bool c_1 = edx_57 u< temp8_1
        
        if (edx_57 == temp8_1)
            if (edx_57 == 0)
                eax_173 = nullptr
                break
            
            edx_57 = result_16[1]
            char temp11_1 = ecx_102[1]
            c_1 = edx_57 u< temp11_1
            
            if (edx_57 == temp11_1)
                result_16 = &result_16[2]
                ecx_102 = &ecx_102[2]
                
                if (edx_57 != 0)
                    continue
                
                eax_173 = nullptr
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        eax_173 = sbb.d(sbb.d(result_16, result_16, c_1), 0xffffffff, c_2)
        break
    
    if (eax_173 != 0)
        int32_t edx_59 = sub_427b80(var_1bc, &result_3)
        int32_t* ecx_103 = data_316660c
        int32_t var_1d0_30 = arg3
        int32_t* result_8 = result_3
        int32_t* var_1d4_62 = ecx_103
        var_1bc = ecx_103
        int32_t eax_175
        char edx_60
        eax_175, edx_60 = sub_4f62d0(result_8, fconvert.s(fconvert.t(arg4)), edx_59)
        __builtin_memcpy(&var_188, eax_175, 0x40)
        int32_t* esi_45 = var_1bc
        
        if (esi_45[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_45 == 0)
            sub_520800(eax_175, edx_60, esi_45, 0)
            
            if (*esi_45 == 0)
                sub_509540(esi_45)
        
        void* eax_180 = result_3 * 0x118 + ***esi_45
        sub_4f67d0(eax_180, nullptr, *(eax_180 + 0x68), eax_180, &data_be1ae0, &var_188, nullptr, 
            nullptr)
        int32_t var_140
        
        if (var_140 != 0xffffffff)
            char* result_11 = result_15
            result_3 = &data_83f3d3
            
            if (result_11 != 0)
                result_3 = result_11
            
            int32_t* ecx_108 = data_316660c
            int32_t var_1d0_31 = arg3
            int32_t* var_1d4_64 = ecx_108
            var_1bc = ecx_108
            int32_t eax_182
            char edx_62
            eax_182, edx_62 = sub_4f62d0(var_140, fconvert.s(fconvert.t(arg4)), arg3)
            __builtin_memcpy(&var_188, eax_182, 0x40)
            int32_t* esi_47 = var_1bc
            
            if (esi_47[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_47 == 0)
                sub_520800(eax_182, edx_62, esi_47, 0)
                
                if (*esi_47 == 0)
                    sub_509540(esi_47)
            
            sub_4f5010(&var_188, var_140 * 0x118 + ***esi_47, result_3, 1)
        
        int32_t var_13c
        
        if (var_13c != 0xffffffff)
            result_3 = &data_83f3d3
            int32_t* result_4
            
            if (result_4 != 0)
                result_3 = result_4
            
            int32_t* ecx_113 = data_316660c
            int32_t var_1d0_32 = arg3
            int32_t* var_1d4_67 = ecx_113
            var_1bc = ecx_113
            int32_t eax_187
            char edx_64
            eax_187, edx_64 = sub_4f62d0(var_13c, fconvert.s(fconvert.t(arg4)), arg3)
            __builtin_memcpy(&var_188, eax_187, 0x40)
            int32_t* esi_50 = var_1bc
            
            if (esi_50[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_50 == 0)
                sub_520800(eax_187, edx_64, esi_50, 0)
                
                if (*esi_50 == 0)
                    sub_509540(esi_50)
            
            sub_4f5010(&var_188, var_13c * 0x118 + ***esi_50, result_3, 1)
        
        int32_t var_138
        
        if (var_138 != 0xffffffff)
            result_3 = &data_83f3d3
            int32_t* result_5
            
            if (result_5 != 0)
                result_3 = result_5
            
            int32_t* ecx_118 = data_316660c
            int32_t var_1d0_33 = arg3
            int32_t* var_1d4_70 = ecx_118
            var_1bc = ecx_118
            int32_t eax_192
            char edx_66
            eax_192, edx_66 = sub_4f62d0(var_138, fconvert.s(fconvert.t(arg4)), arg3)
            __builtin_memcpy(&var_188, eax_192, 0x40)
            int32_t* esi_53 = var_1bc
            
            if (esi_53[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_53 == 0)
                sub_520800(eax_192, edx_66, esi_53, 0)
                
                if (*esi_53 == 0)
                    sub_509540(esi_53)
            
            sub_4f5010(&var_188, var_138 * 0x118 + ***esi_53, result_3, 1)
        
        char* var_134
        
        if (var_134 != 0xffffffff)
            result_3 = &data_83f3d3
            int32_t* result_6
            
            if (result_6 != 0)
                result_3 = result_6
            
            int32_t* ecx_123 = data_316660c
            int32_t var_1d0_34 = arg3
            int32_t* var_1d4_73 = ecx_123
            var_1bc = ecx_123
            int32_t eax_196
            char edx_68
            eax_196, edx_68 = sub_4f62d0(var_134, fconvert.s(fconvert.t(arg4)), arg3)
            __builtin_memcpy(&var_188, eax_196, 0x40)
            int32_t* esi_56 = var_1bc
            
            if (esi_56[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_56 == 0)
                sub_520800(eax_196, edx_68, esi_56, 0)
                
                if (*esi_56 == 0)
                    sub_509540(esi_56)
            
            sub_4f5010(&var_188, var_134 * 0x118 + ***esi_56, result_3, 1)
    
    if (arg6 s> 0)
        if ((data_3166610 & &data_800000) == 0)
            data_3166610 |= &data_800000
            var_c_5.b = 0x1c
            data_31665b0 = sub_4f5220(data_307c104, "img_cardSaved")
            var_c_5.b = 0x1b
        
        if ((data_3166610 & 0x1000000) == 0)
            data_3166610 |= 0x1000000
            var_c_5.b = 0x1d
            data_31665ac = sub_4f5220(data_307c104, "txt_cardSavedCount")
            var_c_5.b = 0x1b
        
        int32_t* ecx_127 = data_307c104
        int32_t eax_203 = data_31665b0
        int32_t var_1d0_35 = arg3
        int32_t* var_1d4_78 = ecx_127
        var_1bc = ecx_127
        int32_t eax_204
        char edx_71
        eax_204, edx_71 = sub_4f62d0(eax_203, fconvert.s(fconvert.t(arg4)), arg3)
        __builtin_memcpy(&var_188, eax_204, 0x40)
        int32_t* esi_59 = var_1bc
        
        if (esi_59[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_59 == 0)
            sub_520800(eax_204, edx_71, esi_59, 0)
            
            if (*esi_59 == 0)
                sub_509540(esi_59)
        
        void* eax_210 = eax_203 * 0x118 + ***esi_59
        sub_4f67d0(eax_210, nullptr, *(eax_210 + 0x68), eax_210, &data_be1ae0, &var_188, nullptr, 
            nullptr)
        var_c_5.b = 0x1e
        char* eax_213 = *sub_4c4ab0(&var_1a4)
        char* var_194_1 = &data_83f3d3
        
        if (eax_213 != 0)
            var_194_1 = eax_213
        
        int32_t* ecx_131 = data_307c104
        int32_t eax_214 = data_31665ac
        int32_t var_1d0_36 = arg3
        int32_t* var_1d4_80 = ecx_131
        var_1bc = ecx_131
        int32_t eax_215
        char edx_73
        eax_215, edx_73 = sub_4f62d0(eax_214, fconvert.s(fconvert.t(arg4)), arg3)
        __builtin_memcpy(&var_188, eax_215, 0x40)
        int32_t* esi_62 = var_1bc
        
        if (esi_62[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_62 == 0)
            sub_520800(eax_215, edx_73, esi_62, 0)
            
            if (*esi_62 == 0)
                sub_509540(esi_62)
        
        sub_4f5010(&var_188, eax_214 * 0x118 + ***esi_62, var_194_1, 0)
        var_c_5.b = 0x1b
        int32_t* ebx_4 = var_1a4
        
        if (ebx_4 != 0 && *ebx_4 != 0)
            if (ebx_4[-4] != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp13_1 = ebx_4[-3]
            ebx_4[-3] -= 1
            
            if (temp13_1 == 1)
                int32_t esi_65 = ebx_4[-1] + 0x10
                sub_4f4430(&ebx_4[-4], sub_4f4380(esi_65), esi_65)
    
    if (arg5 != 0)
        long double x87_r6_21 = fconvert.t(arg4)
        long double x87_r5_1 = float.t(0)
        x87_r5_1 - x87_r6_21
        eax_173.w = (x87_r5_1 < x87_r6_21 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_21) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            int32_t* edx_74 = data_307cc88
            int32_t eax_223
            
            if ((data_3166610 & 0x2000000) != 0)
                eax_223 = data_31665a8
            else
                data_3166610 |= 0x2000000
                var_c_5.b = 0x1f
                eax_223 = sub_4f5220(data_307c104, "CardDisabled")
                data_31665a8 = eax_223
                var_c_5.b = 0x1b
            
            var_1a0 = 0x11
            int32_t* ecx_135 = data_307c104
            int32_t var_1d0_38 = arg3
            int32_t* var_1d4_84 = ecx_135
            var_1bc = ecx_135
            int32_t eax_224
            char edx_76
            eax_224, edx_76 = sub_4f62d0(eax_223, fconvert.s(float.t(1)), arg3)
            __builtin_memcpy(&var_188, eax_224, 0x40)
            int32_t* esi_67 = var_1bc
            
            if (esi_67[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_67 == 0)
                sub_520800(eax_224, edx_76, esi_67, 0)
                
                if (*esi_67 == 0)
                    sub_509540(esi_67)
            
            void* eax_230 = eax_223 * 0x118 + ***esi_67
            sub_4f67d0(eax_230, &var_1a0, edx_74, eax_230, &data_be1ae0, &var_188, nullptr, nullptr)
    
    var_c_5.b = 6
    sub_5a71d9(&result_15, 4, 4, sub_4c43d0)
    int32_t var_c_6 = 0xffffffff
    int32_t* result = result_1
    
    if (result != 0 && *result != 0)
        if (result[-4] != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp12_1 = result[-3]
        result[-3] -= 1
        
        if (temp12_1 == 1)
            void* edx_78 = data_26a44e4
            int32_t esi_69 = result[-1] + 0x10
            
            if (edx_78 == 0)
                sub_4f4250()
                edx_78 = data_26a44e4
            
            int32_t eax_232 = 0
            int32_t* edi_33
            
            while (true)
                if (esi_69 s<= 1 << (eax_232.b + 4))
                    edi_33 = edx_78 + eax_232 * 0x14
                    break
                
                eax_232 += 1
                
                if (eax_232 s>= 7)
                    edi_33 = edx_78 + 0x8c
                    break
            
            result = sub_4f4430(&result[-4], edi_33, esi_69)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_1bc)
    return result
}

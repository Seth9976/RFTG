// 函数名称: sub_459c30
// 虚拟地址: 0x459c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_459c30()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697bb3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char** var_d4
    int32_t eax_2 = __security_cookie ^ &var_d4
    int32_t __saved_edi
    int32_t var_e4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = *(data_27e7a40 + 0x548)
    void var_70
    int32_t eax_6
    int80_t result
    result, eax_6 = sub_40a930(&var_70)
    void var_b0
    __builtin_memcpy(&var_b0, eax_6, 0x40)
    int32_t* esi_1 = data_307c798
    
    if ((data_3166528 & 1) == 0)
        data_3166528.d |= 1
        int32_t var_c_1 = 0
        data_3166524 = sub_4f5220(esi_1, "TxtPlayer")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3166528 & 2) == 0)
        data_3166528.d |= 2
        int32_t var_c_3 = 1
        data_3166520 = sub_4f5220(esi_1, "AvatarPic")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3166528 & 4) == 0)
        data_3166528.d |= 4
        int32_t var_c_5 = 2
        data_316651c = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_6 = 0xffffffff
    
    void* eax_11 = *(data_27e7a40 + 0x548)
    char const* const var_f0
    
    if (eax_11 == 0)
        char const* const var_e8_4 = "GetGame"
        int32_t var_ec_4 = 0xcc
        var_f0 = "..\code\RFTGClient.cpp"
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, var_f0, var_ec_4, var_e8_4)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx_2 = *(eax_11 + 0x45844)
    int32_t ebx = sx.d(*(ecx_2 + 0x458))
    int32_t eax_13 = 0
    int32_t var_2c[0x4]
    
    if (ebx s> 0)
        do
            var_2c[eax_13] = eax_13
            eax_13 += 1
        while (eax_13 s< ebx)
    
    int32_t edi_2 = data_316651c
    int32_t eax_14
    int32_t ecx_3
    eax_14, ecx_3 = sub_4fc3d0(&data_be1cb8, *(ecx + 4))
    
    if (edi_2 s>= 0x100)
        char const* const var_e8_5 = "UIStateElementGet"
        int32_t var_ec_5 = 0x518
        var_f0 = "UIDef.cpp"
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, var_f0, var_ec_5, var_e8_5)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = *(eax_14 + (edi_2 << 2) + 0x30)
    int128_t* eax_16
    
    if (edx_1 != 0)
        eax_16 = sub_4fc1e0(ecx_3, edx_1)
    else
        eax_16 = sub_4fc0d0()
        *(eax_16 + 4) = &data_83f3d3
        *(eax_14 + (edi_2 << 2) + 0x30) = *(eax_16 + 0x1bc)
    
    eax_16[0x12].d = *eax_16 + 1
    *(eax_16 + 0x124) = 1
    *(eax_16 + 0x128) = ebx
    *(eax_16 + 0x12c) = 1
    eax_16[0x13].d = ebx
    int32_t var_cc = 0
    
    if (*(ecx_2 + 0x458) s> 0)
        while (true)
            int32_t edx_5 = *(ecx + 4)
            int32_t esi_4 = data_316651c
            int32_t var_b8 = 0
            int32_t var_b4_1 = var_cc
            
            if (edx_5 == 0)
                char const* const var_e8_10 = "DataArray<struct UIState>::DataArrayGet"
                int32_t var_ec_7 = 0x45
                var_f0 = "c:\ax2010\engine\DataArray.h"
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, var_f0, var_ec_7, var_e8_10)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t eax_19 = zx.d(edx_5.w)
            
            if (eax_19 u< data_be1cbc)
                void* edi_3 = data_be1cb8
                int32_t ecx_7 = eax_19 * 0x438
                
                if (*(ecx_7 + edi_3 + 0x434) == edx_5)
                    void* ebx_1 = edi_3 + eax_19 * 0x438
                    
                    if (esi_4 s>= 0x100)
                        char const* const var_e8_12 = "UIStateElementGet"
                        int32_t var_ec_9 = 0x518
                        var_f0 = "UIDef.cpp"
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, var_f0, var_ec_9, var_e8_12)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_6 = *(ebx_1 + (esi_4 << 2) + 0x30)
                    int128_t* eax_21
                    
                    if (edx_6 != 0)
                        eax_21 = sub_4fc1e0(ecx_7, edx_6)
                    else
                        eax_21, edx_6 = sub_4fc0d0()
                        *(eax_21 + 4) = &data_83f3d3
                        *(ebx_1 + (esi_4 << 2) + 0x30) = *(eax_21 + 0x1bc)
                    
                    char* ebx_2 = *(ebx_1 + 4)
                    
                    if (*(ebx_2 + 4) != 0x1e)
                        char const* const var_e8_13 = "UIDefGet"
                        int32_t var_ec_10 = 0xfd
                        var_f0 = "UIDef.cpp"
                        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, var_f0, var_ec_10, 
                            var_e8_13)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*ebx_2 == 0)
                        sub_520800(eax_21, edx_6.b, ebx_2, 0)
                        
                        if (*ebx_2 == 0)
                            sub_509540(ebx_2)
                    
                    int32_t edi_5 = *(sub_4f7720(&var_b8, esi_4 * 0x118 + ***ebx_2, eax_21) + 0x434)
                    int32_t ebx_3 = var_2c[var_cc]
                    int32_t eax_27
                    char** edx_8
                    eax_27, edx_8 = sub_424340()
                    
                    switch (eax_27)
                        case 0, 1, 4
                            edx_8 = data_307c018
                            var_d4 = edx_8
                        case 5
                            var_d4 = data_307c02c
                        case 6
                            var_d4 = data_307c030
                        case 7
                            edx_8 = data_307c034
                            var_d4 = edx_8
                        case 8
                            var_d4 = data_307c000
                        case 9
                            var_d4 = data_307bff8
                        case 0xa
                            edx_8 = data_307bffc
                            var_d4 = edx_8
                        case 0xb
                            var_d4 = data_307c004
                        case 0xc
                            var_d4 = data_307c038
                        case 0xd
                            edx_8 = data_307c030
                            var_d4 = edx_8
                        case 0xe
                            var_d4 = data_307c014
                        case 0xf
                            var_d4 = data_307c008
                        case 0x10
                            edx_8 = data_307c010
                            var_d4 = edx_8
                        case 0x11
                            var_d4 = data_307c00c
                        default
                            var_d4 = data_307c018
                    
                    char** var_bc
                    int32_t* var_e8_7 = &var_bc
                    sub_424120(ebx_3, edx_8)
                    int32_t var_c_7 = 3
                    
                    if (edi_5 == 0)
                        char const* const var_e8_14 = "DataArray<struct UIState>::DataArrayGet"
                        int32_t var_ec_11 = 0x45
                        var_f0 = "c:\ax2010\engine\DataArray.h"
                        sub_4c5870("id != DATAID_NULL", &data_83f3d3, var_f0, var_ec_11, var_e8_14)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint32_t esi_8 = zx.d(edi_5.w)
                    
                    if (esi_8 u< data_be1cbc)
                        int32_t ecx_13 = data_be1cb8
                        
                        if (*(esi_8 * 0x438 + ecx_13 + 0x434) == edi_5)
                            int32_t eax_36 = data_3166520
                            int32_t ebx_5 = esi_8 * 0x438
                            int32_t ebx_6 = ebx_5 + ecx_13
                            
                            if (eax_36 s>= 0x100)
                                char const* const var_e8_16 = "UIStateElementGet"
                                int32_t var_ec_13 = 0x518
                                var_f0 = "UIDef.cpp"
                                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, var_f0, var_ec_13, 
                                    var_e8_16)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t edx_9 = *(ebx_6 + (eax_36 << 2) + 0x30)
                            int128_t* eax_37
                            
                            if (edx_9 != 0)
                                eax_37 = sub_4fc1e0(ecx_13, edx_9)
                            else
                                eax_37 = sub_4fc0d0()
                                *(eax_37 + 4) = &data_83f3d3
                                *(ebx_6 + ((eax_36 + 0xc) << 2)) = *(eax_37 + 0x1bc)
                            
                            char** edx_10 = var_d4
                            char** edi_7 = var_bc
                            *(eax_37 + 0x94) = *eax_37 + 1
                            *(eax_37 + 0x98) = edx_10
                            var_d4 = &data_83f3d3
                            
                            if (edi_7 != 0)
                                var_d4 = edi_7
                            
                            if (esi_8 u< data_be1cbc)
                                int32_t eax_38 = data_be1cb8
                                
                                if (*(esi_8 * 0x438 + eax_38 + 0x434) == edi_5)
                                    int32_t esi_10 = data_3166524
                                    int32_t ebx_8 = ebx_5 + eax_38
                                    
                                    if (esi_10 s>= 0x100)
                                        char const* const var_e8_18 = "UIStateElementGet"
                                        int32_t var_ec_15 = 0x518
                                        var_f0 = "UIDef.cpp"
                                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, var_f0, 
                                            var_ec_15, var_e8_18)
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t edx_11 = *(ebx_8 + (esi_10 << 2) + 0x30)
                                    int128_t* eax_39
                                    
                                    if (edx_11 != 0)
                                        eax_39 = sub_4fc1e0(edi_5, edx_11)
                                    else
                                        eax_39 = sub_4fc0d0()
                                        *(eax_39 + 4) = &data_83f3d3
                                        *(ebx_8 + (esi_10 << 2) + 0x30) = *(eax_39 + 0x1bc)
                                    
                                    *(eax_39 + 0x64) = *eax_39 + 1
                                    sub_4c4590(var_d4)
                                    *(eax_39 + 0x151) = 1
                                    int32_t var_c_8 = 0xffffffff
                                    
                                    if (edi_7 != 0 && *edi_7 != 0)
                                        if (edi_7[-4] != 0xfafafafa)
                                            char const* const var_e8_19 =
                                                "XStringMagicDataStructFromCharPtr"
                                            int32_t var_ec_16 = 0x20
                                            var_f0 = "xString.cpp"
                                            sub_4c5870(
                                                "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                                &data_83f3d3, var_f0, var_ec_16, var_e8_19)
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t temp2_1 = edi_7[-3]
                                        edi_7[-3] = &edi_7[-3][0xffffffff]
                                        
                                        if (temp2_1 == 1)
                                            void* edi_8 = data_26a44e4
                                            int32_t ebx_11 = &edi_7[-1][0x10]
                                            
                                            if (edi_8 == 0)
                                                sub_4f4250()
                                                edi_8 = data_26a44e4
                                            
                                            int32_t edx_12 = 0
                                            void** edi_10
                                            
                                            while (true)
                                                if (ebx_11 s<= 1 << (edx_12.b + 4))
                                                    edi_10 = edi_8 + edx_12 * 0x14
                                                    break
                                                
                                                edx_12 += 1
                                                
                                                if (edx_12 s>= 7)
                                                    edi_10 = edi_8 + 0x8c
                                                    break
                                            
                                            edi_10[3] -= 1
                                            
                                            if (ebx_11 s<= 0x400 || edi_10[4] != 0xffffffff)
                                                int32_t eax_44 = edi_10[4]
                                                int32_t* ebx_12 = edi_10[1]
                                                char** edx_14 = edi_10[2] * eax_44
                                                var_d4 = edx_14
                                                
                                                if (ebx_12 == 0)
                                                label_45a470:
                                                    char const* const var_e8_20 = "XAllocator::Free"
                                                    int32_t var_ec_17 = 0x81
                                                    var_f0 = "c:\ax2010\engine\xAlloc.h"
                                                    sub_4c5870("IsPointerFromAllocator(pItem)", 
                                                        &data_83f3d3, var_f0, var_ec_17, var_e8_20)
                                                    
                                                    if (IsDebuggerPresent() == 1)
                                                        breakpoint
                                                    
                                                    sub_4c5a30()
                                                    noreturn
                                                
                                                while (true)
                                                    int32_t* eax_49 = *ebx_12
                                                    void* ecx_21 = &ebx_12[1]
                                                    int32_t* var_c8_2 = eax_49
                                                    ebx_12 = eax_49
                                                    
                                                    if (&edi_7[-4] u>= ecx_21
                                                            && &edi_7[-4] u< edx_14 + ecx_21)
                                                        if (mods.dp.d(sx.q(&edi_7[-4] - ecx_21), eax_44)
                                                                == 0)
                                                            edi_7[-4] = *edi_10
                                                            *edi_10 = &edi_7[-4]
                                                            break
                                                        
                                                        eax_49 = ebx_12
                                                    
                                                    if (eax_49 == 0)
                                                        goto label_45a470
                                                    
                                                    edx_14 = var_d4
                                            else
                                                _aligned_free_base(&edi_7[-4])
                                    
                                    int32_t eax_52 = var_cc + 1
                                    var_cc = eax_52
                                    
                                    if (eax_52 s>= sx.d(*(ecx_2 + 0x458)))
                                        break
                                    
                                    continue
                            
                            char const* const var_e8_17 = "DataArray<struct UIState>::DataArrayGet"
                            int32_t var_ec_14 = 0x46
                            var_f0 = "c:\ax2010\engine\DataArray.h"
                            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, var_f0, 
                                var_ec_14, var_e8_17)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                    
                    char const* const var_e8_15 = "DataArray<struct UIState>::DataArrayGet"
                    int32_t var_ec_12 = 0x46
                    var_f0 = "c:\ax2010\engine\DataArray.h"
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, var_f0, var_ec_12, 
                        var_e8_15)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            char const* const var_e8_11 = "DataArray<struct UIState>::DataArrayGet"
            int32_t var_ec_8 = 0x46
            var_f0 = "c:\ax2010\engine\DataArray.h"
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, var_f0, var_ec_8, var_e8_11)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    int32_t eax_54
    
    if ((data_3166528 & 8) != 0)
        eax_54 = data_3166518
    else
        data_3166528.d |= 8
        int32_t var_c_9 = 4
        eax_54 = sub_4f5220(data_307c794, "BtnRematch")
        data_3166518 = eax_54
        int32_t var_c_10 = 0xffffffff
    
    int32_t ecx_24
    
    if (*(data_27e7a40 + 0x2c4960) == 1 && data_27c0720 == 1)
        ecx_24 = *(data_27e7a54 + 0x204)
    
    int32_t ecx_30
    
    if (*(data_27e7a40 + 0x2c4960) != 1 || data_27c0720 != 1
            || data_27c076c s>= *(ecx_24 * 0x18 + &data_8c77ec) - 1)
        int32_t esi_18 = *(ecx + 4)
        
        if (esi_18 == 0)
            char const* const var_e8_27 = "DataArray<struct UIState>::DataArrayGet"
            int32_t var_ec_24 = 0x45
            var_f0 = "c:\ax2010\engine\DataArray.h"
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, var_f0, var_ec_24, var_e8_27)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t ecx_37 = zx.d(esi_18.w)
        int32_t edi_15
        
        if (ecx_37 u< data_be1cbc)
            edi_15 = data_be1cb8
        
        if (ecx_37 u>= data_be1cbc || *(ecx_37 * 0x438 + edi_15 + 0x434) != esi_18)
            char const* const var_e8_28 = "DataArray<struct UIState>::DataArrayGet"
            int32_t var_ec_25 = 0x46
            var_f0 = "c:\ax2010\engine\DataArray.h"
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, var_f0, var_ec_25, var_e8_28)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_39 = ecx_37 * 0x438 + edi_15
        
        if (eax_54 s>= 0x100)
            char const* const var_e8_29 = "UIStateElementGet"
            int32_t var_ec_26 = 0x518
            var_f0 = "UIDef.cpp"
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, var_f0, var_ec_26, var_e8_29)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_33 = *(ecx_39 + (eax_54 << 2) + 0x30)
        int128_t* eax_81
        
        if (edx_33 != 0)
            eax_81, ecx_30 = sub_4fc1e0(ecx_39, edx_33)
        else
            eax_81, ecx_30 = sub_4fc0d0()
            *(eax_81 + 4) = &data_83f3d3
            *(ecx_39 + ((eax_54 + 0xc) << 2)) = *(eax_81 + 0x1bc)
        
        *eax_81 += 1
    else
        int32_t esi_13 = *(ecx + 4)
        
        if (ecx_24 != 2)
            if (esi_13 == 0)
                char const* const var_e8_24 = "DataArray<struct UIState>::DataArrayGet"
                int32_t var_ec_21 = 0x45
                var_f0 = "c:\ax2010\engine\DataArray.h"
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, var_f0, var_ec_21, var_e8_24)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t ecx_32 = zx.d(esi_13.w)
            int32_t edi_13
            
            if (ecx_32 u< data_be1cbc)
                edi_13 = data_be1cb8
            
            if (ecx_32 u>= data_be1cbc || *(ecx_32 * 0x438 + edi_13 + 0x434) != esi_13)
                char const* const var_e8_25 = "DataArray<struct UIState>::DataArrayGet"
                int32_t var_ec_22 = 0x46
                var_f0 = "c:\ax2010\engine\DataArray.h"
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, var_f0, var_ec_22, var_e8_25)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ecx_34 = ecx_32 * 0x438 + edi_13
            
            if (eax_54 s>= 0x100)
                char const* const var_e8_26 = "UIStateElementGet"
                int32_t var_ec_23 = 0x518
                var_f0 = "UIDef.cpp"
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, var_f0, var_ec_23, var_e8_26)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_29 = *(ecx_34 + (eax_54 << 2) + 0x30)
            int128_t* eax_75
            
            if (edx_29 != 0)
                eax_75, ecx_30 = sub_4fc1e0(ecx_34, edx_29)
            else
                eax_75, ecx_30 = sub_4fc0d0()
                *(eax_75 + 4) = &data_83f3d3
                *(ecx_34 + ((eax_54 + 0xc) << 2)) = *(eax_75 + 0x1bc)
            
            *(eax_75 + 0x64) = *eax_75 + 1
            sub_4c4590("Next Mission")
            *(eax_75 + 0x151) = 1
        else
            if (esi_13 == 0)
                char const* const var_e8_21 = "DataArray<struct UIState>::DataArrayGet"
                int32_t var_ec_18 = 0x45
                var_f0 = "c:\ax2010\engine\DataArray.h"
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, var_f0, var_ec_18, var_e8_21)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t ecx_27 = zx.d(esi_13.w)
            int32_t edi_11
            
            if (ecx_27 u< data_be1cbc)
                edi_11 = data_be1cb8
            
            if (ecx_27 u>= data_be1cbc || *(ecx_27 * 0x438 + edi_11 + 0x434) != esi_13)
                char const* const var_e8_22 = "DataArray<struct UIState>::DataArrayGet"
                int32_t var_ec_19 = 0x46
                var_f0 = "c:\ax2010\engine\DataArray.h"
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, var_f0, var_ec_19, var_e8_22)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ecx_29 = ecx_27 * 0x438 + edi_11
            
            if (eax_54 s>= 0x100)
                char const* const var_e8_23 = "UIStateElementGet"
                int32_t var_ec_20 = 0x518
                var_f0 = "UIDef.cpp"
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, var_f0, var_ec_20, var_e8_23)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_25 = *(ecx_29 + (eax_54 << 2) + 0x30)
            int128_t* eax_69
            
            if (edx_25 != 0)
                eax_69, ecx_30 = sub_4fc1e0(ecx_29, edx_25)
            else
                eax_69, ecx_30 = sub_4fc0d0()
                *(eax_69 + 4) = &data_83f3d3
                *(ecx_29 + ((eax_54 + 0xc) << 2)) = *(eax_69 + 0x1bc)
            
            *(eax_69 + 0x64) = *eax_69 + 1
            sub_4c4590("New Game")
            *(eax_69 + 0x151) = 1
    
    int32_t var_e8_30 = ecx_30
    float var_e8_31 = fconvert.s(float.t(1))
    void* var_ec_27 = &var_b0
    var_f0 = *(ecx + 8)
    sub_4f9fe0(var_f0, var_ec_27)
    float var_e8_32 = fconvert.s(float.t(1))
    void* var_ec_28 = &var_b0
    var_f0 = *(ecx + 4)
    sub_4f9fe0(var_f0, var_ec_28)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_d4)
    return result
}

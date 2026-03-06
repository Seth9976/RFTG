// 函数名称: sub_4850f0
// 虚拟地址: 0x4850f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4850f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69947a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_54
    int32_t eax_2 = __security_cookie ^ &var_54
    int32_t __saved_edi
    int32_t var_64 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4075c0()
    int32_t ebx = arg1
    void* eax_5 = sub_4fc3d0(&data_be1cb8, ebx)
    bool cond:0 = (data_31669a0 & 1) != 0
    *(eax_5 + 0x2c) = sub_4850d0
    void* ecx = *(data_27e7a40 + 0x548)
    
    if (not(cond:0))
        data_31669a0.d |= 1
        int32_t var_c_1 = 0
        data_316699c = sub_4f5220(data_307c794, "BtnBackMulti")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31669a0 & 2) == 0)
        data_31669a0.d |= 2
        int32_t var_c_3 = 1
        data_3166998 = sub_4f5220(data_307c794, "BtnBack")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31669a0 & 4) == 0)
        data_31669a0.d |= 4
        int32_t var_c_5 = 2
        data_3166994 = sub_4f5220(data_307c794, "BtnRematch")
        int32_t var_c_6 = 0xffffffff
    
    int32_t eax_11 = *(data_27e7a40 + 0x2c4960)
    char var_4d_1
    
    if (eax_11 != 2)
        var_4d_1 = 0
    
    if (eax_11 == 2 || eax_11 == 4)
        var_4d_1 = 1
    
    int128_t* eax_13 = sub_4f6e90(data_3166998, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3)
    int32_t edi_2 = data_3166994
    *(eax_13 + 0x21) = var_4d_1
    int128_t* eax_15 = sub_4f6e90(edi_2, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3)
    int32_t edi_4 = data_316699c
    *(eax_15 + 0x21) = var_4d_1
    int128_t* eax_17 = sub_4f6e90(edi_4, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3)
    void* esi_7 = ecx
    *(eax_17 + 0x21) = var_4d_1 == 0
    
    if (data_30d6f41 != 0)
        data_30d6f41 = 0
        int32_t edx_4 = *(esi_7 + 8)
        sub_440510(eax_17, edx_4, esi_7 + 0x438f4, ebx, edx_4)
        int32_t eax_18 = *(esi_7 + 8)
        *(esi_7 + 0x438fc) = 1
        sub_4fa8a0(eax_18, 1, fconvert.s(float.t(0)))
        
        if ((data_31669a0 & 8) == 0)
            data_31669a0.d |= 8
            int32_t var_c_7 = 3
            data_3166990 = sub_4f5220(data_307c794, "animDlg")
            int32_t var_c_8 = 0xffffffff
        
        float edx_5 = data_3166990
        int32_t var_68_3 = 0
        sub_4fa4e0(ebx, edx_5, edx_5.b)
        int128_t* eax_22
        char edx_6
        eax_22, edx_6 = sub_4f6e90(data_3166990, sub_4fc3d0(&data_be1cb8, ebx), &data_83f3d3)
        *(eax_22 + 0x14) = fconvert.s(float.t(1))
        
        if ((data_31669a0 & 0x10) == 0)
            data_31669a0.d |= 0x10
            int32_t var_c_9 = 4
            int32_t eax_24
            eax_24, edx_6 = sub_4f5220(data_307c790, "animBg")
            data_316698c = eax_24
            int32_t var_c_10 = 0xffffffff
        
        esi_7 = ecx
        int32_t var_68_4 = 0
        sub_4fa4e0(*(esi_7 + 8), data_316698c, edx_6)
    
    sub_4420f0(esi_7 + 0x438f4, *(esi_7 + 8), ebx)
    int32_t* esi_10 = data_307c798
    
    if ((data_31669a0 & 0x20) == 0)
        data_31669a0.d |= 0x20
        int32_t var_c_11 = 5
        data_3166988 = sub_4f5220(esi_10, "TxtPlayer")
        int32_t var_c_12 = 0xffffffff
    
    if ((data_31669a0 & 0x40) == 0)
        data_31669a0.d |= 0x40
        int32_t var_c_13 = 6
        data_3166984 = sub_4f5220(esi_10, "AvatarPic")
        int32_t var_c_14 = 0xffffffff
    
    if ((data_31669a0 & 0x80) == 0)
        data_31669a0.d |= 0x80
        int32_t var_c_15 = 7
        data_3166980 = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_16 = 0xffffffff
    
    int32_t eax_30 = 0
    int32_t var_2c[0x4]
    
    if (arg2 s> 0)
        do
            var_2c[eax_30] = eax_30
            eax_30 += 1
        while (eax_30 s< arg2)
    
    int32_t edi_10 = data_3166980
    int32_t eax_31
    int32_t ecx_8
    eax_31, ecx_8 = sub_4fc3d0(&data_be1cb8, ebx)
    
    if (edi_10 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_8 = *(eax_31 + (edi_10 << 2) + 0x30)
    int128_t* eax_33
    
    if (edx_8 != 0)
        eax_33 = sub_4fc1e0(ecx_8, edx_8)
    else
        eax_33 = sub_4fc0d0()
        *(eax_33 + 4) = &data_83f3d3
        *(eax_31 + (edi_10 << 2) + 0x30) = *(eax_33 + 0x1bc)
    
    eax_33[0x12].d = *eax_33 + 1
    *(eax_33 + 0x124) = 1
    *(eax_33 + 0x128) = arg2
    *(eax_33 + 0x12c) = 1
    eax_33[0x13].d = arg2
    int32_t var_48 = 0
    
    if (arg2 s> 0)
        while (true)
            int32_t esi_13 = data_3166980
            int32_t var_34 = 0
            int32_t var_30_1 = var_48
            
            if (ebx == 0)
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                    "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t eax_36 = zx.d(ebx.w)
            
            if (eax_36 u< data_be1cbc)
                void* edx_12 = data_be1cb8
                int32_t ecx_11 = eax_36 * 0x438
                
                if (*(ecx_11 + edx_12 + 0x434) == ebx)
                    void* ebx_1 = edx_12 + eax_36 * 0x438
                    
                    if (esi_13 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_13 = *(ebx_1 + (esi_13 << 2) + 0x30)
                    int128_t* eax_38
                    
                    if (edx_13 != 0)
                        eax_38 = sub_4fc1e0(ecx_11, edx_13)
                    else
                        eax_38, edx_13 = sub_4fc0d0()
                        *(eax_38 + 4) = &data_83f3d3
                        *(ebx_1 + (esi_13 << 2) + 0x30) = *(eax_38 + 0x1bc)
                    
                    char* ebx_2 = *(ebx_1 + 4)
                    
                    if (*(ebx_2 + 4) != 0x1e)
                        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                            "UIDefGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*ebx_2 == 0)
                        sub_520800(eax_38, edx_13.b, ebx_2, 0)
                        
                        if (*ebx_2 == 0)
                            sub_509540(ebx_2)
                    
                    int32_t edi_12 = *(sub_4f7720(&var_34, esi_13 * 0x118 + ***ebx_2, eax_38) + 0x434)
                    int32_t ebx_3 = var_2c[var_48]
                    int32_t eax_43
                    char** edx_16
                    eax_43, edx_16 = sub_424340()
                    char** var_4c_1
                    
                    switch (eax_43)
                        case 0, 1, 4
                            var_4c_1 = data_307c018
                        case 5
                            var_4c_1 = data_307c02c
                        case 6
                            edx_16 = data_307c030
                            var_4c_1 = edx_16
                        case 7
                            var_4c_1 = data_307c034
                        case 8
                            var_4c_1 = data_307c000
                        case 9
                            edx_16 = data_307bff8
                            var_4c_1 = edx_16
                        case 0xa
                            var_4c_1 = data_307bffc
                        case 0xb
                            var_4c_1 = data_307c004
                        case 0xc
                            edx_16 = data_307c038
                            var_4c_1 = edx_16
                        case 0xd
                            var_4c_1 = data_307c030
                        case 0xe
                            var_4c_1 = data_307c014
                        case 0xf
                            edx_16 = data_307c008
                            var_4c_1 = edx_16
                        case 0x10
                            var_4c_1 = data_307c010
                        case 0x11
                            var_4c_1 = data_307c00c
                        default
                            edx_16 = data_307c018
                            var_4c_1 = edx_16
                    
                    char* var_3c
                    int32_t* var_68_6 = &var_3c
                    sub_424120(ebx_3, edx_16)
                    int32_t var_c_17 = 8
                    
                    if (edi_12 == 0)
                        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                            0x45, "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint32_t esi_17 = zx.d(edi_12.w)
                    
                    if (esi_17 u< data_be1cbc)
                        int32_t ecx_21 = data_be1cb8
                        
                        if (*(esi_17 * 0x438 + ecx_21 + 0x434) == edi_12)
                            int32_t eax_52 = data_3166984
                            int32_t ebx_5 = esi_17 * 0x438
                            int32_t ebx_6 = ebx_5 + ecx_21
                            
                            if (eax_52 s>= 0x100)
                                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                                    "UIStateElementGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t edx_17 = *(ebx_6 + (eax_52 << 2) + 0x30)
                            int128_t* eax_53
                            
                            if (edx_17 != 0)
                                eax_53 = sub_4fc1e0(ecx_21, edx_17)
                            else
                                eax_53 = sub_4fc0d0()
                                *(eax_53 + 4) = &data_83f3d3
                                *(ebx_6 + ((eax_52 + 0xc) << 2)) = *(eax_53 + 0x1bc)
                            
                            char* edi_14 = var_3c
                            *(eax_53 + 0x94) = *eax_53 + 1
                            *(eax_53 + 0x98) = var_4c_1
                            char* const var_4c_2 = &data_83f3d3
                            
                            if (edi_14 != 0)
                                var_4c_2 = edi_14
                            
                            if (esi_17 u< data_be1cbc)
                                int32_t eax_54 = data_be1cb8
                                
                                if (*(esi_17 * 0x438 + eax_54 + 0x434) == edi_12)
                                    int32_t esi_19 = data_3166988
                                    int32_t ebx_8 = ebx_5 + eax_54
                                    
                                    if (esi_19 s>= 0x100)
                                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                            0x518, "UIStateElementGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t edx_19 = *(ebx_8 + (esi_19 << 2) + 0x30)
                                    int128_t* eax_55
                                    
                                    if (edx_19 != 0)
                                        eax_55 = sub_4fc1e0(edi_12, edx_19)
                                    else
                                        eax_55 = sub_4fc0d0()
                                        *(eax_55 + 4) = &data_83f3d3
                                        *(ebx_8 + (esi_19 << 2) + 0x30) = *(eax_55 + 0x1bc)
                                    
                                    *(eax_55 + 0x64) = *eax_55 + 1
                                    sub_4c4590(var_4c_2)
                                    *(eax_55 + 0x151) = 1
                                    int32_t var_c_18 = 0xffffffff
                                    
                                    if (edi_14 != 0 && *edi_14 != 0)
                                        if (*(edi_14 - 0x10) != 0xfafafafa)
                                            sub_4c5870(
                                                "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                                &data_83f3d3, "xString.cpp", 0x20, 
                                                "XStringMagicDataStructFromCharPtr")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t temp2_1 = *(edi_14 - 0xc)
                                        *(edi_14 - 0xc) -= 1
                                        
                                        if (temp2_1 == 1)
                                            void* esi_21 = data_26a44e4
                                            int32_t edi_16 = *(edi_14 - 4) + 0x10
                                            
                                            if (esi_21 == 0)
                                                sub_4f4250()
                                                esi_21 = data_26a44e4
                                            
                                            int32_t eax_59 = 0
                                            void** esi_22
                                            
                                            while (true)
                                                if (edi_16 s<= 1 << (eax_59.b + 4))
                                                    esi_22 = esi_21 + eax_59 * 0x14
                                                    break
                                                
                                                eax_59 += 1
                                                
                                                if (eax_59 s>= 7)
                                                    esi_22 = esi_21 + 0x8c
                                                    break
                                            
                                            esi_22[3] -= 1
                                            
                                            if (edi_16 s<= 0x400 || esi_22[4] != 0xffffffff)
                                                int32_t eax_61 = esi_22[4]
                                                int32_t* ecx_28 = esi_22[1]
                                                
                                                if (ecx_28 == 0)
                                                label_4858de:
                                                    sub_4c5870("IsPointerFromAllocator(pItem)", 
                                                        &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                                                        0x81, "XAllocator::Free")
                                                    
                                                    if (IsDebuggerPresent() == 1)
                                                        breakpoint
                                                    
                                                    sub_4c5a30()
                                                    noreturn
                                                
                                                while (true)
                                                    void* edx_21 = &ecx_28[1]
                                                    ecx_28 = *ecx_28
                                                    
                                                    if (&edi_14[0xfffffff0] u>= edx_21 &&
                                                            &edi_14[0xfffffff0]
                                                            u< edx_21 + esi_22[2] * eax_61 && mods.dp.d(
                                                            sx.q(&edi_14[0xfffffff0] - edx_21), eax_61) == 0)
                                                        *(edi_14 - 0x10) = *esi_22
                                                        *esi_22 = &edi_14[0xfffffff0]
                                                        break
                                                    
                                                    if (ecx_28 == 0)
                                                        goto label_4858de
                                            else
                                                _aligned_free_base(&edi_14[0xfffffff0])
                                    
                                    ebx = arg1
                                    int32_t eax_69 = var_48 + 1
                                    var_48 = eax_69
                                    
                                    if (eax_69 s>= arg2)
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
            
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    int32_t eax_71
    
    if (*(data_27e7a40 + 0x2c4960) == 1 && data_27c0720 == 1)
        eax_71 = *(data_27e7a54 + 0x204)
    
    int32_t ecx_34
    
    if (*(data_27e7a40 + 0x2c4960) != 1 || data_27c0720 != 1
            || data_27c076c s>= *(eax_71 * 0x18 + &data_8c77ec) - 1)
        if (ebx == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_100 = zx.d(ebx.w)
        void* ecx_40
        int32_t edx_35
        
        if (eax_100 u< data_be1cbc)
            edx_35 = data_be1cb8
            ecx_40 = eax_100 * 0x438 + edx_35
        
        if (eax_100 u>= data_be1cbc || *(ecx_40 + 0x434) != ebx)
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ebx_15 = edx_35 + eax_100 * 0x438
        int32_t eax_103 = data_3166994
        
        if (eax_103 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_36 = *(ebx_15 + (eax_103 << 2) + 0x30)
        int128_t* eax_105
        
        if (edx_36 != 0)
            eax_105, ecx_34 = sub_4fc1e0(ecx_40, edx_36)
        else
            eax_105 = sub_4fc0d0()
            *(eax_105 + 4) = &data_83f3d3
            ecx_34 = *(eax_105 + 0x1bc)
            *(ebx_15 + ((eax_103 + 0xc) << 2)) = ecx_34
        
        *eax_105 += 1
    else if (eax_71 != 2)
        if (ebx == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_92 = zx.d(ebx.w)
        void* ecx_37
        int32_t edx_31
        
        if (eax_92 u< data_be1cbc)
            edx_31 = data_be1cb8
            ecx_37 = eax_92 * 0x438 + edx_31
        
        if (eax_92 u>= data_be1cbc || *(ecx_37 + 0x434) != ebx)
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ebx_13 = edx_31 + eax_92 * 0x438
        int32_t eax_95 = data_3166994
        
        if (eax_95 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_32 = *(ebx_13 + (eax_95 << 2) + 0x30)
        int128_t* eax_97
        
        if (edx_32 != 0)
            eax_97, ecx_34 = sub_4fc1e0(ecx_37, edx_32)
        else
            eax_97 = sub_4fc0d0()
            *(eax_97 + 4) = &data_83f3d3
            ecx_34 = *(eax_97 + 0x1bc)
            *(ebx_13 + ((eax_95 + 0xc) << 2)) = ecx_34
        
        *(eax_97 + 0x64) = *eax_97 + 1
        sub_4c4590("Next Mission")
        *(eax_97 + 0x151) = 1
    else
        if (ebx == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_84 = zx.d(ebx.w)
        void* ecx_33
        int32_t edx_27
        
        if (eax_84 u< data_be1cbc)
            edx_27 = data_be1cb8
            ecx_33 = eax_84 * 0x438 + edx_27
        
        if (eax_84 u>= data_be1cbc || *(ecx_33 + 0x434) != ebx)
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ebx_11 = edx_27 + eax_84 * 0x438
        int32_t eax_87 = data_3166994
        
        if (eax_87 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_28 = *(ebx_11 + (eax_87 << 2) + 0x30)
        int128_t* eax_89
        
        if (edx_28 != 0)
            eax_89, ecx_34 = sub_4fc1e0(ecx_33, edx_28)
        else
            eax_89 = sub_4fc0d0()
            *(eax_89 + 4) = &data_83f3d3
            ecx_34 = *(eax_89 + 0x1bc)
            *(ebx_11 + ((eax_87 + 0xc) << 2)) = ecx_34
        
        *(eax_89 + 0x64) = *eax_89 + 1
        sub_4c4590("New Game")
        *(eax_89 + 0x151) = 1
    
    unimplemented  {fld st0, dword [0x8c4d34]}
    int32_t var_68_8 = 0
    int32_t* const var_6c_13 = &data_84074c
    int32_t var_74 = ecx_34
    float var_74_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    sub_4f8070(*(ecx + 8), var_74_1, 0xffffffff)
    sub_407670()
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_54)
    return 0
}

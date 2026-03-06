// 函数名称: sub_538a80
// 虚拟地址: 0x538a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_538a80(WPARAM arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692990
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_5c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = data_3079208
    int32_t* var_28
    int32_t* ebx
    
    if (eax_3 == 0 || eax_3[1] != 0x19)
        ebx = nullptr
        var_28 = nullptr
    else
        int32_t* eax_4 = sub_466320(eax_3)
        ebx = eax_4
        var_28 = eax_4
    
    HWND hWnd_1 = GetDlgItem(data_3078830, 0x76)
    HWND hDlg = data_3078830
    HWND hWnd = hWnd_1
    HWND hWnd_2 = GetDlgItem(hDlg, 0x7b)
    char* const arg_4
    WPARAM wParam_4
    
    if (arg_4 != 0xffffffff)
        wParam_4 = arg_4
    
    WPARAM wParam
    
    if (arg_4 == 0xffffffff || wParam_4 s>= ebx[1])
        WPARAM wParam_5 = SendMessageA(hWnd_1, 0x188, 0, 0)
        wParam = wParam_5
        
        if (wParam_5 == 0xffffffff)
            wParam = 0
    else
        wParam = wParam_4
    
    LRESULT wParam_2 = SendMessageA(hWnd_1, 0x18e, 0, 0)
    SendMessageA(hWnd_1, 0x184, 0, 0)
    void** var_14 = nullptr
    
    if (ebx[1] s> 0)
        while (true)
            char* eax_7 = var_14 * 0x134
            int32_t* ebx_2 = *ebx + eax_7
            bool cond:2_1 = data_8c35fc s<= 5
            arg_4 = eax_7
            
            if (cond:2_1)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* edi_1 = data_8c35f8
            void* esi_1 = *(edi_1 + 0x14)
            void* eax_8 = *(esi_1 + 0xc)
            
            if (eax_8 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(eax_8 + 0x10) != 0xf)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", 
                    &data_83f3d3, "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_9 = *ebx_2
            int32_t ecx = 0
            void* var_38_1
            
            if (eax_9 s<= 0)
            label_538bb4:
                var_38_1 = *(esi_1 + 0x24)
            else
                int32_t* edx_1 = ebx_2[1]
                
                while (*edx_1 != 5)
                    ecx += 1
                    edx_1 = &edx_1[2]
                    
                    if (ecx s>= eax_9)
                        goto label_538bb4
                
                var_38_1 = edx_1[1]
            
            if (data_8c35fc s<= 8)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* esi_2 = *(edi_1 + 0x20)
            void* ecx_2 = *(esi_2 + 0xc)
            
            if (ecx_2 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(ecx_2 + 0x10) != 0xf)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", 
                    &data_83f3d3, "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ecx_3 = 0
            void* var_3c_1
            
            if (eax_9 s<= 0)
            label_538bf9:
                var_3c_1 = *(esi_2 + 0x24)
            else
                int32_t* edx_2 = ebx_2[1]
                
                while (*edx_2 != 8)
                    ecx_3 += 1
                    edx_2 = &edx_2[2]
                    
                    if (ecx_3 s>= eax_9)
                        goto label_538bf9
                
                var_3c_1 = edx_2[1]
            
            if (data_8c35fc s<= 1)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* esi_3 = *(edi_1 + 4)
            void* ecx_5 = *(esi_3 + 0xc)
            
            if (ecx_5 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(ecx_5 + 0x10) != 8)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_STRING", &data_83f3d3, 
                    "AttribMap.cpp", 0x1cc, "AttribMapGetString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ecx_6 = 0
            char* var_1c_1
            
            if (eax_9 s<= 0)
            label_538c44:
                var_1c_1 = *(esi_3 + 0x24)
            else
                int32_t* edx_3 = ebx_2[1]
                
                while (*edx_3 != 1)
                    ecx_6 += 1
                    edx_3 = &edx_3[2]
                    
                    if (ecx_6 s>= eax_9)
                        goto label_538c44
                
                var_1c_1 = edx_3[1]
            
            int32_t* eax_11 = data_3079208
            
            if (eax_11 != 0 && eax_11[1] == 0x19)
                int32_t* eax_12
                void** edx_4
                eax_12, edx_4 = sub_466320(eax_11)
                
                if (eax_12 != 0)
                    if (var_14 s< 0 || var_14 s>= eax_12[1])
                        sub_4c5870("emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount", 
                            &data_83f3d3, "Windows\EditorWindow.cpp", 0x32a, "EmitterGetIndent")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_4c5a30()
                            noreturn
                        
                        breakpoint
                    
                    char* const lParam_2 = &data_83f3d3
                    int32_t edi_2 = *(*eax_12 + arg_4 + 8)
                    arg_4 = &data_83f3d3
                    int32_t var_8_1 = 0
                    int32_t var_34_1 = 0
                    void** ecx_7
                    
                    if (edi_2 s> 0)
                        int32_t eax_18
                        
                        do
                            if (lParam_2 == 0 || *lParam_2 == 0)
                                char* const* var_60_3 = &arg_4
                                sub_4c40c0(3, edx_4)
                                lParam_2 = arg_4
                                int32_t* const eax_15 = &data_88f548
                                edx_4 = lParam_2 - &data_88f548
                                
                                do
                                    ecx_7.b = *eax_15
                                    *(eax_15 + edx_4) = ecx_7.b
                                    eax_15 += 1
                                while (ecx_7.b != 0)
                            else
                                if (*(lParam_2 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t* ebx_4 = *(lParam_2 - 8)
                                sub_4c4160(ebx_4 + 3, edx_4, &arg_4, ebx_4 + 3, 1)
                                edx_4 = 0x202020
                                lParam_2 = arg_4
                                *(ebx_4 + lParam_2) = 0x202020
                            
                            eax_18 = var_34_1 + 1
                            var_34_1 = eax_18
                        while (eax_18 s< edi_2)
                    
                    char* eax_21
                    
                    if (var_1c_1 == 0 || *var_1c_1 == 0)
                        void* var_60_5 = var_14 + 1
                        char* var_40
                        eax_21 = sub_4c4a50(&var_40, "Particle %d")
                        var_8_1.b = 1
                        char* ebx_7 = *eax_21
                        
                        if (ebx_7 != 0 && *ebx_7 != 0)
                            char i
                            
                            if (lParam_2 == 0 || *lParam_2 == 0)
                                char* eax_25 = ebx_7
                                void* edx_15 = &eax_25[1]
                                
                                do
                                    i = *eax_25
                                    eax_25 = &eax_25[1]
                                while (i != 0)
                                
                                char* const* var_60_6 = &arg_4
                                sub_4c40c0(eax_25 - edx_15, edx_15)
                                lParam_2 = arg_4
                                eax_21 = ebx_7
                                char i_1
                                
                                do
                                    i_1 = *eax_21
                                    eax_21[lParam_2 - ebx_7] = i_1
                                    eax_21 = &eax_21[1]
                                while (i_1 != 0)
                            else
                                if (*(lParam_2 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* edi_4 = *(lParam_2 - 8)
                                char* eax_27 = ebx_7
                                void** edx_18 = &eax_27[1]
                                
                                do
                                    i = *eax_27
                                    eax_27 = &eax_27[1]
                                while (i != 0)
                                
                                void* eax_28 = eax_27 - edx_18
                                void* eax_29 = eax_28 + edi_4
                                sub_4c4160(eax_29, edx_18, &arg_4, eax_29, 1)
                                lParam_2 = arg_4
                                eax_21 = sub_5ab990(edi_4 + lParam_2, ebx_7, eax_28 + 1)
                        
                        var_8_1.b = 0
                        char* ebx_8 = var_40
                        
                        if (ebx_8 != 0 && *ebx_8 != 0)
                            if (*(ebx_8 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp3_1 = *(ebx_8 - 0xc)
                            *(ebx_8 - 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                char* edi_3 = *(ebx_8 - 4) + 0x10
                                
                                if (data_26a44e4 == 0)
                                    sub_4f4250()
                                
                                int32_t edx_19 = 0
                                char* eax_32
                                
                                while (true)
                                    if (edi_3 s<= 1 << (edx_19.b + 4))
                                        eax_32 = data_26a44e4 + edx_19 * 0x14
                                        break
                                    
                                    edx_19 += 1
                                    
                                    if (edx_19 s>= 7)
                                        eax_32 = data_26a44e4 + 0x8c
                                        break
                                
                                *(eax_32 + 0xc) -= 1
                                
                                if (edi_3 s<= 0x400 || *(eax_32 + 0x10) != 0xffffffff)
                                    int32_t ecx_12 = *(eax_32 + 0x10)
                                    edi_3 = *(eax_32 + 4)
                                    void* edx_22 = *(eax_32 + 8) * ecx_12
                                    void* var_48_1 = edx_22
                                    
                                    if (edi_3 == 0)
                                    label_5397de:
                                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    while (true)
                                        char* eax_39 = *edi_3
                                        void* ecx_13 = &edi_3[4]
                                        char* var_44_1 = eax_39
                                        edi_3 = eax_39
                                        
                                        if (&ebx_8[0xfffffff0] u>= ecx_13
                                                && &ebx_8[0xfffffff0] u< edx_22 + ecx_13)
                                            if (mods.dp.d(sx.q(&ebx_8[0xfffffff0] - ecx_13), ecx_12)
                                                    == 0)
                                                eax_21 = eax_32
                                                *(ebx_8 - 0x10) = *eax_21
                                                *eax_21 = &ebx_8[0xfffffff0]
                                                break
                                            
                                            eax_39 = edi_3
                                        
                                        if (eax_39 == 0)
                                            goto label_5397de
                                        
                                        edx_22 = var_48_1
                                else
                                    eax_21 = _aligned_free_base(&ebx_8[0xfffffff0])
                    else if (lParam_2 == 0 || *lParam_2 == 0)
                        char* eax_19 = var_1c_1
                        void* edx_9 = &eax_19[1]
                        
                        do
                            ecx_7.b = *eax_19
                            eax_19 = &eax_19[1]
                        while (ecx_7.b != 0)
                        
                        char* const* var_60_4 = &arg_4
                        sub_4c40c0(eax_19 - edx_9, edx_9)
                        lParam_2 = arg_4
                        eax_21 = var_1c_1
                        char i_2
                        
                        do
                            i_2 = *eax_21
                            eax_21[lParam_2 - var_1c_1] = i_2
                            eax_21 = &eax_21[1]
                        while (i_2 != 0)
                    else
                        if (*(lParam_2 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* ebx_5 = *(lParam_2 - 8)
                        char* eax_22 = var_1c_1
                        void** edx_12 = &eax_22[1]
                        
                        do
                            ecx_7.b = *eax_22
                            eax_22 = &eax_22[1]
                        while (ecx_7.b != 0)
                        
                        void* eax_23 = eax_22 - edx_12
                        void** eax_24 = eax_23 + ebx_5
                        sub_4c4160(eax_24, edx_12, &arg_4, eax_24, 1)
                        lParam_2 = arg_4
                        eax_21 = sub_5ab990(ebx_5 + lParam_2, var_1c_1, eax_23 + 1)
                    
                    if (var_38_1 != 0)
                        char* var_20
                        void** edx_27 = sub_537dd0(eax_21, &var_20, var_38_1, &var_20)
                        var_8_1.b = 2
                        char i_3
                        
                        if (lParam_2 == 0 || *lParam_2 == 0)
                            char* const* var_60_9 = &arg_4
                            sub_4c40c0(3, edx_27)
                            lParam_2 = arg_4
                            eax_21 = &data_88f558
                            
                            do
                                i_3 = *eax_21
                                *(lParam_2 - &data_88f558 + eax_21) = i_3
                                eax_21 = &eax_21[1]
                            while (i_3 != 0)
                        else
                            if (*(lParam_2 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t* ebx_11 = *(lParam_2 - 8)
                            eax_21 = sub_4c4160(ebx_11 + 3, edx_27, &arg_4, ebx_11 + 3, 1)
                            lParam_2 = arg_4
                            *(ebx_11 + lParam_2) = 0x202d20
                        
                        void* ebx_12 = var_20
                        
                        if (ebx_12 != 0 && *ebx_12 != 0)
                            if (lParam_2 == 0 || *lParam_2 == 0)
                                void* eax_41 = ebx_12
                                void** edx_30 = eax_41 + 1
                                
                                do
                                    i_3 = *eax_41
                                    eax_41 += 1
                                while (i_3 != 0)
                                
                                char* const* var_60_10 = &arg_4
                                sub_4c40c0(eax_41 - edx_30, edx_30)
                                lParam_2 = arg_4
                                eax_21 = ebx_12
                                char i_4
                                
                                do
                                    i_4 = *eax_21
                                    *(lParam_2 - ebx_12 + eax_21) = i_4
                                    eax_21 = &eax_21[1]
                                while (i_4 != 0)
                            else
                                if (*(lParam_2 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* edi_7 = *(lParam_2 - 8)
                                char* eax_43 = ebx_12
                                void** edx_33 = &eax_43[1]
                                
                                do
                                    i_3 = *eax_43
                                    eax_43 = &eax_43[1]
                                while (i_3 != 0)
                                
                                void* eax_44 = eax_43 - edx_33
                                void** eax_45 = eax_44 + edi_7
                                sub_4c4160(eax_45, edx_33, &arg_4, eax_45, 1)
                                lParam_2 = arg_4
                                eax_21 = sub_5ab990(edi_7 + lParam_2, ebx_12, eax_44 + 1)
                            
                            ebx_12 = var_20
                        
                        var_8_1.b = 0
                        
                        if (ebx_12 != 0 && *ebx_12 != 0)
                            if (*(ebx_12 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp5_1 = *(ebx_12 - 0xc)
                            *(ebx_12 - 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                int32_t edi_10 = *(ebx_12 - 4) + 0x10
                                
                                if (data_26a44e4 == 0)
                                    sub_4f4250()
                                
                                int32_t edx_34 = 0
                                char* eax_48
                                
                                while (true)
                                    if (edi_10 s<= 1 << (edx_34.b + 4))
                                        eax_48 = data_26a44e4 + edx_34 * 0x14
                                        break
                                    
                                    edx_34 += 1
                                    
                                    if (edx_34 s>= 7)
                                        eax_48 = data_26a44e4 + 0x8c
                                        break
                                
                                *(eax_48 + 0xc) -= 1
                                
                                if (edi_10 s<= 0x400 || *(eax_48 + 0x10) != 0xffffffff)
                                    int32_t ecx_20 = *(eax_48 + 0x10)
                                    int32_t* edi_11 = *(eax_48 + 4)
                                    void* edx_36 = *(eax_48 + 8) * ecx_20
                                    void* var_38_2 = edx_36
                                    
                                    if (edi_11 == 0)
                                    label_53989d:
                                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    while (true)
                                        int32_t* eax_55 = *edi_11
                                        void* ecx_21 = &edi_11[1]
                                        int32_t* var_44_2 = eax_55
                                        edi_11 = eax_55
                                        
                                        if (ebx_12 - 0x10 u>= ecx_21
                                                && ebx_12 - 0x10 u< edx_36 + ecx_21)
                                            if (mods.dp.d(sx.q(ebx_12 - 0x10 - ecx_21), ecx_20) == 0)
                                                eax_21 = eax_48
                                                *(ebx_12 - 0x10) = *eax_21
                                                *eax_21 = ebx_12 - 0x10
                                                break
                                            
                                            eax_55 = edi_11
                                        
                                        if (eax_55 == 0)
                                            goto label_53989d
                                        
                                        edx_36 = var_38_2
                                else
                                    eax_21 = _aligned_free_base(ebx_12 - 0x10)
                    
                    if (var_3c_1 != 0)
                        char* var_24
                        void** edx_41 = sub_537dd0(eax_21, &var_24, var_3c_1, &var_24)
                        var_8_1.b = 3
                        char i_5
                        
                        if (lParam_2 == 0 || *lParam_2 == 0)
                            char* const* var_60_13 = &arg_4
                            sub_4c40c0(3, edx_41)
                            lParam_2 = arg_4
                            int32_t* const eax_56 = &data_88f558
                            
                            do
                                i_5 = *eax_56
                                *(lParam_2 - &data_88f558 + eax_56) = i_5
                                eax_56 += 1
                            while (i_5 != 0)
                        else
                            if (*(lParam_2 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t* edi_12 = *(lParam_2 - 8)
                            sub_4c4160(edi_12 + 3, edx_41, &arg_4, edi_12 + 3, 1)
                            lParam_2 = arg_4
                            *(edi_12 + lParam_2) = 0x202d20
                        
                        char* ebx_14 = var_24
                        
                        if (ebx_14 != 0 && *ebx_14 != 0)
                            if (lParam_2 == 0 || *lParam_2 == 0)
                                char* eax_58 = ebx_14
                                void* edx_44 = &eax_58[1]
                                
                                do
                                    i_5 = *eax_58
                                    eax_58 = &eax_58[1]
                                while (i_5 != 0)
                                
                                char* const* var_60_14 = &arg_4
                                sub_4c40c0(eax_58 - edx_44, edx_44)
                                lParam_2 = arg_4
                                char* eax_60 = ebx_14
                                char i_6
                                
                                do
                                    i_6 = *eax_60
                                    *(lParam_2 - ebx_14 + eax_60) = i_6
                                    eax_60 = &eax_60[1]
                                while (i_6 != 0)
                            else
                                if (*(lParam_2 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* edi_13 = *(lParam_2 - 8)
                                void* eax_61 = ebx_14
                                void** edx_47 = eax_61 + 1
                                
                                do
                                    i_5 = *eax_61
                                    eax_61 += 1
                                while (i_5 != 0)
                                
                                void* eax_62 = eax_61 - edx_47
                                void* eax_63 = eax_62 + edi_13
                                sub_4c4160(eax_63, edx_47, &arg_4, eax_63, 1)
                                lParam_2 = arg_4
                                sub_5ab990(edi_13 + lParam_2, ebx_14, eax_62 + 1)
                            
                            ebx_14 = var_24
                        
                        var_8_1.b = 0
                        
                        if (ebx_14 != 0 && *ebx_14 != 0)
                            if (*(ebx_14 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp6_1 = *(ebx_14 - 0xc)
                            *(ebx_14 - 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                int32_t edi_16 = *(ebx_14 - 4) + 0x10
                                
                                if (data_26a44e4 == 0)
                                    sub_4f4250()
                                
                                int32_t edx_48 = 0
                                void** eax_66
                                
                                while (true)
                                    if (edi_16 s<= 1 << (edx_48.b + 4))
                                        eax_66 = data_26a44e4 + edx_48 * 0x14
                                        break
                                    
                                    edx_48 += 1
                                    
                                    if (edx_48 s>= 7)
                                        eax_66 = data_26a44e4 + 0x8c
                                        break
                                
                                eax_66[3] -= 1
                                
                                if (edi_16 s<= 0x400 || eax_66[4] != 0xffffffff)
                                    int32_t ecx_28 = eax_66[4]
                                    int32_t* edi_17 = eax_66[1]
                                    void* edx_50 = eax_66[2] * ecx_28
                                    void* var_3c_2 = edx_50
                                    
                                    if (edi_17 == 0)
                                    label_53995c:
                                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    while (true)
                                        int32_t* eax_73 = *edi_17
                                        void* ecx_29 = &edi_17[1]
                                        int32_t* var_44_3 = eax_73
                                        edi_17 = eax_73
                                        
                                        if (&ebx_14[0xfffffff0] u>= ecx_29
                                                && &ebx_14[0xfffffff0] u< edx_50 + ecx_29)
                                            if (mods.dp.d(sx.q(&ebx_14[0xfffffff0] - ecx_29), ecx_28)
                                                    == 0)
                                                *(ebx_14 - 0x10) = *eax_66
                                                *eax_66 = &ebx_14[0xfffffff0]
                                                break
                                            
                                            eax_73 = edi_17
                                        
                                        if (eax_73 == 0)
                                            goto label_53995c
                                        
                                        edx_50 = var_3c_2
                                else
                                    _aligned_free_base(&ebx_14[0xfffffff0])
                    
                    if (*((var_14 << 3) + &data_3078878) != 0)
                        if (lParam_2 == 0 || *lParam_2 == 0)
                            char* const* var_60_16 = &arg_4
                            sub_4c40c0(9, var_14)
                            lParam_2 = arg_4
                            char const* const eax_75 = " (hidden)"
                            char const i_7
                            
                            do
                                i_7 = *eax_75
                                *(lParam_2 - " (hidden)" + eax_75) = i_7
                                eax_75 = &eax_75[1]
                            while (i_7 != 0)
                        else
                            if (*(lParam_2 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            void* ebx_16 = *(lParam_2 - 8)
                            sub_4c4160(ebx_16 + 9, var_14, &arg_4, ebx_16 + 9, 1)
                            lParam_2 = arg_4
                            __builtin_strcpy(ebx_16 + lParam_2, " (hidden)")
                    
                    char* const lParam = &data_83f3d3
                    
                    if (lParam_2 != 0)
                        lParam = lParam_2
                    
                    SendMessageA(hWnd, 0x180, 0, lParam)
                    int32_t var_8_2 = 0xffffffff
                    
                    if (lParam_2 != 0 && *lParam_2 != 0)
                        if (*(lParam_2 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp4_1 = *(lParam_2 - 0xc)
                        *(lParam_2 - 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            void* ebx_17 = data_26a44e4
                            int32_t edi_19 = *(lParam_2 - 4) + 0x10
                            
                            if (ebx_17 == 0)
                                sub_4f4250()
                                ebx_17 = data_26a44e4
                            
                            int32_t eax_77 = 0
                            void** ebx_18
                            
                            while (true)
                                if (edi_19 s<= 1 << (eax_77.b + 4))
                                    ebx_18 = ebx_17 + eax_77 * 0x14
                                    break
                                
                                eax_77 += 1
                                
                                if (eax_77 s>= 7)
                                    ebx_18 = ebx_17 + 0x8c
                                    break
                            
                            ebx_18[3] -= 1
                            
                            if (edi_19 s<= 0x400 || ebx_18[4] != 0xffffffff)
                                char* eax_79 = ebx_18[4]
                                int32_t* ecx_34 = ebx_18[1]
                                int32_t edi_21 = ebx_18[2] * eax_79
                                arg_4 = eax_79
                                
                                if (ecx_34 == 0)
                                label_5394dc:
                                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                while (true)
                                    void* edx_58 = &ecx_34[1]
                                    ecx_34 = *ecx_34
                                    
                                    if (&lParam_2[0xfffffff0] u>= edx_58
                                            && &lParam_2[0xfffffff0] u< edx_58 + edi_21
                                            && mods.dp.d(sx.q(&lParam_2[0xfffffff0] - edx_58), arg_4)
                                            == 0)
                                        *(lParam_2 - 0x10) = *ebx_18
                                        *ebx_18 = &lParam_2[0xfffffff0]
                                        break
                                    
                                    if (ecx_34 == 0)
                                        goto label_5394dc
                            else
                                _aligned_free_base(&lParam_2[0xfffffff0])
                    
                    void* eax_87 = var_14 + 1
                    var_14 = eax_87
                    
                    if (eax_87 s>= var_28[1])
                        break
                    
                    ebx = var_28
                    continue
            
            sub_4c5870("pParticleDef", &data_83f3d3, "Windows\EditorWindow.cpp", 0x328, 
                "EmitterGetIndent")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    ShowWindow(GetDlgItem(data_3078830, 0x77), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x78), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x79), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x7a), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x8d), SW_HIDE)
    SendMessageA(hWnd, 0x186, wParam, 0)
    SendMessageA(hWnd, 0x197, wParam_2, 0)
    ShowWindow(hWnd_2, SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x7c), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x7d), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x7e), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x7f), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x9e), SW_SHOW)
    LRESULT eax_131 = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    int32_t* eax_132
    
    if (eax_131 != 0xffffffff)
        int32_t* eax_133 = data_3079208
        void* eax_134
        
        if (eax_133 != 0 && eax_133[1] == 0x19)
            eax_134 = sub_466320(eax_133)
        
        if (eax_133 == 0 || eax_133[1] != 0x19 || eax_134 == 0 || eax_131 s< 0
                || eax_131 s>= *(eax_134 + 4))
            sub_4c5870(
                "pParticleDef && currentSelection >= 0 && currentSelection < pParticleDef->mEmitterCount", 
                &data_83f3d3, "Windows\EditorWindow.cpp", 0x1c1, "EditorGetSelectedEmitter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* esi_15 = eax_131 * 0x134 + *eax_134
        arg_4 = esi_15
        eax_132 = esi_15
    else
        eax_132 = nullptr
        arg_4 = nullptr
    
    WPARAM wParam_1
    HWND hWnd_3
    
    if (arg1 == 0xffffffff || eax_132 == 0 || arg1 s>= *eax_132)
        hWnd_3 = hWnd_2
        WPARAM wParam_6 = SendMessageA(hWnd_3, 0x188, 0, 0)
        wParam_1 = wParam_6
        
        if (wParam_6 == 0xffffffff)
            wParam_1 = 0
    else
        hWnd_3 = hWnd_2
        wParam_1 = arg1
    
    LRESULT wParam_3 = SendMessageA(hWnd_3, 0x18e, 0, 0)
    SendMessageA(hWnd_3, 0x184, 0, 0)
    
    if (arg_4 != 0)
        int32_t i_9 = 0
        
        if (*arg_4 s> 0)
            int32_t i_8
            
            do
                LPARAM* esi_16 = *(arg_4 + 4) + (i_9 << 3)
                sub_538790(esi_16)
                HWND lParam_1 = hWnd
                
                if (lParam_1 == 0)
                    lParam_1 = &data_83f3d3
                
                SendMessageA(hWnd_2, 0x19a, SendMessageA(hWnd_2, 0x180, 0, lParam_1), *esi_16)
                HWND hWnd_4 = hWnd
                
                if (hWnd_4 != 0 && hWnd_4->unused.b != 0)
                    void* eax_138 = sub_4c4060(&hWnd)
                    int32_t temp2_1 = *(eax_138 + 4)
                    *(eax_138 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t esi_18 = *(eax_138 + 0xc) + 0x10
                        sub_4f4430(eax_138, sub_4f4380(esi_18), esi_18)
                
                i_8 = i_9 + 1
                i_9 = i_8
            while (i_8 s< *arg_4)
    
    SendMessageA(hWnd_2, 0x186, wParam_1, 0)
    SendMessageA(hWnd_2, 0x197, wParam_3, 0)
    InvalidateRect(data_3078830, nullptr, 0)
    sub_5381f0()
    int32_t eax_143
    char* ecx_47
    eax_143, ecx_47 = sub_537110()
    
    if (eax_143 != 0)
        sub_5373e0(&data_3078844)
    
    char* ecx_48 = sub_537f00(ecx_47)
    sub_538030()
    sub_5380a0(ecx_48)
    sub_538170()
    BOOL result = EnableWindow(GetDlgItem(data_3078830, 0x8e), zx.d(data_307885c))
    data_3078838 = 0xffffffff
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

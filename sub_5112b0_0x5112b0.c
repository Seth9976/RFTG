// 函数名称: sub_5112b0
// 虚拟地址: 0x5112b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_5112b0(void* arg1, char** arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6985f9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    float var_8bc
    int32_t eax_2 = __security_cookie ^ &var_8bc
    int32_t __saved_edi
    int32_t var_8cc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = 0
    char** result
    char** result_1
    
    if (arg2 != 0)
        if (arg2[1] != 0x1d)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = arg2
        result_1 = arg2
    else
        result_1 = sub_50a390(0x1d)
        result = result_1
    
    if (*result_1 == 0)
        sub_5094d0(result_1, 0, 1)
    
    char* eax_7 = *result_1
    result_1[7] = &result_1[7][1]
    int32_t* eax_8 = *eax_7
    int32_t var_c_1 = 0
    void var_820
    int32_t eax_9
    int80_t st0
    st0, eax_9 = sub_510f60(eax_8, &var_820)
    var_8bc = fconvert.s(float.t(0))
    char* var_8b4
    float var_8b0
    
    if (eax_9 s> 0)
        void* edx_1 = &var_820
        var_8b4 = &var_820
        
        do
            char* eax_10 = var_8b4
            long double x87_r7_4
            
            if (*eax_10 != 0)
                char* ecx_5 = data_30d749c
                
                if (*(ecx_5 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_5 == 0)
                    sub_520800(eax_10, edx_1.b, ecx_5, 0)
                    
                    if (*ecx_5 == 0)
                        sub_509540(ecx_5)
                
                void* eax_15 = **ecx_5
                edx_1 = *(eax_15 + 0x14)
                int32_t var_898_1 = *(eax_15 + 8)
                var_8b0 = fconvert.s(fconvert.t(edx_1) - fconvert.t(*(eax_15 + 0xc)))
                int32_t var_890_1 = *(eax_15 + 0x10)
                x87_r7_4 = fconvert.t(var_8b0) * fconvert.t(*(arg1 + 0xc))
            else
                char* ecx_1 = data_30d7498
                
                if (*(ecx_1 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_1 == 0)
                    sub_520800(eax_10, edx_1.b, ecx_1, 0)
                    
                    if (*ecx_1 == 0)
                        sub_509540(ecx_1)
                
                void* eax_12 = **ecx_1
                int32_t var_888_1 = *(eax_12 + 8)
                edx_1 = *(eax_12 + 0x10)
                void* var_880_1 = edx_1
                var_8b0 = fconvert.s(fconvert.t(*(eax_12 + 0x14)) - fconvert.t(*(eax_12 + 0xc)))
                x87_r7_4 = fconvert.t(var_8b0) * fconvert.t(*(arg1 + 0xc))
            
            long double x87_r7_8 = x87_r7_4 + fconvert.t(var_8bc)
            var_8b4 = &var_8b4[0x10]
            edi += 1
            var_8bc = fconvert.s(x87_r7_8)
        while (edi s< eax_9)
    
    int32_t eax_17 = eax_9 - 1
    float var_8b8 = fconvert.s(fconvert.t(var_8bc))
    int16_t top = 0
    int32_t var_89c = eax_17
    
    if (eax_17 s>= 0)
        while (true)
            int32_t eax_20 = *eax_8
            var_8bc = eax_20 + (&var_8cc)[eax_17 * 4 + 0x2c] * 0x48
            float var_860
            __builtin_memcpy(&var_860, arg1, 0x40)
            int32_t edi_1 = (&var_8cc)[eax_17 * 4 + 0x2b]
            int32_t edx_8
            int16_t top_4
            
            if (edi_1 != 0)
                char* ecx_13 = data_30d749c
                
                if (*(ecx_13 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_13 == 0)
                    sub_520800(eax_20, eax_8.b, ecx_13, 0)
                    
                    if (*ecx_13 == 0)
                        sub_509540(ecx_13)
                
                unimplemented  {fld st0, dword [esp+0x14]}
                void* eax_27 = **ecx_13
                int32_t var_86c_1 = *(eax_27 + 0xc)
                edx_8 = *(eax_27 + 0x14)
                int32_t var_864_1 = edx_8
                unimplemented  {fld st0, dword [esp+0x68]}
                unimplemented  {fsub st0, dword [esp+0x60]}
                int32_t var_870_1 = *(eax_27 + 8)
                int32_t var_868_1 = *(eax_27 + 0x10)
                float var_8b8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                top_4 = top - 2
                unimplemented  {fld st0, dword [esp+0x14]}
            else
                char* ecx_10 = data_30d7498
                
                if (*(ecx_10 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*ecx_10 == edi_1)
                    sub_520800(eax_20, eax_8.b, ecx_10, edi_1.b)
                    
                    if (*ecx_10 == edi_1)
                        sub_509540(ecx_10)
                
                unimplemented  {fld st0, dword [esp+0x14]}
                void* eax_22 = **ecx_10
                int32_t var_894_2 = *(eax_22 + 0xc)
                edx_8 = *(eax_22 + 0x14)
                int32_t var_88c_2 = edx_8
                unimplemented  {fld st0, dword [esp+0x40]}
                unimplemented  {fsub st0, dword [esp+0x38]}
                int32_t var_898_2 = *(eax_22 + 8)
                int32_t var_890_2 = *(eax_22 + 0x10)
                float var_8b8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                top_4 = top - 2
                unimplemented  {fld st0, dword [esp+0x14]}
            
            unimplemented  {fmul st0, dword [esp+0x78]}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            float var_8b8_3 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
            unimplemented  {fstp dword [esp+0x14], st0}
            unimplemented  {fld st0, dword [eax]}
            float var_888_2 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
            unimplemented  {fstp dword [esp+0x44], st0}
            unimplemented  {fld st0, dword [eax+0x4]}
            unimplemented  {fadd dword [esp+0x14]}
            var_860 = var_888_2
            float var_884_2 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
            unimplemented  {fstp dword [esp+0x48], st0}
            int16_t top_13 = top_4 + 2
            float var_85c_1 = var_884_2
            
            if (edi_1 != 0)
                if ((data_31666ec & 0x40) == 0)
                    data_31666ec.d |= 0x40
                    var_c_1.b = 0xa
                    int32_t eax_94
                    eax_94, edx_8 = sub_4f6f00(data_30d749c)
                    top_13 -= 1
                    unimplemented  {call 0x4f6f00}
                    data_31666d0 = eax_94
                    var_c_1.b = 0
                
                if ((data_31666ec & 0x80) == 0)
                    data_31666ec.d |= 0x80
                    var_c_1.b = 0xb
                    int32_t eax_95
                    eax_95, edx_8 = sub_4f5220(data_30d749c, "txtLayerName")
                    data_31666cc = eax_95
                    var_c_1.b = 0
                
                float eax_96 = var_8bc
                char* var_874
                sub_5111b0(eax_96, edx_8, &(&var_8cc)[eax_17 * 4 + 0x2b], &var_874, eax_96)
                var_c_1.b = 0xc
                float edi_13 = var_874
                var_8bc = &data_83f3d3
                
                if (edi_13 != 0)
                    var_8bc = edi_13
                
                int32_t esi_26 = data_31666d0
                
                if (esi_26 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t eax_98 = zx.d(esi_26.w)
                int32_t ecx_53
                int32_t edx_45
                
                if (eax_98 u< data_be1cbc)
                    edx_45 = data_be1cb8
                    ecx_53 = eax_98 * 0x438
                
                if (eax_98 u>= data_be1cbc || *(ecx_53 + edx_45 + 0x434) != esi_26)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ebx_16 = edx_45 + eax_98 * 0x438
                int32_t eax_100 = data_31666cc
                
                if (eax_100 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_46 = *(ebx_16 + (eax_100 << 2) + 0x30)
                int128_t* eax_101
                
                if (edx_46 != 0)
                    eax_101 = sub_4fc1e0(ecx_53, edx_46)
                else
                    eax_101 = sub_4fc0d0()
                    *(eax_101 + 4) = &data_83f3d3
                    *(ebx_16 + ((eax_100 + 0xc) << 2)) = *(eax_101 + 0x1bc)
                
                float eax_102 = var_8bc
                int32_t ecx_56 = *eax_101 + 1
                *(eax_101 + 0x64) = ecx_56
                sub_4c4590(eax_102)
                unimplemented  {fld1 }
                void* eax_103 = data_31666d0
                int32_t var_8d0_8 = ecx_56
                float var_8d0_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top = top_13
                *(eax_101 + 0x151) = 1
                sub_4f9fe0(eax_103, &var_860)
                var_c_1.b = 0
                
                if (edi_13 != 0 && *edi_13 != 0)
                    if (*(edi_13 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp3_1 = *(edi_13 - 0xc)
                    *(edi_13 - 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        void* esi_29 = data_26a44e4
                        int32_t ebx_19 = *(edi_13 - 4) + 0x10
                        
                        if (esi_29 == 0)
                            sub_4f4250()
                            esi_29 = data_26a44e4
                        
                        int32_t eax_104 = 0
                        int32_t** esi_30
                        
                        while (true)
                            if (ebx_19 s<= 1 << (eax_104.b + 4))
                                esi_30 = esi_29 + eax_104 * 0x14
                                break
                            
                            eax_104 += 1
                            
                            if (eax_104 s>= 7)
                                esi_30 = esi_29 + 0x8c
                                break
                        
                        esi_30[3] -= 1
                        
                        if (ebx_19 s<= 0x400 || esi_30[4] != 0xffffffff)
                            int32_t eax_106 = esi_30[4]
                            int32_t* ecx_58 = esi_30[1]
                            
                            if (ecx_58 == 0)
                            label_511f9f:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            while (true)
                                void* edx_48 = &ecx_58[1]
                                ecx_58 = *ecx_58
                                
                                if (edi_13 - 0x10 u>= edx_48
                                        && edi_13 - 0x10 u< edx_48 + esi_30[2] * eax_106
                                        && mods.dp.d(sx.q(edi_13 - 0x10 - edx_48), eax_106) == 0)
                                    *(edi_13 - 0x10) = *esi_30
                                    *esi_30 = edi_13 - 0x10
                                    break
                                
                                if (ecx_58 == 0)
                                    goto label_511f9f
                        else
                            _aligned_free_base(edi_13 - 0x10)
            else
                if ((data_31666ec & 1) == 0)
                    data_31666ec.d |= 1
                    var_c_1.b = 1
                    int32_t eax_29 = sub_4f6f00(data_30d7498)
                    top_13 -= 1
                    unimplemented  {call 0x4f6f00}
                    data_31666e8 = eax_29
                    var_c_1.b = 0
                
                if ((data_31666ec & 2) == 0)
                    data_31666ec.d |= 2
                    var_c_1.b = 2
                    data_31666e4 = sub_4f5220(data_30d7498, "imgTexture")
                    var_c_1.b = 0
                
                if ((data_31666ec & 4) == 0)
                    data_31666ec.d |= 4
                    var_c_1.b = 3
                    data_31666e0 = sub_4f5220(data_30d7498, "txtLayerName")
                    var_c_1.b = 0
                
                if ((data_31666ec & 8) == 0)
                    data_31666ec.d |= 8
                    var_c_1.b = 4
                    data_31666dc = sub_4f5220(data_30d7498, "txtBlend")
                    var_c_1.b = 0
                
                if ((data_31666ec & 0x10) == 0)
                    data_31666ec.d |= 0x10
                    var_c_1.b = 5
                    data_31666d8 = sub_4f5220(data_30d7498, "txtVisible")
                    var_c_1.b = 0
                
                sub_510e70(var_8bc, &var_8b4)
                var_c_1.b = 6
                char* eax_35 = var_8b4
                char* edi_2 = &data_83f3d3
                
                if (eax_35 != 0)
                    edi_2 = eax_35
                
                int32_t esi_6 = data_31666e8
                
                if (esi_6 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t eax_37 = zx.d(esi_6.w)
                int32_t ecx_21
                int32_t edx_12
                
                if (eax_37 u< data_be1cbc)
                    edx_12 = data_be1cb8
                    ecx_21 = eax_37 * 0x438
                
                if (eax_37 u>= data_be1cbc || *(ecx_21 + edx_12 + 0x434) != esi_6)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ebx_2 = edx_12 + eax_37 * 0x438
                int32_t eax_39 = data_31666e0
                
                if (eax_39 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_13 = *(ebx_2 + (eax_39 << 2) + 0x30)
                int128_t* eax_40
                
                if (edx_13 != 0)
                    eax_40 = sub_4fc1e0(ecx_21, edx_13)
                else
                    eax_40 = sub_4fc0d0()
                    *(eax_40 + 4) = &data_83f3d3
                    *(ebx_2 + ((eax_39 + 0xc) << 2)) = *(eax_40 + 0x1bc)
                
                *(eax_40 + 0x64) = *eax_40 + 1
                sub_4c4590(edi_2)
                float ecx_23 = var_8bc
                *(eax_40 + 0x151) = 1
                sub_510d40(ecx_23)
                var_c_1.b = 7
                float edi_3 = &data_83f3d3
                
                if (var_8b0 != 0)
                    edi_3 = var_8b0
                
                int32_t esi_9 = data_31666e8
                
                if (esi_9 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t eax_46 = zx.d(esi_9.w)
                int32_t ecx_25
                int32_t edx_14
                
                if (eax_46 u< data_be1cbc)
                    edx_14 = data_be1cb8
                    ecx_25 = eax_46 * 0x438
                
                if (eax_46 u>= data_be1cbc || *(ecx_25 + edx_14 + 0x434) != esi_9)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ebx_4 = edx_14 + eax_46 * 0x438
                int32_t eax_48 = data_31666dc
                
                if (eax_48 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_15 = *(ebx_4 + (eax_48 << 2) + 0x30)
                int128_t* eax_49
                
                if (edx_15 != 0)
                    eax_49 = sub_4fc1e0(ecx_25, edx_15)
                else
                    eax_49 = sub_4fc0d0()
                    *(eax_49 + 4) = &data_83f3d3
                    *(ebx_4 + ((eax_48 + 0xc) << 2)) = *(eax_49 + 0x1bc)
                
                *(eax_49 + 0x64) = *eax_49 + 1
                sub_4c4590(edi_3)
                int32_t edx_16 = data_31666e8
                *(eax_49 + 0x151) = 1
                
                if (edx_16 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t eax_52 = zx.d(edx_16.w)
                int32_t ecx_30
                int32_t esi_12
                
                if (eax_52 u< data_be1cbc)
                    esi_12 = data_be1cb8
                    ecx_30 = eax_52 * 0x438
                
                if (eax_52 u>= data_be1cbc || *(ecx_30 + esi_12 + 0x434) != edx_16)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ebx_6 = esi_12 + eax_52 * 0x438
                int32_t eax_54 = data_31666e4
                
                if (eax_54 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_17 = *(ebx_6 + (eax_54 << 2) + 0x30)
                int128_t* eax_55
                
                if (edx_17 != 0)
                    eax_55 = sub_4fc1e0(ecx_30, edx_17)
                else
                    eax_55, edx_17 = sub_4fc0d0()
                    *(eax_55 + 4) = &data_83f3d3
                    *(ebx_6 + ((eax_54 + 0xc) << 2)) = *(eax_55 + 0x1bc)
                
                *eax_55 += 1
                float ecx_32 = var_8bc
                int32_t eax_56 = *ecx_32
                char** var_8a0
                
                if (eax_56 == 0)
                    int32_t edx_18 = data_31666e8
                    int32_t edi_4 = *(ecx_32 i+ 0xc)
                    
                    if (edx_18 == 0)
                        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                            0x45, "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint32_t eax_58 = zx.d(edx_18.w)
                    int32_t ecx_34
                    int32_t esi_14
                    
                    if (eax_58 u< data_be1cbc)
                        esi_14 = data_be1cb8
                        ecx_34 = eax_58 * 0x438
                    
                    if (eax_58 u>= data_be1cbc || *(ecx_34 + esi_14 + 0x434) != edx_18)
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t ebx_7 = esi_14 + eax_58 * 0x438
                    int32_t eax_60 = data_31666e4
                    
                    if (eax_60 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_19 = *(ebx_7 + (eax_60 << 2) + 0x30)
                    
                    if (edx_19 != 0)
                        int32_t* eax_62 = sub_4fc1e0(ecx_34, edx_19)
                        eax_62[0x25] = *eax_62 + 1
                        eax_62[0x26] = edi_4
                    else
                        int128_t* eax_61 = sub_4fc0d0()
                        *(eax_61 + 4) = &data_83f3d3
                        *(ebx_7 + ((eax_60 + 0xc) << 2)) = *(eax_61 + 0x1bc)
                        *(eax_61 + 0x94) = *eax_61 + 1
                        *(eax_61 + 0x98) = edi_4
                else if (eax_56 == 3)
                    char** eax_63
                    
                    if ((data_31666ec & 0x20) != 0)
                        eax_63 = data_31666d4
                    else
                        data_31666ec.d |= 0x20
                        var_c_1.b = 8
                        eax_63 = sub_509140(0x1d, "sys/TextureFn_Circle.materialFn")
                        data_31666d4 = eax_63
                        var_c_1.b = 7
                    
                    if (eax_63 == 0)
                        eax_63 = sub_50a390(eax_63 + 0x1d)
                    else if (eax_63[1] != 0x1d)
                        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    bool cond:4_1 = *eax_63 != 0
                    var_8a0 = eax_63
                    
                    if (not(cond:4_1))
                        sub_5094d0(eax_63, 0, 1)
                    
                    eax_63[7] = &eax_63[7][1]
                    var_c_1.b = 9
                    **eax_63
                    int32_t eax_65 = sub_514bb0()
                    var_c_1.b = 7
                    eax_63[7] -= 1
                    int32_t ebx_9 = data_31666e4
                    int32_t eax_66
                    int32_t ecx_37
                    eax_66, ecx_37 = sub_4fc3d0(&data_be1cb8, data_31666e8)
                    
                    if (ebx_9 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_24 = *(eax_66 + (ebx_9 << 2) + 0x30)
                    
                    if (edx_24 != 0)
                        int32_t* eax_68 = sub_4fc1e0(ecx_37, edx_24)
                        eax_68[0xf] = *eax_68 + 1
                        eax_68[0x10] = eax_65
                    else
                        int128_t* eax_67 = sub_4fc0d0()
                        *(eax_67 + 4) = &data_83f3d3
                        *(eax_66 + (ebx_9 << 2) + 0x30) = *(eax_67 + 0x1bc)
                        *(eax_67 + 0x3c) = *eax_67 + 1
                        eax_67[4].d = eax_65
                else if (eax_56 != 1)
                    int32_t var_8d0_2 = 1
                    sub_4fa4e0(data_31666e8, data_31666e4, edx_17.b)
                else
                    int32_t edi_6 = *(var_8bc i+ 0x10)
                    int32_t ebx_10 = data_31666e4
                    char var_8a8_1 = 0
                    int16_t var_8a7_1 = 0
                    char var_8a5_1 = 0
                    int32_t eax_70
                    int32_t ecx_39
                    eax_70, ecx_39 = sub_4fc3d0(&data_be1cb8, data_31666e8)
                    
                    if (ebx_10 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_29 = *(eax_70 + (ebx_10 << 2) + 0x30)
                    int128_t* eax_71
                    
                    if (edx_29 != 0)
                        eax_71 = sub_4fc1e0(ecx_39, edx_29)
                    else
                        eax_71 = sub_4fc0d0()
                        *(eax_71 + 4) = &data_83f3d3
                        *(eax_70 + (ebx_10 << 2) + 0x30) = *(eax_71 + 0x1bc)
                    
                    *(eax_71 + 0x88) = *eax_71 + 1
                    *(eax_71 + 0x8c) = edi_6
                    eax_71[9].d = var_8a8_1.d
                
                uint32_t edx_32 = zx.d(*(var_8bc i+ 4))
                uint32_t var_8d0_3 = edx_32
                sub_4fa4e0(data_31666e8, data_31666d8, edx_32.b)
                unimplemented  {fld1 }
                float var_8d0_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top = top_13
                sub_4f9fe0(data_31666e8, &var_860)
                var_c_1.b = 6
                
                if (var_8b0 != 0 && *var_8b0 != 0)
                    if (*(var_8b0 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp4_1 = *(var_8b0 - 0xc)
                    *(var_8b0 - 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        int32_t ebx_12 = *(var_8b0 - 4) + 0x10
                        
                        if (data_26a44e4 == 0)
                            sub_4f4250()
                        
                        int32_t edx_34 = 0
                        int32_t* edi_8
                        
                        while (true)
                            if (ebx_12 s<= 1 << (edx_34.b + 4))
                                edi_8 = data_26a44e4 + edx_34 * 0x14
                                break
                            
                            edx_34 += 1
                            
                            if (edx_34 s>= 7)
                                edi_8 = data_26a44e4 + 0x8c
                                break
                        
                        edi_8[3] -= 1
                        
                        if (ebx_12 s<= 0x400 || edi_8[4] != 0xffffffff)
                            char** eax_78 = edi_8[4]
                            float ebx_13 = edi_8[1]
                            int32_t edx_36 = edi_8[2] * eax_78
                            var_8a0 = eax_78
                            int32_t var_8ac_1 = edx_36
                            
                            if (ebx_13 == 0)
                            label_512350:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            while (true)
                                float eax_83 = *ebx_13
                                int32_t ecx_45 = ebx_13 i+ 4
                                var_8bc = eax_83
                                ebx_13 = eax_83
                                
                                if (var_8b0 - 0x10 u>= ecx_45 && var_8b0 - 0x10 u< edx_36 + ecx_45)
                                    if (mods.dp.d(sx.q(var_8b0 - 0x10 - ecx_45), var_8a0) == 0)
                                        *(var_8b0 - 0x10) = *edi_8
                                        *edi_8 = var_8b0 - 0x10
                                        break
                                    
                                    eax_83 = ebx_13
                                
                                if (eax_83 == 0)
                                    goto label_512350
                                
                                edx_36 = var_8ac_1
                        else
                            _aligned_free_base(var_8b0 - 0x10)
                
                var_c_1.b = 0
                
                if (var_8b4 != 0)
                    char* ecx_46 = var_8b4
                    
                    if (*ecx_46 != 0)
                        if (*(ecx_46 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp5_1 = *(ecx_46 - 0xc)
                        *(ecx_46 - 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            void* esi_23 = data_26a44e4
                            int32_t edi_10 = *(ecx_46 - 4) + 0x10
                            
                            if (esi_23 == 0)
                                sub_4f4250()
                                esi_23 = data_26a44e4
                            
                            int32_t eax_85 = 0
                            void** esi_24
                            
                            while (true)
                                if (edi_10 s<= 1 << (eax_85.b + 4))
                                    esi_24 = esi_23 + eax_85 * 0x14
                                    break
                                
                                eax_85 += 1
                                
                                if (eax_85 s>= 7)
                                    esi_24 = esi_23 + 0x8c
                                    break
                            
                            esi_24[3] -= 1
                            
                            if (edi_10 s<= 0x400 || esi_24[4] != 0xffffffff)
                                int32_t eax_87 = esi_24[4]
                                int32_t* ecx_48 = esi_24[1]
                                
                                if (ecx_48 == 0)
                                label_511d51:
                                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                while (true)
                                    void* edx_41 = &ecx_48[1]
                                    ecx_48 = *ecx_48
                                    
                                    if (&ecx_46[0xfffffff0] u>= edx_41
                                            && &ecx_46[0xfffffff0] u< edx_41 + esi_24[2] * eax_87
                                            && mods.dp.d(sx.q(&ecx_46[0xfffffff0] - edx_41), eax_87)
                                            == 0)
                                        *(ecx_46 - 0x10) = *esi_24
                                        *esi_24 = &ecx_46[0xfffffff0]
                                        break
                                    
                                    if (ecx_48 == 0)
                                        goto label_511d51
                            else
                                _aligned_free_base(&ecx_46[0xfffffff0])
            
            int32_t temp2_1 = var_89c
            var_89c -= 1
            
            if (temp2_1 - 1 s< 0)
                break
            
            eax_17 = var_89c
    
    result[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_8bc)
    return result
}

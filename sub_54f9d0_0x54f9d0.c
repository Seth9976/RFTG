// 函数名称: sub_54f9d0
// 虚拟地址: 0x54f9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_54f9d0(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69341d
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_584
    int32_t eax_2 = __security_cookie ^ &var_584
    int32_t __saved_edi
    int32_t var_594 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(0.78539818525314331)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    float var_98 = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    void** edx = nullptr
    float var_90 = fconvert.s(fconvert.t(data_27e8034))
    float var_c0 = 0f
    int32_t eax_6 = *(arg3 + 0x18)
    float var_c8 = 0f
    float var_8c = fconvert.s(fconvert.t(data_27e8038))
    float var_c4 = 0f
    int32_t var_56c = *(arg3 + 0x10)
    
    if (eax_6 s> 0x14)
        sub_4c5870("20 >= config.PREFILTER_MIPS", &data_83f3d3, "IBLImport.cpp", 0x2e8, 
            "HDRCubeToPrefilter")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_570 = 0
    int32_t var_428[0x6a]
    
    if (eax_6 s> 0)
    label_54fad0:
        var_584 = nullptr
        
        while (true)
            float var_b0
            void var_60
            sub_54d8d0(&var_60, var_584, &var_b0)
            long double x87_r6_1 = fconvert.t(var_c8)
            long double x87_r5_2 = fconvert.t(var_c4)
            float var_ac
            float var_55c_1 = fconvert.s(fconvert.t(var_ac) + x87_r5_2)
            long double x87_r4_2 = fconvert.t(var_c0)
            float var_a8
            float var_558_1 = fconvert.s(fconvert.t(var_a8) + x87_r4_2)
            float var_a4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_b0) + x87_r6_1)) - x87_r6_1)
            float var_a0_1 = fconvert.s(fconvert.t(var_55c_1) - x87_r5_2)
            float var_9c_1 = fconvert.s(fconvert.t(var_558_1) - x87_r4_2)
            float var_4c8[0x4]
            float* eax_10 = sub_4131a0(&var_a4, &var_4c8)
            float var_bc = *eax_10
            int32_t var_b8_1 = eax_10[1]
            int32_t var_b4_1 = eax_10[2]
            float var_4b8[0x4]
            float* eax_11 = sub_413800(&var_4b8, &var_60)
            float edx_5 = *eax_11
            int32_t ecx_4 = eax_11[1]
            void* edi_2 = data_30d7470
            int32_t edx_6 = eax_11[2]
            int32_t eax_12 = eax_11[3]
            int32_t ebx_3 = *(arg3 + 0x18) * var_584 + var_570
            int32_t ecx_5 = *(arg3 + 0x14)
            char* eax_14 = sub_4cce80(0x10)
            *eax_14 = 0
            *(eax_14 + 4) = 0
            *(eax_14 + 8) = 0
            *(eax_14 + 0xc) = 0
            int32_t eax_15 = *(edi_2 + 0xc)
            
            if (eax_15 == 0)
                sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
                    "DefinitionGetSize")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* eax_16 = sub_4cce80(eax_15)
            int128_t* eax_17 = sub_4fe7d0(eax_16, edi_2)
            *eax_14 = eax_16
            *(eax_14 + 0xc) = edi_2
            void**** eax_18 = sub_509750(eax_17, eax_16, 3, eax_14)
            void**** edi_7
            
            if (eax_18 != 0)
                if (eax_18[1] != 3)
                    sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                        "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edi_7 = eax_18
            else
                char* var_564
                sub_509d90(&var_564, "!Null\Null", 3, &var_564)
                int32_t var_c_1 = 0
                char* edx_8 = var_564
                
                if (edx_8 == 0)
                    edx_8 = &data_83f3d3
                
                void**** eax_20 = sub_509140(3, edx_8)
                int32_t var_c_2 = 0xffffffff
                char* eax_21 = var_564
                
                if (eax_21 != 0 && *eax_21 != 0)
                    if (*(eax_21 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp1_1 = *(eax_21 - 0xc)
                    *(eax_21 - 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int32_t edi_4 = *(eax_21 - 4) + 0x10
                        
                        if (data_26a44e4 == 0)
                            sub_4f4250()
                        
                        for (int32_t i = 0; i s< 7; i += 1)
                            if (edi_4 s<= 1 << (i.b + 4))
                                sub_4f4430(&eax_21[0xfffffff0], data_26a44e4 + i * 0x14, edi_4)
                                edi_7 = eax_20
                                goto label_54fd3a
                        
                        sub_4f4430(&eax_21[0xfffffff0], data_26a44e4 + 0x8c, edi_4)
                
                edi_7 = eax_20
            
        label_54fd3a:
            bool cond:0_1 = *edi_7 != 0
            void**** var_524 = edi_7
            
            if (not(cond:0_1))
                sub_5094d0(edi_7, 0, 1)
            
            void*** eax_25 = *edi_7
            edi_7[7] += 1
            void** eax_26 = *eax_25
            int32_t var_c_3 = 1
            void** eax_27 = __execvp(0x40, 0x10)
            
            if (eax_27 == 0)
                sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4fe7d0(eax_27, data_30d746c)
            *eax_27 = var_56c
            eax_27[1] = var_56c
            eax_27[4] = 8
            eax_27[5] = ecx_5
            eax_27[6] = 3
            eax_27[3] = 1
            eax_27[0xd] = 0
            eax_27[0xf] = 0
            
            if (*eax_26 != 0)
                sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 
                    0x3cf, "TextureCreateForRendering")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_c_4 = 0xffffffff
            *eax_26 = eax_27
            edi_7[7] -= 1
            void* eax_29 = data_27e7fe4
            *(eax_29 + 0x244) += 1
            int32_t* eax_30 = eax_29 + ((*(eax_29 + 0x244) * 5 + 0x41) << 2)
            var_428[ebx_3] = eax_18
            *eax_30 = 2
            eax_30[2] = eax_18
            eax_30[3] = 0
            eax_30[4].b = 0
            
            if (data_3078599 != 0)
                sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Renderer.cpp", 0x277, 
                    "GraphicsSetRT")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_54b920(0)
            (*(*data_3078804 + 0x88))(eax_18, 0)
            *(data_27e7fe4 + 0xdd) = 1
            
            if (data_27e8404 != 1)
                data_27e8404 = 1
                sub_4ddbe0(&data_27e8024)
            
            if (data_27e8404 != 0)
                data_27e8404 = 0
                sub_4ddbe0(&data_27e8024)
            
            (*(*data_3078804 + 0x8c))(data_27e8020)
            float var_508 = edx_5
            int32_t var_504_1 = ecx_4
            int32_t var_500_1 = edx_6
            int32_t var_4fc_1 = eax_12
            float var_4f8_1 = var_c8
            float var_4f4_1 = var_c4
            float var_4f0_1 = var_c0
            void var_38
            __builtin_memcpy(&var_38, &var_508, 0x1c)
            float* eax_37
            int32_t edx_19
            eax_37, edx_19 = sub_508860(&var_508, &var_38)
            float var_54[0x7]
            __builtin_memcpy(&var_54, eax_37, 0x1c)
            float var_4a8[0x10]
            sub_4e4a20(&var_4a8, edx_19, &var_54)
            bool cond:2_1 = data_3078599 != 0
            void var_468
            __builtin_memcpy(&var_468, &var_4a8, 0x40)
            
            if (cond:2_1)
                sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x35f, 
                    "Draw3DSetView")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            long double x87_r7_10 = fconvert.t(var_98)
            long double x87_r5_8 = fconvert.t(2.0)
            __builtin_memcpy(0x27e82b4, &var_468, 0x40)
            long double x87_r6_10 = fconvert.t(0.5)
            long double x87_r7_16 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_10)) * x87_r5_8)) * x87_r6_10))
            long double x87_r5_10 = float.t(0)
            float var_510_1 = fconvert.s(x87_r7_16 + x87_r5_10)
            long double x87_r5_12 =
                fconvert.t(fconvert.s(x87_r6_10 * fconvert.t(fconvert.s(x87_r7_10 * x87_r5_8))))
            float var_50c_1 = fconvert.s(x87_r5_12 + x87_r5_10)
            float var_4e8 = fconvert.s(fconvert.t(fconvert.s(x87_r5_10 - x87_r7_16)))
            float var_4e4_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5_10 - x87_r5_12)))
            float var_4d8_1 = fconvert.s(fconvert.t(var_90))
            float var_4e0_1 = fconvert.s(fconvert.t(var_510_1))
            float var_4dc_1 = fconvert.s(fconvert.t(var_50c_1))
            float var_4d4_1 = fconvert.s(fconvert.t(var_8c))
            sub_4ddbe0(&var_4e8)
            data_27e8498 = 0x3f800000
            data_27e84a4 = 0x3f800000
            data_27e849c = 0x3f800000
            data_27e84a0 = 0x3f800000
            __builtin_memcpy(0x27e80ac, 0x83faf8, 0x40)
            __builtin_memcpy(0x27e816c, 0x27e82b4, 0x40)
            sub_406020(&var_4a8, 0x27e816c, 0x27e80ac)
            __builtin_memcpy(0x27e80ec, &var_4a8, 0x40)
            sub_406020(&var_4a8, 0x27e81ec, 0x27e816c)
            __builtin_memcpy(0x27e81ac, &var_4a8, 0x40)
            sub_406020(&var_4a8, 0x27e81ec, 0x27e80ec)
            int32_t edx_22 = arg3
            __builtin_memcpy(0x27e812c, &var_4a8, 0x40)
            bool cond:3_1 = (data_3165948 & 1) != 0
            data_27e847c = fconvert.s(float.t(var_570) / float.t(*(edx_22 + 0x18) - 1))
            char* eax_45
            
            if (cond:3_1)
                eax_45 = data_3165944
            else
                data_3165948.d |= 1
                int32_t var_c_5 = 2
                eax_45, edx_22 = sub_509140(2, "sys/skybox.structure")
                data_3165944 = eax_45
                int32_t var_c_6 = 0xffffffff
            
            if ((data_3165948 & 2) == 0)
                data_3165948.d |= 2
                int32_t var_c_7 = 3
                char** eax_46
                eax_46, edx_22 = sub_509140(5, "sys/pbr/ibl_prefilter.material")
                data_3165940 = eax_46
                int32_t var_c_8 = 0xffffffff
                eax_45 = data_3165944
            
            if (*(eax_45 + 4) != 2)
                sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, 
                    "AssetUtils.cpp", 0x30c, "StructureDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*eax_45 == 0)
                sub_520800(eax_45, edx_22.b, eax_45, 0)
                
                if (*eax_45 == 0)
                    sub_509540(eax_45)
            
            int32_t* eax_48 = **eax_45
            
            if (*eax_48 == 0)
                sub_4c5870("pDefStructure->pStructureImportData", &data_83f3d3, "IBLImport.cpp", 0x31a, 
                    "HDRCubeToPrefilter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (data_3078599 != 0)
                sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "DrawMode.cpp", 0xd, 
                    "DrawModeSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_49 = data_26a6538
            
            if (eax_49 != 2)
                if (eax_49 != 0)
                    if (eax_49 == 1)
                        sub_4d95a0()
                    else if (eax_49 != 2)
                        sub_4c5870("Halt", &data_83f3d3, "DrawMode.cpp", 0x1f, "DrawModeSet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                sub_4e20f0()
                data_26a6538 = 2
            
            int32_t edx_23 = data_30785ac
            data_30785ac = 2
            int32_t* esi_8 = *eax_48
            int32_t i_1 = 0
            int32_t i_5 = 0
            
            if (*esi_8 s> 0)
                do
                    int32_t var_248
                    sub_5abfc0(&var_248, 0, 0x180)
                    int32_t var_200_1 = data_3165940
                    var_248 = 0
                    int32_t var_244_1 = i_1 * 0x140 + esi_8[1]
                    void var_240
                    __builtin_memcpy(&var_240, 0x83faf8, 0x40)
                    float var_e0_1 = fconvert.s(float.t(1))
                    int32_t var_1fc_1 = arg5
                    int32_t var_1b8_1 = 0x3f800000
                    int32_t var_1b4_1 = 0x3f800000
                    int32_t var_1b0_1 = 0x3f800000
                    int32_t var_1ac_1 = 0x3f800000
                    
                    if (i_1 == 0)
                        sub_4db6b0()
                        i_1 = i_5
                    
                    sub_4dbfd0(&var_248)
                    esi_8 = *eax_48
                    i_1 += 1
                    i_5 = i_1
                while (i_1 s< *esi_8)
            
            data_30785ac = edx_23
            sub_54b920(0)
            sub_4e5ea0()
            void* eax_59 = &var_584[1]
            var_584 = eax_59
            
            if (eax_59 s>= 6)
                int32_t eax_61
                edx:eax_61 = sx.q(var_56c)
                var_56c = (eax_61 - edx) s>> 1
                int32_t eax_65 = var_570 + 1
                var_570 = eax_65
                
                if (eax_65 s< *(arg3 + 0x18))
                    goto label_54fad0
                
                break
    
    if (arg4 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const ebx_4
    
    if (*arg4 != 0)
        char* eax_77 = arg4
        void* edx_26 = &eax_77[1]
        char i_2
        
        do
            i_2 = *eax_77
            eax_77 = &eax_77[1]
        while (i_2 != 0)
        char* const* var_598_11 = &var_584
        sub_4c40c0(eax_77 - edx_26, edx_26)
        ebx_4 = var_584
        char* eax_79 = arg4
        edx = ebx_4 - arg4
        char i_3
        
        do
            i_3 = *eax_79
            *(eax_79 + edx) = i_3
            eax_79 = &eax_79[1]
        while (i_3 != 0)
    else
        ebx_4 = &data_83f3d3
        var_584 = &data_83f3d3
    
    int32_t var_c_9 = 4
    char* const ebx_5
    
    if (ebx_4 == 0 || *ebx_4 == 0)
        char* const* var_598_12 = &var_584
        sub_4c40c0(4, edx)
        ebx_5 = var_584
        char const* const eax_80 = "_pre"
        char const i_4
        
        do
            i_4 = *eax_80
            *(ebx_5 - "_pre" + eax_80) = i_4
            eax_80 = &eax_80[1]
        while (i_4 != 0)
    else
        void* esi_10 = *(sub_4c4060(&var_584) + 8)
        sub_4c4160(esi_10 + 4, edx, &var_584, esi_10 + 4, 1)
        ebx_5 = var_584
        __builtin_strncpy(esi_10 + ebx_5, "_pre", 5)
    
    char** result = sub_54d590(&var_584, &var_428, *(arg3 + 0x18))
    sub_509bf0(result)
    
    if (*result != 0)
        if (result[7] != 0)
            sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", 0x32, 
                "AssetCatalogPurgeAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_520bc0(result)
        *result = nullptr
    
    int32_t var_c_10 = 0xffffffff
    
    if (ebx_5 != 0 && *ebx_5 != 0)
        void* eax_88 = sub_4c4060(&var_584)
        int32_t temp2_1 = *(eax_88 + 4)
        *(eax_88 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_12 = *(eax_88 + 0xc) + 0x10
            sub_4f4430(eax_88, sub_4f4380(esi_12), esi_12)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_584)
    return result
}

// 函数名称: sub_54e610
// 虚拟地址: 0x54e610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_54e610(void* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6934d2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_42c
    int32_t eax_2 = __security_cookie ^ &var_42c
    int32_t __saved_edi
    int32_t var_43c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(0.78539818525314331)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    float var_8c = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    float var_84 = fconvert.s(fconvert.t(data_27e8034))
    float var_a8 = 0f
    float var_ac = 0f
    float var_80 = fconvert.s(fconvert.t(data_27e8038))
    float var_b0 = 0f
    long double x87_r7_4 = fconvert.t(0f)
    void* eax_6 = nullptr
    long double x87_r6 = fconvert.t(0f)
    var_42c = nullptr
    long double x87_r5 = fconvert.t(var_b0)
    long double x87_r4 = fconvert.t(-0f)
    long double x87_r3 = fconvert.t(-1f)
    int32_t var_2f0[0x6]
    void** edx_25
    
    while (true)
        if (eax_6 u> 5)
            sub_4c5870("Halt", &data_83f3d3, "IBLImport.cpp", 0x223, "HDRCubeToIrradiance")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float var_c8_1
        float var_c4_1
        float var_c0_1
        float eax_8
        float ecx_2
        float edx_2
        
        switch (eax_6)
            case nullptr
                var_c8_1 = fconvert.s(x87_r4)
                ecx_2 = fconvert.s(x87_r3)
                var_c4_1 = fconvert.s(x87_r3)
                edx_2 = fconvert.s(x87_r4)
                var_c0_1 = fconvert.s(x87_r4)
                eax_8 = fconvert.s(x87_r4)
            case 1
                var_c8_1 = 0f
                ecx_2 = fconvert.s(x87_r3)
                var_c4_1 = 1f
                edx_2 = fconvert.s(x87_r4)
                var_c0_1 = 0f
                eax_8 = fconvert.s(x87_r4)
            case 2
                var_c8_1 = fconvert.s(x87_r3)
                ecx_2 = fconvert.s(x87_r4)
                var_c4_1 = fconvert.s(x87_r4)
                edx_2 = fconvert.s(x87_r4)
                var_c0_1 = fconvert.s(x87_r4)
                eax_8 = fconvert.s(x87_r3)
            case 3
                x87_r5 = x87_r4
                var_c8_1 = 1f
                ecx_2 = 0f
                var_c4_1 = 0f
                edx_2 = 0f
                var_c0_1 = 0f
                eax_8 = 1f
            case 4
                var_c8_1 = 0f
                ecx_2 = fconvert.s(x87_r3)
                var_c4_1 = 0f
                edx_2 = fconvert.s(x87_r4)
                var_c0_1 = 1f
                eax_8 = fconvert.s(x87_r4)
            case 5
                var_c8_1 = fconvert.s(x87_r4)
                ecx_2 = fconvert.s(x87_r3)
                var_c4_1 = fconvert.s(x87_r4)
                edx_2 = fconvert.s(x87_r4)
                var_c0_1 = fconvert.s(x87_r3)
                eax_8 = fconvert.s(x87_r4)
        
        float var_b4_1 = eax_8
        float var_b8_1 = edx_2
        float var_bc = ecx_2
        float var_3f4_1 = fconvert.s(fconvert.t(var_c4_1) + x87_r6)
        float var_3f0_1 = fconvert.s(fconvert.t(var_c0_1) + x87_r7_4)
        float var_a4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c8_1) + x87_r5)) - x87_r5)
        float var_a0_1 = fconvert.s(fconvert.t(var_3f4_1) - x87_r6)
        float var_9c_1 = fconvert.s(fconvert.t(var_3f0_1) - x87_r7_4)
        float var_300[0x4]
        float* eax_12 = sub_4131a0(&var_a4, &var_300)
        float var_98 = *eax_12
        int32_t var_94_1 = eax_12[1]
        int32_t var_90_1 = eax_12[2]
        float var_298[0x4]
        float* eax_14 = sub_413800(&var_298, &var_bc)
        float ecx_7 = *eax_14
        int32_t edx_7 = eax_14[1]
        void* edi_2 = data_30d7470
        int32_t edx_8 = eax_14[3]
        int32_t var_70 = eax_14[2]
        int32_t ecx_9 = *(arg1 + 0xc)
        int32_t edx_9 = *(arg1 + 8)
        int32_t* eax_16
        int32_t edx_10
        eax_16, edx_10 = sub_4ff5f0(edi_2)
        char** eax_17 = sub_509750(eax_16, edx_10, 3, eax_16)
        char** edi_3
        
        if (eax_17 != 0)
            if (eax_17[1] != 3)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edi_3 = eax_17
        else
            edi_3 = sub_50a390(eax_17 + 3)
        
        char** var_428_1 = edi_3
        
        if (*edi_3 == 0)
            sub_5094d0(edi_3, 0, 1)
        
        char* eax_19 = *edi_3
        edi_3[7] = &edi_3[7][1]
        int32_t** eax_20 = *eax_19
        int32_t var_c_1 = 0
        int32_t* eax_21 = __execvp(0x40, 0x10)
        
        if (eax_21 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4fe7d0(eax_21, data_30d746c)
        *eax_21 = edx_9
        eax_21[1] = edx_9
        eax_21[4] = 8
        eax_21[5] = ecx_9
        eax_21[6] = 3
        eax_21[3] = 1
        eax_21[0xd] = 0
        eax_21[0xf] = 0
        
        if (*eax_20 != 0)
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 0x3cf, 
                "TextureCreateForRendering")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_c_2 = 0xffffffff
        *eax_20 = eax_21
        edi_3[7] = &edi_3[7][0xffffffff]
        var_2f0[var_42c] = eax_17
        void* eax_24 = data_27e7fe4
        *(eax_24 + 0x244) += 1
        int32_t* eax_25 = eax_24 + ((*(eax_24 + 0x244) * 5 + 0x41) << 2)
        *eax_25 = 2
        eax_25[2] = eax_17
        eax_25[3] = 0
        eax_25[4].b = 0
        
        if (data_3078599 != 0)
            sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Renderer.cpp", 0x277, 
                "GraphicsSetRT")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_54b920(0)
        (*(*data_3078804 + 0x88))(eax_17, 0)
        *(data_27e7fe4 + 0xdd) = 1
        
        if (data_27e8404 != 1)
            data_27e8404 = 1
            sub_4ddbe0(&data_27e8024)
        
        if (data_27e8404 != 0)
            data_27e8404 = 0
            sub_4ddbe0(&data_27e8024)
        
        (*(*data_3078804 + 0x8c))(0xffff0000)
        int32_t edx_16 = var_70
        float var_340 = ecx_7
        int32_t var_33c_1 = edx_7
        int32_t var_338_1 = edx_16
        int32_t var_334_1 = edx_8
        float var_330_1 = var_b0
        float var_32c_1 = var_ac
        float var_328_1 = var_a8
        void var_54
        __builtin_memcpy(&var_54, &var_340, 0x1c)
        float* eax_30
        int32_t edx_18
        eax_30, edx_18 = sub_508860(&var_340, &var_54)
        float var_38[0x7]
        __builtin_memcpy(&var_38, eax_30, 0x1c)
        float var_2d8[0x4]
        sub_4e4a20(&var_2d8, edx_18, &var_38)
        bool cond:1_1 = data_3078599 != 0
        void var_288
        __builtin_memcpy(&var_288, &var_2d8, 0x40)
        
        if (cond:1_1)
            sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x35f, 
                "Draw3DSetView")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        long double x87_r7_6 = fconvert.t(var_8c)
        long double x87_r5_3 = fconvert.t(2.0)
        __builtin_memcpy(0x27e82b4, &var_288, 0x40)
        long double x87_r6_5 = fconvert.t(0.5)
        long double x87_r7_12 = fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_6)) * x87_r5_3)) * x87_r6_5))
        long double x87_r5_5 = float.t(0)
        float var_3d0_1 = fconvert.s(x87_r7_12 + x87_r5_5)
        long double x87_r5_7 =
            fconvert.t(fconvert.s(x87_r6_5 * fconvert.t(fconvert.s(x87_r7_6 * x87_r5_3))))
        float var_3cc_1 = fconvert.s(x87_r5_7 + x87_r5_5)
        float var_320 = fconvert.s(fconvert.t(fconvert.s(x87_r5_5 - x87_r7_12)))
        float var_35c = fconvert.s(fconvert.t(fconvert.s(x87_r5_5 - x87_r5_7)))
        float var_31c_1 = var_35c
        float var_354_1 = fconvert.s(fconvert.t(var_3cc_1))
        float var_310_1 = fconvert.s(fconvert.t(var_84))
        float var_318 = fconvert.s(fconvert.t(var_3d0_1))
        float var_314_1 = var_354_1
        float var_30c_1 = fconvert.s(fconvert.t(var_80))
        sub_4ddbe0(&var_320)
        data_27e8498 = 0x3f800000
        data_27e84a4 = 0x3f800000
        data_27e849c = 0x3f800000
        data_27e84a0 = 0x3f800000
        __builtin_memcpy(0x27e80ac, 0x83faf8, 0x40)
        __builtin_memcpy(0x27e816c, 0x27e82b4, 0x40)
        sub_406020(&var_2d8, 0x27e816c, 0x27e80ac)
        __builtin_memcpy(0x27e80ec, &var_2d8, 0x40)
        sub_406020(&var_2d8, 0x27e81ec, 0x27e816c)
        __builtin_memcpy(0x27e81ac, &var_2d8, 0x40)
        char edx_21 = -0x14
        sub_406020(&var_2d8, 0x27e81ec, 0x27e80ec)
        bool cond:2_1 = (data_3165960 & 1) != 0
        __builtin_memcpy(0x27e812c, &var_2d8, 0x40)
        char** eax_36
        
        if (cond:2_1)
            eax_36 = data_316595c
        else
            data_3165960.d |= 1
            int32_t var_c_3 = 1
            eax_36, edx_21 = sub_509140(2, "sys/skybox.structure")
            data_316595c = eax_36
            int32_t var_c_4 = 0xffffffff
        
        if ((data_3165960 & 2) == 0)
            data_3165960.d |= 2
            int32_t var_c_5 = 2
            char** eax_37
            eax_37, edx_21 = sub_509140(5, "sys/pbr/ibl_irradiance.material")
            data_3165958 = eax_37
            int32_t var_c_6 = 0xffffffff
            eax_36 = data_316595c
        
        if (eax_36[1] != 2)
            sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, "AssetUtils.cpp", 
                0x30c, "StructureDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*eax_36 == 0)
            sub_520800(eax_36, edx_21, eax_36, 0)
            
            if (*eax_36 == 0)
                sub_509540(eax_36)
        
        int32_t* eax_39 = **eax_36
        
        if (*eax_39 == 0)
            sub_4c5870("pDefStructure->pStructureImportData", &data_83f3d3, "IBLImport.cpp", 0x247, 
                "HDRCubeToIrradiance")
            
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
        
        int32_t eax_40 = data_26a6538
        
        if (eax_40 != 2)
            if (eax_40 != 0)
                if (eax_40 == 1)
                    sub_4d95a0()
                else
                    if (eax_40 != 2)
                        sub_4c5870("Halt", &data_83f3d3, "DrawMode.cpp", 0x1f, "DrawModeSet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_4e2130()
            
            sub_4e20f0()
            data_26a6538 = 2
        
        int32_t eax_44 = data_30785ac
        data_30785ac = 2
        int32_t* esi_6 = *eax_39
        int32_t i = 0
        int32_t i_4 = 0
        
        if (*esi_6 s> 0)
            do
                int32_t var_248
                sub_5abfc0(&var_248, 0, 0x180)
                int32_t var_200_1 = data_3165958
                var_248 = 0
                int32_t var_244_1 = i * 0x140 + esi_6[1]
                void var_240
                __builtin_memcpy(&var_240, 0x83faf8, 0x40)
                float var_e0_1 = fconvert.s(float.t(1))
                int32_t var_1fc_1 = arg3
                int32_t var_1b8_1 = 0x3f800000
                int32_t var_1b4_1 = 0x3f800000
                int32_t var_1b0_1 = 0x3f800000
                int32_t var_1ac_1 = 0x3f800000
                
                if (i == 0)
                    sub_4db6b0()
                    i = i_4
                
                sub_4dbfd0(&var_248)
                esi_6 = *eax_39
                i += 1
                i_4 = i
            while (i s< *esi_6)
        
        data_30785ac = eax_44
        sub_54b920(0)
        char ecx_27
        ecx_27, edx_25 = sub_4e5ea0()
        eax_6 = &var_42c[1]
        var_42c = eax_6
        
        if (eax_6 s>= 6)
            break
        
        x87_r5 = fconvert.t(var_b0)
        x87_r7_4 = fconvert.t(var_a8)
        x87_r6 = fconvert.t(var_ac)
        x87_r3 = fconvert.t(-1f)
        x87_r4 = fconvert.t(-0f)
    
    if (arg2 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const edi_4
    
    if (*arg2 != 0)
        char* eax_59 = arg2
        void* edx_26 = &eax_59[1]
        char i_1
        
        do
            i_1 = *eax_59
            eax_59 = &eax_59[1]
        while (i_1 != 0)
        char* const* var_440_6 = &var_42c
        sub_4c40c0(eax_59 - edx_26, edx_26)
        edi_4 = var_42c
        char* eax_61 = arg2
        edx_25 = edi_4 - arg2
        char i_2
        
        do
            i_2 = *eax_61
            *(eax_61 + edx_25) = i_2
            eax_61 = &eax_61[1]
        while (i_2 != 0)
    else
        edi_4 = &data_83f3d3
        var_42c = &data_83f3d3
    
    int32_t var_c_7 = 3
    char* const ebx_2
    
    if (edi_4 == 0 || *edi_4 == 0)
        char* const* var_440_7 = &var_42c
        sub_4c40c0(4, edx_25)
        ebx_2 = var_42c
        char const* const eax_62 = "_irr"
        char const i_3
        
        do
            i_3 = *eax_62
            *(ebx_2 - "_irr" + eax_62) = i_3
            eax_62 = &eax_62[1]
        while (i_3 != 0)
    else
        void* esi_8 = *(sub_4c4060(&var_42c) + 8)
        sub_4c4160(esi_8 + 4, edx_25, &var_42c, esi_8 + 4, 1)
        ebx_2 = var_42c
        __builtin_strncpy(esi_8 + ebx_2, "_irr", 5)
    
    char** result = sub_54d590(&var_42c, &var_2f0, 1)
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
    
    int32_t var_c_8 = 0xffffffff
    
    if (ebx_2 != 0 && *ebx_2 != 0)
        if (*(ebx_2 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp4_1 = *(ebx_2 - 0xc)
        *(ebx_2 - 0xc) -= 1
        
        if (temp4_1 == 1)
            void* edx_30 = data_26a44e4
            int32_t esi_10 = *(ebx_2 - 4) + 0x10
            
            if (edx_30 == 0)
                sub_4f4250()
                edx_30 = data_26a44e4
            
            int32_t eax_70 = 0
            int32_t* edi_7
            
            while (true)
                if (esi_10 s<= 1 << (eax_70.b + 4))
                    edi_7 = edx_30 + eax_70 * 0x14
                    break
                
                eax_70 += 1
                
                if (eax_70 s>= 7)
                    edi_7 = edx_30 + 0x8c
                    break
            
            sub_4f4430(&ebx_2[0xfffffff0], edi_7, esi_10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_42c)
    return result
}

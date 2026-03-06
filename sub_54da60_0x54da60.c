// 函数名称: sub_54da60
// 虚拟地址: 0x54da60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_54da60(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_693527
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_39c
    int32_t eax_2 = __security_cookie ^ &var_39c
    int32_t __saved_edi
    int32_t var_3ac = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(0.78539818525314331)
    int32_t var_344 = arg3
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    float var_98 = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    float var_90 = fconvert.s(fconvert.t(data_27e8034))
    float var_c8 = 0f
    float var_c4 = 0f
    float var_8c = fconvert.s(fconvert.t(data_27e8038))
    float var_c0 = 0f
    int32_t result_1 = 0
    
    while (true)
        float var_bc
        void var_60
        sub_54d8d0(&var_60, result_1, &var_bc)
        long double x87_r6_1 = fconvert.t(var_c8)
        long double x87_r5_2 = fconvert.t(var_c4)
        float var_b8
        float var_374_1 = fconvert.s(fconvert.t(var_b8) + x87_r5_2)
        long double x87_r4_2 = fconvert.t(var_c0)
        float var_b4
        float var_370_1 = fconvert.s(fconvert.t(var_b4) + x87_r4_2)
        float var_a4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_bc) + x87_r6_1)) - x87_r6_1)
        float var_a0_1 = fconvert.s(fconvert.t(var_374_1) - x87_r5_2)
        float var_9c_1 = fconvert.s(fconvert.t(var_370_1) - x87_r4_2)
        float var_2e8[0x4]
        float* eax_8 = sub_4131a0(&var_a4, &var_2e8)
        float var_b0 = *eax_8
        int32_t var_ac_1 = eax_8[1]
        int32_t var_a8_1 = eax_8[2]
        float var_2d8[0x4]
        float* eax_9 = sub_413800(&var_2d8, &var_60)
        float edx_4 = *eax_9
        int32_t ecx_4 = eax_9[1]
        void* edi_2 = data_30d7470
        int32_t edx_5 = eax_9[2]
        int32_t eax_10 = eax_9[3]
        int32_t* eax_11 = sub_4cce80(0x10)
        *eax_11 = 0
        eax_11[1] = 0
        eax_11[2] = 0
        eax_11[3] = 0
        int32_t eax_12 = *(edi_2 + 0xc)
        
        if (eax_12 == 0)
            sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
                "DefinitionGetSize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* eax_13 = sub_4cce80(eax_12)
        int128_t* eax_14
        int32_t edx_6
        eax_14, edx_6 = sub_4fe7d0(eax_13, edi_2)
        *eax_11 = eax_13
        eax_11[3] = edi_2
        char** eax_15 = sub_509750(eax_14, edx_6, 3, eax_11)
        char** edi_3
        
        if (eax_15 != 0)
            if (eax_15[1] != 3)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edi_3 = eax_15
        else
            edi_3 = sub_50a390(eax_15 + 3)
        
        char** var_398_1 = edi_3
        
        if (*edi_3 == 0)
            sub_5094d0(edi_3, 0, 1)
        
        char* eax_17 = *edi_3
        edi_3[7] = &edi_3[7][1]
        int32_t** ecx_6 = *eax_17
        int32_t var_c_1 = 0
        int32_t* eax_18 = __execvp(0x40, 0x10)
        
        if (eax_18 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4fe7d0(eax_18, data_30d746c)
        *eax_18 = arg5
        eax_18[1] = arg5
        eax_18[5] = arg6
        eax_18[4] = 8
        eax_18[6] = 3
        eax_18[3] = 1
        eax_18[0xd] = 0
        eax_18[0xf] = 0
        
        if (*ecx_6 != 0)
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 0x3cf, 
                "TextureCreateForRendering")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *ecx_6 = eax_18
        int32_t var_c_2 = 0xffffffff
        edi_3[7] = &edi_3[7][0xffffffff]
        *(var_344 + (result_1 << 2)) = eax_15
        void* eax_23 = data_27e7fe4
        *(eax_23 + 0x244) += 1
        int32_t* eax_24 = eax_23 + ((*(eax_23 + 0x244) * 5 + 0x41) << 2)
        *eax_24 = 2
        eax_24[2] = eax_15
        eax_24[3] = 0
        eax_24[4].b = 0
        
        if (data_3078599 != 0)
            sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Renderer.cpp", 0x277, 
                "GraphicsSetRT")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_54b920(0)
        (*(*data_3078804 + 0x88))(eax_15, 0)
        *(data_27e7fe4 + 0xdd) = 1
        
        if (data_27e8404 != 1)
            data_27e8404 = 1
            sub_4ddbe0(&data_27e8024)
        
        if (data_27e8404 != 0)
            data_27e8404 = 0
            sub_4ddbe0(&data_27e8024)
        
        (*(*data_3078804 + 0x8c))(0xff0000ff)
        float var_328 = edx_4
        int32_t var_324_1 = ecx_4
        int32_t var_320_1 = edx_5
        int32_t var_31c_1 = eax_10
        float var_318_1 = var_c8
        float var_314_1 = var_c4
        float var_310_1 = var_c0
        void var_38
        __builtin_memcpy(&var_38, &var_328, 0x1c)
        float* eax_29
        int32_t edx_13
        eax_29, edx_13 = sub_508860(&var_328, &var_38)
        float var_54[0x7]
        __builtin_memcpy(&var_54, eax_29, 0x1c)
        float var_2c8[0x10]
        sub_4e4a20(&var_2c8, edx_13, &var_54)
        bool cond:1_1 = data_3078599 != 0
        void var_288
        __builtin_memcpy(&var_288, &var_2c8, 0x40)
        
        if (cond:1_1)
            sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x35f, 
                "Draw3DSetView")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        long double x87_r7_10 = fconvert.t(var_98)
        long double x87_r5_8 = fconvert.t(2.0)
        __builtin_memcpy(0x27e82b4, &var_288, 0x40)
        long double x87_r6_10 = fconvert.t(0.5)
        long double x87_r7_16 = fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_10)) * x87_r5_8)) * x87_r6_10))
        long double x87_r5_10 = float.t(0)
        float var_384_1 = fconvert.s(x87_r7_16 + x87_r5_10)
        long double x87_r5_12 =
            fconvert.t(fconvert.s(x87_r6_10 * fconvert.t(fconvert.s(x87_r7_10 * x87_r5_8))))
        float var_380_1 = fconvert.s(x87_r5_12 + x87_r5_10)
        float var_308 = fconvert.s(fconvert.t(fconvert.s(x87_r5_10 - x87_r7_16)))
        float var_304_1 = fconvert.s(fconvert.t(fconvert.s(x87_r5_10 - x87_r5_12)))
        float var_2f8_1 = fconvert.s(fconvert.t(var_90))
        float var_300_1 = fconvert.s(fconvert.t(var_384_1))
        float var_2fc_1 = fconvert.s(fconvert.t(var_380_1))
        float var_2f4_1 = fconvert.s(fconvert.t(var_8c))
        sub_4ddbe0(&var_308)
        data_27e8498 = 0x3f800000
        data_27e84a4 = 0x3f800000
        data_27e849c = 0x3f800000
        data_27e84a0 = 0x3f800000
        __builtin_memcpy(0x27e80ac, 0x83faf8, 0x40)
        __builtin_memcpy(0x27e816c, 0x27e82b4, 0x40)
        sub_406020(&var_2c8, 0x27e816c, 0x27e80ac)
        __builtin_memcpy(0x27e80ec, &var_2c8, 0x40)
        sub_406020(&var_2c8, 0x27e81ec, 0x27e816c)
        __builtin_memcpy(0x27e81ac, &var_2c8, 0x40)
        char edx_16 = -0x14
        sub_406020(&var_2c8, 0x27e81ec, 0x27e80ec)
        bool cond:2_1 = (data_316596c & 1) != 0
        __builtin_memcpy(0x27e812c, &var_2c8, 0x40)
        char** eax_35
        
        if (cond:2_1)
            eax_35 = data_3165968
        else
            data_316596c.d |= 1
            int32_t var_c_3 = 1
            eax_35, edx_16 = sub_509140(2, "sys/editor/video_sphere.structure")
            data_3165968 = eax_35
            int32_t var_c_4 = 0xffffffff
        
        if ((data_316596c & 2) == 0)
            data_316596c.d |= 2
            int32_t var_c_5 = 2
            char** eax_36
            eax_36, edx_16 = sub_509140(5, "sys/skybox_equi.material")
            data_3165964 = eax_36
            int32_t var_c_6 = 0xffffffff
            eax_35 = data_3165968
        
        if (eax_35[1] != 2)
            sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, "AssetUtils.cpp", 
                0x30c, "StructureDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*eax_35 == 0)
            sub_520800(eax_35, edx_16, eax_35, 0)
            
            if (*eax_35 == 0)
                sub_509540(eax_35)
        
        int32_t* esi_8 = **eax_35
        
        if (*esi_8 == 0)
            sub_4c5870("pDefStructure->pStructureImportData", &data_83f3d3, "IBLImport.cpp", 0x11c, 
                "DrawCubemap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (data_3078599 != 0)
            break
        
        int32_t eax_38 = data_26a6538
        
        if (eax_38 != 2)
            if (eax_38 != 0)
                if (eax_38 == 1)
                    sub_4d95a0()
                else
                    if (eax_38 != 2)
                        sub_4c5870("Halt", &data_83f3d3, "DrawMode.cpp", 0x1f, "DrawModeSet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_4e2130()
            
            sub_4e20f0()
            data_26a6538 = 2
        
        int32_t eax_42 = data_30785ac
        data_30785ac = 2
        int32_t* esi_9 = *esi_8
        int32_t i = 0
        int32_t i_1 = 0
        
        if (*esi_9 s> 0)
            do
                int32_t var_248
                sub_5abfc0(&var_248, 0, 0x180)
                int32_t var_200_1 = data_3165964
                var_248 = 0
                int32_t var_244_1 = i * 0x140 + esi_9[1]
                void var_240
                __builtin_memcpy(&var_240, 0x83faf8, 0x40)
                float var_e0_1 = fconvert.s(float.t(1))
                int32_t var_1fc_1 = arg4
                int32_t var_1b8_1 = 0x3f800000
                int32_t var_1b4_1 = 0x3f800000
                int32_t var_1b0_1 = 0x3f800000
                int32_t var_1ac_1 = 0x3f800000
                
                if (i == 0)
                    sub_4db6b0()
                    i = i_1
                
                sub_4dbfd0(&var_248)
                esi_9 = *esi_8
                i += 1
                i_1 = i
            while (i s< *esi_9)
        
        data_30785ac = eax_42
        sub_54b920(0)
        sub_4e5ea0()
        int32_t result = result_1 + 1
        result_1 = result
        
        if (result s>= 6)
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_5a6aba(eax_2 ^ &var_39c)
            return result
    
    sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "DrawMode.cpp", 0xd, "DrawModeSet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

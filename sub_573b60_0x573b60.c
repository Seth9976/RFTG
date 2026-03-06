// 函数名称: sub_573b60
// 虚拟地址: 0x573b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_573b60(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698d76
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* i_2
    int32_t var_1c = __security_cookie ^ &i_2
    int32_t esi
    int32_t var_16c = esi
    int32_t edi
    int32_t var_170 = edi
    char* var_174 = __security_cookie ^ &var_170
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(0.78539818525314331)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    float result_1 = fconvert.s(x87_r7)
    bool cond:0 = *(data_27e7fd0 + 0x1c) s<= 0
    float var_84 = fconvert.s(fconvert.t(result_1))
    long double x87_r7_2 = float.t(1)
    char var_54 = 0
    float var_80 = fconvert.s(x87_r7_2)
    float var_7c = fconvert.s(fconvert.t(data_27e8034))
    float var_78 = fconvert.s(fconvert.t(data_27e8038))
    float var_50 = fconvert.s(x87_r7_2)
    int16_t top = 0
    int32_t* var_17c
    char** result_12
    char** result_6
    
    if (cond:0)
        char* eax_14
        int32_t edx_2
        eax_14, edx_2 = sub_4ff5f0(data_30d7470)
        int32_t* result_3 = sub_509750(eax_14, edx_2, 3, eax_14)
        result_6 = result_3
        
        if (result_3 == 0)
            result_3 = sub_50a390(result_3 + 3)
        else if (result_3[1] != 3)
            char const* const var_178_65 = "DefAutoLock::DefAutoLock"
            var_17c = 0x19
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", var_17c, var_178_65)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        bool cond:1_1 = *result_3 != 0
        result_1 = result_3
        
        if (not(cond:1_1))
            char var_178_8 = 1
            var_17c = nullptr
            sub_5094d0(result_3, var_17c, var_178_8)
        
        int32_t* eax_15 = *result_3
        result_3[7] += 1
        int32_t** ebx_1 = *eax_15
        int32_t var_178_9 = 0x10
        var_17c = 0x40
        int32_t var_c_3 = 1
        int32_t* eax_16 = __execvp(var_17c, var_178_9)
        
        if (eax_16 == 0)
            char const* const var_178_10 = "XMalloc"
            var_17c = 0x4f
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", var_17c, var_178_10)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* ecx_3 = data_30d746c
        var_17c = eax_16
        sub_4fe7d0(var_17c, ecx_3)
        *eax_16 = 0x800
        eax_16[1] = 0x800
        eax_16[4] = 8
        eax_16[5] = 0x50
        eax_16[6] = 4
        eax_16[3] = 1
        eax_16[0xd] = 0
        eax_16[0xf] = 0
        
        if (*ebx_1 != 0)
            char const* const var_178_12 = "TextureCreateForRendering"
            var_17c = 0x3cf
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", var_17c, 
                var_178_12)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_c_4 = 0xffffffff
        char** result_8 = result_6
        *ebx_1 = eax_16
        result_3[7] -= 1
        result_12 = result_8
    else
        int32_t var_178 = 6
        var_17c = 0x50
        result_12 = sub_50bd60(0x800, 0x800, var_17c, var_178)
        int32_t* eax_7
        int32_t edx
        eax_7, edx = sub_4ff5f0(data_30d7470)
        char** result_2 = sub_509750(eax_7, edx, 3, eax_7)
        result_6 = result_2
        
        if (result_2 == 0)
            result_2 = sub_50a390(result_2 + 3)
        else if (result_2[1] != 3)
            char const* const var_178_6 = "DefAutoLock::DefAutoLock"
            var_17c = 0x19
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", var_17c, var_178_6)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        bool cond:2_1 = *result_2 != 0
        result_1 = result_2
        
        if (not(cond:2_1))
            char var_178_1 = 1
            var_17c = nullptr
            sub_5094d0(result_2, var_17c, var_178_1)
        
        char* eax_8 = *result_2
        result_2[7] = &result_2[7][1]
        int32_t** ebx = *eax_8
        int32_t var_178_2 = 0x10
        var_17c = 0x40
        int32_t var_c_1 = 0
        int32_t* eax_9 = __execvp(var_17c, var_178_2)
        
        if (eax_9 == 0)
            char const* const var_178_3 = "XMalloc"
            var_17c = 0x4f
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", var_17c, var_178_3)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* edx_1 = data_30d746c
        var_17c = eax_9
        sub_4fe7d0(var_17c, edx_1)
        eax_9[5] = 1
        eax_9[3] = 1
        *eax_9 = 0x800
        eax_9[1] = 0x800
        eax_9[4] = 8
        eax_9[6] = 5
        eax_9[0xd] = 0
        eax_9[0xf] = 0
        
        if (*ebx != 0)
            char const* const var_178_5 = "TextureCreateForRendering"
            var_17c = 0x3cf
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", var_17c, 
                var_178_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_c_2 = 0xffffffff
        *ebx = eax_9
        result_2[7] = &result_2[7][0xffffffff]
        result_6 = result_6
    
    i_2 = nullptr
    float var_148
    float var_120
    float var_100
    int32_t var_4c[0x6]
    float var_2c_1
    float ecx_4
    char** result_14
    char** result_10
    void* i
    
    do
        char* i_3 = i_2
        unimplemented  {fld st0, dword [0x8a5630]}
        unimplemented  {fld st0, dword [0x8a55f4]}
        
        if (i_3 u> 5)
            char const* const var_178_28 = "RenderEnvironmentMap"
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            var_17c = 0x80b
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            sub_4c5870("Halt", &data_83f3d3, "Editor\FabEditor.cpp", var_17c, var_178_28)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float eax_19
        float eax_20
        float ecx_5
        float edx_3
        float edx_4
        int16_t top_4
        
        switch (i_3)
            case nullptr
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_c8_1 = fconvert.s(unimplemented  {fst dword [esp+0xac], st0})
                float var_c0_1 = fconvert.s(unimplemented  {fstp dword [esp+0xb4], st0})
                unimplemented  {fstp dword [esp+0xb4], st0}
                int32_t var_34_1 = 0
                eax_19 = var_c8_1
                float var_c4_1 = fconvert.s(unimplemented  {fstp dword [esp+0xb0], st0})
                unimplemented  {fstp dword [esp+0xb0], st0}
                top_4 = top
                int32_t var_30_1 = 0
                ecx_4 = var_c4_1
                var_2c_1 = 1f
                edx_3 = var_c0_1
            case 1
                float var_b0_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc4], st0})
                unimplemented  {fstp dword [esp+0xc4], st0}
                eax_20 = var_b0_1
                float var_ac_1 = fconvert.s(unimplemented  {fst dword [esp+0xc8], st0})
                ecx_5 = var_ac_1
                float var_a8_1 = fconvert.s(unimplemented  {fstp dword [esp+0xcc], st0})
                unimplemented  {fstp dword [esp+0xcc], st0}
                top_4 = top
                edx_4 = var_a8_1
            label_573f51:
                float var_30_2 = ecx_5
                ecx_4 = 0f
                float var_34_2 = eax_20
                eax_19 = 0f
                var_2c_1 = edx_4
                edx_3 = 1f
            case 2
                eax_20 = 0f
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                ecx_5 = 1f
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                top_4 = top
                edx_4 = 0f
                goto label_573f51
            case 3
                eax_20 = 1f
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                ecx_5 = 0f
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                top_4 = top
                edx_4 = 0f
                goto label_573f51
            case 4
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_f0_1 = fconvert.s(unimplemented  {fst dword [esp+0x84], st0})
                eax_20 = var_f0_1
                float var_e8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8c], st0})
                unimplemented  {fstp dword [esp+0x8c], st0}
                edx_4 = var_e8_1
                float var_ec_1 = fconvert.s(unimplemented  {fstp dword [esp+0x88], st0})
                unimplemented  {fstp dword [esp+0x88], st0}
                top_4 = top
                ecx_5 = var_ec_1
                goto label_573f51
            case 5
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_118_1 = fconvert.s(unimplemented  {fst dword [esp+0x5c], st0})
                float var_114_1 = fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
                unimplemented  {fstp dword [esp+0x60], st0}
                float var_34_3 = var_118_1
                eax_19 = 0f
                float var_110_1 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                unimplemented  {fstp dword [esp+0x64], st0}
                top_4 = top
                float var_30_3 = var_114_1
                ecx_4 = 1f
                var_2c_1 = var_110_1
                edx_3 = 0f
        
        float var_28 = eax_19
        unimplemented  {fld st0, dword [eax]}
        float var_20_1 = edx_3
        unimplemented  {fadd dword [esp+0x140]}
        float var_d8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
        unimplemented  {fstp dword [esp+0x9c], st0}
        unimplemented  {fld st0, dword [eax+0x4]}
        var_100 = var_d8_1
        unimplemented  {fadd dword [esp+0x144]}
        float var_d4_1 = fconvert.s(unimplemented  {fstp dword [esp+0xa0], st0})
        unimplemented  {fstp dword [esp+0xa0], st0}
        unimplemented  {fld st0, dword [eax+0x8]}
        float var_fc_1 = var_d4_1
        unimplemented  {fadd dword [esp+0x148]}
        float* var_178_13 = &var_28
        var_17c = arg1
        float var_d0_1 = fconvert.s(unimplemented  {fstp dword [esp+0xac], st0})
        unimplemented  {fstp dword [esp+0xac], st0}
        float var_f8_1 = var_d0_1
        float var_74[0x8]
        sub_4138d0(arg1, &var_74, &var_100, var_17c, var_178_13)
        sub_4e1c90()
        unimplemented  {fld st0, dword [0x8a5a18]}
        float var_178_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        sub_4dda80(var_178_14)
        unimplemented  {fld st0, dword [0x8a5630]}
        float var_128_1 = fconvert.s(unimplemented  {fst dword [esp+0x4c], st0})
        float var_124_1 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
        unimplemented  {fstp dword [esp+0x50], st0}
        unimplemented  {fld st0, dword [0x8a55f4]}
        var_148 = var_128_1
        var_120 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
        unimplemented  {fstp dword [esp+0x54], st0}
        float edx_8 = var_120
        int32_t* const var_178_15 = &data_840b64
        float var_144_1 = var_124_1
        float var_140_1 = edx_8
        sub_4ddb00(0, edx_8)
        sub_4ddf40(&var_84)
        data_2727bac
        sub_50ec60(1)
        top = top_4 - 1
        unimplemented  {call 0x50ec60}
        sub_4e1f30()
        int32_t* eax_24
        int32_t edx_10
        eax_24, edx_10 = sub_4ff5f0(data_30d7470)
        char** result_7 = sub_509750(eax_24, edx_10, 3, eax_24)
        char** result_5
        
        if (result_7 != 0)
            if (result_7[1] != 3)
                char const* const var_178_27 = "DefAutoLock::DefAutoLock"
                var_17c = 0x19
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", var_17c, var_178_27)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result_5 = result_7
        else
            result_5 = sub_50a390(result_7 + 3)
        
        bool cond:3_1 = *result_5 != 0
        result_1 = result_5
        
        if (not(cond:3_1))
            char var_178_18 = 1
            var_17c = nullptr
            sub_5094d0(result_5, var_17c, var_178_18)
        
        char* eax_26 = *result_5
        result_5[7] = &result_5[7][1]
        int32_t** eax_27 = *eax_26
        int32_t var_178_19 = 0x10
        var_17c = 0x40
        int32_t var_c_5 = 2
        int32_t* eax_28 = __execvp(var_17c, var_178_19)
        
        if (eax_28 == 0)
            char const* const var_178_25 = "XMalloc"
            var_17c = 0x4f
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", var_17c, var_178_25)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* ecx_13 = data_30d746c
        var_17c = eax_28
        sub_4fe7d0(var_17c, ecx_13)
        eax_28[5] = 1
        eax_28[3] = 1
        *eax_28 = 0x800
        eax_28[1] = 0x800
        eax_28[4] = 8
        eax_28[6] = 3
        eax_28[0xd] = 0
        eax_28[0xf] = 0
        
        if (*eax_27 != 0)
            char const* const var_178_26 = "TextureCreateForRendering"
            var_17c = 0x3cf
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", var_17c, 
                var_178_26)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *eax_27 = eax_28
        int32_t var_c_6 = 0xffffffff
        result_5[7] = &result_5[7][0xffffffff]
        bool cond:4_1 = *(data_27e7fd0 + 0x1c) s<= 0
        void* eax_30 = data_27e7fe4
        var_4c[i_2] = result_7
        char var_178_21 = 0
        
        if (cond:4_1)
            *(eax_30 + 0x244) += 1
            int32_t* result_13 = result_12
            int32_t* eax_32 = eax_30 + ((*(eax_30 + 0x244) * 5 + 0x41) << 2)
            var_17c = result_13
            *eax_32 = 2
            eax_32[2] = result_7
            eax_32[3] = result_13
            eax_32[4].b = 0
            sub_4e57f0(result_7, var_17c, var_178_21)
            result_14 = result_12
            result_10 = result_6
        else
            *(eax_30 + 0x244) += 1
            result_14 = result_12
            result_10 = result_6
            void* eax_31 = eax_30 + ((*(eax_30 + 0x244) * 5 + 0x41) << 2)
            var_17c = result_14
            *eax_31 = 2
            *(eax_31 + 8) = result_10
            *(eax_31 + 0xc) = result_14
            *(eax_31 + 0x10) = 0
            sub_4e57f0(result_10, var_17c, var_178_21)
        
        (*(*data_3078804 + 0x8c))(data_27e8020)
        sub_4ddd00()
        sub_4e1260()
        sub_4e1a70(2)
        sub_4e1fa0()
        
        if (*(data_27e7fd0 + 0x1c) s> 0)
            int32_t eax_35 = *(*data_3078804 + 0x90)
            var_17c = result_10
            eax_35(var_17c, result_7)
        
        sub_4e5ea0()
        i = &i_2[1]
        i_2 = i
    while (i s< 6)
    
    if (*(data_27e7fd0 + 0x1c) s> 0 && *result_10 != 0)
        if (result_10[7] != 0)
            char const* const var_178_24 = "AssetCatalogPurgeAsset"
            var_17c = 0x32
            sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", var_17c, var_178_24)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_520bc0(result_10)
        *result_10 = nullptr
    
    if (*result_14 != 0)
        if (result_14[7] != 0)
            char const* const var_178_29 = "AssetCatalogPurgeAsset"
            var_17c = 0x32
            sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", var_17c, var_178_29)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_520bc0(result_14)
        *result_14 = nullptr
    
    float esi_4 = sub_4cce80(0xc000000)
    int32_t ecx_22
    int32_t edi_8
    edi_8, ecx_22 = __memfill_u32(esi_4, 0xff000000, 0x3000000)
    float var_14c_1 = esi_4
    int32_t var_94 = 0x800
    int32_t var_90 = 0x800
    int32_t var_8c = 0x8000
    int32_t var_88 = 1
    
    for (int32_t i_1 = 0; i_1 s< 6; i_1 += 1)
        if (i_1 u> 5)
            char const* const var_178_44 = "RenderEnvironmentMap"
            var_17c = 0x85f
            sub_4c5870("Halt", &data_83f3d3, "Editor\FabEditor.cpp", var_17c, var_178_44)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_46
        int32_t ecx_23
        
        switch (i_1)
            case 0
                eax_46 = 0
                ecx_23 = 1
            case 1
                ecx_23 = 0
                eax_46 = 1
            case 2
                ecx_23 = 1
                eax_46 = 1
            case 3
                ecx_23 = 2
                eax_46 = 1
            case 4
                ecx_23 = 3
                eax_46 = 1
            case 5
                eax_46 = 2
                ecx_23 = 1
        
        int32_t* edi_9 = var_4c[i_1]
        int32_t* ecx_24 = data_3078804
        int32_t var_98 = (((eax_46 << 0xd) + ecx_23) << 0xd) i+ esi_4
        int32_t edx_17 = *(*ecx_24 + 0x80)
        int32_t* var_178_30 = &var_98
        var_17c = edi_9
        edx_17(var_17c, var_178_30)
        int32_t* ecx_25 = *edi_9
        
        if (ecx_25 != 0)
            if (edi_9[7] != 0)
                char const* const var_178_42 = "AssetCatalogPurgeAsset"
                var_17c = 0x32
                sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", var_17c, 
                    var_178_42)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_51 = edi_9[1]
            
            if (eax_51 u> 0x22)
                char const* const var_178_43 = "AssetTypeGetInfo"
                var_17c = 0xb6
                sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
                    "AssetTypeRegistry.cpp", var_17c, var_178_43)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_54 = *((eax_51 << 5) + data_30785d4 + 8)
            
            if (eax_54 != 0)
                int32_t ecx_26 = *ecx_25
                var_17c = edi_9
                eax_54(var_17c, ecx_26)
            
            int32_t* esi_5 = *edi_9
            
            if ((esi_5[2].b & 1) == 0)
                void* edx_18 = esi_5[3]
                var_17c = *esi_5
                sub_4fed40(var_17c, edx_18)
                *esi_5 = 0
            
            int32_t* eax_56 = esi_5[1]
            
            if (eax_56 != 0)
                sub_500770(eax_56)
                esi_5[1] = 0
            
            _aligned_free_base(esi_5)
            esi_4 = var_14c_1
            *edi_9 = 0
    
    char* var_178_35 = &data_30785f8
    var_17c = "%s/cubemap_probe.png"
    char* var_150
    sub_4c4a50(&var_150, var_17c)
    int32_t var_c_7 = 3
    char* const eax_57 = var_150
    
    if (eax_57 == 0)
        eax_57 = &data_83f3d3
    
    char* const var_178_36 = eax_57
    var_17c = "Saving environment probe %s"
    sub_4c5680(var_17c)
    char* const eax_58 = var_150
    
    if (eax_58 == 0)
        eax_58 = &data_83f3d3
    
    var_17c = &var_148
    int32_t var_144_2 = 0x2000
    int32_t var_140_2 = 0x1800
    int32_t var_138 = 4
    int32_t var_13c = 0x8000
    var_148 = esi_4
    
    if (sub_594880(var_17c, eax_58) == 0)
        char* eax_60 = var_150
        
        if (eax_60 == 0)
            eax_60 = &data_83f3d3
        
        char* var_178_38 = eax_60
        var_17c = "PNGExportTexture failed to png write %s"
        sub_4c5680(var_17c)
    
    if (esi_4 != 0)
        _aligned_free_base(esi_4)
    
    char* eax_61 = var_150
    
    if (eax_61 == 0)
        eax_61 = &data_83f3d3
    
    var_17c = &i_2
    sub_51b510(var_17c, eax_61)
    var_c_7.b = 4
    char* const i_9 = i_2
    
    if (i_9 == 0)
        i_9 = &data_83f3d3
    
    char** result_4 = sub_509140(3, i_9)
    char* ecx_27 = *result_4
    result_1 = result_4
    
    if (ecx_27 != 0)
        if (result_4[7] != 0)
            char const* const var_178_41 = "AssetCatalogPurgeAsset"
            var_17c = 0x32
            sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", var_17c, var_178_41)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_66 = result_4[1]
        
        if (eax_66 u> 0x22)
            char const* const var_178_50 = "AssetTypeGetInfo"
            var_17c = 0xb6
            sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
                "AssetTypeRegistry.cpp", var_17c, var_178_50)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_69 = *((eax_66 << 5) + data_30785d4 + 8)
        
        if (eax_69 != 0)
            int32_t ecx_28 = *ecx_27
            var_17c = result_4
            eax_69(var_17c, ecx_28)
        
        char* esi_6 = *result_4
        
        if ((esi_6[8] & 1) == 0)
            void* edx_19 = *(esi_6 + 0xc)
            var_17c = *esi_6
            sub_4fed40(var_17c, edx_19)
            *esi_6 = 0
        
        int32_t* eax_71 = *(esi_6 + 4)
        
        if (eax_71 != 0)
            sub_500770(eax_71)
            *(esi_6 + 4) = 0
        
        _aligned_free_base(esi_6)
        *result_4 = nullptr
    
    char* i_10 = i_2
    int32_t var_178_49 = 0
    var_17c = 3
    var_17c = i_10
    char* i_4 = i_2
    int32_t** var_12c = &var_17c
    
    if (i_4 != 0 && *i_4 != 0)
        if (*(i_4 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(i_4 - 0xc) += 1
    
    sub_509b00(var_17c)
    void* esi_7 = data_30d7470
    int32_t* eax_74 = sub_4cce80(0x10)
    *eax_74 = 0
    eax_74[1] = 0
    eax_74[2] = 0
    eax_74[3] = 0
    int32_t eax_75 = *(esi_7 + 0xc)
    
    if (eax_75 == 0)
        char const* const var_178_51 = "DefinitionGetSize"
        var_17c = 0x6d
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", var_17c, var_178_51)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_77 = sub_4cce80(eax_75)
    var_17c = eax_77
    int128_t* eax_78
    int32_t edx_20
    eax_78, edx_20 = sub_4fe7d0(var_17c, esi_7)
    *eax_74 = eax_77
    eax_74[3] = esi_7
    int32_t* eax_79 = sub_509750(eax_78, edx_20, 3, eax_74)
    int32_t* esi_10
    
    if (eax_79 != 0)
        if (eax_79[1] != 3)
            char const* const var_178_64 = "DefAutoLock::DefAutoLock"
            var_17c = 0x19
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", var_17c, var_178_64)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi_10 = eax_79
    else
        sub_509d90(&result_6, "!Null\Null", 3, &result_6)
        var_c_7.b = 5
        char* result_9 = result_6
        
        if (result_9 == 0)
            result_9 = &data_83f3d3
        
        int32_t* eax_81 = sub_509140(3, result_9)
        var_c_7.b = 4
        char** result_11 = result_6
        
        if (result_11 == 0 || *result_11 == 0)
            esi_10 = eax_81
        else
            if (result_11[-4] != 0xfafafafa)
                char const* const var_178_54 = "XStringMagicDataStructFromCharPtr"
                var_17c = 0x20
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", var_17c, var_178_54)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp2_1 = result_11[-3]
            result_11[-3] -= 1
            
            if (temp2_1 != 1)
                esi_10 = eax_81
            else
                void* ebx_3 = data_26a44e4
                int32_t esi_9 = &result_11[-1][0x10]
                
                if (ebx_3 == 0)
                    sub_4f4250()
                    ebx_3 = data_26a44e4
                
                int32_t edx_21 = 0
                void** ebx_4
                
                while (true)
                    if (esi_9 s<= 1 << (edx_21.b + 4))
                        ebx_4 = ebx_3 + edx_21 * 0x14
                        break
                    
                    edx_21 += 1
                    
                    if (edx_21 s>= 7)
                        ebx_4 = ebx_3 + 0x8c
                        break
                
                ebx_4[3] -= 1
                
                if (esi_9 s<= 0x400 || ebx_4[4] != 0xffffffff)
                    int32_t eax_84 = ebx_4[4]
                    int32_t* esi_11 = ebx_4[1]
                    void* edx_23 = ebx_4[2] * eax_84
                    void* var_14c_2 = edx_23
                    
                    if (esi_11 == 0)
                    label_574a26:
                        char const* const var_178_56 = "XAllocator::Free"
                        var_17c = 0x81
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", var_17c, var_178_56)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        int32_t* eax_89 = *esi_11
                        void* ecx_31 = &esi_11[1]
                        int32_t* var_9c_1 = eax_89
                        esi_11 = eax_89
                        
                        if (&result_11[-4] u>= ecx_31 && &result_11[-4] u< edx_23 + ecx_31)
                            if (mods.dp.d(sx.q(&result_11[-4] - ecx_31), eax_84) == 0)
                                result_11[-4] = *ebx_4
                                *ebx_4 = &result_11[-4]
                                break
                            
                            eax_89 = esi_11
                        
                        if (eax_89 == 0)
                            goto label_574a26
                        
                        edx_23 = var_14c_2
                    
                    esi_10 = eax_81
                else
                    _aligned_free_base(&result_11[-4])
                    esi_10 = eax_81
    
    int32_t* var_12c_2 = esi_10
    
    if (*esi_10 == 0)
        char var_178_57 = 1
        var_17c = nullptr
        sub_5094d0(esi_10, var_17c, var_178_57)
    
    int32_t* eax_92 = *esi_10
    esi_10[7] += 1
    int32_t** ebx_5 = *eax_92
    int32_t var_178_58 = 0x10
    var_17c = 0x40
    var_c_7.b = 6
    int32_t* eax_93 = __execvp(var_17c, var_178_58)
    
    if (eax_93 == 0)
        char const* const var_178_59 = "XMalloc"
        var_17c = 0x4f
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", var_17c, var_178_59)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx_32 = data_30d746c
    var_17c = eax_93
    sub_4fe7d0(var_17c, ecx_32)
    eax_93[5] = 1
    eax_93[3] = 1
    *eax_93 = 0x1000
    eax_93[1] = 0x800
    eax_93[4] = 8
    eax_93[6] = 3
    eax_93[0xd] = 0
    eax_93[0xf] = 0
    
    if (*ebx_5 != 0)
        char const* const var_178_61 = "TextureCreateForRendering"
        var_17c = 0x3cf
        sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", var_17c, 
            var_178_61)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    var_c_7.b = 4
    void* eax_96 = data_27e7fe4
    *ebx_5 = eax_93
    esi_10[7] -= 1
    *(eax_96 + 0x244) += 1
    int32_t* eax_97 = eax_96 + ((*(eax_96 + 0x244) * 5 + 0x41) << 2)
    *eax_97 = 2
    eax_97[2] = eax_79
    eax_97[3] = 0
    eax_97[4].b = 0
    
    if (data_3078599 != 0)
        char const* const var_178_62 = "GraphicsSetRT"
        var_17c = 0x277
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Renderer.cpp", var_17c, 
            var_178_62)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_54b920(0)
    int32_t edx_29 = *(*data_3078804 + 0x88)
    int32_t var_178_63 = 0
    var_17c = eax_79
    edx_29(var_17c, var_178_63)
    *(data_27e7fe4 + 0xdd) = 1
    
    if (data_27e8404 != 1)
        data_27e8404 = 1
        sub_4ddbe0(&data_27e8024)
    
    (*(*data_3078804 + 0x8c))(data_27e8020)
    unimplemented  {fldz }
    bool cond:6 = (data_3166844 & 1) != 0
    var_150 = fconvert.s(unimplemented  {fst dword [esp+0x2c], st0})
    char* eax_102 = var_150
    float var_14c_3 = fconvert.s(unimplemented  {fst dword [esp+0x30], st0})
    unimplemented  {fld1 }
    var_148 = fconvert.s(unimplemented  {fst dword [esp+0x34], st0})
    char* var_108 = eax_102
    float var_144_3 = fconvert.s(unimplemented  {fstp dword [esp+0x38], st0})
    unimplemented  {fstp dword [esp+0x38], st0}
    float var_104 = var_14c_3
    var_100 = var_148
    var_150 = fconvert.s(unimplemented  {fst dword [esp+0x2c], st0})
    char* ecx_38 = var_150
    float var_14c_4 = fconvert.s(unimplemented  {fstp dword [esp+0x30], st0})
    unimplemented  {fstp dword [esp+0x30], st0}
    unimplemented  {fld st0, dword [0x8a5938]}
    float var_fc_2 = var_144_3
    var_148 = fconvert.s(unimplemented  {fstp dword [esp+0x34], st0})
    unimplemented  {fstp dword [esp+0x34], st0}
    float eax_104 = var_148
    unimplemented  {fld st0, dword [0x8a5490]}
    float var_130 = ecx_38
    float var_144_4 = fconvert.s(unimplemented  {fstp dword [esp+0x38], st0})
    unimplemented  {fstp dword [esp+0x38], st0}
    float var_12c_3 = var_14c_4
    float var_124_2 = var_144_4
    
    if (not(cond:6))
        data_3166844.d |= 1
        ExceptionList.b = 7
        data_3166840 = sub_509140(5, "sys/editor/equirectangular.material")
        ExceptionList.b = 4
    
    float eax_107 = data_27e7fe0
    char** esi_12 = &var_108
    int32_t* entry_ebx
    
    if (*(eax_107 i+ 0x38) == 0)
        sub_4d9830(eax_107, &data_be4aac, entry_ebx, esi_12, &var_130, data_3166840)
        unimplemented  {call 0x4d9830}
    else
        eax_107 = sub_4d9650(&var_130, eax_107 i+ 0x28, esi_12, &var_150, &var_130)
        
        if (eax_107.b != 0)
            void var_e0
            sub_4d9830(eax_107, &data_be4aac, entry_ebx, &var_150, &var_e0, data_3166840)
            unimplemented  {call 0x4d9830}
    char* i_11 = i_2
    sub_4e5ea0()
    int32_t var_11c = 0x1000
    int32_t var_118_2 = 0x800
    int32_t var_114_2 = 0x4000
    int32_t var_110_2 = 1
    float eax_108 = sub_4cce80(0x2000000)
    int32_t* ecx_42 = data_3078804
    var_120 = eax_108
    (*(*ecx_42 + 0x80))(i_11, &var_120)
    
    if (*i_11 != 0)
        if (*(i_11 + 0x1c) != 0)
            sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", 0x32, 
                "AssetCatalogPurgeAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_520bc0(i_11)
        *i_11 = 0
    
    char* var_188_2 = &data_30785f8
    sub_4c4a50(&i_2, "%s/equirectangular_probe.png")
    var_1c.b = 8
    char* i_5 = i_2
    
    if (i_5 == 0)
        i_5 = &data_83f3d3
    
    char* i_12 = i_5
    sub_4c5680("Saving equirectangular probe %s")
    char* i_6 = i_2
    
    if (i_6 == 0)
        i_6 = &data_83f3d3
    
    int32_t var_fc_3 = 0x1000
    int32_t var_f8_2 = 0x800
    int32_t var_f0_2 = 4
    int32_t var_f4 = 0x4000
    var_100 = eax_104
    
    if (sub_594880(&var_100, i_6) == 0)
        char* i_7 = i_2
        
        if (i_7 == 0)
            i_7 = &data_83f3d3
        
        char* i_13 = i_7
        sub_4c5680("PNGExportTexture failed to png write %s")
    
    if (eax_104 != 0)
        _aligned_free_base(eax_104)
    
    var_1c.b = 4
    char* i_8 = i_2
    
    if (i_8 != 0 && *i_8 != 0)
        void* eax_116 = sub_4c4060(&i_2)
        int32_t temp3_1 = *(eax_116 + 4)
        *(eax_116 + 4) -= 1
        
        if (temp3_1 == 1)
            void* edi_16 = data_26a44e4
            int32_t esi_14 = *(eax_116 + 0xc) + 0x10
            
            if (edi_16 == 0)
                sub_4f4250()
                edi_16 = data_26a44e4
            
            int32_t edx_37 = 0
            int32_t* edi_17
            
            while (true)
                if (esi_14 s<= 1 << (edx_37.b + 4))
                    edi_17 = edi_16 + edx_37 * 0x14
                    break
                
                edx_37 += 1
                
                if (edx_37 s>= 7)
                    edi_17 = edi_16 + 0x8c
                    break
            
            sub_4f4430(eax_116, edi_17, esi_14)
    
    var_1c.b = 3
    char* eax_119 = var_174
    
    if (eax_119 != 0 && *eax_119 != 0)
        void* eax_121 = sub_4c4060(&var_174)
        int32_t temp4_1 = *(eax_121 + 4)
        *(eax_121 + 4) -= 1
        
        if (temp4_1 == 1)
            void* edi_18 = data_26a44e4
            int32_t esi_16 = *(eax_121 + 0xc) + 0x10
            
            if (edi_18 == 0)
                sub_4f4250()
                edi_18 = data_26a44e4
            
            int32_t edx_38 = 0
            int32_t* edi_19
            
            while (true)
                if (esi_16 s<= 1 << (edx_38.b + 4))
                    edi_19 = edi_18 + edx_38 * 0x14
                    break
                
                edx_38 += 1
                
                if (edx_38 s>= 7)
                    edi_19 = edi_18 + 0x8c
                    break
            
            sub_4f4430(eax_121, edi_19, esi_16)
    
    int32_t var_1c_1 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            void* edx_39 = data_26a44e4
            int32_t esi_18 = *(result + 0xc) + 0x10
            
            if (edx_39 == 0)
                sub_4f4250()
                edx_39 = data_26a44e4
            
            int32_t eax_125 = 0
            int32_t* edi_21
            
            while (true)
                if (esi_18 s<= 1 << (eax_125.b + 4))
                    edi_21 = edx_39 + eax_125 * 0x14
                    break
                
                eax_125 += 1
                
                if (eax_125 s>= 7)
                    edi_21 = edx_39 + 0x8c
                    break
            
            result = sub_4f4430(result, edi_21, esi_18)
    
    fsbase->NtTib.ExceptionList = ecx_4
    sub_5a6aba(var_2c_1 ^ &var_174)
    return result
}

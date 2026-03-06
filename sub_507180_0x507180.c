// 函数名称: sub_507180
// 虚拟地址: 0x507180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_507180()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691af0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = data_27e7fd0
    char var_11
    
    if (result[7] == 0)
        var_11 = 0
    else if (data_307881f != 0)
        var_11 = 1
    else
        result = data_27e7fcc
        var_11 = 0
    
    int32_t edi = data_26a4524
    
    if (*((edi << 2) + &data_26a450c) == 0 && var_11 == 0)
        sub_507080(3, &data_26a452c, (edi << 2) + &data_26a450c)
        result = sub_507080(3, &data_26a4534, (data_26a4524 << 2) + &data_26a4510)
    
    if (*(data_27e7fd0 + 0x1c) != 0)
        int32_t eax_3 = data_26a4524
        result = (eax_3 << 2) + &data_26a4504
        
        if (*((eax_3 << 2) + &data_26a4504) == 0)
            int32_t* eax_4 = *result
            
            if (eax_4 != 0)
                if (eax_4[1] != 3)
                    sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                        "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_16 = sub_466320(eax_4)
                **eax_16 = data_26a452c
                *(*eax_16 + 4) = data_26a4530
            else
                int32_t eax_5 = data_26a4530
                int32_t ecx_1 = data_26a452c
                int32_t* eax_6
                int32_t edx_1
                eax_6, edx_1 = sub_4ff5f0(data_30d7470)
                char** eax_7 = sub_509750(eax_6, edx_1, 3, eax_6)
                char** var_24_1 = eax_7
                
                if (eax_7 == 0)
                    eax_7 = sub_50a390(eax_7 + 3)
                else if (eax_7[1] != 3)
                    sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                        "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char** var_18_1 = eax_7
                
                if (*eax_7 == 0)
                    sub_5094d0(eax_7, 0, 1)
                
                char* eax_8 = *eax_7
                eax_7[7] = &eax_7[7][1]
                int32_t** ebx_1 = *eax_8
                int32_t var_8_1 = 0
                int32_t* eax_9 = __execvp(0x40, 0x10)
                
                if (eax_9 == 0)
                    sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_4fe7d0(eax_9, data_30d746c)
                *eax_9 = ecx_1
                eax_9[5] = 1
                eax_9[3] = 1
                eax_9[1] = eax_5
                eax_9[4] = 8
                eax_9[6] = 5
                eax_9[0xd] = 0
                eax_9[0xf] = 0
                
                if (*ebx_1 != 0)
                    sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 
                        0x3cf, "TextureCreateForRendering")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t var_8_2 = 0xffffffff
                *ebx_1 = eax_9
                eax_7[7] = &eax_7[7][0xffffffff]
                *result = var_24_1
            
            void* eax_19 = (data_26a4524 << 2) + &data_26a4508
            int32_t* eax_20 = *eax_19
            
            if (eax_20 != 0)
                if (eax_20[1] != 3)
                    sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                        "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_31 = sub_466320(eax_20)
                **eax_31 = data_26a4534
                *(*eax_31 + 4) = data_26a4538
            else
                int32_t edx_5 = data_26a4538
                int32_t eax_21 = data_26a4534
                int32_t* eax_22
                int32_t edx_6
                eax_22, edx_6 = sub_4ff5f0(data_30d7470)
                char** eax_23 = sub_509750(eax_22, edx_6, 3, eax_22)
                char** var_1c_2 = eax_23
                
                if (eax_23 == 0)
                    eax_23 = sub_50a390(eax_23 + 3)
                else if (eax_23[1] != 3)
                    sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                        "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char** var_28_2 = eax_23
                
                if (*eax_23 == 0)
                    sub_5094d0(eax_23, 0, 1)
                
                char* eax_24 = *eax_23
                eax_23[7] = &eax_23[7][1]
                void** ebx_2 = *eax_24
                int32_t var_8_3 = 1
                int32_t* eax_25 = __execvp(0x40, 0x10)
                
                if (eax_25 == 0)
                    sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_4fe7d0(eax_25, data_30d746c)
                eax_25[1] = edx_5
                eax_25[5] = 1
                eax_25[3] = 1
                *eax_25 = eax_21
                eax_25[4] = 8
                eax_25[6] = 5
                eax_25[0xd] = 0
                eax_25[0xf] = 0
                
                if (*ebx_2 != 0)
                    sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 
                        0x3cf, "TextureCreateForRendering")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t var_8_4 = 0xffffffff
                *ebx_2 = eax_25
                eax_23[7] = &eax_23[7][0xffffffff]
                *eax_19 = var_1c_2
            
            int32_t esi_3 = data_26a4524
            int32_t* eax_33 = *((esi_3 << 2) + &data_26a451c)
            
            if (eax_33 != 0)
                if (eax_33[1] != 3)
                    sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                        "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_37 = sub_466320(eax_33)
                **eax_37 = data_26a452c
                *(*eax_37 + 4) = data_26a4530
            else
                *((esi_3 << 2) + &data_26a451c) = sub_50bd60(data_26a452c, data_26a4530, 0x50, 6)
            
            int32_t esi_5 = data_26a4524
            int32_t* eax_39 = *((esi_5 << 2) + &data_26a4520)
            
            if (eax_39 != 0)
                if (eax_39[1] != 3)
                    sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                        "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t** eax_42 = sub_466320(eax_39)
                **eax_42 = data_26a4534
                result = *eax_42
                result[1] = data_26a4538
            else
                result = sub_50bd60(data_26a4534, data_26a4538, 0x50, 6)
                *((esi_5 << 2) + &data_26a4520) = result
    
    if (data_26a4514 == 0 && var_11 == 0)
        int32_t ecx_15 = data_26a452c
        int32_t eax_43
        
        if (ecx_15 == data_26a4534)
            eax_43 = data_26a4530
        
        if (ecx_15 != data_26a4534 || eax_43 != data_26a4538)
            sub_4c5870("gVR.hmdInfo.renderBufferSize[0] == gVR.hmdInfo.renderBufferSize[1]", 
                &data_83f3d3, "VR.cpp", 0xce, "VRBindEyeTextures")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* eax_45
        int32_t edx_14
        eax_45, edx_14 = sub_4ff5f0(data_30d7470)
        char** eax_46 = sub_509750(eax_45, edx_14, 3, eax_45)
        char** var_1c_3 = eax_46
        
        if (eax_46 == 0)
            eax_46 = sub_50a390(eax_46 + 3)
        else if (eax_46[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char** var_28_3 = eax_46
        
        if (*eax_46 == 0)
            sub_5094d0(eax_46, 0, 1)
        
        char* eax_47 = *eax_46
        eax_46[7] = &eax_46[7][1]
        int32_t** ebx_3 = *eax_47
        int32_t var_8_5 = 2
        int32_t* eax_48 = __execvp(0x40, 0x10)
        
        if (eax_48 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4fe7d0(eax_48, data_30d746c)
        *eax_48 = ecx_15
        eax_48[1] = eax_43
        eax_48[4] = 8
        eax_48[5] = 0x50
        eax_48[6] = 4
        eax_48[3] = 1
        eax_48[0xd] = 0
        eax_48[0xf] = 0
        
        if (*ebx_3 != 0)
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 0x3cf, 
                "TextureCreateForRendering")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *ebx_3 = eax_48
        int32_t var_8_6 = 0xffffffff
        eax_46[7] = &eax_46[7][0xffffffff]
        int32_t* eax_52 = data_26a4518
        data_26a4514 = var_1c_3
        
        if (eax_52 == 0)
            int32_t eax_53 = data_26a4538
            int32_t ecx_18 = data_26a4534
            int32_t* eax_54
            int32_t edx_17
            eax_54, edx_17 = sub_4ff5f0(data_30d7470)
            char** eax_55 = sub_509750(eax_54, edx_17, 3, eax_54)
            char** var_1c_4 = eax_55
            
            if (eax_55 == 0)
                eax_55 = sub_50a390(eax_55 + 3)
            else if (eax_55[1] != 3)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char** var_28_4 = eax_55
            
            if (*eax_55 == 0)
                sub_5094d0(eax_55, 0, 1)
            
            char* eax_57 = *eax_55
            eax_55[7] = &eax_55[7][1]
            int32_t** ebx_4 = *eax_57
            int32_t var_8_7 = 3
            int32_t* eax_58 = __execvp(0x40, 0x10)
            
            if (eax_58 == 0)
                sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            sub_4fe7d0(eax_58, data_30d746c)
            *eax_58 = ecx_18
            eax_58[1] = eax_53
            eax_58[4] = 8
            eax_58[5] = 0x50
            eax_58[6] = 4
            eax_58[3] = 1
            eax_58[0xd] = 0
            eax_58[0xf] = 0
            
            if (*ebx_4 == 0)
                *ebx_4 = eax_58
                eax_55[7] -= 1
                data_26a4518 = var_1c_4
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 0x3cf, 
                "TextureCreateForRendering")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (eax_52[1] != 3)
            sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t** eax_64 = sub_466320(eax_52)
        **eax_64 = data_26a4534
        result = *eax_64
        result[1] = data_26a4538
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

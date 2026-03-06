// 函数名称: sub_50ae60
// 虚拟地址: 0x50ae60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_50ae60(char** arg1, int128_t** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result
    char** result_1
    
    if (arg1 != 0)
        if (arg1[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = arg1
        result_1 = arg1
    else
        result_1 = sub_50a390(arg1 + 3)
        result = result_1
    
    if (*result_1 == 0)
        sub_5094d0(result_1, 0, 1)
    
    result_1[7] = &result_1[7][1]
    int32_t* esi_1 = **result_1
    int32_t var_8_1 = 0
    int32_t* edi = *esi_1
    
    if (edi[9] != 0)
        sub_4c5870("pDefTexture->pTextureImportData->atlasTexture == NULL", &data_83f3d3, 
            "Texture.cpp", 0xc7, "TextureGetImageData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (edi[0xd] != 1)
        sub_4c5870("pTextureData->imageCount == 1", &data_83f3d3, "Texture.cpp", 0xc9, 
            "TextureGetImageData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void** eax_7 = edi[0xf]
    int32_t edx = edi[1]
    arg2[1] = *edi
    arg2[2] = edx
    arg2[4] = 1
    int32_t eax_9 = sub_553f70(1) * *edi
    arg2[2]
    int32_t ecx_3 = arg2[1]
    arg2[3] = eax_9
    int32_t eax_11 = sub_554170(arg2[4], edx, ecx_3)
    int128_t* eax_13 = esi_1[2]
    
    if (eax_13 != 0)
        *arg2 = eax_13
    else
        int128_t* eax_15 = sub_4cce80(eax_11)
        bool cond:1_1 = edi[4] != 8
        *arg2 = eax_15
        
        if (cond:1_1)
            int128_t* eax_20 = sub_4cce80(*eax_7)
            sub_5093d0(arg1, nullptr, eax_7[1], *eax_7, eax_20)
            char* ecx_8 = edi[4]
            int32_t var_30_3 = 1
            int128_t* var_34_1 = eax_20
            
            if (sub_551f30(*eax_7, arg2, eax_7, ecx_8, ecx_8) == 0)
                char* const eax_25 = arg1[8]
                
                if (eax_25 == 0)
                    eax_25 = &data_83f3d3
                
                char* const var_30_4 = eax_25
                sub_4c5680("Failed to read texture %s")
            
            if (eax_20 != 0)
                _aligned_free_base(eax_20)
            
            esi_1[2] = *arg2
        else
            void* esi_3 = *eax_7
            
            if (eax_11 != esi_3)
                sub_4c5870("imageSize == pImage->imageSize", &data_83f3d3, "Texture.cpp", 0xd8, 
                    "TextureGetImageData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_5093d0(arg1, nullptr, eax_7[1], esi_3, eax_15)
            esi_1[2] = *arg2
    
    result[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

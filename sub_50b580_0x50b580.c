// 函数名称: sub_50b580
// 虚拟地址: 0x50b580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_50b580(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690348
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_18
    char** edi
    
    if (arg1 != 0)
        if (arg1[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_18 = arg1
        edi = arg1
    else
        edi = sub_50a390(arg1 + 3)
        var_18 = edi
    
    if (*edi == 0)
        sub_5094d0(edi, 0, 1)
    
    char* eax_5 = *edi
    edi[7] = &edi[7][1]
    int32_t var_8_1 = 0
    int32_t* esi = **eax_5
    int32_t ebx = esi[0xd]
    int32_t ecx_2 = esi[3]
    int32_t var_14 = divs.dp.d(sx.q(ebx), ecx_2)
    int32_t eax_10 = esi[6]
    
    if (eax_10 == 3 || eax_10 == 5 || eax_10 == 4 || eax_10 == 6)
        var_14 = 1
    label_50b659:
        int32_t result = (*(*data_3078804 + 0x10))(arg1, *esi, esi[1], var_14, ecx_2, esi[5], eax_10)
        
        if (result != 0)
            int32_t eax_15 = esi[6]
            
            if (eax_15 != 0)
                if (eax_15 != 1)
                    if (eax_15 == 2)
                        sub_4c5870("HaltMsg", 
                            "Yeah, this doesn't work yet. The depth changes for each mip level so this needs "
                        "a special loader.", 
                            "Texture.cpp", 0x1f4, "TextureCreateTextureBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (eax_15 == 3 || eax_15 == 5 || eax_15 == 4 || eax_15 == 6)
                        edi[7] -= 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                else if (var_14 != 6)
                    sub_4c5870("depthCount == 6", &data_83f3d3, "Texture.cpp", 0x1f0, 
                        "TextureCreateTextureBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            else if (var_14 != 1 || esi[3] != esi[0xd])
                sub_4c5870(
                    "depthCount == 1 && pTextureData->mipLevelCount == pTextureData->imageCount", 
                    &data_83f3d3, "Texture.cpp", 0x1ec, "TextureCreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ebx_2 = 0
            
            if (var_14 s> 0)
                int32_t eax_20 = esi[3]
                
                do
                    int32_t edi_1 = 0
                    
                    if (eax_20 s> 0)
                        do
                            sub_50b0b0(arg1, result, ebx_2, edi_1)
                            eax_20 = esi[3]
                            edi_1 += 1
                        while (edi_1 s< eax_20)
                    
                    ebx_2 += 1
                while (ebx_2 s< var_14)
                
                edi = var_18
            
            if (esi[7] == 0 && esi[4] != 8)
                char* const eax_22 = arg1[8]
                
                if (eax_22 == 0)
                    eax_22 = &data_83f3d3
                
                char* const var_34_3 = eax_22
                sub_4c5680("Autogeneration of mipmaps is not implemented on load for %s")
            
            edi[7] -= 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    else if (ebx s>= 1)
        goto label_50b659
    
    edi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}

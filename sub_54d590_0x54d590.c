// 函数名称: sub_54d590
// 虚拟地址: 0x54d590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_54d590(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691eb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_58 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result = sub_54ceb0(arg1)
    char** result_1
    char** result_2
    
    if (result != 0)
        if (result[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result_1 = result
        result_2 = result
    else
        result_2 = sub_50a390(result + 3)
        result_1 = result_2
    
    if (*result_2 == 0)
        sub_5094d0(result_2, 0, 1)
    
    char* eax_5 = *result_2
    result_2[7] = &result_2[7][1]
    int32_t* edi = *eax_5
    int32_t var_8_1 = 0
    int32_t* eax_6 = *edi
    int32_t* var_14 = eax_6
    void* var_28
    int32_t edi_1
    
    if (eax_6 != 0)
        if (eax_6[0xd] != arg3 * 6)
            sub_4c5870("pTextureData->imageCount == mips * 6", &data_83f3d3, "IBLImport.cpp", 0xaa, 
                "TextureMakeCubeMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_28 = &eax_6[0xf]
        
        if (eax_6[0xf] == 0)
            sub_4c5870("pTextureData->pImages", &data_83f3d3, "IBLImport.cpp", 0xab, 
                "TextureMakeCubeMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edi_1 = arg3
    else
        int32_t* eax_7 = __execvp(0x40, 0x10)
        
        if (eax_7 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_14 = eax_7
        sub_4fe7d0(eax_7, data_30d746c)
        *edi = eax_7
        int32_t* eax_9 = *arg2
        
        if (eax_9[1] != 3)
            sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* eax_11 = sub_466320(eax_9)
        edi_1 = arg3
        *eax_7 = **eax_11
        int32_t ecx_6 = edi_1 * 6
        eax_7[1] = *(*eax_11 + 4)
        eax_7[3] = edi_1
        eax_7[0xd] = ecx_6
        int32_t ebx = ecx_6 << 3
        eax_7[5] = *(*eax_11 + 0x14)
        int128_t* eax_14 = sub_4cce80(ebx)
        sub_5abfc0(eax_14, 0, ebx)
        result_2 = result_1
        var_28 = &eax_7[0xf]
        eax_7[0xf] = eax_14
        eax_7[6] = 1
        eax_7[7] = 1
        eax_7[8] = 1
        eax_6 = var_14
        eax_7[4] = 8
    
    int32_t esi_2 = *eax_6
    int32_t var_1c = eax_6[1]
    int32_t var_20 = 0
    
    if (edi_1 s> 0)
        int32_t* var_24_1 = arg2
        
        while (true)
            int32_t* edi_2 = var_24_1
            int32_t ebx_4 = var_20 * 8
            int32_t var_2c_2 = 6
            
            while (true)
                int32_t eax_18 = eax_6[5]
                int32_t var_40_1 = esi_2
                int32_t var_34_1 = eax_18
                int32_t eax_20 = sub_553f70(eax_18) * esi_2
                int32_t eax_22 = sub_4cce80(eax_20 * var_1c)
                int32_t* ecx_12 = data_3078804
                int32_t var_44 = eax_22
                (*(*ecx_12 + 0x80))(*edi_2, &var_44)
                int32_t* eax_25 = *var_28
                *(eax_25 + ebx_4) = eax_20 * var_1c
                *(eax_25 + ebx_4 + 4) = var_44
                edi_2 = &edi_2[arg3]
                ebx_4 += arg3 << 3
                int32_t temp0_1 = var_2c_2
                var_2c_2 -= 1
                
                if (temp0_1 == 1)
                    break
                
                eax_6 = var_14
            
            var_24_1 = &var_24_1[1]
            int32_t eax_29
            int32_t edx_10
            edx_10:eax_29 = sx.q(var_1c)
            var_1c = (eax_29 - edx_10) s>> 1
            int32_t eax_33
            int32_t edx_11
            edx_11:eax_33 = sx.q(esi_2)
            esi_2 = (eax_33 - edx_11) s>> 1
            int32_t eax_37 = var_20 + 1
            var_20 = eax_37
            
            if (eax_37 s>= arg3)
                break
            
            eax_6 = var_14
        
        result_2 = result_1
    
    result_2[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

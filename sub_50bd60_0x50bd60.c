// 函数名称: sub_50bd60
// 虚拟地址: 0x50bd60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_50bd60(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg4 != 3 && arg4 != 4 && arg4 != 5 && arg4 != 6)
        sub_4c5870(
            "textureType == TEXTURE_RENDER_TARGET || textureType == TEXTURE_DEPTH_STENCIL || textureType == "
        "TEXTURE_RENDER_TARGET_MSAA || textureType == TEXTURE_DEPTH_STENCIL_MSAA", 
            &data_83f3d3, "Texture.cpp", 0x3ba, "TextureCreateForRendering")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* eax_5
    int32_t edx
    eax_5, edx = sub_4ff5f0(data_30d7470)
    char** result_1 = sub_509750(eax_5, edx, 3, eax_5)
    char** result = result_1
    
    if (result_1 == 0)
        result_1 = sub_50a390(result_1 + 3)
    else if (result_1[1] != 3)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** result_2 = result_1
    
    if (*result_1 == 0)
        sub_5094d0(result_1, 0, 1)
    
    char* eax_6 = *result_1
    result_1[7] = &result_1[7][1]
    int32_t** ebx = *eax_6
    int32_t var_8_1 = 0
    int32_t* eax_7 = __execvp(0x40, 0x10)
    
    if (eax_7 == 0)
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4fe7d0(eax_7, data_30d746c)
    *eax_7 = arg1
    eax_7[5] = arg3
    eax_7[1] = arg2
    eax_7[4] = 8
    eax_7[6] = arg4
    eax_7[3] = 1
    eax_7[0xd] = 0
    eax_7[0xf] = 0
    
    if (*ebx == 0)
        *ebx = eax_7
        result_1[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 0x3cf, 
        "TextureCreateForRendering")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

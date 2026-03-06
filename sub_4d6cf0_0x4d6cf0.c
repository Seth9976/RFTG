// 函数名称: sub_4d6cf0
// 虚拟地址: 0x4d6cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d6cf0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, char* arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690038
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg3
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** eax_3 = *arg3
    
    if (eax_3 == 0)
        eax_3, arg2 = sub_50a390(eax_3 + 0x15)
    else if (eax_3[1] != 0x15)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_14_1 = eax_3
    
    if (*eax_3 == 0)
        arg2 = sub_5094d0(eax_3, 0, 1)
    
    char* eax_4 = *eax_3
    eax_3[7] = &eax_3[7][1]
    int32_t var_8_1 = 0
    void* eax_6 = *(*eax_4 + 0x1c)
    
    if (eax_6 == 0)
        sub_4c5870("pSoundData", &data_83f3d3, "Sound.cpp", 0x333, "SoundReadBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_1 = *(eax_6 + 0x10)
    char result
    
    if (ecx_1 != 1)
        if (ecx_1 != 2)
            sub_4c5870("Halt", &data_83f3d3, "Sound.cpp", 0x33f, "SoundReadBits")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = sub_536640(arg6, arg2, arg3, arg4, arg5)
    else
        void* ebx_1 = *(eax_6 + 0x18)
        char** eax_8 = *arg3
        
        if (eax_8[2] == 4)
            eax_8 = sub_509320(eax_8)
        
        if (eax_8[2] == 2 || ebx_1 u<= 0x100000)
            void* ecx_3 = eax_8[4]
            
            if (ecx_3 == 0)
                sub_4c5870("pAssetToUse->packFileOffset != 0", &data_83f3d3, "AssetCatalog.cpp", 0xd8, 
                    "AssetCatalogLoadHWBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (arg4 + arg6 s> eax_8[5])
                sub_4c5870("readOffset + readSize <= pAssetToUse->packFileSize", &data_83f3d3, 
                    "AssetCatalog.cpp", 0xda, "AssetCatalogLoadHWBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result = sub_4d05d0(ecx_3 + ebx_1 + arg4, arg6.b)
            
            if (result == 0)
                sub_4c5870("resultLoadHWBuffer", &data_83f3d3, "AssetCatalog.cpp", 0xdf, 
                    "AssetCatalogLoadHWBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            result = sub_5ab990(arg5, ebx_1 + arg4, arg6, eax_2)
    
    eax_3[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

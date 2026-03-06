// 函数名称: sub_55a5f0
// 虚拟地址: 0x55a5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_55a5f0(char** arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68fd18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_64
    int32_t eax_2 = __security_cookie ^ &var_64
    int32_t __saved_edi
    int32_t var_74 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi = arg1
    var_64 = arg5
    
    if (esi == 0)
        esi = sub_50a390(esi + 3)
    else if (esi[1] != 3)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_54 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_7 = *esi
    esi[7] = &esi[7][1]
    int32_t var_c_1 = 0
    void* eax_9 = **eax_7
    *arg6 = 1
    int32_t eax_10 = *(eax_9 + 0x18)
    int32_t result
    int32_t var_60
    int32_t result_1
    
    if (eax_10 == 0)
        if (arg4 != eax_10)
            sub_4c5870("depth == 0", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x2d8, 
                "Dx9GraphicsInterface::LockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if ((*(*arg2 + 0x4c))(arg2, arg3, &var_60, 0, 0) s< 0)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *var_64 = var_60
        result = result_1
    else if (eax_10 != 1)
        if (eax_10 != 2)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x305, 
                "Dx9GraphicsInterface::LockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void var_38
        
        if ((*(*arg2 + 0x44))(arg2, arg3, &var_38) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x2f2, 
                "Dx9GraphicsInterface::LockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_28
        int32_t var_48_1 = var_28
        int32_t var_50 = 0
        int32_t var_4c_1 = 0
        int32_t var_40_1 = arg4
        int32_t var_24
        int32_t var_44_1 = var_24
        int32_t var_3c_1 = arg4 + 1
        
        if ((*(*arg2 + 0x4c))(arg2, arg3, &var_60, &var_50, 0) s< 0)
            sub_559c50()
            noreturn
        
        int32_t result_2
        result = result_2
        *var_64 = var_60
    else
        if ((*(*arg2 + 0x4c))(arg2, arg4, arg3, &var_60, 0, 0) s< 0)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *var_64 = var_60
        result = result_1
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_64)
    return result
}

// 函数名称: sub_55a8b0
// 虚拟地址: 0x55a8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_55a8b0(char** arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi = arg1
    
    if (esi == 0)
        esi = sub_50a390(esi + 3)
    else if (esi[1] != 3)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    arg1 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_4 = *esi
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    int32_t eax_7 = *(**eax_4 + 0x18)
    int32_t result
    
    if (eax_7 == 0)
        if (arg4 != eax_7)
            sub_4c5870("depth == 0", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x313, 
                "Dx9GraphicsInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = (*(*arg2 + 0x50))(arg2, arg3)
        
        if (result s< 0)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else if (eax_7 != 1)
        if (eax_7 != 2)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x327, 
                "Dx9GraphicsInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = (*(*arg2 + 0x50))(arg2, arg3)
        
        if (result s< 0)
            sub_559c50()
            noreturn
    else
        result = (*(*arg2 + 0x50))(arg2, arg4, arg3)
        
        if (result s< 0)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

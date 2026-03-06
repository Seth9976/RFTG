// 函数名称: sub_559500
// 虚拟地址: 0x559500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_559500(int32_t arg1)
{
    // 第一条实际指令: int32_t result = arg1
    int32_t result = arg1
    void* arg_4
    int32_t* eax_1 = *(arg_4 + 8)
    int32_t esi
    int32_t var_c = esi
    int32_t arg_c
    int32_t esi_1 = arg_c
    int32_t arg_8
    
    if ((*(*eax_1 + 0x2c))(eax_1, arg_8, esi_1, &result, &arg_4, &arg_c, &arg_8, 0) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x22d, 
            "WindowsSoundInterface::SoundInterfaceWriteLock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg_4 != esi_1)
        sub_4c5870("(int)lockedSize == lengthBytes", &data_83f3d3, "Windows\WindowsSound.cpp", 0x22e, 
            "WindowsSoundInterface::SoundInterfaceWriteLock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg_c != 0)
        sub_4c5870("pLockedPtr2 == NULL", &data_83f3d3, "Windows\WindowsSound.cpp", 0x22f, 
            "WindowsSoundInterface::SoundInterfaceWriteLock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg_8 == 0)
        return result
    
    sub_4c5870("lockedSize2 == 0", &data_83f3d3, "Windows\WindowsSound.cpp", 0x230, 
        "WindowsSoundInterface::SoundInterfaceWriteLock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

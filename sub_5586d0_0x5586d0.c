// 函数名称: sub_5586d0
// 虚拟地址: 0x5586d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5586d0(void* arg1)
{
    // 第一条实际指令: if (Ordinal_DSOUND_11(0, arg1 + 4, 0) != 0)
    if (Ordinal_DSOUND_11(0, arg1 + 4, 0) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x55, 
            "WindowsSoundInterface::SoundInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi_1 = *(arg1 + 4)
    int32_t result = (*(*esi_1 + 0x18))(esi_1, data_30785e0, 2)
    
    if (result == 0)
        return result
    
    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x5a, 
        "WindowsSoundInterface::SoundInterfaceAttach")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

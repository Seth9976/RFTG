// 函数名称: sub_5593f0
// 虚拟地址: 0x5593f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5593f0(void* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t result = (*(*eax_1 + 0x48))(eax_1)
    
    if (result == 0)
        return result
    
    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x1fe, 
        "WindowsSoundInterface::SoundInterfaceStop")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

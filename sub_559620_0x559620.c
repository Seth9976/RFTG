// 函数名称: sub_559620
// 虚拟地址: 0x559620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_559620(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t result = (*(*eax_1 + 0x4c))(eax_1, arg2, arg3, 0, 0)
    
    if (result == 0)
        return result
    
    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x23a, 
        "WindowsSoundInterface::SoundInterfaceWriteUnlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

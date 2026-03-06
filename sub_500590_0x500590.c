// 函数名称: sub_500590
// 虚拟地址: 0x500590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_500590(PSTR arg1)
{
    // 第一条实际指令: int32_t startupInfo
    int32_t startupInfo
    sub_5abfc0(&startupInfo, 0, 0x44)
    PROCESS_INFORMATION processInformation
    __builtin_memset(&processInformation, 0, 0x10)
    startupInfo = 0x44
    
    if (CreateProcessA(nullptr, arg1, nullptr, nullptr, 0, CREATE_NO_WINDOW, nullptr, nullptr, 
            &startupInfo, &processInformation) != 0)
        WaitForSingleObject(processInformation.hProcess, 0xffffffff)
        CloseHandle(processInformation.hProcess)
        return CloseHandle(processInformation.hThread)
    
    sub_4c5870("result", &data_83f3d3, "xPlatformGeneric.cpp", 0x10c, "RunProcess")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

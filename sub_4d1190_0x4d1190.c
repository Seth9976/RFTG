// 函数名称: sub_4d1190
// 虚拟地址: 0x4d1190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4d1190(int32_t* arg1 @ eax, int32_t* arg2)
{
    // 第一条实际指令: if (*arg1 == 2)
    if (*arg1 == 2)
        sub_4c5680("host got client connected")
        *arg2
        return sub_4d10e0(arg1)
    
    sub_4c5870("mNetSyncState == NETSYNCSTATE_HOST_RUNNING", &data_83f3d3, "NetSync.cpp", 0x141, 
        "NetSync::HostGotClientConnect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

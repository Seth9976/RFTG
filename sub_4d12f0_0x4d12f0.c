// 函数名称: sub_4d12f0
// 虚拟地址: 0x4d12f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d12f0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (eax == 4 || eax == 1)
        sub_4c5680("netsync client got connected")
        int32_t result = sub_4d0a20(arg1)
        *arg1 = 5
        return result
    
    sub_4c5870("mNetSyncState == NETSYNCSTATE_CLIENT_CONNECTING || mNetSyncState == NETSYNCSTATE_OFF", 
        &data_83f3d3, "NetSync.cpp", 0x17c, "NetSync::ClientGotConnected")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

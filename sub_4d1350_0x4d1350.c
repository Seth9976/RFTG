// 函数名称: sub_4d1350
// 虚拟地址: 0x4d1350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d1350(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 == 1)
    if (*arg1 == 1)
        int32_t result = sub_4c5680("netsync client connect failed")
        *arg1 = 1
        return result
    
    sub_4c5870("mNetSyncState == NETSYNCSTATE_CLIENT_CONNECTING || mNetSyncState == NETSYNCSTATE_OFF", 
        &data_83f3d3, "NetSync.cpp", 0x184, "NetSync::ClientGotConnectFailed")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

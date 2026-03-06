// 函数名称: sub_4d27b0
// 虚拟地址: 0x4d27b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_4d27b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*arg1 != 1)
    if (*arg1 != 1)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_OFF", &data_83f3d3, "NetSync.cpp", 0x401, 
            "NetSync::AddSyncedDataBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = *(arg1 + 0x508)
    
    if (eax_1 s< 0x20)
        *(arg1 + eax_1 * 0x28 + 0x20) = arg2
        *(arg1 + eax_1 * 0x28 + 0x1c) = 0
        *(arg1 + eax_1 * 0x28 + 0xc) = *(arg1 + 0x508)
        *(arg1 + eax_1 * 0x28 + 0x10) = 0
        *(arg1 + eax_1 * 0x28 + 0x18) = 0x1cc
        *(arg1 + 0x508) += 1
        return arg1 + eax_1 * 0x28 + 8
    
    sub_4c5870("mNumSyncObjects < MAX_NET_SYNC_OBJECTS", &data_83f3d3, "NetSync.cpp", 0x402, 
        "NetSync::AddSyncedDataBlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

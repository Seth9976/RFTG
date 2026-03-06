// 函数名称: sub_4d18e0
// 虚拟地址: 0x4d18e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4d18e0(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    
    if (*arg3 != 2)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_HOST_RUNNING", &data_83f3d3, "NetSync.cpp", 0x219, 
            "NetSync::ServerGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1[2] u< 8)
        sub_4c5870("message->dataLen >= sizeof(NetSyncMessageBlock)", &data_83f3d3, "NetSync.cpp", 
            0x21a, "NetSync::ServerGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = sub_4d1890(arg3 + 0x518, *arg1)
    int32_t ecx_1 = arg1[3]
    
    if (ecx_1 s< 0 || ecx_1 s>= *(arg3 + 0x508))
        sub_4c5870(
            "messageBlock->mSyncObjectIndex >= 0 && messageBlock->mSyncObjectIndex < mNumSyncObjects", 
            &data_83f3d3, "NetSync.cpp", 0x220, "NetSync::ServerGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ebx_1 = *(arg3 + ecx_1 * 0x28 + 0x20)
    
    if (ebx_1 == 0)
        sub_4c5870("syncObjectData.mDataBlock", &data_83f3d3, "NetSync.cpp", 0x224, 
            "NetSync::ServerGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi_1 = arg1[4]
    void* edx_1 = arg1[2] - 8
    
    if (edx_1 s<= 0)
        sub_4c5870("dataLen > 0", &data_83f3d3, "NetSync.cpp", 0x22a, "NetSync::ServerGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (edi_1 + edx_1 s<= *(arg3 + ecx_1 * 0x28 + 0x18))
        return sub_5ab990(*(arg3 + ecx_1 * 0x28 + 0x10) * eax_2 + edi_1 + ebx_1, &arg1[5], edx_1)
    
    sub_4c5870("messageBlock->mDataOffset + dataLen <= syncObjectData.mSyncedSize", &data_83f3d3, 
        "NetSync.cpp", 0x22b, "NetSync::ServerGotBlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

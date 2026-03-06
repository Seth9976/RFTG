// 函数名称: sub_4d1b80
// 虚拟地址: 0x4d1b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4d1b80(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: if (*arg1 != 5)
    if (*arg1 != 5)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_CLIENT_CONNECTED", &data_83f3d3, "NetSync.cpp", 
            0x24e, "NetSync::ClientGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ebx = *(arg3 + 8)
    
    if (ebx u< 8)
        sub_4c5870("message->dataLen >= sizeof(NetSyncMessageBlock)", &data_83f3d3, "NetSync.cpp", 
            0x24f, "NetSync::ClientGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = *(arg3 + 0xc)
    
    if (eax_2 s< 0 || eax_2 s>= arg1[0x142])
        sub_4c5870(
            "messageBlock->mSyncObjectIndex >= 0 && messageBlock->mSyncObjectIndex < mNumSyncObjects", 
            &data_83f3d3, "NetSync.cpp", 0x252, "NetSync::ClientGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_3 = eax_2 * 5
    void* edx = arg1[eax_3 * 2 + 8]
    
    if (edx == 0)
        sub_4c5870("syncObjectData.mDataBlock", &data_83f3d3, "NetSync.cpp", 0x256, 
            "NetSync::ClientGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx = *(arg3 + 0x10)
    
    if (ebx - 8 s<= 0)
        sub_4c5870("dataLen > 0", &data_83f3d3, "NetSync.cpp", 0x25c, "NetSync::ClientGotBlock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ecx + ebx - 8 s<= arg1[eax_3 * 2 + 6])
        return sub_5ab990(edx + ecx, arg3 + 0x14, ebx - 8)
    
    sub_4c5870("messageBlock->mDataOffset + dataLen <= syncObjectData.mSyncedSize", &data_83f3d3, 
        "NetSync.cpp", 0x25d, "NetSync::ClientGotBlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

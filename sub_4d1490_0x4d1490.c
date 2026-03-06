// 函数名称: sub_4d1490
// 虚拟地址: 0x4d1490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_4d1490(void* arg1 @ eax, void* arg2)
{
    // 第一条实际指令: if (*arg1 != 5)
    if (*arg1 != 5)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_CLIENT_CONNECTED", &data_83f3d3, "NetSync.cpp", 
            0x19c, "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx = arg2
    void* ecx = *(edx + 8)
    
    if (ecx u< 0x10)
        sub_4c5870("message->dataLen >= sizeof(NetSyncMessageDataArray)", &data_83f3d3, "NetSync.cpp", 
            0x19d, "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = *(edx + 0xc)
    
    if (eax_2 s< 0 || eax_2 s>= *(arg1 + 0x508))
        sub_4c5870(
            "messageDataArray->mSyncObjectIndex >= 0 && messageDataArray->mSyncObjectIndex < mNumSyncObjects", 
            &data_83f3d3, "NetSync.cpp", 0x1a0, "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_5 = *(arg1 + eax_2 * 0x28 + 0x18) + 0x10
    
    if (ecx s> eax_5)
        sub_4c5870(
            "message->dataLen <= (int)sizeof(NetSyncMessageDataArray) + syncObjectData.mSyncedSize", 
            &data_83f3d3, "NetSync.cpp", 0x1a4, "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx_1 = *(arg1 + eax_2 * 0x28 + 0x1c)
    
    if (ecx_1 == 0)
        sub_4c5870("syncObjectData.mDataArray", &data_83f3d3, "NetSync.cpp", 0x1a5, 
            "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_9 = *(edx + 0x14)
    
    if (eax_9 s< 0 || eax_9 s>= *(ecx_1 + 8))
        sub_4c5870("itemIndex >= 0 && itemIndex < (int)syncObjectData.mDataArray->mMaxSize", 
            &data_83f3d3, "NetSync.cpp", 0x1ab, "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi_2 = *(arg1 + eax_2 * 0x28 + 0x10) * eax_9 + *ecx_1
    int128_t* ebx_1 = *(edx + 0x18) + edi_2
    int32_t eax_10
    
    if (eax_9 s< *(ecx_1 + 4))
        eax_10 = *(edi_2 + *(arg1 + eax_2 * 0x28 + 0x14))
    else
        eax_10 = 0
    
    if (*(edx + 0x10) == eax_10)
        sub_5ab990(ebx_1, edx + 0x1c, ecx - 0x10)
        int32_t eax_25 = *(arg2 + 0x10)
        *(edi_2 + *(arg1 + eax_2 * 0x28 + 0x14)) = eax_25
        return eax_25
    
    if (edi_2 != ebx_1)
        sub_4c5870("itemInDataArrayBase == itemInDataArrayPos", &data_83f3d3, "NetSync.cpp", 0x1be, 
            "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ecx != eax_5)
        sub_4c5870(
            "message->dataLen == (int)sizeof(NetSyncMessageDataArray) + syncObjectData.mSyncedSize", 
            &data_83f3d3, "NetSync.cpp", 0x1bf, "NetSync::ClientGotDataArrayItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((eax_10 & 0xffff0000) != 0)
        int32_t eax_13 = *(arg1 + eax_2 * 0x28 + 0x2c)
        
        if (eax_13 != 0)
            eax_13(ebx_1)
            edx = arg2
        
        void* eax_14 = *(arg1 + eax_2 * 0x28 + 0x1c)
        *(eax_14 + 0x10) -= 1
    
    sub_5ab990(ebx_1, edx + 0x1c, *(arg1 + eax_2 * 0x28 + 0x18))
    int32_t eax_17 = *(arg2 + 0x10)
    
    if ((eax_17 & 0xffff0000) == 0)
        *(ebx_1 + *(arg1 + eax_2 * 0x28 + 0x14)) = eax_17
        return eax_17
    
    void* eax_18 = *(arg1 + eax_2 * 0x28 + 0x1c)
    *(eax_18 + 0x10) += 1
    void* ecx_4 = *(arg1 + eax_2 * 0x28 + 0x1c)
    
    if (eax_9 + 1 s> *(ecx_4 + 4))
        *(ecx_4 + 4) = eax_9 + 1
    
    void* eax_21 = *(arg1 + eax_2 * 0x28 + 0x18)
    sub_5abfc0(eax_21 + ebx_1, 0, *(arg1 + eax_2 * 0x28 + 0x10) - eax_21)
    int32_t eax_23 = *(arg2 + 0x10)
    *(ebx_1 + *(arg1 + eax_2 * 0x28 + 0x14)) = eax_23
    int32_t esi_2 = *(arg1 + eax_2 * 0x28 + 0x28)
    
    if (esi_2 == 0)
        return eax_23
    
    return esi_2(ebx_1)
}

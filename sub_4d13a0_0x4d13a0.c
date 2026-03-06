// 函数名称: sub_4d13a0
// 虚拟地址: 0x4d13a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4d13a0(int32_t* arg1 @ eax, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (eax != 4 && eax != 5 && eax != 1)
        sub_4c5870(
            "mNetSyncState == NETSYNCSTATE_CLIENT_CONNECTING || mNetSyncState == "
        "NETSYNCSTATE_CLIENT_CONNECTED || mNetSyncState == NETSYNCSTATE_OFF", 
            &data_83f3d3, "NetSync.cpp", 0x18b, "NetSync::ClientGotConnectClosed")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* result = sub_4c5680("netsync client connection closed")
    *arg1 = 1
    int32_t* i = arg1[0x143]
    
    while (i != 0)
        int32_t* i_1 = i
        
        if (i == 0)
            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                "XList<struct NetworkMessage *>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_1 = **i
        result = arg2
        i = i[1]
        
        if (edx_1 == *result)
            int32_t var_8 = *i_1
            sub_4c4590(&data_83f3d3)
            result = sub_518190(data_27e7bb8 + 0x50, &var_8)
    
    return result
}

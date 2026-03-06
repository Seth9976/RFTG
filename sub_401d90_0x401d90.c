// 函数名称: sub_401d90
// 虚拟地址: 0x401d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_401d90()
{
    // 第一条实际指令: if (data_8c8708 != 0)
    if (data_8c8708 != 0)
        sub_4c5870("gCardNetData.netStateServer == CARDNET_SERVER_OFF", &data_83f3d3, 
            "..\code\CardNet.cpp", 0x90, "CardNetServerListen")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(data_27e7a44 + 0x70) != 0)
        sub_4c5870("gSServer->udpListenNetId == NETID_NONE", &data_83f3d3, "..\code\CardNet.cpp", 0x91, 
            "CardNetServerListen")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_5 = (*(*data_27e7bb4 + 8))(zx.d(*(data_27e7a60 + 4)), 0)
    int32_t eax_6
    
    if (eax_5 != 0xffffffff)
        int128_t* eax_7 = sub_4c6880()
        eax_7[1].d = eax_5
        *(eax_7 + 0x14) = 0
        *(eax_7 + 0x24) = 4
        *(eax_7 + 0x28) = 4
        eax_6 = *(eax_7 + 0x48)
    else
        eax_6 = 0
    
    void* edx_1 = data_27e7a60
    *(data_27e7a44 + 0x70) = eax_6
    uint32_t esi_1 = zx.d(*(edx_1 + 4))
    int32_t eax_9 = (*(*data_27e7bb4 + 0x20))(esi_1)
    
    if (eax_9 != 0)
        int16_t* eax_10 = sub_4c93b0(data_27e7bb8 + 0x1c)
        *eax_10 = esi_1.w
        *(eax_10 + 4) = eax_9
        eax_9 = *(eax_10 + 8)
    
    *(data_27e7a44 + 0x74) = eax_9
    
    if (eax_9 == 0)
        sub_4c5680("Failed to listen")
        int32_t eax_11
        eax_11.b = 0
        return eax_11
    
    data_8c8708 = 1
    sub_4c5680("Cardnet server listening")
    int32_t eax_12
    eax_12.b = 1
    return eax_12
}

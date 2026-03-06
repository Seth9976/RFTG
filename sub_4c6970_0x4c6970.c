// 函数名称: sub_4c6970
// 虚拟地址: 0x4c6970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c6970(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1[9]
    int32_t* result = arg1[9]
    
    if (result != 5)
        if (result != 4 && result != 2 && result != 3)
            sub_4c5870(
                "loc.connectStatus == NETWORK_CONNECT_OPEN || loc.connectStatus == NETWORK_CONNECT_WAITING "
            "|| loc.connectStatus == NETWORK_CONNECT_WAITING_SSL", 
                &data_83f3d3, "Network.cpp", 0x156, "NetConnectionClosed")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = arg1[0xa]
        arg1[9] = 5
        
        if (result == 2)
            return sub_4c68d0(arg1, 0x3ee)
        
        if (result == 1)
            return sub_4c68d0(arg1, 0x3eb)
        
        if (result == 3)
            return sub_4c68d0(arg1, 0xfa2)
    
    return result
}

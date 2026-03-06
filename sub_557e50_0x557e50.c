// 函数名称: sub_557e50
// 虚拟地址: 0x557e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

SOCKET __stdcallsub_557e50(uint16_t arg1, char arg2)
{
    // 第一条实际指令: uint32_t var_20
    uint32_t var_20
    int32_t eax_1 = __security_cookie ^ &var_20
    SOCKET s = WSASocketA(2, 2, 0x11, nullptr, 0, 1)
    
    if (s != 0xffffffff)
        var_20 = 1
        
        if (ioctlsocket(s, 0x8004667e, &var_20) == 0xffffffff)
            sub_4c5870("resultSocketCreateIoctl != SOCKET_ERROR", &data_83f3d3, 
                "Windows\WindowsNetwork.cpp", 0x55, "SocketCreate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg2 != 0)
            var_20 = 1
            
            if (setsockopt(s, 0xffff, 0x20, &var_20, 4) == 0xffffffff)
                sub_4c5870("resultUDPOpenOpt != SOCKET_ERROR", &data_83f3d3, 
                    "Windows\WindowsNetwork.cpp", 0x6e, "WinsockNetworkInterface::UDPOpen")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        if (arg1 == 0)
            sub_5a6aba(eax_1 ^ &var_20)
            return s
        
        SOCKADDR name
        name.sa_family = 2
        uint32_t eax_6 = htonl(0)
        name.sa_data[2] = eax_6.b
        name.sa_data[3] = eax_6:1.b
        name.sa_data[4] = eax_6:2.b
        name.sa_data[5] = eax_6:3.b
        uint16_t eax_7 = htons(arg1)
        name.sa_data[0] = eax_7.b
        name.sa_data[1] = eax_7:1.b
        
        if (bind(s, &name, 0x10) != 0xffffffff)
            sub_5a6aba(eax_1 ^ &var_20)
            return s
        
        closesocket(s)
    
    sub_5a6aba(eax_1 ^ &var_20)
    return 0xffffffff
}

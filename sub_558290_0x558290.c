// 函数名称: sub_558290
// 虚拟地址: 0x558290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_558290(uint16_t arg1)
{
    // 第一条实际指令: void var_20
    void var_20
    int32_t eax_1 = __security_cookie ^ &var_20
    
    if (arg1 == 0)
        sub_4c5870("port != 0", &data_83f3d3, "Windows\WindowsNetwork.cpp", 0xf8, 
            "WinsockNetworkInterface::TCPListenStart")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    SOCKET s = sub_557cf0(1)
    
    if (s == 0)
        sub_4c5870("socket != 0", &data_83f3d3, "Windows\WindowsNetwork.cpp", 0xfb, 
            "WinsockNetworkInterface::TCPListenStart")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    SOCKADDR name
    name.sa_family = 2
    uint32_t eax_4 = htonl(0)
    name.sa_data[2] = eax_4.b
    name.sa_data[3] = eax_4:1.b
    name.sa_data[4] = eax_4:2.b
    name.sa_data[5] = eax_4:3.b
    uint16_t eax_5 = htons(arg1)
    name.sa_data[0] = eax_5.b
    name.sa_data[1] = eax_5:1.b
    
    if (bind(s, &name, 0x10) != 0)
        sub_4c5680("tcp bind failed\n")
        sub_5a6aba(eax_1 ^ &var_20)
        return 0
    
    if (listen(s, 0x10) == 0)
        int32_t result = sub_557e10(s)
        sub_5a6aba(eax_1 ^ &var_20)
        return result
    
    sub_4c5680("tcp listen failed\n")
    sub_5a6aba(eax_1 ^ &var_20)
    return 0
}

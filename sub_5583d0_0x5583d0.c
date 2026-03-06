// 函数名称: sub_5583d0
// 虚拟地址: 0x5583d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

SOCKET __stdcallsub_5583d0(int32_t arg1, SOCKADDR* arg2)
{
    // 第一条实际指令: void var_128
    void var_128
    int32_t eax_1 = __security_cookie ^ &var_128
    FD_SET var_118
    var_118.fd_count = 0
    var_114
    sub_5abfc0(&var_114, 0, 0x100)
    uint32_t fd_count = var_118.fd_count
    int32_t eax_2 = 0
    
    if (fd_count != 0)
        while (*(&var_114 + (eax_2 << 2)) != arg1)
            eax_2 += 1
            
            if (eax_2 u>= fd_count)
                break
    
    if (eax_2 == fd_count && fd_count u< 0x40)
        *(&var_114 + (eax_2 << 2)) = arg1
        var_118.fd_count += 1
    
    TIMEVAL timeout
    __builtin_memset(&timeout, 0, 8)
    int32_t eax_3 = select(arg1, &var_118, nullptr, nullptr, &timeout)
    
    if (eax_3 == 0xffffffff)
        sub_4c5870("resultTCPAccept != SOCKET_ERROR", &data_83f3d3, "Windows\WindowsNetwork.cpp", 
            0x11f, "WinsockNetworkInterface::TCPListenAccept")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    SOCKET result
    
    if (eax_3 s<= 0)
        if (__WSAFDIsSet(arg1, &var_118) != 0)
            sub_4c5870("FD_ISSET((SOCKET)handle, &fdread) == false", &data_83f3d3, 
                "Windows\WindowsNetwork.cpp", 0x12b, "WinsockNetworkInterface::TCPListenAccept")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = 0
    else
        int32_t addrlen = 0x10
        
        if (__WSAFDIsSet(arg1, &var_118) == 0)
            sub_4c5870("FD_ISSET((SOCKET)handle, &fdread)", &data_83f3d3, "Windows\WindowsNetwork.cpp", 
                0x124, "WinsockNetworkInterface::TCPListenAccept")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = accept(arg1, arg2, &addrlen)
        
        if (result == 0xffffffff)
            sub_4c5870("acceptSocket != INVALID_SOCKET", &data_83f3d3, "Windows\WindowsNetwork.cpp", 
                0x126, "WinsockNetworkInterface::TCPListenAccept")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_5a6aba(eax_1 ^ &var_128)
    return result
}

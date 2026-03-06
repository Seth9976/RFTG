// 函数名称: sub_557cf0
// 虚拟地址: 0x557cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

SOCKET __convention("regparm")sub_557cf0(uint32_t arg1)
{
    // 第一条实际指令: SOCKET s
    SOCKET s
    
    if (arg1 != 1)
        if (arg1 != 0)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsNetwork.cpp", 0x50, "SocketCreate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        s = WSASocketA(2, 2, 0x11, arg1, arg1, 1)
        
        if (s == 0xffffffff)
            return 0xffffffff
    else
        s = WSASocketA(2, arg1, 6, nullptr, 0, arg1)
        
        if (s == 0xffffffff)
            return 0xffffffff
        
        int32_t optval = 1
        
        if (setsockopt(s, 6, 1, &optval, 4) == 0xffffffff)
            sub_4c5870("resultSocketCreateOpt != SOCKET_ERROR", &data_83f3d3, 
                "Windows\WindowsNetwork.cpp", 0x43, "SocketCreate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    uint32_t argp = 1
    
    if (ioctlsocket(s, 0x8004667e, &argp) != 0xffffffff)
        return s
    
    sub_4c5870("resultSocketCreateIoctl != SOCKET_ERROR", &data_83f3d3, "Windows\WindowsNetwork.cpp", 
        0x55, "SocketCreate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

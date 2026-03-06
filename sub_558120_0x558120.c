// 函数名称: sub_558120
// 虚拟地址: 0x558120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_558120(int32_t arg1)
{
    // 第一条实际指令: TIMEVAL timeout
    TIMEVAL timeout
    int32_t eax_1 = __security_cookie ^ &timeout
    FD_SET var_220
    var_220.fd_count = 0
    var_21c
    sub_5abfc0(&var_21c, 0, 0x100)
    uint32_t fd_count = var_220.fd_count
    int32_t eax_2 = 0
    
    if (fd_count u> 0)
        while (*(&var_21c + (eax_2 << 2)) != arg1)
            eax_2 += 1
            
            if (eax_2 u>= fd_count)
                break
    
    if (eax_2 == fd_count && fd_count u< 0x40)
        *(&var_21c + (eax_2 << 2)) = arg1
        var_220.fd_count += 1
    
    FD_SET var_118
    var_118.fd_count = 0
    var_114
    sub_5abfc0(&var_114, 0, 0x100)
    uint32_t fd_count_1 = var_118.fd_count
    int32_t eax_3 = 0
    
    if (fd_count_1 u> 0)
        while (*(&var_114 + (eax_3 << 2)) != arg1)
            eax_3 += 1
            
            if (eax_3 u>= fd_count_1)
                break
    
    if (eax_3 == fd_count_1 && fd_count_1 u< 0x40)
        *(&var_114 + (eax_3 << 2)) = arg1
        var_118.fd_count += 1
    
    __builtin_memset(&timeout, 0, 8)
    
    if (select(arg1, nullptr, &var_220, &var_118, &timeout) == 0xffffffff)
        sub_4c5870("resultTCPIsConn != SOCKET_ERROR", &data_83f3d3, "Windows\WindowsNetwork.cpp", 0xeb, 
            "WinsockNetworkInterface::TCPIsConnected")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (__WSAFDIsSet(arg1, &var_220) != 0)
        sub_5a6aba(eax_1 ^ &timeout)
        return 4
    
    int32_t eax_8 = __WSAFDIsSet(arg1, &var_118)
    int32_t eax_9 = neg.d(eax_8)
    sub_5a6aba(eax_1 ^ &timeout)
    return (sbb.d(eax_9, eax_9, eax_8 != 0) & 3) + 2
}

// 函数名称: sub_557bd0
// 虚拟地址: 0x557bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_557bd0()
{
    // 第一条实际指令: WSADATA wSAData
    WSADATA wSAData
    int32_t eax_1 = __security_cookie ^ &wSAData
    int32_t result = WSAStartup(0x202, &wSAData)
    
    if (result == 0)
        sub_5a6aba(eax_1 ^ &wSAData)
        return result
    
    sub_4c5870("HaltMsg", "WSAStartup failed", "Windows\WindowsNetwork.cpp", 0x2a, 
        "WinsockNetworkInterface::NetworkInterfaceInitForApp")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

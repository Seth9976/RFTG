// 函数名称: sub_557fe0
// 虚拟地址: 0x557fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_557fe0(SOCKET arg1, SOCKADDR* arg2, PSTR arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = sendto(arg1, arg3, arg4, 0, arg2, 0x10)
    int32_t result = sendto(arg1, arg3, arg4, 0, arg2, 0x10)
    
    if (result == 0xffffffff)
        enum WSA_ERROR eax_2 = WSAGetLastError()
        
        if (eax_2 == WSAEWOULDBLOCK)
            return 0
        
        enum WSA_ERROR var_c_1 = eax_2
        sub_4c5680("socket error in UDPSend %d")
    
    return result
}

// 函数名称: sub_558090
// 虚拟地址: 0x558090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

SOCKET __stdcallsub_558090(SOCKADDR* arg1)
{
    // 第一条实际指令: SOCKET s = sub_557cf0(1)
    SOCKET s = sub_557cf0(1)
    
    if (s != 0xffffffff)
        int32_t eax_1 = connect(s, arg1, 0x10)
        enum WSA_ERROR eax_2
        
        if (eax_1 == 0xffffffff)
            eax_2 = WSAGetLastError()
        
        if (eax_1 != 0xffffffff || eax_2 == WSAEWOULDBLOCK)
            return s
        
        closesocket(s)
    
    return 0xffffffff
}

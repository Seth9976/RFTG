// 函数名称: sub_558030
// 虚拟地址: 0x558030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_558030(int32_t arg1, SOCKET arg2, SOCKADDR* arg3, PSTR arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t fromlen = arg1
    int32_t fromlen = arg1
    fromlen = 0x10
    int32_t result = recvfrom(arg2, arg4, arg5, 0, arg3, &fromlen)
    
    if (result == 0xffffffff)
        enum WSA_ERROR eax_1 = WSAGetLastError()
        
        if (eax_1 == WSAEWOULDBLOCK || eax_1 == WSAECONNRESET)
            return 0
    
    return result
}

// 函数名称: sub_5585c0
// 虚拟地址: 0x5585c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5585c0(SOCKET arg1, PSTR arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = send(arg1, arg2, arg3, 0)
    int32_t result = send(arg1, arg2, arg3, 0)
    
    if (result != 0xffffffff)
        return result
    
    int32_t eax_2 = WSAGetLastError() - 0x2733
    int32_t eax_3 = neg.d(eax_2)
    return sbb.d(eax_3, eax_3, eax_2 != 0)
}

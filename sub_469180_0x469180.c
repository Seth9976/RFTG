// 函数名称: sub_469180
// 虚拟地址: 0x469180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_469180()
{
    // 第一条实际指令: int128_t* result = sub_469af0(data_27e7a44 + 0x38)
    int128_t* result = sub_469af0(data_27e7a44 + 0x38)
    void* entry_ebx
    __builtin_memcpy(result + 0x144, entry_ebx, 0x90)
    *(result + 0x1dc) = 1
    *(result + 0x38) = 0xffffffff
    *(result + 0x34) = 0xffffffff
    *(result + 0x88) = 0xffffffff
    *(result + 0x84) = 0xffffffff
    *(result + 0xd8) = 0xffffffff
    *(result + 0xd4) = 0xffffffff
    *(result + 0x128) = 0xffffffff
    *(result + 0x124) = 0xffffffff
    *(result + 0x1d4) = 0
    int32_t ecx = *(entry_ebx + 0x8c)
    
    if (ecx == 0)
        *(result + 0x1d8) = 0x93a80
        return result
    
    if (ecx == 1)
        *(result + 0x1d8) = 0x708
        return result
    
    if (ecx == 2)
        *(result + 0x1d8) = 0x24ea00
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x155a, "GetTimeAllowedSeconds")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

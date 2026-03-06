// 函数名称: sub_4c6810
// 虚拟地址: 0x4c6810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4c6810()
{
    // 第一条实际指令: void* eax_4 = data_27e7bb8
    void* eax_4 = data_27e7bb8
    
    if (eax_4 != 0)
        if (*(eax_4 + 0x58) != 0)
            return sub_4c9050(eax_4 + 0x50) __tailcall
        
        int128_t* result = sub_4cce80(0xff8)
        sub_5abfc0(result, 0, 0xff8)
        return result
    
    sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0x11f, "NetMessageAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

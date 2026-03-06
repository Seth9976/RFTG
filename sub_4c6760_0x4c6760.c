// 函数名称: sub_4c6760
// 虚拟地址: 0x4c6760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4c6760()
{
    // 第一条实际指令: void* eax_3 = data_27e7bb8
    void* eax_3 = data_27e7bb8
    
    if (eax_3 == 0)
        sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0xfa, "NetBufferAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result
    
    if (*(eax_3 + 0x4c) == 0)
        result = __execvp(0xfe10, 0x10)
        
        if (result == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        result = sub_4c9050(eax_3 + 0x44)
    
    *(result + 0xfde8) = 0
    *(result + 0xfdec) = 0
    *(result + 0xfdf8) = fconvert.s(float.t(0))
    *(result + 0xfdf0) = 0
    *(result + 0xfdf4) = 0
    return result
}

// 函数名称: sub_48f0f0
// 虚拟地址: 0x48f0f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_48f0f0()
{
    // 第一条实际指令: if (data_27e7a94 == 0)
    if (data_27e7a94 == 0)
        int32_t eax_1 = __execvp(0x2f9b80, 0x10)
        
        if (eax_1 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        data_27e7a94 = eax_1
    
    int32_t ecx = data_27e7a98
    
    if (ecx == 0x1fbd0)
        sub_5a79f4()
        noreturn
    
    int32_t result = data_27e7a94 + ecx * 0x18
    data_27e7a98 = ecx + 1
    return result
}

// 函数名称: sub_52e4a0
// 虚拟地址: 0x52e4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_52e4a0()
{
    // 第一条实际指令: void* eax
    void* eax
    void* eax_1
    int32_t ecx
    eax_1, ecx = sub_52e3e0(eax)
    int32_t edi = *(eax_1 + 0x19d0)
    int32_t eax_2 = *(eax_1 + 0x19d4)
    
    if (edi s< eax_2)
        *(eax_1 + 0x19d0) = edi + 1
        return sub_530500(ecx, *(eax_1 + (edi << 2) + 0x15d0)) __tailcall
    
    if (edi != eax_2)
        sub_4c5870("parent.numChildren == parent.numTotalChildren", &data_83f3d3, "UI2.cpp", 0x161d, 
            "UI2AllocChildAfter")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (edi s< 0x100)
        *(eax_1 + 0x19d0) = edi + 1
        *(eax_1 + 0x19d4) = edi + 1
        int128_t* result = sub_5303b0()
        sub_4fe7d0(result, data_30d74dc)
        *(eax_1 + (edi << 2) + 0x15d0) = *(result + 0x19dc)
        return result
    
    sub_4c5870("parent.numChildren < MAX_CHILDREN", &data_83f3d3, "UI2.cpp", 0x161e, 
        "UI2AllocChildAfter")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

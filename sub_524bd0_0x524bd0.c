// 函数名称: sub_524bd0
// 虚拟地址: 0x524bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_524bd0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x19d0)
    int32_t ebx = *(arg1 + 0x19d0)
    
    if (ebx s>= 0x100)
        sub_4c5870("parent.numChildren < MAX_CHILDREN", &data_83f3d3, "UI2.cpp", 0x6ff, "UI2AllocChild")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ebx == *(arg1 + 0x19d4))
        *(arg1 + 0x19d0) = ebx + 1
        *(arg1 + 0x19d4) = ebx + 1
        int128_t* result = sub_5303b0()
        sub_4fe7d0(result, data_30d74dc)
        *(arg1 + (ebx << 2) + 0x15d0) = *(result + 0x19dc)
        return result
    
    sub_4c5870("parent.numChildren == parent.numTotalChildren", &data_83f3d3, "UI2.cpp", 0x700, 
        "UI2AllocChild")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_52e580
// 虚拟地址: 0x52e580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_52e580(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    int32_t eax = *(arg1 + 0x19d4)
    int32_t esi = *(arg1 + 0x19d0)
    
    if (esi s< eax)
        *(arg1 + 0x19d0) = esi + 1
        return sub_530500(ecx, *(arg1 + (esi << 2) + 0x15d0))
    
    if (esi s>= 0x100)
        sub_4c5870("parent.numChildren < MAX_CHILDREN", &data_83f3d3, "UI2.cpp", 0x162e, 
            "UI2AllocChildUnder")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi == eax)
        *(arg1 + 0x19d0) = esi + 1
        *(arg1 + 0x19d4) = esi + 1
        int128_t* result = sub_5303b0()
        sub_4fe7d0(result, data_30d74dc)
        *(arg1 + (esi << 2) + 0x15d0) = *(result + 0x19dc)
        return result
    
    sub_4c5870("parent.numChildren == parent.numTotalChildren", &data_83f3d3, "UI2.cpp", 0x162f, 
        "UI2AllocChildUnder")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

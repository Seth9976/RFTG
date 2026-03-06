// 函数名称: sub_471fc0
// 虚拟地址: 0x471fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_471fc0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = sub_46b2b0(arg2)
    void* result = sub_46b2b0(arg2)
    
    if (*(arg1 + 0x18) != 0)
        sub_4c5870("!g->simulation", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1314, "network_wait")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(result + 0x14) != 0)
        int32_t ecx_2 = arg2 * 0xb4
        bool cond:0_1 = *(ecx_2 + arg1 + 0xc8) != *(ecx_2 + arg1 + 0xc4)
        *(result + 0x14) = 0
        
        if (not(cond:0_1))
            *(result + 8) = 1
            sub_471eb0(*(ecx_2 + arg1 + 0xc8) * 4, arg2)
            sub_4b2040()
            return sub_406ad0() __tailcall
        
        *(result + 8) = 0
    
    return result
}

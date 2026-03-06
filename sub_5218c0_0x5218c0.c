// 函数名称: sub_5218c0
// 虚拟地址: 0x5218c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_5218c0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx_1 = *(arg2 + 0x15c)
    int32_t ecx_1 = *(arg2 + 0x15c)
    
    if (ecx_1 s< 0xc)
        *(arg2 + 0x15c) = ecx_1 + 1
        return arg2 + ecx_1 * 0x1c + 0xc
    
    sub_4c5870("tree.numExpressions < MAX_EXPRESSIONS", &data_83f3d3, "UI2.cpp", 0x330, 
        "UI2ExpressionAlloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

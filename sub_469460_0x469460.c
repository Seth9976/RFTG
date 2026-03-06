// 函数名称: sub_469460
// 虚拟地址: 0x469460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_469460(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x1dc) != 1)
    if (*(arg1 + 0x1dc) != 1)
        sub_4c5870("game.status == GAMESTATUS_FORMING", &data_83f3d3, "..\code\RFTGServer.cpp", 0x256, 
            "QuickplayGameCanStart")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_c
    int32_t var_8
    int32_t ecx
    sub_469400(ecx, arg1 + 0x144, &var_c, &var_8)
    int32_t ebx_1 = *(arg1 + 0x140)
    int32_t result
    
    if (ebx_1 s>= var_8 && ebx_1 s<= var_c)
        result.b = 1
        return result
    
    result.b = 0
    return result
}

// 函数名称: sub_50cdc0
// 虚拟地址: 0x50cdc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_50cdc0(void* arg1)
{
    // 第一条实际指令: if (data_3078599 == 0)
    if (data_3078599 == 0)
        sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x326, 
            "Draw3DLayer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi = data_27e853c
    data_27e853c = 0x3e7
    char** result = sub_4e2ca0(*(arg1 + 0x38), nullptr)
    
    if (data_3078599 != 0)
        data_27e853c = esi
        return result
    
    sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x326, "Draw3DLayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

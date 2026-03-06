// 函数名称: sub_53c0a0
// 虚拟地址: 0x53c0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_53c0a0(int128_t* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: if (arg1 u> 0xff)
    if (arg1 u> 0xff)
        sub_4c5870("sourceIndex >= 0 && sourceIndex < MAX_EMITTERS", &data_83f3d3, 
            "Windows\EditorWindow.cpp", 0x957, "ToolDataMoveItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (arg2 u> 0xff)
        sub_4c5870("destIndex >= 0 && destIndex < MAX_EMITTERS", &data_83f3d3, 
            "Windows\EditorWindow.cpp", 0x958, "ToolDataMoveItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edi = *((arg1 << 3) + &data_3078874)
    int32_t ebx = *((arg1 << 3) + &data_3078878)
    
    if (arg1 s< arg2)
        sub_5a6c10((arg1 << 3) + &data_3078874, (arg1 << 3) + &data_307887c, (arg2 - arg1) * 8)
    else if (arg1 s> arg2)
        sub_5a6c10((arg2 << 3) + &data_307887c, (arg2 << 3) + &data_3078874, (arg1 - arg2) * 8)
    
    *((arg2 << 3) + &data_3078874) = edi
    *((arg2 << 3) + &data_3078878) = ebx
}

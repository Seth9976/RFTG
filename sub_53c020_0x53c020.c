// 函数名称: sub_53c020
// 虚拟地址: 0x53c020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53c020(int32_t arg1 @ esi)
{
    // 第一条实际指令: if (arg1 u> 0xff)
    if (arg1 u> 0xff)
        sub_4c5870("emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", &data_83f3d3, 
            "Windows\EditorWindow.cpp", 0x941, "ToolDataAddItem")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    if (0xff - arg1 s> 0)
        sub_5a6c10((arg1 << 3) + &data_307887c, (arg1 << 3) + &data_3078874, (0xff - arg1) * 8)
    
    *((arg1 << 3) + &data_3078874) = arg1 + 0x64
    *((arg1 << 3) + &data_3078878) = 0
    return arg1 + 0x64
}

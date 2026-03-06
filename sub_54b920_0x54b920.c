// 函数名称: sub_54b920
// 虚拟地址: 0x54b920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_54b920(int32_t arg1 @ esi)
{
    // 第一条实际指令: if (data_3078599 != 0)
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "DrawMode.cpp", 0xd, 
            "DrawModeSet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = data_26a6538
    
    if (result != arg1)
        if (result != 0)
            if (result == 1)
                sub_4d95a0()
            else
                if (result != 2)
                    sub_4c5870("Halt", &data_83f3d3, "DrawMode.cpp", 0x1f, "DrawModeSet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_4e2130()
        
        result = arg1
        
        if (arg1 != 0)
            if (result != 1)
                if (result == 2)
                    sub_4e20f0()
                    data_26a6538 = arg1
                    return result - 2
                
                sub_4c5870("Halt", &data_83f3d3, "DrawMode.cpp", 0x30, "DrawModeSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result = sub_4d94b0()
        
        data_26a6538 = arg1
    
    return result
}

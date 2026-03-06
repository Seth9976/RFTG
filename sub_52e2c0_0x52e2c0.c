// 函数名称: sub_52e2c0
// 虚拟地址: 0x52e2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_52e2c0()
{
    // 第一条实际指令: int32_t esi = data_30da51c
    int32_t esi = data_30da51c
    
    if (esi s<= 0)
        sub_4c5870("gUI2Editor.s.activeSetCount > 0", &data_83f3d3, "UI2.cpp", 0x15d8, 
            "UI2HighestSelectedItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = nullptr
    int32_t edx = 0
    
    if (esi s> 0)
        do
            int32_t ecx_1 = (&data_30d951c)[edx]
            
            if (ecx_1 s< 0)
                sub_4c5870("index >= 0", &data_83f3d3, "UI2.cpp", 0xeb7, "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (ecx_1 s>= data_30d94f0)
                sub_4c5870("index < gUI2Editor.numDisplayEls", &data_83f3d3, "UI2.cpp", 0xeb8, 
                    "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* result_1 = *((ecx_1 << 3) + &data_30d74f0)
            
            if (result == 0 || *(result + 4) s< *(result_1 + 4))
                result = result_1
            
            edx += 1
        while (edx s< esi)
        
        if (result != 0)
            return result
    
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x15e6, "UI2HighestSelectedItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

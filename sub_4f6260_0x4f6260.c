// 函数名称: sub_4f6260
// 虚拟地址: 0x4f6260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4f6260()
{
    // 第一条实际指令: int32_t* esi
    int32_t* esi
    int32_t* eax = sub_4f4890(esi)
    char* var_1c
    int32_t var_10
    char const* const var_c
    
    if (eax[1] s> 0)
        void* result = *eax
        
        if (*(result + 4) == 6)
            return result
        
        var_c = "UIElementGroup"
        var_10 = 0x34c
        char const* const var_14_1 = "UIDef.cpp"
        char* const var_18_1 = &data_83f3d3
        var_1c = "el.type == UI_GROUP"
    else
        var_c = "UIDefGetElement"
        var_10 = 0x105
        char const* const var_14 = "UIDef.cpp"
        char* const var_18 = &data_83f3d3
        var_1c = "index < def.numElements"
    
    sub_4c5870(var_1c, &data_83f3d3, "UIDef.cpp", var_10, var_c)
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

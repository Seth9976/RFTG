// 函数名称: sub_46b2b0
// 虚拟地址: 0x46b2b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_46b2b0(int32_t arg1 @ esi)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (arg1 s< 0)
        char const* const var_4 = "PlayerGui"
        var_8 = 0x2c2
        char const* const var_c = "..\code\RFTGShared.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "who >= 0"
    else if (arg1 s< 4)
        void* edx_1 = *(data_27e7a40 + 0x548)
        int32_t i = 0
        int32_t* ecx_1 = edx_1 + 0x21c
        
        do
            if (*ecx_1 == arg1)
                return i * 0x1f98 + edx_1 + 0x218
            
            i += 1
            ecx_1 = &ecx_1[0x7e6]
        while (i s< 4)
        
        char const* const var_4_2 = "PlayerGui"
        var_8 = 0x2cb
        char const* const var_c_2 = "..\code\RFTGShared.cpp"
        char* const var_10_2 = &data_83f3d3
        var_14 = "Halt"
    else
        char const* const var_4_1 = "PlayerGui"
        var_8 = 0x2c3
        char const* const var_c_1 = "..\code\RFTGShared.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "who < 4"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\RFTGShared.cpp", var_8, "PlayerGui")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

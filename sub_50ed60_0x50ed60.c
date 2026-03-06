// 函数名称: sub_50ed60
// 虚拟地址: 0x50ed60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_50ed60(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1 != 0)
        if (arg1 == 1)
            if (*(arg3 + 0x32) != 0 || *(arg3 + 0x33) != 0)
                result.b = 0
                return result
            
            if (*arg3 == 2 && arg3[0xd].b == 0)
                result.b = 0
                return result
        else
            if (arg1 != 2)
                sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x4e1, "SatisfiesDrawStyle")
                
                if (IsDebuggerPresent() != 1)
                    noreturn sub_4c5a30() __tailcall
                
                breakpoint
            
            if (*(arg3 + 0x32) != 0)
                result.b = 0
                return result
    
    result.b = 1
    return result
}

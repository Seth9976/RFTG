// 函数名称: sub_49a2f0
// 虚拟地址: 0x49a2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49a2f0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: if (arg3 s> arg1)
    if (arg3 s> arg1)
        sub_4c5870("min <= max", &data_83f3d3, "Random.cpp", 0xd3, "RandomLCIntRange")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi_3 = arg3 + sub_4c9760(arg4 + 0x10, arg1 - arg3 + 1)
    int32_t edx = *arg6
    
    if (edx s>= esi_3)
        int32_t result = sub_4c97b0(esi_3, edx, arg5)
        *arg6 = esi_3
        return result
    
    sub_4c5870("*nl >= arg1", &data_83f3d3, "..\code\rftg\ai.cpp", 0x237c, "ShuffleN")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

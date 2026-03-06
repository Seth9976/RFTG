// 函数名称: sub_4f6e90
// 虚拟地址: 0x4f6e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4f6e90(int32_t arg1 @ esi, int32_t arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = *(arg2 + (arg1 << 2) + 0x30)
    
    if (edx != 0)
        return sub_4fc1e0(ecx, edx)
    
    int128_t* result = sub_4fc0d0()
    *(result + 4) = arg3
    *(arg2 + (arg1 << 2) + 0x30) = *(result + 0x1bc)
    return result
}

// 函数名称: sub_4e8a50
// 虚拟地址: 0x4e8a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e8a50(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ecx = arg3 + arg1 * 0xc
    int32_t* ecx = arg3 + arg1 * 0xc
    int32_t eax = ecx[2]
    
    if (eax != 2)
        if (eax == 4)
            return sub_4e89e0(ecx, arg2)
        
        sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x2f5, "FlanimGetUncompressedParamInt")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (arg2 s>= 0 && arg2 s< ecx[1] u>> 2)
        return *(*ecx + (arg2 << 2))
    
    sub_4c5870("frameIndex >= 0 && frameIndex < numFrames", &data_83f3d3, "Flanim.cpp", 0x2eb, 
        "FlanimGetUncompressedParamInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

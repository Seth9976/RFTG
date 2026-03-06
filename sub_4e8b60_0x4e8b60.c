// 函数名称: sub_4e8b60
// 虚拟地址: 0x4e8b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e8b60(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ecx = arg3 + arg1 * 0xc
    int32_t* ecx = arg3 + arg1 * 0xc
    int32_t eax = ecx[2]
    
    if (eax != 1)
        if (eax == 3)
            return sub_4e8af0(ecx, arg2)
        
        sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x31d, "FlanimGetUncompressedParamVec2")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (arg2 s>= 0 && arg2 s< ecx[1] u>> 3)
        int32_t ecx_1 = *ecx
        *(ecx_1 + (arg2 << 3) + 4)
        return *(ecx_1 + (arg2 << 3))
    
    sub_4c5870("frameIndex >= 0 && frameIndex < numFrames", &data_83f3d3, "Flanim.cpp", 0x313, 
        "FlanimGetUncompressedParamVec2")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

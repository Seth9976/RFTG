// 函数名称: sub_553a50
// 虚拟地址: 0x553a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_553a50(int32_t arg1, int32_t arg2, float* arg3, float arg4)
{
    // 第一条实际指令: float* var_8 = arg3
    float* var_8 = arg3
    
    if (arg1 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "ParameterTrack.cpp", 0x3d, "TrackScalarRangeValue")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax
    
    switch (arg1)
        case 0
            eax = 1
        case 1
            eax = 3
        case 2
            eax = 6
        case 3
            eax = 2
        case 4
            eax = 4
    
    float var_c = fconvert.s(fconvert.t(arg3[1]))
    float var_10 = fconvert.s(fconvert.t(*arg3))
    return sub_4066a0(eax, fconvert.s(fconvert.t(arg4)))
}

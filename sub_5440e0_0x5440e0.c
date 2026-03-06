// 函数名称: sub_5440e0
// 虚拟地址: 0x5440e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5440e0(int32_t arg1, float arg2)
{
    // 第一条实际指令: if (arg1 s>= 0x400)
    if (arg1 s>= 0x400)
        sub_4c5870("registerIndex < MAX_UNIFORMS", &data_83f3d3, "OpenGLGraphics.cpp", 0x352, 
            "GLDupCheck_glUniform1f")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = data_307882c
    int32_t esi_1 = arg1 * 2
    
    if (*(ecx + (esi_1 << 3) + 0x28) == arg2)
        return 
    
    int32_t var_10_1 = ecx
    data_3079510(arg1, fconvert.s(fconvert.t(arg2)))
    *(data_307882c + (esi_1 << 3) + 0x28) = arg2
}

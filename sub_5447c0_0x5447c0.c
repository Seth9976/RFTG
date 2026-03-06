// 函数名称: sub_5447c0
// 虚拟地址: 0x5447c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5447c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 s< 0x400)
    if (arg1 s< 0x400)
        int32_t esi_1 = arg1 * 2
        
        if (*(data_307882c + (esi_1 << 3) + 0x28) != arg2)
            data_3079518(arg1, arg2)
            *(data_307882c + (esi_1 << 3) + 0x28) = arg2
        
        return 
    
    sub_4c5870("registerIndex < MAX_UNIFORMS", &data_83f3d3, "OpenGLGraphics.cpp", 0x3c3, 
        "GLDupCheck_glUniform1i")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_543f60
// 虚拟地址: 0x543f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_543f60(int32_t arg1, uint32_t arg2 @ esi)
{
    // 第一条实际指令: if (arg1 u> 7)
    if (arg1 u> 7)
        sub_4c5870("textureIndex >= 0 && textureIndex < 8", &data_83f3d3, "OpenGLGraphics.cpp", 0x2e5, 
            "GLDupCheck_glBindTexture")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    void* ecx = data_307882c
    
    if (*(ecx + (arg1 << 2) + 0x409c) == arg2)
        return 
    
    *(ecx + (arg1 << 2) + 0x409c) = arg2
    
    if (*(ecx + 0x4098) != arg1)
        *(ecx + 0x4098) = arg1
        data_30792c4(arg1 + 0x84c0)
    
    glBindTexture(0xde1, arg2)
}

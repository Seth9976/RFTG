// 函数名称: sub_4e5ea0
// 虚拟地址: 0x4e5ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e5ea0()
{
    // 第一条实际指令: void* ecx_3 = data_27e7fe4
    void* ecx_3 = data_27e7fe4
    int32_t eax = *(ecx_3 + 0x244)
    
    if (eax s<= 0)
        sub_4c5870("gpRenderAppData->renderTargetStackDepth > 0", &data_83f3d3, "Renderer.cpp", 0x381, 
            "RendererPopRT")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(ecx_3 + 0x244) = eax - 1
    
    if (eax == 1)
        if (data_30785ac == 5)
            return sub_54b920(0)
        
        return sub_4e5e20() __tailcall
    
    void* eax_6 = ecx_3 + (((eax - 1) * 5 + 0x41) << 2)
    int32_t ecx = *eax_6
    
    if (ecx != 2)
        if (ecx == 1)
            return sub_4e58a0(*(eax_6 + 4))
        
        sub_4c5870("Halt", &data_83f3d3, "Renderer.cpp", 0x39e, "RendererPopRT")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx_1 = *(eax_6 + 8)
    
    if (ecx_1 != 0)
        return sub_4e57f0(ecx_1, *(eax_6 + 0xc), *(eax_6 + 0x10))
    
    sub_4c5870("rt.texColor", &data_83f3d3, "Renderer.cpp", 0x395, "RendererPopRT")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

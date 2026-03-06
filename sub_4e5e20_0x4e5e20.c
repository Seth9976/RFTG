// 函数名称: sub_4e5e20
// 虚拟地址: 0x4e5e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4e5e20()
{
    // 第一条实际指令: void* ecx = data_27e7fe4
    void* ecx = data_27e7fe4
    int32_t eax = *(ecx + 0xe8)
    *(ecx + 0x244) = 0
    
    if (eax == 1)
        return sub_4e58a0(*(ecx + 0xec))
    
    if (eax == 2)
        return sub_4e57f0(*(ecx + 0xf8), *(ecx + 0xfc), *(ecx + 0x100))
    
    sub_4c5870("Halt", &data_83f3d3, "Renderer.cpp", 0x371, "RendererRestoreMainRT")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_55ca90
// 虚拟地址: 0x55ca90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55ca90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* edi = *(data_3079200 + 8)
    int32_t* edi = *(data_3079200 + 8)
    
    if (arg2 != 1)
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x960, 
            "Dx9GraphicsInterface::RenderTargetSetMonitorTarget")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_4 = *(arg1 + 0x54)
    int32_t ecx = *(arg1 + 0x5c)
    int32_t ebx = *(arg1 + 0x58)
    *(arg1 + 0x68) = *(arg1 + 0x60)
    *(arg1 + 0x64) = ecx
    
    if ((*(*edi + 0x94))(edi, 0, eax_4) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x964, 
            "Dx9GraphicsInterface::RenderTargetSetMonitorTarget")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t result = (*(*edi + 0x9c))(edi, ebx)
    
    if (result s>= 0)
        *(arg1 + 0x6c) = ebx != 0
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x967, 
        "Dx9GraphicsInterface::RenderTargetSetMonitorTarget")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

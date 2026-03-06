// 函数名称: sub_55c940
// 虚拟地址: 0x55c940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55c940(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 1)
    if (arg2 != 1)
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x90d, 
            "Dx9GraphicsInterface::APIPresent")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_3 = *(arg1 + 0x50)
    int32_t result = (*(*eax_3 + 0xc))(eax_3, 0, 0, 0, 0, 0)
    
    if (result == 0x88760868)
        return sub_4c5680("Device Lost")
    
    if (result s>= 0)
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

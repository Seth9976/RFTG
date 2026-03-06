// 函数名称: sub_55c2e0
// 虚拟地址: 0x55c2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_55c2e0(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *(data_3079200 + 8)
    int32_t* eax_1 = *(data_3079200 + 8)
    int32_t result
    
    if (*(arg1 + 4) != 0)
        result = (*(*eax_1 + 0xe4))(eax_1, 0x1c, 1)
        
        if (result s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x798, 
                "Dx9GraphicsSetFog")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            noreturn sub_4c5a30() __tailcall
    else
        result = (*(*eax_1 + 0xe4))(eax_1, 0x1c, 0)
        
        if (result s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x793, 
                "Dx9GraphicsSetFog")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            noreturn sub_4c5a30() __tailcall
    
    return result
}

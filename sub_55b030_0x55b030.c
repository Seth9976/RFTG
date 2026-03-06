// 函数名称: sub_55b030
// 虚拟地址: 0x55b030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_55b030()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t esi
    int32_t var_c = esi
    int32_t* esi_1 = *(data_3079200 + 8)
    
    if ((*(*esi_1 + 0xe4))(esi_1, 0x22, 0xffdfe3e8) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x4e2, 
            "Dx9GraphicsInitFog")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((*(*esi_1 + 0xe4))(esi_1, 0x23, 2) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x4e5, 
            "Dx9GraphicsInitFog")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float var_1c = fconvert.s(fconvert.t(0.00300000003f))
    int32_t result = (*(*esi_1 + 0xe4))(esi_1, 0x26)
    
    if (result s>= 0)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x4e8, 
        "Dx9GraphicsInitFog")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

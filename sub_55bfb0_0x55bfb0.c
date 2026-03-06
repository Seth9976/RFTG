// 函数名称: sub_55bfb0
// 虚拟地址: 0x55bfb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_55bfb0(void* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t* ebx = *(data_3079200 + 8)
    int32_t* ebx = *(data_3079200 + 8)
    int32_t eax_1 = *(*(arg1 + 0xc) + 0x10)
    
    if (eax_1 == 1)
        return sub_55b530(eax_1 - 1, *(arg1 + 4), arg1 + 0x10, arg3)
    
    if (eax_1 == 4)
        *(arg1 + 4)
        return sub_55b4c0(arg3)
    
    void* result = eax_1 - 0xf
    
    if (eax_1 != 0xf)
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x6cb, 
            "Dx9SetGenericRenderState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi_1 = *(arg1 + 0x10)
    
    if (edi_1 != 0)
        if (sub_5618d0(edi_1) != 0)
            sub_4c5870("!Dx9TextureIsSurface(assetTexture)", &data_83f3d3, 
                "Windows\WindowsGraphics.cpp", 0x6b0, "Dx9SetGenericRenderState")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = sub_50ba10(edi_1)
        
        if (result != 0)
            result = (*(*ebx + 0x104))(ebx, *(arg1 + 4), result)
            
            if (result s< 0)
                sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x6bd, 
                    "Dx9SetGenericRenderState")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    
    return result
}

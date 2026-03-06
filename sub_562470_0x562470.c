// 函数名称: sub_562470
// 虚拟地址: 0x562470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_562470(int32_t* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: if (arg1[1] != 3)
    if (arg1[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_3 = *(*sub_466320(arg1) + 0x18)
    int32_t result
    
    if (eax_3 == 0 || eax_3 == 3)
        result = arg2 - 0x53
        
        if (result u> 7)
            sub_4c5870("samplerIndex >= 0 && samplerIndex <= NUM_SAMPLER_STATES - 1", &data_83f3d3, 
                "Windows\WindowsDx11.cpp", 0x78d, "Dx11GetSamplerIndex")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        if (eax_3 != 1)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x7a7, "Dx11GetSamplerIndex")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = arg2 - 0x53
        
        if (result u> 7)
            sub_4c5870("samplerIndex >= 0 && samplerIndex <= NUM_SAMPLER_STATES - 1", &data_83f3d3, 
                "Windows\WindowsDx11.cpp", 0x7a1, "Dx11GetSamplerIndex")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return result
}

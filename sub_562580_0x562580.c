// 函数名称: sub_562580
// 虚拟地址: 0x562580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_562580(int32_t* arg1 @ edi, void* arg2, int32_t arg3)
{
    // 第一条实际指令: if (*(arg1[3] + 0x10) != 0xf)
    if (*(arg1[3] + 0x10) != 0xf)
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x7d6, 
            "Dx11GraphicsSetGenericRenderState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** esi = arg1[4]
    
    if (esi == 0)
        esi = sub_509140(esi + 3, "!DX11\MissingTexture.texture")
        
        if (esi == 0)
            sub_4c5870("assetTexture", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x7b9, 
                "Dx11GraphicsSetGenericRenderState")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    if (sub_5618d0(esi) != 0)
        sub_4c5870("!Dx11TextureIsView(assetTexture)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x7bc, 
            "Dx11GraphicsSetGenericRenderState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_7 = sub_50ba10(esi)
    void* edx_1 = data_3079204 + 0x40
    void* ebx = nullptr
    
    if (eax_7 != 0)
        uint32_t ecx_2 = zx.d(eax_7.w)
        
        if (ecx_2 u< *(edx_1 + 4))
            void* ecx_4 = ecx_2 * 0x24c + *edx_1
            ebx.b = *(ecx_4 + 0x248) != eax_7
            ebx = (ebx - 1) & ecx_4
    
    if (*ebx != 2)
        sub_4c5870("bufferDataTexture->mBufferType == DX11BUFFER_TEXTURE", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x7c0, "Dx11GraphicsSetGenericRenderState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_9 = sub_563f20(*(arg2 + 0xeb8), edx_1)
    
    if (*eax_9 != 5)
        sub_4c5870("bufferDataMaterial->mBufferType == DX11BUFFER_MATERIAL", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x7c3, "Dx11GraphicsSetGenericRenderState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_8 = *(eax_9 + (sub_562470(esi, *arg1) << 2) + 0x34)
    
    if (arg3 == 3)
        int32_t* eax_15 = *(data_3079204 + 0x10)
        (*(*eax_15 + 0x68))(eax_15, arg1[1], 1, &var_8)
        int32_t* eax_17 = *(data_3079204 + 0x10)
        return (*(*eax_17 + 0x64))(eax_17, arg1[1], 1, ebx + 0x20)
    
    if (arg3 != 4)
        return arg3
    
    int32_t* eax_20 = *(data_3079204 + 0x10)
    (*(*eax_20 + 0x28))(eax_20, arg1[1], 1, &var_8)
    int32_t* eax_22 = *(data_3079204 + 0x10)
    return (*(*eax_22 + 0x20))(eax_22, arg1[1], 1, ebx + 0x20)
}

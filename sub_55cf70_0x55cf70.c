// 函数名称: sub_55cf70
// 虚拟地址: 0x55cf70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __thiscallsub_55cf70(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* edi_1 = *(data_3079200 + 8)
    int32_t* eax_1 = sub_55d600(arg1 + 0x84, arg3)
    
    if (eax_1[1] != 0)
        sub_4c5870("vertexVufferData->mBufferType == DXBUFFER_VERTEX", &data_83f3d3, 
            "Windows\WindowsGraphics.cpp", 0xa3f, "Dx9GraphicsInterface::DrawPrimitive")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi_2 = *eax_1
    int32_t eax_4 = *(sub_533af0(arg5) + 0xc)
    
    if (eax_4 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((*(*edi_1 + 0x190))(edi_1, 0, esi_2, 0, eax_4) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0xa46, 
            "Dx9GraphicsInterface::DrawPrimitive")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_8 = data_27e7fe4
    *(eax_8 + 0xc) += 1
    
    if (arg5 u> 0x10)
        sub_4c5870("vertexFormat >= 0 && vertexFormat < VERTEX_FORMAT_COUNT", &data_83f3d3, 
            "Windows\WindowsGraphics.cpp", 0x144, "Dx9GetVertexDeclaration")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if ((*(*edi_1 + 0x15c))(edi_1, *(data_3079200 + (arg5 << 2) + 0xc)) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0xa4a, 
            "Dx9GraphicsInterface::DrawPrimitive")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi_4
    
    if (arg4 == 0)
        esi_4 = arg6
        
        if ((*(*edi_1 + 0x144))(edi_1, arg2, 0, esi_4) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0xa5c, 
                "Dx9GraphicsInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        int32_t* eax_12 = sub_55d600(arg1 + 0x84, arg4)
        
        if (eax_12[1] != 1)
            sub_4c5870("indexBufferData->mBufferType == DXBUFFER_INDEX", &data_83f3d3, 
                "Windows\WindowsGraphics.cpp", 0xa4f, "Dx9GraphicsInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if ((*(*edi_1 + 0x1a0))(edi_1, *eax_12) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0xa54, 
                "Dx9GraphicsInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi_4 = arg6
        
        if ((*(*edi_1 + 0x148))(edi_1, arg2, 0, 0, arg7, 0, esi_4) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0xa57, 
                "Dx9GraphicsInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    int32_t* result = data_27e7fe4
    result[1] += esi_4
    result[2] += arg7
    *result += 1
    return result
}

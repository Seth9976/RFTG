// 函数名称: sub_4e8c00
// 虚拟地址: 0x4e8c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e8c00(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t** arg5)
{
    // 第一条实际指令: if (arg1 s< 0 || arg1 s>= *(arg4 + 0x14))
    if (arg1 s< 0 || arg1 s>= *(arg4 + 0x14))
        sub_4c5870("layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount", &data_83f3d3, 
            "Flanim.cpp", 0x323, "FlanimGetShapeTransformAtFrame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = *(arg4 + 0x10)
    int32_t eax = arg1 * 5
    int32_t edi = *(edx + (eax << 2) + 4)
    void* eax_1 = edx + (eax << 2)
    
    if (edi s< 0 || edi s>= *(arg4 + 0x1c))
        sub_4c5870("vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount", 
            &data_83f3d3, "Flanim.cpp", 0x328, "FlanimGetShapeTransformAtFrame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi_3 = edi * 0x60 + *(arg4 + 0x18)
    int32_t* esi = arg5
    esi[8] = sub_4e8a50(4, arg3, edi_3)
    esi[9] = sub_4e8a50(5, arg3, edi_3)
    int32_t eax_4 = sub_4e8a50(6, arg3, edi_3)
    
    if (eax_4 s< 0 || eax_4 s>= *(arg4 + 0x24))
        sub_4c5870("imageIndex >=0 && imageIndex < pFlanimDef->mImageCount", &data_83f3d3, 
            "Flanim.cpp", 0x32f, "FlanimGetShapeTransformAtFrame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    esi[0xa] = *(*(arg4 + 0x20) + (eax_4 << 2))
    esi[0xb] = sub_4e8a50(7, arg3, edi_3)
    int32_t eax_6 = *(eax_1 + 4)
    
    if (eax_6 != *(eax_1 + 8))
        sub_4c5870("pLayerDef->mQuad.x == pLayerDef->mQuad.y", &data_83f3d3, "Flanim.cpp", 0x335, 
            "FlanimGetShapeTransformAtFrame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_6 s< 0 || eax_6 s>= *(arg4 + 0x1c))
        sub_4c5870("vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount", &data_83f3d3, 
            "Flanim.cpp", 0x339, "FlanimGetShapeTransformAtFrame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi_6 = eax_6 * 0x60 + *(arg4 + 0x18)
    int32_t eax_8
    int32_t edx_8
    eax_8, edx_8 = sub_4e8b60(0, arg3, edi_6)
    *esi = eax_8
    esi[1] = edx_8
    int32_t eax_9
    int32_t edx_10
    eax_9, edx_10 = sub_4e8b60(2, arg3, edi_6)
    esi[2] = eax_9
    esi[3] = edx_10
    int32_t eax_10
    int32_t edx_12
    eax_10, edx_12 = sub_4e8b60(3, arg3, edi_6)
    esi[4] = eax_10
    int32_t* result = esi[0xa]
    esi[5] = edx_12
    
    if (result != 0)
        float eax_11
        float edx_13
        eax_11, edx_13 = sub_418560(result)
        esi[6] = eax_11
        float var_c = eax_11
        esi[7] = edx_13
        
        if (*(arg4 + 0x30) != 0)
            esi[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c) / fconvert.t(edx_13)))
                * fconvert.t(esi[2]))
            long double x87_r6_4 = float.t(1)
            long double x87_r6_5 = fconvert.t(fconvert.s(x87_r6_4 / x87_r6_4))
            esi[2] = fconvert.s(fconvert.t(esi[2]) * x87_r6_5)
            esi[3] = fconvert.s(x87_r6_5 * fconvert.t(esi[3]))
            sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x34d, "FlanimGetShapeTransformAtFrame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(arg4 + 0x31) != 0)
            sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x354, "FlanimGetShapeTransformAtFrame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        long double x87_r7_12 = fconvert.t(esi[3]) * fconvert.t(edx_13)
        var_c = fconvert.s(fconvert.t(esi[2]) * fconvert.t(var_c))
        float var_8_4 = fconvert.s(x87_r7_12)
        float var_38[0x9]
        sub_4eae20(&var_38, &var_c, esi)
        long double x87_r7_13 = fconvert.t(0.5f)
        float var_14_2 = fconvert.s(x87_r7_13)
        float var_8_5 = fconvert.s(x87_r7_13)
        var_c = var_14_2
        int32_t edx_15
        result, edx_15 = sub_4cce40(&var_38, var_14_2, &var_c)
        *arg5 = result
        arg5[1] = edx_15
    
    return result
}

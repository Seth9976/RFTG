// 函数名称: sub_60b420
// 虚拟地址: 0x60b420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_60b420(int32_t arg1, void* arg2, float arg3)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    void* ebx = *(esi + 0x134)
    sub_60b010(esi)
    float i_6 = arg3
    
    if (i_6 s> 0)
        void* esi_2 = arg2 + 4
        float i
        
        do
            (*(ebx + 0xb0))(fconvert.s(fconvert.t(*(esi_2 - 4))), fconvert.s(fconvert.t(*esi_2)), 
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(esi_2 - 4))
                    + fconvert.t(*(esi_2 + 4))))), 
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(esi_2 + 8)) + fconvert.t(*esi_2)))))
            esi_2 += 0x10
            i = i_6
            i_6 -= 1
        while (i != 1)
        esi = arg1
    
    void* edi = *(esi + 0x134)
    int32_t i_2 = 0
    char* const ebx_1 = &data_83f3d3
    arg3 = 0f
    
    if (*(edi + 4) == 0)
        return 0
    
    if (*(edi + 8) == 0)
        int32_t i_1 = (*(edi + 0x74))()
        
        if (i_1 != 0)
            arg3 = -nanf
            
            do
                if (ebx_1 == 0 || *ebx_1 == 0)
                    ebx_1 = "generic"
                
                char const* const ecx_4
                
                if (i_1 u> 0x500)
                    if (i_1 u> 0x8031)
                        ecx_4 = "UNKNOWN"
                    else if (i_1 == 0x8031)
                        ecx_4 = "GL_TABLE_TOO_LARGE"
                    else if (i_1 - 0x501 u> 4)
                        ecx_4 = "UNKNOWN"
                    else
                        switch (i_1)
                            case 0x501
                                ecx_4 = "GL_INVALID_VALUE"
                            case 0x502
                                ecx_4 = "GL_INVALID_OPERATION"
                            case 0x503
                                ecx_4 = "GL_STACK_OVERFLOW"
                            case 0x504
                                ecx_4 = "GL_STACK_UNDERFLOW"
                            case 0x505
                                ecx_4 = "GL_OUT_OF_MEMORY"
                else if (i_1 == 0x500)
                    ecx_4 = "GL_INVALID_ENUM"
                else if (i_1 != 0)
                    ecx_4 = "UNKNOWN"
                else
                    ecx_4 = "GL_NO_ERROR"
                
                int32_t i_5 = i_1
                char const* const var_18_3 = ecx_4
                char const* const var_1c_3 = "GL_RenderFillRects"
                int32_t var_20_3 = 0x455
                char const* const var_24_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                char* const var_28_1 = ebx_1
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                i_1 = (*(edi + 0x74))()
            while (i_1 != 0)
    else
        int32_t eax_3 = *(edi + 0xc)
        
        if (eax_3 != 0)
            if (eax_3 s> 0)
                arg3 = -nanf
                
                do
                    int32_t var_14_2 = *(*(edi + 0x10) + (i_2 << 2))
                    char const* const var_18_2 = "GL_RenderFillRects"
                    int32_t var_1c_2 = 0x455
                    char const* const var_20_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                    char* const var_24_1 = &data_83f3d3
                    sub_5cce60("%s: %s (%d): %s %s")
                    i_2 += 1
                while (i_2 s< *(edi + 0xc))
            
            void* esi_3 = *(arg1 + 0x134)
            
            if (*(esi_3 + 4) != 0)
                if (*(esi_3 + 8) == 0)
                    int32_t i_3
                    
                    do
                        i_3 = (*(esi_3 + 0x74))()
                    while (i_3 != 0)
                    return arg3
                
                int32_t eax_5 = *(esi_3 + 0xc)
                
                if (eax_5 != 0)
                    int32_t i_4 = 0
                    
                    if (eax_5 s> 0)
                        do
                            int32_t var_14_3 = *(*(esi_3 + 0x10) + (i_4 << 2))
                            sub_5d0af0()
                            i_4 += 1
                        while (i_4 s< *(esi_3 + 0xc))
                    
                    int32_t var_14_4 = *(esi_3 + 0x10)
                    sub_5d0af0()
                    *(esi_3 + 0xc) = 0
                    *(esi_3 + 0x10) = 0
    
    return arg3
}

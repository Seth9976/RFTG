// 函数名称: sub_60b1a0
// 虚拟地址: 0x60b1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60b1a0(int32_t arg1, float* arg2, int32_t arg3)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x134)
    void* esi = *(arg1 + 0x134)
    sub_60b010(arg1)
    long double x87_r7_1 = fconvert.t(0.5f)
    (*(esi + 0xd0))(fconvert.s(x87_r7_1), fconvert.s(x87_r7_1), fconvert.s(float.t(0)))
    (*(esi + 0xd8))(2, 0x1406, 0, arg2)
    (*(esi + 0x68))(0x8074)
    
    if (arg3 s<= 2)
        (*(esi + 0x5c))(3, 0, arg3)
    else
        long double x87_r7_2 = fconvert.t(*arg2)
        long double x87_r6_1 = fconvert.t(arg2[arg3 * 2 - 2])
        x87_r6_1 - x87_r7_2
        int32_t eax_2
        eax_2.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            (*(esi + 0x5c))(3, 0, arg3)
        else
            long double x87_r7_3 = fconvert.t(arg2[1])
            long double x87_r6_2 = fconvert.t(arg2[arg3 * 2 - 1])
            x87_r6_2 - x87_r7_3
            eax_2.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                (*(esi + 0x5c))(3, 0, arg3)
            else
                (*(esi + 0x5c))(2, 0, arg3 - 1)
    
    (*(esi + 0x5c))(0, 0, arg3)
    (*(esi + 0x58))(0x8074)
    long double x87_r7_5 = fconvert.t(-0.5f)
    (*(esi + 0xd0))(fconvert.s(x87_r7_5), fconvert.s(x87_r7_5), fconvert.s(float.t(0)))
    int32_t ebx_1 = arg1
    void* edi_1 = *(ebx_1 + 0x134)
    char* const esi_1 = &data_83f3d3
    arg1 = 0
    
    if (*(edi_1 + 4) == 0)
        return 0
    
    if (*(edi_1 + 8) == 0)
        int32_t i = (*(edi_1 + 0x74))()
        
        if (i != 0)
            arg1 = 0xffffffff
            
            do
                if (esi_1 == 0 || *esi_1 == 0)
                    esi_1 = "generic"
                
                char const* const ecx_5
                
                if (i u> 0x500)
                    if (i u> 0x8031)
                        ecx_5 = "UNKNOWN"
                    else if (i == 0x8031)
                        ecx_5 = "GL_TABLE_TOO_LARGE"
                    else if (i - 0x501 u> 4)
                        ecx_5 = "UNKNOWN"
                    else
                        switch (i)
                            case 0x501
                                ecx_5 = "GL_INVALID_VALUE"
                            case 0x502
                                ecx_5 = "GL_INVALID_OPERATION"
                            case 0x503
                                ecx_5 = "GL_STACK_OVERFLOW"
                            case 0x504
                                ecx_5 = "GL_STACK_UNDERFLOW"
                            case 0x505
                                ecx_5 = "GL_OUT_OF_MEMORY"
                else if (i == 0x500)
                    ecx_5 = "GL_INVALID_ENUM"
                else if (i != 0)
                    ecx_5 = "UNKNOWN"
                else
                    ecx_5 = "GL_NO_ERROR"
                
                int32_t i_4 = i
                char const* const var_18_3 = ecx_5
                char const* const var_1c_3 = "GL_RenderDrawLines"
                int32_t var_20_2 = 0x445
                char const* const var_24_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                char* const var_28_1 = esi_1
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                i = (*(edi_1 + 0x74))()
            while (i != 0)
    else
        int32_t eax_6 = *(edi_1 + 0xc)
        
        if (eax_6 != 0)
            int32_t i_1 = 0
            
            if (eax_6 s> 0)
                arg1 = 0xffffffff
                
                do
                    int32_t var_14_6 = *(*(edi_1 + 0x10) + (i_1 << 2))
                    char const* const var_18_2 = "GL_RenderDrawLines"
                    int32_t var_1c_2 = 0x445
                    char const* const var_20_1 = "..\..\src\render\opengl\SDL_render_gl.c"
                    char* const var_24_1 = &data_83f3d3
                    sub_5cce60("%s: %s (%d): %s %s")
                    i_1 += 1
                while (i_1 s< *(edi_1 + 0xc))
            
            void* esi_2 = *(ebx_1 + 0x134)
            
            if (*(esi_2 + 4) != 0)
                if (*(esi_2 + 8) == 0)
                    int32_t i_2
                    
                    do
                        i_2 = (*(esi_2 + 0x74))()
                    while (i_2 != 0)
                    return arg1
                
                int32_t eax_8 = *(esi_2 + 0xc)
                
                if (eax_8 != 0)
                    int32_t i_3 = 0
                    
                    if (eax_8 s> 0)
                        do
                            int32_t var_14_7 = *(*(esi_2 + 0x10) + (i_3 << 2))
                            sub_5d0af0()
                            i_3 += 1
                        while (i_3 s< *(esi_2 + 0xc))
                    
                    int32_t var_14_8 = *(esi_2 + 0x10)
                    sub_5d0af0()
                    *(esi_2 + 0xc) = 0
                    *(esi_2 + 0x10) = 0
    
    return arg1
}

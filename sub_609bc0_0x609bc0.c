// 函数名称: sub_609bc0
// 虚拟地址: 0x609bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_609bc0()
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t* esi = *(entry_ebx + 0x134)
    
    if (data_bf80a4 != *esi)
        sub_609b10(entry_ebx)
    else
        sub_6093c0(entry_ebx)
    
    int32_t ecx = esi[0x15]
    esi[8] = 0
    esi[9] = 0
    esi[0xa] = 0xffffffff
    ecx(0xb71)
    esi[0x15](0xb44)
    esi[0x23](0x1700)
    int32_t i = esi[0x22]()
    void* edi = *(entry_ebx + 0x134)
    char* const esi_1 = &data_83f3d3
    
    if (*(edi + 4) != 0)
        if (*(edi + 8) == 0)
            for (i = (*(edi + 0x74))(); i != 0; i = (*(edi + 0x74))())
                if (esi_1 == 0 || *esi_1 == 0)
                    esi_1 = "generic"
                
                char const* const ecx_4
                
                if (i u> 0x500)
                    if (i u> 0x8031)
                        ecx_4 = "UNKNOWN"
                    else if (i == 0x8031)
                        ecx_4 = "GL_TABLE_TOO_LARGE"
                    else if (i - 0x501 u> 4)
                        ecx_4 = "UNKNOWN"
                    else
                        switch (i)
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
                else if (i == 0x500)
                    ecx_4 = "GL_INVALID_ENUM"
                else if (i != 0)
                    ecx_4 = "UNKNOWN"
                else
                    ecx_4 = "GL_NO_ERROR"
                
                int32_t i_4 = i
                char const* const var_10_2 = ecx_4
                char const* const var_14_2 = "GL_ResetState"
                int32_t var_18_2 = 0x144
                char const* const var_1c_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                char* const var_20_1 = esi_1
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
        else
            i = *(edi + 0xc)
            
            if (i != 0)
                int32_t i_1 = 0
                
                if (i s> 0)
                    do
                        int32_t var_c_2 = *(*(edi + 0x10) + (i_1 << 2))
                        char const* const var_10_1 = "GL_ResetState"
                        int32_t var_14_1 = 0x144
                        char const* const var_18_1 = "..\..\src\render\opengl\SDL_render_gl.c"
                        char* const var_1c_1 = &data_83f3d3
                        i = sub_5cce60("%s: %s (%d): %s %s")
                        i_1 += 1
                    while (i_1 s< *(edi + 0xc))
                
                void* esi_2 = *(entry_ebx + 0x134)
                
                if (*(esi_2 + 4) != 0)
                    if (*(esi_2 + 8) == 0)
                        int32_t i_2
                        
                        do
                            i_2 = (*(esi_2 + 0x74))()
                        while (i_2 != 0)
                        
                        return i_2
                    
                    i = *(esi_2 + 0xc)
                    
                    if (i != 0)
                        int32_t i_3 = 0
                        
                        if (i s> 0)
                            do
                                int32_t var_c_3 = *(*(esi_2 + 0x10) + (i_3 << 2))
                                sub_5d0af0()
                                i_3 += 1
                            while (i_3 s< *(esi_2 + 0xc))
                        
                        int32_t var_c_4 = *(esi_2 + 0x10)
                        sub_5d0af0()
                        *(esi_2 + 0xc) = 0
                        *(esi_2 + 0x10) = 0
                        return 0
    
    return i
}

// 函数名称: sub_609870
// 虚拟地址: 0x609870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_609870(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* ebx = *(arg1 + 0x134)
    
    if (ebx != 0)
        if (ebx[1] != 0)
            if (ebx[2] == 0)
                int32_t i
                
                do
                    i = ebx[0x1d]()
                while (i != 0)
            else
                int32_t eax_1 = ebx[3]
                
                if (eax_1 != 0)
                    int32_t i_1 = 0
                    
                    if (eax_1 s> 0)
                        do
                            int32_t var_18_1 = *(ebx[4] + (i_1 << 2))
                            sub_5d0af0()
                            i_1 += 1
                        while (i_1 s< ebx[3])
                    
                    int32_t var_18_2 = ebx[4]
                    sub_5d0af0()
                    ebx[3] = 0
                    ebx[4] = 0
        
        if (ebx[2] != 0)
            int32_t eax_3 = sub_5ca2e0("glDebugMessageCallbackARB")
            eax_3(ebx[5], ebx[6])
        
        void* eax_4 = ebx[0x40]
        
        if (eax_4 != 0)
            sub_6452b0(eax_4)
        
        if (*ebx != 0)
            if (ebx[0xc] != 0)
                int32_t i_2
                
                do
                    void* eax_5 = ebx[0xc]
                    i_2 = *(eax_5 + 0xc)
                    ebx[0x3c](1, eax_5 + 8)
                    void* edi_1 = *(arg1 + 0x134)
                    char* const esi_1 = &data_83f3d3
                    
                    if (*(edi_1 + 4) != 0)
                        if (*(edi_1 + 8) == 0)
                            for (int32_t j = (*(edi_1 + 0x74))(); j != 0; j = (*(edi_1 + 0x74))())
                                if (esi_1 == 0 || *esi_1 == 0)
                                    esi_1 = "generic"
                                
                                char const* const ecx_7
                                
                                if (j u> 0x500)
                                    if (j u> 0x8031)
                                        ecx_7 = "UNKNOWN"
                                    else if (j == 0x8031)
                                        ecx_7 = "GL_TABLE_TOO_LARGE"
                                    else if (j - 0x501 u> 4)
                                        ecx_7 = "UNKNOWN"
                                    else
                                        switch (j)
                                            case 0x501
                                                ecx_7 = "GL_INVALID_VALUE"
                                            case 0x502
                                                ecx_7 = "GL_INVALID_OPERATION"
                                            case 0x503
                                                ecx_7 = "GL_STACK_OVERFLOW"
                                            case 0x504
                                                ecx_7 = "GL_STACK_UNDERFLOW"
                                            case 0x505
                                                ecx_7 = "GL_OUT_OF_MEMORY"
                                else if (j == 0x500)
                                    ecx_7 = "GL_INVALID_ENUM"
                                else if (j != 0)
                                    ecx_7 = "UNKNOWN"
                                else
                                    ecx_7 = "GL_NO_ERROR"
                                
                                int32_t j_4 = j
                                char const* const var_1c_3 = ecx_7
                                char const* const var_20_2 = "GL_DestroyRenderer"
                                int32_t var_24_2 = 0x567
                                char const* const var_28_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                                char* const var_2c_1 = esi_1
                                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                        else
                            int32_t eax_8 = *(edi_1 + 0xc)
                            
                            if (eax_8 != 0)
                                int32_t j_1 = 0
                                
                                if (eax_8 s> 0)
                                    do
                                        int32_t var_18_6 = *(*(edi_1 + 0x10) + (j_1 << 2))
                                        char const* const var_1c_2 = "GL_DestroyRenderer"
                                        int32_t var_20_1 = 0x567
                                        char const* const var_24_1 =
                                            "..\..\src\render\opengl\SDL_render_gl.c"
                                        char* const var_28_1 = &data_83f3d3
                                        sub_5cce60("%s: %s (%d): %s %s")
                                        j_1 += 1
                                    while (j_1 s< *(edi_1 + 0xc))
                                
                                void* esi_2 = *(arg1 + 0x134)
                                
                                if (*(esi_2 + 4) != 0)
                                    if (*(esi_2 + 8) == 0)
                                        int32_t j_2
                                        
                                        do
                                            j_2 = (*(esi_2 + 0x74))()
                                        while (j_2 != 0)
                                    else
                                        int32_t eax_10 = *(esi_2 + 0xc)
                                        
                                        if (eax_10 != 0)
                                            int32_t j_3 = 0
                                            
                                            if (eax_10 s> 0)
                                                do
                                                    int32_t var_18_7 = *(*(esi_2 + 0x10) + (j_3 << 2))
                                                    sub_5d0af0()
                                                    j_3 += 1
                                                while (j_3 s< *(esi_2 + 0xc))
                                            
                                            int32_t var_18_8 = *(esi_2 + 0x10)
                                            sub_5d0af0()
                                            *(esi_2 + 0xc) = 0
                                            *(esi_2 + 0x10) = 0
                    
                    int32_t var_18_9 = ebx[0xc]
                    sub_5d0af0()
                    ebx[0xc] = i_2
                while (i_2 != 0)
            
            sub_5cb440(*ebx)
        
        int32_t* var_18_11 = ebx
        sub_5d0af0()
    
    void* __saved_esi = arg1
    return sub_5d0af0()
}

// 函数名称: sub_60ac10
// 虚拟地址: 0x60ac10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60ac10(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t* esi = *(arg2 + 0x44)
    int32_t* esi = *(arg2 + 0x44)
    void* edi = *(arg1 + 0x134)
    sub_609b10(arg1)
    (*(edi + 0x64))(esi[1])
    (*(edi + 0x38))(esi[1], *esi)
    (*(edi + 0x94))(0xcf5, 1)
    (*(edi + 0x94))(0xcf2, arg5)
    (*(edi + 0xcc))(esi[1], 0, *arg3, arg3[1], arg3[2], arg3[3], esi[4], esi[5], arg4)
    (*(edi + 0x94))(0xcf2, arg7)
    (*(edi + 0x38))(esi[1], esi[0xd])
    int32_t eax_10
    int32_t edx_9
    edx_9:eax_10 = sx.q(arg3[3])
    int32_t eax_14
    int32_t edx_10
    edx_10:eax_14 = sx.q(arg3[2])
    int32_t eax_18
    int32_t edx_11
    edx_11:eax_18 = sx.q(arg3[1])
    int32_t eax_22
    int32_t edx_12
    edx_12:eax_22 = sx.q(*arg3)
    (*(edi + 0xcc))(esi[1], 0, (eax_22 - edx_12) s>> 1, (eax_18 - edx_11) s>> 1, 
        (eax_14 - edx_10) s>> 1, (eax_10 - edx_9) s>> 1, esi[4], esi[5], arg6)
    (*(edi + 0x94))(0xcf2, arg9)
    (*(edi + 0x38))(esi[1], esi[0xe])
    int32_t eax_30
    int32_t edx_16
    edx_16:eax_30 = sx.q(arg3[3])
    int32_t eax_34
    int32_t edx_17
    edx_17:eax_34 = sx.q(arg3[2])
    int32_t eax_38
    int32_t edx_18
    edx_18:eax_38 = sx.q(arg3[1])
    int32_t eax_42
    int32_t edx_19
    edx_19:eax_42 = sx.q(*arg3)
    (*(edi + 0xcc))(esi[1], 0, (eax_42 - edx_19) s>> 1, (eax_38 - edx_18) s>> 1, 
        (eax_34 - edx_17) s>> 1, (eax_30 - edx_16) s>> 1, esi[4], esi[5], arg8)
    (*(edi + 0x54))(esi[1])
    int32_t ebx_1 = arg1
    void* edi_1 = *(ebx_1 + 0x134)
    char const* const esi_1 = "glTexSubImage2D()"
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
                
                char const* const ecx_16
                
                if (i u> 0x500)
                    if (i u> 0x8031)
                        ecx_16 = "UNKNOWN"
                    else if (i == 0x8031)
                        ecx_16 = "GL_TABLE_TOO_LARGE"
                    else if (i - 0x501 u> 4)
                        ecx_16 = "UNKNOWN"
                    else
                        switch (i)
                            case 0x501
                                ecx_16 = "GL_INVALID_VALUE"
                            case 0x502
                                ecx_16 = "GL_INVALID_OPERATION"
                            case 0x503
                                ecx_16 = "GL_STACK_OVERFLOW"
                            case 0x504
                                ecx_16 = "GL_STACK_UNDERFLOW"
                            case 0x505
                                ecx_16 = "GL_OUT_OF_MEMORY"
                else if (i == 0x500)
                    ecx_16 = "GL_INVALID_ENUM"
                else if (i != 0)
                    ecx_16 = "UNKNOWN"
                else
                    ecx_16 = "GL_NO_ERROR"
                
                int32_t i_4 = i
                char const* const var_18_7 = ecx_16
                char const* const var_1c_4 = "GL_UpdateTextureYUV"
                int32_t var_20_4 = 0x357
                char const* const var_24_4 = "..\..\src\render\opengl\SDL_render_gl.c"
                char const* const var_28_3 = esi_1
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                i = (*(edi_1 + 0x74))()
            while (i != 0)
    else
        int32_t eax_47 = *(edi_1 + 0xc)
        
        if (eax_47 != 0)
            int32_t i_1 = 0
            
            if (eax_47 s> 0)
                arg1 = 0xffffffff
                
                do
                    int32_t var_14_11 = *(*(edi_1 + 0x10) + (i_1 << 2))
                    char const* const var_18_6 = "GL_UpdateTextureYUV"
                    int32_t var_1c_3 = 0x357
                    char const* const var_20_3 = "..\..\src\render\opengl\SDL_render_gl.c"
                    char const* const var_24_3 = "glTexSubImage2D()"
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
                
                int32_t eax_49 = *(esi_2 + 0xc)
                
                if (eax_49 != 0)
                    int32_t i_3 = 0
                    
                    if (eax_49 s> 0)
                        do
                            int32_t var_14_12 = *(*(esi_2 + 0x10) + (i_3 << 2))
                            sub_5d0af0()
                            i_3 += 1
                        while (i_3 s< *(esi_2 + 0xc))
                    
                    int32_t var_14_13 = *(esi_2 + 0x10)
                    sub_5d0af0()
                    *(esi_2 + 0xc) = 0
                    *(esi_2 + 0x10) = 0
    
    return arg1
}

// 函数名称: sub_60a8a0
// 虚拟地址: 0x60a8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60a8a0(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x134)
    void* ebx = *(arg1 + 0x134)
    int32_t* esi = *(arg2 + 0x44)
    sub_609b10(arg1)
    (*(ebx + 0x64))(esi[1])
    (*(ebx + 0x38))(esi[1], *esi)
    (*(ebx + 0x94))(0xcf5, 1)
    int32_t eax_3 = *(arg2 + 4)
    uint32_t ecx_4
    
    if (eax_3 == 0 || (eax_3 & 0xf0000000) == 0x10000000)
        ecx_4 = zx.d(eax_3.b)
    else if (eax_3 == 0x32595559 || eax_3 == 0x59565955 || eax_3 == 0x55595659)
        ecx_4 = 2
    else
        ecx_4 = 1
    
    (*(ebx + 0x94))(0xcf2, divu.dp.d(0:arg5, ecx_4))
    (*(ebx + 0xcc))(esi[1], 0, *arg3, arg3[1], arg3[2], arg3[3], esi[4], esi[5], arg4)
    
    if (esi[0xc] != 0)
        int32_t eax_10
        int32_t edx_7
        edx_7:eax_10 = sx.q(arg5)
        (*(ebx + 0x94))(0xcf2, (eax_10 - edx_7) s>> 1)
        arg4 += arg3[3] * arg5
        int32_t eax_14
        
        if (*(arg2 + 4) != 0x32315659)
            eax_14 = esi[0xd]
        else
            eax_14 = esi[0xe]
        
        (*(ebx + 0x38))(esi[1], eax_14)
        int32_t eax_17
        int32_t edx_11
        edx_11:eax_17 = sx.q(arg3[3])
        int32_t eax_21
        int32_t edx_12
        edx_12:eax_21 = sx.q(arg3[2])
        int32_t eax_25
        int32_t edx_13
        edx_13:eax_25 = sx.q(arg3[1])
        int32_t eax_29
        int32_t edx_14
        edx_14:eax_29 = sx.q(*arg3)
        (*(ebx + 0xcc))(esi[1], 0, (eax_29 - edx_14) s>> 1, (eax_25 - edx_13) s>> 1, 
            (eax_21 - edx_12) s>> 1, (eax_17 - edx_11) s>> 1, esi[4], esi[5], arg4)
        int32_t eax_35
        int32_t edx_15
        edx_15:eax_35 = sx.q(arg3[3] * arg5)
        int32_t eax_38
        
        if (*(arg2 + 4) != 0x32315659)
            eax_38 = esi[0xe]
        else
            eax_38 = esi[0xd]
        
        (*(ebx + 0x38))(esi[1], eax_38)
        int32_t eax_41
        int32_t edx_20
        edx_20:eax_41 = sx.q(arg3[3])
        int32_t eax_45
        int32_t edx_21
        edx_21:eax_45 = sx.q(arg3[2])
        int32_t eax_49
        int32_t edx_22
        edx_22:eax_49 = sx.q(arg3[1])
        int32_t eax_53
        int32_t edx_23
        edx_23:eax_53 = sx.q(*arg3)
        (*(ebx + 0xcc))(esi[1], 0, (eax_53 - edx_23) s>> 1, (eax_49 - edx_22) s>> 1, 
            (eax_45 - edx_21) s>> 1, (eax_41 - edx_20) s>> 1, esi[4], esi[5], 
            arg4 + ((eax_35 + (edx_15 & 3)) s>> 2))
    
    (*(ebx + 0x54))(esi[1])
    void* edi_2 = *(arg1 + 0x134)
    char const* const esi_1 = "glTexSubImage2D()"
    arg5 = 0
    
    if (*(edi_2 + 4) == 0)
        return 0
    
    if (*(edi_2 + 8) == 0)
        int32_t i = (*(edi_2 + 0x74))()
        
        if (i != 0)
            arg5 = 0xffffffff
            
            do
                if (esi_1 == 0 || *esi_1 == 0)
                    esi_1 = "generic"
                
                char const* const ecx_19
                
                if (i u> 0x500)
                    if (i u> 0x8031)
                        ecx_19 = "UNKNOWN"
                    else if (i == 0x8031)
                        ecx_19 = "GL_TABLE_TOO_LARGE"
                    else if (i - 0x501 u> 4)
                        ecx_19 = "UNKNOWN"
                    else
                        switch (i)
                            case 0x501
                                ecx_19 = "GL_INVALID_VALUE"
                            case 0x502
                                ecx_19 = "GL_INVALID_OPERATION"
                            case 0x503
                                ecx_19 = "GL_STACK_OVERFLOW"
                            case 0x504
                                ecx_19 = "GL_STACK_UNDERFLOW"
                            case 0x505
                                ecx_19 = "GL_OUT_OF_MEMORY"
                else if (i == 0x500)
                    ecx_19 = "GL_INVALID_ENUM"
                else if (i != 0)
                    ecx_19 = "UNKNOWN"
                else
                    ecx_19 = "GL_NO_ERROR"
                
                int32_t i_4 = i
                char const* const var_18_7 = ecx_19
                char const* const var_1c_4 = "GL_UpdateTexture"
                int32_t var_20_4 = 0x333
                char const* const var_24_4 = "..\..\src\render\opengl\SDL_render_gl.c"
                char const* const var_28_3 = esi_1
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                i = (*(edi_2 + 0x74))()
            while (i != 0)
    else
        int32_t eax_59 = *(edi_2 + 0xc)
        
        if (eax_59 != 0)
            int32_t i_1 = 0
            
            if (eax_59 s> 0)
                arg5 = 0xffffffff
                
                do
                    int32_t var_14_10 = *(*(edi_2 + 0x10) + (i_1 << 2))
                    char const* const var_18_6 = "GL_UpdateTexture"
                    int32_t var_1c_3 = 0x333
                    char const* const var_20_3 = "..\..\src\render\opengl\SDL_render_gl.c"
                    char const* const var_24_3 = "glTexSubImage2D()"
                    sub_5cce60("%s: %s (%d): %s %s")
                    i_1 += 1
                while (i_1 s< *(edi_2 + 0xc))
            
            void* esi_2 = *(arg1 + 0x134)
            
            if (*(esi_2 + 4) != 0)
                if (*(esi_2 + 8) == 0)
                    int32_t i_2
                    
                    do
                        i_2 = (*(esi_2 + 0x74))()
                    while (i_2 != 0)
                    return arg5
                
                int32_t eax_60 = *(esi_2 + 0xc)
                
                if (eax_60 != 0)
                    int32_t i_3 = 0
                    
                    if (eax_60 s> 0)
                        do
                            int32_t var_14_11 = *(*(esi_2 + 0x10) + (i_3 << 2))
                            sub_5d0af0()
                            i_3 += 1
                        while (i_3 s< *(esi_2 + 0xc))
                    
                    int32_t var_14_12 = *(esi_2 + 0x10)
                    sub_5d0af0()
                    *(esi_2 + 0xc) = 0
                    *(esi_2 + 0x10) = 0
    
    return arg5
}

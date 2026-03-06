// 函数名称: sub_60b630
// 虚拟地址: 0x60b630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60b630(int32_t arg1, int32_t arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x134)
    void* ebx = *(arg1 + 0x134)
    int32_t* edi = *(arg2 + 0x44)
    sub_609b10(arg1)
    (*(ebx + 0x64))(edi[1])
    
    if (edi[0xc] != 0)
        (*(ebx + 0xe4))(0x84c2)
        (*(ebx + 0x38))(edi[1], edi[0xe])
        (*(ebx + 0xe4))(0x84c1)
        (*(ebx + 0x38))(edi[1], edi[0xd])
        (*(ebx + 0xe4))(0x84c0)
    
    (*(ebx + 0x38))(edi[1], *edi)
    char var_28_4
    char eax_6
    char ecx_5
    char edx_5
    
    if (*(arg2 + 0x14) == 0)
        eax_6 = 0xff
        edx_5 = 0xff
        var_28_4 = -1
        ecx_5 = 0xff
    else
        eax_6 = *(arg2 + 0x1f)
        ecx_5 = *(arg2 + 0x1c)
        var_28_4 = *(arg2 + 0x1e)
        edx_5 = *(arg2 + 0x1d)
    
    sub_6096d0(eax_6, edx_5, ecx_5, ebx, var_28_4)
    sub_609760(ebx, *(arg2 + 0x18))
    int32_t esi_2 = 3
    
    if (edi[0xc] == 0)
        esi_2 = 2
    
    sub_6096b0(esi_2, ebx)
    float* eax_8 = arg4
    float var_c = fconvert.s(fconvert.t(*eax_8))
    arg4 = fconvert.s(fconvert.t(eax_8[1]))
    float var_18 = fconvert.s(fconvert.t(eax_8[2]) + fconvert.t(*eax_8))
    int32_t* eax_9 = arg3
    int32_t ecx_6 = *eax_9
    float var_14 = fconvert.s(fconvert.t(eax_8[3]) + fconvert.t(eax_8[1]))
    int32_t ecx_7 = eax_9[1]
    long double x87_r6 = fconvert.t(fconvert.s(float.t(*(arg2 + 0xc))))
    arg3 = fconvert.s(fconvert.t(fconvert.s(float.t(ecx_6) / x87_r6)) * fconvert.t(edi[2]))
    float var_10 =
        fconvert.s(fconvert.t(fconvert.s(float.t(eax_9[2] + ecx_6) / x87_r6)) * fconvert.t(edi[2]))
    long double x87_r6_4 = fconvert.t(fconvert.s(float.t(*(arg2 + 0x10))))
    arg2 = fconvert.s(fconvert.t(fconvert.s(float.t(ecx_7) / x87_r6_4)) * fconvert.t(edi[3]))
    float var_8_4 =
        fconvert.s(fconvert.t(fconvert.s(float.t(eax_9[3] + ecx_7) / x87_r6_4)) * fconvert.t(edi[3]))
    (*(ebx + 0x34))(5)
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(arg3)), fconvert.s(fconvert.t(arg2)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(var_c)), fconvert.s(fconvert.t(arg4)))
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(var_10)), fconvert.s(fconvert.t(arg2)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(var_18)), fconvert.s(fconvert.t(arg4)))
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(arg3)), fconvert.s(fconvert.t(var_8_4)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(var_c)), fconvert.s(fconvert.t(var_14)))
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(var_10)), fconvert.s(fconvert.t(var_8_4)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(var_18)), fconvert.s(fconvert.t(var_14)))
    (*(ebx + 0x6c))()
    (*(ebx + 0x54))(edi[1])
    void* edi_6 = *(arg1 + 0x134)
    char* const esi_4 = &data_83f3d3
    arg2 = 0
    
    if (*(edi_6 + 4) == 0)
        return 0
    
    if (*(edi_6 + 8) == 0)
        int32_t i = (*(edi_6 + 0x74))()
        
        if (i != 0)
            arg2 = 0xffffffff
            
            do
                if (esi_4 == 0 || *esi_4 == 0)
                    esi_4 = "generic"
                
                char const* const ecx_14
                
                if (i u> 0x500)
                    if (i u> 0x8031)
                        ecx_14 = "UNKNOWN"
                    else if (i == 0x8031)
                        ecx_14 = "GL_TABLE_TOO_LARGE"
                    else if (i - 0x501 u> 4)
                        ecx_14 = "UNKNOWN"
                    else
                        switch (i)
                            case 0x501
                                ecx_14 = "GL_INVALID_VALUE"
                            case 0x502
                                ecx_14 = "GL_INVALID_OPERATION"
                            case 0x503
                                ecx_14 = "GL_STACK_OVERFLOW"
                            case 0x504
                                ecx_14 = "GL_STACK_UNDERFLOW"
                            case 0x505
                                ecx_14 = "GL_OUT_OF_MEMORY"
                else if (i == 0x500)
                    ecx_14 = "GL_INVALID_ENUM"
                else if (i != 0)
                    ecx_14 = "UNKNOWN"
                else
                    ecx_14 = "GL_NO_ERROR"
                
                int32_t i_4 = i
                char const* const var_2c_13 = ecx_14
                char const* const var_30_2 = "GL_RenderCopy"
                int32_t var_34_2 = 0x498
                char const* const var_38_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                char* const var_3c_1 = esi_4
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                i = (*(edi_6 + 0x74))()
            while (i != 0)
    else
        int32_t eax_15 = *(edi_6 + 0xc)
        
        if (eax_15 != 0)
            int32_t i_1 = 0
            
            if (eax_15 s> 0)
                arg2 = 0xffffffff
                
                do
                    int32_t var_28_14 = *(*(edi_6 + 0x10) + (i_1 << 2))
                    char const* const var_2c_12 = "GL_RenderCopy"
                    int32_t var_30_1 = 0x498
                    char const* const var_34_1 = "..\..\src\render\opengl\SDL_render_gl.c"
                    char* const var_38_1 = &data_83f3d3
                    sub_5cce60("%s: %s (%d): %s %s")
                    i_1 += 1
                while (i_1 s< *(edi_6 + 0xc))
            
            void* esi_5 = *(arg1 + 0x134)
            
            if (*(esi_5 + 4) != 0)
                if (*(esi_5 + 8) == 0)
                    int32_t i_2
                    
                    do
                        i_2 = (*(esi_5 + 0x74))()
                    while (i_2 != 0)
                    return arg2
                
                int32_t eax_17 = *(esi_5 + 0xc)
                
                if (eax_17 != 0)
                    int32_t i_3 = 0
                    
                    if (eax_17 s> 0)
                        do
                            int32_t var_28_15 = *(*(esi_5 + 0x10) + (i_3 << 2))
                            sub_5d0af0()
                            i_3 += 1
                        while (i_3 s< *(esi_5 + 0xc))
                    
                    int32_t var_28_16 = *(esi_5 + 0x10)
                    sub_5d0af0()
                    *(esi_5 + 0xc) = 0
                    *(esi_5 + 0x10) = 0
    
    return arg2
}

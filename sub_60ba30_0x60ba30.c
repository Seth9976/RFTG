// 函数名称: sub_60ba30
// 虚拟地址: 0x60ba30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_60ba30(int32_t arg1, float arg2, int32_t arg3, float arg4, double arg5, float arg6, char arg7)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    void* ebx = *(arg1 + 0x134)
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t* edi = *(arg2 i+ 0x44)
    sub_609b10(arg1)
    (*(ebx + 0x64))(edi[1])
    
    if (edi[0xc] != 0)
        int32_t var_28_1 = 0x84c2
        (*(ebx + 0xe4))(0x84c2)
        (*(ebx + 0x38))(edi[1], edi[0xe])
        int32_t var_28_3 = 0x84c1
        (*(ebx + 0xe4))(0x84c1)
        (*(ebx + 0x38))(edi[1], edi[0xd])
        int32_t var_28_5 = 0x84c0
        (*(ebx + 0xe4))(0x84c0)
    
    (*(ebx + 0x38))(edi[1], *edi)
    char var_28_7
    char eax_6
    char ecx_5
    char edx_5
    
    if (*(arg2 i+ 0x14) == 0)
        eax_6 = 0xff
        edx_5 = 0xff
        var_28_7 = -1
        ecx_5 = 0xff
    else
        eax_6 = *(arg2 i+ 0x1f)
        ecx_5 = *(arg2 i+ 0x1c)
        var_28_7 = *(arg2 i+ 0x1e)
        edx_5 = *(arg2 i+ 0x1d)
    
    sub_6096d0(eax_6, edx_5, ecx_5, ebx, var_28_7)
    sub_609760(ebx, *(arg2 i+ 0x18))
    int32_t esi_2 = 3
    
    if (edi[0xc] == 0)
        esi_2 = 2
    
    sub_6096b0(esi_2, ebx)
    float* eax_8 = arg6
    float* edi_4 = arg4
    float var_8 = fconvert.s(fconvert.t(*eax_8))
    long double x87_r7_1 = fconvert.t(eax_8[1])
    eax_8.b = arg7
    arg6 = fconvert.s(x87_r7_1)
    long double x87_r7_5
    
    if ((eax_8.b & 1) == 0)
        long double x87_r7_6 = fconvert.t(var_8)
        arg7.d = fconvert.s(fneg(x87_r7_6))
        x87_r7_5 = fconvert.t(edi_4[2]) - x87_r7_6
    else
        long double x87_r6 = fconvert.t(var_8)
        arg7.d = fconvert.s(fconvert.t(edi_4[2]) - x87_r6)
        x87_r7_5 = fneg(x87_r6)
    
    float var_10 = fconvert.s(x87_r7_5)
    long double x87_r7_10
    
    if ((eax_8.b & 2) == 0)
        long double x87_r7_11 = fconvert.t(arg6)
        arg4 = fconvert.s(fneg(x87_r7_11))
        x87_r7_10 = fconvert.t(edi_4[3]) - x87_r7_11
    else
        long double x87_r6_4 = fconvert.t(arg6)
        arg4 = fconvert.s(fconvert.t(edi_4[3]) - x87_r6_4)
        x87_r7_10 = fneg(x87_r6_4)
    
    int32_t* eax_9 = arg3
    float var_c = fconvert.s(x87_r7_10)
    int32_t ecx_6 = *eax_9
    long double x87_r6_8 = fconvert.t(fconvert.s(float.t(*(arg2 i+ 0xc))))
    int32_t ecx_7 = eax_9[1]
    arg3 = fconvert.s(fconvert.t(fconvert.s(float.t(ecx_6) / x87_r6_8)) * fconvert.t(edi[2]))
    float var_18_3 =
        fconvert.s(fconvert.t(fconvert.s(float.t(eax_9[2] + ecx_6) / x87_r6_8)) * fconvert.t(edi[2]))
    long double x87_r6_12 = fconvert.t(fconvert.s(float.t(*(arg2 i+ 0x10))))
    arg2 = fconvert.s(fconvert.t(fconvert.s(float.t(ecx_7) / x87_r6_12)) * fconvert.t(edi[3]))
    float var_14_4 =
        fconvert.s(fconvert.t(fconvert.s(float.t(eax_9[3] + ecx_7) / x87_r6_12)) * fconvert.t(edi[3]))
    (*(ebx + 0xa0))()
    float var_2c_4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(edi_4[1]) + fconvert.t(arg6))))
    float var_30 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*edi_4) + fconvert.t(var_8))))
    (*(ebx + 0xd0))()
    var_2c_4.q = fconvert.d(float.t(1))
    long double x87_r7_34 = float.t(0)
    (*(ebx + 0xb4))(fconvert.d(fconvert.t(arg5)), fconvert.d(x87_r7_34), fconvert.d(x87_r7_34), 
        var_2c_4, fconvert.s(float.t(0)))
    int32_t var_28_9 = 5
    (*(ebx + 0x34))(5)
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(arg3)), fconvert.s(fconvert.t(arg2)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(arg7.d)), fconvert.s(fconvert.t(arg4)))
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(var_18_3)), fconvert.s(fconvert.t(arg2)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(var_10)), fconvert.s(fconvert.t(arg4)))
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(arg3)), fconvert.s(fconvert.t(var_14_4)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(arg7.d)), fconvert.s(fconvert.t(var_c)))
    (*(ebx + 0xbc))(fconvert.s(fconvert.t(var_18_3)), fconvert.s(fconvert.t(var_14_4)))
    (*(ebx + 0xd4))(fconvert.s(fconvert.t(var_10)), fconvert.s(fconvert.t(var_c)))
    (*(ebx + 0x6c))()
    (*(ebx + 0x9c))()
    (*(ebx + 0x54))(edi[1])
    void* edi_5 = *(arg1 + 0x134)
    char* const esi_4 = &data_83f3d3
    arg2 = 0f
    
    if (*(edi_5 + 4) == 0)
        return 0
    
    double var_3c
    double var_34_1
    
    if (*(edi_5 + 8) == 0)
        int32_t i = (*(edi_5 + 0x74))()
        
        if (i != 0)
            arg2 = -nanf
            
            do
                if (esi_4 == 0 || *esi_4 == 0)
                    esi_4 = "generic"
                
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
                char const* const var_2c_14 = ecx_16
                char const* const var_30_2 = "GL_RenderCopyEx"
                var_34_1.d = 0x4f3
                var_3c:4.d = "..\..\src\render\opengl\SDL_render_gl.c"
                var_3c.d = esi_4
                double var_44_1
                var_44_1:4.d = "%s: %s (%d): %s %s (0x%X)"
                sub_5cce60()
                i = (*(edi_5 + 0x74))()
            while (i != 0)
    else
        int32_t eax_18 = *(edi_5 + 0xc)
        
        if (eax_18 != 0)
            int32_t i_1 = 0
            
            if (eax_18 s> 0)
                arg2 = -nanf
                
                do
                    int32_t var_28_19 = *(*(edi_5 + 0x10) + (i_1 << 2))
                    char const* const var_2c_13 = "GL_RenderCopyEx"
                    int32_t var_30_1 = 0x4f3
                    var_34_1.d = "..\..\src\render\opengl\SDL_render_gl.c"
                    var_3c:4.d = &data_83f3d3
                    var_3c.d = "%s: %s (%d): %s %s"
                    sub_5cce60("%s: %s (%d): %s %s")
                    i_1 += 1
                while (i_1 s< *(edi_5 + 0xc))
            
            void* esi_5 = *(arg1 + 0x134)
            
            if (*(esi_5 + 4) != 0)
                if (*(esi_5 + 8) == 0)
                    int32_t i_2
                    
                    do
                        i_2 = (*(esi_5 + 0x74))()
                    while (i_2 != 0)
                    return arg2
                
                int32_t eax_20 = *(esi_5 + 0xc)
                
                if (eax_20 != 0)
                    int32_t i_3 = 0
                    
                    if (eax_20 s> 0)
                        do
                            int32_t var_28_20 = *(*(esi_5 + 0x10) + (i_3 << 2))
                            sub_5d0af0()
                            i_3 += 1
                        while (i_3 s< *(esi_5 + 0xc))
                    
                    int32_t var_28_21 = *(esi_5 + 0x10)
                    sub_5d0af0()
                    *(esi_5 + 0xc) = 0
                    *(esi_5 + 0x10) = 0
    return arg2
}

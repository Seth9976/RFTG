// 函数名称: sub_60bed0
// 虚拟地址: 0x60bed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60bed0(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = arg1
    int32_t eax = arg1
    void* edi = *(eax + 0x134)
    sub_609b10(eax)
    int32_t ebx_2 = arg2[2] * 4
    int32_t var_28 = arg2[3] * ebx_2
    int32_t* eax_3 = sub_5d0ac0()
    
    if (eax_3 == 0)
        sub_5cd050(eax_3)
        return 0xffffffff
    
    void var_18
    int32_t var_14
    sub_5d9920(arg1, &var_18, &var_14)
    (*(edi + 0x94))(0xd05, 1)
    (*(edi + 0x94))(0xd02, ebx_2 u>> 2)
    int32_t eax_5 = arg2[3]
    (*(edi + 0xac))(*arg2, var_14 - arg2[1] - eax_5, arg2[2], eax_5, 0x80e1, 0x8367, eax_3)
    void* ebx_4 = arg1[0x4d]
    char const* const edi_1 = "glReadPixels()"
    int32_t var_10 = 0
    
    if (*(ebx_4 + 4) != 0)
        if (*(ebx_4 + 8) == 0)
            int32_t i = (*(ebx_4 + 0x74))()
            
            if (i != 0)
                do
                    if (edi_1 == 0 || *edi_1 == 0)
                        edi_1 = "generic"
                    
                    char const* const ecx_8
                    
                    if (i u> 0x500)
                        if (i u> 0x8031)
                            ecx_8 = "UNKNOWN"
                        else if (i == 0x8031)
                            ecx_8 = "GL_TABLE_TOO_LARGE"
                        else if (i - 0x501 u> 4)
                            ecx_8 = "UNKNOWN"
                        else
                            switch (i)
                                case 0x501
                                    ecx_8 = "GL_INVALID_VALUE"
                                case 0x502
                                    ecx_8 = "GL_INVALID_OPERATION"
                                case 0x503
                                    ecx_8 = "GL_STACK_OVERFLOW"
                                case 0x504
                                    ecx_8 = "GL_STACK_UNDERFLOW"
                                case 0x505
                                    ecx_8 = "GL_OUT_OF_MEMORY"
                    else if (i == 0x500)
                        ecx_8 = "GL_INVALID_ENUM"
                    else if (i != 0)
                        ecx_8 = "UNKNOWN"
                    else
                        ecx_8 = "GL_NO_ERROR"
                    
                    int32_t i_5 = i
                    char const* const var_2c_2 = ecx_8
                    char const* const var_30_2 = "GL_RenderReadPixels"
                    int32_t var_34_2 = 0x517
                    char const* const var_38_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                    char const* const var_3c_1 = edi_1
                    sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                    i = (*(ebx_4 + 0x74))()
                while (i != 0)
                
                return 0xffffffff
        else
            int32_t eax_7 = *(ebx_4 + 0xc)
            
            if (eax_7 != 0)
                int32_t i_1 = 0
                
                if (eax_7 s> 0)
                    var_10 = 0xffffffff
                    
                    do
                        int32_t var_28_5 = *(*(ebx_4 + 0x10) + (i_1 << 2))
                        char const* const var_2c_1 = "GL_RenderReadPixels"
                        int32_t var_30_1 = 0x517
                        char const* const var_34_1 = "..\..\src\render\opengl\SDL_render_gl.c"
                        char const* const var_38_1 = "glReadPixels()"
                        sub_5cce60("%s: %s (%d): %s %s")
                        i_1 += 1
                    while (i_1 s< *(ebx_4 + 0xc))
                
                void* edi_2 = arg1[0x4d]
                
                if (*(edi_2 + 4) != 0)
                    if (*(edi_2 + 8) == 0)
                        int32_t i_2
                        
                        do
                            i_2 = (*(edi_2 + 0x74))()
                        while (i_2 != 0)
                    else
                        int32_t eax_9 = *(edi_2 + 0xc)
                        
                        if (eax_9 != 0)
                            int32_t i_3 = 0
                            
                            if (eax_9 s> 0)
                                do
                                    int32_t var_28_6 = *(*(edi_2 + 0x10) + (i_3 << 2))
                                    sub_5d0af0()
                                    i_3 += 1
                                while (i_3 s< *(edi_2 + 0xc))
                            
                            int32_t var_28_7 = *(edi_2 + 0x10)
                            sub_5d0af0()
                            *(edi_2 + 0xc) = 0
                            *(edi_2 + 0x10) = 0
                
                if (var_10 s< 0)
                    return 0xffffffff
    
    int32_t ebx_5 = arg2[3]
    void* edi_5 = arg2[2] * 4
    void* esi_3 = (ebx_5 - 1) * ebx_2 + eax_3
    arg1 = eax_3
    __alloca_probe_16(edi_5)
    int32_t eax_17
    int32_t edx_6
    edx_6:eax_17 = sx.q(ebx_5)
    int32_t i_6 = (eax_17 - edx_6) s>> 1
    int32_t __saved_edi
    int32_t* var_10_1 = &__saved_edi
    
    if (i_6 != 0)
        int32_t i_4
        
        do
            void* var_28_8 = edi_5
            int32_t* var_2c_3 = arg1
            int32_t* var_30_3 = var_10_1
            sub_5cd110()
            void* var_34_3 = edi_5
            void* var_38_3 = esi_3
            int32_t* var_3c_2 = arg1
            sub_5cd110()
            void* var_40_1 = edi_5
            int32_t* var_44_1 = var_10_1
            void* var_48_1 = esi_3
            sub_5cd110()
            arg1 = &arg1[arg2[2]]
            esi_3 -= ebx_2
            i_4 = i_6
            i_6 -= 1
        while (i_4 != 1)
    
    int32_t result = sub_5d6450(arg2[2], arg2[3], 0x16362004, eax_3, ebx_2, arg3, arg4, arg5)
    int32_t* var_48_2 = eax_3
    sub_5d0af0()
    return result
}

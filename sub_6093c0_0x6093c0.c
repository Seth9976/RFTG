// 函数名称: sub_6093c0
// 虚拟地址: 0x6093c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6093c0(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_2
    int32_t __saved_edi_1 = __saved_edi_2
    int32_t edi = arg1
    int32_t* esi = *(edi + 0x134)
    
    if (data_bf80a4 != *esi)
        return 0
    
    esi[0x37](*(edi + 0xd4), *(edi + 0xd8), *(edi + 0xdc), *(edi + 0xe0))
    esi[0x23](0x1701)
    int32_t __saved_edi
    int32_t* esp_1 = &__saved_edi
    esi[0x22]()
    int32_t eax_4 = *(edi + 0xdc)
    
    if (eax_4 != 0)
        int32_t eax_5 = *(edi + 0xe0)
        
        if (eax_5 != 0)
            double var_40
            esp_1 = &var_40
            int32_t var_18
            var_18.q = fconvert.d(float.t(1))
            long double x87_r7_2 = float.t(0)
            int32_t var_20
            var_20.q = fconvert.d(x87_r7_2)
            
            if (*(edi + 0x128) == 0)
                int32_t eax_6 = esi[0x24]
                double var_28_2 = fconvert.d(x87_r7_2)
                double var_30_2 = fconvert.d(float.t(eax_5))
                double var_38_2 = fconvert.d(float.t(eax_4))
                var_40 = fconvert.d(x87_r7_2)
                eax_6(var_40, var_38_2, var_30_2, var_28_2, var_20)
            else
                int32_t edx_2 = esi[0x24]
                double var_28_1 = fconvert.d(float.t(eax_5))
                double var_30_1 = fconvert.d(x87_r7_2)
                double var_38_1 = fconvert.d(float.t(eax_4))
                var_40 = fconvert.d(x87_r7_2)
                edx_2(var_40, var_38_1, var_30_1, var_28_1, var_20)
    
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    void* esp_4 = esp_1 - 4
    void* ebx = *(edi + 0x134)
    char* const esi_1 = &data_83f3d3
    arg1 = 0
    
    if (*(ebx + 4) == 0)
        *esp_4
        *(esp_4 + 4)
        *(esp_4 + 8)
        return 0
    
    if (*(ebx + 8) == 0)
        int32_t i = (*(ebx + 0x74))()
        
        if (i != 0)
            arg1 = 0xffffffff
            
            do
                if (esi_1 == 0 || *esi_1 == 0)
                    esi_1 = "generic"
                
                char const* const ecx_7
                
                if (i u> 0x500)
                    if (i u> 0x8031)
                        ecx_7 = "UNKNOWN"
                    else if (i == 0x8031)
                        ecx_7 = "GL_TABLE_TOO_LARGE"
                    else if (i - 0x501 u> 4)
                        ecx_7 = "UNKNOWN"
                    else
                        switch (i)
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
                else if (i == 0x500)
                    ecx_7 = "GL_INVALID_ENUM"
                else if (i != 0)
                    ecx_7 = "UNKNOWN"
                else
                    ecx_7 = "GL_NO_ERROR"
                
                *(esp_4 - 4) = i
                *(esp_4 - 8) = ecx_7
                *(esp_4 - 0xc) = "GL_UpdateViewport"
                *(esp_4 - 0x10) = 0x3ae
                *(esp_4 - 0x14) = "..\..\src\render\opengl\SDL_render_gl.c"
                *(esp_4 - 0x18) = esi_1
                *(esp_4 - 0x1c) = "%s: %s (%d): %s %s (0x%X)"
                sub_5cce60()
                i = (*(ebx + 0x74))()
            while (i != 0)
    else
        int32_t eax_8 = *(ebx + 0xc)
        
        if (eax_8 != 0)
            int32_t i_1 = 0
            
            if (eax_8 s> 0)
                arg1 = 0xffffffff
                
                do
                    *(esp_4 - 4) = *(*(ebx + 0x10) + (i_1 << 2))
                    *(esp_4 - 8) = "GL_UpdateViewport"
                    *(esp_4 - 0xc) = 0x3ae
                    *(esp_4 - 0x10) = "..\..\src\render\opengl\SDL_render_gl.c"
                    *(esp_4 - 0x14) = &data_83f3d3
                    *(esp_4 - 0x18) = "%s: %s (%d): %s %s"
                    sub_5cce60()
                    i_1 += 1
                while (i_1 s< *(ebx + 0xc))
            
            void* esi_3 = *(edi + 0x134)
            
            if (*(esi_3 + 4) != 0)
                if (*(esi_3 + 8) == 0)
                    int32_t i_2
                    
                    do
                        i_2 = (*(esi_3 + 0x74))()
                    while (i_2 != 0)
                    *esp_4
                    *(esp_4 + 4)
                    *(esp_4 + 8)
                    return arg1
                
                int32_t eax_9 = *(esi_3 + 0xc)
                
                if (eax_9 != 0)
                    int32_t i_3 = 0
                    
                    if (eax_9 s> 0)
                        do
                            *(esp_4 - 4) = *(*(esi_3 + 0x10) + (i_3 << 2))
                            sub_5d0af0()
                            i_3 += 1
                        while (i_3 s< *(esi_3 + 0xc))
                    
                    *(esp_4 - 4) = *(esi_3 + 0x10)
                    sub_5d0af0()
                    *esp_4
                    *(esi_3 + 0xc) = 0
                    *(esi_3 + 0x10) = 0
                    *(esp_4 + 4)
                    *(esp_4 + 8)
                    return arg1
    
    *esp_4
    *(esp_4 + 4)
    *(esp_4 + 8)
    return arg1
}

// 函数名称: sub_609db0
// 虚拟地址: 0x609db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_609db0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x134)
    void* edi = *(arg1 + 0x134)
    sub_609b10(arg1)
    int32_t eax_1 = *(arg2 + 4)
    int32_t var_1c
    int32_t var_c
    int32_t var_8
    
    if (eax_1 == 0x16362004)
        var_1c = 0x8058
        var_c = 0x80e1
        var_8 = 0x8367
    else
        if (eax_1 != 0x32315659 && eax_1 != 0x56555949)
            int32_t var_34_2 = sub_5d7100(eax_1)
            sub_5cce60("Texture format %s not supported by OpenGL")
            return 0xffffffff
        
        var_1c = 0x1909
        var_c = 0x1909
        var_8 = 0x1401
    
    int32_t var_34 = 0x40
    int32_t var_38 = 1
    int32_t* eax_2 = sub_5d0ad0()
    
    if (eax_2 == 0)
        sub_5cd050(eax_2)
        return 0xffffffff
    
    uint32_t ecx = 1
    
    if (*(arg2 + 8) == 1)
        int32_t eax_4 = *(arg2 + 4)
        
        if (eax_4 == 0 || (eax_4 & 0xf0000000) == 0x10000000)
            ecx = zx.d(eax_4.b)
        else if (eax_4 == 0x32595559 || eax_4 == 0x59565955 || eax_4 == 0x55595659)
            ecx = 2
        
        int32_t eax_6 = *(arg2 + 0xc) * ecx
        eax_2[7] = eax_6
        int32_t ecx_2 = *(arg2 + 0x10) * eax_6
        int32_t eax_7 = *(arg2 + 4)
        
        if (eax_7 == 0x32315659 || eax_7 == 0x56555949)
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = sx.q(ecx_2 * 2)
            ecx_2 += (eax_9 + (edx_3 & 3)) s>> 2
        
        int32_t var_34_3 = ecx_2
        int32_t var_38_1 = 1
        int32_t eax_12
        eax_12, ecx = sub_5d0ad0()
        eax_2[6] = eax_12
        
        if (eax_12 == 0)
            int32_t* var_34_4 = eax_2
            sub_5d0af0()
            sub_5cd050(0)
            return 0xffffffff
    
    if (*(arg2 + 8) != 2)
        eax_2[0xf] = 0
    else
        *(arg2 + 0x10)
        int32_t* eax_14
        eax_14, ecx = sub_609230(edi, *(arg2 + 0xc))
        eax_2[0xf] = eax_14
    
    void* ebx_2 = *(arg1 + 0x134)
    char* const var_18 = &data_83f3d3
    
    if (*(ebx_2 + 4) != 0)
        if (*(ebx_2 + 8) == 0)
            for (int32_t i = (*(ebx_2 + 0x74))(); i != 0; i = (*(ebx_2 + 0x74))())
                if (var_18 == 0 || *var_18 == 0)
                    var_18 = "generic"
                
                char const* const ecx_9
                
                if (i u> 0x500)
                    if (i u> 0x8031)
                        ecx_9 = "UNKNOWN"
                    else if (i == 0x8031)
                        ecx_9 = "GL_TABLE_TOO_LARGE"
                    else if (i - 0x501 u> 4)
                        ecx_9 = "UNKNOWN"
                    else
                        switch (i)
                            case 0x501
                                ecx_9 = "GL_INVALID_VALUE"
                            case 0x502
                                ecx_9 = "GL_INVALID_OPERATION"
                            case 0x503
                                ecx_9 = "GL_STACK_OVERFLOW"
                            case 0x504
                                ecx_9 = "GL_STACK_UNDERFLOW"
                            case 0x505
                                ecx_9 = "GL_OUT_OF_MEMORY"
                else if (i == 0x500)
                    ecx_9 = "GL_INVALID_ENUM"
                else if (i != 0)
                    ecx_9 = "UNKNOWN"
                else
                    ecx_9 = "GL_NO_ERROR"
                
                int32_t i_17 = i
                char const* const var_38_3 = ecx_9
                char const* const var_3c_2 = "GL_CreateTexture"
                int32_t var_40_2 = 0x293
                char const* const var_44_2 = "..\..\src\render\opengl\SDL_render_gl.c"
                char* const var_48_1 = var_18
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
        else
            int32_t eax_15 = *(ebx_2 + 0xc)
            
            if (eax_15 != 0)
                int32_t i_21 = 0
                
                if (eax_15 s> 0)
                    int32_t i_1
                    
                    do
                        int32_t var_34_6 = *(*(ebx_2 + 0x10) + (i_21 << 2))
                        char const* const var_38_2 = "GL_CreateTexture"
                        int32_t var_3c_1 = 0x293
                        char const* const var_40_1 = "..\..\src\render\opengl\SDL_render_gl.c"
                        char* const var_44_1 = &data_83f3d3
                        sub_5cce60("%s: %s (%d): %s %s")
                        i_1 = i_21 + 1
                        i_21 = i_1
                    while (i_1 s< *(ebx_2 + 0xc))
                
                void* ebx_3 = *(arg1 + 0x134)
                
                if (*(ebx_3 + 4) != 0)
                    if (*(ebx_3 + 8) == 0)
                        int32_t i_2
                        
                        do
                            i_2 = (*(ebx_3 + 0x74))()
                        while (i_2 != 0)
                    else
                        int32_t eax_19 = *(ebx_3 + 0xc)
                        
                        if (eax_19 != 0)
                            int32_t i_22 = 0
                            
                            if (eax_19 s> 0)
                                int32_t i_3
                                
                                do
                                    int32_t var_34_7 = *(*(ebx_3 + 0x10) + (i_22 << 2))
                                    sub_5d0af0()
                                    i_3 = i_22 + 1
                                    i_22 = i_3
                                while (i_3 s< *(ebx_3 + 0xc))
                            
                            int32_t var_34_8 = *(ebx_3 + 0x10)
                            sub_5d0af0()
                            *(ebx_3 + 0xc) = 0
                            *(ebx_3 + 0x10) = 0
    
    (*(edi + 0x70))(1, eax_2)
    void* ebx_4 = *(arg1 + 0x134)
    int32_t var_14 = 0
    
    if (*(ebx_4 + 4) == 0)
    label_60a275:
        *(arg2 + 0x44) = eax_2
        int32_t var_18_1
        int32_t i_24
        long double x87_r7_2
        
        if (*(edi + 0x1c) == 0)
            eax_2[1] = 0xde1
            int32_t edx_15 = *(arg2 + 0xc)
            int32_t ecx_19 = 1
            int32_t var_20_1 = 1
            
            if (edx_15 s> 1)
                do
                    ecx_19 *= 2
                while (ecx_19 s< edx_15)
                
                var_20_1 = ecx_19
            
            var_18_1 = ecx_19
            int32_t i_4 = 1
            int32_t i_25 = 1
            
            if (*(arg2 + 0x10) s> 1)
                do
                    i_4 *= 2
                while (i_4 s< *(arg2 + 0x10))
                
                i_25 = i_4
            
            i_24 = i_4
            eax_2[2] = fconvert.s(float.t(edx_15) / float.t(var_20_1))
            x87_r7_2 = float.t(*(arg2 + 0x10)) / float.t(i_25)
        else
            eax_2[1] = 0x84f5
            var_18_1 = *(arg2 + 0xc)
            i_24 = *(arg2 + 0x10)
            eax_2[2] = fconvert.s(float.t(var_18_1))
            x87_r7_2 = float.t(i_24)
        
        eax_2[3] = fconvert.s(x87_r7_2)
        eax_2[4] = var_c
        eax_2[5] = var_8
        int32_t eax_35 = sub_6092f0()
        (*(edi + 0x64))(eax_2[1])
        (*(edi + 0x38))(eax_2[1], *eax_2)
        (*(edi + 0xc8))(eax_2[1], 0x2801, eax_35)
        (*(edi + 0xc8))(eax_2[1], 0x2800, eax_35)
        int32_t eax_39 = eax_2[1]
        
        if (eax_39 != 0x84f5)
            (*(edi + 0xc8))(eax_39, 0x2802, 0x812f)
            (*(edi + 0xc8))(eax_2[1], 0x2803, 0x812f)
        
        (*(edi + 0xc4))(eax_2[1], 0, var_1c, var_18_1, i_24, 0, var_c, var_8, 0)
        (*(edi + 0x54))(eax_2[1])
        void* eax_45 = *(arg1 + 0x134)
        char const* const ebx_7 = "glTexImage2D()"
        int32_t var_24_2 = 0
        
        if (*(eax_45 + 4) == 0)
        label_60a480:
            int32_t eax_52 = *(arg2 + 4)
            
            if (eax_52 == 0x32315659 || eax_52 == 0x56555949)
                eax_2[0xc] = 1
                (*(edi + 0x70))(1, &eax_2[0xd])
                (*(edi + 0x70))(1, &eax_2[0xe])
                (*(edi + 0x64))(eax_2[1])
                (*(edi + 0x38))(eax_2[1], eax_2[0xd])
                (*(edi + 0xc8))(eax_2[1], 0x2801, eax_35)
                (*(edi + 0xc8))(eax_2[1], 0x2800, eax_35)
                (*(edi + 0xc8))(eax_2[1], 0x2802, 0x812f)
                (*(edi + 0xc8))(eax_2[1], 0x2803, 0x812f)
                int32_t eax_60
                int32_t edx_33
                edx_33:eax_60 = sx.q(i_24)
                int32_t eax_63
                int32_t edx_34
                edx_34:eax_63 = sx.q(var_18_1)
                int32_t eax_65 = (eax_63 - edx_34) s>> 1
                int32_t ebx_12 = (eax_60 - edx_33) s>> 1
                (*(edi + 0xc4))(eax_2[1], 0, var_1c, eax_65, ebx_12, 0, var_c, var_8, 0)
                (*(edi + 0x38))(eax_2[1], eax_2[0xe])
                (*(edi + 0xc8))(eax_2[1], 0x2801, eax_35)
                (*(edi + 0xc8))(eax_2[1], 0x2800, eax_35)
                (*(edi + 0xc8))(eax_2[1], 0x2802, 0x812f)
                (*(edi + 0xc8))(eax_2[1], 0x2803, 0x812f)
                (*(edi + 0xc4))(eax_2[1], 0, var_1c, eax_65, ebx_12, 0, var_c, var_8, 0)
                (*(edi + 0x54))(eax_2[1])
            
            int32_t ebx_13 = arg1
            void* edi_2 = *(ebx_13 + 0x134)
            char* const esi_1 = &data_83f3d3
            arg1 = 0
            
            if (*(edi_2 + 4) == 0)
                return 0
            
            if (*(edi_2 + 8) == 0)
                int32_t i_5 = (*(edi_2 + 0x74))()
                
                if (i_5 != 0)
                    arg1 = 0xffffffff
                    
                    do
                        if (esi_1 == 0 || *esi_1 == 0)
                            esi_1 = "generic"
                        
                        char const* const ecx_51
                        
                        if (i_5 u> 0x500)
                            if (i_5 u> 0x8031)
                                ecx_51 = "UNKNOWN"
                            else if (i_5 == 0x8031)
                                ecx_51 = "GL_TABLE_TOO_LARGE"
                            else if (i_5 - 0x501 u> 4)
                                ecx_51 = "UNKNOWN"
                            else
                                switch (i_5)
                                    case 0x501
                                        ecx_51 = "GL_INVALID_VALUE"
                                    case 0x502
                                        ecx_51 = "GL_INVALID_OPERATION"
                                    case 0x503
                                        ecx_51 = "GL_STACK_OVERFLOW"
                                    case 0x504
                                        ecx_51 = "GL_STACK_UNDERFLOW"
                                    case 0x505
                                        ecx_51 = "GL_OUT_OF_MEMORY"
                        else if (i_5 == 0x500)
                            ecx_51 = "GL_INVALID_ENUM"
                        else if (i_5 != 0)
                            ecx_51 = "UNKNOWN"
                        else
                            ecx_51 = "GL_NO_ERROR"
                        
                        int32_t i_20 = i_5
                        char const* const var_38_15 = ecx_51
                        char const* const var_3c_23 = "GL_CreateTexture"
                        int32_t var_40_8 = 0x304
                        char const* const var_44_11 = "..\..\src\render\opengl\SDL_render_gl.c"
                        char* const var_48_7 = esi_1
                        sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                        i_5 = (*(edi_2 + 0x74))()
                    while (i_5 != 0)
            else
                int32_t eax_77 = *(edi_2 + 0xc)
                
                if (eax_77 != 0)
                    int32_t i_6 = 0
                    
                    if (eax_77 s> 0)
                        arg1 = 0xffffffff
                        
                        do
                            int32_t var_34_33 = *(*(edi_2 + 0x10) + (i_6 << 2))
                            char const* const var_38_14 = "GL_CreateTexture"
                            int32_t var_3c_22 = 0x304
                            char const* const var_40_7 = "..\..\src\render\opengl\SDL_render_gl.c"
                            char* const var_44_10 = &data_83f3d3
                            sub_5cce60("%s: %s (%d): %s %s")
                            i_6 += 1
                        while (i_6 s< *(edi_2 + 0xc))
                    
                    void* esi_3 = *(ebx_13 + 0x134)
                    
                    if (*(esi_3 + 4) != 0)
                        if (*(esi_3 + 8) == 0)
                            int32_t i_7
                            
                            do
                                i_7 = (*(esi_3 + 0x74))()
                            while (i_7 != 0)
                            return arg1
                        
                        int32_t eax_79 = *(esi_3 + 0xc)
                        
                        if (eax_79 != 0)
                            int32_t i_8 = 0
                            
                            if (eax_79 s> 0)
                                do
                                    int32_t var_34_34 = *(*(esi_3 + 0x10) + (i_8 << 2))
                                    sub_5d0af0()
                                    i_8 += 1
                                while (i_8 s< *(esi_3 + 0xc))
                            
                            int32_t var_34_35 = *(esi_3 + 0x10)
                            sub_5d0af0()
                            *(esi_3 + 0xc) = 0
                            *(esi_3 + 0x10) = 0
            
            return arg1
        
        if (*(eax_45 + 8) == 0)
            int32_t i_9 = (*(eax_45 + 0x74))()
            
            if (i_9 == 0)
                goto label_60a480
            
            do
                if (ebx_7 == 0 || *ebx_7 == 0)
                    ebx_7 = "generic"
                
                char const* const ecx_47
                
                if (i_9 u> 0x500)
                    if (i_9 u> 0x8031)
                        ecx_47 = "UNKNOWN"
                    else if (i_9 == 0x8031)
                        ecx_47 = "GL_TABLE_TOO_LARGE"
                    else if (i_9 - 0x501 u> 4)
                        ecx_47 = "UNKNOWN"
                    else
                        switch (i_9)
                            case 0x501
                                ecx_47 = "GL_INVALID_VALUE"
                            case 0x502
                                ecx_47 = "GL_INVALID_OPERATION"
                            case 0x503
                                ecx_47 = "GL_STACK_OVERFLOW"
                            case 0x504
                                ecx_47 = "GL_STACK_UNDERFLOW"
                            case 0x505
                                ecx_47 = "GL_OUT_OF_MEMORY"
                else if (i_9 == 0x500)
                    ecx_47 = "GL_INVALID_ENUM"
                else if (i_9 != 0)
                    ecx_47 = "UNKNOWN"
                else
                    ecx_47 = "GL_NO_ERROR"
                
                int32_t i_19 = i_9
                char const* const var_38_13 = ecx_47
                char const* const var_3c_21 = "GL_CreateTexture"
                int32_t var_40_6 = 0x2dd
                char const* const var_44_9 = "..\..\src\render\opengl\SDL_render_gl.c"
                char const* const var_48_6 = ebx_7
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                i_9 = (*(eax_45 + 0x74))()
            while (i_9 != 0)
            
            return 0xffffffff
        
        int32_t eax_46 = *(eax_45 + 0xc)
        
        if (eax_46 == 0)
            goto label_60a480
        
        int32_t i_10 = 0
        
        if (eax_46 s> 0)
            var_24_2 = 0xffffffff
            
            do
                int32_t var_34_20 = *(*(eax_45 + 0x10) + (i_10 << 2))
                char const* const var_38_8 = "GL_CreateTexture"
                int32_t var_3c_10 = 0x2dd
                char const* const var_40_5 = "..\..\src\render\opengl\SDL_render_gl.c"
                char const* const var_44_6 = "glTexImage2D()"
                sub_5cce60("%s: %s (%d): %s %s")
                i_10 += 1
            while (i_10 s< *(eax_45 + 0xc))
        
        void* ebx_8 = *(arg1 + 0x134)
        
        if (*(ebx_8 + 4) != 0)
            if (*(ebx_8 + 8) == 0)
                int32_t i_11
                
                do
                    i_11 = (*(ebx_8 + 0x74))()
                while (i_11 != 0)
            else
                int32_t eax_48 = *(ebx_8 + 0xc)
                
                if (eax_48 != 0)
                    int32_t i_26 = 0
                    
                    if (eax_48 s> 0)
                        int32_t i_12
                        
                        do
                            int32_t var_34_21 = *(*(ebx_8 + 0x10) + (i_26 << 2))
                            sub_5d0af0()
                            i_12 = i_26 + 1
                            i_26 = i_12
                        while (i_12 s< *(ebx_8 + 0xc))
                    
                    int32_t var_34_22 = *(ebx_8 + 0x10)
                    sub_5d0af0()
                    *(ebx_8 + 0xc) = 0
                    *(ebx_8 + 0x10) = 0
        
        if (var_24_2 s>= 0)
            goto label_60a480
    else
        if (*(ebx_4 + 8) == 0)
            int32_t i_13 = (*(ebx_4 + 0x74))()
            
            if (i_13 == 0)
                goto label_60a275
            
            char const* const edi_1 = "glGenTexures()"
            
            do
                if (edi_1 == 0 || *edi_1 == 0)
                    edi_1 = "generic"
                
                char const* const ecx_16
                
                if (i_13 u> 0x500)
                    if (i_13 u> 0x8031)
                        ecx_16 = "UNKNOWN"
                    else if (i_13 == 0x8031)
                        ecx_16 = "GL_TABLE_TOO_LARGE"
                    else if (i_13 - 0x501 u> 4)
                        ecx_16 = "UNKNOWN"
                    else
                        switch (i_13)
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
                else if (i_13 == 0x500)
                    ecx_16 = "GL_INVALID_ENUM"
                else if (i_13 != 0)
                    ecx_16 = "UNKNOWN"
                else
                    ecx_16 = "GL_NO_ERROR"
                
                int32_t i_18 = i_13
                char const* const var_38_5 = ecx_16
                char const* const var_3c_4 = "GL_CreateTexture"
                int32_t var_40_4 = 0x295
                char const* const var_44_4 = "..\..\src\render\opengl\SDL_render_gl.c"
                char const* const var_48_2 = edi_1
                sub_5cce60("%s: %s (%d): %s %s (0x%X)")
                i_13 = (*(ebx_4 + 0x74))()
            while (i_13 != 0)
            
            int32_t* var_34_14 = eax_2
            sub_5d0af0()
            return 0xffffffff
        
        int32_t eax_24 = *(ebx_4 + 0xc)
        
        if (eax_24 == 0)
            goto label_60a275
        
        int32_t i_14 = 0
        
        if (eax_24 s> 0)
            var_14 = 0xffffffff
            
            do
                int32_t var_34_10 = *(*(ebx_4 + 0x10) + (i_14 << 2))
                char const* const var_38_4 = "GL_CreateTexture"
                int32_t var_3c_3 = 0x295
                char const* const var_40_3 = "..\..\src\render\opengl\SDL_render_gl.c"
                char const* const var_44_3 = "glGenTexures()"
                sub_5cce60("%s: %s (%d): %s %s")
                i_14 += 1
            while (i_14 s< *(ebx_4 + 0xc))
        
        void* ebx_5 = *(arg1 + 0x134)
        
        if (*(ebx_5 + 4) != 0)
            if (*(ebx_5 + 8) == 0)
                int32_t i_15
                
                do
                    i_15 = (*(ebx_5 + 0x74))()
                while (i_15 != 0)
            else
                int32_t eax_27 = *(ebx_5 + 0xc)
                
                if (eax_27 != 0)
                    int32_t i_23 = 0
                    
                    if (eax_27 s> 0)
                        int32_t i_16
                        
                        do
                            int32_t var_34_11 = *(*(ebx_5 + 0x10) + (i_23 << 2))
                            sub_5d0af0()
                            i_16 = i_23 + 1
                            i_23 = i_16
                        while (i_16 s< *(ebx_5 + 0xc))
                    
                    int32_t var_34_12 = *(ebx_5 + 0x10)
                    sub_5d0af0()
                    *(ebx_5 + 0xc) = 0
                    *(ebx_5 + 0x10) = 0
        
        if (var_14 s>= 0)
            goto label_60a275
        
        int32_t* var_34_13 = eax_2
        sub_5d0af0()
    
    return 0xffffffff
}

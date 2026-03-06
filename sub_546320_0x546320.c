// 函数名称: sub_546320
// 虚拟地址: 0x546320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_546320(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = sub_54b850(data_307882c + 0x4240, arg1)
    void* eax = sub_54b850(data_307882c + 0x4240, arg1)
    void* eax_1 = sub_533af0(arg2)
    int32_t eax_2 = *(eax_1 + 8)
    int32_t eax_3 = neg.d(eax_2)
    int32_t j = neg.d(sbb.d(eax_3, eax_3, eax_2 != 0)) - 1
    int32_t j_3 = 0
    int32_t j_4 = 0
    int32_t i = j
    
    if (j != 0xffffffff)
        void* ecx_3 = eax
        
        do
            int32_t i_1 = i + 1
            int32_t* edi_2 = *(eax_1 + 4) + i * 0x3c
            i = i_1
            
            if (i_1 s>= *(eax_1 + 8))
                i = 0xffffffff
            
            j = edi_2[3]
            int32_t entry_ebx
            
            if (j == data_315f79c)
                int32_t esi_4 = *(ecx_3 + 0x12c)
                
                if (esi_4 != 0xffffffff)
                    int32_t j_1 = 0
                    void* var_18_1 = (esi_4 << 2) + 0x41f0
                    
                    do
                        data_30795f4(esi_4, 4, 0x1406, 0, *(eax_1 + 0xc), *edi_2 + j_1)
                        
                        if (var_18_1 s>= 0x4230)
                            sub_4c5870("index < NUM_DUPSTATE_VERTEX_ATTRIB_ENABLES", &data_83f3d3, 
                                "OpenGLGraphics.cpp", 0x254, "GLDupCheck_glEnableVertexAttribArray")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        data_30794b0(esi_4)
                        *(var_18_1 + data_307882c - 0x40) = 1
                        data_3079708(esi_4, entry_ebx)
                        *(var_18_1 + data_307882c) = entry_ebx
                        j = j_1 + 0x10
                        esi_4 += 1
                        j_1 = j
                        var_18_1 += 4
                    while (j s< 0x40)
                    
                    ecx_3 = eax
            else if (j == data_315f7a0)
                int32_t esi_5 = *(ecx_3 + 0x130)
                
                if (esi_5 != 0xffffffff)
                    int32_t j_2 = 0
                    void* var_18_2 = (esi_5 << 2) + 0x41f0
                    
                    do
                        data_30795f4(esi_5, 4, 0x1406, 0, *(eax_1 + 0xc), *edi_2 + j_2)
                        
                        if (var_18_2 s>= 0x4230)
                            sub_4c5870("index < NUM_DUPSTATE_VERTEX_ATTRIB_ENABLES", &data_83f3d3, 
                                "OpenGLGraphics.cpp", 0x254, "GLDupCheck_glEnableVertexAttribArray")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        data_30794b0(esi_5)
                        *(var_18_2 + data_307882c - 0x40) = 1
                        data_3079708(esi_5, entry_ebx)
                        j = j_2 + 0x10
                        *(var_18_2 + data_307882c) = entry_ebx
                        esi_5 += 1
                        j_2 = j
                        var_18_2 += 4
                    while (j s< 0x40)
                    
                    ecx_3 = eax
            else
                int32_t var_3c_1
                int32_t var_38_1
                int32_t var_34_1
                int32_t var_30_5
                int32_t var_2c_7
                int32_t esi_6
                
                if (j == data_315f72c)
                    esi_6 = *(ecx_3 + 0x104)
                    
                    if (esi_6 != 0xffffffff)
                        var_2c_7 = *edi_2
                        var_30_5 = *(eax_1 + 0xc)
                        var_34_1 = 0
                        var_38_1 = 0x1406
                        var_3c_1 = 3
                    label_546767:
                        data_30795f4(esi_6, var_3c_1, var_38_1, var_34_1, var_30_5, var_2c_7)
                    label_54676d:
                        sub_543d50(esi_6)
                        j = sub_543da0(esi_6, entry_ebx)
                        ecx_3 = eax
                else if (j == data_315f730)
                    esi_6 = *(ecx_3 + 0x104)
                    
                    if (esi_6 != 0xffffffff)
                        var_2c_7 = *edi_2
                        var_30_5 = *(eax_1 + 0xc)
                        var_34_1 = 0
                        var_38_1 = 0x1406
                        var_3c_1 = 2
                        goto label_546767
                else if (j == data_315f734)
                    esi_6 = *(ecx_3 + 0x104)
                    
                    if (esi_6 != 0xffffffff)
                        var_2c_7 = *edi_2
                        var_30_5 = *(eax_1 + 0xc)
                        var_34_1 = 0
                        var_38_1 = 0x1403
                        var_3c_1 = 2
                        goto label_546767
                else if (j == data_315f738)
                    esi_6 = *(ecx_3 + 0x108)
                    
                    if (esi_6 != 0xffffffff)
                        var_2c_7 = *edi_2
                        var_30_5 = *(eax_1 + 0xc)
                        var_34_1 = 0
                        var_38_1 = 0x1406
                        var_3c_1 = 3
                        goto label_546767
                else if (j == data_315f73c)
                    esi_6 = *(ecx_3 + 0x10c)
                    
                    if (esi_6 != 0xffffffff)
                        var_2c_7 = *edi_2
                        var_30_5 = *(eax_1 + 0xc)
                        var_34_1 = 0
                        var_38_1 = 0x1406
                        var_3c_1 = 3
                        goto label_546767
                else if (j == data_315f740)
                    esi_6 = *(ecx_3 + 0x110)
                    
                    if (esi_6 != 0xffffffff)
                        var_2c_7 = *edi_2
                        var_30_5 = *(eax_1 + 0xc)
                        var_34_1 = 0
                        var_38_1 = 0x1406
                        var_3c_1 = 3
                        goto label_546767
                else
                    int32_t var_38_2
                    int32_t var_30_6
                    int32_t var_2c_8
                    int32_t esi_7
                    
                    if (j == data_315f750)
                        j = j_4
                        
                        if (j != 0)
                            if (j != 1)
                                sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x8ff, 
                                    "GLBindVertexStream")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            esi_7 = *(ecx_3 + 0x118)
                        else
                            esi_7 = *(ecx_3 + 0x114)
                        
                        if (esi_7 == 0xffffffff)
                            j_4 += 1
                        else
                            var_2c_8 = *edi_2
                            var_30_6 = *(eax_1 + 0xc)
                            int32_t var_34_2 = 1
                            var_38_2 = 0x1406
                        label_54665f:
                            data_30795f4(esi_7, 4, var_38_2, 1, var_30_6, var_2c_8)
                            sub_543d50(esi_7)
                            j = sub_543da0(esi_7, entry_ebx)
                            ecx_3 = eax
                            j_4 += 1
                    else if (j == data_315f74c)
                        j = j_4
                        
                        if (j != 0)
                            if (j != 1)
                                sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x91b, 
                                    "GLBindVertexStream")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            esi_7 = *(ecx_3 + 0x118)
                        else
                            esi_7 = *(ecx_3 + 0x114)
                        
                        if (esi_7 != 0xffffffff)
                            var_2c_8 = *edi_2
                            var_30_6 = *(eax_1 + 0xc)
                            int32_t var_34_3 = 1
                            var_38_2 = 0x1401
                            goto label_54665f
                        
                        j_4 += 1
                    else
                        int32_t var_38_3
                        int32_t var_34_4
                        int32_t var_30_7
                        int32_t var_2c_9
                        int32_t esi_8
                        
                        if (j == data_315f754)
                            j = j_3
                            
                            if (j != 0)
                                if (j != 1)
                                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x937, 
                                        "GLBindVertexStream")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                esi_8 = *(ecx_3 + 0x120)
                            else
                                esi_8 = *(ecx_3 + 0x11c)
                            
                            if (esi_8 == 0xffffffff)
                                j_3 += 1
                            else
                                var_2c_9 = *edi_2
                                var_30_7 = *(eax_1 + 0xc)
                                var_34_4 = 0
                                var_38_3 = 0x1406
                            label_5466f7:
                                data_30795f4(esi_8, 2, var_38_3, var_34_4, var_30_7, var_2c_9)
                                sub_543d50(esi_8)
                                j = sub_543da0(esi_8, entry_ebx)
                                ecx_3 = eax
                                j_3 += 1
                        else if (j == data_315f758)
                            j = j_3
                            
                            if (j != 0)
                                if (j != 1)
                                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x953, 
                                        "GLBindVertexStream")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                esi_8 = *(ecx_3 + 0x120)
                            else
                                esi_8 = *(ecx_3 + 0x11c)
                            
                            if (esi_8 != 0xffffffff)
                                var_2c_9 = *edi_2
                                var_30_7 = *(eax_1 + 0xc)
                                var_34_4 = 1
                                var_38_3 = 0x1403
                                goto label_5466f7
                            
                            j_3 += 1
                        else if (j != data_315f744)
                            if (j != data_315f748)
                                sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x97d, 
                                    "GLBindVertexStream")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            esi_6 = *(ecx_3 + 0x128)
                            
                            if (esi_6 != 0xffffffff)
                                var_2c_7 = *edi_2
                                var_30_5 = *(eax_1 + 0xc)
                                var_34_1 = 1
                                var_38_1 = 0x1401
                                var_3c_1 = 4
                                goto label_546767
                        else
                            esi_6 = *(ecx_3 + 0x124)
                            
                            if (esi_6 != 0xffffffff)
                                data_30796e8(esi_6, 4, 0x1401, *(eax_1 + 0xc), *edi_2)
                                goto label_54676d
        while (i != 0xffffffff)
    
    return j
}

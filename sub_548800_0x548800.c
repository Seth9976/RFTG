// 函数名称: sub_548800
// 虚拟地址: 0x548800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_548800(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_c = nullptr
    void* var_c = nullptr
    
    if (arg2 s<= 0)
        return 
    
    int32_t* ebx_1 = arg1 + 4
    int32_t* var_8_1 = ebx_1
    
    while (true)
        int32_t eax = ebx_1[-1]
        
        if (eax u<= 0x50)
            uint32_t eax_1 = zx.d(lookup_table_548f3c[eax])
            void* edx
            
            switch (eax_1)
                case 0
                    edx = sub_543d10(0xb71, *ebx_1, 1)
                    goto label_548c1c
                case 1
                    int32_t eax_2 = *ebx_1
                    void* ecx_1 = data_307882c
                    
                    if (*(ecx_1 + 0x4050) != eax_2)
                        *(ecx_1 + 0x4050) = eax_2
                        edx = glDepthMask(*ebx_1)
                    
                    goto label_548c1c
                case 2
                    edx = data_27e7fd0
                    
                    if (*(edx + 0x1c) != 0)
                        edx = sub_543d10(0x809e, *ebx_1, 3)
                    
                    goto label_548c1c
                case 3
                    edx = ebx_1[1]
                    
                    if (sub_543e10(0xb, edx, *ebx_1) != 0)
                        edx = glBlendFunc(*ebx_1, ebx_1[1])
                    
                    goto label_548c1c
                case 4
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xf69, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 5
                    void* edx_1 = *ebx_1
                    
                    if (edx_1 != 1)
                        bool eax_6 = sub_4e57c0()
                        bool eax_7
                        
                        if (eax_6 != 0 || edx_1 != 2)
                            eax_7 = sub_4e57c0()
                        
                        if ((eax_6 != 0 || edx_1 != 2) && (eax_7 == 0 || edx_1 != 3))
                            if (*(data_307882c + 0x4038) != 1)
                                edx_1 = glEnable(0xb44)
                                *(data_307882c + 0x4038) = 1
                            
                            char eax_10
                            eax_10, edx = sub_543df0(0x405, edx_1, 0xd)
                            
                            if (eax_10 != 0)
                                edx = glCullFace(0x405)
                        else
                            if (*(data_307882c + 0x4038) != 1)
                                glEnable(0xb44)
                                edx_1 = data_307882c
                                *(edx_1 + 0x4038) = 1
                            
                            char eax_8
                            eax_8, edx = sub_543df0(0x404, edx_1, 0xd)
                            
                            if (eax_8 != 0)
                                edx = glCullFace(0x404)
                    else
                        edx = data_307882c
                        
                        if (*(edx + 0x4038) != 0)
                            edx = glDisable(0xb44)
                            *(data_307882c + 0x4038) = 0
                    
                    goto label_548c1c
                case 6
                    int32_t eax_11 = *ebx_1
                    edx = data_307882c
                    
                    if (*(edx + 0x4060) != eax_11)
                        *(edx + 0x4060) = eax_11
                        edx = glDepthFunc(*ebx_1)
                    
                    goto label_548c1c
                case 7
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xf8f, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 8
                    edx = ebx_1[1]
                    char eax_12
                    int32_t ecx_7
                    eax_12, ecx_7 = sub_543e10(0xf, edx, *ebx_1)
                    
                    if (eax_12 != 0)
                        int32_t var_20_4 = ecx_7
                        edx = glAlphaFunc(*ebx_1, fconvert.s(fconvert.t(ebx_1[1])))
                    
                    goto label_548c1c
                case 9
                    edx = sub_543d10(0xbe2, *ebx_1, 5)
                    goto label_548c1c
                case 0xa
                    edx = sub_543d10(0xb90, *ebx_1, 6)
                    goto label_548c1c
                case 0xb
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfa2, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0xc
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfa3, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0xd
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfa4, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0xe
                    edx = *ebx_1
                    
                    if (sub_543e40(0x11, edx, ebx_1[2], ebx_1[1]) != 0)
                        edx = data_3079504(0x404, *ebx_1, ebx_1[1], ebx_1[2])
                    
                    goto label_548c1c
                case 0xf
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfad, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x10
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfae, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x11
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfaf, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x12
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfb0, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x13
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfb1, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x14
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xfb2, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x15
                    edx = *ebx_1
                    
                    if (sub_543e40(0x14, edx, ebx_1[2], ebx_1[1]) != 0)
                        edx = data_3079504(0x405, *ebx_1, ebx_1[1], ebx_1[2])
                    
                    goto label_548c1c
                case 0x16
                    int32_t eax_18 = *ebx_1
                    edx = data_307882c
                    
                    if (*(edx + 0x4044) != eax_18)
                        *(edx + 0x4044) = eax_18
                        int32_t eax_19 = *ebx_1
                        edx = glColorMask(*ebx_1 & 1, (eax_19 u>> 1).b & 1, (eax_19 u>> 2).b & 1, 
                            (eax_19 u>> 3).b & 1)
                    
                    goto label_548c1c
                case 0x17
                    int32_t eax_21 = *ebx_1
                    edx = data_307882c
                    
                    if (*(edx + 0x4060) != eax_21)
                        *(edx + 0x4060) = eax_21
                        edx = data_3079380(*ebx_1)
                    
                    goto label_548c1c
                case 0x18
                    if (*ebx_1 != 0)
                        if (*(data_307882c + 0x4048) != 1)
                            glEnable(0x8037)
                            edx = data_307882c
                            *(edx + 0x4048) = 1
                        
                        char eax_26
                        eax_26, edx = sub_543df0(*ebx_1, edx, 0x18)
                        
                        if (eax_26 != 0)
                            long double x87_r7_2 = fconvert.t(*ebx_1)
                            edx = glPolygonOffset(fconvert.s(x87_r7_2), fconvert.s(x87_r7_2))
                    else
                        edx = data_307882c
                        
                        if (*(edx + 0x4048) != 0)
                            edx = glDisable(0x8037)
                            *(data_307882c + 0x4048) = 0
                    
                    goto label_548c1c
                case 0x19
                    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xf4c, 
                        "GLSetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x1a
                    goto label_548c1c
                case 0x1b
                    edx = sub_543d10(0xb60, *ebx_1, 0)
                label_548c1c:
                    arg1 = var_c + 1
                    ebx_1 = &ebx_1[5]
                    var_c = arg1
                    var_8_1 = ebx_1
                    
                    if (arg1 s>= arg2)
                        break
                    
                    continue
                case 0x1c
                    ebx_1[1]
                    edx = *var_8_1
                    int32_t var_20_12 = 0xb
                    
                    if (sub_543e80(eax_1, edx, ebx_1[3], ebx_1[2], var_8_1) != 0)
                        edx = data_3079384(*var_8_1, var_8_1[1], var_8_1[2], var_8_1[3])
                    
                    ebx_1 = var_8_1
                    goto label_548c1c
                case 0x1d
                    edx = ebx_1[1]
                    
                    if (sub_543e10(0xe, edx, *ebx_1) != 0)
                        edx = data_307948c(*ebx_1, ebx_1[1])
                    
                    goto label_548c1c
        
        sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xff2, "GLSetFunctionRenderState")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
}

// 函数名称: sub_548030
// 虚拟地址: 0x548030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_548030(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi = *arg3
    int32_t edi = *arg3
    
    if (edi != 0x1c && edi != 0x1d && edi != 0x1e && edi != 0x22 && edi != 0x23 && edi != 0x24
            && edi != 0x28 && edi != 0x29 && edi != 0x2a && edi != 0x2e && edi != 0x2f && edi != 0x30
            && edi != 0x34 && edi != 0x35 && edi != 0x36 && edi != 0x3a && edi != 0x3b && edi != 0x3c
            && edi != 0x40 && edi != 0x41 && edi != 0x42 && edi != 0x46 && edi != 0x47 && edi != 0x48)
        int32_t eax_1
        int32_t ecx
        
        if (edi != 0x21)
            if (edi == 0x1f || edi == 0x25 || edi == 0x2b || edi == 0x31 || edi == 0x37 || edi == 0x3d
                    || edi == 0x43 || edi == 0x49)
                int32_t eax_2 = sub_530e40(arg2, edi)
                int32_t eax_3 = *arg3
                int32_t edi_1
                
                if (eax_3 == 0x1f)
                    edi_1 = eax_3 + 2
                else if (eax_3 == 0x25)
                    edi_1 = eax_3 + 2
                else if (eax_3 == 0x2b)
                    edi_1 = eax_3 + 2
                else if (eax_3 == 0x31)
                    edi_1 = eax_3 + 2
                else if (eax_3 == 0x37)
                    edi_1 = eax_3 + 2
                else if (eax_3 == 0x3d)
                    edi_1 = eax_3 + 2
                else if (eax_3 != 0x43)
                    if (eax_3 != 0x49)
                        sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xdfe, 
                            "OpenGLInterface::RenderStateSpecialValueFromConstant")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    edi_1 = eax_3 + 2
                else
                    edi_1 = eax_3 + 2
                
                int32_t eax_4 = sub_530e40(arg2, edi_1)
                void* edx_2 = data_27e7fd0
                arg3[2] = 0
                
                if (*(edx_2 + 0x21) == 0)
                    if (eax_4 != 0)
                        sub_4c5680("Material Mipmap ignored because it's not enabled in the app")
                    
                    goto label_54820f
                
                if (eax_4 == 0)
                label_54820f:
                    
                    if (eax_2 != 1)
                        if (eax_2 != 2)
                            goto label_548230
                        
                        arg3[1] = 0x2601
                    else
                        arg3[1] = 0x2600
                else if (eax_4 != 1)
                    if (eax_4 != 2)
                        sub_4c5680("opengl material param issue: invalid mip filter")
                        int32_t eax_59
                        eax_59.b = 0
                        return eax_59
                    
                    if (eax_2 == 1)
                        arg3[1] = 0x2702
                    else if (eax_2 == 2)
                        arg3[1] = 0x2703
                    else
                        if (eax_2 != 3)
                            goto label_548230
                        
                        arg3[2] = 1
                        arg3[1] = 0x2703
                else if (eax_2 != 1)
                    if (eax_2 != 2)
                    label_548230:
                        sub_4c5680("opengl material param issue: invalid min filter")
                        int32_t eax_6
                        eax_6.b = 0
                        return eax_6
                    
                    arg3[1] = 0x2701
                else
                    arg3[1] = 0x2700
            
            int32_t edi_2 = *arg3
            
            if (edi_2 != 0x20 && edi_2 != 0x26 && edi_2 != 0x2c && edi_2 != 0x32 && edi_2 != 0x38
                    && edi_2 != 0x3e && edi_2 != 0x44 && edi_2 != 0x4a)
                goto label_5482fa
            
            eax_1 = sub_530e40(arg2, edi_2)
            
            if (eax_1 == 1)
                arg3[1] = 0x2600
            label_5482fa:
                
                if (*arg3 != 3)
                    goto label_54834d
                
                if (sub_530ef0(arg2, 0x4d).b == 0)
                    int32_t eax_11 = sub_530e40(arg2, 3)
                    int32_t eax_12 = sub_530e40(arg2, 4)
                    arg3[1] = sub_547cb0(eax_11)
                    arg3[2] = sub_547cb0(eax_12)
                label_54834d:
                    int32_t eax_17 = *arg3
                    
                    if (eax_17 != 4)
                        if (eax_17 != 0x4e)
                            goto label_548400
                        
                        if (sub_530ef0(arg2, eax_17 - 1).b != 0)
                            int32_t eax_19 = sub_530e40(arg2, 3)
                            int32_t eax_20 = sub_530e40(arg2, 4)
                            int32_t eax_21 = sub_530e40(arg2, 0x4e)
                            int32_t eax_22 = sub_530e40(arg2, 0x4f)
                            arg3[1] = sub_547cb0(eax_19)
                            arg3[2] = sub_547cb0(eax_20)
                            arg3[3] = sub_547cb0(eax_21)
                            arg3[4] = sub_547cb0(eax_22)
                        label_548400:
                            eax_1 = *arg3
                            
                            if (eax_1 == 0x4f)
                                if (sub_530e10(arg3, arg2, eax_1 - 1).b == 0)
                                    sub_4c5680("opengl material param issue: dest blend alpha is ignored "
                                    "when src blend alpha is missing")
                                    int32_t eax_31
                                    eax_31.b = 0
                                    return eax_31
                            else if (eax_1 != 0x4d)
                                int32_t* eax_33
                                
                                if (eax_1 == 6)
                                    arg3[1] = sub_547e00(sub_530e40(arg2, eax_1))
                                    eax_33.b = 1
                                    return eax_33
                                
                                if (eax_1 != 0x17)
                                    goto label_54849f
                                
                                int32_t esi_12 = eax_1 + 0x39
                                
                                if (sub_530e10(arg3, arg2, esi_12).b == 0)
                                    arg3[1] = sub_547d80(sub_530e40(arg2, esi_12 - 0x39))
                                label_54849f:
                                    
                                    if (*arg3 == 0x50)
                                        int32_t eax_36 = sub_530e40(arg2, 0x17)
                                        int32_t eax_37 = sub_530e40(arg2, 0x50)
                                        arg3[1] = sub_547d80(eax_36)
                                        arg3[2] = sub_547d80(eax_37)
                                    
                                    int32_t edi_9 = *arg3
                                    
                                    if (edi_9 == 8)
                                        int32_t eax_41 = sub_530e40(arg2, edi_9)
                                        char eax_42 = sub_530e40(arg2, 7)
                                        arg3[1] = sub_547e00(eax_41)
                                        arg3[2] = fconvert.s(float.t(zx.d(eax_42)) / fconvert.t(255.0))
                                        int32_t* eax_45
                                        eax_45.b = 1
                                        return eax_45
                                    
                                    if (edi_9 != 7)
                                        if (edi_9 == 0xe || edi_9 == 0x15)
                                            int32_t eax_53 = sub_530e40(arg2, edi_9)
                                            int32_t eax_54 = sub_530e40(arg2, 0xf)
                                            int32_t eax_55 = sub_530e40(arg2, 0x10)
                                            arg3[1] = sub_547e00(eax_53)
                                            arg3[3] = eax_55
                                            arg3[2] = eax_54
                                            int32_t eax_58
                                            eax_58.b = 1
                                            return eax_58
                                        
                                        if (edi_9 != 0xf)
                                            if (edi_9 != 0x10)
                                                if (edi_9 != 0x11 && edi_9 != 0xb && edi_9 != 0xc
                                                        && edi_9 != 0xd && edi_9 != 0x12
                                                        && edi_9 != 0x13 && edi_9 != 0x14)
                                                    if (edi_9 == 0x18)
                                                        int32_t eax_49
                                                        long double st0
                                                        st0, eax_49 = sub_530fb0(arg2, edi_9)
                                                        arg3[1] = fconvert.s(st0)
                                                        eax_49.b = 1
                                                        return eax_49
                                                    
                                                    eax_33.b = 1
                                                    return eax_33
                                                
                                                if (edi_9 s>= 0 && edi_9 s< data_8bd344)
                                                    int32_t var_1c =
                                                        *(*(data_8bd340 + (edi_9 << 2)) + 4)
                                                    sub_4c5680("opengl material param issue: we don't "
                                                    "support %s in opengl")
                                                    int32_t eax_51
                                                    eax_51.b = 0
                                                    return eax_51
                                                
                                                sub_4c5870(
                                                    "(int)tag >= 0 && (int)tag < 
                                                        pAttribTable->lookupTableSize", 
                                                    &data_83f3d3, "AttribMap.cpp", 0x8b, 
                                                    "AttribTagGetField")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            int32_t ecx_8
                                            eax_1, ecx_8 = sub_530e10(arg3, arg2, edi_9 - 2)
                                            
                                            if (eax_1.b == 0 && sub_530e10(ecx_8, arg2, 0x15).b == 0)
                                                sub_4c5680("opengl material param issue: stencil mask is "
                                                "ignored when stencil func is missing")
                                                int32_t eax_48
                                                eax_48.b = 0
                                                return eax_48
                                        else
                                            int32_t ecx_7
                                            eax_1, ecx_7 = sub_530e10(arg3, arg2, edi_9 - 1)
                                            
                                            if (eax_1.b == 0 && sub_530e10(ecx_7, arg2, 0x15).b == 0)
                                                sub_4c5680("opengl material param issue: stencil ref is "
                                                "ignored when stencil func is missing")
                                                int32_t eax_47
                                                eax_47.b = 0
                                                return eax_47
                                    else if (sub_530e10(arg3, arg2, edi_9 + 1).b == 0)
                                        sub_4c5680("opengl material param issue: alpha ref is ignored "
                                        "when alpha func is missing")
                                        int32_t eax_46
                                        eax_46.b = 0
                                        return eax_46
                    else if (sub_530e10(arg3, arg2, eax_17 - 1).b == 0)
                        sub_4c5680("opengl material param issue: dest blend is ignored when src blend is missing")
                        int32_t eax_18
                        eax_18.b = 0
                        return eax_18
            else if (eax_1 == 2)
                arg3[1] = 0x2601
                goto label_5482fa
        else if (sub_530e10(ecx, arg2, edi - 2).b == 0)
            sub_4c5680("opengl material param issue: mip filter is ignored when min filter is missing")
        eax_1.b = 0
        return eax_1
    
    int32_t eax_62 = sub_530e40(arg2, arg1) - 1
    
    if (eax_62 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xd1f, "GLWrapModeFromDx")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (eax_62)
        case 0
            arg3[1] = 0x2901
            int32_t eax_63
            eax_63.b = 1
            return 0x2901
        case 1
            arg3[1] = 0x8370
            int32_t eax_64
            eax_64.b = 1
            return 0x8301
        case 2
            arg3[1] = 0x812f
            int32_t eax_65
            eax_65.b = 1
            return 0x8101
        case 3
            arg3[1] = 0x812d
            int32_t eax_66
            eax_66.b = 1
            return 0x8101
}

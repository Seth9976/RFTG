// 函数名称: sub_55b5a0
// 虚拟地址: 0x55b5a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_55b5a0(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14, float arg15, float arg16, float arg17, float arg18, float arg19, float arg20, float arg21, float arg22, float arg23, float arg24, float arg25, float arg26, float arg27)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* i_4
    void* edx
    i_4, edx = __chkstk(0x101c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t eax_3 = *(i_4[3] + 0x10)
    void* i_1 = i_4
    int32_t ecx = 1
    
    if (eax_3 == 0x21)
        ecx = eax_3 - 0x1d
    else if (eax_3 == 0x22)
        ecx = eax_3 - 0x1f
    
    int32_t eax_4 = *i_4
    char var_18_18
    float arg_8
    float arg_c
    float arg_10
    float arg_b4
    float arg_b8
    float arg_bc
    float arg_c0
    float arg_c4
    float arg_c8
    float arg_cc
    float arg_d0
    float arg_ec
    void* i
    float eax_42
    float ecx_58
    float edx_35
    
    if (eax_4 - 0x5d u<= 0x23)
        switch (eax_4)
            case 0x5d
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_5
                eax_5.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_5
            case 0x5e
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_7
                eax_7.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_7
            case 0x5f
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_8
                eax_8.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_8
            case 0x60, 0x61, 0x62
                int32_t var_18_6 = eax_4
                void arg_10c
                
                if (sub_4dbbd0(eax_4, &arg_10c, ecx) * 4 s> i_4[2])
                    sub_4c5680("dx9 not large enough instance buffer in shader to draw mesh")
                    i_4[2]
                
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_15
                eax_15.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_15
            case 0x63
                i = nullptr
                i_1 = nullptr
                
                if (i_4[2] s<= 0)
                    goto label_55bef2
                
                do
                    __return_addr = i_4[1] + i
                    
                    if (i s< *(edx + 0x184))
                        *(*(edx + 0x180) + (i << 2))
                        void* eax_25
                        int32_t edx_14
                        eax_25, edx_14 = sub_532ec0()
                        float arg_44
                        sub_55b480(&arg_44, edx_14, eax_25 + 0x20)
                        arg_c4 = arg_44
                        arg_c8 = arg11
                        arg_cc = arg12
                        arg_d0 = arg13
                        sub_55b4c0(arg1.b)
                        i = i_1
                    
                    i += 1
                    i_1 = i
                while (i s< i_4[2])
                
                i.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return i
            case 0x64
                i = nullptr
                i_1 = nullptr
                
                if (i_4[2] s<= 0)
                    goto label_55bef2
                
                void* i_2
                
                while (true)
                    __return_addr = i_4[1] + i
                    char var_18_14
                    
                    if (i s>= *(edx + 0x184))
                        var_18_14 = arg1.b
                    else
                        *(*(edx + 0x180) + (i << 2))
                        void* eax_28
                        int32_t edx_18
                        eax_28, edx_18 = sub_532ec0()
                        float arg_64
                        sub_4e3690(&arg_64, edx_18, i_4[4])
                        arg_c4 = arg_64
                        arg_d0 = arg19
                        float arg_14
                        sub_533660(&arg_14, eax_28)
                        arg1 = arg_14
                        arg_b4 = fconvert.s(fconvert.t(arg1) * fconvert.t(arg_c4))
                        var_18_14 = arg1.b
                        arg_b8 = fconvert.s(fconvert.t(arg17) * fconvert.t(arg2))
                        arg_bc = fconvert.s(fconvert.t(arg3) * fconvert.t(arg18))
                        arg_c0 = fconvert.s(fconvert.t(arg4) * fconvert.t(arg_d0))
                    
                    sub_55b4c0(var_18_14)
                    i_2 = i_1 + 1
                    i_1 = i_2
                    
                    if (i_2 s>= i_4[2])
                        break
                    
                    i = i_1
                
                i_2.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return i_2
            case 0x65
                i = nullptr
                i_1 = nullptr
                
                if (i_4[2] s<= 0)
                    goto label_55bef2
                
                void* i_3
                
                while (true)
                    __return_addr = i_4[1] + i
                    char var_18_15
                    
                    if (i s>= *(edx + 0x184))
                        var_18_15 = arg1.b
                    else
                        *(*(edx + 0x180) + (i << 2))
                        float arg_84
                        sub_533760(&arg_84, sub_532ec0())
                        arg_b4 = arg_84
                        arg_b8 = arg22
                        arg_bc = arg23
                        arg_c0 = arg24
                        var_18_15 = arg1.b
                    
                    sub_55b4c0(var_18_15)
                    i_3 = i_1 + 1
                    i_1 = i_3
                    
                    if (i_3 s>= i_4[2])
                        break
                    
                    i = i_1
                
                i_3.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return i_3
            case 0x66
                void* ebx_2 = *(edx + 0x33c)
                
                if (ebx_2 != 0)
                    void* eax_18 = *(ebx_2 + 0x2c)
                    
                    if (eax_18 != 0)
                        if (*(eax_18 + 0x80) s<= 0)
                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                            
                            if (IsDebuggerPresent() != 1)
                                sub_4c5a30()
                                noreturn
                            
                            breakpoint
                        
                        if (*(eax_18 + 0x7c) == 0)
                            sub_4c5870("pBones", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x5dc, 
                                "Dx9SetSpecialRenderState")
                            
                            if (IsDebuggerPresent() != 1)
                                sub_4c5a30()
                                noreturn
                            
                            breakpoint
                        
                        if (*(eax_18 + 0x80) << 2 s> i_4[2])
                            sub_4c5680("not enough bones in shader to draw mesh")
                            i_4[2]
                        
                        i_4[1]
                        sub_55b4c0(arg1.b)
                        int32_t eax_23
                        eax_23.b = 1
                        sub_5a6aba(eax_1 ^ &var_8)
                        return eax_23
                
                sub_4c5680("Can't use bones shader on non-animation structure\n")
                int32_t eax_24
                eax_24.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_24
            case 0x67, 0x68, 0x69, 0x6a
                int32_t var_18_8 = ecx
                sub_533c50((eax_4 << 5) + *(edx + 0x350) + 0x1dc, 
                    fconvert.s(fconvert.t(*(data_27e7fe4 + 0x90))))
                char ebx_1 = arg1.b
                i_4[1]
                sub_55b4c0(ebx_1)
                i_4[1]
                sub_55b4c0(ebx_1)
                i_4[1]
                sub_55b4c0(ebx_1)
                int32_t eax_17
                eax_17.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_17
            case 0x6b
                var_18_18 = arg1.b
                goto label_55bee2
            case 0x6c
                var_18_18 = arg1.b
                goto label_55bee2
            case 0x6f
                void arg_94
                sub_4e2170(&arg_94)
                __builtin_memcpy(&arg_c4, &arg_94, 0x1c)
                float arg_d4
                sub_55b480(&arg_ec, eax_4 - 0x5d, &arg_d4)
                arg_b4 = arg_ec
                arg_b8 = arg25
                arg_bc = arg26
                *(i_1 + 4)
                arg_c0 = arg27
                sub_55b4c0(arg1.b)
                int32_t eax_51
                eax_51.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_51
            case 0x70
                __builtin_memcpy(&arg_ec, 0x27e8090, 0x1c)
                float arg_74
                float arg_fc[0x4]
                sub_55b480(&arg_74, eax_4 - 0x5d, &arg_fc)
                arg_b4 = arg_74
                float arg_78
                arg_b8 = arg_78
                arg_bc = arg20
                *(i_1 + 4)
                arg_c0 = arg21
                sub_55b4c0(arg1.b)
                int32_t eax_55
                eax_55.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_55
            case 0x71
                var_18_18 = arg1.b
                goto label_55bee2
            case 0x72
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_10
                eax_10.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_10
            case 0x73
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_11
                eax_11.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_11
            case 0x74
                float arg_24
                sub_4e3690(&arg_24, eax_4 - 0x5d, i_4[4])
                arg1 = arg_24
                arg_8 = arg5
                arg_c = arg6
                ecx_58 = *(edx + 0x2ec)
                arg_10 = arg7
                edx_35 = *(edx + 0x2f0)
                arg_c4 = *(edx + 0x2e8)
                eax_42 = *(edx + 0x2f4)
            label_55bbf4:
                long double x87_r7_11 = fconvert.t(arg_c4) * fconvert.t(arg1)
                arg_d0 = eax_42
                arg_b4 = fconvert.s(x87_r7_11)
                var_18_18 = arg1.b
                arg_b8 = fconvert.s(fconvert.t(ecx_58) * fconvert.t(arg_8))
                arg_bc = fconvert.s(fconvert.t(edx_35) * fconvert.t(arg_c))
                arg_c0 = fconvert.s(fconvert.t(arg_d0) * fconvert.t(arg_10))
                goto label_55bee2
            case 0x75
                float arg_34
                sub_55b480(&arg_34, eax_4 - 0x5d, edx + 0x278)
                arg_b4 = arg_34
                arg_b8 = arg8
                arg_bc = arg9
                arg_c0 = arg10
                var_18_18 = arg1.b
                goto label_55bee2
            case 0x76
                float arg_54
                sub_4e3690(&arg_54, eax_4 - 0x5d, i_4[4])
                arg1 = arg_54
                arg_8 = arg14
                arg_c = arg15
                ecx_58 = *(edx + 0x2ac)
                arg_10 = arg16
                edx_35 = *(edx + 0x2b0)
                arg_c4 = *(edx + 0x2a8)
                eax_42 = *(edx + 0x2b4)
                goto label_55bbf4
            case 0x77
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_39
                eax_39.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_39
            case 0x78
                i_4[1]
                sub_55b4c0(arg1.b)
                int32_t eax_37
                eax_37.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return eax_37
            case 0x7c
                void* eax_56 = data_27e7fcc
                arg_b4 = fconvert.s(fconvert.t(*(eax_56 + 0x50)))
                arg_b8 = fconvert.s(fconvert.t(*(eax_56 + 0x4c)))
                var_18_18 = arg1.b
                arg_bc = fconvert.s(fconvert.t(*(data_27e7fe4 + 0x90)))
                arg_c0 = fconvert.s(float.t(0))
                goto label_55bee2
            case 0x7d
                var_18_18 = arg1.b
                goto label_55bee2
            case 0x7e
                var_18_18 = arg1.b
                goto label_55bee2
            case 0x7f
                var_18_18 = arg1.b
            label_55bee2:
                i_4[1]
                sub_55b4c0(var_18_18)
            label_55bef2:
                i.b = 1
                sub_5a6aba(eax_1 ^ &var_8)
                return i
            case 0x80
                void* eax_59 = data_3079200
                arg_c4 = fconvert.s(fconvert.t(*(eax_59 + 0x68)) / fconvert.t(*(eax_59 + 0x64)))
                long double x87_r7_24 = float.t(0)
                arg_c8 = fconvert.s(x87_r7_24)
                arg_b4 = arg_c4
                arg_cc = fconvert.s(x87_r7_24)
                arg_d0 = fconvert.s(x87_r7_24)
                arg_b8 = arg_c8
                arg_bc = arg_cc
                arg_c0 = arg_d0
                var_18_18 = arg1.b
                goto label_55bee2
    eax_4.b = 0
    sub_5a6aba(eax_1 ^ &var_8)
    return eax_4
}

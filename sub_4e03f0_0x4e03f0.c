// 函数名称: sub_4e03f0
// 虚拟地址: 0x4e03f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e03f0(char** arg1, float* arg2, int32_t* arg3, float* arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692b3c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_5c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_4e7410(arg1)
    int32_t** var_24 = eax_3
    
    if (*eax_3 != 0)
        if ((data_3165800 & 1) == 0)
            data_3165800.d |= 1
            int32_t var_8_1 = 0
            data_31657fc = sub_509140(5, "sys/draw3d.material")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_3165800 & 2) == 0)
            data_3165800.d |= 2
            int32_t var_8_3 = 1
            data_31657f8 = sub_509140(3, "sys/pbr/brdf_lut.texture")
            int32_t var_8_4 = 0xffffffff
        
        int32_t* eax_6 = *eax_3
        int32_t i_1 = 0
        
        if (*eax_6 s> 0)
            int32_t var_18_1 = 0
            int32_t i
            
            do
                void* edi_2 = eax_6[1] + var_18_1
                void* eax_7
                void* ecx_1
                eax_7, ecx_1 = sub_4e02d0(arg3, edi_2)
                int32_t eax_8 = *(edi_2 + 0x38)
                int32_t ebx_1 = *(eax_7 + 8)
                char var_11_1 = 0
                long double x87_r7_1
                
                if (eax_8 s< 0xa)
                    x87_r7_1 = float.t(1)
                else
                    ecx_1 = arg6 + 0xa
                    
                    if (eax_8 s>= ecx_1)
                        x87_r7_1 = float.t(1)
                    else
                        void* ecx_3 = arg5 + ((eax_8 * 3 - 0x1e) << 3)
                        int32_t eax_10 = *(ecx_3 + 4)
                        
                        if (eax_10 != 0)
                            ebx_1 = eax_10
                        
                        x87_r7_1 = fconvert.t(*(ecx_3 + 8))
                        ecx_1 = ecx_3 + 8
                        long double x87_r6_1 = float.t(1)
                        x87_r6_1 - x87_r7_1
                        eax_10.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (p_1)
                        label_4e051c:
                            ecx_1 = sub_4dd970(ecx_1)
                            var_11_1 = 1
                            x87_r7_1 = float.t(1)
                        else
                            long double x87_r6_2 = fconvert.t(*(ecx_1 + 4))
                            x87_r7_1 - x87_r6_2
                            eax_10.w = (x87_r7_1 < x87_r6_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, x87_r6_2) ? 1 : 0) << 0xa
                                | (x87_r7_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
                            bool p_2 = unimplemented  {test ah, 0x44}
                            
                            if (p_2)
                                goto label_4e051c
                            
                            long double x87_r6_3 = fconvert.t(*(ecx_1 + 8))
                            x87_r7_1 - x87_r6_3
                            eax_10.w = (x87_r7_1 < x87_r6_3 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, x87_r6_3) ? 1 : 0) << 0xa
                                | (x87_r7_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                            bool p_3 = unimplemented  {test ah, 0x44}
                            
                            if (p_3)
                                goto label_4e051c
                            
                            long double x87_r6_4 = fconvert.t(*(ecx_1 + 0xc))
                            x87_r7_1 - x87_r6_4
                            eax_10.w = (x87_r7_1 < x87_r6_4 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, x87_r6_4) ? 1 : 0) << 0xa
                                | (x87_r7_1 == x87_r6_4 ? 1 : 0) << 0xe | 0x3800
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_4)
                                goto label_4e051c
                
                void* var_60_2 = ecx_1
                sub_4dda80(fconvert.s(x87_r7_1))
                int32_t eax_12 = *(eax_7 + 0x14)
                float* var_6c_1
                int32_t* var_68_1
                int32_t var_64_1
                float* var_60_4
                float* eax_13
                int32_t var_34
                
                if (eax_12 == 0)
                label_4e0571:
                    int32_t eax_14 = *(eax_7 + 0x10)
                    
                    if (eax_14 == 0)
                    label_4e05a8:
                        eax_13 = *(eax_7 + 4)
                        int32_t var_20
                        
                        if (eax_13 == 0)
                            eax_13 = arg4
                            var_60_4 = eax_13
                            
                            if (*(eax_7 + 8) == 0)
                                var_64_1 = 0
                                var_68_1 = nullptr
                                var_6c_1 = data_31657fc
                            else
                                float* edx_4 = data_31657fc
                                var_64_1 = 1
                                var_68_1 = &var_20
                                var_20 = ebx_1
                                var_6c_1 = edx_4
                        else
                            var_60_4 = arg4
                            var_64_1 = 1
                            var_68_1 = &var_20
                            var_20 = ebx_1
                            var_6c_1 = eax_13
                    else
                        int32_t ecx_6 = *(eax_7 + 0xc)
                        
                        if (ecx_6 == 0)
                            if (eax_14 == 0)
                                goto label_4e05a8
                            
                            int32_t var_30_3 = eax_14
                            int32_t var_2c_3 = data_31657f8
                            float* ecx_18 = *(eax_7 + 4)
                            var_34 = ebx_1
                            int32_t var_28_3 = 0
                            sub_4deb80(&var_34, arg2, edi_2, ecx_18, &var_34, 3, arg4)
                            sub_4c5870("Halt", &data_83f3d3, "Draw3d.cpp", 0x80f, 
                                "Draw3DStructureMaterialTableMatrixOverrides")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t var_30_1 = ecx_6
                        var_60_4 = arg4
                        int32_t var_2c_1 = eax_14
                        var_64_1 = 4
                        int32_t var_28_1 = data_31657f8
                        eax_13 = *(eax_7 + 4)
                        var_68_1 = &var_34
                        var_34 = ebx_1
                        var_6c_1 = eax_13
                else
                    int32_t ecx_4 = *(eax_7 + 0xc)
                    
                    if (ecx_4 == 0)
                        if (eax_12 == 0)
                            goto label_4e0571
                        
                        int32_t var_30_2 = *(eax_7 + 0x10)
                        int32_t var_2c_2 = *(eax_7 + 0x14)
                        int32_t var_28_2 = data_31657f8
                        float* edx_10 = *(eax_7 + 4)
                        var_34 = ebx_1
                        sub_4deb80(arg4, arg2, edi_2, edx_10, &var_34, 4, arg4)
                        sub_4c5870("Halt", &data_83f3d3, "Draw3d.cpp", 0x804, 
                            "Draw3DStructureMaterialTableMatrixOverrides")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t var_44_1 = ecx_4
                    int32_t var_3c_1 = eax_12
                    eax_13 = arg4
                    var_60_4 = eax_13
                    int32_t var_40_1 = *(eax_7 + 0x10)
                    var_64_1 = 5
                    int32_t var_38_1 = data_31657f8
                    float* edx_3 = *(eax_7 + 4)
                    int32_t var_48
                    var_68_1 = &var_48
                    var_48 = ebx_1
                    var_6c_1 = edx_3
                sub_4deb80(eax_13, arg2, edi_2, var_6c_1, var_68_1, var_64_1, var_60_4)
                
                if (var_11_1 != 0)
                    sub_4dd970(&data_840b64)
                
                eax_6 = *var_24
                var_18_1 += 0x140
                i = i_1 + 1
                i_1 = i
            while (i s< *eax_6)
        
        sub_4df840(eax_6, arg4, arg1, arg2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
}

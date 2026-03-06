// 函数名称: sub_439f40
// 虚拟地址: 0x439f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_439f40()
{
    // 第一条实际指令: void var_334
    void var_334
    int32_t eax_1 = __security_cookie ^ &var_334
    void* var_324 = nullptr
    int32_t result
    
    while (true)
        void* ecx_1 = *(data_27e7a40 + 0x548)
        void* var_328_1
        void* edi_1
        
        if (var_324 != 0)
            var_328_1 = var_324 + 0xb0
            edi_1 = var_324 + 0xb0
        else
            edi_1 = *(ecx_1 + 0x43960)
            var_328_1 = edi_1
        
        result = *(ecx_1 + 0x43964) * 0xb0 + *(ecx_1 + 0x43960)
        
        if (edi_1 u>= result)
            break
        
        while (true)
            if ((*(edi_1 + 0xac) & 0xffff0000) != 0)
                var_324 = edi_1
                sub_4389e0(edi_1)
                unimplemented  {call 0x4389e0}
                float var_32c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                void* ecx_4 = data_27e7a40
                int32_t eax_8
                int16_t top
                
                if (*(edi_1 + 0xac) == *(*(ecx_4 + 0x548) + 0xbfac))
                    unimplemented  {fld st0, dword [esp+0x14]}
                    long double temp1_1 = fconvert.t(3.0)
                    unimplemented  {fcomp st0, qword [0x8a5388]} f- temp1_1
                    bool c0_1 = unimplemented  {fcomp st0, qword [0x8a5388]} f< temp1_1
                    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [0x8a5388]}, temp1_1)
                    bool c3_1 = unimplemented  {fcomp st0, qword [0x8a5388]} f== temp1_1
                    unimplemented  {fcomp st0, qword [0x8a5388]}
                    eax_8.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    bool p_1 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_1))
                        unimplemented  {fld st0, dword [0x8a57e0]}
                        float var_32c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                        unimplemented  {fstp dword [esp+0x14], st0}
                
                unimplemented  {fld st0, dword [0x8c4d34]}
                unimplemented  {fld st0, dword [esp+0x14]}
                unimplemented  {fld st0, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fld st0, dword [edi+0x78]}
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_32c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                unimplemented  {fld st0, dword [esp+0x14]}
                *(edi_1 + 0x78) = fconvert.s(unimplemented  {fst dword [edi+0x78], st0})
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fmul st0, qword [0x8a59c8]}
                unimplemented  {fld1 }
                unimplemented  {fsubrp st1, st0}
                unimplemented  {fsubrp st1, st0}
                unimplemented  {fcompp } f- unimplemented  {fcompp }
                bool c0_2 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                bool c2_2 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                bool c3_2 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                unimplemented  {fcompp }
                unimplemented  {fcompp }
                eax_8.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_2 = unimplemented  {test ah, 0x41}
                
                if (not(p_2) && *(edi_1 + 0x98) == 0)
                    eax_8 = *edi_1
                    *(edi_1 + 0x98) = 1
                    
                    if (eax_8 == 0 || eax_8 == 1 || eax_8 == 4)
                        sub_4d6480(data_307befc)
                        void var_74
                        sub_4d66f0(&var_74)
                        ecx_4 = data_27e7a40
                    else if (eax_8 == 2)
                        sub_4d6480(data_307bf70)
                        void var_a4
                        sub_4d66f0(&var_a4)
                        ecx_4 = data_27e7a40
                    else if (eax_8 == 3)
                        if (*(edi_1 + 0x5c) != 0xd)
                            data_307bf48
                            sub_4d6980()
                        else
                            data_307bf4c
                            sub_4d6980()
                        
                        ecx_4 = data_27e7a40
                
                unimplemented  {fld st0, dword [edi+0x78]}
                float var_32c_4 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                unimplemented  {fldz }
                int16_t top_19 = top - 2
                unimplemented  {fld st0, dword [esp+0x14]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_3 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_3 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_3 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                eax_8.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (top_19 & 7) << 0xb
                bool p_3 = unimplemented  {test ah, 0x5}
                bool p_4
                
                if (p_3)
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fld1 }
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_4 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_4 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_4 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    eax_8.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | (top_19 & 7) << 0xb
                    p_4 = unimplemented  {test ah, 0x5}
                
                int16_t top_21
                
                if (not(p_3) || p_4)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_21 = top_19 + 1
                else
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    top_21 = top_19 + 1
                
                bool cond:1_1 = *(edi_1 + 0x94) != 1
                float var_32c_5 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                unimplemented  {fld st0, dword [esp+0x14]}
                *(edi_1 + 0x78) = fconvert.s(unimplemented  {fst dword [edi+0x78], st0})
                float* eax_14
                void* ebx_1
                int16_t top_64
                
                if (cond:1_1)
                    if (*(edi_1 + 0x9c) != 0 || *(edi_1 + 0x9a) != 0)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        void var_1b0
                        eax_14 = sub_436c20(&var_1b0, edi_1, *(ecx_4 + 0x74), &var_1b0, edi_1 + 0x58, 0)
                        bool cond:0_1 = *(edi_1 + 0x58) != 0
                        void var_2f0
                        __builtin_memcpy(&var_2f0, eax_14, 0x20)
                        int16_t top_191
                        
                        if (cond:0_1 || *(var_328_1 + 0x9a) != 0
                                || *(*(data_27e7a40 + 0x548) + 0xbfe7) != 0)
                            unimplemented  {fld st0, dword [0x8a53a8]}
                            __builtin_memcpy(var_328_1 + 0xc, &var_2f0, 0x20)
                            long double temp3_1 = fconvert.t(*(var_328_1 + 0x20))
                            unimplemented  {fcomp st0, dword [edx+0x20]} f- temp3_1
                            bool c0_21 = unimplemented  {fcomp st0, dword [edx+0x20]} f< temp3_1
                            bool c2_21 =
                                is_unordered.t(unimplemented  {fcomp st0, dword [edx+0x20]}, temp3_1)
                            bool c3_21 = unimplemented  {fcomp st0, dword [edx+0x20]} f== temp3_1
                            unimplemented  {fcomp st0, dword [edx+0x20]}
                            eax_14.w = (c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa
                                | (c3_21 ? 1 : 0) << 0xe | ((top_21 + 1) & 7) << 0xb
                            
                            if ((eax_14:1.b & 0x41) != 0)
                                sub_4c5870("gfx->transform.t.x < 10000", &data_83f3d3, 
                                    "..\code\RFTGClient.cpp", 0x3807, "RFTGGfxUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            top_191 = top_21
                            unimplemented  {fld1 }
                        label_43a805:
                            *(var_328_1 + 0x78) =
                                fconvert.s(unimplemented  {fstp dword [edx+0x78], st0})
                            unimplemented  {fstp dword [edx+0x78], st0}
                            top_64 = top_191 + 1
                        else
                            unimplemented  {fld st0, dword [esp+0x64]}
                            unimplemented  {fld st0, dword [edx+0x20]}
                            unimplemented  {fucompp } f- unimplemented  {fucompp }
                            bool c0_18 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                            bool c2_18 =
                                is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                            bool c3_18 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            top_64 = top_21 + 1
                            eax_14.w = (c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa
                                | (c3_18 ? 1 : 0) << 0xe | (top_64 & 7) << 0xb
                            bool p_14 = unimplemented  {test ah, 0x44}
                            
                            if (p_14)
                            label_43a7b9:
                                
                                if (*(var_328_1 + 0x94) != 1)
                                    top_191 = top_64 - 1
                                    unimplemented  {fldz }
                                    __builtin_memcpy(var_328_1 + 0x2c, var_328_1 + 0xc, 0x20)
                                    *(var_328_1 + 0x50) = 0xffffffff
                                    *(var_328_1 + 0x9c) = 0
                                    goto label_43a805
                            else
                                unimplemented  {fld st0, dword [esp+0x68]}
                                unimplemented  {fld st0, dword [edx+0x24]}
                                unimplemented  {fucompp } f- unimplemented  {fucompp }
                                bool c0_19 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                                bool c2_19 =
                                    is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                                bool c3_19 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                                unimplemented  {fucompp }
                                unimplemented  {fucompp }
                                eax_14.w = (c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa
                                    | (c3_19 ? 1 : 0) << 0xe | (top_64 & 7) << 0xb
                                bool p_15 = unimplemented  {test ah, 0x44}
                                
                                if (p_15)
                                    goto label_43a7b9
                                
                                unimplemented  {fld st0, dword [esp+0x6c]}
                                unimplemented  {fld st0, dword [edx+0x28]}
                                unimplemented  {fucompp } f- unimplemented  {fucompp }
                                bool c0_20 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                                bool c2_20 =
                                    is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                                bool c3_20 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                                unimplemented  {fucompp }
                                unimplemented  {fucompp }
                                eax_14.w = (c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa
                                    | (c3_20 ? 1 : 0) << 0xe | (top_64 & 7) << 0xb
                                bool p_16 = unimplemented  {test ah, 0x44}
                                
                                if (p_16)
                                    goto label_43a7b9
                    else
                        int32_t ecx_12 = *(ecx_4 + 0x74)
                        void var_1d0
                        
                        if (*(edi_1 + 0x50) == 0xffffffff)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            int32_t eax_28
                            int32_t edx_12
                            eax_28, edx_12 =
                                sub_436c20(edi_1 + 0x58, edi_1, ecx_12, &var_1d0, edi_1 + 0x58, 0)
                            unimplemented  {fld1 }
                            unimplemented  {fldz }
                            unimplemented  {fsub st1, st0}
                            unimplemented  {fld st0, dword [ebx+0x78]}
                            float var_104[0x8]
                            int32_t ecx_18 = __builtin_memcpy(&var_104, eax_28, 0x20)
                            unimplemented  {fsub st0, st1}
                            float var_32c_23 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                            unimplemented  {fstp dword [esp+0x14], st0}
                            unimplemented  {fld st0, dword [esp+0x14]}
                            unimplemented  {fxch st0, st2}
                            unimplemented  {fxch st0, st2}
                            float var_32c_24 = fconvert.s(unimplemented  {fst dword [esp+0x14], st0})
                            unimplemented  {fld st0, dword [esp+0x14]}
                            unimplemented  {fdivp st3, st0}
                            unimplemented  {fdivp st3, st0}
                            unimplemented  {fxch st0, st2}
                            unimplemented  {fxch st0, st2}
                            float var_32c_25 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                            unimplemented  {fstp dword [esp+0x14], st0}
                            unimplemented  {fldz }
                            unimplemented  {fld st0, dword [esp+0x14]}
                            unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                            bool c0_15 =
                                unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                            bool c2_15 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                unimplemented  {fcom st0, st1})
                            bool c3_15 =
                                unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                            eax_28.w = (c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa
                                | (c3_15 ? 1 : 0) << 0xe | ((top_21 - 3) & 7) << 0xb
                            bool p_12 = unimplemented  {test ah, 0x41}
                            int16_t top_155
                            
                            if (p_12)
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fld1 }
                                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                bool c0_16 =
                                    unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                                bool c2_16 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                    unimplemented  {fcom st0, st1})
                                bool c3_16 =
                                    unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                                eax_28.w = (c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa
                                    | (c3_16 ? 1 : 0) << 0xe | ((top_21 - 3) & 7) << 0xb
                                bool p_13 = unimplemented  {test ah, 0x41}
                                
                                if (p_13)
                                    unimplemented  {fstp st0, st0}
                                    unimplemented  {fstp st0, st0}
                                    unimplemented  {fld st0, st0}
                                    unimplemented  {fld st0, qword [0x8a53e8]}
                                    unimplemented  {fmul st2, st0}
                                    unimplemented  {fld st0, qword [0x8a5388]}
                                    unimplemented  {fld st0, st0}
                                    unimplemented  {fsubrp st4, st0}
                                    unimplemented  {fsubrp st4, st0}
                                    unimplemented  {fld st0, st2}
                                    unimplemented  {fmulp st3, st0}
                                    unimplemented  {fmulp st3, st0}
                                    unimplemented  {fxch st0, st3}
                                    unimplemented  {fxch st0, st3}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {fxch st0, st1}
                                    unimplemented  {fxch st0, st1}
                                    float var_32c_26 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                    unimplemented  {fstp dword [esp+0x14], st0}
                                    unimplemented  {fld st0, dword [esp+0x14]}
                                    unimplemented  {fld st0, st0}
                                    unimplemented  {fxch st0, st1}
                                    unimplemented  {fxch st0, st1}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {fxch st0, st2}
                                    unimplemented  {fxch st0, st2}
                                    unimplemented  {fsubrp st1, st0}
                                    unimplemented  {fsubrp st1, st0}
                                    unimplemented  {fld st0, st1}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    float var_32c_27 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                    unimplemented  {fstp dword [esp+0x14], st0}
                                    unimplemented  {fld st0, dword [esp+0x14]}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {fmulp st2, st0}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {faddp st1, st0}
                                    int16_t top_176
                                    top_155 = top_176 + 2
                                else
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fstp st2, st0}
                                    unimplemented  {fstp st2, st0}
                                    unimplemented  {fstp st0, st0}
                                    unimplemented  {fstp st0, st0}
                                    top_155 = top_21
                            else
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st2, st0}
                                unimplemented  {fstp st2, st0}
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                top_155 = top_21
                            
                            float var_32c_28 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                            unimplemented  {fstp dword [esp+0x14], st0}
                            int32_t var_344_8 = ecx_18
                            unimplemented  {fld st0, dword [esp+0x18]}
                            float var_344_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            float var_170
                            eax_14 = sub_466080(var_328_1 + 0x2c, edx_12, &var_104, &var_170, var_344_9)
                            unimplemented  {fld st0, dword [0x8a53a8]}
                            void var_2b0
                            __builtin_memcpy(&var_2b0, eax_14, 0x20)
                            __builtin_memcpy(var_328_1 + 0xc, &var_2b0, 0x20)
                            long double temp6_1 = fconvert.t(*(var_328_1 + 0x20))
                            unimplemented  {fcomp st0, dword [ebx+0x20]} f- temp6_1
                            bool c0_17 = unimplemented  {fcomp st0, dword [ebx+0x20]} f< temp6_1
                            bool c2_17 =
                                is_unordered.t(unimplemented  {fcomp st0, dword [ebx+0x20]}, temp6_1)
                            bool c3_17 = unimplemented  {fcomp st0, dword [ebx+0x20]} f== temp6_1
                            unimplemented  {fcomp st0, dword [ebx+0x20]}
                            top_64 = top_155 + 1
                            eax_14.w = (c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa
                                | (c3_17 ? 1 : 0) << 0xe | (top_64 & 7) << 0xb
                            
                            if ((eax_14:1.b & 0x41) != 0)
                                sub_4c5870("gfx->transform.t.x < 10000", &data_83f3d3, 
                                    "..\code\RFTGClient.cpp", 0x3833, "RFTGGfxUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                        else
                            unimplemented  {fld st0, dword [0x8a59c0]}
                            unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                            bool c0_7 =
                                unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                            bool c2_7 = is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                unimplemented  {fcomp st0, st1})
                            bool c3_7 =
                                unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                            unimplemented  {fcomp st0, st1}
                            eax_8.w = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa
                                | (c3_7 ? 1 : 0) << 0xe | (top_21 & 7) << 0xb
                            
                            if ((eax_8:1.b & 0x41) != 0)
                                unimplemented  {fcomp st0, dword [0x8a59b0]} f- fconvert.t(0.660000026f)
                                unimplemented  {fcomp st0, dword [0x8a59b0]}
                                bool p_9 = unimplemented  {test ah, 0x5}
                                
                                if (p_9)
                                    int32_t eax_22 = sub_436c20(edi_1 + 0x4c, edi_1, ecx_12, &var_1d0, 
                                        edi_1 + 0x4c, 0)
                                    void* edx_8 = data_27e7a40
                                    float var_e4[0x8]
                                    __builtin_memcpy(&var_e4, eax_22, 0x20)
                                    float var_1f0[0x8]
                                    int32_t eax_24
                                    int32_t edx_10
                                    eax_24, edx_10 = sub_436c20(var_328_1 + 0x58, var_328_1, 
                                        *(edx_8 + 0x74), &var_1f0, var_328_1 + 0x58, 0)
                                    unimplemented  {fld st0, dword [ebx+0x78]}
                                    unimplemented  {fsub st0, qword [0x8a5890]}
                                    float var_c4[0x8]
                                    int32_t ecx_16 = __builtin_memcpy(&var_c4, eax_24, 0x20)
                                    float var_32c_18 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                    unimplemented  {fstp dword [esp+0x14], st0}
                                    unimplemented  {fld st0, dword [esp+0x14]}
                                    unimplemented  {fdiv st0, qword [0x8a59a8]}
                                    float var_32c_19 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                    unimplemented  {fstp dword [esp+0x14], st0}
                                    unimplemented  {fldz }
                                    unimplemented  {fld st0, dword [esp+0x14]}
                                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                    bool c0_12 =
                                        unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                                    bool c2_12 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                        unimplemented  {fcom st0, st1})
                                    bool c3_12 = unimplemented  {fcom st0, st1}
                                        f== unimplemented  {fcom st0, st1}
                                    eax_24.w = (c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa
                                        | (c3_12 ? 1 : 0) << 0xe | ((top_21 - 1) & 7) << 0xb
                                    bool p_10 = unimplemented  {test ah, 0x41}
                                    int16_t top_113
                                    
                                    if (p_10)
                                        unimplemented  {fstp st1, st0}
                                        unimplemented  {fstp st1, st0}
                                        unimplemented  {fld1 }
                                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                        bool c0_13 = unimplemented  {fcom st0, st1}
                                            f< unimplemented  {fcom st0, st1}
                                        bool c2_13 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                            unimplemented  {fcom st0, st1})
                                        bool c3_13 = unimplemented  {fcom st0, st1}
                                            f== unimplemented  {fcom st0, st1}
                                        eax_24.w = (c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa
                                            | (c3_13 ? 1 : 0) << 0xe | ((top_21 - 1) & 7) << 0xb
                                        bool p_11 = unimplemented  {test ah, 0x41}
                                        
                                        if (p_11)
                                            unimplemented  {fstp st0, st0}
                                            unimplemented  {fstp st0, st0}
                                            unimplemented  {fld st0, st0}
                                            unimplemented  {fld st0, qword [0x8a53e8]}
                                            unimplemented  {fmul st2, st0}
                                            unimplemented  {fld st0, qword [0x8a5388]}
                                            unimplemented  {fld st0, st0}
                                            unimplemented  {fsubrp st4, st0}
                                            unimplemented  {fsubrp st4, st0}
                                            unimplemented  {fld st0, st2}
                                            unimplemented  {fmulp st3, st0}
                                            unimplemented  {fmulp st3, st0}
                                            unimplemented  {fxch st0, st3}
                                            unimplemented  {fxch st0, st3}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fxch st0, st1}
                                            unimplemented  {fxch st0, st1}
                                            float var_32c_20 =
                                                fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                            unimplemented  {fstp dword [esp+0x14], st0}
                                            unimplemented  {fld st0, dword [esp+0x14]}
                                            unimplemented  {fld st0, st0}
                                            unimplemented  {fxch st0, st1}
                                            unimplemented  {fxch st0, st1}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fxch st0, st2}
                                            unimplemented  {fxch st0, st2}
                                            unimplemented  {fsubrp st1, st0}
                                            unimplemented  {fsubrp st1, st0}
                                            unimplemented  {fld st0, st1}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fmulp st1, st0}
                                            float var_32c_21 =
                                                fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                            unimplemented  {fstp dword [esp+0x14], st0}
                                            unimplemented  {fld1 }
                                            unimplemented  {fldz }
                                            unimplemented  {fsub st1, st0}
                                            unimplemented  {fld st0, dword [esp+0x14]}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {faddp st1, st0}
                                            unimplemented  {faddp st1, st0}
                                            top_113 = top_21
                                        else
                                            unimplemented  {fstp st1, st0}
                                            unimplemented  {fstp st1, st0}
                                            top_113 = top_21
                                    else
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fstp st0, st0}
                                        top_113 = top_21
                                    
                                    float var_32c_22 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                    unimplemented  {fstp dword [esp+0x14], st0}
                                    int32_t var_344_6 = ecx_16
                                    unimplemented  {fld st0, dword [esp+0x18]}
                                    float var_344_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    eax_14 = sub_466080(&var_e4, edx_10, &var_c4, &var_1f0, var_344_7)
                                    unimplemented  {fld st0, dword [0x8a53a8]}
                                    void var_230
                                    __builtin_memcpy(&var_230, eax_14, 0x20)
                                    __builtin_memcpy(var_328_1 + 0xc, &var_230, 0x20)
                                    long double temp9_1 = fconvert.t(*(var_328_1 + 0x20))
                                    unimplemented  {fcomp st0, dword [ebx+0x20]} f- temp9_1
                                    bool c0_14 = unimplemented  {fcomp st0, dword [ebx+0x20]} f< temp9_1
                                    bool c2_14 = is_unordered.t(
                                        unimplemented  {fcomp st0, dword [ebx+0x20]}, temp9_1)
                                    bool c3_14 =
                                        unimplemented  {fcomp st0, dword [ebx+0x20]} f== temp9_1
                                    unimplemented  {fcomp st0, dword [ebx+0x20]}
                                    top_64 = top_113 + 1
                                    eax_14.w = (c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa
                                        | (c3_14 ? 1 : 0) << 0xe | (top_64 & 7) << 0xb
                                    
                                    if ((eax_14:1.b & 0x41) != 0)
                                        sub_4c5870("gfx->transform.t.x < 10000", &data_83f3d3, 
                                            "..\code\RFTGClient.cpp", 0x382b, "RFTGGfxUpdate")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                else
                                    void var_190
                                    int32_t eax_20 = sub_436c20(edi_1 + 0x4c, edi_1, ecx_12, &var_190, 
                                        edi_1 + 0x4c, 0)
                                    unimplemented  {fld st0, dword [0x8a53a8]}
                                    eax_14 = var_328_1
                                    void var_2d0
                                    __builtin_memcpy(&var_2d0, eax_20, 0x20)
                                    __builtin_memcpy(&eax_14[3], &var_2d0, 0x20)
                                    long double temp4_1 = fconvert.t(eax_14[8])
                                    unimplemented  {fcomp st0, dword [eax+0x20]} f- temp4_1
                                    bool c0_11 = unimplemented  {fcomp st0, dword [eax+0x20]} f< temp4_1
                                    bool c2_11 = is_unordered.t(
                                        unimplemented  {fcomp st0, dword [eax+0x20]}, temp4_1)
                                    bool c3_11 =
                                        unimplemented  {fcomp st0, dword [eax+0x20]} f== temp4_1
                                    unimplemented  {fcomp st0, dword [eax+0x20]}
                                    top_64 = top_21 + 1
                                    eax_14.w = (c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa
                                        | (c3_11 ? 1 : 0) << 0xe | (top_64 & 7) << 0xb
                                    
                                    if ((eax_14:1.b & 0x41) != 0)
                                        sub_4c5870("gfx->transform.t.x < 10000", &data_83f3d3, 
                                            "..\code\RFTGClient.cpp", 0x3823, "RFTGGfxUpdate")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                            else
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                float var_210[0x8]
                                int32_t eax_16
                                int32_t edx_5
                                eax_16, edx_5 =
                                    sub_436c20(edi_1 + 0x4c, edi_1, ecx_12, &var_210, edi_1 + 0x4c, 0)
                                unimplemented  {fld st0, dword [ebx+0x78]}
                                unimplemented  {fldz }
                                unimplemented  {fsub st1, st0}
                                unimplemented  {fxch st0, st1}
                                unimplemented  {fxch st0, st1}
                                float var_124[0x8]
                                int32_t ecx_13 = __builtin_memcpy(&var_124, eax_16, 0x20)
                                float var_32c_12 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                unimplemented  {fstp dword [esp+0x14], st0}
                                unimplemented  {fld st0, dword [esp+0x14]}
                                unimplemented  {fld st0, qword [0x8a59b8]}
                                unimplemented  {fsub st0, st2}
                                float var_32c_13 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                unimplemented  {fstp dword [esp+0x14], st0}
                                unimplemented  {fdiv st0, dword [esp+0x14]}
                                float var_32c_14 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                unimplemented  {fstp dword [esp+0x14], st0}
                                unimplemented  {fldz }
                                unimplemented  {fld st0, dword [esp+0x14]}
                                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                bool c0_8 =
                                    unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                                bool c2_8 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                    unimplemented  {fcom st0, st1})
                                bool c3_8 =
                                    unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                                eax_16.w = (c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa
                                    | (c3_8 ? 1 : 0) << 0xe | ((top_21 - 2) & 7) << 0xb
                                bool p_7 = unimplemented  {test ah, 0x41}
                                int16_t top_78
                                
                                if (p_7)
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fld1 }
                                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                    bool c0_9 =
                                        unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                                    bool c2_9 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                        unimplemented  {fcom st0, st1})
                                    bool c3_9 = unimplemented  {fcom st0, st1}
                                        f== unimplemented  {fcom st0, st1}
                                    eax_16.w = (c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa
                                        | (c3_9 ? 1 : 0) << 0xe | ((top_21 - 2) & 7) << 0xb
                                    bool p_8 = unimplemented  {test ah, 0x41}
                                    
                                    if (p_8)
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fld st0, st0}
                                        unimplemented  {fld st0, qword [0x8a53e8]}
                                        unimplemented  {fmul st2, st0}
                                        unimplemented  {fld st0, qword [0x8a5388]}
                                        unimplemented  {fld st0, st0}
                                        unimplemented  {fsubrp st4, st0}
                                        unimplemented  {fsubrp st4, st0}
                                        unimplemented  {fld st0, st2}
                                        unimplemented  {fmulp st3, st0}
                                        unimplemented  {fmulp st3, st0}
                                        unimplemented  {fxch st0, st3}
                                        unimplemented  {fxch st0, st3}
                                        unimplemented  {fmulp st2, st0}
                                        unimplemented  {fmulp st2, st0}
                                        unimplemented  {fxch st0, st1}
                                        unimplemented  {fxch st0, st1}
                                        float var_32c_15 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                        unimplemented  {fstp dword [esp+0x14], st0}
                                        unimplemented  {fld st0, dword [esp+0x14]}
                                        unimplemented  {fld st0, st0}
                                        unimplemented  {fxch st0, st1}
                                        unimplemented  {fxch st0, st1}
                                        unimplemented  {fmulp st2, st0}
                                        unimplemented  {fmulp st2, st0}
                                        unimplemented  {fxch st0, st2}
                                        unimplemented  {fxch st0, st2}
                                        unimplemented  {fsubrp st1, st0}
                                        unimplemented  {fsubrp st1, st0}
                                        unimplemented  {fld st0, st1}
                                        unimplemented  {fmulp st2, st0}
                                        unimplemented  {fmulp st2, st0}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        float var_32c_16 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                        unimplemented  {fstp dword [esp+0x14], st0}
                                        unimplemented  {fld1 }
                                        unimplemented  {fsub st0, st1}
                                        unimplemented  {fmul st0, dword [esp+0x14]}
                                        unimplemented  {faddp st1, st0}
                                        unimplemented  {faddp st1, st0}
                                        top_78 = top_21
                                    else
                                        unimplemented  {fstp st2, st0}
                                        unimplemented  {fstp st2, st0}
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fstp st0, st0}
                                        top_78 = top_21
                                else
                                    unimplemented  {fstp st2, st0}
                                    unimplemented  {fstp st2, st0}
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fstp st1, st0}
                                    top_78 = top_21
                                
                                float var_32c_17 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                unimplemented  {fstp dword [esp+0x14], st0}
                                int32_t var_344_4 = ecx_13
                                unimplemented  {fld st0, dword [esp+0x18]}
                                float var_344_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                eax_14 =
                                    sub_466080(var_328_1 + 0x2c, edx_5, &var_124, &var_210, var_344_5)
                                unimplemented  {fld st0, dword [0x8a53a8]}
                                void var_250
                                __builtin_memcpy(&var_250, eax_14, 0x20)
                                __builtin_memcpy(var_328_1 + 0xc, &var_250, 0x20)
                                long double temp7_1 = fconvert.t(*(var_328_1 + 0x20))
                                unimplemented  {fcomp st0, dword [ebx+0x20]} f- temp7_1
                                bool c0_10 = unimplemented  {fcomp st0, dword [ebx+0x20]} f< temp7_1
                                bool c2_10 = is_unordered.t(
                                    unimplemented  {fcomp st0, dword [ebx+0x20]}, temp7_1)
                                bool c3_10 = unimplemented  {fcomp st0, dword [ebx+0x20]} f== temp7_1
                                unimplemented  {fcomp st0, dword [ebx+0x20]}
                                top_64 = top_78 + 1
                                eax_14.w = (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa
                                    | (c3_10 ? 1 : 0) << 0xe | (top_64 & 7) << 0xb
                                
                                if ((eax_14:1.b & 0x41) != 0)
                                    sub_4c5870("gfx->transform.t.x < 10000", &data_83f3d3, 
                                        "..\code\RFTGClient.cpp", 0x381e, "RFTGGfxUpdate")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                    
                    ebx_1 = var_328_1
                else
                    int32_t esi_1 = *(ecx_4 + 0x74)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    int32_t eax_9
                    
                    if (esi_1 != 0xffffffff)
                        eax_9 = *sub_46b2b0(esi_1)
                        ecx_4 = data_27e7a40
                    else
                        eax_9 = eax_8 | esi_1
                    
                    int32_t ecx_9 = *(ecx_4 + 0x74)
                    int32_t var_150 = eax_9
                    int32_t var_14c_1 = 0xe
                    int32_t var_148_1 = 0xffffffff
                    float var_290[0x8]
                    int32_t eax_12
                    int32_t edx_3
                    eax_12, edx_3 = sub_436c20(&var_150, edi_1, ecx_9, &var_290, &var_150, 0)
                    unimplemented  {fld1 }
                    unimplemented  {fldz }
                    ebx_1 = var_328_1
                    unimplemented  {fsub st1, st0}
                    unimplemented  {fld st0, dword [ebx+0x78]}
                    float var_144[0x8]
                    int32_t ecx_10 = __builtin_memcpy(&var_144, eax_12, 0x20)
                    unimplemented  {fsub st0, st1}
                    float var_32c_6 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    unimplemented  {fld st0, dword [esp+0x14]}
                    unimplemented  {fxch st0, st2}
                    unimplemented  {fxch st0, st2}
                    float var_32c_7 = fconvert.s(unimplemented  {fst dword [esp+0x14], st0})
                    unimplemented  {fld st0, dword [esp+0x14]}
                    unimplemented  {fdivp st3, st0}
                    unimplemented  {fdivp st3, st0}
                    unimplemented  {fxch st0, st2}
                    unimplemented  {fxch st0, st2}
                    float var_32c_8 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    unimplemented  {fldz }
                    unimplemented  {fld st0, dword [esp+0x14]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_5 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_5 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_5 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    eax_12.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                        | ((top_21 - 3) & 7) << 0xb
                    bool p_5 = unimplemented  {test ah, 0x41}
                    int16_t top_37
                    
                    if (p_5)
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fld1 }
                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                        bool c0_6 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                        bool c2_6 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                            unimplemented  {fcom st0, st1})
                        bool c3_6 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                        eax_12.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                            | ((top_21 - 3) & 7) << 0xb
                        bool p_6 = unimplemented  {test ah, 0x41}
                        
                        if (p_6)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fld st0, st0}
                            unimplemented  {fld st0, qword [0x8a53e8]}
                            unimplemented  {fmul st2, st0}
                            unimplemented  {fld st0, qword [0x8a5388]}
                            unimplemented  {fld st0, st0}
                            unimplemented  {fsubrp st4, st0}
                            unimplemented  {fsubrp st4, st0}
                            unimplemented  {fld st0, st2}
                            unimplemented  {fmulp st3, st0}
                            unimplemented  {fmulp st3, st0}
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fxch st0, st1}
                            unimplemented  {fxch st0, st1}
                            float var_32c_9 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                            unimplemented  {fstp dword [esp+0x14], st0}
                            unimplemented  {fld st0, dword [esp+0x14]}
                            unimplemented  {fld st0, st0}
                            unimplemented  {fxch st0, st1}
                            unimplemented  {fxch st0, st1}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fxch st0, st2}
                            unimplemented  {fxch st0, st2}
                            unimplemented  {fsubrp st1, st0}
                            unimplemented  {fsubrp st1, st0}
                            unimplemented  {fld st0, st1}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fmulp st1, st0}
                            unimplemented  {fmulp st1, st0}
                            float var_32c_10 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                            unimplemented  {fstp dword [esp+0x14], st0}
                            unimplemented  {fld st0, dword [esp+0x14]}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {faddp st1, st0}
                            unimplemented  {faddp st1, st0}
                            int16_t top_58
                            top_37 = top_58 + 2
                        else
                            unimplemented  {fstp st1, st0}
                            unimplemented  {fstp st1, st0}
                            unimplemented  {fstp st2, st0}
                            unimplemented  {fstp st2, st0}
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            top_37 = top_21
                    else
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st2, st0}
                        unimplemented  {fstp st2, st0}
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top_37 = top_21
                    
                    float var_32c_11 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    int32_t var_344_2 = ecx_10
                    unimplemented  {fld st0, dword [esp+0x18]}
                    float var_344_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top_64 = top_37 + 1
                    void var_270
                    __builtin_memcpy(&var_270, 
                        sub_466080(ebx_1 + 0x2c, edx_3, &var_144, &var_290, var_344_3), 0x20)
                    __builtin_memcpy(ebx_1 + 0xc, &var_270, 0x20)
                
                if (*(ebx_1 + 0x94) == 2)
                    unimplemented  {fld1 }
                    long double temp5_1 = fconvert.t(*(ebx_1 + 0x78))
                    unimplemented  {fcomp st0, dword [ebx+0x78]} f- temp5_1
                    bool c0_22 = unimplemented  {fcomp st0, dword [ebx+0x78]} f< temp5_1
                    bool c2_22 = is_unordered.t(unimplemented  {fcomp st0, dword [ebx+0x78]}, temp5_1)
                    bool c3_22 = unimplemented  {fcomp st0, dword [ebx+0x78]} f== temp5_1
                    unimplemented  {fcomp st0, dword [ebx+0x78]}
                    eax_14.w = (c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
                        | (top_64 & 7) << 0xb
                    bool p_17 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_17))
                        *(ebx_1 + 0x94) = 0
                
                uint32_t eax_32 = data_27e7fcc
                int32_t ecx_22 = *(ebx_1 + 0xa8)
                
                if (eax_32 == 0)
                    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, 
                        "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* edx_15 = *(eax_32 + 0x30)
                
                if (ecx_22 != 0)
                    eax_32 = zx.d(ecx_22.w)
                    
                    if (eax_32 u< *(edx_15 + 4))
                        eax_32 = eax_32 * 0x7c + *edx_15
                        
                        if (*(eax_32 + 0x78) == ecx_22)
                            int32_t var_320_1 = 0
                            void* ecx_23 = *(data_27e7a40 + 0x548)
                            int32_t var_31c_1 = 0
                            
                            if (*(ecx_23 + 0xbfe4) != 0 && *(ecx_23 + 0x43898) == 0
                                    && *(ecx_23 + 0xbfe7) == 0 && *(ecx_23 + 0xbfe5) != 0)
                                void* eax_34
                                eax_34.b = *(ecx_23 + 0xbfd0) == *(ebx_1 + 0xac)
                                
                                if (eax_34.b != 0)
                                    unimplemented  {fld st0, dword [ecx+0xbfdc]}
                                    unimplemented  {fsub st0, dword [ecx+0xbfd4]}
                                    float var_318_1 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                                    unimplemented  {fstp dword [esp+0x28], st0}
                                    unimplemented  {fld st0, dword [ecx+0xbfe0]}
                                    float var_320_2 = var_318_1
                                    unimplemented  {fsub st0, dword [ecx+0xbfd8]}
                                    float var_314_1 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
                                    unimplemented  {fstp dword [esp+0x2c], st0}
                                    float var_31c_2 = var_314_1
                            
                            unimplemented  {fld st0, dword [ebx+0x20]}
                            float var_2f8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
                            unimplemented  {fstp dword [esp+0x48], st0}
                            unimplemented  {fld st0, dword [ebx+0x24]}
                            float var_2f4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4c], st0})
                            unimplemented  {fstp dword [esp+0x4c], st0}
                            unimplemented  {fld st0, dword [esp+0x20]}
                            unimplemented  {fadd dword [esp+0x48]}
                            float var_310 = fconvert.s(unimplemented  {fstp dword [esp+0x30], st0})
                            unimplemented  {fstp dword [esp+0x30], st0}
                            unimplemented  {fld st0, dword [esp+0x24]}
                            unimplemented  {fadd dword [esp+0x4c]}
                            float var_30c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x34], st0})
                            unimplemented  {fstp dword [esp+0x34], st0}
                            unimplemented  {fld st0, dword [esp+0x30]}
                            float var_308_1 = fconvert.s(unimplemented  {fstp dword [esp+0x38], st0})
                            unimplemented  {fstp dword [esp+0x38], st0}
                            unimplemented  {fld st0, dword [esp+0x34]}
                            *(eax_32 + 0x40) = var_308_1
                            float var_304_1 = fconvert.s(unimplemented  {fstp dword [esp+0x3c], st0})
                            unimplemented  {fstp dword [esp+0x3c], st0}
                            unimplemented  {fldz }
                            *(eax_32 + 0x44) = var_304_1
                            float var_300_1 = fconvert.s(unimplemented  {fstp dword [esp+0x40], st0})
                            unimplemented  {fstp dword [esp+0x40], st0}
                            *(eax_32 + 0x48) = var_300_1
                            unimplemented  {fld st0, dword [ebx+0xc]}
                            *(eax_32 + 0x2c) = fconvert.s(unimplemented  {fstp dword [esi+0x2c], st0})
                            unimplemented  {fstp dword [esi+0x2c], st0}
                            float var_344_10 = var_300_1
                            unimplemented  {fld st0, dword [0x8c4d34]}
                            float var_344_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            sub_4eed90(eax_32, var_344_11)
                            top_64 -= 1
                            unimplemented  {call 0x4eed90}
                
                unimplemented  {fld st0, dword [ebx+0x78]}
                unimplemented  {fld1 }
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_23 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_23 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_23 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                top = top_64
                eax_32.w = (c0_23 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa | (c3_23 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_18 = unimplemented  {test ah, 0x44}
                
                if (p_18)
                    unimplemented  {fldz }
                    long double temp8_1 = fconvert.t(*(ebx_1 + 0xc))
                    unimplemented  {fcomp st0, dword [ebx+0xc]} f- temp8_1
                    bool c0_24 = unimplemented  {fcomp st0, dword [ebx+0xc]} f< temp8_1
                    bool c2_24 = is_unordered.t(unimplemented  {fcomp st0, dword [ebx+0xc]}, temp8_1)
                    bool c3_24 = unimplemented  {fcomp st0, dword [ebx+0xc]} f== temp8_1
                    unimplemented  {fcomp st0, dword [ebx+0xc]}
                    eax_32.w = (c0_24 ? 1 : 0) << 8 | (c2_24 ? 1 : 0) << 0xa | (c3_24 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    
                    if ((eax_32:1.b & 0x41) != 0)
                        break
                    
                    unimplemented  {fld st0, dword [ebx+0x78]}
                    int32_t var_344_12 = *(ebx_1 + 0x60)
                    int32_t var_348_8 = *(ebx_1 + 0x5c)
                    int32_t var_34c_8 = *(ebx_1 + 0x58)
                    int32_t var_354
                    var_354.q = fconvert.d(unimplemented  {fstp qword [esp+0x8], st0})
                    unimplemented  {fstp qword [esp+0x8], st0}
                    unimplemented  {fld st0, dword [ebx+0xc]}
                    double var_35c_1 = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    int32_t var_360_1 = *ebx_1
                    sub_4c57f0("invalid transform (type:%d) (s:%f) (guiT:%f) (dest:%d %d %d)")
                    break
                
                if (*(ebx_1 + 0x9a) != 0 || *(ebx_1 + 0x9b) != 0)
                    eax_32 = *(ebx_1 + 0x74)
                
                if ((*(ebx_1 + 0x9a) == 0 && *(ebx_1 + 0x9b) == 0) || eax_32 == 1 || eax_32 == 5
                        || eax_32 == 7 || eax_32 == 3)
                    int32_t esi_19 = *(ebx_1 + 0x58)
                    *(ebx_1 + 0x9b) = 1
                    int32_t esi_20
                    
                    if (esi_19 != 0xffffffff)
                        void* ecx_26 = *(data_27e7a40 + 0x548)
                        int32_t eax_37 = 0
                        int32_t* edx_19 = ecx_26 + 0x218
                        
                        while (true)
                            if (ecx_26 == 0)
                                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                    "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            if (eax_37 s>= sx.d(*(*(ecx_26 + 0x45844) + 0x458)))
                                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x2e0, 
                                    "PlayerSeatToWho")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            if (*edx_19 == esi_19)
                                eax_32 = eax_37 * 0x1f98
                                esi_20 = *(eax_32 + ecx_26 + 0x21c)
                                break
                            
                            eax_37 += 1
                            edx_19 = &edx_19[0x7e6]
                    else
                        esi_20 = esi_19
                    
                    if (*(ebx_1 + 0x5c) == 2)
                        if (esi_20 != 0xffffffff)
                            eax_32 = *sub_46b2b0(esi_20)
                        else
                            eax_32 |= esi_20
                        
                        *((eax_32 << 2) + &data_c020d8) += 1
                        
                        if (*(ebx_1 + 0x74) == 7)
                            *(ebx_1 + 0x74) = 8
                    
                    if (*(ebx_1 + 0x5c) == 0xb)
                        if (esi_20 != 0xffffffff)
                            eax_32 = *sub_46b2b0(esi_20)
                        else
                            eax_32 |= esi_20
                        
                        *((eax_32 << 2) + &data_c020e8) += 1
                        
                        if (*(ebx_1 + 0x70) == 0)
                            sub_4c5870("gfx->destDestroy", &data_83f3d3, "..\code\RFTGClient.cpp", 
                                0x3867, "RFTGGfxUpdate")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                    
                    if (*(ebx_1 + 0x5c) == 5 && *(ebx_1 + 0x74) != 4)
                        *(ebx_1 + 0x74) = 4
                        data_c02120 += 1
                    
                    if (*(ebx_1 + 0x5c) == 0xc)
                        if (esi_20 != 0xffffffff)
                            eax_32 = *sub_46b2b0(esi_20)
                        else
                            eax_32 |= esi_20
                        
                        *((eax_32 << 2) + &data_c020f8) += 1
                        
                        if (*(ebx_1 + 0x70) == 0)
                            sub_4c5870("gfx->destDestroy", &data_83f3d3, "..\code\RFTGClient.cpp", 
                                0x3872, "RFTGGfxUpdate")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                    
                    if (*(ebx_1 + 0x5c) == 0x10)
                        data_c02120 += 1
                        *(ebx_1 + 0x74) = 4
                    
                    if (*(ebx_1 + 0x5c) == 0x11 && *(ebx_1 + 0x74) == 1)
                        *(ebx_1 + 0x74) = 2
                        data_c020d4 += 1
                    
                    if (*(ebx_1 + 0x5c) == 3 && *(ebx_1 + 0x74) == 5)
                        *(ebx_1 + 0x74) = 6
                        int32_t eax_42
                        
                        if (esi_20 != 0xffffffff)
                            eax_42 = *sub_46b2b0(esi_20)
                        else
                            eax_42 = eax_32 | esi_20
                        
                        *((eax_42 << 2) + &data_c02108) += 1
                    
                    if (*(ebx_1 + 0x5c) == 1 && *(ebx_1 + 0x74) != 2)
                        *(ebx_1 + 0x74) = 2
                        data_c020d4 += 1
                        
                        if (*(ebx_1 + 0x70) == 0)
                            sub_4c5870("gfx->destDestroy", &data_83f3d3, "..\code\RFTGClient.cpp", 
                                0x388a, "RFTGGfxUpdate")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                
                bool cond:4_1 = *(ebx_1 + 0x70) == 0
                *(ebx_1 + 0x9c) = 1
                *(ebx_1 + 0x99) = 1
                
                if (cond:4_1)
                    break
                
                void* eax_45 = *(data_27e7a40 + 0x548)
                int32_t ecx_27 = *(eax_45 + 0x4396c)
                *(eax_45 + 0x4396c) = zx.d(*(ebx_1 + 0xac))
                *(ebx_1 + 0xac) = ecx_27
                *(eax_45 + 0x43970) -= 1
                break
            
            edi_1 += 0xb0
            var_328_1 = edi_1
            
            if (edi_1 u>= result)
                goto label_439fd6
    
    label_439fd6:
    sub_5a6aba(eax_1 ^ &var_334)
    return result
}

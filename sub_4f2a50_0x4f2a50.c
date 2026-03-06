// 函数名称: sub_4f2a50
// 虚拟地址: 0x4f2a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4f2a50(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f7c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 0
    int32_t var_8_1 = 0
    int32_t* ebx = *arg1
    arg1 = ebx
    int32_t i_1 = 0
    
    if (ebx[1] s> 0)
        long double x87_r7_1 = fconvert.t(0.00999999978f)
        int16_t top_1 = 0
        
        do
            int32_t* esi_3 = i * 0x134 + *ebx
            sub_5abfc0(&esi_3[3], 0, 0x71)
            sub_5abfc0(esi_3 + 0x7d, 0, 0x71)
            void* edx_2 = data_315f704
            esi_3[0x3d] = 1
            esi_3[0x3c] = 1
            esi_3[0x3e] = fconvert.s(x87_r7_1)
            esi_3[0x3f] = fconvert.s(x87_r7_1)
            esi_3[0x4c] = 0
            sub_4fecf0(&esi_3[0x42], edx_2, &data_8c35ec)
            sub_4fecf0(&esi_3[0x44], data_315f704, &data_8c35ec)
            int32_t* edx_4 = sub_4fecf0(&esi_3[0x46], data_315f704, &data_8c35ec)
            int32_t j_1 = 0
            
            if (*esi_3 s> 0)
                int32_t j
                
                do
                    int32_t j_2 = j_1
                    int32_t* ebx_1 = esi_3[1] + (j_2 << 3)
                    int32_t eax_9 = *ebx_1
                    
                    if (eax_9 u>= 0x71)
                        sub_4c5870("attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES", 
                            &data_83f3d3, "Particle.cpp", 0xada, "ParticleReimport")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t* edi = ebx_1[1]
                    
                    if (eax_9 == 0x23 || eax_9 == 0x24 || eax_9 == 0x25 || eax_9 == 0x26
                            || eax_9 == 0x27 || eax_9 == 0x28 || eax_9 == 0x3c || eax_9 == 0x29
                            || eax_9 == 0x2a || eax_9 == 0x2b || eax_9 == 0x2c || eax_9 == 0x2d
                            || eax_9 == 0x2e || eax_9 == 0x2f || eax_9 == 0x30 || eax_9 == 0x31
                            || eax_9 == 0x37 || eax_9 == 0x36 || eax_9 == 0x32 || eax_9 == 0x33
                            || eax_9 == 0x34 || eax_9 == 0x35 || eax_9 == 0x41 || eax_9 == 0x50
                            || eax_9 == 0x38 || eax_9 == 0x4b || eax_9 == 0x4c || eax_9 == 9
                            || eax_9 == 0x68 || eax_9 == 0x67 || eax_9 == 0x69 || eax_9 == 0x6b
                            || eax_9 == 0x6a || eax_9 == 0x17)
                        int32_t* var_3c_1 = edi
                        int32_t var_40_4 = eax_9
                        j_2, edx_4 = sub_530b60(&esi_3[0x42], edx_4, j_2, &data_8c35ec)
                    
                    int32_t eax_11 = *ebx_1
                    
                    if (eax_11 == 0x11 || eax_11 == 0x12 || eax_11 == 0x14 || eax_11 == 0xf
                            || eax_11 == 0x10 || eax_11 == 0x13)
                        void* edx_5 = ebx_1[1]
                        void* var_3c_2 = edx_5
                        int32_t var_40_5 = eax_11
                        j_2, edx_4 = sub_530b60(&esi_3[0x44], edx_5, j_2, &data_8c35ec)
                    
                    int32_t eax_13 = *ebx_1
                    
                    if (eax_13 == 0x63 || eax_13 == 0x3d || eax_13 == 0x3e || eax_13 == 0x3f
                            || eax_13 == 0x40 || eax_13 == 0x41 || eax_13 == 0x52 || eax_13 == 0x42
                            || eax_13 == 0x43 || eax_13 == 0x44 || eax_13 == 0x45 || eax_13 == 0x46
                            || eax_13 == 0x47 || eax_13 == 0x48 || eax_13 == 0x49 || eax_13 == 0x4a
                            || eax_13 == 0x1f || eax_13 == 0x20 || eax_13 == 0x21 || eax_13 == 0x51
                            || eax_13 == 0x39 || eax_13 == 0x3a || eax_13 == 0x3b || eax_13 == 0x53)
                        int32_t ecx_5 = ebx_1[1]
                        int32_t var_3c_3 = ecx_5
                        int32_t var_40_6 = eax_13
                        j_2, edx_4 = sub_530b60(&esi_3[0x46], edx_4, ecx_5, &data_8c35ec)
                    
                    int32_t eax_15 = *ebx_1
                    
                    if (eax_15 == 0xc)
                        unimplemented  {fldz }
                        int32_t j_10 = j_2
                        float var_3c_4 = fconvert.s(unimplemented  {fst dword [esp], st0})
                        int32_t j_3 = j_2
                        float var_44_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t ecx_6 = sub_553af0(edi, var_44_6, 0f, var_3c_4, eax_2)
                        arg1[2] = fconvert.s(unimplemented  {fstp dword [edx+0x8], st0})
                        unimplemented  {fstp dword [edx+0x8], st0}
                        unimplemented  {fld1 }
                        float var_3c_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        unimplemented  {fldz }
                        int32_t var_44_7 = ecx_6
                        float var_44_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        edx_4 = sub_553af0(edi, var_44_8, 0f, var_3c_5)
                        arg1[5] = fconvert.s(unimplemented  {fstp dword [eax+0x14], st0})
                        unimplemented  {fstp dword [eax+0x14], st0}
                        top_1 += 6
                    else if (eax_15 == 0xd)
                        unimplemented  {fldz }
                        int32_t j_11 = j_2
                        float var_3c_6 = fconvert.s(unimplemented  {fst dword [esp], st0})
                        int32_t j_4 = j_2
                        float var_44_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_553af0(edi, var_44_9, 0f, var_3c_6, eax_2)
                        arg1[3] = fconvert.s(unimplemented  {fstp dword [ecx+0xc], st0})
                        unimplemented  {fstp dword [ecx+0xc], st0}
                        unimplemented  {fld1 }
                        float var_3c_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        unimplemented  {fldz }
                        int32_t* var_44_10 = arg1
                        float var_44_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_553af0(edi, var_44_11, 0f, var_3c_7)
                        edx_4 = arg1
                        edx_4[6] = fconvert.s(unimplemented  {fstp dword [edx+0x18], st0})
                        unimplemented  {fstp dword [edx+0x18], st0}
                        top_1 += 6
                    else if (eax_15 == 0xe)
                        unimplemented  {fldz }
                        int32_t j_12 = j_2
                        float var_3c_8 = fconvert.s(unimplemented  {fst dword [esp], st0})
                        int32_t j_5 = j_2
                        float var_44_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t ecx_8 = sub_553af0(edi, var_44_12, 0f, var_3c_8, eax_2)
                        arg1[4] = fconvert.s(unimplemented  {fstp dword [eax+0x10], st0})
                        unimplemented  {fstp dword [eax+0x10], st0}
                        unimplemented  {fld1 }
                        float var_3c_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        unimplemented  {fldz }
                        int32_t var_44_13 = ecx_8
                        float var_44_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        edx_4 = sub_553af0(edi, var_44_14, 0f, var_3c_9)
                        arg1[7] = fconvert.s(unimplemented  {fstp dword [ecx+0x1c], st0})
                        unimplemented  {fstp dword [ecx+0x1c], st0}
                        top_1 += 6
                    else if (eax_15 == 6)
                        unimplemented  {fldz }
                        int32_t j_13 = j_2
                        float var_3c_10 = fconvert.s(unimplemented  {fst dword [esp], st0})
                        int32_t j_6 = j_2
                        float var_44_15 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_553af0(edi, var_44_15, 0f, var_3c_10, eax_2)
                        float var_1c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fldz }
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                        bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                        bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                            unimplemented  {fcom st0, st1})
                        bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                        int32_t eax_25
                        eax_25.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | ((top_1 + 1) & 7) << 0xb
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (p_1)
                            unimplemented  {fadd qword [0x8a5368]}
                        else
                            unimplemented  {fsub st0, qword [0x8a5368]}
                        
                        int32_t eax_26
                        eax_26, edx_4 = sub_685f40()
                        top_1 += 3
                        
                        if (eax_26 s<= 1)
                            eax_26 = 1
                        
                        esi_3[0x3c] = eax_26
                    else if (eax_15 == 7)
                        unimplemented  {fldz }
                        int32_t j_14 = j_2
                        float var_3c_11 = fconvert.s(unimplemented  {fst dword [esp], st0})
                        int32_t j_7 = j_2
                        float var_44_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_553af0(edi, var_44_16, 0f, var_3c_11, eax_2)
                        float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fldz }
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                        bool c0_2 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                        bool c2_2 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                            unimplemented  {fcom st0, st1})
                        bool c3_2 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                        int32_t eax_28
                        eax_28.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                            | ((top_1 + 1) & 7) << 0xb
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        bool p_2 = unimplemented  {test ah, 0x5}
                        
                        if (p_2)
                            unimplemented  {fadd qword [0x8a5368]}
                        else
                            unimplemented  {fsub st0, qword [0x8a5368]}
                        
                        int32_t eax_29
                        eax_29, edx_4 = sub_685f40()
                        top_1 += 3
                        
                        if (eax_29 s<= 1)
                            eax_29 = 1
                        
                        esi_3[0x3d] = eax_29
                    else if (eax_15 == 0x15)
                        unimplemented  {fldz }
                        int32_t j_15 = j_2
                        float var_3c_12 = fconvert.s(unimplemented  {fst dword [esp], st0})
                        int32_t j_8 = j_2
                        float var_44_17 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        edx_4 = sub_553af0(edi, var_44_17, 0f, var_3c_12, eax_2)
                        unimplemented  {fchs }
                        esi_3[0x40] = fconvert.s(unimplemented  {fstp dword [esi+0x100], st0})
                        unimplemented  {fstp dword [esi+0x100], st0}
                        top_1 += 3
                    else if (eax_15 == 0x16)
                        unimplemented  {fldz }
                        int32_t j_16 = j_2
                        float var_3c_13 = fconvert.s(unimplemented  {fst dword [esp], st0})
                        int32_t j_9 = j_2
                        float var_44_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        edx_4 = sub_553af0(edi, var_44_18, 0f, var_3c_13, eax_2)
                        unimplemented  {fchs }
                        esi_3[0x41] = fconvert.s(unimplemented  {fstp dword [esi+0x104], st0})
                        unimplemented  {fstp dword [esi+0x104], st0}
                        top_1 += 3
                    else if (eax_15 == 8)
                        edx_4 = ebx_1[1]
                        esi_3[0x48] = edx_4
                    else if (eax_15 == 0xa)
                        esi_3[0x49] = ebx_1[1]
                    else if (eax_15 == 0xb)
                        esi_3[0x4a] = ebx_1[1]
                    else if (eax_15 == 5)
                        edx_4 = ebx_1[1]
                        esi_3[0x4b] = edx_4
                    else if (eax_15 != 0x55)
                        if (eax_15 != 0x56)
                            if (eax_15 != 0x57)
                                if (eax_15 == 0x58 && ebx_1[1] != 0)
                                    esi_3[0x4c] = 4
                            else if (ebx_1[1] != 0)
                                esi_3[0x4c] = 3
                        else if (ebx_1[1] != 0)
                            esi_3[0x4c] = 2
                    else if (ebx_1[1] != 0)
                        esi_3[0x4c] = 1
                    
                    *(*ebx_1 + esi_3 + 0xc) = 1
                    
                    if (*(sub_531280(*ebx_1, edx_4, &data_8c35ec) + 0x10) == 0xa)
                        edx_4 = *ebx_1
                        *(edx_4 + esi_3 + 0x7d) = ebx_1[1] != 0
                    
                    j = j_1 + 1
                    j_1 = j
                while (j s< *esi_3)
                ebx = arg1
                i = i_1
            
            i += 1
            i_1 = i
        while (i s< ebx[1])
    
    int32_t var_8_2 = 0xffffffff
    
    if (arg2 != 0 && *arg2 != 0)
        if (*(arg2 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp0_1 = *(arg2 - 0xc)
        *(arg2 - 0xc) -= 1
        
        if (temp0_1 == 1)
            void* edx_7 = data_26a44e4
            int32_t esi_5 = *(arg2 - 4) + 0x10
            
            if (edx_7 == 0)
                sub_4f4250()
                edx_7 = data_26a44e4
            
            int32_t eax_39 = 0
            int32_t* edi_2
            
            while (true)
                if (esi_5 s<= 1 << (eax_39.b + 4))
                    edi_2 = edx_7 + eax_39 * 0x14
                    break
                
                eax_39 += 1
                
                if (eax_39 s>= 7)
                    edi_2 = edx_7 + 0x8c
                    break
            
            sub_4f4430(&arg2[0xfffffff0], edi_2, esi_5)
    
    char* result
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

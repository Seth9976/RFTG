// 函数名称: sub_5a1e80
// 虚拟地址: 0x5a1e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a1e80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x44)
    int32_t edx = *(ebx + 0x4c)
    int32_t eax_1 = *(ebx + 4)
    int32_t i_28 = *(ebx + 0x40)
    int32_t edi = *(ebx + 0x90)
    int32_t eax_4 = *(ebx + 0x78) + ((edi * i_28) << 2)
    int32_t edx_2 = *(ebx + 0x58)
    int32_t edx_3 = *(ebx + 8)
    int32_t eax_6
    
    if (arg2 s< 0 || arg2 s>= edx_3)
        eax_6 = sub_5a1420(*(ebx + 0x5c), edx_3, arg2)
    else
        eax_6 = arg2
    
    void* eax_8 = eax_6 * *(ebx + 0xc) + *ebx
    int32_t edx_4 = edi + eax_1
    int32_t edi_1 = neg.d(edi)
    int32_t eax_11 = *(ebx + 0x60) + (edx << 1)
    int32_t var_2c = edi_1
    
    if (*(ebx + 0x5c) != 4 || (arg2 s>= 0 && arg2 s< *(ebx + 8)))
        int32_t mxcsr
        int16_t x87control
        int16_t top
        
        switch (eax_11)
            case 0
                if (edi_1 s< edx_4)
                    long double x87_r7_1 = fconvert.t(255.0)
                    int32_t eax_15 = edi_1 * i_28
                    int32_t var_1c_1 = eax_15
                    void* var_20_1 = eax_4 + (eax_15 << 2)
                    
                    do
                        int32_t eax_16
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_16 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_16 = edi_1
                        
                        void* edx_9 = eax_16 * i_28
                        int32_t i = 0
                        
                        if (i_28 s>= 4)
                            void* ecx_6 = var_20_1
                            
                            do
                                uint32_t ebx_3 = zx.d(*(edx_9 + eax_8 + 1 + i - 1))
                                i += 4
                                ecx_6 += 0x10
                                *(ecx_6 - 0x10) = fconvert.s(float.t(ebx_3) / x87_r7_1)
                                *(ecx_6 - 0xc) =
                                    fconvert.s(float.t(zx.d(*(edx_9 + eax_8 + 1 + i - 4))) / x87_r7_1)
                                *(ecx_6 - 8) =
                                    fconvert.s(float.t(zx.d(*(edx_9 + eax_8 + 1 + i - 3))) / x87_r7_1)
                                *(ecx_6 - 4) =
                                    fconvert.s(float.t(zx.d(*(edx_9 + eax_8 + 1 + i - 2))) / x87_r7_1)
                            while (i s< i_28 - 3)
                        
                        if (i s< i_28)
                            void* ecx_9 = eax_4 + ((var_1c_1 + i) << 2)
                            
                            do
                                int32_t ebx_9 = zx.d(*(edx_9 + eax_8 + i))
                                i += 1
                                ecx_9 += 4
                                *(ecx_9 - 4) = fconvert.s(float.t(ebx_9) / x87_r7_1)
                            while (i s< i_28)
                        
                        var_1c_1 += i_28
                        eax_11 = i_28 << 2
                        var_20_1 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
                    
                    ebx = arg1
                    top = 0
            case 1
                if (edi_1 s< edx_4)
                    int32_t eax_20 = edi_1 * i_28
                    int32_t ebx_11 = *(ebx + 0x48) & 2
                    int32_t var_20_2 = eax_20
                    void* var_28_1 = eax_4 + (eax_20 << 2)
                    float* var_24_1 = eax_4 + ((eax_20 + eax) << 2)
                    
                    do
                        int32_t eax_23
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_23 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_23 = edi_1
                        
                        void* edx_14 = eax_23 * i_28
                        int32_t i_1 = 0
                        void* var_30_2 = edx_14
                        
                        if (i_28 s>= 4)
                            void* ecx_12 = var_28_1
                            
                            do
                                uint32_t ebx_13 = zx.d(*(edx_14 + eax_8 + 1 + i_1 - 1))
                                i_1 += 4
                                ecx_12 += 0x10
                                *(ecx_12 - 0x10) =
                                    fconvert.s(fconvert.t(*((ebx_13 << 2) + &data_8bc0f8)))
                                *(ecx_12 - 0xc) = fconvert.s(fconvert.t(
                                    *((zx.d(*(edx_14 + eax_8 + 1 + i_1 - 4)) << 2) + &data_8bc0f8)))
                                *(ecx_12 - 8) = fconvert.s(fconvert.t(
                                    *((zx.d(*(edx_14 + eax_8 + 1 + i_1 - 3)) << 2) + &data_8bc0f8)))
                                *(ecx_12 - 4) = fconvert.s(fconvert.t(
                                    *((zx.d(*(edx_14 + eax_8 + 1 + i_1 - 2)) << 2) + &data_8bc0f8)))
                            while (i_1 s< i_28 - 3)
                            
                            edx_14 = var_30_2
                        
                        if (i_1 s< i_28)
                            void* ecx_15 = eax_4 + ((var_20_2 + i_1) << 2)
                            
                            do
                                uint32_t edx_16 = zx.d(*(eax_8 + edx_14 + i_1))
                                i_1 += 1
                                ecx_15 += 4
                                *(ecx_15 - 4) = fconvert.s(fconvert.t(*((edx_16 << 2) + &data_8bc0f8)))
                            while (i_1 s< i_28)
                            
                            edx_14 = var_30_2
                        
                        if (ebx_11 == 0)
                            *var_24_1 =
                                fconvert.s(float.t(zx.d(*(edx_14 + eax_8 + eax))) / fconvert.t(255.0))
                        
                        var_20_2 += i_28
                        eax_11 = i_28 << 2
                        var_24_1 += eax_11
                        var_28_1 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
                    
                    ebx = arg1
                    top = 0
            case 2
                if (edi_1 s< edx_4)
                    long double x87_r7_3 = fconvert.t(65535.0)
                    int32_t eax_28 = edi_1 * i_28
                    int32_t var_28_2 = eax_28
                    void* var_24_2 = eax_4 + (eax_28 << 2)
                    
                    do
                        int32_t eax_29
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_29 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_29 = edi_1
                        
                        int32_t eax_32 = eax_29 * i_28
                        int32_t ecx_19 = 0
                        
                        if (i_28 s>= 4)
                            void* ecx_20 = var_24_2
                            int16_t* eax_31 = eax_8 + (eax_32 << 1)
                            int32_t i_23 = ((i_28 - 4) u>> 2) + 1
                            int32_t ebx_21 = i_23 << 2
                            int32_t i_2
                            
                            do
                                uint32_t ebx_22 = zx.d(*eax_31)
                                eax_31 = &eax_31[4]
                                ecx_20 += 0x10
                                i_2 = i_23
                                i_23 -= 1
                                *(ecx_20 - 0x10) = fconvert.s(float.t(ebx_22) / x87_r7_3)
                                *(ecx_20 - 0xc) = fconvert.s(float.t(zx.d(eax_31[-3])) / x87_r7_3)
                                *(ecx_20 - 8) = fconvert.s(float.t(zx.d(eax_31[-2])) / x87_r7_3)
                                *(ecx_20 - 4) = fconvert.s(float.t(zx.d(eax_31[-1])) / x87_r7_3)
                            while (i_2 != 1)
                            ecx_19 = ebx_21
                        
                        if (ecx_19 s< i_28)
                            void* ebx_27 = eax_4 + ((var_28_2 + ecx_19) << 2)
                            int16_t* edx_27 = eax_8 + ((eax_32 + ecx_19) << 1)
                            int32_t i_19 = i_28 - ecx_19
                            int32_t i_3
                            
                            do
                                int32_t ecx_21 = zx.d(*edx_27)
                                edx_27 = &edx_27[1]
                                ebx_27 += 4
                                i_3 = i_19
                                i_19 -= 1
                                *(ebx_27 - 4) = fconvert.s(float.t(ecx_21) / x87_r7_3)
                            while (i_3 != 1)
                        
                        var_28_2 += i_28
                        eax_11 = i_28 << 2
                        var_24_2 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
                    
                    ebx = arg1
                    top = 0
            case 3
                if (edi_1 s< edx_4)
                    int16_t top_1 = 0xffff
                    int32_t eax_36 = *(ebx + 0x48) & 2
                    int32_t eax_38 = edi_1 * i_28
                    void* var_24_3 = eax_4 + (eax_38 << 2)
                    float* var_28_3 = eax_4 + ((eax_38 + eax) << 2)
                    
                    do
                        int32_t eax_41
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_41 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_41 = edi_1
                        
                        int32_t eax_45 = eax_41 * i_28
                        
                        if (i_28 s> 0)
                            void* var_20_4 = var_24_3
                            arg1 = eax_8 + (eax_45 << 1)
                            int32_t i_15 = i_28
                            int32_t i_4
                            
                            do
                                uint32_t var_30_4 = zx.d(*arg1)
                                unimplemented  {fild st0, dword [ebp-0x2c]}
                                unimplemented  {fdiv st0, st1}
                                float var_30_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                                unimplemented  {fstp dword [ebp-0x2c], st0}
                                unimplemented  {fld st0, dword [0x8a55a0]}
                                unimplemented  {fld st0, dword [ebp-0x2c]}
                                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                bool c0_1 =
                                    unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                                bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                    unimplemented  {fcom st0, st1})
                                bool c3_1 =
                                    unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                                void* eax_43
                                eax_43.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa
                                    | (c3_1 ? 1 : 0) << 0xe | ((top_1 - 2) & 7) << 0xb
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                bool p_1 = unimplemented  {test ah, 0x41}
                                int16_t top_7
                                
                                if (p_1)
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fadd qword [0x8a5570]}
                                    unimplemented  {fdiv st0, qword [0x8a5578]}
                                    float var_30_7 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                                    unimplemented  {fstp dword [ebp-0x2c], st0}
                                    unimplemented  {fld st0, dword [ebp-0x2c]}
                                    unimplemented  {fld st0, qword [0x8a5598]}
                                    x87control = sub_686c10(mxcsr, x87control)
                                    float var_30_8 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                                    unimplemented  {fstp dword [ebp-0x2c], st0}
                                    unimplemented  {fld st0, dword [ebp-0x2c]}
                                    float var_30_9 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                                    unimplemented  {fstp dword [ebp-0x2c], st0}
                                    top_7 = top_1 + 1
                                    unimplemented  {fld st0, qword [0x8a5640]}
                                else
                                    unimplemented  {fdiv st0, qword [0x8a5588]}
                                    float var_30_6 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                                    unimplemented  {fstp dword [ebp-0x2c], st0}
                                    top_7 = top_1
                                
                                unimplemented  {fld st0, dword [ebp-0x2c]}
                                arg1 += 2
                                *var_20_4 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                                unimplemented  {fstp dword [eax], st0}
                                top_1 = top_7
                                i_4 = i_15
                                i_15 -= 1
                                var_20_4 += 4
                            while (i_4 != 1)
                        
                        if (eax_36 == 0)
                            arg1 = zx.d(*(eax_8 + ((eax_45 + eax) << 1)))
                            unimplemented  {fild st0, dword [ebp+0x8]}
                            unimplemented  {fdiv st0, st1}
                            *var_28_3 = fconvert.s(unimplemented  {fstp dword [ecx], st0})
                            unimplemented  {fstp dword [ecx], st0}
                        
                        eax_11 = i_28 << 2
                        var_28_3 += eax_11
                        var_24_3 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
                    
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_1 + 1
            case 4
                if (edi_1 s< edx_4)
                    long double x87_r7_5 = fconvert.t(4294967295.0)
                    int32_t eax_49 = edi_1 * i_28
                    int32_t var_28_4 = eax_49
                    void* var_24_4 = eax_4 + (eax_49 << 2)
                    
                    do
                        int32_t eax_51
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_51 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_51 = edi_1
                        
                        int32_t eax_54 = eax_51 * i_28
                        int32_t ecx_28 = 0
                        
                        if (i_28 s>= 4)
                            void* ecx_29 = var_24_4
                            void* eax_53 = eax_8 + (eax_54 << 2)
                            int32_t i_24 = ((i_28 - 4) u>> 2) + 1
                            int32_t ebx_28 = i_24 << 2
                            int32_t i_5
                            
                            do
                                long double x87_r6_28 = float.t(*eax_53)
                                
                                if (*eax_53 s< 0)
                                    x87_r6_28 = x87_r6_28 + fconvert.t(4294967296.0)
                                
                                *ecx_29 = fconvert.s(x87_r6_28 / x87_r7_5)
                                long double x87_r6_30 = float.t(*(eax_53 + 4))
                                
                                if (*(eax_53 + 4) s< 0)
                                    x87_r6_30 = x87_r6_30 + fconvert.t(4294967296.0)
                                
                                *(ecx_29 + 4) = fconvert.s(x87_r6_30 / x87_r7_5)
                                long double x87_r6_32 = float.t(*(eax_53 + 8))
                                
                                if (*(eax_53 + 8) s< 0)
                                    x87_r6_32 = x87_r6_32 + fconvert.t(4294967296.0)
                                
                                *(ecx_29 + 8) = fconvert.s(x87_r6_32 / x87_r7_5)
                                long double x87_r6_34 = float.t(*(eax_53 + 0xc))
                                
                                if (*(eax_53 + 0xc) s< 0)
                                    x87_r6_34 = x87_r6_34 + fconvert.t(4294967296.0)
                                
                                eax_53 += 0x10
                                ecx_29 += 0x10
                                i_5 = i_24
                                i_24 -= 1
                                *(ecx_29 - 4) = fconvert.s(x87_r6_34 / x87_r7_5)
                            while (i_5 != 1)
                            ecx_28 = ebx_28
                        
                        if (ecx_28 s< i_28)
                            void* ebx_34 = eax_4 + ((var_28_4 + ecx_28) << 2)
                            int32_t* edx_41 = eax_8 + ((eax_54 + ecx_28) << 2)
                            int32_t i_20 = i_28 - ecx_28
                            int32_t i_6
                            
                            do
                                long double x87_r6_36 = float.t(*edx_41)
                                
                                if (*edx_41 s< 0)
                                    x87_r6_36 = x87_r6_36 + fconvert.t(4294967296.0)
                                
                                edx_41 = &edx_41[1]
                                ebx_34 += 4
                                i_6 = i_20
                                i_20 -= 1
                                *(ebx_34 - 4) = fconvert.s(x87_r6_36 / x87_r7_5)
                            while (i_6 != 1)
                        
                        var_28_4 += i_28
                        eax_11 = i_28 << 2
                        var_24_4 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
                    
                    ebx = arg1
                    top = 0
            case 5
                if (edi_1 s< edx_4)
                    int16_t top_18 = 0xffff
                    int32_t eax_58 = *(ebx + 0x48) & 2
                    int32_t eax_60 = edi_1 * i_28
                    void* var_24_5 = eax_4 + (eax_60 << 2)
                    float* var_28_5 = eax_4 + ((eax_60 + eax) << 2)
                    
                    do
                        int32_t eax_63
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_63 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_63 = edi_1
                        
                        int32_t eax_67 = eax_63 * i_28
                        
                        if (i_28 s> 0)
                            void* var_30_10 = var_24_5
                            arg1 = eax_8 + (eax_67 << 2)
                            int32_t i_17 = i_28
                            int32_t i_7
                            
                            do
                                unimplemented  {fild st0, dword [ecx]}
                                
                                if (*arg1 s< 0)
                                    unimplemented  {fadd qword [0x8a5650]}
                                
                                unimplemented  {fdiv st0, st1}
                                float var_3c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
                                unimplemented  {fstp dword [ebp-0x38], st0}
                                unimplemented  {fld st0, dword [0x8a55a0]}
                                unimplemented  {fld st0, dword [ebp-0x38]}
                                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                bool c0_2 =
                                    unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                                bool c2_2 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                    unimplemented  {fcom st0, st1})
                                bool c3_2 =
                                    unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                                void* eax_65
                                eax_65.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa
                                    | (c3_2 ? 1 : 0) << 0xe | ((top_18 - 2) & 7) << 0xb
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                bool p_2 = unimplemented  {test ah, 0x41}
                                int16_t top_24
                                
                                if (p_2)
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fstp st1, st0}
                                    unimplemented  {fadd qword [0x8a5570]}
                                    unimplemented  {fdiv st0, qword [0x8a5578]}
                                    float var_3c_4 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
                                    unimplemented  {fstp dword [ebp-0x38], st0}
                                    unimplemented  {fld st0, dword [ebp-0x38]}
                                    unimplemented  {fld st0, qword [0x8a5598]}
                                    x87control = sub_686c10(mxcsr, x87control)
                                    float var_3c_5 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
                                    unimplemented  {fstp dword [ebp-0x38], st0}
                                    unimplemented  {fld st0, dword [ebp-0x38]}
                                    float var_34_13 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                                    unimplemented  {fstp dword [ebp-0x30], st0}
                                    top_24 = top_18 + 1
                                    unimplemented  {fld st0, qword [0x8a5638]}
                                else
                                    unimplemented  {fdiv st0, qword [0x8a5588]}
                                    float var_34_12 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                                    unimplemented  {fstp dword [ebp-0x30], st0}
                                    top_24 = top_18
                                
                                unimplemented  {fld st0, dword [ebp-0x30]}
                                arg1 += 4
                                *var_30_10 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                                unimplemented  {fstp dword [eax], st0}
                                top_18 = top_24
                                i_7 = i_17
                                i_17 -= 1
                                var_30_10 += 4
                            while (i_7 != 1)
                        
                        if (eax_58 == 0)
                            void* eax_69 = *(eax_8 + ((eax_67 + eax) << 2))
                            arg1 = eax_69
                            unimplemented  {fild st0, dword [ebp+0x8]}
                            
                            if (eax_69 s< 0)
                                unimplemented  {fadd qword [0x8a5650]}
                            
                            unimplemented  {fdiv st0, st1}
                            *var_28_5 = fconvert.s(unimplemented  {fstp dword [ecx], st0})
                            unimplemented  {fstp dword [ecx], st0}
                        
                        eax_11 = i_28 << 2
                        var_28_5 += eax_11
                        var_24_5 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
                    
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_18 + 1
            case 6
                if (edi_1 s< edx_4)
                    int32_t eax_71 = edi_1 * i_28
                    int32_t var_28_6 = eax_71
                    float* var_24_6 = eax_4 + (eax_71 << 2)
                    
                    do
                        int32_t eax_73
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_73 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_73 = edi_1
                        
                        int32_t eax_76 = eax_73 * i_28
                        int32_t ebx_35 = 0
                        
                        if (i_28 s>= 4)
                            float* ecx_37 = var_24_6
                            float* eax_75 = eax_8 + (eax_76 << 2)
                            int32_t i_25 = ((i_28 - 4) u>> 2) + 1
                            ebx_35 = i_25 << 2
                            int32_t i_8
                            
                            do
                                long double x87_r7_7 = fconvert.t(*eax_75)
                                eax_75 = &eax_75[4]
                                *ecx_37 = fconvert.s(x87_r7_7)
                                ecx_37 = &ecx_37[4]
                                i_8 = i_25
                                i_25 -= 1
                                ecx_37[-3] = fconvert.s(fconvert.t(eax_75[-3]))
                                ecx_37[-2] = fconvert.s(fconvert.t(eax_75[-2]))
                                ecx_37[-1] = fconvert.s(fconvert.t(eax_75[-1]))
                                top = 0
                            while (i_8 != 1)
                        
                        if (ebx_35 s< i_28)
                            float* edx_53 = eax_4 + ((var_28_6 + ebx_35) << 2)
                            int32_t i_21 = i_28 - ebx_35
                            float* ecx_42 = eax_8 + ((eax_76 + ebx_35) << 2)
                            int32_t i_9
                            
                            do
                                long double x87_r7_11 = fconvert.t(*ecx_42)
                                ecx_42 = &ecx_42[1]
                                *edx_53 = fconvert.s(x87_r7_11)
                                top = 0
                                edx_53 = &edx_53[1]
                                i_9 = i_21
                                i_21 -= 1
                            while (i_9 != 1)
                        
                        var_28_6 += i_28
                        eax_11 = i_28 << 2
                        var_24_6 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
                    
                    ebx = arg1
            case 7
                if (edi_1 s< edx_4)
                    int32_t eax_80 = *(ebx + 0x48) & 2
                    int32_t eax_82 = edi_1 * i_28
                    void* var_24_7 = eax_4 + (eax_82 << 2)
                    float* var_28_7 = eax_4 + ((eax_82 + eax) << 2)
                    
                    do
                        int32_t eax_85
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_1)
                            eax_85 = sub_5a1420(edx_2, eax_1, edi_1)
                        else
                            eax_85 = edi_1
                        
                        int32_t eax_87 = eax_85 * i_28
                        int32_t var_3c_6 = eax_87
                        
                        if (i_28 s> 0)
                            void* var_30_11 = var_24_7
                            arg1 = eax_8 + (eax_87 << 2)
                            int32_t i_18 = i_28
                            int32_t i_10
                            
                            do
                                unimplemented  {fld st0, dword [ecx]}
                                float var_40_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                                unimplemented  {fstp dword [ebp-0x3c], st0}
                                unimplemented  {fld st0, dword [0x8a55a0]}
                                unimplemented  {fld st0, dword [ebp-0x3c]}
                                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                                bool c0_3 =
                                    unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                                bool c2_3 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                                    unimplemented  {fcom st0, st1})
                                bool c3_3 =
                                    unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                                void* eax_88
                                eax_88.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa
                                    | (c3_3 ? 1 : 0) << 0xe | ((top - 2) & 7) << 0xb
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                int16_t top_39 = top - 1
                                bool p_3 = unimplemented  {test ah, 0x41}
                                
                                if (p_3)
                                    unimplemented  {fadd qword [0x8a5570]}
                                    unimplemented  {fdiv st0, qword [0x8a5578]}
                                    float var_40_4 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                                    unimplemented  {fstp dword [ebp-0x3c], st0}
                                    unimplemented  {fld st0, dword [ebp-0x3c]}
                                    unimplemented  {fld st0, qword [0x8a5598]}
                                    x87control = sub_686c10(mxcsr, x87control)
                                    float var_40_5 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                                    unimplemented  {fstp dword [ebp-0x3c], st0}
                                    top_39 += 1
                                    unimplemented  {fld st0, dword [ebp-0x3c]}
                                else
                                    unimplemented  {fdiv st0, qword [0x8a5588]}
                                
                                float var_34_14 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                                unimplemented  {fstp dword [ebp-0x30], st0}
                                unimplemented  {fld st0, dword [ebp-0x30]}
                                arg1 += 4
                                *var_30_11 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                                unimplemented  {fstp dword [eax], st0}
                                top = top_39 + 1
                                i_10 = i_18
                                i_18 -= 1
                                var_30_11 += 4
                            while (i_10 != 1)
                        
                        if (eax_80 == 0)
                            unimplemented  {fld st0, dword [ecx+eax*4]}
                            *var_28_7 = fconvert.s(unimplemented  {fstp dword [edx], st0})
                            unimplemented  {fstp dword [edx], st0}
                        
                        eax_11 = i_28 << 2
                        var_28_7 += eax_11
                        var_24_7 += eax_11
                        edi_1 += 1
                    while (edi_1 s< edx_4)
        
        if ((*(ebx + 0x48) & 1) == 0)
            eax_11 = edx_4
            
            if (var_2c s< eax_11)
                int16_t top_48 = top - 1
                unimplemented  {fld st0, qword [0x8a5648]}
                void* eax_91 = var_2c * i_28
                arg1 = eax_91 + 3
                float* ebx_36 = eax_4 + (eax_91 << 2)
                float* var_30_12 = ebx_36
                float* edx_60 = eax_4 + ((eax_91 + eax) << 2)
                float* var_34_15 = edx_60
                int32_t i_16 = edx_4 - var_2c
                int32_t i_11
                
                do
                    unimplemented  {fld st0, dword [edx]}
                    float var_1c_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                    unimplemented  {fstp dword [ebp-0x18], st0}
                    int16_t top_53
                    
                    if (edx == 3)
                        top_53 = top_48 - 1
                        unimplemented  {fld st0, dword [ebp-0x18]}
                    else
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        unimplemented  {fadd st0, st1}
                        float var_1c_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        top_53 = top_48 - 1
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        *edx_60 = fconvert.s(unimplemented  {fst dword [edx], st0})
                    
                    int32_t j = 0
                    
                    if (i_28 s>= 4)
                        do
                            int32_t ecx_50 = eax
                            
                            if (j != ecx_50)
                                unimplemented  {fld st0, dword [ebx]}
                                unimplemented  {fmul st0, st1}
                                *ebx_36 = fconvert.s(unimplemented  {fstp dword [ebx], st0})
                                unimplemented  {fstp dword [ebx], st0}
                            
                            if (j + 1 != ecx_50)
                                unimplemented  {fld st0, dword [ebx+0x4]}
                                unimplemented  {fmul st0, st1}
                                ebx_36[1] = fconvert.s(unimplemented  {fstp dword [ebx+0x4], st0})
                                unimplemented  {fstp dword [ebx+0x4], st0}
                            
                            if (j + 2 != ecx_50)
                                unimplemented  {fld st0, dword [edx+ecx*4-0x4]}
                                unimplemented  {fmul st0, st1}
                                *(eax_4 + ((arg1 + j) << 2) - 4) =
                                    fconvert.s(unimplemented  {fstp dword [ecx], st0})
                                unimplemented  {fstp dword [ecx], st0}
                                ecx_50 = eax
                            
                            if (j + 3 != ecx_50)
                                unimplemented  {fld st0, dword [edx+ecx*4]}
                                unimplemented  {fmul st0, st1}
                                *(eax_4 + ((arg1 + j) << 2)) =
                                    fconvert.s(unimplemented  {fstp dword [ecx], st0})
                                unimplemented  {fstp dword [ecx], st0}
                            
                            j += 4
                            ebx_36 = &ebx_36[4]
                        while (j s< i_28 - 3)
                        
                        edx_60 = var_34_15
                    
                    if (j s< i_28)
                        float* ecx_57 = eax_4 + ((arg1 + j) << 2) - 0xc
                        
                        do
                            if (j != eax)
                                unimplemented  {fld st0, st0}
                                unimplemented  {fmul st0, dword [ecx]}
                                *ecx_57 = fconvert.s(unimplemented  {fstp dword [ecx], st0})
                                unimplemented  {fstp dword [ecx], st0}
                            
                            j += 1
                            ecx_57 = &ecx_57[1]
                        while (j s< i_28)
                    
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_48 = top_53 + 1
                    arg1 += i_28
                    eax_11 = i_28 << 2
                    edx_60 += eax_11
                    ebx_36 = var_30_12 + eax_11
                    i_11 = i_16
                    i_16 -= 1
                    var_34_15 = edx_60
                    var_30_12 = ebx_36
                while (i_11 != 1)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
        
        if (edx_2 == 4)
            if (var_2c s< 0)
                int32_t ebx_38 = eax_4 + ((var_2c * i_28) << 2)
                int32_t i_26 = neg.d(var_2c)
                int32_t i_12
                
                do
                    if (i_28 s> 0)
                        __builtin_memset(ebx_38, 0, i_28 << 2)
                    
                    ebx_38 += i_28 << 2
                    i_12 = i_26
                    i_26 -= 1
                while (i_12 != 1)
            
            eax_11 = eax_1
            
            if (eax_11 s< edx_4)
                int32_t ebx_39 = eax_4 + ((eax_11 * i_28) << 2)
                int32_t i_27 = edx_4 - eax_11
                int32_t i_13
                
                do
                    if (i_28 s> 0)
                        __builtin_memset(ebx_39, 0, i_28 << 2)
                    
                    eax_11 = i_28 << 2
                    ebx_39 += eax_11
                    i_13 = i_27
                    i_27 -= 1
                while (i_13 != 1)
    else
        eax_11 = edx_4
        
        if (edi_1 s< eax_11)
            int32_t ebx_1 = eax_4 + ((edi_1 * i_28) << 2)
            int32_t i_22 = eax_11 - edi_1
            int32_t eax_13
            int32_t i_14
            
            do
                if (i_28 s> 0)
                    __builtin_memset(ebx_1, 0, i_28 << 2)
                
                eax_13 = i_28 << 2
                ebx_1 += eax_13
                i_14 = i_22
                i_22 -= 1
            while (i_14 != 1)
            return eax_13
    
    return eax_11
}

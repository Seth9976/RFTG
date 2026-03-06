// 函数名称: sub_658d20
// 虚拟地址: 0x658d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_658d20(void* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void* eax = esi[0x10]
    void* ebx = *(eax + 4)
    void* edx = *(eax + 0x68)
    int32_t ecx = *(ebx + 0x1c)
    void* eax_1 = esi[0x1a]
    int32_t ecx_1 = esi[9]
    void* edi_2 = *(ebx + 4) * 4
    __alloca_probe_16(edi_2)
    int32_t __saved_edi
    int32_t* var_54 = &__saved_edi
    int32_t eax_3 = sub_649ad0(esi, edi_2)
    int32_t* eax_4 = sub_649ad0(esi, *(ebx + 4) * 4)
    int32_t* eax_8 = sub_649ad0(esi, *(ebx + 4) * 4)
    float var_3c = fconvert.s(fconvert.t(*(eax_1 + 4)))
    int16_t top = 0
    __alloca_probe_16(*(ebx + 4) * 4)
    int32_t ecx_3 = esi[7]
    int32_t* eax_12 = *(ecx + (ecx_3 << 2) + 0x220)
    int32_t eax_14 = neg.d(ecx_3)
    float eax_19 = ((sbb.d(eax_14, eax_14, ecx_3 != 0) & 2) + *(eax_1 + 8)) * 0x34 + *(edx + 0x38)
    esi[0xa] = ecx_3
    int32_t* var_1c = &__saved_edi
    arg1 = nullptr
    
    if (*(ebx + 4) s> 0)
        int32_t eax_21
        int32_t edx_7
        edx_7:eax_21 = sx.q(ecx_1)
        int32_t eax_25 = ((eax_21 - edx_7) s>> 1) * 4
        int32_t ecx_5 = fconvert.s(fconvert.t(4.0) / float.t(ecx_1)) & 0x7fffffff
        long double x87_r7_3 = float.t(ecx_5)
        
        if (ecx_5 s< 0)
            x87_r7_3 = x87_r7_3 + fconvert.t(4.2949673e+09f)
        
        void* eax_27 = eax_3 - &__saved_edi
        int32_t* var_34_1 = &__saved_edi
        void* var_48_1 = eax_27
        
        while (true)
            void* eax_28 = eax_27 + var_34_1
            float* edi_3 = *(*esi + (arg1 << 2))
            *(eax_28 + eax_4 - eax_3) = sub_649ad0(esi, eax_25)
            *eax_28 = sub_649ad0(esi, eax_25)
            sub_658710(edi_3, edx + 4, ecx, esi[6], esi[7], esi[8])
            sub_657410(**(edx + (esi[7] << 2) + 0xc), edi_3, *eax_28)
            sub_656590(edx + esi[7] * 0xc + 0x14, edi_3)
            int32_t eax_41 = fconvert.s(fconvert.t(*edi_3)) & 0x7fffffff
            long double x87_r7_9 = float.t(eax_41)
            
            if (eax_41 s< 0)
                x87_r7_9 = x87_r7_9 + fconvert.t(4.2949673e+09f)
            
            long double x87_r6_1 = fconvert.t(7.1771142984289327e-07)
            float* edx_15 = var_34_1
            long double x87_r5_1 = fconvert.t(764.6162109375)
            int32_t i = 1
            long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                x87_r7_3 * fconvert.t(7.1771142984289327e-07) - fconvert.t(764.6162109375)))
                + fconvert.t(0.34499999999999997)))
            long double x87_r3_2 = fconvert.t(0.34499999999999997)
            long double x87_r3_4 = fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r7_9 * x87_r6_1 - x87_r5_1)) + x87_r4_1 + x87_r3_2))
            *edi_3 = fconvert.s(x87_r3_4)
            *edx_15 = fconvert.s(x87_r3_4)
            int32_t eax_43
            
            if (ecx_1 - 1 s> 1)
                long double x87_r3_5 = fconvert.t(0.5)
                
                do
                    long double x87_r2_1 = fconvert.t(edi_3[i + 1])
                    long double x87_r1_1 = fconvert.t(edi_3[i])
                    int32_t eax_45 = fconvert.s(x87_r2_1 * x87_r2_1 + x87_r1_1 * x87_r1_1) & 0x7fffffff
                    long double x87_r2_4 = float.t(eax_45)
                    
                    if (eax_45 s< 0)
                        x87_r2_4 = x87_r2_4 + fconvert.t(4.2949673e+09f)
                    
                    long double x87_r2_11 = fconvert.t(fconvert.s(
                        fconvert.t(fconvert.s(x87_r2_4 * x87_r6_1 - x87_r5_1)) * x87_r3_5 + x87_r4_1
                        + x87_r3_2))
                    edi_3[(i + 1) s>> 1] = fconvert.s(x87_r2_11)
                    long double x87_r2_12 = fconvert.t(fconvert.s(x87_r2_11))
                    long double x87_r1_3 = fconvert.t(*edx_15)
                    x87_r1_3 - x87_r2_12
                    eax_43.w = (x87_r1_3 < x87_r2_12 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_3, x87_r2_12) ? 1 : 0) << 0xa
                        | (x87_r1_3 == x87_r2_12 ? 1 : 0) << 0xe | 0x1000
                    bool p_1 = unimplemented  {test ah, 0x5}
                    
                    if (p_1)
                        x87_r3_5 = x87_r2_12
                    else
                        *edx_15 = fconvert.s(x87_r2_12)
                    
                    i += 2
                while (i s< ecx_1 - 1)
            
            long double x87_r7_14 = float.t(0)
            long double temp5_1 = fconvert.t(*edx_15)
            x87_r7_14 - temp5_1
            eax_43.w = (x87_r7_14 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_14, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp5_1 ? 1 : 0) << 0xe | 0x3800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                *edx_15 = fconvert.s(x87_r7_14)
            
            long double x87_r7_15 = fconvert.t(*edx_15)
            long double x87_r6_2 = fconvert.t(var_3c)
            x87_r6_2 - x87_r7_15
            top = 0
            eax_43.w = (x87_r6_2 < x87_r7_15 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_15) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_15 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                var_3c = fconvert.s(fconvert.t(*edx_15))
                top = 0
            
            void* eax_48 = arg1 + 1
            arg1 = eax_48
            var_34_1 = &edx_15[1]
            
            if (eax_48 s>= *(ebx + 4))
                break
            
            eax_27 = var_48_1
    
    int32_t eax_50
    int32_t edx_17
    edx_17:eax_50 = sx.q(ecx_1)
    int32_t eax_52 = (eax_50 - edx_17) s>> 1
    int32_t edi_4 = eax_52 << 2
    void* eax_53 = sub_649ad0(esi, edi_4)
    void* eax_54 = sub_649ad0(esi, edi_4)
    void* eax_55 = nullptr
    arg1 = nullptr
    
    if (*(ebx + 4) s> 0)
        int32_t* edi_5 = eax_8
        int32_t* edx_19 = eax_3 - var_1c
        void* ecx_16 = var_1c - edi_5
        int32_t* var_48_2 = edx_19
        void* var_5c_4 = ecx_16
        
        while (true)
            int32_t ebx_2 = eax_12[eax_55 + 1]
            void* ecx_18 = *(edx_19 + ecx_16 + edi_5)
            void* eax_56 = *(*esi + (eax_55 << 2))
            void* ebx_6 = eax_52 * 4 + eax_56
            esi[0xa] = ecx_3
            int128_t* eax_58 = sub_649ad0(esi, 0x3c)
            *edi_5 = eax_58
            sub_5abfc0(eax_58, 0, 0x3c)
            unimplemented  {fld st0, qword [0x82de98]}
            int32_t ecx_19 = eax_52
            unimplemented  {fld st0, qword [0x825ea0]}
            int16_t top_3 = top - 3
            unimplemented  {fld st0, qword [0x825ea8]}
            int32_t eax_59 = 0
            int32_t var_1c_1 = 0
            
            if (ecx_19 s>= 4)
                void* ecx_20 = ecx_18 + 0xc
                int32_t var_4c_2 = ecx_18 - ebx_6
                int32_t i_6 = ((eax_52 - 4) u>> 2) + 1
                void* eax_60 = ebx_6 + 4
                var_1c_1 = (((eax_52 - 4) u>> 2) + 1) * 4
                int32_t i_1
                
                do
                    unimplemented  {fld st0, dword [ecx-0xc]}
                    float var_10_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
                    unimplemented  {fstp dword [ebp-0xc], st0}
                    int32_t edx_30 = var_10_1 & 0x7fffffff
                    int32_t var_68_4 = edx_30
                    unimplemented  {fild st0, dword [ebp-0x64]}
                    
                    if (edx_30 s< 0)
                        unimplemented  {fadd dword [0x8a5390]}
                    
                    unimplemented  {fmul st0, st1}
                    unimplemented  {fsub st0, st2}
                    float var_68_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                    unimplemented  {fstp dword [ebp-0x64], st0}
                    unimplemented  {fld st0, dword [ebp-0x64]}
                    unimplemented  {fadd st0, st3}
                    *(eax_60 - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                    unimplemented  {fstp dword [eax-0x4], st0}
                    unimplemented  {fld st0, dword [edx+eax]}
                    float var_10_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
                    unimplemented  {fstp dword [ebp-0xc], st0}
                    int32_t edx_32 = var_10_2 & 0x7fffffff
                    int32_t var_68_6 = edx_32
                    unimplemented  {fild st0, dword [ebp-0x64]}
                    
                    if (edx_32 s< 0)
                        unimplemented  {fadd dword [0x8a5390]}
                    
                    unimplemented  {fmul st0, st1}
                    unimplemented  {fsub st0, st2}
                    float var_68_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                    unimplemented  {fstp dword [ebp-0x64], st0}
                    unimplemented  {fld st0, dword [ebp-0x64]}
                    unimplemented  {fadd st0, st3}
                    *eax_60 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                    unimplemented  {fstp dword [eax], st0}
                    unimplemented  {fld st0, dword [ecx-0x4]}
                    float var_10_3 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
                    unimplemented  {fstp dword [ebp-0xc], st0}
                    int32_t edx_34 = var_10_3 & 0x7fffffff
                    int32_t var_68_8 = edx_34
                    unimplemented  {fild st0, dword [ebp-0x64]}
                    
                    if (edx_34 s< 0)
                        unimplemented  {fadd dword [0x8a5390]}
                    
                    unimplemented  {fmul st0, st1}
                    unimplemented  {fsub st0, st2}
                    float var_68_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                    unimplemented  {fstp dword [ebp-0x64], st0}
                    unimplemented  {fld st0, dword [ebp-0x64]}
                    unimplemented  {fadd st0, st3}
                    *(eax_60 + 4) = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                    unimplemented  {fstp dword [eax+0x4], st0}
                    unimplemented  {fld st0, dword [ecx]}
                    float var_10_4 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
                    unimplemented  {fstp dword [ebp-0xc], st0}
                    int32_t edx_36 = var_10_4 & 0x7fffffff
                    int32_t var_68_10 = edx_36
                    unimplemented  {fild st0, dword [ebp-0x64]}
                    
                    if (edx_36 s< 0)
                        unimplemented  {fadd dword [0x8a5390]}
                    
                    unimplemented  {fmul st0, st1}
                    eax_60 += 0x10
                    ecx_20 += 0x10
                    i_1 = i_6
                    i_6 -= 1
                    unimplemented  {fsub st0, st2}
                    float var_68_11 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                    unimplemented  {fstp dword [ebp-0x64], st0}
                    unimplemented  {fld st0, dword [ebp-0x64]}
                    unimplemented  {fadd st0, st3}
                    *(eax_60 - 8) = fconvert.s(unimplemented  {fstp dword [eax-0x8], st0})
                    unimplemented  {fstp dword [eax-0x8], st0}
                    int16_t top_19
                    top_3 = top_19
                while (i_1 != 1)
                ecx_19 = eax_52
                eax_59 = var_1c_1
            
            if (eax_59 s< ecx_19)
                int32_t i_7 = ecx_19 - var_1c_1
                void* eax_61 = ebx_6 + (eax_59 << 2)
                int32_t var_4c_3 = ecx_18 - ebx_6
                int32_t i_2
                
                do
                    unimplemented  {fld st0, dword [eax+edx]}
                    float var_10_5 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
                    unimplemented  {fstp dword [ebp-0xc], st0}
                    int32_t edx_40 = var_10_5 & 0x7fffffff
                    int32_t var_68_12 = edx_40
                    unimplemented  {fild st0, dword [ebp-0x64]}
                    
                    if (edx_40 s< 0)
                        unimplemented  {fadd dword [0x8a5390]}
                    
                    unimplemented  {fmul st0, st1}
                    eax_61 += 4
                    i_2 = i_7
                    i_7 -= 1
                    unimplemented  {fsub st0, st2}
                    float var_68_13 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                    unimplemented  {fstp dword [ebp-0x64], st0}
                    unimplemented  {fld st0, dword [ebp-0x64]}
                    unimplemented  {fadd st0, st3}
                    *(eax_61 - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                    unimplemented  {fstp dword [eax-0x4], st0}
                while (i_2 != 1)
            
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            sub_64e690(eax_19, ebx_6, eax_53)
            unimplemented  {fld st0, dword [edi+edx]}
            float var_78_4 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
            unimplemented  {fstp dword [esp+0x8], st0}
            unimplemented  {fld st0, dword [ebp-0x38]}
            float var_7c_5 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            sub_64e870(eax_19, eax_56, eax_54, var_7c_5, var_78_4)
            top = top_3 + 2
            unimplemented  {call 0x64e870}
            sub_64e9b0(eax_19, eax_53, eax_54, 1, eax_56, ecx_18, ebx_6)
            int32_t eax_67 = eax_12[ebx_2 + 0x101]
            
            if (*(ecx + (eax_67 << 2) + 0x320) != 1)
                return 0xffffffff
            
            int32_t eax_69 = sub_65c570(edi_5, esi, *(*(edx + 0x30) + (eax_67 << 2)), ebx_6, eax_56)
            unimplemented  {call 0x65c570}
            *(*edi_5 + 0x1c) = eax_69
            
            if (sub_64b8b0(esi) != 0 && *(*edi_5 + 0x1c) != 0)
                sub_64e9b0(eax_19, eax_53, eax_54, 2, eax_56, ecx_18, ebx_6)
                int32_t eax_75 = sub_65c570(edi_5, esi, 
                    *(*(edx + 0x30) + (eax_12[ebx_2 + 0x101] << 2)), ebx_6, eax_56)
                unimplemented  {call 0x65c570}
                *(*edi_5 + 0x38) = eax_75
                sub_64e9b0(eax_19, eax_53, eax_54, 0, eax_56, ecx_18, ebx_6)
                int32_t eax_80 = sub_65c570(edi_5, esi, 
                    *(*(edx + 0x30) + (eax_12[ebx_2 + 0x101] << 2)), ebx_6, eax_56)
                unimplemented  {call 0x65c570}
                **edi_5 = eax_80
                void* var_58_2 = 4
                
                for (int32_t i_3 = 0x10000; i_3 s< 0x70000; )
                    int32_t* ecx_37 = *edi_5
                    int32_t* ecx_40 = var_58_2
                    *(ecx_40 + *edi_5) = sub_65ca30(esi, 
                        *(*(edx + 0x30) + (eax_12[ebx_2 + 0x101] << 2)), *ecx_37, ecx_37[7], i_3 s/ 7)
                    i_3 += 0x10000
                    var_58_2 = &ecx_40[1]
                
                void* var_58_3 = 0x20
                
                for (int32_t i_4 = 0x10000; i_4 s< 0x70000; )
                    void* ecx_42 = *edi_5
                    int32_t* ecx_45 = var_58_3
                    *(ecx_45 + *edi_5) = sub_65ca30(esi, 
                        *(*(edx + 0x30) + (eax_12[ebx_2 + 0x101] << 2)), *(ecx_42 + 0x1c), 
                        *(ecx_42 + 0x38), i_4 s/ 7)
                    i_4 += 0x10000
                    var_58_3 = &ecx_45[1]
            
            void* eax_98 = arg1 + 1
            edi_5 = &edi_5[1]
            arg1 = eax_98
            
            if (eax_98 s>= *(ebx + 4))
                break
            
            eax_55 = arg1
            edx_19 = var_48_2
            ecx_16 = var_5c_4
    
    unimplemented  {fld st0, dword [ebp-0x38]}
    *(eax_1 + 4) = fconvert.s(unimplemented  {fstp dword [edx+0x4], st0})
    unimplemented  {fstp dword [edx+0x4], st0}
    int16_t top_40 = top
    void* eax_101 = *(ebx + 4) * 4
    __alloca_probe_16(eax_101)
    int32_t* edi_6 = &__saved_edi
    int32_t* var_38_8 = &__saved_edi
    __alloca_probe_16(eax_101)
    int32_t* var_3c_1 = &__saved_edi
    int32_t eax_103 = sub_64b8b0(esi)
    int32_t eax_104 = neg.d(eax_103)
    void* i_5 = (sbb.d(eax_104, eax_104, eax_103 != 0) & 0xfffffff9) + 7
    int32_t eax_108 = sub_64b8b0(esi)
    int32_t eax_109 = neg.d(eax_108)
    
    if (i_5 s<= (sbb.d(eax_109, eax_109, eax_108 != 0) & 7) + 7)
        int32_t eax_145
        int32_t eax_146
        
        do
            int32_t* eax_114 = *(eax_1 + (i_5 << 2) + 0xc)
            sub_68b1d0(eax_114, 0, 1)
            sub_68b1d0(eax_114, ecx_3, *(edx + 0x2c))
            
            if (esi[7] != 0)
                sub_68b1d0(eax_114, esi[6], 1)
                sub_68b1d0(eax_114, esi[8], 1)
            
            arg1 = nullptr
            
            if (*(ebx + 4) s> 0)
                int32_t* edi_7 = eax_8
                void* var_4c_4 = &eax_12[1]
                int32_t* ecx_54 = eax_4 - edi_7
                void* eax_119 = var_54 - edi_7
                int32_t* var_68_14 = ecx_54
                
                while (true)
                    int32_t eax_124 = sub_65cae0(eax_114, esi, 
                        *(*(edx + 0x30) + (eax_12[*var_4c_4 + 0x101] << 2)), *(*edi_7 + (i_5 << 2)), 
                        *(ecx_54 + edi_7))
                    var_4c_4 += 4
                    *(eax_119 + edi_7) = eax_124
                    void* eax_126 = arg1 + 1
                    edi_7 = &edi_7[1]
                    arg1 = eax_126
                    
                    if (eax_126 s>= *(ebx + 4))
                        break
                    
                    ecx_54 = var_68_14
                
                edi_6 = var_38_8
            
            sub_64f290(i_5, ecx + 0xb34, eax_19, eax_12, eax_3, eax_4, var_54, 
                *(ecx + (((esi[7] + 0x36) * 0xf + i_5) << 2)), *(ebx + 4))
            top_40 -= 1
            unimplemented  {call 0x64f290}
            arg1 = nullptr
            
            if (*eax_12 s> 0)
                void* var_30_3 = &eax_12[0x111]
                void* j
                
                do
                    int32_t eax_135 = *var_30_3
                    int32_t var_48_3 = 0
                    int32_t var_34_4 = eax_135
                    int32_t k_2 = 0
                    
                    if (*(ebx + 4) s> 0)
                        int32_t* eax_136 = eax_4
                        int32_t* var_60_2 = var_3c_1
                        void* ecx_63 = var_54 - eax_136
                        int32_t* var_5c_5 = eax_136
                        void* var_4c_5 = &eax_12[1]
                        int32_t k
                        
                        do
                            if (*var_4c_5 == arg1)
                                *var_60_2 = 0
                                
                                if (*(ecx_63 + eax_136) != 0)
                                    *var_60_2 = 1
                                
                                var_48_3 += 1
                                *(edi_6 - var_3c_1 + var_60_2) = *eax_136
                                eax_136 = var_5c_5
                                var_60_2 = &var_60_2[1]
                            
                            var_4c_5 += 4
                            k = k_2 + 1
                            eax_136 = &eax_136[1]
                            k_2 = k
                            var_5c_5 = eax_136
                        while (k s< *(ebx + 4))
                        eax_135 = var_34_4
                    
                    int32_t eax_139 = (*((&data_825e74)[*(ecx + (eax_135 << 2) + 0x520)] + 0x14))(esi, 
                        *(*(edx + 0x34) + (eax_135 << 2)), edi_6, var_3c_1, var_48_3)
                    int32_t eax_140 = 0
                    int32_t k_1 = 0
                    
                    if (*(ebx + 4) s> 0)
                        void* var_4c_6 = &eax_12[1]
                        
                        do
                            edi_6 = var_38_8
                            
                            if (*var_4c_6 == arg1)
                                edi_6[eax_140] = eax_4[k_1]
                                eax_140 += 1
                            
                            var_4c_6 += 4
                            k_1 += 1
                        while (k_1 s< *(ebx + 4))
                    
                    (*((&data_825e74)[*(ecx + (var_34_4 << 2) + 0x520)] + 0x18))(eax_114, esi, 
                        *(*(edx + 0x34) + (var_34_4 << 2)), edi_6, var_3c_1, eax_140, eax_139, arg1)
                    var_30_3 += 4
                    j = arg1 + 1
                    arg1 = j
                while (j s< *eax_12)
            
            i_5 += 1
            eax_145 = sub_64b8b0(esi)
            eax_146 = neg.d(eax_145)
        while (i_5 s<= (sbb.d(eax_146, eax_146, eax_145 != 0) & 7) + 7)
    
    return 0
}

// 函数名称: sub_510270
// 虚拟地址: 0x510270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_510270(int32_t* arg1, int32_t* arg2, float arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg2
    int32_t* var_b4 = ebx
    int32_t* eax_3
    float edx
    eax_3, edx = sub_50c140(*ebx)
    int32_t* ecx = eax_3
    arg1[0x1e] = fconvert.s(fconvert.t(10000f))
    int16_t top = 0
    arg1[1] = 0xffffffff
    *arg1 = 0
    int32_t eax_5 = 0
    int32_t* var_b8 = ecx
    int32_t var_7c = 0
    
    if (ecx[1] s> 0)
        int32_t var_94_1 = 0
        
        while (true)
            int32_t* edi_2 = *ecx + var_94_1
            int32_t* var_74_1 = edi_2
            int128_t* eax_6
            eax_6, edx = sub_50c830(eax_5, edx, ebx)
            int128_t* ebx_1 = eax_6
            
            if (*(ebx_1 + 0x64) s<= *(ebx_1 + 0x5c))
                eax_6.b = edi_2[0xc].b
            else
                eax_6.b = *(ebx_1 + 0x68)
            
            if (eax_6.b == 0)
                int32_t ecx_2
                
                if (*edi_2 != 2)
                label_51036a:
                    int32_t eax_12 = *edi_2
                    
                    if (eax_12 != 5)
                        ecx_2.b = eax_12 == 2
                        int32_t* eax_17 = ebx_1[0x4b].d
                        edx.b = eax_12 == 2
                        char var_69_1
                        
                        if (eax_17 s<= *(ebx_1 + 0x5c))
                            var_69_1 = 0
                        else
                            eax_17.b = *(ebx_1 + 0x4b4)
                            var_69_1 = eax_17.b
                            
                            if (eax_17.b != 0)
                                eax_17 = arg1
                                unimplemented  {fld st0, dword [0x8a53a8]}
                                eax_17[0x1e] = fconvert.s(unimplemented  {fstp dword [eax+0x78], st0})
                                unimplemented  {fstp dword [eax+0x78], st0}
                                eax_17[1] = 0xffffffff
                                *eax_17 = 0
                        
                        if (ecx_2.b != 0 || edx.b != 0)
                            void var_1b8
                            float var_40[0xa]
                            __builtin_memcpy(&var_40, sub_50c2d0(eax_17, edx, edi_2, &var_1b8, ebx_1), 
                                0x28)
                            float var_9c
                            float* var_2c4_2 = &var_9c
                            float var_100[0xc]
                            void var_68
                            __builtin_memcpy(&var_68, sub_54cb80(&var_100, &var_40), 0x28)
                            int32_t eax_20
                            eax_20, edx = sub_4d7c20(&var_68, var_2c4_2)
                            
                            if (eax_20.b != 0)
                                unimplemented  {fld st0, dword [ebp-0x98]}
                                unimplemented  {fld st0, dword [ecx+0x78]}
                                unimplemented  {fcompp } f- unimplemented  {fcompp }
                                bool c0_2 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                                bool c2_2 =
                                    is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                                bool c3_2 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                                unimplemented  {fcompp }
                                unimplemented  {fcompp }
                                eax_20.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa
                                    | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                
                                if ((eax_20:1.b & 0x41) == 0 && *var_74_1 == 2)
                                    void var_118
                                    int32_t eax_21 = sub_50d7f0(eax_20, ebx_1, var_74_1, &var_118)
                                    top -= 1
                                    unimplemented  {call 0x50d7f0}
                                    void var_190
                                    __builtin_memcpy(&var_190, eax_21, 0x40)
                                    float eax_23
                                    int32_t edx_7
                                    eax_23, edx_7 = sub_50d480(arg3, ebx_1, var_74_1, arg3)
                                    float var_d0
                                    float* var_2bc_7 = &var_d0
                                    int32_t var_cc_1 = edx_7
                                    var_d0 = eax_23
                                    void var_148
                                    int32_t eax_25
                                    eax_25, edx =
                                        sub_4f7860(&var_148, *(ebx_1 + 4), &var_190, var_2bc_7)
                                    int32_t var_2a8
                                    __builtin_memcpy(&var_2a8, eax_25, 0x70)
                                    int32_t ecx_15 = var_2a8
                                    
                                    if (ecx_15 != 0)
                                        int32_t* edx_8
                                        void* edi_5
                                        
                                        if (ecx_15 == 1)
                                            *arg1 = 3
                                            edi_5 = &arg1[2]
                                            edx_8 = arg1
                                        else
                                            if (ecx_15 != 2)
                                                sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x6f7, 
                                                    "FabHitTest")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            edx_8 = arg1
                                            *edx_8 = 4
                                            edi_5 = &edx_8[2]
                                        
                                        unimplemented  {fld st0, dword [ebp-0x98]}
                                        edx_8[0x1e] =
                                            fconvert.s(unimplemented  {fst dword [edx+0x78], st0})
                                        edx_8[1] = var_7c
                                        unimplemented  {fld st0, dword [eax+0xc]}
                                        unimplemented  {fmul st0, st1}
                                        __builtin_memcpy(edi_5, eax_25, 0x70)
                                        float var_c8_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xc4], st0})
                                        unimplemented  {fstp dword [ebp-0xc4], st0}
                                        unimplemented  {fld st0, dword [eax+0x10]}
                                        unimplemented  {fmul st0, st1}
                                        float var_c4_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xc0], st0})
                                        unimplemented  {fstp dword [ebp-0xc0], st0}
                                        unimplemented  {fmul st0, dword [eax+0x14]}
                                        float var_c0_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xbc], st0})
                                        unimplemented  {fstp dword [ebp-0xbc], st0}
                                        unimplemented  {fld st0, dword [eax]}
                                        unimplemented  {fadd dword [ebp-0xc4]}
                                        float var_b0_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xac], st0})
                                        unimplemented  {fstp dword [ebp-0xac], st0}
                                        unimplemented  {fld st0, dword [eax+0x4]}
                                        data_26a44f4 = var_b0_1
                                        unimplemented  {fadd dword [ebp-0xc0]}
                                        float var_ac_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xa8], st0})
                                        unimplemented  {fstp dword [ebp-0xa8], st0}
                                        edx = var_ac_1
                                        unimplemented  {fld st0, dword [eax+0x8]}
                                        data_26a44f8 = edx
                                        unimplemented  {fadd dword [ebp-0xbc]}
                                        float var_a8_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xa4], st0})
                                        unimplemented  {fstp dword [ebp-0xa4], st0}
                                        data_26a44fc = var_a8_1
                            
                            if (var_69_1 != 0)
                                break
                    else
                        int32_t var_8c_1
                        int32_t eax_13
                        int32_t ecx_5
                        
                        if (*(ebx_1 + 0x6c) s<= *(ebx_1 + 0x5c))
                            eax_13 = edi_2[0x20]
                            edx = edi_2[0x1f]
                            ecx_5 = edi_2[0x21]
                            var_8c_1 = eax_13
                        else
                            eax_13 = *(ebx_1 + 0x74)
                            edx = ebx_1[7].d
                            ecx_5 = *(ebx_1 + 0x78)
                            var_8c_1 = eax_13
                        
                        float var_90 = edx
                        int32_t var_98_1 = 0
                        
                        if (edx s> 0)
                            int32_t ecx_10
                            
                            do
                                int32_t var_70_2 = 0
                                
                                if (eax_13 s> 0)
                                    int32_t ecx_8
                                    
                                    do
                                        int32_t ebx_2 = 0
                                        
                                        if (ecx_5 s> 0)
                                            do
                                                int32_t var_18 = var_98_1
                                                int32_t var_14_1 = var_70_2
                                                int32_t var_10_1 = ebx_2
                                                void var_150
                                                edx = sub_510270(&var_150, 
                                                    sub_50c900(var_70_2, ebx_1, edi_2, &var_18), arg3)
                                                int32_t var_238
                                                __builtin_memcpy(&var_238, edx, 0x7c)
                                                
                                                if (var_238 != 0)
                                                    unimplemented  {fld st0, dword [ebp-0x1bc]}
                                                    unimplemented  {fld st0, dword [edi+0x78]}
                                                    unimplemented  {fcompp } f- unimplemented  {fcompp }
                                                    bool c0_1 = unimplemented  {fcompp }
                                                        f< unimplemented  {fcompp }
                                                    bool c2_1 = is_unordered.t(
                                                        unimplemented  {fcompp }, 
                                                        unimplemented  {fcompp })
                                                    bool c3_1 = unimplemented  {fcompp }
                                                        f== unimplemented  {fcompp }
                                                    unimplemented  {fcompp }
                                                    unimplemented  {fcompp }
                                                    float eax_16
                                                    eax_16.w = (c0_1 ? 1 : 0) << 8
                                                        | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                                                        | (top & 7) << 0xb
                                                    
                                                    if ((eax_16:1.b & 0x41) == 0)
                                                        __builtin_memcpy(arg1, edx, 0x7c)
                                                
                                                edi_2 = var_74_1
                                                ebx_2 += 1
                                            while (ebx_2 s< ecx_5)
                                            
                                            eax_13 = var_8c_1
                                        
                                        ecx_8 = var_70_2 + 1
                                        var_70_2 = ecx_8
                                    while (ecx_8 s< eax_13)
                                
                                ecx_10 = var_98_1 + 1
                                var_98_1 = ecx_10
                            while (ecx_10 s< var_90)
                else
                    int32_t* eax_7 = ebx_1[6].d
                    int32_t* var_70_1
                    
                    if (eax_7 == 0)
                        int32_t* edx_1 = edi_2[0x1d]
                        var_70_1 = edx_1
                        eax_7 = edx_1
                    else
                        var_70_1 = eax_7
                    
                    int32_t esi_1 = *(ebx_1 + 4)
                    int32_t* ecx_3
                    
                    if (esi_1 != 0)
                        if (*(sub_4fc3d0(&data_be1cb8, esi_1) + 4) != var_70_1)
                            sub_4f7100(*(ebx_1 + 4))
                            ecx_3 = var_70_1
                        label_51034b:
                            int32_t eax_10 = sub_4f6f00(ecx_3)
                            top -= 1
                            unimplemented  {call 0x4f6f00}
                            *(ebx_1 + 4) = eax_10
                    else if (eax_7 != 0)
                        ecx_3 = eax_7
                        goto label_51034b
                    void* eax_11
                    eax_11, ecx_2, edx = sub_4fc3d0(&data_be1cb8, *(ebx_1 + 4))
                    
                    if (*(eax_11 + 8) == 0)
                        goto label_51036a
            
            ecx = var_b8
            var_94_1 += 0xb8
            eax_5 = var_7c + 1
            var_7c = eax_5
            
            if (eax_5 s>= ecx[1])
                break
            
            ebx = var_b4
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

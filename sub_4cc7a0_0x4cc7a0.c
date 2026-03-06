// 函数名称: sub_4cc7a0
// 虚拟地址: 0x4cc7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4cc7a0(int32_t* arg1, int32_t* arg2 @ edi, float arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi == 0)
        esi = arg2
    
    int32_t* entry_ebx
    char* eax = *entry_ebx
    float var_c
    
    if (eax != 0 && *eax == 0x7b)
        bool cond:0_1 = *eax != 0
        char* var_98 = eax
        int32_t eax_1
        
        if (cond:0_1)
            eax_1 = *(sub_4c4060(entry_ebx) + 8)
        else
            eax_1 = 0
        
        int32_t var_94_1 = eax_1
        int32_t var_90_1 = 0
        int32_t* var_54_1 = arg2
        int32_t edx
        int32_t* eax_5 = sub_4cba80(&var_c, edx, &var_98, &var_c)
        
        if (eax_5[2] == 0)
            esi = eax_5
    
    int32_t eax_9 = esi[4]
    
    if (eax_9 == 0)
        sub_4c5870("defaultFancy->mTextAlignment != TA_NONE", &data_83f3d3, "Font.cpp", 0x4a5, 
            "DrawParentedStringFancy")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi[2] != 0)
        sub_4c5870("defaultFancy->mImage == NULL", &data_83f3d3, "Font.cpp", 0x4a6, 
            "DrawParentedStringFancy")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi[1] == 0)
        sub_4c5870("defaultFancy->mFont != NULL", &data_83f3d3, "Font.cpp", 0x4a7, 
            "DrawParentedStringFancy")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ecx_2 = arg4
    int16_t top = 0xffff
    long double x87_r7 = fconvert.t(9.99999975e-06f)
    float var_20 = *ecx_2
    float edx_2 = ecx_2[1]
    int32_t var_18 = ecx_2[2]
    int32_t var_14 = ecx_2[3]
    
    if (eax_9 == 4 || eax_9 == 5 || eax_9 == 6)
        var_c = fconvert.s(fconvert.t(ecx_2[2]) - fconvert.t(*ecx_2))
        float var_10_1 = fconvert.s(fconvert.t(ecx_2[3]) - fconvert.t(ecx_2[1]))
        long double x87_r6_5 = fconvert.t(var_c)
        x87_r6_5 - x87_r7
        eax_9.w = (x87_r6_5 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            top = 0xffff
        else
            long double temp1_1 = fconvert.t(var_10_1)
            x87_r7 - temp1_1
            eax_9.w = (x87_r7 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7 == temp1_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_9:1.b & 0x41) == 0)
                top = 0xffff
            else
                int32_t* var_ac_1 = ecx_2
                int16_t x87control_1 = sub_4cc540(entry_ebx, fconvert.s(x87_r7), arg2, esi)
                long double x87_r0
                var_c = fconvert.s(x87_r0)
                long double x87_r0_1 = fconvert.t(var_c)
                long double x87_r7_3 = fconvert.t(var_10_1)
                x87_r7_3 - x87_r0_1
                
                if ((((x87_r7_3 < x87_r0_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_3, x87_r0_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == x87_r0_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
                    ecx_2 = arg4
                    top = 0
                else
                    var_c = fconvert.s((x87_r7_3 - x87_r0_1) * fconvert.t(0.5))
                    int32_t* var_a8_1
                    var_a8_1.q = fconvert.d(fconvert.t(var_c))
                    ecx_2 = arg4
                    int32_t mxcsr
                    var_c = fconvert.s(sub_686950(mxcsr, x87control_1, var_a8_1))
                    float var_1c_1 = fconvert.s(fconvert.t(var_c) + fconvert.t(edx_2))
                    top = 0
    
    int32_t eax_11 = esi[4]
    
    if (eax_11 == 7 || eax_11 == 8 || eax_11 == 9)
        unimplemented  {fld st0, dword [ecx+0x8]}
        unimplemented  {fsub st0, dword [ecx]}
        var_c = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
        unimplemented  {fstp dword [ebp-0x8], st0}
        unimplemented  {fld st0, dword [ecx+0xc]}
        unimplemented  {fsub st0, dword [ecx+0x4]}
        float var_10_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
        unimplemented  {fstp dword [ebp-0xc], st0}
        unimplemented  {fld st0, dword [ebp-0x8]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_4 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_4 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_4 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        eax_11.w =
            (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe | ((top - 1) & 7) << 0xb
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
        label_4cc9d9:
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
        else
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            long double temp2_1 = fconvert.t(var_10_2)
            unimplemented  {fcomp st0, dword [ebp-0xc]} f- temp2_1
            bool c0_5 = unimplemented  {fcomp st0, dword [ebp-0xc]} f< temp2_1
            bool c2_5 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0xc]}, temp2_1)
            bool c3_5 = unimplemented  {fcomp st0, dword [ebp-0xc]} f== temp2_1
            unimplemented  {fcomp st0, dword [ebp-0xc]}
            eax_11.w =
                (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top & 7) << 0xb
            
            if ((eax_11:1.b & 0x41) == 0)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
            else
                int32_t* var_ac_3 = ecx_2
                float var_ac_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4cc540(entry_ebx, var_ac_4, arg2, esi)
                var_c = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
                unimplemented  {fstp dword [ebp-0x8], st0}
                unimplemented  {fld st0, dword [ebp-0x8]}
                unimplemented  {fld st0, dword [ebp-0xc]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_6 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_6 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_6 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                
                if ((((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb):1.b & 0x41) != 0)
                    goto label_4cc9d9
                
                unimplemented  {fsubrp st1, st0}
                unimplemented  {fsubrp st1, st0}
                unimplemented  {fadd dword [ebp-0x18]}
                float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                unimplemented  {fstp dword [ebp-0x18], st0}
    else
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
    
    float* result = sub_4cc060(arg5, arg3, arg2, entry_ebx, arg3, &var_20, 1, arg5, esi)
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}
    return result
}

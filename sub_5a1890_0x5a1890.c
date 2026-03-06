// 函数名称: sub_5a1890
// 虚拟地址: 0x5a1890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a1890(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: long double x87_r7 = float.t(1)
    long double x87_r7 = float.t(1)
    long double x87_r6 = fconvert.t(arg4)
    x87_r6 - x87_r7
    int16_t eax = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    int16_t top = 0xffff
    int32_t i_4
    int32_t i_5
    int32_t ecx
    int32_t i_6
    
    if ((eax:1.b & 0x41) != 0)
        int32_t var_30_1 = ecx
        top = 0
        ecx = arg5
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(sub_5a1300(eax, i_6, arg3, fconvert.s(x87_r7)))
        i_5 = (eax_2 - edx) s>> 1
        i_6 = ecx + (i_5 << 1)
        i_4 = i_6
    else
        i_5 = arg6
        i_4 = i_5
    
    int32_t var_30_3 = ecx
    int32_t ecx_2 = arg3
    float var_30_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    int32_t result
    int16_t x87control
    result, x87control = sub_5a13a0(i_5.w, i_6, ecx_2, var_30_4)
    int16_t top_2 = top + 2
    int32_t ebx = 0
    int32_t result_1 = result
    int32_t mxcsr
    
    if (arg6 s> 0)
        do
            unimplemented  {fldz }
            int32_t i_7 = i_4
            int32_t esi_1 = 0
            float var_c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
            unimplemented  {fstp dword [ebp-0x8], st0}
            int16_t top_4 = top_2
            
            if (i_7 s<= 0)
            label_5a1941:
                ecx_2 = arg1
            else
                while (true)
                    ecx_2 = arg1
                    result = *(ecx_2 + (esi_1 << 3))
                    
                    if (ebx s< result)
                        break
                    
                    if (ebx s<= *(ecx_2 + (esi_1 << 3) + 4))
                        unimplemented  {fld st0, dword [ebp+0x14]}
                        int32_t var_30_5 = ecx_2
                        float var_30_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t eax_4
                        eax_4, x87control = sub_5a13a0(result.w, i_7, arg3, var_30_6)
                        i_7 = i_4
                        result = eax_4 * esi_1 + ebx - result
                        unimplemented  {fld st0, dword [ecx+eax*4]}
                        unimplemented  {fadd dword [ebp-0x8]}
                        float var_c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
                        unimplemented  {fstp dword [ebp-0x8], st0}
                        top_4 += 1
                    else if (ebx s< result)
                        break
                    
                    esi_1 += 1
                    
                    if (esi_1 s>= i_7)
                        goto label_5a1941
            
            unimplemented  {fld st0, dword [ebp-0x8]}
            int32_t esi_2 = 0
            unimplemented  {fld1 }
            unimplemented  {fdivrp st1, st0}
            unimplemented  {fdivrp st1, st0}
            float var_10_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
            unimplemented  {fstp dword [ebp-0xc], st0}
            top_2 = top_4
            
            if (i_7 s> 0)
                do
                    result = *(ecx_2 + (esi_2 << 3))
                    
                    if (ebx s< result)
                        break
                    
                    if (ebx s<= *(ecx_2 + (esi_2 << 3) + 4))
                        unimplemented  {fld1 }
                        unimplemented  {fld st0, dword [ebp+0x14]}
                        int32_t edi_4 = ebx - result
                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                        bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                        bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                            unimplemented  {fcom st0, st1})
                        bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                        int32_t var_30_7 = ecx_2
                        result.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | ((top_2 - 2) & 7) << 0xb
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        long double st0_1
                        int16_t top_25
                        
                        if ((result:1.b & 0x41) != 0)
                            float var_30_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t ecx_6 = (&data_8bc4fc)[arg3 * 2](var_30_9)
                            unimplemented  {fadd st0, st0}
                            int32_t var_34_2 = ecx_6
                            float var_14_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                            unimplemented  {fstp dword [ebp-0x10], st0}
                            unimplemented  {fld st0, dword [ebp-0x10]}
                            var_34_2.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                            unimplemented  {fstp qword [esp], st0}
                            st0_1, x87control = sub_5aaa90(mxcsr, x87control, var_34_2)
                            unimplemented  {call 0x5aaa90}
                            float var_14_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                            unimplemented  {fstp dword [ebp-0x10], st0}
                            top_25 = top_2
                            unimplemented  {fld st0, dword [ebp-0x10]}
                        else
                            unimplemented  {fld1 }
                            unimplemented  {fdivrp st1, st0}
                            unimplemented  {fdivrp st1, st0}
                            float var_14_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                            unimplemented  {fstp dword [ebp-0x10], st0}
                            unimplemented  {fld st0, dword [ebp-0x10]}
                            float var_30_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t ecx_4 = (&data_8bc4fc)[arg3 * 2](var_30_8)
                            unimplemented  {fadd st0, st0}
                            int32_t var_34_1 = ecx_4
                            float var_14_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                            unimplemented  {fstp dword [ebp-0x10], st0}
                            unimplemented  {fld st0, dword [ebp-0x10]}
                            var_34_1.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                            unimplemented  {fstp qword [esp], st0}
                            st0_1, x87control = sub_5aaa90(mxcsr, x87control, var_34_1)
                            unimplemented  {call 0x5aaa90}
                            float var_14_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                            unimplemented  {fstp dword [ebp-0x10], st0}
                            top_25 = top_2
                            unimplemented  {fld st0, dword [ebp-0x10]}
                        
                        i_7 = i_4
                        result = arg2 + ((sub_685f40(st0_1) * esi_2 + edi_4) << 2)
                        ecx_2 = arg1
                        unimplemented  {fld st0, dword [eax]}
                        unimplemented  {fmul st0, dword [ebp-0xc]}
                        *result = fconvert.s(unimplemented  {fstp dword [eax], st0})
                        unimplemented  {fstp dword [eax], st0}
                        top_2 = top_25 + 1
                    else if (ebx s< result)
                        break
                    
                    esi_2 += 1
                while (esi_2 s< i_7)
            
            ebx += 1
        while (ebx s< arg6)
    
    int32_t edi_5 = 0
    
    if (i_4 s> 0)
        do
            int32_t esi_3 = 0
            
            while (true)
                unimplemented  {fld1 }
                int32_t var_30_10 = ecx_2
                unimplemented  {fld st0, dword [ebp+0x14]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_2 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_2 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_2 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                result.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | ((top_2 - 2) & 7) << 0xb
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                long double st0_2
                int16_t top_47
                
                if ((result:1.b & 0x41) != 0)
                    float var_30_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_10 = (&data_8bc4fc)[arg3 * 2](var_30_12)
                    unimplemented  {fadd st0, st0}
                    int32_t var_34_4 = ecx_10
                    float var_14_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                    unimplemented  {fstp dword [ebp-0x10], st0}
                    unimplemented  {fld st0, dword [ebp-0x10]}
                    var_34_4.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    st0_2, x87control = sub_5aaa90(mxcsr, x87control, var_34_4)
                    unimplemented  {call 0x5aaa90}
                    float var_14_10 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                    unimplemented  {fstp dword [ebp-0x10], st0}
                    top_47 = top_2
                    unimplemented  {fld st0, dword [ebp-0x10]}
                else
                    unimplemented  {fld1 }
                    unimplemented  {fdivrp st1, st0}
                    unimplemented  {fdivrp st1, st0}
                    float var_14_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                    unimplemented  {fstp dword [ebp-0x10], st0}
                    unimplemented  {fld st0, dword [ebp-0x10]}
                    float var_30_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_8 = (&data_8bc4fc)[arg3 * 2](var_30_11)
                    unimplemented  {fadd st0, st0}
                    int32_t var_34_3 = ecx_8
                    float var_14_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                    unimplemented  {fstp dword [ebp-0x10], st0}
                    unimplemented  {fld st0, dword [ebp-0x10]}
                    var_34_3.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    st0_2, x87control = sub_5aaa90(mxcsr, x87control, var_34_3)
                    unimplemented  {call 0x5aaa90}
                    float var_14_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                    unimplemented  {fstp dword [ebp-0x10], st0}
                    top_47 = top_2
                    unimplemented  {fld st0, dword [ebp-0x10]}
                
                sub_685f40(st0_2)
                ecx_2 = arg2
                unimplemented  {fld st0, dword [ecx+eax*4]}
                unimplemented  {fldz }
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_3 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                top_2 = top_47 + 1
                result.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (top_2 & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    break
                
                esi_3 += 1
            
            int32_t temp1_1 = *(arg1 + (edi_5 << 3))
            *(arg1 + (edi_5 << 3)) += esi_3
            int32_t i = *(arg1 + (edi_5 << 3))
            int32_t var_c_3 = esi_3
            
            if (temp1_1 + esi_3 s< 0)
                do
                    i += 1
                    esi_3 += 1
                    *(arg1 + (edi_5 << 3)) = i
                while (i s< 0)
                
                var_c_3 = esi_3
            
            int32_t result_3 = *(arg1 + (edi_5 << 3) + 4) - *(arg1 + (edi_5 << 3)) + 1
            int32_t result_2 = result_1
            
            if (result_1 s>= result_3)
                result_2 = result_3
            
            unimplemented  {fld1 }
            int32_t result_4 = result_3
            unimplemented  {fld st0, dword [ebp+0x14]}
            unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
            bool c0_4 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
            bool c2_4 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
            bool c3_4 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
            int32_t eax_14
            eax_14.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | ((top_2 - 2) & 7) << 0xb
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            long double st0_3
            int16_t top_70
            
            if ((eax_14:1.b & 0x41) != 0)
                float var_30_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t ecx_15 = (&data_8bc4fc)[arg3 * 2](var_30_14)
                unimplemented  {fadd st0, st0}
                int32_t var_34_6 = ecx_15
                float var_14_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld st0, dword [ebp-0x10]}
                var_34_6.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                st0_3, x87control = sub_5aaa90(mxcsr, x87control, var_34_6)
                unimplemented  {call 0x5aaa90}
                float var_14_15 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                top_70 = top_2
                unimplemented  {fld st0, dword [ebp-0x10]}
            else
                unimplemented  {fld1 }
                unimplemented  {fdivrp st1, st0}
                unimplemented  {fdivrp st1, st0}
                float var_14_11 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld st0, dword [ebp-0x10]}
                float var_30_13 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t ecx_13 = (&data_8bc4fc)[arg3 * 2](var_30_13)
                unimplemented  {fadd st0, st0}
                int32_t var_34_5 = ecx_13
                float var_14_12 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld st0, dword [ebp-0x10]}
                var_34_5.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                st0_3, x87control = sub_5aaa90(mxcsr, x87control, var_34_5)
                unimplemented  {call 0x5aaa90}
                float var_14_13 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                top_70 = top_2
                unimplemented  {fld st0, dword [ebp-0x10]}
            
            result, ecx_2 = sub_685f40(st0_3)
            top_2 = top_70 + 1
            int32_t ebx_1 = 0
            int32_t i_1 = result
            
            if (result_2 s> 0)
                while (esi_3 + ebx_1 s< i_1)
                    unimplemented  {fld1 }
                    int32_t var_30_15 = ecx_2
                    unimplemented  {fld st0, dword [ebp+0x14]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_5 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_5 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_5 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    result.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                        | ((top_2 - 2) & 7) << 0xb
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    int16_t x87control_1
                    long double st0_4
                    int16_t top_90
                    
                    if ((result:1.b & 0x41) != 0)
                        float var_30_17 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t ecx_18 = (&data_8bc4fc)[arg3 * 2](var_30_17)
                        unimplemented  {fadd st0, st0}
                        int32_t var_34_8 = ecx_18
                        float var_1c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        var_34_8.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        st0_4, x87control_1 = sub_5aaa90(mxcsr, x87control, var_34_8)
                        unimplemented  {call 0x5aaa90}
                        float var_1c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        top_90 = top_2
                        unimplemented  {fld st0, dword [ebp-0x18]}
                    else
                        unimplemented  {fld1 }
                        unimplemented  {fdivrp st1, st0}
                        unimplemented  {fdivrp st1, st0}
                        float var_1c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        float var_30_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t ecx_17 = (&data_8bc4fc)[arg3 * 2](var_30_16)
                        unimplemented  {fadd st0, st0}
                        int32_t var_34_7 = ecx_17
                        float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        var_34_7.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        st0_4, x87control_1 = sub_5aaa90(mxcsr, x87control, var_34_7)
                        unimplemented  {call 0x5aaa90}
                        float var_1c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        top_90 = top_2
                        unimplemented  {fld st0, dword [ebp-0x18]}
                    
                    int32_t ecx_19 = sub_685f40(st0_4)
                    unimplemented  {fld1 }
                    unimplemented  {fld st0, dword [ebp+0x14]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_6 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_6 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_6 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    int32_t var_30_18 = ecx_19
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    long double st0_5
                    int16_t top_111
                    
                    if ((((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                            | ((top_90 - 1) & 7) << 0xb):1.b & 0x41) != 0)
                        float var_30_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t ecx_23 = (&data_8bc4fc)[arg3 * 2](var_30_20)
                        unimplemented  {fadd st0, st0}
                        int32_t var_34_10 = ecx_23
                        float var_1c_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        var_34_10.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        st0_5, x87control = sub_5aaa90(mxcsr, x87control_1, var_34_10)
                        unimplemented  {call 0x5aaa90}
                        float var_1c_10 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        top_111 = top_90 + 1
                        unimplemented  {fld st0, dword [ebp-0x18]}
                    else
                        unimplemented  {fld1 }
                        unimplemented  {fdivrp st1, st0}
                        unimplemented  {fdivrp st1, st0}
                        float var_1c_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        float var_30_19 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t ecx_21 = (&data_8bc4fc)[arg3 * 2](var_30_19)
                        unimplemented  {fadd st0, st0}
                        int32_t var_34_9 = ecx_21
                        float var_1c_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        var_34_9.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        st0_5, x87control = sub_5aaa90(mxcsr, x87control_1, var_34_9)
                        unimplemented  {call 0x5aaa90}
                        float var_1c_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        top_111 = top_90 + 1
                        unimplemented  {fld st0, dword [ebp-0x18]}
                    
                    ecx_2 = arg2
                    result = sub_685f40(st0_5) * edi_5 + ebx_1
                    ebx_1 += 1
                    unimplemented  {fld st0, dword [ecx+esi*4]}
                    *(ecx_2 + (result << 2)) = fconvert.s(unimplemented  {fstp dword [ecx+eax*4], st0})
                    unimplemented  {fstp dword [ecx+eax*4], st0}
                    top_2 = top_111 + 1
                    
                    if (ebx_1 s>= result_2)
                        break
                    
                    esi_3 = var_c_3
            
            edi_5 += 1
        while (edi_5 s< i_4)
    
    if (i_4 s> 0)
        int32_t i_3 = i_4
        result = arg1 + 4
        int32_t i_2
        
        do
            int32_t ecx_24 = *result
            
            if (ecx_24 s>= arg6 - 1)
                ecx_24 = arg6 - 1
            
            *result = ecx_24
            result += 8
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    return result
}

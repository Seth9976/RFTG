// 函数名称: sub_596010
// 虚拟地址: 0x596010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_596010(int32_t arg1, int16_t arg2 @ x87control, int32_t arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = arg5
    int32_t ebx = arg5
    int32_t i_2 = arg1 i* arg4
    int32_t result_1 = sub_5a881a(i_2 * ebx)
    int32_t result = result_1
    
    if (result_1 == 0)
        __free_base(arg3)
        data_273ac1c = "outofmem"
        return 0
    
    int32_t var_8
    
    if ((ebx.b & 1) == 0)
        var_8 = ebx - 1
    else
        var_8 = ebx
    
    if (i_2 s> 0)
        int32_t eax_4 = ebx << 2
        int32_t eax_5 = arg3
        int16_t top_1 = 0xfffd
        void* edi_1 = nullptr
        int32_t var_10_1 = eax_5
        int32_t i_1 = i_2
        int32_t i
        
        do
            void* esi_1 = nullptr
            
            if (var_8 s> 0)
                unimplemented  {fstp st2, st0}
                unimplemented  {fstp st2, st0}
                int32_t ebx_1 = eax_5
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                int16_t top_3 = top_1 + 2
                
                while (true)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fld st0, dword [ebx]}
                    unimplemented  {fld st0, qword [0x8a5480]}
                    int32_t mxcsr
                    int16_t x87control = sub_686c10(mxcsr, arg2)
                    arg4 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                    unimplemented  {fstp dword [ebp+0xc], st0}
                    unimplemented  {fld st0, dword [ebp+0xc]}
                    unimplemented  {fld st0, qword [0x8a53f0]}
                    unimplemented  {fmul st1, st0}
                    unimplemented  {fld st0, qword [0x8a5368]}
                    unimplemented  {fadd st2, st0}
                    unimplemented  {fxch st0, st2}
                    unimplemented  {fxch st0, st2}
                    arg4 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                    unimplemented  {fstp dword [ebp+0xc], st0}
                    unimplemented  {fldz }
                    long double temp3_1 = fconvert.t(arg4)
                    unimplemented  {fcom st0, dword [ebp+0xc]} f- temp3_1
                    bool c0_1 = unimplemented  {fcom st0, dword [ebp+0xc]} f< temp3_1
                    bool c2_1 = is_unordered.t(unimplemented  {fcom st0, dword [ebp+0xc]}, temp3_1)
                    bool c3_1 = unimplemented  {fcom st0, dword [ebp+0xc]} f== temp3_1
                    
                    if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | ((top_3 - 1) & 7) << 0xb):1.b & 0x41) == 0)
                        arg4 = fconvert.s(unimplemented  {fst dword [ebp+0xc], st0})
                    
                    unimplemented  {fld st0, dword [ebp+0xc]}
                    unimplemented  {fcomp st0, st2} f- unimplemented  {fcomp st0, st2}
                    bool c0_2 = unimplemented  {fcomp st0, st2} f< unimplemented  {fcomp st0, st2}
                    bool c2_2 =
                        is_unordered.t(unimplemented  {fcomp st0, st2}, unimplemented  {fcomp st0, st2})
                    bool c3_2 = unimplemented  {fcomp st0, st2} f== unimplemented  {fcomp st0, st2}
                    unimplemented  {fcomp st0, st2}
                    int16_t top_16 = top_3 - 1
                    
                    if ((((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                            | (top_16 & 7) << 0xb):1.b & 0x41) == 0)
                        unimplemented  {fld st0, dword [0x8a5478]}
                        arg4 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                    
                    unimplemented  {fld st0, dword [ebp+0xc]}
                    char* edx_2 = edi_1 + esi_1
                    int16_t x87status_1
                    int16_t temp0_1
                    temp0_1, x87status_1 = __fnstcw_memmem16(x87control)
                    arg4:2.w = temp0_1
                    esi_1 += 1
                    ebx_1 += 4
                    int16_t x87control_1
                    int16_t x87status_2
                    x87control_1, x87status_2 = __fldcw_memmem16(arg4:2.w | 0xc00)
                    char var_18_2 = (int.d(unimplemented  {fistp dword [ebp-0x14], st0})).b
                    unimplemented  {fistp dword [ebp-0x14], st0}
                    top_1 = top_16
                    edx_2[result] = var_18_2
                    int16_t x87status_3
                    arg2, x87status_3 = __fldcw_memmem16(arg4:2.w)
                    
                    if (esi_1 s>= var_8)
                        break
                    
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_3 = top_1 + 2
                
                ebx = arg5
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st2}
                unimplemented  {fxch st0, st2}
                result_1 = result
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
            
            if (esi_1 s< ebx)
                unimplemented  {fld st0, dword [edx+esi*4]}
                unimplemented  {fmul st0, st3}
                unimplemented  {fadd st0, st2}
                arg4 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                unimplemented  {fstp dword [ebp+0xc], st0}
                long double temp2_1 = fconvert.t(arg4)
                unimplemented  {fcom st0, dword [ebp+0xc]} f- temp2_1
                bool c0_3 = unimplemented  {fcom st0, dword [ebp+0xc]} f< temp2_1
                bool c2_3 = is_unordered.t(unimplemented  {fcom st0, dword [ebp+0xc]}, temp2_1)
                bool c3_3 = unimplemented  {fcom st0, dword [ebp+0xc]} f== temp2_1
                eax_5.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (top_1 & 7) << 0xb
                
                if ((eax_5:1.b & 0x41) == 0)
                    arg4 = fconvert.s(unimplemented  {fst dword [ebp+0xc], st0})
                
                unimplemented  {fld st0, dword [ebp+0xc]}
                unimplemented  {fcomp st0, st3} f- unimplemented  {fcomp st0, st3}
                bool c0_4 = unimplemented  {fcomp st0, st3} f< unimplemented  {fcomp st0, st3}
                bool c2_4 =
                    is_unordered.t(unimplemented  {fcomp st0, st3}, unimplemented  {fcomp st0, st3})
                bool c3_4 = unimplemented  {fcomp st0, st3} f== unimplemented  {fcomp st0, st3}
                unimplemented  {fcomp st0, st3}
                eax_5.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | (top_1 & 7) << 0xb
                
                if ((eax_5:1.b & 0x41) == 0)
                    unimplemented  {fld st0, dword [0x8a5478]}
                    arg4 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                    unimplemented  {fstp dword [ebp+0xc], st0}
                
                unimplemented  {fld st0, dword [ebp+0xc]}
                int16_t x87status_4
                int16_t temp0_2
                temp0_2, x87status_4 = __fnstcw_memmem16(arg2)
                arg4:2.w = temp0_2
                int16_t x87control_2
                int16_t x87status_5
                x87control_2, x87status_5 = __fldcw_memmem16(arg4:2.w | 0xc00)
                char var_18_4 = (int.d(unimplemented  {fistp dword [ebp-0x14], st0})).b
                unimplemented  {fistp dword [ebp-0x14], st0}
                top_1 = top_1
                int16_t eax_10
                eax_10.b = var_18_4
                *(esi_1 + edi_1 + result_1) = eax_10.b
                int16_t x87status_6
                arg2, x87status_6 = __fldcw_memmem16(arg4:2.w)
            
            eax_5 = var_10_1 + eax_4
            edi_1 += ebx
            i = i_1
            i_1 -= 1
            var_10_1 = eax_5
        while (i != 1)
        unimplemented  {fstp st2, st0}
        unimplemented  {fstp st2, st0}
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
    
    __free_base(arg3)
    return result
}

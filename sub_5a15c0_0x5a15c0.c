// 函数名称: sub_5a15c0
// 虚拟地址: 0x5a15c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5a15c0(int32_t arg1, int32_t arg2, float arg3, float arg4, void* arg5)
{
    // 第一条实际指令: float ecx = arg4
    float ecx = arg4
    int16_t top = 0xffff
    float var_c = fconvert.s(float.t(0))
    int32_t edi = arg1
    int32_t esi = 0
    void* result = ecx i- edi
    int32_t* entry_ebx
    *entry_ebx = edi
    entry_ebx[1] = ecx
    
    if (ecx i- edi s>= 0)
        void* result_1 = result
        long double x87_r6_1 = float.t(1)
        float var_10_1 = fconvert.s(x87_r6_1 / x87_r6_1)
        int16_t top_1 = 0
        
        while (true)
            unimplemented  {fld st0, dword [ebp-0xc]}
            float var_20_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            unimplemented  {fld st0, dword [ebp+0x14]}
            int32_t var_14_1 = esi + edi
            unimplemented  {fild st0, dword [ebp-0x10]}
            unimplemented  {fadd qword [0x8a5368]}
            float var_14_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            unimplemented  {fsub st0, dword [ebp-0x10]}
            float var_14_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            unimplemented  {fld st0, dword [ebp-0x10]}
            float var_24_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            (*((arg2 << 3) + &data_8bc4f8))(var_24_1, var_20_1)
            result = arg5
            float var_14_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            unimplemented  {fld st0, dword [ebp-0x10]}
            *(result + (esi << 2)) = fconvert.s(unimplemented  {fst dword [eax+esi*4], st0})
            int16_t top_16
            
            if (esi != 0)
                top_16 = top_1 - 1
                unimplemented  {fldz }
            label_5a1660:
                unimplemented  {fld st0, dword [ebp-0x8]}
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
                unimplemented  {fstp dword [ebp-0x8], st0}
                top = top_16 + 1
            else
                unimplemented  {fld st0, st0}
                unimplemented  {fldz }
                unimplemented  {fld st0, st0}
                unimplemented  {fucomp st0, st2} f- unimplemented  {fucomp st0, st2}
                bool c0_1 = unimplemented  {fucomp st0, st2} f< unimplemented  {fucomp st0, st2}
                bool c2_1 =
                    is_unordered.t(unimplemented  {fucomp st0, st2}, unimplemented  {fucomp st0, st2})
                bool c3_1 = unimplemented  {fucomp st0, st2} f== unimplemented  {fucomp st0, st2}
                unimplemented  {fucomp st0, st2}
                result.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | ((top_1 - 2) & 7) << 0xb
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                top_16 = top_1 - 1
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    goto label_5a1660
                
                result_1 -= 1
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                top = top_16 + 1
                edi += 1
                *entry_ebx = edi
                esi = 0xffffffff
            esi += 1
            
            if (esi s> result_1)
                break
            
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_1 = top + 1
        
        ecx = arg4
    
    unimplemented  {fld st0, dword [ebp-0x8]}
    uint32_t edx_2 = 0
    unimplemented  {fld1 }
    void* i_1 = ecx i- edi
    unimplemented  {fdivrp st1, st0}
    unimplemented  {fdivrp st1, st0}
    arg4 = fconvert.s(unimplemented  {fstp dword [ebp+0x10], st0})
    unimplemented  {fstp dword [ebp+0x10], st0}
    int16_t top_22 = top
    
    if (ecx i- edi s>= 0)
        unimplemented  {fld st0, dword [ebp+0x10]}
        result = i_1 + 1
        
        if (result s>= 4)
            uint32_t i_2 = (i_1 + 1) u>> 2
            result = arg5 + 8
            edx_2 = i_2 << 2
            uint32_t i
            
            do
                unimplemented  {fld st0, st0}
                result += 0x10
                i = i_2
                i_2 -= 1
                unimplemented  {fmul st0, dword [eax-0x18]}
                *(result - 0x18) = fconvert.s(unimplemented  {fstp dword [eax-0x18], st0})
                unimplemented  {fstp dword [eax-0x18], st0}
                unimplemented  {fld st0, dword [eax-0x14]}
                unimplemented  {fmul st0, st1}
                *(result - 0x14) = fconvert.s(unimplemented  {fstp dword [eax-0x14], st0})
                unimplemented  {fstp dword [eax-0x14], st0}
                unimplemented  {fld st0, st0}
                unimplemented  {fmul st0, dword [eax-0x10]}
                *(result - 0x10) = fconvert.s(unimplemented  {fstp dword [eax-0x10], st0})
                unimplemented  {fstp dword [eax-0x10], st0}
                unimplemented  {fld st0, dword [eax-0xc]}
                unimplemented  {fmul st0, st1}
                *(result - 0xc) = fconvert.s(unimplemented  {fstp dword [eax-0xc], st0})
                unimplemented  {fstp dword [eax-0xc], st0}
            while (i != 1)
        
        while (edx_2 s<= i_1)
            unimplemented  {fld st0, dword [edi+edx*4]}
            edx_2 += 1
            unimplemented  {fmul st0, st1}
            *(arg5 + (edx_2 << 2) - 4) = fconvert.s(unimplemented  {fstp dword [edi+edx*4-0x4], st0})
            unimplemented  {fstp dword [edi+edx*4-0x4], st0}
        
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        top_22 = top_22
    
    if (i_1 s>= 0)
        if (i_1 + 1 s>= 4)
            void* esi_2 = arg5 + (i_1 << 2) - 8
            
            do
                unimplemented  {fld st0, dword [esi+0x8]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_22 & 7) << 0xb
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_5a176c
                
                void* edx_5 = *entry_ebx + i_1
                entry_ebx[1] = edx_5 - 1
                int16_t top_34 = top_22 - 1
                unimplemented  {fld st0, dword [esi+0x4]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_3 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((top_34 + 1) & 7) << 0xb
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (p_3)
                    goto label_5a176c
                
                entry_ebx[1] = edx_5 - 2
                unimplemented  {fld st0, dword [esi]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_4 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_4 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_4 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | ((top_34 + 1) & 7) << 0xb
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_5a176c
                
                entry_ebx[1] = edx_5 - 3
                unimplemented  {fld st0, dword [esi-0x4]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_5 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_5 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_5 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                top_22 = top_34 + 1
                result.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                    | (top_22 & 7) << 0xb
                bool p_5 = unimplemented  {test ah, 0x44}
                
                if (p_5)
                    goto label_5a176c
                
                i_1 -= 4
                esi_2 -= 0x10
                entry_ebx[1] = edx_5 - 4
            while (i_1 s>= 3)
        
        if (i_1 s>= 0)
            void* i_3
            
            do
                unimplemented  {fld st0, dword [edi+ecx*4]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_6 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_6 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_6 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                    | (top_22 & 7) << 0xb
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (p_6)
                    break
                
                result = *entry_ebx + i_1 - 1
                i_3 = i_1
                i_1 -= 1
                entry_ebx[1] = result
            while (i_3 - 1 s>= 0)
    
    label_5a176c:
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}
    return result
}

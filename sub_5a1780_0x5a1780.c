// 函数名称: sub_5a1780
// 虚拟地址: 0x5a1780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a1780(int32_t arg1, int32_t* arg2 @ edi, int32_t arg3, float arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = arg5
    arg2[1] = arg1
    int32_t esi = 0
    int32_t i_1 = arg1 - result
    *arg2 = result
    int16_t top
    
    if (arg1 - result s>= 0)
        int16_t top_1 = 0xffff
        
        while (true)
            float var_14_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            int32_t var_8_1 = result + esi
            unimplemented  {fild st0, dword [ebp-0x4]}
            unimplemented  {fadd qword [0x8a5368]}
            float var_8_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
            unimplemented  {fstp dword [ebp-0x4], st0}
            unimplemented  {fld st0, dword [ebp-0x4]}
            unimplemented  {fsub st0, dword [ebp+0x14]}
            float var_8_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
            unimplemented  {fstp dword [ebp-0x4], st0}
            unimplemented  {fld st0, dword [ebp-0x4]}
            float var_18_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            (*((arg3 << 3) + &data_8bc4f8))(var_18_1, var_14_1)
            unimplemented  {fld st0, dword [ebp+0xc]}
            result = arg6
            unimplemented  {fld st0, st0}
            esi += 1
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            *(result + (esi << 2) - 4) = fconvert.s(unimplemented  {fstp dword [eax+esi*4-0x4], st0})
            unimplemented  {fstp dword [eax+esi*4-0x4], st0}
            top_1 += 1
            
            if (esi s> i_1)
                break
            
            result = arg5
        
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        top = top_1 + 1
    
    int32_t i = i_1
    
    if (i s>= 0)
        int16_t top_12 = top - 1
        unimplemented  {fldz }
        
        if (i_1 + 1 s>= 4)
            int32_t esi_1 = arg6 + (i << 2) - 8
            
            do
                unimplemented  {fld st0, dword [esi+0x8]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | (top_12 & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    goto label_5a1880
                
                int32_t edx_3 = *arg2 + i
                arg2[1] = edx_3 - 1
                int16_t top_15 = top_12 - 1
                unimplemented  {fld st0, dword [esi+0x4]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | ((top_15 + 1) & 7) << 0xb
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_5a1880
                
                arg2[1] = edx_3 - 2
                unimplemented  {fld st0, dword [esi]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_3 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((top_15 + 1) & 7) << 0xb
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (p_3)
                    goto label_5a1880
                
                arg2[1] = edx_3 - 3
                unimplemented  {fld st0, dword [esi-0x4]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_4 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_4 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_4 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                top_12 = top_15 + 1
                result.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | (top_12 & 7) << 0xb
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_5a1880
                
                i -= 4
                esi_1 -= 0x10
                arg2[1] = edx_3 - 4
            while (i s>= 3)
        
        if (i s>= 0)
            int32_t i_2
            
            do
                unimplemented  {fld st0, dword [ebx+ecx*4]}
                unimplemented  {fld st0, st1}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_5 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_5 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_5 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                result.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                    | (top_12 & 7) << 0xb
                bool p_5 = unimplemented  {test ah, 0x44}
                
                if (p_5)
                    break
                
                result = *arg2 + i - 1
                i_2 = i
                i -= 1
                arg2[1] = result
            while (i_2 - 1 s>= 0)
        
    label_5a1880:
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
    
    return result
}

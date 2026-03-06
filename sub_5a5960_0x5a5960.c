// 函数名称: sub_5a5960
// 虚拟地址: 0x5a5960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a5960(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x50)
    int32_t ecx = *(arg1 + 0x50)
    int32_t var_18 = ecx
    int16_t eax
    int32_t eax_2
    int32_t edx
    int32_t edx_1
    edx_1:eax_2 =
        sx.q(sub_5a1300(eax, edx, ecx, fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x38)))))))
    int32_t eax_3 = eax_2 - edx_1
    int32_t eax_4 = sub_5a1300(eax_3.w, edx_1, *(arg1 + 0x54), fconvert.s(fconvert.t(*(arg1 + 0x3c))))
    int32_t edx_2 = *(arg1 + 0x14)
    int32_t edi = *(arg1 + 4)
    long double x87_r1_1 = float.t(1)
    int32_t ecx_2 = *(arg1 + 0x50)
    long double x87_r0_1 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x38))))
    int32_t var_c = eax_4
    x87_r0_1 - x87_r1_1
    eax_4.w = (x87_r0_1 < x87_r1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r0_1, x87_r1_1) ? 1 : 0) << 0xa
        | (x87_r0_1 == x87_r1_1 ? 1 : 0) << 0xe
    int32_t eax_5
    int16_t top
    
    if ((eax_4:1.b & 0x41) != 0)
        int32_t var_18_3 = ecx_2
        top = 3
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = sx.q(sub_5a1300(eax_4.w, edx_2, ecx_2, fconvert.s(x87_r1_1)))
        eax_5 = edi + ((eax_7 - edx_3) s>> 1 << 1)
    else
        top = 2
        eax_5 = edx_2
    
    unimplemented  {fld st0, dword [esi+0x3c]}
    int32_t edx_4 = *(arg1 + 0x18)
    int32_t edi_1 = *(arg1 + 8)
    float var_8_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
    unimplemented  {fstp dword [ebp-0x4], st0}
    unimplemented  {fld1 }
    int32_t ecx_3 = *(arg1 + 0x54)
    unimplemented  {fld st0, dword [ebp-0x4]}
    *(arg1 + 0x98) = eax_5
    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
    bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
    bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
    bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
    eax_5.w =
        (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | ((top - 2) & 7) << 0xb
    unimplemented  {fstp st1, st0}
    unimplemented  {fstp st1, st0}
    int32_t eax_10
    int16_t top_6
    
    if ((eax_5:1.b & 0x41) != 0)
        int32_t var_18_5 = ecx_3
        float var_18_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        top_6 = top + 1
        int32_t eax_12
        edx_4:eax_12 = sx.q(sub_5a1300(eax_5.w, edx_4, ecx_3, var_18_6))
        eax_10 = edi_1 + ((eax_12 - edx_4) s>> 1 << 1)
    else
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        top_6 = top
        eax_10 = edx_4
    
    unimplemented  {fld st0, dword [esi+0x38]}
    *(arg1 + 0x9c) = eax_10
    int32_t var_18_7 = ecx_3
    int32_t ecx_4 = *(arg1 + 0x50)
    float var_18_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    int32_t eax_18 = *(arg1 + 0x98) * 8
    *(arg1 + 0xb8) = eax_18
    int32_t eax_19
    int32_t edx_5
    eax_19, edx_5 = sub_5a13a0(eax_18.w, edx_4, ecx_4, var_18_8)
    unimplemented  {fld st0, dword [esi+0x3c]}
    float var_18_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    int32_t eax_22 = eax_19 * *(arg1 + 0x98) * 4
    *(arg1 + 0xc0) = *(arg1 + 0x9c) * 8
    int32_t ecx_9 = *(arg1 + 0x54)
    *(arg1 + 0xbc) = eax_22
    int32_t eax_23 = sub_5a13a0(eax_22.w, edx_5, ecx_9, var_18_9)
    int32_t edi_2 = *(arg1 + 0x40)
    unimplemented  {fld1 }
    long double temp0 = fconvert.t(*(arg1 + 0x3c))
    unimplemented  {fcomp st0, dword [esi+0x3c]} f- temp0
    bool c0_2 = unimplemented  {fcomp st0, dword [esi+0x3c]} f< temp0
    bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, dword [esi+0x3c]}, temp0)
    bool c3_2 = unimplemented  {fcomp st0, dword [esi+0x3c]} f== temp0
    unimplemented  {fcomp st0, dword [esi+0x3c]}
    int32_t eax_25 = *(arg1 + 0x14) * edi_2
    int32_t edi_3 = eax_25 << 2
    int32_t ebx_2 = eax_25 * var_c * 4
    int32_t eax_27
    eax_27.w =
        (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | ((top_6 + 2) & 7) << 0xb
    int32_t ecx_13 = eax_23 * *(arg1 + 0x9c) * 4
    int32_t edx_10 = (*(arg1 + 4) + (eax_3 s>> 1 << 1)) * edi_2 * 4
    *(arg1 + 0xc4) = ecx_13
    *(arg1 + 0xc8) = edx_10
    *(arg1 + 0xcc) = edi_3
    *(arg1 + 0xd0) = ebx_2
    *(arg1 + 0xd4) = edi_3
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        *(arg1 + 0xd4) = 0
    else
        *(arg1 + 0xcc) = 0
    
    return *(arg1 + 0xcc) + ebx_2 + edx_10 + ecx_13 + *(arg1 + 0xc0) + *(arg1 + 0xbc) + *(arg1 + 0xb8)
        + *(arg1 + 0xd4)
}

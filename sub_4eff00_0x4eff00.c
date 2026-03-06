// 函数名称: sub_4eff00
// 虚拟地址: 0x4eff00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __fastcallsub_4eff00(float arg1 @ ecx, void* arg2 @ edi)
{
    // 第一条实际指令: float eax = *(arg2 + 0x24)
    float eax = *(arg2 + 0x24)
    float edx = *(arg2 + 0x28)
    void* esi = *(arg1 i+ 0x30)
    void* ebx = *(esi + 0x2e4)
    float eax_1 = *(arg2 + 0x2c)
    int32_t* eax_2 = *(ebx + 0x28)
    float var_38 = *(arg2 + 0x30)
    float result
    int16_t x87control
    int16_t top
    float var_34
    int16_t top_1
    
    if (eax_2 s> 0)
        int32_t* ecx = *(arg1 i+ 0x3c)
        
        if (ecx s< 0)
            eax_2 = nullptr
        else if (ecx s<= eax_2)
            eax_2 = ecx
        
        int32_t* eax_4 = (eax_2 << 4) + *(ebx + 0x24)
        float var_24
        int80_t st0_1
        st0_1, eax_2 = sub_4f3ff0(&var_24, *eax_4, eax_4[1], eax_4[2])
        float edx_4 = eax_2[1]
        var_34 = *eax_2
        arg1 = eax_2[2]
        float var_44_1 = fconvert.s(fconvert.t(var_34) * fconvert.t(eax))
        float var_40_1 = fconvert.s(fconvert.t(edx_4) * fconvert.t(edx))
        float var_3c_1 = fconvert.s(fconvert.t(arg1) * fconvert.t(eax_1))
        top_1 = 0xffff
        eax_2[3]
    label_4f0070:
        float var_38_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
        unimplemented  {fstp dword [ebp-0x34], st0}
        top = top_1 + 1
    else if (*(arg2 + 0x64) != 0)
        float edx_6 = *(arg2 + 0x28)
        float var_5c = *(arg2 + 0x24)
        int32_t edx_7 = *(arg2 + 0x30)
        int32_t var_50_2 = edx_7
        int32_t* eax_7
        int80_t st0_2
        st0_2, eax_7 = sub_4f3ee0(&var_5c, edx_7, &var_34, var_5c, edx_6, *(arg2 + 0x2c))
        float edx_8 = eax_7[1]
        float eax_8 = eax_7[2]
        result = fconvert.s(fconvert.t(*(arg2 + 0x34)) + fconvert.t(*eax_7))
        x87control = sub_68b79a()
        float var_c_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(360.0))))
        long double x87_r6_3 = float.t(0)
        long double temp1_1 = fconvert.t(result)
        x87_r6_3 - temp1_1
        long double x87_r6_5
        
        if ((((x87_r6_3 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, temp1_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == temp1_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
            x87_r6_5 = fconvert.t(var_c_2)
        else
            x87_r6_5 = fconvert.t(var_c_2) + fconvert.t(360.0)
        
        int32_t* eax_10
        int80_t st0_3
        st0_3, eax_10 = sub_4f3ff0(&var_34, fconvert.s(x87_r6_5), 
            fconvert.s(fconvert.t(*(arg2 + 0x38)) + fconvert.t(edx_8)), 
            fconvert.s(fconvert.t(*(arg2 + 0x3c)) * fconvert.t(eax_8)))
        top_1 = 0xfffe
        *(arg2 + 0x30)
        arg1 = eax_10[1]
        int32_t var_44_2 = *eax_10
        float var_40_2 = arg1
        int32_t var_3c_2 = eax_10[2]
        int32_t* var_38_1 = eax_10[3]
        goto label_4f0070
    unimplemented  {fld1 }
    float var_10_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
    unimplemented  {fstp dword [ebp-0xc], st0}
    unimplemented  {fldz }
    long double temp0 = fconvert.t(*(ebx + 0x4c))
    unimplemented  {fcomp st0, dword [ebx+0x4c]} f- temp0
    bool c0_2 = unimplemented  {fcomp st0, dword [ebx+0x4c]} f< temp0
    bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, dword [ebx+0x4c]}, temp0)
    bool c3_2 = unimplemented  {fcomp st0, dword [ebx+0x4c]} f== temp0
    unimplemented  {fcomp st0, dword [ebx+0x4c]}
    eax_2.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        int32_t* eax_12
        eax_12, arg1 = sub_466320(**(esi + 0x2e4))
        
        if (*(*(esi + 0x2dc) * 0x134 + *eax_12 + 0xde) == 0)
            unimplemented  {fld st0, dword [ebx+0x50]}
            unimplemented  {fdiv st0, dword [ebx+0x4c]}
            float var_10_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
            unimplemented  {fstp dword [ebp-0xc], st0}
    
    unimplemented  {fld st0, dword [edi+0x40]}
    float var_50_5 = arg1
    unimplemented  {fmul st0, dword [ebp-0x40]}
    float var_c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
    unimplemented  {fstp dword [ebp-0x8], st0}
    unimplemented  {fld st0, dword [ebp-0x8]}
    float var_50_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    char eax_14
    int16_t x87control_1
    eax_14, x87control_1 = sub_4e3930(x87control, var_50_6)
    unimplemented  {fld st0, dword [edi+0x40]}
    result.b = eax_14
    unimplemented  {fmul st0, dword [ebp-0x3c]}
    float var_c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
    unimplemented  {fstp dword [ebp-0x8], st0}
    unimplemented  {fld st0, dword [ebp-0x8]}
    float var_50_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    char eax_15
    int16_t x87control_2
    eax_15, x87control_2 = sub_4e3930(x87control_1, var_50_7)
    unimplemented  {fld st0, dword [edi+0x40]}
    result:1.b = eax_15
    unimplemented  {fmul st0, dword [ebp-0x38]}
    float var_c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
    unimplemented  {fstp dword [ebp-0x8], st0}
    unimplemented  {fld st0, dword [ebp-0x8]}
    float var_50_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    char eax_16
    int16_t x87control_3
    eax_16, x87control_3 = sub_4e3930(x87control_2, var_50_8)
    unimplemented  {fld st0, dword [ebx+0x64]}
    result:2.b = eax_16
    unimplemented  {fmul st0, dword [ebp-0xc]}
    float var_10_3 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
    unimplemented  {fstp dword [ebp-0xc], st0}
    unimplemented  {fld st0, dword [ebp-0xc]}
    unimplemented  {fmul st0, dword [ebp-0x34]}
    float var_10_4 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
    unimplemented  {fstp dword [ebp-0xc], st0}
    unimplemented  {fld st0, dword [ebp-0xc]}
    float var_50_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    result:3.b = sub_4e3930(x87control_3, var_50_9)
    return result
}

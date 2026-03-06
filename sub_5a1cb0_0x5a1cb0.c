// 函数名称: sub_5a1cb0
// 虚拟地址: 0x5a1cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a1cb0(float arg1 @ esi, int32_t* arg2, void* arg3, float arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: long double x87_r7 = float.t(1)
    long double x87_r7 = float.t(1)
    long double x87_r6 = fconvert.t(arg4)
    x87_r6 - x87_r7
    int16_t eax = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    int16_t top = 0xffff
    int32_t var_8
    int32_t ecx
    
    if ((eax:1.b & 0x41) != 0)
        int32_t var_28_1 = ecx
        top = 0
        ecx = arg5
        int32_t eax_3
        int32_t edx
        int32_t edx_1
        edx_1:eax_3 = sx.q(sub_5a1300(eax, edx, arg1, fconvert.s(x87_r7)))
        var_8 = ecx + ((eax_3 - edx_1) s>> 1 << 1)
    else
        var_8 = arg6
    
    unimplemented  {fld1 }
    int32_t var_28_3 = ecx
    unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
    bool c0_1 = unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1})
    bool c3_1 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
    unimplemented  {fcomp st0, st1}
    int32_t eax_1
    eax_1.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p = unimplemented  {test ah, 0x5}
    float var_18
    float var_14
    float var_10
    float var_c
    
    if (not(p))
        unimplemented  {fld1 }
        int32_t eax_5 = (&data_8bc4fc)[arg1 i* 2]
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fdivrp st1, st0}
        var_c = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
        unimplemented  {fstp dword [ebp-0x8], st0}
        unimplemented  {fld st0, dword [ebp-0x8]}
        float var_28_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_6
        int32_t* ecx_2
        int32_t edx_3
        eax_6, edx_3, ecx_2 = eax_5(var_28_4)
        unimplemented  {fmul st0, dword [ebp+0x10]}
        float edi_1 = 0f
        var_c = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
        unimplemented  {fstp dword [ebp-0x8], st0}
        int16_t top_8 = top + 2
        
        if (var_8 s<= 0)
            return eax_6
        
        int32_t* ebx_1 = arg2
        void* eax_13
        
        do
            unimplemented  {fld st0, dword [ebp+0x14]}
            float* var_28_5 = &var_14
            int32_t* var_2c_1 = &var_18
            float var_30_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
            unimplemented  {fstp dword [esp+0x8], st0}
            unimplemented  {fld st0, dword [ebp+0x10]}
            float var_34_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            unimplemented  {fld st0, dword [ebp-0x8]}
            float var_38_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int16_t eax_8
            int32_t edx_4
            eax_8, edx_4 = sub_5a14a0(&var_10, edx_3, edi_1, var_38_1, var_34_1, ecx_2, var_30_1)
            unimplemented  {fld st0, dword [ebp+0x10]}
            float var_28_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t eax_9 = sub_5a13a0(eax_8, edx_4, arg1, var_28_6)
            unimplemented  {fld st0, dword [ebp-0xc]}
            void* edx_5 = arg3 + ((eax_9 i* edi_1) << 2)
            void* var_28_7 = edx_5
            void* var_2c_2 = arg3
            float var_2c_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            float var_30_2 = var_14
            unimplemented  {fld st0, dword [ebp+0x10]}
            void* var_34_2 = arg3
            float var_34_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            top_8 += 1
            eax_13, ecx_2, edx_3 = sub_5a15c0(var_18, edx_5, arg1, var_34_3, arg3)
            edi_1 += 1
            ebx_1 = &ebx_1[2]
        while (edi_1 s< var_8)
        
        return eax_13
    
    float var_28_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    int32_t ecx_6 = (&data_8bc4fc)[arg1 i* 2](var_28_8)
    unimplemented  {fld st0, dword [ebp+0x10]}
    unimplemented  {fld st0, st0}
    int32_t ebx_2 = 0
    unimplemented  {fdivp st2, st0}
    unimplemented  {fdivp st2, st0}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    var_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
    unimplemented  {fstp dword [ebp-0x14], st0}
    int16_t top_25 = top + 1
    
    if (var_8 s> 0)
        int32_t* edi_2 = arg2
        
        do
            unimplemented  {fld st0, dword [ebp+0x14]}
            float* var_28_9 = &var_c
            float* var_2c_4 = &var_10
            float var_30_3 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
            unimplemented  {fstp dword [esp+0x10], st0}
            float var_34_4 = fconvert.s(unimplemented  {fst dword [esp+0xc], st0})
            unimplemented  {fld st0, dword [ebp-0x14]}
            float var_38_3 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
            unimplemented  {fstp dword [esp+0x8], st0}
            float var_40_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t eax_16
            int32_t edx_7
            edx_7:eax_16 = sx.q(sub_5a1300(&var_10, &var_c, arg1, var_40_1))
            int32_t* ecx_9 = ebx_2 - ((eax_16 - edx_7) s>> 1)
            int16_t eax_20
            int32_t edx_8
            eax_20, edx_8 = sub_5a1530(&var_14, edx_7, ecx_9, var_38_3, var_34_4, ecx_9, var_30_3)
            unimplemented  {fld st0, dword [ebp+0x10]}
            float var_28_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t eax_21 = sub_5a13a0(eax_20, edx_8, arg1, var_28_10)
            unimplemented  {fld st0, dword [ebp-0x10]}
            void* var_28_11 = arg3 + ((eax_21 * ebx_2) << 2)
            float var_2c_5 = arg1
            float ecx_11 = var_10
            float var_2c_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            float var_30_4 = ecx_11
            unimplemented  {fld st0, dword [ebp+0x10]}
            float var_34_5 = ecx_11
            float var_34_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            ecx_6 = sub_5a1780(var_c, edi_2, arg3, arg1, ecx_11, var_34_6)
            top_25 += 2
            unimplemented  {fld st0, dword [ebp+0x10]}
            ebx_2 += 1
            edi_2 = &edi_2[2]
        while (ebx_2 s< var_8)
    
    int32_t var_30_5 = ecx_6
    float var_30_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    return sub_5a1890(arg2, arg3, arg1, var_30_6, arg5, arg6)
}

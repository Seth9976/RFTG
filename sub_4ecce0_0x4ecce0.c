// 函数名称: sub_4ecce0
// 虚拟地址: 0x4ecce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4ecce0(int32_t arg1, float* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* ecx = *(arg3 + 0x2e4)
    *(arg3 + 0x2f0) = fconvert.s(fconvert.t(*(arg3 + 0x2e8)))
    int32_t* esi = arg4
    float* edi = arg2
    float* var_74 = edi
    int32_t* var_8c = esi
    long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x2ec)) * fconvert.t(ecx[0x16])
        + fconvert.t(*(arg3 + 0x2e8))))
    *(arg3 + 0x2e8) = fconvert.s(x87_r7_4)
    long double x87_r6 = float.t(1)
    x87_r6 - x87_r7_4
    int32_t eax_1
    eax_1.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x41}
    
    if (p)
        goto label_4ecd89
    
    int32_t* eax_2 = sub_466320(*ecx)
    
    if (*(*(arg3 + 0x2dc) * 0x134 + *eax_2 + 0xd1) != 0)
        long double x87_r7_5 = fconvert.t(*(arg3 + 0x2e8))
        *(arg3 + 0x2f4) += 1
        *(arg3 + 0x2e8) = fconvert.s(x87_r7_5 - fconvert.t(1.0))
    label_4ecd89:
        int32_t* eax_5 = sub_466320(**(arg3 + 0x2e4))
        int32_t ecx_5 = *(arg3 + 0x2dc) * 0x134
        
        if (*(ecx_5 + *eax_5 + 0xdb) != 0)
            int32_t eax_7 = esi[0x3c] * esi[0x3d]
            
            if (eax_7 s> 1)
                int32_t var_1bc_3 = ecx_5
                int32_t eax_9 = sub_4685a0(fconvert.s(fconvert.t(fconvert.s(float.t(eax_7)
                    * fconvert.t(*(arg3 + 0x2e8))))))
                int32_t ecx_6 = eax_7 - 1
                
                if (eax_9 s< ecx_6)
                    ecx_6 = eax_9
                
                edi[0xe] = mods.dp.d(sx.q(ecx_6), esi[0x3d])
                esi[0x3d]
                edi[0xd] = divs.dp.d(sx.q(ecx_6), esi[0x3d])
        
        int32_t eax_15 = 0
        float var_80_3 = fconvert.s(float.t(1))
        int32_t var_90 = 0xa
        long double x87_r7_11 = fconvert.t(0.100000001f)
        int32_t var_94_1 = 0
        float var_88_1 = fconvert.s(x87_r7_11)
        float var_84_2 = fconvert.s(x87_r7_11)
        int16_t top_1 = 0
        void var_a8
        float var_30
        float var_20
        int32_t* var_1c
        
        if (esi[0x42] s<= 0)
        label_4ece36:
            unimplemented  {fld st0, dword [eax+0x58]}
            float var_7c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
            unimplemented  {fstp dword [ebp-0x78], st0}
            unimplemented  {fld st0, dword [edi]}
            unimplemented  {fld st0, dword [ebp-0x78]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_30 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
            unimplemented  {fstp dword [ebp-0x2c], st0}
            unimplemented  {fld st0, dword [edi+0x4]}
            unimplemented  {fmul st0, st1}
            float var_2c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
            unimplemented  {fstp dword [ebp-0x28], st0}
            unimplemented  {fmul st0, dword [edi+0x8]}
            float var_28_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
            unimplemented  {fstp dword [ebp-0x24], st0}
            int32_t* eax_16 = sub_4ec740(&var_a8, var_30, var_2c_1, var_28_1)
            unimplemented  {fld st0, dword [ebx+0x298]}
            int32_t* ecx_9 = eax_16[1]
            var_20 = *eax_16
            int32_t edx_8 = eax_16[2]
            int32_t var_14_1 = eax_16[3]
            unimplemented  {fld st0, dword [ebp-0x10]}
            unimplemented  {fld st0, st0}
            var_1c = ecx_9
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            int32_t var_18_1 = edx_8
            unimplemented  {fld st0, dword [ebp-0x1c]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmul st0, dword [ebx+0x28c]}
            unimplemented  {fsubp st3, st0}
            unimplemented  {fsubp st3, st0}
            unimplemented  {fld st0, dword [ebx+0x290]}
            unimplemented  {fld st0, dword [ebp-0x18]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st4}
            unimplemented  {fxch st0, st4}
            unimplemented  {fsubrp st1, st0}
            unimplemented  {fsubrp st1, st0}
            unimplemented  {fld st0, dword [ebx+0x294]}
            unimplemented  {fld st0, dword [ebp-0x14]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st2}
            unimplemented  {fxch st0, st2}
            unimplemented  {fsubrp st1, st0}
            unimplemented  {fsubrp st1, st0}
            float var_14_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            unimplemented  {fld st0, st2}
            unimplemented  {fmul st0, dword [ebx+0x28c]}
            unimplemented  {fld st0, dword [ebx+0x298]}
            unimplemented  {fmul st0, st3}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {fld st0, dword [ebx+0x294]}
            unimplemented  {fmul st0, st5}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {fld st0, dword [ebx+0x290]}
            unimplemented  {fmul st0, st2}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
            unimplemented  {fstp dword [ebp-0x1c], st0}
            unimplemented  {fld st0, dword [ebx+0x298]}
            unimplemented  {fmul st0, st4}
            unimplemented  {fld st0, dword [ebx+0x290]}
            unimplemented  {fmul st0, st4}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {fld st0, st1}
            unimplemented  {fmul st0, dword [ebx+0x28c]}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {fld st0, dword [ebx+0x294]}
            unimplemented  {fmul st0, st3}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
            unimplemented  {fstp dword [ebp-0x18], st0}
            unimplemented  {fmul st0, dword [ebx+0x298]}
            unimplemented  {fld st0, dword [ebx+0x294]}
            unimplemented  {fmulp st3, st0}
            unimplemented  {fmulp st3, st0}
            unimplemented  {faddp st2, st0}
            unimplemented  {faddp st2, st0}
            int32_t* edx_9 = var_1c
            unimplemented  {fmul st0, dword [ebx+0x290]}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {fld st0, dword [ebx+0x28c]}
            *(arg3 + 0x28c) = var_20
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            *(arg3 + 0x290) = edx_9
            unimplemented  {fsubrp st1, st0}
            unimplemented  {fsubrp st1, st0}
            float var_18_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
            unimplemented  {fstp dword [ebp-0x14], st0}
            *(arg3 + 0x294) = var_18_2
            *(arg3 + 0x298) = var_14_2
            unimplemented  {fld st0, dword [edx+0x58]}
            float var_7c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
            unimplemented  {fstp dword [ebp-0x78], st0}
            unimplemented  {fld st0, dword [edi+0xc]}
            unimplemented  {fld st0, dword [ebp-0x78]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_30 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
            unimplemented  {fstp dword [ebp-0x2c], st0}
            unimplemented  {fld st0, dword [edi+0x10]}
            unimplemented  {fmul st0, st1}
            float var_2c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
            unimplemented  {fstp dword [ebp-0x28], st0}
            unimplemented  {fmul st0, dword [edi+0x14]}
            float var_28_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
            unimplemented  {fstp dword [ebp-0x24], st0}
            unimplemented  {fld st0, dword [ebp-0x2c]}
            unimplemented  {fld st0, qword [0x8a55e8]}
            unimplemented  {fmul st1, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
            unimplemented  {fstp dword [ebp-0x1c], st0}
            unimplemented  {fld st0, dword [ebp-0x28]}
            unimplemented  {fmul st0, st1}
            var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
            unimplemented  {fstp dword [ebp-0x18], st0}
            unimplemented  {fmul st0, dword [ebp-0x24]}
            float var_18_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
            unimplemented  {fstp dword [ebp-0x14], st0}
            unimplemented  {fld st0, dword [ebp-0x1c]}
            unimplemented  {fadd dword [ebx+0x29c]}
            *(arg3 + 0x29c) = fconvert.s(unimplemented  {fstp dword [ebx+0x29c], st0})
            unimplemented  {fstp dword [ebx+0x29c], st0}
            unimplemented  {fld st0, dword [ebx+0x2a0]}
            unimplemented  {fadd dword [ebp-0x18]}
            *(arg3 + 0x2a0) = fconvert.s(unimplemented  {fstp dword [ebx+0x2a0], st0})
            unimplemented  {fstp dword [ebx+0x2a0], st0}
            unimplemented  {fld st0, dword [ebp-0x14]}
            unimplemented  {fadd dword [ebx+0x2a4]}
            *(arg3 + 0x2a4) = fconvert.s(unimplemented  {fstp dword [ebx+0x2a4], st0})
            unimplemented  {fstp dword [ebx+0x2a4], st0}
            
            if (*(var_8c + 0xe2) != 0)
                unimplemented  {fld st0, dword [ebp-0x80]}
                float var_1bc_6 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                unimplemented  {fstp dword [esp+0x4], st0}
                unimplemented  {fld st0, dword [ebp-0x84]}
                float var_1c0_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4ec970(arg3, var_90, var_1c0_2, var_1bc_6)
            else if (*(var_8c + 0xe3) != 0)
                unimplemented  {fld st0, dword [ebp-0x7c]}
                float var_1bc_24 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                unimplemented  {fstp dword [esp+0x4], st0}
                unimplemented  {fld st0, dword [ebp-0x84]}
                float var_1c0_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4ecaf0(arg3, var_90, var_1c0_6, var_1bc_24)
            
            int32_t* eax_19
            eax_19.b = 1
            sub_5a6aba(var_c ^ &__saved_ebp)
            return eax_19
        
        while (true)
            int32_t* ebx_2 = esi[0x43] + (eax_15 << 3)
            int32_t eax_22 = *ebx_2 - 9
            int32_t* var_3c
            int32_t var_38
            int32_t* var_34
            float* eax_24
            float* ecx_16
            long double st0
            
            switch (eax_22)
                case 0
                    void var_188
                    float var_70[0x8]
                    __builtin_memcpy(&var_70, sub_4ec5e0(eax_22, &var_188, ebx_2[1], &var_188, edi), 
                        0x20)
                    float var_118[0x8]
                    sub_405f60(&var_118, &var_70)
                    __builtin_memcpy(arg3 + 0x288, &var_118, 0x20)
                    float* eax_46 = sub_465ec0(arg3 + 0x28c, &var_a8)
                    int32_t edx_41 = eax_46[1]
                    int32_t edi_5 = eax_46[2]
                    int32_t eax_47 = eax_46[3]
                    *(arg3 + 0x28c) = *eax_46
                    *(arg3 + 0x290) = edx_41
                    *(arg3 + 0x294) = edi_5
                    *(arg3 + 0x298) = eax_47
                    edi = var_74
                case 0x1a
                    int32_t ecx_13 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    int32_t var_1bc_7 = ecx_13
                    float var_1bc_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    st0 = sub_4f4130(var_1bc_8)
                    unimplemented  {call 0x4f4130}
                    float var_1bc_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top_1 += 2
                    void var_d8
                    float* eax_23 = sub_406230(&var_d8, &data_8409cc, var_1bc_9)
                    int32_t* edx_11 = eax_23[1]
                    var_20 = *eax_23
                    int32_t ecx_15 = eax_23[2]
                    var_1c = edx_11
                    int32_t var_18_4 = ecx_15
                    int32_t var_14_3 = eax_23[3]
                    ecx_16 = &var_20
                    void var_128
                    eax_24 = &var_128
                label_4ed096:
                    sub_405ee0(eax_24, arg3 + 0x28c, ecx_16)
                    int32_t edx_14 = eax_24[1]
                    int32_t edi_1 = eax_24[2]
                    int32_t eax_25 = eax_24[3]
                    *(arg3 + 0x28c) = *eax_24
                    *(arg3 + 0x290) = edx_14
                    *(arg3 + 0x294) = edi_1
                    *(arg3 + 0x298) = eax_25
                    edi = var_74
                case 0x1b
                    int32_t ecx_18 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    int32_t var_1bc_10 = ecx_18
                    float var_1bc_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    st0 = sub_4f4130(var_1bc_11)
                    unimplemented  {call 0x4f4130}
                    float var_1bc_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top_1 += 2
                    void var_148
                    float* eax_26 = sub_406230(&var_148, &data_8409b4, var_1bc_12)
                    int32_t edx_15 = eax_26[1]
                    var_30 = *eax_26
                    int32_t var_2c_3 = edx_15
                    int32_t var_28_3 = eax_26[2]
                    int32_t var_24_1 = eax_26[3]
                    ecx_16 = &var_30
                    void var_e8
                    eax_24 = &var_e8
                    goto label_4ed096
                case 0x1c
                    int32_t ecx_21 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    int32_t var_1bc_13 = ecx_21
                    float var_1bc_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    st0 = sub_4f4130(var_1bc_14)
                    unimplemented  {call 0x4f4130}
                    float var_1bc_15 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top_1 += 2
                    void var_f8
                    float* eax_27 = sub_406230(&var_f8, &data_8409c0, var_1bc_15)
                    int32_t* edx_17 = eax_27[1]
                    float var_40 = *eax_27
                    var_3c = edx_17
                    var_38 = eax_27[2]
                    var_34 = eax_27[3]
                    ecx_16 = &var_40
                    void var_138
                    eax_24 = &var_138
                    goto label_4ed096
                case 0x1d
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax]}
                    edi = var_74
                    *var_74 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                    unimplemented  {fstp dword [eax], st0}
                    top_1 += 2
                case 0x1e
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0x4]}
                    edi = var_74
                    var_74[1] = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                    unimplemented  {fstp dword [eax+0x4], st0}
                    top_1 += 2
                case 0x1f
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0x8]}
                    edi = var_74
                    var_74[2] = fconvert.s(unimplemented  {fstp dword [eax+0x8], st0})
                    unimplemented  {fstp dword [eax+0x8], st0}
                    top_1 += 2
                case 0x20
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0x29c]}
                    *(arg3 + 0x29c) = fconvert.s(unimplemented  {fstp dword [eax+0x29c], st0})
                    unimplemented  {fstp dword [eax+0x29c], st0}
                    top_1 += 2
                    edi = var_74
                case 0x21
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0x2a0]}
                    *(arg3 + 0x2a0) = fconvert.s(unimplemented  {fstp dword [eax+0x2a0], st0})
                    unimplemented  {fstp dword [eax+0x2a0], st0}
                    top_1 += 2
                    edi = var_74
                case 0x22
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0x2a4]}
                    *(arg3 + 0x2a4) = fconvert.s(unimplemented  {fstp dword [eax+0x2a4], st0})
                    unimplemented  {fstp dword [eax+0x2a4], st0}
                    top_1 += 2
                    edi = var_74
                case 0x23
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0xc]}
                    edi = var_74
                    var_74[3] = fconvert.s(unimplemented  {fstp dword [eax+0xc], st0})
                    unimplemented  {fstp dword [eax+0xc], st0}
                    top_1 += 2
                case 0x24
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0x10]}
                    edi = var_74
                    var_74[4] = fconvert.s(unimplemented  {fstp dword [eax+0x10], st0})
                    unimplemented  {fstp dword [eax+0x10], st0}
                    top_1 += 2
                case 0x25
                    st0 = sub_4eba60(ebx_2, edi)
                    unimplemented  {call 0x4eba60}
                    unimplemented  {fadd dword [eax+0x14]}
                    edi = var_74
                    var_74[5] = fconvert.s(unimplemented  {fstp dword [eax+0x14], st0})
                    unimplemented  {fstp dword [eax+0x14], st0}
                    top_1 += 2
                case 0x26
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_7c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                    unimplemented  {fstp dword [ebp-0x78], st0}
                    unimplemented  {fld st0, dword [edx+0x58]}
                    unimplemented  {fmul st0, dword [ebp-0x78]}
                    unimplemented  {fadd dword [edi+0xc]}
                    edi[3] = fconvert.s(unimplemented  {fstp dword [edi+0xc], st0})
                    unimplemented  {fstp dword [edi+0xc], st0}
                    top_1 += 1
                case 0x27
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_7c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                    unimplemented  {fstp dword [ebp-0x78], st0}
                    unimplemented  {fld st0, dword [ecx+0x58]}
                    unimplemented  {fmul st0, dword [ebp-0x78]}
                    unimplemented  {fadd dword [edi+0x10]}
                    edi[4] = fconvert.s(unimplemented  {fstp dword [edi+0x10], st0})
                    unimplemented  {fstp dword [edi+0x10], st0}
                    top_1 += 1
                case 0x28
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_7c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                    unimplemented  {fstp dword [ebp-0x78], st0}
                    unimplemented  {fld st0, dword [eax+0x58]}
                    unimplemented  {fmul st0, dword [ebp-0x78]}
                    unimplemented  {fadd dword [edi+0x14]}
                    edi[5] = fconvert.s(unimplemented  {fstp dword [edi+0x14], st0})
                    unimplemented  {fstp dword [edi+0x14], st0}
                    top_1 += 1
                case 0x29
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_7c_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                    unimplemented  {fstp dword [ebp-0x78], st0}
                    unimplemented  {fld st0, dword [ebp-0x78]}
                    unimplemented  {fld1 }
                    unimplemented  {fsubrp st1, st0}
                    unimplemented  {fsubrp st1, st0}
                    unimplemented  {fmul st0, dword [edx+0x58]}
                    unimplemented  {fmul st0, qword [0x8a55e8]}
                    unimplemented  {fmul st0, dword [edi+0xc]}
                    edi[3] = fconvert.s(unimplemented  {fstp dword [edi+0xc], st0})
                    unimplemented  {fstp dword [edi+0xc], st0}
                    top_1 += 1
                case 0x2a
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_7c_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                    unimplemented  {fstp dword [ebp-0x78], st0}
                    unimplemented  {fld st0, dword [ebp-0x78]}
                    unimplemented  {fld1 }
                    unimplemented  {fsubrp st1, st0}
                    unimplemented  {fsubrp st1, st0}
                    unimplemented  {fmul st0, dword [ecx+0x58]}
                    unimplemented  {fmul st0, qword [0x8a55e8]}
                    unimplemented  {fmul st0, dword [edi+0x10]}
                    edi[4] = fconvert.s(unimplemented  {fstp dword [edi+0x10], st0})
                    unimplemented  {fstp dword [edi+0x10], st0}
                    top_1 += 1
                case 0x2b
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_7c_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                    unimplemented  {fstp dword [ebp-0x78], st0}
                    unimplemented  {fld st0, dword [ebp-0x78]}
                    unimplemented  {fld1 }
                    unimplemented  {fsubrp st1, st0}
                    unimplemented  {fsubrp st1, st0}
                    unimplemented  {fmul st0, dword [eax+0x58]}
                    unimplemented  {fmul st0, qword [0x8a55e8]}
                    unimplemented  {fmul st0, dword [edi+0x14]}
                    edi[5] = fconvert.s(unimplemented  {fstp dword [edi+0x14], st0})
                    unimplemented  {fstp dword [edi+0x14], st0}
                    top_1 += 1
                case 0x2c
                    st0 = sub_4eba90(ebx_2, edi, st0)
                    top_1 += 1
                    unimplemented  {call 0x4eba90}
                case 0x2d
                    sub_4ec3f0(edi)
                    top_1 += 2
                case 0x2e
                    sub_4ec350(edi, st0, ebx_2)
                    top_1 += 1
                    edi = var_74
                case 0x2f
                    sub_4ec490(ebx_2, edi, st0)
                    top_1 += 1
                case 0x33
                    sub_4eb7e0(ebx_2, edi[0xc])
                    *(arg3 + 0x288) = fconvert.s(unimplemented  {fstp dword [eax+0x288], st0})
                    unimplemented  {fstp dword [eax+0x288], st0}
                    top_1 += 1
                case 0x38
                    sub_4ebb60(edi, st0, ebx_2)
                    top_1 += 1
                    edi = var_74
                case 0x42
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_7c_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                    unimplemented  {fstp dword [ebp-0x78], st0}
                    void var_168
                    int32_t eax_40 = sub_4eefe0(&var_168, arg3)
                    unimplemented  {fld st0, dword [ebp-0x78]}
                    void* eax_41 = *(arg3 + 0x2e4)
                    void var_c8
                    __builtin_memcpy(&var_c8, eax_40, 0x20)
                    char ecx_41 = *(eax_41 + 0x74)
                    
                    if (ecx_41 == 0)
                    label_4ed461:
                        unimplemented  {fld st0, dword [ebp-0xac]}
                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                        bool c0_2 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                        bool c2_2 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                            unimplemented  {fcom st0, st1})
                        bool c3_2 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                        eax_41.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                            | ((top_1 - 1) & 7) << 0xb
                        
                        if ((eax_41:1.b & 1) == 0)
                            unimplemented  {fsubp st1, st0}
                            unimplemented  {fsubp st1, st0}
                            unimplemented  {fadd dword [eax+0x2a0]}
                            *(arg3 + 0x2a0) = fconvert.s(unimplemented  {fstp dword [eax+0x2a0], st0})
                            unimplemented  {fstp dword [eax+0x2a0], st0}
                            top_1 += 1
                            goto label_4ed487
                        
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                    label_4ed597:
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top_1 += 1
                        edi = var_74
                    else
                        unimplemented  {fld st0, dword [ebp-0xa8]}
                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                        bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                        bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                            unimplemented  {fcom st0, st1})
                        bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                        eax_41.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | ((top_1 - 1) & 7) << 0xb
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (p_1)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            
                            if (ecx_41 != 0)
                                goto label_4ed597
                            
                            goto label_4ed461
                        
                        unimplemented  {fsubp st1, st0}
                        unimplemented  {fsubp st1, st0}
                        unimplemented  {fadd dword [edx+0x2a4]}
                        *(arg3 + 0x2a4) = fconvert.s(unimplemented  {fstp dword [edx+0x2a4], st0})
                        unimplemented  {fstp dword [edx+0x2a4], st0}
                        top_1 += 1
                    label_4ed487:
                        var_74[0x10].b = 1
                        var_74[3] = 0
                        var_74[4] = 0
                        var_74[5] = 0
                        edi = var_74
                case 0x43
                    if (edi[0x10].b != 0)
                        void var_1a8
                        int32_t eax_44 = sub_4eefe0(&var_1a8, arg3)
                        int32_t* ebx_3 = ebx_2[1]
                        void var_50
                        __builtin_memcpy(&var_50, eax_44, 0x20)
                        var_1c = var_3c
                        int32_t var_18_5 = var_38
                        int32_t* var_14_4 = var_34
                        
                        if (ebx_3 != 0)
                            int32_t** var_1bc_22 = &var_1c
                            eax_2 = sub_4eb490(var_34, ebx_3, var_3c)
                            
                            if (eax_2 != 0)
                                eax_2[8] = 1
                                eax_2[7] = *(*(arg3 + 0x2e4) + 0x1c)
                        
                        break
                case 0x47
                    sub_4ebf60(edi, ebx_2)
                    top_1 += 8
                case 0x5e
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_88_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
                    unimplemented  {fstp dword [ebp-0x84], st0}
                    top_1 += 1
                case 0x5f
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_80_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x7c], st0})
                    unimplemented  {fstp dword [ebp-0x7c], st0}
                    top_1 += 1
                case 0x60
                    int32_t var_1bc_17 = sub_4eb7e0(ebx_2, edi[0xc])
                    float var_1bc_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top_1 += 1
                    var_90 = sub_4685a0(var_1bc_18) + 1
                case 0x62
                    sub_4eb7e0(ebx_2, edi[0xc])
                    float var_84_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                    unimplemented  {fstp dword [ebp-0x80], st0}
                    top_1 += 1
            
            eax_15 = var_94_1 + 1
            var_94_1 = eax_15
            
            if (eax_15 s>= var_8c[0x42])
                goto label_4ece36
            
            esi = var_8c
    
    eax_2.b = 0
    sub_5a6aba(var_c ^ &__saved_ebp)
    return eax_2
}

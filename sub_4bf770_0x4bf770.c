// 函数名称: sub_4bf770
// 虚拟地址: 0x4bf770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4bf770(int32_t arg1, void* arg2, void* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i = 0
    char* const var_1c0 = &data_83f3d3
    char* const var_1b8 = &data_83f3d3
    char* const var_1b0 = &data_83f3d3
    char* const var_1a8 = &data_83f3d3
    char* const var_1a0 = &data_83f3d3
    void* var_144 = arg3
    void* const var_1c4 = &data_87988c
    void* const var_1bc = &data_879890
    void* const var_1b4 = &data_879894
    void* const var_1ac = &data_879898
    void* const var_1a4 = &data_87989c
    char const* const var_19c = "100+"
    int32_t var_64
    __builtin_memcpy(&var_64, 
        "\xc9\x00\x00\x00\xca\x00\x00\x00\xcb\x00\x00\x00\xcc\x00\x00\x00\xcd\x00\x00\x00\xce\x00\x00\x00\x"
    "cf\x00\x00\x00\xd0\x00\x00\x00\xd1\x00\x00\x00\xd2\x00\x00\x00\xd3\x00\x00\x00", 
        0x2c)
    int32_t var_38
    __builtin_memset(&var_38, 0, 0x2c)
    int32_t var_124 = 0xa
    int32_t eax_3
    void* ecx_1
    
    do
        eax_3, ecx_1 = sub_473290(arg2 + 0x4ec, *(&var_64 + i), 0)
        
        if (eax_3 != 0xfffffc18)
            *(&var_38 + i) = eax_3
            
            if (var_124 s<= eax_3)
                var_124 = eax_3
        
        i += 4
    while (i s< 0x2c)
    
    long double x87_r7 = float.t(0)
    float var_1f4 = fconvert.s(x87_r7)
    void var_118
    sub_4685f0(eax_3, arg4, ecx_1, &var_118, 0xb, 1.40129846e-45f, fconvert.s(x87_r7))
    void var_114
    void* edi_1 = &var_114
    void* var_128 = &var_114
    long double x87_r7_4 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0xc)))) * fconvert.t(100.0)))
    void* i_2 = nullptr
    long double x87_r6 = float.t(0)
    float var_184 = fconvert.s((fconvert.t(fconvert.s(x87_r7_4)) - x87_r6) * fconvert.t(0.5) + x87_r6)
    float var_188 = fconvert.s(x87_r6 + fconvert.t(fconvert.s(x87_r7_4)) - x87_r6)
    int16_t top = 0
    void* i_1
    
    do
        unimplemented  {fld st0, dword [edi-0x4]}
        float var_11c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x118], st0})
        unimplemented  {fstp dword [ebp-0x118], st0}
        unimplemented  {fld st0, dword [edi+0x4]}
        unimplemented  {fld st0, dword [ebp-0x118]}
        unimplemented  {fld st0, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        unimplemented  {fmul st0, qword [0x8a5368]}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        float var_11c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x118], st0})
        unimplemented  {fstp dword [ebp-0x118], st0}
        unimplemented  {fld st0, dword [ebp-0x118]}
        unimplemented  {fsub st0, dword [ebp-0x180]}
        float var_168_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x164], st0})
        unimplemented  {fstp dword [ebp-0x164], st0}
        unimplemented  {fld st0, dword [edi]}
        float var_198 = var_168_1
        float var_11c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x118], st0})
        unimplemented  {fstp dword [ebp-0x118], st0}
        unimplemented  {fld st0, dword [edi+0x8]}
        unimplemented  {fld st0, dword [ebp-0x118]}
        unimplemented  {fld st0, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        float var_11c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x118], st0})
        unimplemented  {fstp dword [ebp-0x118], st0}
        unimplemented  {fld st0, dword [ebp-0x118]}
        unimplemented  {fsub st0, dword [ebp-0x184]}
        float var_164_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x160], st0})
        unimplemented  {fstp dword [ebp-0x160], st0}
        unimplemented  {fld st0, dword [ebp-0x164]}
        float var_194_1 = var_164_1
        unimplemented  {fadd dword [ebp-0x13c]}
        float ecx_3 = *(edi_1 - 4)
        int32_t ecx_4 = *(edi_1 + 8)
        float var_160_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x15c], st0})
        unimplemented  {fstp dword [ebp-0x15c], st0}
        unimplemented  {fld st0, dword [ebp-0x160]}
        int32_t var_16c_1 = ecx_4
        unimplemented  {fld st0, st0}
        float var_190_1 = var_160_1
        unimplemented  {fadd dword [ebp-0x138]}
        int32_t edx_2 = *edi_1
        float var_15c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x158], st0})
        unimplemented  {fstp dword [ebp-0x158], st0}
        float var_18c_1 = var_15c_1
        int32_t eax_6 = *(edi_1 + 4)
        float var_16c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x168], st0})
        unimplemented  {fstp dword [ebp-0x168], st0}
        unimplemented  {fld st0, dword [ebx+0xc]}
        data_307bd98
        unimplemented  {fmul st0, qword [0x8a5558]}
        int32_t var_1f4_1 = ecx_4
        float var_11c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x118], st0})
        unimplemented  {fstp dword [ebp-0x118], st0}
        unimplemented  {fld st0, dword [ebp-0x118]}
        float var_1f4_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        sub_4cae70(5, &var_198, i_2, *(&var_1c4 + i_2))
        top -= 1
        unimplemented  {call 0x4cae70}
        
        if (var_124 != 0)
            int32_t eax_8 = *(&var_38 + i_2)
            int32_t var_11c_6 = eax_8
            
            if (eax_8 != 0)
                unimplemented  {fild st0, dword [ebp-0x118]}
                unimplemented  {fidiv st0, dword [ebp-0x120]}
                int32_t var_150_1 = edx_2
                float var_154 = ecx_3
                float var_138_1 = ecx_3
                int32_t var_130_1 = eax_6
                float var_12c_1 = var_16c_2
                float var_11c_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x118], st0})
                unimplemented  {fstp dword [ebp-0x118], st0}
                unimplemented  {fld st0, dword [ebp-0x170]}
                unimplemented  {fld st0, dword [ebp-0x160]}
                unimplemented  {fld st0, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fmul st0, dword [ebp-0x118]}
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                float var_150_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                unimplemented  {fstp dword [ebp-0x14c], st0}
                unimplemented  {fld st0, dword [esi+0xc]}
                float var_134_1 = var_150_2
                float var_11c_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x118], st0})
                unimplemented  {fstp dword [ebp-0x118], st0}
                unimplemented  {fld st0, dword [ebp-0x118]}
                unimplemented  {fld st0, qword [0x8a5968]}
                unimplemented  {fmul st0, st1}
                float var_180_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x17c], st0})
                unimplemented  {fstp dword [ebp-0x17c], st0}
                unimplemented  {fmul st0, qword [0x8a5410]}
                float var_17c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x178], st0})
                unimplemented  {fstp dword [ebp-0x178], st0}
                unimplemented  {fld st0, dword [ebp-0x150]}
                unimplemented  {fld st0, dword [ebp-0x17c]}
                unimplemented  {fld st0, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_138_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                unimplemented  {fstp dword [ebp-0x134], st0}
                unimplemented  {fld st0, dword [ebp-0x130]}
                var_154 = var_138_2
                unimplemented  {fld st0, dword [ebp-0x178]}
                unimplemented  {fld st0, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_134_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x130], st0})
                unimplemented  {fstp dword [ebp-0x130], st0}
                unimplemented  {fld st0, dword [ebp-0x12c]}
                float var_150_3 = var_134_2
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_130_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x12c], st0})
                unimplemented  {fstp dword [ebp-0x12c], st0}
                float var_14c_1 = var_130_2
                unimplemented  {fadd dword [ebp-0x128]}
                float eax_12 = data_27e7fe0
                float var_12c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x128], st0})
                unimplemented  {fstp dword [ebp-0x128], st0}
                int16_t top_46
                top = top_46 + 2
                float var_148_1 = var_12c_2
                
                if (*(eax_12 i+ 0x38) == 0)
                    sub_4d9830(eax_12, &data_be4aac, data_307c048, &data_84076c, &var_154, nullptr)
                    unimplemented  {call 0x4d9830}
                else
                    void var_1e4
                    eax_12 = sub_4d9650(&var_154, eax_12 i+ 0x28, &data_84076c, &var_1e4, &var_154)
                    
                    if (eax_12.b != 0)
                        void var_1d4
                        sub_4d9830(eax_12, &data_be4aac, data_307c048, &var_1e4, &var_1d4, nullptr)
                        unimplemented  {call 0x4d9830}
                
                edi_1 = var_128
        
        i_1 = i_2 + 4
        edi_1 += 0x10
        var_128 = edi_1
        i_2 = i_1
    while (i_1 s< 0x2c)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i_1
}

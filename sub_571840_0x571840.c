// 函数名称: sub_571840
// 虚拟地址: 0x571840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_571840()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_575190(&data_2727b88)
    sub_570550(eax_2, edx, &data_2727b88, &data_2727b98, &data_2727b88)
    long double x87_r7 = float.t(0)
    void* eax_3 = data_27e7fd0
    float var_fc = fconvert.s(x87_r7)
    float var_f8 = fconvert.s(x87_r7)
    float var_ac = var_f8
    int32_t var_11c = data_2727b88
    float var_f4 = fconvert.s(float.t(*(eax_3 + 0x14)))
    float var_b0 = var_fc
    float var_f0 = fconvert.s(float.t(*(eax_3 + 0x18)))
    data_2727b78
    float var_a8 = var_f4
    long double x87_r6 = float.t(1)
    float var_a4 = var_f0
    int32_t var_110 = data_2727b94
    int32_t var_118 = data_2727b8c
    int32_t var_114 = data_2727b90
    int32_t var_104 = data_2727ba0
    int32_t var_10c = data_2727b98
    int32_t var_108 = data_2727b9c
    void var_a0
    __builtin_memcpy(&var_a0, &var_11c, 0x1c)
    float var_20 = fconvert.s(x87_r6 / x87_r6)
    long double x87_r6_1 = fconvert.t(data_2727b74)
    var_20 = fconvert.s(fconvert.t(var_20) * x87_r6_1)
    long double x87_r6_3 = fconvert.t(var_20)
    float var_ec = fconvert.s(fneg(x87_r6_3))
    float esi = var_ec
    float var_c0 = esi
    float var_e8 = fconvert.s(fneg(x87_r6_1))
    float var_bc = var_e8
    float var_e4 = fconvert.s(x87_r6_3)
    float var_b8 = var_e4
    float var_e0 = fconvert.s(x87_r6_1)
    float var_b4 = var_e0
    float var_dc
    int32_t eax_9
    int80_t st0_1
    st0_1, eax_9 = sub_4c6230(&var_dc)
    int32_t* eax_10 = sub_4e4c10(eax_9, &var_dc, &var_c0, &var_dc)
    float var_6c = *eax_10
    float edx_6 = eax_10[1]
    float ecx_7 = eax_10[2]
    float edx_7 = eax_10[3]
    float ecx_8 = eax_10[4]
    float edx_8 = eax_10[5]
    float var_74 = fconvert.s(fconvert.t(data_2727b7c))
    float var_70 = fconvert.s(fconvert.t(data_2727b80))
    void var_174
    __builtin_memcpy(&var_174, &var_11c, 0x1c)
    float var_158 = esi
    float var_14c = var_e0
    float var_154 = var_e8
    float var_148 = var_74
    int32_t eax_14 = data_26a6760
    float var_144 = var_70
    data_2727bac
    float var_150 = var_e4
    void var_140
    __builtin_memcpy(&var_140, &data_be4c5c, 0x20)
    sub_50cce0(eax_14, &var_174)
    int32_t eax_15 = sub_5715d0(&var_6c)
    
    if (eax_15.b == 0)
        int32_t eax_16
        int80_t st0_2
        st0_2, eax_16 = sub_5100b0(eax_15, &var_6c, data_2727bac, &var_6c)
        data_2727bb0 = eax_16
    else
        data_2727bb0 = 0xffffffff
    
    int32_t* eax_17 = sub_5703e0(&var_11c)
    float edx_12 = eax_17[1]
    long double x87_r7_11 = fconvert.t(eax_17[3]) + fconvert.t(*eax_17)
    float edx_14 = eax_17[5]
    float var_7c = eax_17[2]
    float ecx_13 = eax_17[4]
    float var_3c = fconvert.s(x87_r7_11)
    float var_38 = fconvert.s(fconvert.t(ecx_13) + fconvert.t(edx_12))
    float var_34 = fconvert.s(fconvert.t(edx_14) + fconvert.t(var_7c))
    long double x87_r6_4 = fconvert.t(0.5)
    float var_1c = fconvert.s(fconvert.t(var_3c) * x87_r6_4)
    long double x87_r6_6 = fconvert.t(var_38)
    var_38 = var_1c
    bool cond:0 = (*(data_27e7fdc + 0xc) & 1) == 0
    long double x87_r7_19 = x87_r6_4 * fconvert.t(var_34)
    var_34 = fconvert.s(x87_r6_6 * x87_r6_4)
    float var_30 = fconvert.s(x87_r7_19)
    char var_c1_1
    HWND eax_20
    
    if (not(cond:0) && *(data_27e7bbc + 0x18) != 0)
        eax_20 = GetFocus()
        var_c1_1 = 1
    
    if (cond:0 || *(data_27e7bbc + 0x18) == 0 || data_30785e0 != eax_20)
        var_c1_1 = 0
    
    int32_t var_d8
    int32_t eax_21
    
    if (data_273ac18 != 0 || var_c1_1 == 0)
        eax_21 = data_273abf4
    else
        float var_1d4_1 = var_6c
        float var_1d0_1 = edx_6
        float var_1cc_1 = ecx_7
        float var_1c8_2 = edx_7
        float var_1c4_1 = ecx_8
        float var_1c0_3 = edx_8
        int80_t st0_3
        st0_3, eax_21 = sub_570df0(&data_273abf8, &var_38)
        float edx_20 = var_dc
        data_273abf4 = eax_21
        data_273abe0 = edx_20
        data_273abe4 = var_d8
        
        if (eax_21 != 1)
            if ((0x8000 & GetKeyState(0x12)) != 0)
                sub_5713b0()
            
            sub_56fb80()
            sub_4d7b10(0x273ac08, &var_6c, &var_20)
            long double x87_r5_5 = fconvert.t(var_20)
            var_3c = fconvert.s(fconvert.t(edx_7) * x87_r5_5)
            var_38 = fconvert.s(fconvert.t(ecx_8) * x87_r5_5)
            var_34 = fconvert.s(x87_r5_5 * fconvert.t(edx_8))
            var_1c = fconvert.s(fconvert.t(var_3c) + fconvert.t(var_6c))
            data_273abfc = var_1c
            data_273ac00 = fconvert.s(fconvert.t(edx_6) + fconvert.t(var_38))
            data_273ac04 = fconvert.s(fconvert.t(ecx_7) + fconvert.t(var_34))
            eax_21 = data_273abf4
    
    float edx_22 = data_273abd8
    var_38 = data_273abd4
    int32_t ecx_22 = data_273abdc
    var_34 = edx_22
    int32_t var_30_1 = ecx_22
    
    if (eax_21 u> 0xb)
        sub_4c5870("Halt", &data_83f3d3, "Editor\FabEditor.cpp", 0x528, "FabEditorUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    float var_d0
    float var_2c
    float var_28
    float var_24
    
    switch (eax_21)
        case 1
            unimplemented  {fld st0, dword [0x273abe0]}
            float eax_24 = var_dc
            var_ec = fconvert.s(unimplemented  {fstp dword [ebp-0xe8], st0})
            unimplemented  {fstp dword [ebp-0xe8], st0}
            unimplemented  {fld st0, dword [0x273abe4]}
            float edx_24 = var_ec
            float var_e8_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xe4], st0})
            unimplemented  {fstp dword [ebp-0xe4], st0}
            data_273abec = var_d8
            unimplemented  {fld st0, dword [ebp-0xd8]}
            var_3c = edx_24
            float var_e4_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xe0], st0})
            unimplemented  {fstp dword [ebp-0xe0], st0}
            unimplemented  {fld st0, dword [ebp-0xd4]}
            data_273abe8 = eax_24
            float var_e0_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xdc], st0})
            unimplemented  {fstp dword [ebp-0xdc], st0}
            var_34 = var_e4_1
            float var_30_2 = var_e0_1
            var_38 = var_e8_1
            float var_184[0x4]
            int32_t* eax_26 = sub_530960(&var_3c, &var_184)
            float edx_27 = eax_26[1]
            var_3c = *eax_26
            float ecx_27 = eax_26[2]
            var_38 = edx_27
            int32_t edx_28 = eax_26[3]
            float eax_27 = var_fc
            var_34 = ecx_27
            int32_t var_30_3 = edx_28
            var_2c = eax_27
            var_28 = var_f8
            var_24 = var_f4
            var_20 = var_f0
            float eax_29
            int32_t edx_30
            eax_29, edx_30 = sub_40af40(&var_3c)
            var_d0 = eax_29
            int32_t var_cc_1 = edx_30
            float eax_31
            int32_t edx_31
            eax_31, edx_31 = sub_4e4e10(&var_2c, edx_30, &var_d0)
            int32_t var_14_2 = edx_31
            var_dc = eax_31
            int32_t var_d8_1 = edx_31
            float eax_32
            int32_t edx_32
            eax_32, edx_32 = sub_4fc8c0(&var_3c)
            var_d0 = eax_32
            int32_t var_cc_2 = edx_32
            float eax_34
            float edx_33
            eax_34, edx_33 = sub_4e4e10(&var_2c, edx_32, &var_d0)
            unimplemented  {fld st0, dword [ebp-0x10]}
            unimplemented  {fld1 }
            float var_cc_3 = edx_33
            unimplemented  {fld st0, st0}
            var_24 = eax_34
            unimplemented  {fsubrp st2, st0}
            unimplemented  {fsubrp st2, st0}
            var_20 = edx_33
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            float var_d8_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xd4], st0})
            unimplemented  {fstp dword [ebp-0xd4], st0}
            unimplemented  {fsub st0, dword [ebp-0xc8]}
            var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
            unimplemented  {fstp dword [ebp-0x1c], st0}
            float eax_36
            int32_t edx_34
            eax_36, edx_34 = sub_4e4dc0(&var_c0, edx_33, &var_24)
            var_d0 = eax_36
            int32_t var_cc_4 = edx_34
            float eax_38
            float edx_35
            eax_38, edx_35 = sub_4e4dc0(&var_c0, edx_34, &var_dc)
            var_24 = eax_38
            unimplemented  {fld st0, dword [ebp-0x20]}
            var_3c = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
            unimplemented  {fstp dword [ebp-0x38], st0}
            var_20 = edx_35
            unimplemented  {fld st0, dword [ebp-0x1c]}
            var_38 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
            unimplemented  {fstp dword [ebp-0x34], st0}
            unimplemented  {fld st0, dword [ebp-0xcc]}
            float ecx_35 = var_38
            float eax_39 = var_3c
            var_34 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
            unimplemented  {fstp dword [ebp-0x30], st0}
            unimplemented  {fld st0, dword [ebp-0xc8]}
            float edx_36 = var_34
            float var_30_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
            unimplemented  {fstp dword [ebp-0x2c], st0}
            unimplemented  {fld st0, dword [0x2727b7c]}
            float var_68_1 = ecx_35
            var_34 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
            unimplemented  {fstp dword [ebp-0x30], st0}
            float ecx_36 = var_34
            unimplemented  {fld st0, dword [0x2727b80]}
            float var_64_1 = edx_36
            float var_30_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
            unimplemented  {fstp dword [ebp-0x2c], st0}
            float var_60_1 = var_30_4
            int32_t* esi_2 = data_26a6760
            int32_t i = 0
            var_6c = eax_39
            float var_5c_1 = ecx_36
            float var_58_1 = var_30_5
            data_2728bbc = 0
            float eax_40 = sub_50c140(esi_2)
            var_20 = eax_40
            
            if (*(eax_40 i+ 4) s> 0)
                int32_t var_d8_3 = 0
                
                do
                    if (*(var_d8_3 + *eax_40 + 0x31) == 0)
                        void var_1ac
                        void var_54
                        __builtin_memcpy(&var_54, sub_510030(&var_1ac, data_2727bac, i, &var_1ac), 0x28)
                        
                        if (sub_5690f0(&var_6c, &var_54) != 0)
                            *((data_2728bbc << 2) + &data_2727bbc) = i
                            data_2728bbc += 1
                        
                        eax_40 = var_20
                    
                    var_d8_3 += 0xb8
                    i += 1
                while (i s< *(eax_40 i+ 4))
            
            if (var_c1_1 == 0)
                int16_t eax_45 = GetKeyState(0x10)
                HWND eax_46
                int32_t ecx_39
                
                if ((0x8000 & eax_45) != 0 && *(data_27e7bbc + 0x18) != 0)
                    eax_46, ecx_39 = GetFocus()
                
                if ((0x8000 & eax_45) == 0 || *(data_27e7bbc + 0x18) == 0 || eax_46 != data_30785e0)
                    data_26a7764 = 0
                    ecx_39 = sub_56f3d0()
                
                int32_t i_1 = 0
                
                if (data_2728bbc s> 0)
                    do
                        ecx_39 = sub_56f460(ecx_39, *((i_1 << 2) + &data_2727bbc))
                        i_1 += 1
                    while (i_1 s< data_2728bbc)
                
                data_2728bbc = 0
                data_273abf4 = 0
        case 2, 3, 4
            sub_4d7b10(0x273ac08, &var_6c, &var_20)
            unimplemented  {call 0x4d7b10}
            unimplemented  {fld st0, dword [ebp-0x5c]}
            unimplemented  {fld st0, dword [ebp-0x1c]}
            int32_t esi_4 = data_273abf8
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
            unimplemented  {fstp dword [ebp-0x18], st0}
            unimplemented  {fld st0, dword [ebp-0x58]}
            unimplemented  {fmul st0, st1}
            float var_18_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
            unimplemented  {fstp dword [ebp-0x14], st0}
            unimplemented  {fmul st0, dword [ebp-0x54]}
            float var_14_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            unimplemented  {fld st0, dword [ebp-0x18]}
            unimplemented  {fadd dword [ebp-0x68]}
            float var_d4_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xd0], st0})
            unimplemented  {fstp dword [ebp-0xd0], st0}
            unimplemented  {fld st0, dword [ebp-0x14]}
            unimplemented  {fadd dword [ebp-0x64]}
            var_d0 = fconvert.s(unimplemented  {fstp dword [ebp-0xcc], st0})
            unimplemented  {fstp dword [ebp-0xcc], st0}
            unimplemented  {fld st0, dword [ebp-0x10]}
            unimplemented  {fadd dword [ebp-0x60]}
            float var_cc_5 = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
            unimplemented  {fstp dword [ebp-0xc8], st0}
            unimplemented  {fld st0, dword [0x273abfc]}
            unimplemented  {fld st0, dword [ebp-0x34]}
            unimplemented  {fld st0, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_2c = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
            unimplemented  {fstp dword [ebp-0x28], st0}
            unimplemented  {fld st0, dword [0x273ac00]}
            unimplemented  {fld st0, dword [ebp-0x30]}
            unimplemented  {fld st0, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_28 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
            unimplemented  {fstp dword [ebp-0x24], st0}
            unimplemented  {fld st0, dword [0x273ac04]}
            unimplemented  {fld st0, dword [ebp-0x2c]}
            unimplemented  {fld st0, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_24 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
            unimplemented  {fstp dword [ebp-0x20], st0}
            unimplemented  {fld st0, dword [ebp-0xd0]}
            unimplemented  {fsubrp st3, st0}
            unimplemented  {fsubrp st3, st0}
            unimplemented  {fxch st0, st2}
            unimplemented  {fxch st0, st2}
            var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
            unimplemented  {fstp dword [ebp-0x18], st0}
            unimplemented  {fsubr st0, dword [ebp-0xcc]}
            float var_18_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
            unimplemented  {fstp dword [ebp-0x14], st0}
            unimplemented  {fsubr st0, dword [ebp-0xc8]}
            float var_14_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            unimplemented  {fld st0, dword [ebp-0x18]}
            unimplemented  {fsub st0, dword [ebp-0x28]}
            var_3c = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
            unimplemented  {fstp dword [ebp-0x38], st0}
            float eax_47 = var_3c
            unimplemented  {fld st0, dword [ebp-0x14]}
            unimplemented  {fsub st0, dword [ebp-0x24]}
            var_38 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
            unimplemented  {fstp dword [ebp-0x34], st0}
            float ecx_40 = var_38
            unimplemented  {fld st0, dword [ebp-0x10]}
            unimplemented  {fsub st0, dword [ebp-0x20]}
            var_34 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
            unimplemented  {fstp dword [ebp-0x30], st0}
            float edx_42 = var_34
            float var_18_4
            
            if (esi_4 != 1)
                if (esi_4 == 2)
                    unimplemented  {fld st0, dword [ebp-0x38]}
                    unimplemented  {fldz }
                    unimplemented  {fmul st1, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                    unimplemented  {fstp dword [ebp-0x18], st0}
                    unimplemented  {fld st0, dword [ebp-0x34]}
                    var_18_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                    unimplemented  {fstp dword [ebp-0x14], st0}
                    unimplemented  {fmul st0, dword [ebp-0x30]}
                    goto label_57206d
                
                if (esi_4 == 3)
                    unimplemented  {fld st0, dword [ebp-0x38]}
                    unimplemented  {fldz }
                    unimplemented  {fmul st1, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                    unimplemented  {fstp dword [ebp-0x18], st0}
                    unimplemented  {fmul st0, dword [ebp-0x34]}
                    var_18_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                    unimplemented  {fstp dword [ebp-0x14], st0}
                    unimplemented  {fld st0, dword [ebp-0x30]}
                    goto label_57206d
            else
                unimplemented  {fld st0, dword [ebp-0x38]}
                var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                unimplemented  {fstp dword [ebp-0x18], st0}
                unimplemented  {fld st0, dword [ebp-0x34]}
                unimplemented  {fldz }
                unimplemented  {fmul st1, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                var_18_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                unimplemented  {fmul st0, dword [ebp-0x30]}
            label_57206d:
                eax_47 = var_1c
                float var_14_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                ecx_40 = var_18_4
                edx_42 = var_14_5
            sub_56ffd0(eax_47, ecx_40, edx_42)
            unimplemented  {call 0x56ffd0}
        case 5, 6, 7
            char eax_48 = sub_4d7b10(0x273ac08, &var_6c, &var_20)
            unimplemented  {call 0x4d7b10}
            
            if (eax_48 != 0)
                unimplemented  {fld st0, dword [ebp-0x5c]}
                unimplemented  {fld st0, dword [ebp-0x1c]}
                unimplemented  {fld st0, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                unimplemented  {fstp dword [ebp-0x18], st0}
                unimplemented  {fld st0, dword [ebp-0x58]}
                unimplemented  {fmul st0, st1}
                float var_18_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                unimplemented  {fmul st0, dword [ebp-0x54]}
                float var_14_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld st0, dword [ebp-0x18]}
                unimplemented  {fadd dword [ebp-0x68]}
                float var_d4_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xd0], st0})
                unimplemented  {fstp dword [ebp-0xd0], st0}
                unimplemented  {fld st0, dword [ebp-0x14]}
                unimplemented  {fadd dword [ebp-0x64]}
                var_d0 = fconvert.s(unimplemented  {fstp dword [ebp-0xcc], st0})
                unimplemented  {fstp dword [ebp-0xcc], st0}
                unimplemented  {fld st0, dword [ebp-0x10]}
                unimplemented  {fadd dword [ebp-0x60]}
                float var_cc_6 = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                unimplemented  {fstp dword [ebp-0xc8], st0}
                unimplemented  {fld st0, dword [0x273abfc]}
                unimplemented  {fld st0, dword [ebp-0x34]}
                unimplemented  {fld st0, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                unimplemented  {fstp dword [ebp-0x18], st0}
                unimplemented  {fld st0, dword [0x273ac00]}
                var_28 = var_1c
                unimplemented  {fld st0, dword [ebp-0x30]}
                unimplemented  {fld st0, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_18_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                unimplemented  {fld st0, dword [0x273ac04]}
                var_24 = var_18_6
                unimplemented  {fld st0, dword [ebp-0x2c]}
                unimplemented  {fld st0, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fsubp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_14_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld st0, dword [ebp-0xd0]}
                var_20 = var_14_7
                unimplemented  {fsubrp st3, st0}
                unimplemented  {fsubrp st3, st0}
                unimplemented  {fxch st0, st2}
                unimplemented  {fxch st0, st2}
                var_3c = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
                unimplemented  {fstp dword [ebp-0x38], st0}
                var_1c = var_3c
                unimplemented  {fsubr st0, dword [ebp-0xcc]}
                var_38 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
                unimplemented  {fstp dword [ebp-0x34], st0}
                float var_18_7 = var_38
                unimplemented  {fsubr st0, dword [ebp-0xc8]}
                var_34 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_14_8 = var_34
                float* eax_51 = sub_4132a0(&var_1c, &var_ec)
                int32_t ecx_43 = eax_51[1]
                var_1c = *eax_51
                int32_t var_18_8 = ecx_43
                int32_t var_14_9 = eax_51[2]
                int32_t* eax_52 = sub_4132a0(&var_28, &var_fc)
                float edx_47 = eax_52[1]
                int32_t eax_53 = eax_52[2]
                var_38 = *eax_52
                var_34 = edx_47
                int32_t var_30_6 = eax_53
                float* eax_54 = sub_4137a0(&var_38, 0x273ac08)
                float ecx_45 = eax_54[1]
                var_3c = *eax_54
                float edx_50 = eax_54[2]
                int32_t eax_55 = eax_54[3]
                var_38 = ecx_45
                var_34 = edx_50
                int32_t var_30_7 = eax_55
                int32_t* eax_56 = sub_465ec0(&var_3c, &var_7c)
                float edx_51 = eax_56[1]
                var_3c = *eax_56
                float ecx_47 = eax_56[2]
                var_38 = edx_51
                int32_t edx_52 = eax_56[3]
                var_34 = ecx_47
                int32_t var_30_8 = edx_52
                sub_56fc30()
        case 8, 9, 0xa, 0xb
            sub_4d7b10(0x273ac08, &var_6c, &var_20)
            unimplemented  {call 0x4d7b10}
            unimplemented  {fld st0, dword [ebp-0x5c]}
            unimplemented  {fld st0, dword [ebp-0x1c]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
            unimplemented  {fstp dword [ebp-0x18], st0}
            unimplemented  {fld st0, dword [ebp-0x58]}
            unimplemented  {fmul st0, st1}
            float var_18_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
            unimplemented  {fstp dword [ebp-0x14], st0}
            unimplemented  {fmul st0, dword [ebp-0x54]}
            float var_14_10 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            unimplemented  {fld st0, dword [ebp-0x18]}
            unimplemented  {fadd dword [ebp-0x68]}
            float var_d4_3 = fconvert.s(unimplemented  {fstp dword [ebp-0xd0], st0})
            unimplemented  {fstp dword [ebp-0xd0], st0}
            unimplemented  {fld st0, dword [ebp-0x14]}
            unimplemented  {fadd dword [ebp-0x64]}
            var_d0 = fconvert.s(unimplemented  {fstp dword [ebp-0xcc], st0})
            unimplemented  {fstp dword [ebp-0xcc], st0}
            unimplemented  {fld st0, dword [ebp-0x10]}
            unimplemented  {fadd dword [ebp-0x60]}
            float var_cc_7 = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
            unimplemented  {fstp dword [ebp-0xc8], st0}
            unimplemented  {fld st0, dword [0x273abfc]}
            unimplemented  {fld st0, dword [ebp-0x34]}
            unimplemented  {fld st0, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_2c = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
            unimplemented  {fstp dword [ebp-0x28], st0}
            unimplemented  {fld st0, dword [0x273ac00]}
            unimplemented  {fld st0, dword [ebp-0x30]}
            unimplemented  {fld st0, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_28 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
            unimplemented  {fstp dword [ebp-0x24], st0}
            unimplemented  {fld st0, dword [0x273ac04]}
            unimplemented  {fld st0, dword [ebp-0x2c]}
            unimplemented  {fld st0, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_24 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
            unimplemented  {fstp dword [ebp-0x20], st0}
            unimplemented  {fld st0, dword [ebp-0xd0]}
            unimplemented  {fsubrp st3, st0}
            unimplemented  {fsubrp st3, st0}
            unimplemented  {fxch st0, st2}
            unimplemented  {fxch st0, st2}
            var_3c = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
            unimplemented  {fstp dword [ebp-0x38], st0}
            unimplemented  {fsubr st0, dword [ebp-0xcc]}
            var_38 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
            unimplemented  {fstp dword [ebp-0x34], st0}
            unimplemented  {fsubr st0, dword [ebp-0xc8]}
            var_34 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
            unimplemented  {fstp dword [ebp-0x30], st0}
            unimplemented  {fld st0, dword [ebp-0x38]}
            unimplemented  {fld st0, dword [ebp-0x34]}
            unimplemented  {fld st0, dword [ebp-0x30]}
            unimplemented  {fld st0, dword [ebp-0x28]}
            var_d4_3.q = fconvert.d(unimplemented  {fstp qword [ebp-0xd0], st0})
            unimplemented  {fstp qword [ebp-0xd0], st0}
            unimplemented  {fld st0, dword [ebp-0x24]}
            var_1c.q = fconvert.d(unimplemented  {fstp qword [ebp-0x18], st0})
            unimplemented  {fstp qword [ebp-0x18], st0}
            unimplemented  {fld st0, dword [ebp-0x20]}
            var_34.q = fconvert.d(unimplemented  {fstp qword [ebp-0x30], st0})
            unimplemented  {fstp qword [ebp-0x30], st0}
            unimplemented  {fld st0, st1}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fld st0, st2}
            unimplemented  {fmulp st3, st0}
            unimplemented  {fmulp st3, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            unimplemented  {faddp st2, st0}
            unimplemented  {faddp st2, st0}
            unimplemented  {fmul st0, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
            unimplemented  {fstp dword [ebp-0x1c], st0}
            unimplemented  {fld st0, dword [ebp-0x1c]}
            float var_1c0_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_413560(var_1c0_11)
            unimplemented  {call 0x413560}
            float var_d8_4 = fconvert.s(unimplemented  {fstp dword [ebp-0xd4], st0})
            unimplemented  {fstp dword [ebp-0xd4], st0}
            unimplemented  {fld st0, qword [ebp-0x18]}
            unimplemented  {fmul st0, st0}
            unimplemented  {fld st0, qword [ebp-0xd0]}
            unimplemented  {fmul st0, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {fld st0, qword [ebp-0x30]}
            unimplemented  {fmul st0, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
            unimplemented  {fstp dword [ebp-0x1c], st0}
            unimplemented  {fld st0, dword [ebp-0x1c]}
            float var_1c0_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_413560(var_1c0_12)
            unimplemented  {call 0x413560}
            unimplemented  {fdivr st0, dword [ebp-0xd4]}
            var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
            unimplemented  {fstp dword [ebp-0x1c], st0}
            unimplemented  {fld st0, dword [ebp-0x1c]}
            float var_1c0_13 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_56fec0(var_1c0_13)
            unimplemented  {call 0x56fec0}
    
    int32_t ecx_48 = sub_56f9c0()
    
    if (data_273abf4 != 0 && var_c1_1 == 0)
        data_273abf4 = 0
        ecx_48 = sub_5752b0(1)
    
    unimplemented  {fld st0, dword [0x8c4d34]}
    int32_t edx_53 = data_2727bac
    var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
    unimplemented  {fstp dword [ebp-0x1c], st0}
    int32_t* eax_57
    int32_t ecx_49
    eax_57, ecx_49 = sub_510b30(ecx_48, edx_53)
    unimplemented  {fld st0, dword [ebp-0x1c]}
    int32_t var_1c0_14 = 0xffffffff
    int32_t var_1c4_5 = ecx_49
    float var_1c4_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    sub_50f230(eax_57, var_1c4_6)
    data_273ac18 = var_c1_1
    char result
    
    if (data_2727bb0 != 0xffffffff || data_2727bb8 != 0xffffffff)
        result = sub_4c6230(&var_34)
        unimplemented  {call 0x4c6230}
        
        if (result != 0)
            result = SetCursor(LoadCursorA(nullptr, 0x7f89))
    else
        result = sub_4c6230(&var_34)
        unimplemented  {call 0x4c6230}
        
        if (result != 0)
            result = SetCursor(LoadCursorA(nullptr, 0x7f00))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

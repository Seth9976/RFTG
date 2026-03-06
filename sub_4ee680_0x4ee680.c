// 函数名称: sub_4ee680
// 虚拟地址: 0x4ee680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ee680(void* arg1, void* arg2)
{
    // 第一条实际指令: void var_134
    void var_134
    int32_t var_44 = __security_cookie ^ &var_134
    float var_ec = fconvert.s(float.t(1))
    int32_t eax_1
    eax_1.b = 0
    float var_e4 = fconvert.s(float.t(0))
    int16_t top = 0
    int32_t i = 0
    void* esi = arg2
    void* var_f8 = esi
    int32_t var_dc = 0
    char var_f4 = 0
    char var_f2 = 0
    int32_t var_e0 = 0
    char var_f1 = 0
    int32_t var_e8 = 0
    char var_f3 = 0
    int32_t i_4 = 0
    int16_t x87control
    
    if (*(esi + 0x110) s> 0)
        do
            int32_t* ecx = *(esi + 0x114) + (i << 3)
            long double st0
            
            switch (*ecx - 0xf)
                case 0
                    int32_t eax_8
                    eax_8, x87control = sub_4eb7e0(ecx, arg1)
                    float var_fc_8 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    unimplemented  {fldz }
                    unimplemented  {fld st0, dword [esp+0x44]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_3 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_3 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_3 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    eax_8.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                        | ((top - 1) & 7) << 0xb
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    bool p_3 = unimplemented  {test ah, 0x5}
                    
                    if (p_3)
                        unimplemented  {fadd qword [0x8a5368]}
                        top += 1
                        var_dc = sub_685f40(st0)
                        var_f2 = 1
                    else
                        unimplemented  {fsub st0, qword [0x8a5368]}
                        top += 1
                        var_dc = sub_685f40(st0)
                        var_f2 = 1
                case 1
                    int32_t eax_9
                    eax_9, x87control = sub_4eb7e0(ecx, arg1)
                    float var_fc_9 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    unimplemented  {fldz }
                    unimplemented  {fld st0, dword [esp+0x44]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_4 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_4 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_4 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    eax_9.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | ((top - 1) & 7) << 0xb
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    bool p_4 = unimplemented  {test ah, 0x5}
                    
                    if (p_4)
                        unimplemented  {fadd qword [0x8a5368]}
                        top += 1
                        var_e0 = sub_685f40(st0)
                        var_f1 = 1
                    else
                        unimplemented  {fsub st0, qword [0x8a5368]}
                        top += 1
                        var_e0 = sub_685f40(st0)
                        var_f1 = 1
                case 2
                    var_f4 = 1
                    eax_1, x87control = sub_4eb7e0(ecx, arg1)
                    float var_f0 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
                    unimplemented  {fstp dword [esp+0x50], st0}
                    unimplemented  {fld st0, dword [ecx+0x58]}
                    unimplemented  {fmul st0, dword [esp+0x50]}
                    unimplemented  {fadd dword [esp+0x5c]}
                    float var_e4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
                    unimplemented  {fstp dword [esp+0x5c], st0}
                    top += 1
                case 3
                    var_f4 = 1
                    sub_4eb7e0(ecx, arg1)
                    float var_fc_2 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    void* eax_4 = *(arg1 + 0x2e4)
                    unimplemented  {fld st0, dword [eax+0x68]}
                    int32_t ecx_1 = *(eax_4 + 0x44)
                    int32_t var_6c_1 = *(eax_4 + 0x40)
                    unimplemented  {fsub st0, dword [esp+0xd4]}
                    int32_t edx_3 = *(eax_4 + 0x48)
                    int32_t var_68_1 = ecx_1
                    float var_d0 = fconvert.s(unimplemented  {fstp dword [esp+0x70], st0})
                    unimplemented  {fstp dword [esp+0x70], st0}
                    int32_t var_64_1 = edx_3
                    unimplemented  {fld st0, dword [eax+0x6c]}
                    int32_t var_144_1 = ecx_1
                    unimplemented  {fsub st0, dword [esp+0xdc]}
                    float var_cc_1 = fconvert.s(unimplemented  {fstp dword [esp+0x78], st0})
                    unimplemented  {fstp dword [esp+0x78], st0}
                    unimplemented  {fld st0, dword [eax+0x70]}
                    unimplemented  {fsub st0, dword [esp+0xe0]}
                    float var_c8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x7c], st0})
                    unimplemented  {fstp dword [esp+0x7c], st0}
                    unimplemented  {fld st0, dword [esp+0x78]}
                    unimplemented  {fld st0, dword [esp+0x74]}
                    unimplemented  {fld st0, dword [esp+0x7c]}
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
                    float var_f0_1 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                    unimplemented  {fstp dword [esp+0x54], st0}
                    unimplemented  {fld st0, dword [esp+0x54]}
                    float var_144_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    st0, eax_1, x87control = sub_413560(var_144_2)
                    unimplemented  {call 0x413560}
                    unimplemented  {fmul st0, dword [esp+0x48]}
                    unimplemented  {fadd dword [esp+0x5c]}
                    float var_e4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
                    unimplemented  {fstp dword [esp+0x5c], st0}
                    top += 1
                case 4
                    int32_t eax_10
                    eax_10, x87control = sub_4eb7e0(ecx, arg1)
                    float var_fc_10 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    unimplemented  {fldz }
                    unimplemented  {fld st0, dword [esp+0x44]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_5 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_5 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_5 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    eax_10.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                        | ((top - 1) & 7) << 0xb
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    bool p_5 = unimplemented  {test ah, 0x5}
                    
                    if (p_5)
                        unimplemented  {fadd qword [0x8a5368]}
                    else
                        unimplemented  {fsub st0, qword [0x8a5368]}
                    
                    top += 1
                    var_e8 = sub_685f40(st0)
                    var_f3 = 1
                case 5
                    void var_b0
                    void var_90
                    __builtin_memcpy(&var_b0, sub_4eefe0(&var_90, arg1), 0x20)
                    unimplemented  {fld st0, dword [esp+0xac]}
                    void var_60
                    __builtin_memcpy(&var_60, 0x27e8090, 0x1c)
                    unimplemented  {fsub st0, dword [esp+0xf8]}
                    float var_c0_1 = fconvert.s(unimplemented  {fstp dword [esp+0x88], st0})
                    unimplemented  {fstp dword [esp+0x88], st0}
                    unimplemented  {fld st0, dword [esp+0xb0]}
                    unimplemented  {fsub st0, dword [esp+0xfc]}
                    float var_bc_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8c], st0})
                    unimplemented  {fstp dword [esp+0x8c], st0}
                    unimplemented  {fld st0, dword [esp+0xb4]}
                    unimplemented  {fsub st0, dword [esp+0x100]}
                    float var_b8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x90], st0})
                    unimplemented  {fstp dword [esp+0x90], st0}
                    float eax_7
                    int32_t edx_4
                    eax_7, edx_4 = sub_4eb940(ecx, arg1)
                    unimplemented  {fld st0, dword [esp+0x8c]}
                    unimplemented  {fld st0, dword [esp+0x84]}
                    float var_d8_1 = eax_7
                    unimplemented  {fld st0, dword [esp+0x8c]}
                    int32_t var_d4_1 = edx_4
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
                    float var_fc_3 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
                    unimplemented  {fstp dword [esp+0x48], st0}
                    unimplemented  {fld st0, dword [esp+0x48]}
                    float var_144_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_2
                    st0, eax_1, ecx_2, x87control = sub_413560(var_144_4)
                    unimplemented  {call 0x413560}
                    unimplemented  {fld st0, dword [esp+0x6c]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_fc_4 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    unimplemented  {fld st0, dword [esp+0x44]}
                    unimplemented  {fld st0, dword [esp+0x6c]}
                    unimplemented  {fsubrp st2, st0}
                    unimplemented  {fsubrp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_fc_5 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    unimplemented  {fdiv st0, dword [esp+0x44]}
                    float var_fc_6 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    unimplemented  {fldz }
                    unimplemented  {fld st0, dword [esp+0x44]}
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_1 =
                        is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                    bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    eax_1.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                        | ((top + 4) & 7) << 0xb
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (p_1)
                        unimplemented  {fld1 }
                        unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                        bool c0_2 = unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                        bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, st1}, 
                            unimplemented  {fcomp st0, st1})
                        bool c3_2 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                        unimplemented  {fcomp st0, st1}
                        int16_t top_38
                        eax_1.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                            | ((top_38 - 1) & 7) << 0xb
                        bool p_2 = unimplemented  {test ah, 0x41}
                        
                        if (p_2)
                            unimplemented  {fstp st1, st0}
                            unimplemented  {fstp st1, st0}
                            int32_t var_144_5 = ecx_2
                            float var_144_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            st0 = sub_4064f0(var_144_6)
                            unimplemented  {call 0x4064f0}
                            esi = var_f8
                            float var_fc_7 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
                            unimplemented  {fstp dword [esp+0x48], st0}
                            unimplemented  {fld1 }
                            i = i_4
                            unimplemented  {fldz }
                            unimplemented  {fsub st1, st0}
                            unimplemented  {fld st0, dword [esp+0x44]}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {faddp st1, st0}
                            unimplemented  {faddp st1, st0}
                            float var_ec_5 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                            unimplemented  {fstp dword [esp+0x54], st0}
                            unimplemented  {fld st0, dword [esp+0x54]}
                            float var_ec_6 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                            unimplemented  {fstp dword [esp+0x54], st0}
                            top = top_38 + 1
                        else
                            esi = var_f8
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            i = i_4
                            float var_ec_3 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                            unimplemented  {fstp dword [esp+0x54], st0}
                            unimplemented  {fld st0, dword [esp+0x54]}
                            float var_ec_4 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                            unimplemented  {fstp dword [esp+0x54], st0}
                            top = top_38 + 1
                    else
                        esi = var_f8
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        i = i_4
                        float var_ec_1 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                        unimplemented  {fstp dword [esp+0x54], st0}
                        unimplemented  {fld st0, dword [esp+0x54]}
                        float var_ec_2 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
                        unimplemented  {fstp dword [esp+0x54], st0}
                        top += 6
            
            i += 1
            i_4 = i
        while (i s< *(esi + 0x110))
        
        eax_1.b = var_f2
    
    unimplemented  {fld st0, dword [esp+0x5c]}
    unimplemented  {fmul st0, dword [esp+0x54]}
    unimplemented  {fadd dword [ebx+0x2c8]}
    float var_f8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
    unimplemented  {fstp dword [esp+0x48], st0}
    unimplemented  {fld st0, dword [esp+0x48]}
    *(arg1 + 0x2c8) = fconvert.s(unimplemented  {fst dword [ebx+0x2c8], st0})
    
    if (var_f4 == 0)
        if (eax_1.b == 0)
            var_dc = 1
        
        goto label_4eea56
    
    int16_t top_96
    
    if (eax_1.b == 0)
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        top_96 = top
    else
    label_4eea56:
        float var_fc_11 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
        unimplemented  {fstp dword [esp+0x44], st0}
        int32_t var_f8_2 = var_dc - *(arg1 + 0x2d8)
        unimplemented  {fild st0, dword [esp+0x48]}
        float var_f8_3 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
        unimplemented  {fstp dword [esp+0x48], st0}
        unimplemented  {fld st0, dword [esp+0x44]}
        unimplemented  {fld st0, dword [esp+0x48]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_6 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_6 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_6 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int32_t eax_12
        eax_12.w =
            (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | ((top - 2) & 7) << 0xb
        bool p_6 = unimplemented  {test ah, 0x5}
        
        if (p_6)
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            float var_f0_3 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
            unimplemented  {fstp dword [esp+0x50], st0}
            unimplemented  {fld st0, dword [esp+0x50]}
            *(arg1 + 0x2c8) = fconvert.s(unimplemented  {fstp dword [ebx+0x2c8], st0})
            unimplemented  {fstp dword [ebx+0x2c8], st0}
            top_96 = top
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            float var_f0_2 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
            unimplemented  {fstp dword [esp+0x50], st0}
            unimplemented  {fld st0, dword [esp+0x50]}
            *(arg1 + 0x2c8) = fconvert.s(unimplemented  {fstp dword [ebx+0x2c8], st0})
            unimplemented  {fstp dword [ebx+0x2c8], st0}
            top_96 = top
    
    if (var_f1 != 0)
        unimplemented  {fld st0, dword [ebx+0x2c8]}
        float var_fc_12 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
        unimplemented  {fstp dword [esp+0x44], st0}
        int32_t ecx_3
        ecx_3.b = var_e0 - *(arg1 + 0x2d8) s< 0
        int32_t var_f8_4 = (ecx_3 - 1) & (var_e0 - *(arg1 + 0x2d8))
        unimplemented  {fild st0, dword [esp+0x48]}
        float var_f8_5 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
        unimplemented  {fstp dword [esp+0x48], st0}
        unimplemented  {fld st0, dword [esp+0x44]}
        unimplemented  {fld st0, dword [esp+0x48]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_7 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_7 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_7 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int32_t eax_14
        eax_14.w = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
            | ((top_96 - 2) & 7) << 0xb
        int16_t top_106
        
        if ((eax_14:1.b & 0x41) != 0)
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            top_106 = top_96 - 1
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_106 = top_96 - 1
        
        float var_e0_1 = fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
        unimplemented  {fstp dword [esp+0x60], st0}
        unimplemented  {fld st0, dword [esp+0x60]}
        *(arg1 + 0x2c8) = fconvert.s(unimplemented  {fstp dword [ebx+0x2c8], st0})
        unimplemented  {fstp dword [ebx+0x2c8], st0}
        top_96 = top_106 + 1
    
    if (var_f3 != 0)
        unimplemented  {fld st0, dword [ebx+0x2c8]}
        float var_fc_13 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
        unimplemented  {fstp dword [esp+0x44], st0}
        int32_t edx_8
        edx_8.b = var_e8 - *(arg1 + 0x2cc) s< 0
        int32_t var_f8_6 = (edx_8 - 1) & (var_e8 - *(arg1 + 0x2cc))
        unimplemented  {fild st0, dword [esp+0x48]}
        float var_f8_7 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
        unimplemented  {fstp dword [esp+0x48], st0}
        unimplemented  {fld st0, dword [esp+0x44]}
        unimplemented  {fld st0, dword [esp+0x48]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_8 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_8 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_8 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int32_t eax_16
        eax_16.w = (c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
            | ((top_96 - 2) & 7) << 0xb
        int16_t top_115
        
        if ((eax_16:1.b & 0x41) != 0)
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            top_115 = top_96 - 1
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_115 = top_96 - 1
        
        float var_e8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x58], st0})
        unimplemented  {fstp dword [esp+0x58], st0}
        unimplemented  {fld st0, dword [esp+0x58]}
        *(arg1 + 0x2c8) = fconvert.s(unimplemented  {fstp dword [ebx+0x2c8], st0})
        unimplemented  {fstp dword [ebx+0x2c8], st0}
        top_96 = top_115 + 1
    
    unimplemented  {fld st0, dword [ebx+0x2c8]}
    void* var_148
    var_148.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
    unimplemented  {fstp qword [esp], st0}
    int32_t mxcsr
    long double st0_1 = sub_686950(mxcsr, x87control, var_148)
    unimplemented  {call 0x686950}
    float var_f8_8 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
    unimplemented  {fstp dword [esp+0x50], st0}
    unimplemented  {fld st0, dword [esp+0x48]}
    float var_f8_9 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
    unimplemented  {fstp dword [esp+0x48], st0}
    unimplemented  {fld st0, dword [ebx+0x2c8]}
    unimplemented  {fld st0, dword [esp+0x48]}
    unimplemented  {fld st0, st0}
    unimplemented  {fsubp st2, st0}
    unimplemented  {fsubp st2, st0}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    *(arg1 + 0x2c8) = fconvert.s(unimplemented  {fstp dword [ebx+0x2c8], st0})
    unimplemented  {fstp dword [ebx+0x2c8], st0}
    unimplemented  {fldz }
    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
    bool c0_9 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
    bool c2_9 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
    bool c3_9 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    
    if ((((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
            | ((top_96 - 2) & 7) << 0xb):1.b & 0x41) != 0)
        unimplemented  {fadd qword [0x8a5368]}
    else
        unimplemented  {fsub st0, qword [0x8a5368]}
    
    int32_t result = sub_685f40(st0_1)
    int32_t** ecx_6 = *(arg1 + 0x2e4)
    long double temp5 = fconvert.t(ecx_6[0x13])
    unimplemented  {fcomp st0, dword [ecx+0x4c]} f- temp5
    bool c0_10 = unimplemented  {fcomp st0, dword [ecx+0x4c]} f< temp5
    bool c2_10 = is_unordered.t(unimplemented  {fcomp st0, dword [ecx+0x4c]}, temp5)
    bool c3_10 = unimplemented  {fcomp st0, dword [ecx+0x4c]} f== temp5
    unimplemented  {fcomp st0, dword [ecx+0x4c]}
    int32_t esi_3 = result
    result.w =
        (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe | (top_96 & 7) << 0xb
    bool p_7 = unimplemented  {test ah, 0x5}
    
    if (not(p_7))
        result = sub_466320(*ecx_6)
        
        if (*(*(arg1 + 0x2dc) * 0x134 + *result + 0xde) != 0)
            esi_3 = 0
    
    if (esi_3 s> 0)
        int32_t i_1
        
        do
            sub_4ee5f0(arg1)
            i_1 = esi_3
            esi_3 -= 1
        while (i_1 != 1)
    
    void** i_2 = *(arg1 + 0x2d0)
    
    while (i_2 != 0)
        void** i_3 = i_2
        
        if (i_2 == 0)
            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                "XList<struct ParticleEmitter>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void** i_5 = i_2
        i_2 = i_2[0xbf]
        int32_t ecx_9
        result, ecx_9 = sub_4eecd0(i_5)
        
        if (result.b == 0)
            void* esi_4 = nullptr
            
            while (true)
                if (esi_4 != 0)
                    esi_4 = *(esi_4 + 0x2fc)
                else
                    esi_4 = i_5[0xb4]
                
                if (esi_4 == 0)
                    break
                
                sub_4eb600(esi_4)
            
            int32_t edx_12 = sub_4f3590(&i_5[0xb4])
            void* eax_20 = i_5[0xb9]
            *(eax_20 + 0x14) -= 1
            sub_4f34a0(arg1 + 0x2d0, edx_12, i_3)
    
    result.b = 1
    sub_5a6aba(var_44 ^ &var_134)
    return result
}

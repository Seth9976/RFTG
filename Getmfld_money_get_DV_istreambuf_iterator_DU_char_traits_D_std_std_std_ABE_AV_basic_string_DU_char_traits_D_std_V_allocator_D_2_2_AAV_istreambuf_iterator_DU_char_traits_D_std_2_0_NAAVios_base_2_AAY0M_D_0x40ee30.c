// 函数名称: ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@AAY0M@D@Z
// 虚拟地址: 0x40ee30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@AAY0M@D@Z(int32_t arg1, int32_t* arg2, char arg3, char* arg4, float* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_244 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* ebx = arg4
    data_307c588
    char eax_4 = *ebx
    void* i_21 = &ebx[4]
    char* var_68 = ebx
    char var_7a = arg3
    void* i_18 = i_21
    char eax_5 = sub_4f65a0(i_21, eax_4)
    data_307c1c0
    char eax_6 = sub_4f65a0(&ebx[0x34], ebx[0x2c])
    data_307c1b8
    char eax_7 = sub_4f65a0(&ebx[0x48], ebx[0x44])
    data_307c1bc
    char eax_9 = sub_4f65a0(&ebx[0xb0], ebx[0xac])
    data_307c4f8
    char eax_10
    int32_t ecx_2
    eax_10, ecx_2 = sub_4f65a0(&ebx[0x10], ebx[8])
    int32_t result
    void var_f4
    void var_b4
    int32_t var_94
    float var_84
    char* const var_70
    int32_t* i_4
    void* var_5c
    void var_54
    void* ebx_5
    bool cond:15_1
    
    if (eax_10 == 0)
        int16_t top
        
        if (eax_9 != 0)
            int32_t eax_56
            int80_t st0_4
            st0_4, eax_56 = sub_40a930(&var_f4)
            top = 0xffff
            int32_t esi_17 = eax_56
            eax_56.b = var_7a
            __builtin_memcpy(&var_54, esi_17, 0x40)
            int32_t* eax_57 = sub_4f92a0(eax_56.b, &var_54, arg5, &var_b4, *(ebx + 0xb4))
            ecx_2 = *eax_57
            int32_t var_98_2 = eax_57[1]
            var_94 = eax_57[2]
            int32_t eax_58 = eax_57[4]
            int32_t var_90_2 = eax_57[3]
            
            if (ecx_2 == 3 && (eax_58 == 0x40 || eax_58 == 0x41))
                ebx[0xac] = 0
        
        if (eax_7 != 0)
            char* ecx_25 = sub_40c060(ebx)
            unimplemented  {call 0x40c060}
            void* ebx_6 = &ebx[0x50]
            bool cond:1_1 = *(ebx_6 + 0x50) != 0
            var_5c = ebx_6
            
            if (not(cond:1_1))
                int16_t top_2 = top - 2
                unimplemented  {fld st0, dword [ebx+0x8]}
                i_4 = nullptr
                unimplemented  {fadd dword [0x8c4d34]}
            label_40f5b3:
                *(ebx_6 + 8) = fconvert.s(unimplemented  {fstp dword [ebx+0x8], st0})
                unimplemented  {fstp dword [ebx+0x8], st0}
                int16_t top_1 = top_2 + 1
            label_40f5b6:
                int32_t* i_7 = i_4
                int32_t* i
                
                if (i_7 != 0)
                    i = i_7[8]
                else
                    i = *data_27e7fdc
                
                while (i != 0)
                    int32_t* i_3 = i
                    i = i[8]
                    
                    if (i_3[7].b == 0)
                        float edi_14 = *arg5
                        int32_t edx_17 = arg5[1]
                        var_84 = edi_14
                        unimplemented  {fld st0, dword [ebp-0x80]}
                        unimplemented  {fld st0, dword [ebx+0x10]}
                        i_4 = i_3
                        unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                        bool c0_5 = unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                        bool c2_5 = is_unordered.t(unimplemented  {fcomp st0, st1}, 
                            unimplemented  {fcomp st0, st1})
                        bool c3_5 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                        unimplemented  {fcomp st0, st1}
                        int16_t top_5 = top_1 - 1
                        char var_55_2 = 0
                        int32_t var_80_2 = edx_17
                        float* eax_68
                        eax_68.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                            | (top_5 & 7) << 0xb
                        bool p_3 = unimplemented  {test ah, 0x41}
                        
                        if (p_3)
                        label_40f6e0:
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            top_1 = top_5 + 1
                        else
                            unimplemented  {fld st0, dword [ebx+0x18]}
                            unimplemented  {fadd dword [ebx+0x10]}
                            unimplemented  {fcompp } f- unimplemented  {fcompp }
                            bool c0_6 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                            bool c2_6 =
                                is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                            bool c3_6 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                            unimplemented  {fcompp }
                            unimplemented  {fcompp }
                            top_1 = top_5 + 1
                            eax_68.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa
                                | (c3_6 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
                            
                            if ((eax_68:1.b & 0x41) == 0)
                                unimplemented  {fld st0, dword [ebp-0x7c]}
                                unimplemented  {fld st0, dword [ebx+0x14]}
                                unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                                bool c0_7 =
                                    unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                                bool c2_7 = is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                    unimplemented  {fcomp st0, st1})
                                bool c3_7 =
                                    unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                                unimplemented  {fcomp st0, st1}
                                top_5 = top_1 - 1
                                eax_68.w = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa
                                    | (c3_7 ? 1 : 0) << 0xe | (top_5 & 7) << 0xb
                                bool p_4 = unimplemented  {test ah, 0x41}
                                
                                if (p_4)
                                    goto label_40f6e0
                                
                                unimplemented  {fld st0, dword [ebx+0x1c]}
                                unimplemented  {fadd dword [ebx+0x14]}
                                unimplemented  {fcompp } f- unimplemented  {fcompp }
                                bool c0_8 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                                bool c2_8 =
                                    is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                                bool c3_8 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                                unimplemented  {fcompp }
                                unimplemented  {fcompp }
                                top_1 = top_5 + 1
                                eax_68.w = (c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa
                                    | (c3_8 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
                                
                                if ((eax_68:1.b & 0x41) == 0)
                                    var_55_2 = 1
                        
                        int32_t eax_69 = *i_3
                        
                        if (eax_69 != 3 || var_55_2 == 0)
                            if (eax_69 == 4)
                                *(ebx_6 + 0x52) = 0
                                goto label_40f5b6
                            
                            if (eax_69 == 1)
                                ecx_25 = i_3[1]
                                
                                if (ecx_25 == 0x56 && i_3[2] == 2 && *(ebx_6 + 0x51) != 0)
                                    i_18 = &data_83f3d3
                                    int32_t var_8_10 = 3
                                    
                                    if (sub_4c63c0(&i_18) != 0)
                                        sub_506300(&i_18, ebx_6)
                                    
                                    i_3[7].b = 1
                                    int32_t var_8_11 = 0xffffffff
                                    ecx_25 = sub_4c43d0(&i_18)
                                    goto label_40f5b6
                                
                                if (ecx_25 == 0x43 && i_3[2] == 2 && *(ebx_6 + 0x51) != 0)
                                    sub_506400(&var_70, edx_17, ebx_6)
                                    
                                    if (sub_4c44c0(&var_70) != 0)
                                        sub_4c6360()
                                        ebx_6 = var_5c
                                    
                                    i_3[7].b = 1
                                    ecx_25 = sub_4c43d0(&var_70)
                                    goto label_40f5b6
                            
                            if (eax_69 == 0 && *(ebx_6 + 0x51) != eax_69.b
                                    && *(ebx_6 + 0x52) == eax_69.b)
                                int32_t eax_75 = i_3[2]
                                
                                if (eax_75 != 0 && eax_75 != 1)
                                    goto label_40f5b6
                                
                                ecx_25 = sub_505e40(ecx_25, ebx_6, i_3[1])
                                i_3[7].b = 1
                                goto label_40f5b6
                            
                            if (eax_69 == 1 && *(ebx_6 + 0x51) != 0 && *(ebx_6 + 0x52) == 0)
                                ecx_25 = i_3[2]
                                char eax_77 = sub_506130(i_3[1], edx_17, ecx_25)
                                ebx_6 = var_5c
                                
                                if (eax_77 == 0)
                                    goto label_40f5b6
                                
                                i_3[7].b = 1
                                goto label_40f5b6
                            
                            if (eax_69 != 0x11 || i_3[1] != 0x100000 || var_55_2 == 0)
                                ecx_25 = 0x10
                                
                                if (eax_69 == 0x10 && i_3[1] == 0x100000)
                                    *(ebx_6 + 0x52) = 0
                                    goto label_40f5b6
                                
                                if (eax_69 != 0xc || i_3[1] != 0x1000 || var_55_2 == 0)
                                    if (eax_69 == 0xb && i_3[1] == 0x1000)
                                        *(ebx_6 + 0x52) = 0
                                        goto label_40f5b6
                                    
                                    if (eax_69 != 0xd || i_3[1] != 0x10)
                                        edx_17.b = var_55_2
                                    label_40f89f:
                                        
                                        if (eax_69 == 0xe && i_3[1] == 0x10)
                                            *(ebx_6 + 0x52) = 0
                                            goto label_40f5b6
                                        
                                        if ((eax_69 != 0x15 || i_3[1] != 0x100 || edx_17.b == 0)
                                                && (eax_69 != 0x13 || i_3[1] != 1 || edx_17.b == 0))
                                            if (eax_69 == 0x14 && i_3[1] == 0x100)
                                                *(ebx_6 + 0x52) = 0
                                                goto label_40f5b6
                                            
                                            if (eax_69 == 0x12 && i_3[1] == 1)
                                                *(ebx_6 + 0x52) = 0
                                                goto label_40f5b6
                                            
                                            if ((eax_69 != 0x15 || i_3[1] != 0x1000 || edx_17.b == 0)
                                                    && (eax_69 != 0x13 || i_3[1] != 0x10
                                                    || edx_17.b == 0) &&
                                                    (eax_69 != 0x17 || i_3[1] != 1 || edx_17.b == 0))
                                                if (eax_69 == 0x16 && i_3[1] == 1)
                                                    *(ebx_6 + 0x52) = 0
                                                    goto label_40f5b6
                                                
                                                if (eax_69 == 0x14 && i_3[1] == 0x1000)
                                                    *(ebx_6 + 0x52) = 0
                                                    goto label_40f5b6
                                                
                                                if (eax_69 != 0x12)
                                                    goto label_40f5b6
                                                
                                                if (i_3[1] != 0x10)
                                                    goto label_40f5b6
                                                
                                                *(ebx_6 + 0x52) = 0
                                                goto label_40f5b6
                                    else
                                        edx_17.b = var_55_2
                                        
                                        if (edx_17.b == 0)
                                            goto label_40f89f
                                    
                                    ecx_25 = sub_505b50(ebx_6, *arg5, arg5[1])
                                    goto label_40f5b6
                        
                        int32_t var_248_26 = edx_17
                        *(ebx_6 + 0x52) = 1
                        int32_t eax_79
                        eax_79, ecx_25 = sub_505940(ebx_6, edi_14)
                        unimplemented  {call 0x505940}
                        top_2 = top_1 - 1
                        unimplemented  {fldz }
                        *(ebx_6 + 4) = eax_79
                        *(ebx_6 + 0xc) = eax_79
                        goto label_40f5b3
                
                if (*(ebx_6 + 0x52) != 0)
                    sub_505b80(ebx_6, *arg5, arg5[1])
            
            char eax_62 = sub_40d210(ebx_6)
            
            if ((data_316613c & 2) == 0)
                data_316613c.d |= 2
                int32_t var_8_8 = 4
                data_3166134 = sub_4f5220(data_307c1b8, "BtnOK")
                int32_t var_8_9 = 0xffffffff
            
            int128_t* eax_66 =
                sub_4f6e90(data_3166134, sub_4fc3d0(&data_be1cb8, *(var_68 + 0x4c)), &data_83f3d3)
            i_4 = nullptr
            *(eax_66 + 0x23) = eax_62 == 0
            char* edi_15
            
            while (true)
                int32_t* i_8 = i_4
                int32_t* i_20
                
                if (i_8 != 0)
                    i_20 = i_8[8]
                else
                    i_20 = *data_27e7fdc
                
                if (i_20 == 0)
                label_40f9aa:
                    int32_t eax_81 = sub_40a930(&var_f4)
                    unimplemented  {call 0x40a930}
                    unimplemented  {fld st0, dword [0x8c4d34]}
                    int32_t var_254_3 = __builtin_memcpy(&var_54, eax_81, 0x40)
                    float var_254_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_83 = sub_4f8710(var_68, &var_b4, *(var_68 + 0x4c), &var_54, arg5, 
                        var_7a, var_254_4, nullptr, nullptr, nullptr)
                    int32_t ecx_34 = *eax_83
                    int32_t var_98_3 = eax_83[1]
                    var_94 = eax_83[2]
                    int32_t eax_84 = eax_83[4]
                    int32_t var_90_3 = eax_83[3]
                    
                    if (ecx_34 != 3)
                        goto label_40f4f1_2
                    
                    if (eax_84 == 0x3e)
                        var_68[0x44] = 0
                        goto label_40f4f1_2
                    
                    if (eax_84 == 0x3d)
                        *ebx_6
                        sub_40d130()
                        var_68[0x44] = 0
                        goto label_40f4f1_2
                    
                    if (eax_84 != 0x3f)
                        goto label_40f4f1_2
                    
                    var_70 = &data_83f3d3
                    int32_t var_8_15 = 6
                    char eax_98
                    char* ecx_38
                    eax_98, ecx_38 = sub_4c63c0(&var_70)
                    char* const edi_18 = var_70
                    
                    if (eax_98 != 0)
                        int32_t esi_27 = 0
                        
                        while (true)
                            int32_t eax_99
                            
                            if (edi_18 == 0 || *edi_18 == 0)
                                eax_99 = 0
                            else
                                eax_99 = *(sub_4c4060(&var_70) + 8)
                            
                            if (esi_27 s>= eax_99)
                                break
                            
                            char* const eax_102 = &data_83f3d3
                            
                            if (edi_18 != 0)
                                eax_102 = edi_18
                            
                            ecx_38 = sub_505e40(ecx_38, ebx_6, sx.d(eax_102[esi_27]))
                            esi_27 += 1
                    
                    int32_t var_8_16 = 0xffffffff
                    
                    if (edi_18 == 0)
                        goto label_40f4f1_2
                    
                    if (*edi_18 == 0)
                        goto label_40f4f1_2
                    
                    ebx_5 = sub_4c4060(&var_70)
                    int32_t temp2_1 = *(ebx_5 + 4)
                    *(ebx_5 + 4) -= 1
                    cond:15_1 = temp2_1 != 1
                    goto label_40f4da
                
                int32_t* i_16
                
                while (true)
                    i_16 = i_20
                    i_20 = i_20[8]
                    
                    if (i_16[7].b == 0)
                        break
                    
                    if (i_20 == 0)
                        goto label_40f9aa
                
                edi_15 = &data_83f3d3
                i_4 = i_16
                var_5c = &data_83f3d3
                int32_t var_8_12 = 5
                
                if (*i_16 == 1)
                    if ((i_16[2].b & 2) != 0 && i_16[1] == 0x56)
                        char eax_85
                        char* ecx_35
                        eax_85, ecx_35 = sub_4c63c0(&var_5c)
                        edi_15 = var_5c
                        
                        if (eax_85 != 0)
                            var_70 = nullptr
                            
                            while (true)
                                int32_t eax_86
                                
                                if (edi_15 == 0 || *edi_15 == 0)
                                    eax_86 = 0
                                else
                                    eax_86 = *(sub_4c4060(&var_5c) + 8)
                                
                                if (var_70 s>= eax_86)
                                    break
                                
                                char* eax_89 = &data_83f3d3
                                
                                if (edi_15 != 0)
                                    eax_89 = edi_15
                                
                                ecx_35 = sub_505e40(ecx_35, ebx_6, sx.d(*(eax_89 + var_70)))
                                var_70 = &var_70[1]
                    
                    if (*i_16 == 1 && i_16[1] == 0xd)
                        break
                
                int32_t var_8_13 = 0xffffffff
                
                if (edi_15 != 0 && *edi_15 != 0)
                    void* eax_92 = sub_4c4060(&var_5c)
                    int32_t temp1_1 = *(eax_92 + 4)
                    *(eax_92 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        int32_t esi_26 = *(eax_92 + 0xc) + 0x10
                        sub_4f4430(eax_92, sub_4f4380(esi_26), esi_26)
            
            *ebx_6
            sub_40d130()
            var_68[0x44] = 0
            int32_t var_8_14 = 0xffffffff
            
            if (edi_15 == 0 || *edi_15 == 0)
            labelid_1:
                result = 0
            else
                ebx_5 = sub_4c4060(&var_5c)
                int32_t temp3_1 = *(ebx_5 + 4)
                *(ebx_5 + 4) -= 1
                cond:15_1 = temp3_1 != 1
            label_40f4da:
                
                if (cond:15_1)
                labelid_1:
                    result = 0
                else
                    int32_t esi_16 = *(ebx_5 + 0xc) + 0x10
                    sub_4f4430(ebx_5, sub_4f4380(esi_16), esi_16)
                labelid_1:
                    result = 0
        else if (eax_6 == 0)
            if (eax_5 != 0)
                int32_t eax_126 = *(ebx + 0x374)
                ecx_2.b = eax_126 != 0
                ebx[0x29d] = ecx_2.b
                
                if (eax_126 == 3)
                    sub_4075c0()
                    int32_t* i_9 = sub_40c6f0(&ebx[0x378])
                    int32_t edi_20 = i_9[0x50]
                    char* esi_37 = nullptr
                    i_4 = i_9
                    var_70 = 0xffffffff
                    char* const edx_39
                    
                    if (edi_20 s> 0)
                        i_9 = sub_4194b0()
                        int32_t* i_13 = i_4
                        edx_39 = var_70
                        
                        do
                            if (*i_13 == i_9)
                                edx_39 = esi_37
                            
                            esi_37 = &esi_37[1]
                            i_13 = &i_13[0x14]
                        while (esi_37 s< edi_20)
                    
                    if (edi_20 s> 0 && edx_39 != 0xffffffff)
                        int32_t* i_14 = i_4
                        i_9 = 1
                        
                        if (i_14[edx_39 * 0x14 + 0xc] != 4 || i_14[0x77] != 1)
                            ebx[0x2f1] = 1
                            ebx[0x329] = 0
                            ebx[0x30d] = i_9.b
                            ebx[0x2d5] = i_9.b
                        else
                            ebx[0x2f1] = 1
                            ebx[0x2d5] = 0
                            ebx[0x30d] = 0
                            ebx[0x329] = 1
                    else
                        void* edx_40 = data_27e7a40
                        ebx[0x2f1] = 0
                        i_9.b = *(edx_40 + 0x2c4958) s>= 0x24
                        ebx[0x2f3] = i_9.b
                        i_9.b = 1
                        ebx[0x329] = 1
                        ebx[0x30d] = i_9.b
                        ebx[0x2d5] = i_9.b
                    
                    sub_407670()
                else
                    ebx[0x2f1] = 1
                    ebx[0x2d5] = 1
                    ebx[0x30d] = 1
                    ebx[0x329] = 1
                
                int32_t eax_127 = *(ebx + 0x374)
                int32_t ecx_49
                
                if (eax_127 == 2 || eax_127 == 1)
                    ecx_49 = 0
                else
                    ecx_49 = 1
                
                eax_127.b = eax_127 != 0
                ebx[0x361] = eax_127.b
                void* eax_128 = 0x18
                ebx[0x2b9] = ecx_49.b
                char var_56_3 = 0
                var_5c = 0x18
                
                while (true)
                    int32_t eax_129
                    
                    if (eax_128 u<= 3)
                        int32_t var_248_38 = ecx_49
                        unimplemented  {fld st0, dword [ecx]}
                        float var_248_39 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        eax_129 = sub_40d010(var_5c, var_248_39)
                        top -= 1
                        unimplemented  {call 0x40d010}
                        ebx = var_68
                        __builtin_memcpy(&var_54, eax_129, 0x40)
                    else if (eax_128 - 4 u> 3)
                        if (eax_128 - 8 u> 3)
                            void var_234
                            eax_129 = sub_40a930(&var_234)
                            top -= 1
                            unimplemented  {call 0x40a930}
                        else
                            int32_t var_74 = 0
                            var_70 = nullptr
                            i_4 = sub_40d320(eax_128 - 8)
                            void var_174
                            int32_t eax_135 = sub_40a930(&var_174)
                            unimplemented  {call 0x40a930}
                            unimplemented  {fld st0, dword [edx]}
                            int32_t* edx_45 = data_307c16c
                            int32_t var_250_3 = __builtin_memcpy(&var_f4, eax_135, 0x40)
                            float var_250_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            void var_1b4
                            eax_129 =
                                sub_4f66d0(&var_1b4, edx_45, i_4, &var_74, var_250_4, nullptr, nullptr)
                            top -= 2
                            unimplemented  {call 0x4f66d0}
                        
                        __builtin_memcpy(&var_54, eax_129, 0x40)
                    else
                        void* ecx_50 = (eax_128 - 4) * 3
                        int32_t* i_15 = sub_40c7a0(var_68) + (ecx_50 << 2) + 0x50
                        unimplemented  {fld st0, dword [eax]}
                        void* var_248_40 = ecx_50
                        float var_248_41 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        i_4 = i_15
                        int32_t eax_132 = sub_40d010(eax_128 - 4, var_248_41)
                        top -= 1
                        unimplemented  {call 0x40d010}
                        ebx = var_68
                        void* eax_133 = var_5c
                        __builtin_memcpy(&var_54, eax_132, 0x40)
                        int32_t* i_10 = i_4
                        char* edx_44
                        edx_44.b = *i_10 != 2
                        var_68[eax_133 * 0x1c + 0xc1] = edx_44.b
                        edx_44.b = *i_10 != 2
                        var_68[eax_133 * 0x1c + 0xc1] = edx_44.b
                        i_10.b = *i_10 != 2
                        var_68[eax_133 * 0x1c + 0xc1] = i_10.b
                    void* esi_42 = var_5c
                    
                    if (esi_42 == 0x12)
                        if (*(ebx + 0x374) != 2)
                            ebx[0x2bb] = 0
                        else
                            void* eax_137 = sub_40c7a0(ebx)
                            void* ecx_56 = nullptr
                            
                            if (*(eax_137 + 0x50) != 0)
                                ecx_56 = esi_42 - 0x11
                            
                            if (*(eax_137 + 0x5c) != 0)
                                ecx_56 += 1
                            
                            if (*(eax_137 + 0x68) != 0)
                                ecx_56 += 1
                            
                            if (*(eax_137 + 0x74) != 0)
                                ecx_56 += 1
                            
                            ebx[0x2bb] = ecx_56 s< 2
                    
                    void* eax_139 = esi_42 * 7
                    void* esi_43 = &ebx[eax_139 << 2]
                    char var_55_3
                    
                    if (data_27e7bbc[6].b != 0)
                        int32_t* eax_141 = sub_4f5350(*(esi_43 + 0xbc), &var_54, 
                            *(ebx + (eax_139 << 2) + 0xb8), &var_54)
                        int32_t edx_48 = eax_141[1]
                        float var_b0 = *eax_141
                        int32_t var_ac_1 = edx_48
                        int32_t var_a8_1 = eax_141[2]
                        int32_t var_a4_1 = eax_141[3]
                        ebx = var_68
                        var_55_3 = sub_4057a0(&var_b0, arg5)
                    else
                        var_55_3 = 0
                    
                    if (var_56_3 != 0)
                        var_7a = 0
                    
                    float* edx_50
                    edx_50.b = var_55_3
                    int32_t* ecx_61
                    ecx_61.b = var_7a
                    int32_t eax_145
                    int32_t* edx_51
                    eax_145, ecx_49, edx_51 = sub_505640(*(esi_43 + 0xbc), edx_50.b, ecx_61.b, 
                        esi_43 + 0xc8, *(esi_43 + 0xb8), esi_43 + 0xc0)
                    ecx_49.b = *(esi_43 + 0xc9)
                    
                    if (ecx_49.b != 0)
                        if (*(esi_43 + 0xcb) != 0 && *(esi_43 + 0xcc) != 0)
                            edx_51 = arg2
                            *edx_51 = 0xa
                        else if (ecx_49.b != 0 && *(esi_43 + 0xcb) == 0)
                            edx_51 = arg2
                            *edx_51 = 0xa
                    
                    void* edi_23
                    
                    if (eax_145 != 1 || var_56_3 != 0)
                        edi_23 = var_5c
                        
                        if (edi_23 - 8 u<= 3 && *(esi_43 + 0xcc) != 0)
                            int16_t top_17
                            
                            if (*(ebx + 0x380) == edi_23)
                                top_17 = top - 1
                                unimplemented  {fld st0, dword [ebx+0x384]}
                                unimplemented  {fadd dword [0x8c4d34]}
                            else
                                top_17 = top - 1
                                unimplemented  {fldz }
                                *(ebx + 0x380) = edi_23
                            
                            *(ebx + 0x384) = fconvert.s(unimplemented  {fstp dword [ebx+0x384], st0})
                            unimplemented  {fstp dword [ebx+0x384], st0}
                            unimplemented  {fld st0, dword [ebx+0x384]}
                            long double temp5_1 = fconvert.t(0.40000000596046448)
                            unimplemented  {fcomp st0, qword [0x8a5778]} f- temp5_1
                            bool c0_9 = unimplemented  {fcomp st0, qword [0x8a5778]} f< temp5_1
                            bool c2_9 =
                                is_unordered.t(unimplemented  {fcomp st0, qword [0x8a5778]}, temp5_1)
                            bool c3_9 = unimplemented  {fcomp st0, qword [0x8a5778]} f== temp5_1
                            unimplemented  {fcomp st0, qword [0x8a5778]}
                            top = top_17 + 1
                            void* eax_147
                            eax_147.w = (c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa
                                | (c3_9 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            
                            if ((eax_147:1.b & 0x41) == 0)
                                result = sub_40cb70(edi_23, edx_51, ebx, 1)
                                goto label_40f4f6
                        else if (*(ebx + 0x380) == edi_23)
                            *(ebx + 0x380) = 0xffffffff
                    else
                        edi_23 = var_5c
                        result, ecx_49 = sub_40cb70(edi_23, edx_51, ebx, 0)
                        
                        if (result != 0)
                            goto label_40f4f6
                    
                    if (var_55_3 != 0 && *(esi_43 + 0xc1) == 0)
                        var_56_3 = 1
                    
                    var_5c = edi_23 - 1
                    
                    if (edi_23 - 1 s<= 0)
                        break
                    
                    eax_128 = var_5c
            
        labelid_1:
            result = 0
        else
            sub_40d9a0(ebx)
            sub_40d4c0(&i_4, &i_18)
            int32_t eax_105 = sub_40a930(&var_f4)
            unimplemented  {call 0x40a930}
            int32_t eax_106 = *(ebx + 0x38)
            __builtin_memcpy(&var_54, eax_105, 0x40)
            int32_t var_248_36 = eax_106
            eax_106.b = var_7a
            int32_t* eax_107 = sub_4f92a0(eax_106.b, &var_54, arg5, &var_b4, var_248_36)
            int32_t esi_30 = eax_107[4]
            int32_t var_98_4 = eax_107[1]
            var_94 = eax_107[2]
            int32_t var_90_4 = eax_107[3]
            
            if (*eax_107 != 3)
            label_40f4f1:
                result = 0
            else if (esi_30 != 8)
                int32_t* eax_108
                int32_t* i_12
                
                if (esi_30 == 6)
                    *(ebx + 0x40) -= 1
                    eax_108 = *(ebx + 0x40)
                    int32_t* i_11 = i_4
                    
                    if (eax_108 s>= i_11)
                    label_40fcb2:
                        i_12 = i_18
                        
                        if (eax_108 s<= i_12)
                            *(ebx + 0x40) = eax_108
                        else
                            *(ebx + 0x40) = i_12
                    else
                        *(ebx + 0x40) = i_11
                else if (esi_30 == 7)
                    *(ebx + 0x40) += 1
                    eax_108 = *(ebx + 0x40)
                    i_12 = i_4
                    
                    if (eax_108 s>= i_12)
                        goto label_40fcb2
                    
                    *(ebx + 0x40) = i_12
                else if (esi_30 s>= 0x1b && esi_30 s<= 0x2b)
                    sub_4075c0()
                    int32_t ebx_13 = *(ebx + 0x40)
                    uint32_t eax_111 = data_27e7a40
                    
                    if (esi_30 + ebx_13 * 6 - 0x1b s> *(eax_111 + 0x3188e4))
                        sub_4c5870("friendIndex <= gCClient->numFriends", &data_83f3d3, 
                            "..\code\GameSetupDlg.cpp", 0x518, "GameSetupDialogUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_35 = (esi_30 + ebx_13 * 6 - 0x1b) * 0x3c
                    var_84 = *(esi_35 + eax_111 + 0x317ad4)
                    int32_t var_80_3 = 1
                    sub_4c75d0(eax_111, &var_84, *(eax_111 + 0x28), 8, 0xf4269, &var_84)
                    void* ecx_42 = data_27e7a40
                    sub_5a6c10(esi_35 + ecx_42 + 0x317ad4, esi_35 + ecx_42 + 0x317b10, 
                        (*(ecx_42 + 0x3188e4) - (esi_30 + ebx_13 * 6 - 0x1b) - 1) * 0x3c)
                    void* eax_117 = data_27e7a40
                    *(eax_117 + 0x3188e4) -= 1
                    sub_407670()
                else if (esi_30 s>= 0xa && esi_30 s<= 0x1a)
                    sub_4075c0()
                    int32_t eax_118 = *(ebx + 0x40)
                    void* edx_37 = data_27e7a40
                    int32_t ecx_44 = *(edx_37 + 0x3188e4)
                    
                    if (esi_30 + eax_118 * 6 - 0xa s> ecx_44)
                        sub_4c5870("friendIndex <= gCClient->numFriends", &data_83f3d3, 
                            "..\code\GameSetupDlg.cpp", 0x52b, "GameSetupDialogUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (esi_30 + eax_118 * 6 - 0xa != ecx_44)
                        int32_t edi_19 = *(edx_37 + (esi_30 + eax_118 * 6 - 0xa) * 0x3c + 0x317ad4)
                        int32_t* eax_125 = sub_40c7a0(ebx) + *(ebx + 0x3c) * 0xc + 0x50
                        *eax_125 = 3
                        eax_125[2] = edi_19
                        *ebx = 1
                        ebx[0x2c] = 0
                        sub_407670()
                    else
                        ebx[0x44] = 1
                        sub_4c4590(&data_83f3d3)
                        *(var_68 + 0x54) = 0
                        *(var_68 + 0x5c) = 0
                        var_68[0xa1] = 1
                        sub_407670()
            label_40f4f1_1:
                result = 0
            else
                result = 0
                bool cond:6_1 = *(ebx + 0x374) != 4
                ebx[0x2c] = 0
                
                if (cond:6_1)
                    *ebx = 1
                else
                    data_307d094 = 1
    else
        sub_40c060(ebx)
        void* ebx_1 = &ebx[0x50]
        bool cond:0_1 = *(ebx_1 + 0x50) != 0
        var_5c = ebx_1
        
        if (not(cond:0_1))
            long double x87_r6_1 = fconvert.t(*(ebx_1 + 8))
            i_4 = nullptr
            long double x87_r6_2 = x87_r6_1 + fconvert.t(data_8c4d34)
        label_40ef1f:
            *(ebx_1 + 8) = fconvert.s(x87_r6_2)
        label_40ef22:
            int32_t* i_5 = i_4
            int32_t* i_1
            
            if (i_5 != 0)
                i_1 = i_5[8]
            else
                i_1 = *data_27e7fdc
            
            while (i_1 != 0)
                int32_t* i_2 = i_1
                i_1 = i_1[8]
                
                if (i_2[7].b == 0)
                    float edi_6 = *arg5
                    float edx_4 = arg5[1]
                    var_84 = edi_6
                    long double x87_r6_3 = fconvert.t(var_84)
                    long double x87_r5_1 = fconvert.t(*(ebx_1 + 0x10))
                    i_4 = i_2
                    x87_r5_1 - x87_r6_3
                    char var_55_1 = 0
                    float* eax_19
                    eax_19.w = (x87_r5_1 < x87_r6_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_1, x87_r6_3) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3000
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        long double x87_r5_3 = fconvert.t(*(ebx_1 + 0x18)) + fconvert.t(*(ebx_1 + 0x10))
                        x87_r5_3 - x87_r6_3
                        eax_19.w = (x87_r5_3 < x87_r6_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_3, x87_r6_3) ? 1 : 0) << 0xa
                            | (x87_r5_3 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_19:1.b & 0x41) == 0)
                            x87_r6_3 = fconvert.t(edx_4)
                            long double x87_r5_4 = fconvert.t(*(ebx_1 + 0x14))
                            x87_r5_4 - x87_r6_3
                            eax_19.w = (x87_r5_4 < x87_r6_3 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r5_4, x87_r6_3) ? 1 : 0) << 0xa
                                | (x87_r5_4 == x87_r6_3 ? 1 : 0) << 0xe | 0x3000
                            bool p_2 = unimplemented  {test ah, 0x41}
                            
                            if (not(p_2))
                                long double x87_r5_6 =
                                    fconvert.t(*(ebx_1 + 0x1c)) + fconvert.t(*(ebx_1 + 0x14))
                                x87_r5_6 - x87_r6_3
                                eax_19.w = (x87_r5_6 < x87_r6_3 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r5_6, x87_r6_3) ? 1 : 0) << 0xa
                                    | (x87_r5_6 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                                
                                if ((eax_19:1.b & 0x41) == 0)
                                    var_55_1 = 1
                    
                    int32_t eax_20 = *i_2
                    
                    if (eax_20 != 3 || var_55_1 == 0)
                        if (eax_20 == 4)
                            *(ebx_1 + 0x52) = 0
                            goto label_40ef22
                        
                        if (eax_20 == 1)
                            int32_t ecx_5 = i_2[1]
                            
                            if (ecx_5 == 0x56 && i_2[2] == 2 && *(ebx_1 + 0x51) != 0)
                                var_70 = &data_83f3d3
                                int32_t var_8_3 = 0
                                
                                if (sub_4c63c0(&var_70) != 0)
                                    sub_506300(&var_70, ebx_1)
                                
                                i_2[7].b = 1
                                int32_t var_8_4 = 0xffffffff
                                sub_4c43d0(&var_70)
                                goto label_40ef22
                            
                            if (ecx_5 == 0x43 && i_2[2] == 2 && *(ebx_1 + 0x51) != 0)
                                sub_506400(&i_18, edx_4, ebx_1)
                                
                                if (sub_4c44c0(&i_18) != 0)
                                    sub_4c6360()
                                    ebx_1 = var_5c
                                
                                i_2[7].b = 1
                                sub_4c43d0(&i_18)
                                goto label_40ef22
                        
                        if (eax_20 == 0 && *(ebx_1 + 0x51) != eax_20.b && *(ebx_1 + 0x52) == eax_20.b)
                            int32_t eax_26 = i_2[2]
                            
                            if (eax_26 != 0 && eax_26 != 1)
                                goto label_40ef22
                            
                            char* ecx_9 = i_2[1]
                            sub_505e40(ecx_9, ebx_1, ecx_9)
                            i_2[7].b = 1
                            goto label_40ef22
                        
                        if (eax_20 == 1 && *(ebx_1 + 0x51) != 0 && *(ebx_1 + 0x52) == 0)
                            char eax_28 = sub_506130(i_2[1], edx_4, i_2[2])
                            ebx_1 = var_5c
                            
                            if (eax_28 == 0)
                                goto label_40ef22
                            
                            i_2[7].b = 1
                            goto label_40ef22
                        
                        if (eax_20 != 0x11 || i_2[1] != 0x100000 || var_55_1 == 0)
                            if (eax_20 == 0x10 && i_2[1] == 0x100000)
                                *(ebx_1 + 0x52) = 0
                                goto label_40ef22
                            
                            if (eax_20 != 0xc || i_2[1] != 0x1000 || var_55_1 == 0)
                                if (eax_20 == 0xb && i_2[1] == 0x1000)
                                    *(ebx_1 + 0x52) = 0
                                    goto label_40ef22
                                
                                if (eax_20 != 0xd || i_2[1] != 0x10)
                                    edx_4.b = var_55_1
                                else
                                    edx_4.b = var_55_1
                                    
                                    if (edx_4.b != 0)
                                        sub_505b50(ebx_1, *arg5, arg5[1])
                                        goto label_40ef22
                                
                                if (eax_20 == 0xe && i_2[1] == 0x10)
                                    *(ebx_1 + 0x52) = 0
                                    goto label_40ef22
                                
                                if ((eax_20 != 0x15 || i_2[1] != 0x100 || edx_4.b == 0)
                                        && (eax_20 != 0x13 || i_2[1] != 1 || edx_4.b == 0))
                                    if (eax_20 == 0x14 && i_2[1] == 0x100)
                                        *(ebx_1 + 0x52) = 0
                                        goto label_40ef22
                                    
                                    if (eax_20 == 0x12 && i_2[1] == 1)
                                        *(ebx_1 + 0x52) = 0
                                        goto label_40ef22
                                    
                                    if ((eax_20 != 0x15 || i_2[1] != 0x1000 || edx_4.b == 0)
                                            && (eax_20 != 0x13 || i_2[1] != 0x10 || edx_4.b == 0)
                                            && (eax_20 != 0x17 || i_2[1] != 1 || edx_4.b == 0))
                                        if (eax_20 == 0x16 && i_2[1] == 1)
                                            *(ebx_1 + 0x52) = 0
                                            goto label_40ef22
                                        
                                        if (eax_20 == 0x14 && i_2[1] == 0x1000)
                                            *(ebx_1 + 0x52) = 0
                                            goto label_40ef22
                                        
                                        if (eax_20 != 0x12)
                                            goto label_40ef22
                                        
                                        if (i_2[1] != 0x10)
                                            goto label_40ef22
                                        
                                        *(ebx_1 + 0x52) = 0
                                        goto label_40ef22
                                
                                sub_505b50(ebx_1, *arg5, arg5[1])
                                goto label_40ef22
                    
                    float var_248_10 = edx_4
                    *(ebx_1 + 0x52) = 1
                    int32_t eax_30
                    int80_t st0_2
                    st0_2, eax_30 = sub_505940(ebx_1, edi_6)
                    x87_r6_2 = float.t(0)
                    *(ebx_1 + 4) = eax_30
                    *(ebx_1 + 0xc) = eax_30
                    goto label_40ef1f
            
            if (*(ebx_1 + 0x52) != 0)
                sub_505b80(ebx_1, *arg5, arg5[1])
        
        char eax_13 = sub_40d210(ebx_1)
        
        if ((data_316613c & 1) == 0)
            data_316613c.d |= 1
            int32_t var_8_1 = 1
            data_3166138 = sub_4f5220(data_307c4f8, "BtnOK")
            int32_t var_8_2 = 0xffffffff
        
        int128_t* eax_17 =
            sub_4f6e90(data_3166138, sub_4fc3d0(&data_be1cb8, *(var_68 + 0x14)), &data_83f3d3)
        i_4 = nullptr
        *(eax_17 + 0x23) = eax_13 == 0
        char* const esi_12
        
        while (true)
            int32_t* i_6 = i_4
            void* i_19
            
            if (i_6 != 0)
                i_19 = i_6[8]
            else
                i_19 = *data_27e7fdc
            
            if (i_19 == 0)
            label_40f32d:
                int32_t eax_34
                int80_t st0_3
                st0_3, eax_34 = sub_40a930(&var_f4)
                long double x87_r5_7 = fconvert.t(data_8c4d34)
                int32_t ecx_12
                int32_t esi_11
                esi_11, ecx_12 = __builtin_memcpy(&var_54, eax_34, 0x40)
                int32_t var_254_1 = ecx_12
                int32_t* eax_36 = sub_4f8710(esi_11, &var_b4, *(var_68 + 0x14), &var_54, arg5, var_7a, 
                    fconvert.s(x87_r5_7), nullptr, nullptr, nullptr)
                int32_t ecx_14 = *eax_36
                int32_t var_98_1 = eax_36[1]
                var_94 = eax_36[2]
                int32_t var_90_1 = eax_36[3]
                
                if (ecx_14 == 2)
                    int32_t var_248_14 = eax_36[4]
                    sub_40d6b0(var_68)
                
                goto label_40f4f1_2
            
            void* i_17
            
            while (true)
                i_17 = i_19
                bool cond:8_1 = *(i_17 + 0x1c) == 0
                i_19 = *(i_19 + 0x20)
                i_18 = i_17
                
                if (cond:8_1)
                    break
                
                if (i_19 == 0)
                    goto label_40f32d
            
            esi_12 = &data_83f3d3
            i_4 = i_17
            var_5c = &data_83f3d3
            int32_t var_8_5 = 2
            
            if (*(var_68 + 0xc) == 2 && *i_17 == 1 && (*(i_17 + 8) & 2) != 0 && *(i_17 + 4) == 0x56)
                char eax_38
                char* ecx_16
                eax_38, ecx_16 = sub_4c63c0(&var_5c)
                esi_12 = var_5c
                
                if (eax_38 != 0)
                    int32_t edi_8 = 0
                    
                    while (true)
                        int32_t eax_39
                        
                        if (esi_12 == 0 || *esi_12 == 0)
                            eax_39 = 0
                        else
                            eax_39 = *(sub_4c4060(&var_5c) + 8)
                        
                        if (edi_8 s>= eax_39)
                            break
                        
                        char* const eax_42 = &data_83f3d3
                        
                        if (esi_12 != 0)
                            eax_42 = esi_12
                        
                        ecx_16 = sub_505e40(ecx_16, ebx_1, sx.d(eax_42[edi_8]))
                        edi_8 += 1
                    
                    i_17 = i_18
            
            if (*(var_68 + 0xc) == 2 && *i_17 == 1 && *(i_17 + 4) == 0xd)
                char* eax_44 = *ebx_1
                
                if (eax_44 != 0 && *eax_44 != 0 && *(sub_4c4060(ebx_1) + 8) == 8)
                    break
            
            int32_t var_8_6 = 0xffffffff
            
            if (esi_12 != 0 && *esi_12 != 0)
                void* eax_48 = sub_4c4060(&var_5c)
                int32_t temp0_1 = *(eax_48 + 4)
                *(eax_48 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_14 = *(eax_48 + 0xc) + 0x10
                    sub_4f4430(eax_48, sub_4f4380(esi_14), esi_14)
        
        char* ebx_4 = *ebx_1
        char* const ecx_19 = &data_83f3d3
        
        if (ebx_4 != 0)
            ecx_19 = ebx_4
        
        sub_40d510(ecx_19)
        *(var_68 + 0xc) = 3
        *(var_68 + 0x28) = 0
        int32_t var_8_7 = 0xffffffff
        
        if (esi_12 != 0 && *esi_12 != 0)
            ebx_5 = sub_4c4060(&var_5c)
            int32_t temp4_1 = *(ebx_5 + 4)
            *(ebx_5 + 4) -= 1
            cond:15_1 = temp4_1 != 1
            goto label_40f4da
        
    label_40f4f1_2:
        result = 0
    label_40f4f6:
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

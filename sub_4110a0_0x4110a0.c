// 函数名称: sub_4110a0
// 虚拟地址: 0x4110a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4110a0(void* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6983b4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* i_9
    int32_t eax_2 = __security_cookie ^ &i_9
    int32_t __saved_edi
    int32_t var_19c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = arg1
    long double x87_r7 = fconvert.t(*(ebx + 4))
    void* var_17c = ebx
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        void* i_31 = sub_40c7a0(ebx)
        void var_160
        void* i_8 = &var_160
        int32_t eax_6
        int80_t st0_1
        st0_1, eax_6 = sub_40a930(i_8)
        void var_a0
        __builtin_memcpy(&var_a0, eax_6, 0x40)
        int32_t edi_1 = 0
        void* eax_8 = sub_40c7a0(ebx)
        int32_t ecx = 0
        
        if (*(eax_8 + 0x50) != 0)
            ecx = 1
        
        if (*(eax_8 + 0x5c) != 0)
            ecx += 1
        
        if (*(eax_8 + 0x68) != 0)
            ecx += 1
        
        if (*(eax_8 + 0x74) != 0)
            ecx += 1
        
        if (ecx == 2)
            edi_1 = ecx - 1
        
        void* eax_10 = sub_40c7a0(ebx)
        int32_t ecx_1 = 0
        
        if (*(eax_10 + 0x50) != 0)
            ecx_1 = 1
        
        if (*(eax_10 + 0x5c) != 0)
            ecx_1 += 1
        
        if (*(eax_10 + 0x68) != 0)
            ecx_1 += 1
        
        if (*(eax_10 + 0x74) != 0)
            ecx_1 += 1
        
        ecx_1.b = ecx_1 != 2
        *(ebx + 0x211) = ecx_1.b
        int32_t eax_13 = *(sub_40c7a0(ebx) + 0x4c)
        
        if (eax_13 s>= 1 && eax_13 s<= 3)
            edi_1 |= 4
        
        int32_t eax_16 = *(sub_40c7a0(ebx) + 0x4c)
        char eax_17
        
        if (eax_16 s< 1 || eax_16 s> 3)
            eax_17 = 0
        else
            eax_17 = 1
        
        *(ebx + 0x22d) = eax_17 == 0
        int32_t eax_20 = *(sub_40c7a0(ebx) + 0x4c)
        
        if (eax_20 s>= 2 && eax_20 s<= 3)
            edi_1 |= 0x10
        
        int32_t eax_23 = *(sub_40c7a0(ebx) + 0x4c)
        bool eax_24
        
        if (eax_23 s< 2 || eax_23 s> 3)
            eax_24 = false
        else
            eax_24 = true
        
        *(ebx + 0x249) = eax_24 == 0
        void* eax_26
        void* i_21
        eax_26, i_21 = sub_40c7a0(ebx)
        int32_t eax_27 = *(eax_26 + 0x4c)
        char eax_28
        
        if (eax_27 s< 2 || eax_27 s> 3)
            eax_28 = 0
        else
            eax_28 = 1
        
        long double x87_r6_1 = fconvert.t(*(ebx + 4))
        int32_t* esi_2 = data_307c16c
        i_21.b = eax_28 == 0
        *(ebx + 0x265) = i_21.b
        i_8 = i_21
        i_8 = fconvert.s(x87_r6_1)
        int32_t ecx_2
        int80_t st0_2
        st0_2, ecx_2 = sub_4f5f30(esi_2, &var_a0, edi_1, i_8)
        int16_t top_1 = 0xfffe
        char eax_29
        int32_t ecx_3
        eax_29, ecx_3 = sub_4b95c0(ecx_2, 4)
        char eax_30
        char eax_31
        
        if (eax_29 != 0)
            eax_30, ecx_3 = sub_4b95c0(ecx_3, 2)
            
            if (eax_30 != 0)
                eax_31, ecx_3 = sub_4b95c0(ecx_3, 3)
        
        if (eax_29 == 0 || (eax_30 != 0 && eax_31 != 0))
            char eax_34
            int32_t ecx_4
            eax_34, ecx_4 = sub_4b95c0(ecx_3, 3)
            
            if (eax_34 != 0)
                char eax_35
                int32_t ecx_5
                eax_35, ecx_5 = sub_4b95c0(ecx_4, 2)
                
                if (eax_35 == 0)
                    if ((data_3166694 & 2) == 0)
                        data_3166694.d |= 2
                        i_8 = "txtRequire"
                        int32_t var_c_3 = 1
                        data_316668c = sub_4f5220(esi_2, i_8)
                        int32_t var_c_4 = 0xffffffff
                    
                    long double x87_r5_2 = fconvert.t(*(ebx + 4))
                    i_8 = nullptr
                    int32_t var_1a4_6 = ecx_5
                    top_1 = 0xfffe
                    sub_4f50c0(esi_2, data_316668c, "RvI Requires Gathering Storm", 
                        fconvert.s(x87_r5_2), i_8)
        else
            if ((data_3166694 & 1) == 0)
                data_3166694.d |= 1
                i_8 = "txtRequire"
                int32_t var_c_1 = 0
                data_3166690 = sub_4f5220(esi_2, i_8)
                int32_t var_c_2 = 0xffffffff
            
            long double x87_r5_1 = fconvert.t(*(ebx + 4))
            int32_t eax_33 = data_3166690
            i_8 = nullptr
            int32_t var_1a4_3 = ecx_3
            top_1 = 0xfffe
            sub_4f50c0(esi_2, eax_33, "BoW Requires both prior expansions", fconvert.s(x87_r5_1), i_8)
        
        int32_t* i_2 = 8
        int32_t var_178
        int32_t var_174
        void* i_23
        void* i
        
        do
            int32_t* i_3 = i_2
            void* i_22 = ebx + i_3 * 0x1c
            i_9 = i_22
            int32_t ecx_7 = *(i_22 + 0xbc)
            void var_60
            __builtin_memcpy(&var_60, &var_a0, 0x40)
            
            if (&i_3[-2] u> 3)
                int32_t* var_1ac_5
                void* var_1a8_6
                float var_1a4_12
                void* eax_50
                void* ecx_15
                
                if (i_3 != 0x17)
                    int32_t* edx_6
                    
                    if (i_3 != 0x14)
                        void* i_25 = i_9
                        unimplemented  {fld st0, dword [ebx+0x4]}
                        ecx_15 = i_25 + 0xc8
                        i_8 = nullptr
                        void* var_1a4_14 = ecx_15
                        var_1a4_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        eax_50 = i_25 + 0xc0
                        edx_6 = *(i_25 + 0xb8)
                        var_1a8_6 = &var_60
                    else
                        if (*(ebx + 0x37c) != 3)
                            i_8 = nullptr
                        else
                            void* i_26 = nullptr
                            sub_4075c0()
                            
                            if (*(sub_40c6f0(ebx + 0x378) + 0x1dc) != 1)
                                i_26 = &data_848fc4
                            
                            sub_407670()
                            i_8 = i_26
                        
                        unimplemented  {fld st0, dword [ebx+0x4]}
                        ecx_15 = ebx + 0x2f8
                        void* var_1a4_13 = ecx_15
                        var_1a4_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        var_1a8_6 = &var_60
                        edx_6 = *(ebx + 0x2e8)
                        eax_50 = ebx + 0x2f0
                    
                    var_1ac_5 = edx_6
                else
                    void* i_10 = sub_411050(*(i_31 + 0x8c))
                    unimplemented  {fld st0, dword [ebx+0x4]}
                    i_8 = i_10
                    ecx_15 = ebx + 0x34c
                    void* var_1a4_11 = ecx_15
                    var_1a4_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    var_1a8_6 = &var_60
                    var_1ac_5 = *(ebx + 0x33c)
                    eax_50 = ebx + 0x344
                
                i_23 = sub_5055d0(eax_50, ecx_7, ecx_15, var_1ac_5, var_1a8_6, var_1a4_12, i_8)
            else
                var_178 = 0
                var_174 = 0
                int32_t eax_37
                int32_t ecx_8
                eax_37, ecx_8 = sub_40d320(&i_3[-2])
                unimplemented  {fld st0, dword [ebx+0x4]}
                i_8 = nullptr
                int32_t var_1a8_3 = ecx_8
                float var_1a8_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                void var_120
                int32_t eax_39 =
                    sub_4f66d0(&var_120, data_307c16c, eax_37, &var_178, var_1a8_4, nullptr, i_8)
                top_1 -= 1
                unimplemented  {call 0x4f66d0}
                int32_t ecx_9 = __builtin_memcpy(&var_60, eax_39, 0x40)
                void* esi_5 = i_2 - 7
                int32_t eax_41
                void* i_32
                
                if (sub_4b95c0(ecx_9, esi_5) == 0)
                    eax_41, i_32 = sub_410a70(esi_5)
                else
                    eax_41, i_32 = sub_410b50(esi_5)
                
                i_23 = i_9
                int32_t* edi_3 = *(i_23 + 0xb8)
                
                if (*(i_23 + 0xc1) == 0)
                    float ecx_10
                    
                    if (*(i_23 + 0xc3) != 0 || *(i_23 + 0xc4) != 0)
                        ecx_10 = 4.20389539e-45f
                    else
                        i_32.b = *(i_23 + 0xc9)
                        
                        if (i_32.b == 0)
                            ecx_10 = 0f
                        else if (*(i_23 + 0xcb) != 0 && *(i_23 + 0xcc) != 0)
                            ecx_10 = 2.80259693e-45f
                        else if (i_32.b == 0 || *(i_23 + 0xcb) != 0)
                            ecx_10 = 0f
                        else
                            ecx_10 = 1.40129846e-45f
                    
                    unimplemented  {fld1 }
                    i_8 = nullptr
                    float var_1a4_7 = ecx_10
                    float var_1a4_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    eax_41, i_23, i_32 = sub_4f6100(edi_3, eax_41, ecx_10, var_1a4_8)
                    top_1 -= 1
                    unimplemented  {call 0x4f6100}
                
                if (i_2 == 8)
                    i_32 = i_31
                    eax_41.b = *(i_32 + 0x87)
                    
                    if (eax_41.b != 0)
                    label_41149b:
                        int32_t eax_42
                        
                        if ((data_3166694 & 4) != 0)
                            eax_42 = data_3166688
                        else
                            data_3166694.d |= 4
                            int32_t var_c_5 = 2
                            int32_t* edx_5 = data_307c190
                            i_8 = "SelectionRing"
                            eax_42, i_32 = sub_4f5220(edx_5, i_8)
                            data_3166688 = eax_42
                            int32_t var_c_6 = 0xffffffff
                        
                        void* i_24 = data_307c190
                        unimplemented  {fld1 }
                        i_8 = &var_60
                        void* i_30 = i_24
                        float var_1a4_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        i_9 = i_24
                        __builtin_memcpy(&var_160, sub_4f62d0(eax_42, var_1a4_10, i_32), 0x40)
                        void* ecx_13 = eax_42 * 0x118 + *sub_4f4890(i_9)
                        i_23 = sub_4f67d0(ecx_13, nullptr, *(ecx_13 + 0x68), ecx_13, &data_be1ae0, 
                            &var_160, nullptr, nullptr)
                        unimplemented  {call 0x4f67d0}
                        ebx = var_17c
                else if (esi_5 s> 4)
                    i_23 = i_31
                    
                    if (esi_5 - 1 == *(i_23 + 0x4c))
                        goto label_41149b
                else if (esi_5 - 1 s<= *(i_31 + 0x4c))
                    goto label_41149b
            
            i = i_2 + 1
            i_2 = i
        while (i s< 0x19)
        
        if ((data_3166694 & 8) == 0)
            data_3166694.d |= 8
            i_8 = "img_storeNewBoW"
            int32_t var_c_7 = 3
            data_3166684 = sub_4f5220(esi_2, i_8)
            int32_t var_c_8 = 0xffffffff
        
        char eax_55 = sub_4b95c0(i_23, 4)
        
        if (eax_55 == 0 && *(data_27e7a54 + 0x210) == eax_55)
            unimplemented  {fld st0, dword [ebx+0x4]}
            int32_t* i_7 = data_307c750
            int32_t eax_56 = data_3166684
            i_9 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
            unimplemented  {fstp dword [esp+0x10], st0}
            unimplemented  {fld st0, dword [esp+0x10]}
            i_8 = &var_a0
            void* var_1a4_16 = &var_a0
            float var_1a4_17 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            i_2 = i_7
            __builtin_memcpy(&var_160, sub_4f62d0(eax_56, var_1a4_17, i_7), 0x40)
            int32_t eax_58 = sub_4f4890(esi_2)
            sub_4f67d0(eax_58, nullptr, i_2, eax_56 * 0x118 + *eax_58, &data_be1ae0, &var_160, nullptr, 
                nullptr)
            unimplemented  {call 0x4f67d0}
            ebx = var_17c
        
        if ((data_3166694 & 0x10) == 0)
            data_3166694.d |= 0x10
            i_8 = "txtTimeRemainingLabel"
            int32_t var_c_9 = 4
            data_3166680 = sub_4f5220(esi_2, i_8)
            int32_t var_c_10 = 0xffffffff
        
        if (*(ebx + 0x374) == 3)
            sub_4075c0()
            void* edi_4 = sub_40c6f0(ebx + 0x378)
            i_8 = &var_178
            QueryPerformanceCounter(i_8)
            int32_t esi_12 = var_178
            int32_t esi_13 = esi_12 - *(edi_4 + 0x1f0)
            int32_t ebx_2 = sbb.d(var_174, *(edi_4 + 0x1f4), esi_12 u< *(edi_4 + 0x1f0))
            
            if ((data_3160a20 & 1) == 0)
                data_3160a20.d |= 1
                int32_t var_168
                i_8 = &var_168
                QueryPerformanceFrequency(i_8)
                data_3160a18 = var_168
                int32_t var_164
                data_3160a1c = var_164
            
            i_8 = nullptr
            int32_t eax_63
            uint32_t edx_8
            eax_63, edx_8 = __allmul(esi_13, ebx_2, 0x3e8, i_8)
            i_8 = data_3160a1c
            int32_t eax_65
            int32_t edx_9
            edx_9:eax_65 = muls.dp.d(0x10624dd3, __aulldiv(eax_63, edx_8, data_3160a18, i_8))
            int32_t edx_10 = edx_9 s>> 6
            int32_t ecx_29 = *(edi_4 + 0x1d8) - ((edx_10 u>> 0x1f) + edx_10)
            i_2 = &data_83f3d3
            int32_t var_c_11 = 5
            
            if (ecx_29 s<= 0)
                *(edi_4 + 0x1dc) = 6
                sub_4c4590("INVITATION EXPIRED")
            else
                char** i_11
                
                if (ecx_29 s<= 0x15180)
                    if (ecx_29 s> 0xe10)
                        i_8 = ecx_29 s/ 0xe10
                        i_11 = sub_4c4a50(&i_9, "%d hours")
                        var_c_11.b = 7
                        goto label_4118be
                    
                    void* i_13 = (ecx_29 + 0x1e) s/ 0x3c
                    i_8 = i_13
                    char** i_14
                    
                    if (i_13 s> 1)
                        i_14 = sub_4c4a50(&i_9, "%d minutes")
                        var_c_11.b = 9
                    else
                        i_14 = sub_4c4a50(&i_9, "1 minute")
                        var_c_11.b = 8
                    
                    i_8 = i_14
                    sub_4c4510(i_8)
                    var_c_11.b = 5
                    sub_4c43d0(&i_9)
                else
                    i_8 = (ecx_29 + 0xa8c0) s/ 0x15180
                    i_11 = sub_4c4a50(&i_9, "%d days")
                    var_c_11.b = 6
                label_4118be:
                    i_8 = i_11
                    sub_4c4510(i_8)
                    var_c_11.b = 5
                    void* i_12 = i_9
                    
                    if (i_12 != 0 && *i_12 != 0)
                        int32_t* ebx_3 = sub_4c4060(&i_9)
                        int32_t temp2_1 = ebx_3[1]
                        ebx_3[1] -= 1
                        
                        if (temp2_1 == 1)
                            void* i_27 = ebx_3[3] + 0x10
                            int32_t* eax_79 = sub_4f4380(i_27)
                            i_8 = i_27
                            sub_4f4430(ebx_3, eax_79, i_8)
            
            sub_407670()
            int32_t edi_6 = *(edi_4 + 0x1dc)
            int32_t edx_20
            
            if (edi_6 == 3)
                edx_20 = sub_4c4590("Game Completed")
            else if (edi_6 == 2)
                edx_20 = sub_4c4590("Game in Progress")
            else if (edi_6 == 6)
                edx_20 = sub_4c4590(&data_83f3d3)
            else
                int32_t* i_4 = i_2
                
                if (i_4 == 0)
                    i_4 = &data_83f3d3
                
                i_8 = i_4
                i_8 = sub_4c4a50(&i_9, "Invitation expires in %s")
                var_c_11.b = 0xa
                edx_20 = sub_4c4510(i_8)
                var_c_11.b = 5
                void* i_15 = i_9
                
                if (i_15 != 0 && *i_15 != 0)
                    int32_t* eax_87 = sub_4c4060(&i_9)
                    int32_t temp3_1 = eax_87[1]
                    eax_87[1] -= 1
                    
                    if (temp3_1 == 1)
                        void* i_28 = eax_87[3] + 0x10
                        int32_t* eax_88 = sub_4f4380(i_28)
                        i_8 = i_28
                        edx_20 = sub_4f4430(eax_87, eax_88, i_8)
            
            int32_t* i_5 = i_2
            i_9 = &data_83f3d3
            
            if (i_5 != 0)
                i_9 = i_5
            
            unimplemented  {fld st0, dword [eax+0x4]}
            int32_t eax_90 = data_3166680
            float var_180_5 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            unimplemented  {fld st0, dword [esp+0x1c]}
            i_8 = &var_a0
            void* var_1a4_20 = &var_a0
            float var_1a4_21 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            var_178 = eax_90
            __builtin_memcpy(&var_160, sub_4f62d0(eax_90, var_1a4_21, edx_20), 0x40)
            int32_t eax_92 = sub_4f4890(esi_2)
            sub_4f5010(&var_160, var_178 * 0x118 + *eax_92, i_9, 0)
            int32_t var_c_12 = 0xffffffff
            int32_t* i_6 = i_2
            
            if (i_6 != 0 && *i_6 != 0)
                int32_t* eax_94 = sub_4c4060(&i_2)
                int32_t temp4_1 = eax_94[1]
                eax_94[1] -= 1
                
                if (temp4_1 == 1)
                    void* i_29 = eax_94[3] + 0x10
                    int32_t* eax_95 = sub_4f4380(i_29)
                    i_8 = i_29
                    sub_4f4430(eax_94, eax_95, i_8)
            
            ebx = var_17c
        
        int32_t* esi_20
        
        if ((data_3166694 & 0x20) != 0)
            esi_20 = esi_2
        else
            data_3166694.d |= 0x20
            esi_20 = esi_2
            i_8 = "chkAdv2P"
            int32_t var_c_13 = 0xb
            data_316667c = sub_4f5220(esi_20, i_8)
            int32_t var_c_14 = 0xffffffff
        
        if ((data_3166694 & 0x40) == 0)
            data_3166694.d |= 0x40
            i_8 = "chkGoals"
            int32_t var_c_15 = 0xc
            data_3166678 = sub_4f5220(esi_20, i_8)
            int32_t var_c_16 = 0xffffffff
        
        if ((data_3166694 & 0x80) == 0)
            data_3166694.d |= 0x80
            i_8 = "chkTakeovers"
            int32_t var_c_17 = 0xd
            data_3166674 = sub_4f5220(esi_20, i_8)
            int32_t var_c_18 = 0xffffffff
        
        if ((data_3166694.d & 0x100) == 0)
            data_3166694.d |= 0x100
            i_8 = "chkRvIScenario"
            int32_t var_c_19 = 0xe
            data_3166670 = sub_4f5220(esi_20, i_8)
            int32_t var_c_20 = 0xffffffff
        
        if ((data_3166694.d & 0x200) == 0)
            data_3166694.d |= 0x200
            i_8 = "imgClock"
            int32_t var_c_21 = 0xf
            data_316666c = sub_4f5220(esi_20, i_8)
            int32_t var_c_22 = 0xffffffff
        
        void* eax_103 = sub_40c7a0(ebx)
        int32_t ecx_34 = 0
        
        if (*(eax_103 + 0x50) != 0)
            ecx_34 = 1
        
        if (*(eax_103 + 0x5c) != 0)
            ecx_34 += 1
        
        if (*(eax_103 + 0x68) != 0)
            ecx_34 += 1
        
        if (*(eax_103 + 0x74) != 0)
            ecx_34 += 1
        
        if (ecx_34 == 2)
            void* eax_105
            int32_t edx_22
            eax_105, edx_22 = sub_40c7a0(ebx)
            
            if (*(eax_105 + 0x84) == 0)
                unimplemented  {fld st0, dword [ebx+0x4]}
                void* i_16 = data_316667c
                var_178 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                unimplemented  {fstp dword [esp+0x24], st0}
                unimplemented  {fld st0, dword [esp+0x24]}
                i_8 = &var_a0
                void* var_1a4_27 = &var_a0
                float var_1a4_28 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                i_9 = i_16
                __builtin_memcpy(&var_160, sub_4f62d0(i_16, var_1a4_28, edx_22), 0x40)
                int32_t eax_107 = sub_4f4890(esi_2)
                void* ecx_38 = i_9 * 0x118 + *eax_107
                sub_4f67d0(eax_107, nullptr, *(ecx_38 + 0x68), ecx_38, &data_be1ae0, &var_160, nullptr, 
                    nullptr)
                unimplemented  {call 0x4f67d0}
                ebx = var_17c
        
        int32_t eax_110 = *(sub_40c7a0(ebx) + 0x4c)
        
        if (eax_110 s>= 1 && eax_110 s<= 3)
            void* eax_112
            int32_t edx_23
            eax_112, edx_23 = sub_40c7a0(ebx)
            
            if (*(eax_112 + 0x85) == 0)
                unimplemented  {fld st0, dword [ebx+0x4]}
                void* i_17 = data_3166678
                var_178 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                unimplemented  {fstp dword [esp+0x24], st0}
                unimplemented  {fld st0, dword [esp+0x24]}
                i_8 = &var_a0
                void* var_1a4_29 = &var_a0
                float var_1a4_30 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                i_9 = i_17
                __builtin_memcpy(&var_160, sub_4f62d0(i_17, var_1a4_30, edx_23), 0x40)
                int32_t eax_114 = sub_4f4890(esi_2)
                void* ecx_43 = i_9 * 0x118 + *eax_114
                sub_4f67d0(eax_114, nullptr, *(ecx_43 + 0x68), ecx_43, &data_be1ae0, &var_160, nullptr, 
                    nullptr)
                unimplemented  {call 0x4f67d0}
                ebx = var_17c
        
        int32_t eax_117 = *(sub_40c7a0(ebx) + 0x4c)
        
        if (eax_117 s>= 2 && eax_117 s<= 3)
            void* eax_119
            int32_t edx_24
            eax_119, edx_24 = sub_40c7a0(ebx)
            
            if (*(eax_119 + 0x86) == 0)
                unimplemented  {fld st0, dword [ebx+0x4]}
                void* i_18 = data_3166674
                var_178 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                unimplemented  {fstp dword [esp+0x24], st0}
                unimplemented  {fld st0, dword [esp+0x24]}
                i_8 = &var_a0
                void* var_1a4_31 = &var_a0
                float var_1a4_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                i_9 = i_18
                __builtin_memcpy(&var_160, sub_4f62d0(i_18, var_1a4_32, edx_24), 0x40)
                int32_t eax_121 = sub_4f4890(esi_2)
                void* ecx_48 = i_9 * 0x118 + *eax_121
                sub_4f67d0(eax_121, nullptr, *(ecx_48 + 0x68), ecx_48, &data_be1ae0, &var_160, nullptr, 
                    nullptr)
                unimplemented  {call 0x4f67d0}
                ebx = var_17c
        
        void* eax_123
        int32_t ecx_50
        int32_t edx_25
        eax_123, ecx_50, edx_25 = sub_40c7a0(ebx)
        int32_t eax_124 = *(eax_123 + 0x4c)
        
        if (eax_124 s>= 2 && eax_124 s<= 3 && *(i_31 + 0x44) == 2)
            unimplemented  {fld st0, dword [ebx+0x4]}
            void* i_19 = data_3166670
            var_178 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
            unimplemented  {fstp dword [esp+0x24], st0}
            unimplemented  {fld st0, dword [esp+0x24]}
            i_8 = &var_a0
            void* var_1a4_33 = &var_a0
            float var_1a4_34 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            i_9 = i_19
            __builtin_memcpy(&var_160, sub_4f62d0(i_19, var_1a4_34, edx_25), 0x40)
            int32_t eax_127 = sub_4f4890(esi_2)
            void* ecx_54 = i_9 * 0x118 + *eax_127
            ecx_50, edx_25 = sub_4f67d0(eax_127, nullptr, *(ecx_54 + 0x68), ecx_54, &data_be1ae0, 
                &var_160, nullptr, nullptr)
            unimplemented  {call 0x4f67d0}
            ebx = var_17c
        
        if (*(ebx + 0x374) != 0)
            unimplemented  {fld st0, dword [ebx+0x4]}
            void* i_20 = data_316666c
            var_178 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
            unimplemented  {fstp dword [esp+0x24], st0}
            unimplemented  {fld st0, dword [esp+0x24]}
            i_8 = &var_a0
            void* var_1a4_35 = &var_a0
            float var_1a4_36 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            i_9 = i_20
            __builtin_memcpy(&var_160, sub_4f62d0(i_20, var_1a4_36, edx_25), 0x40)
            int32_t eax_129 = sub_4f4890(esi_2)
            void* ecx_59 = i_9 * 0x118 + *eax_129
            sub_4f67d0(eax_129, nullptr, *(ecx_59 + 0x68), ecx_59, &data_be1ae0, &var_160, nullptr, 
                nullptr)
            unimplemented  {call 0x4f67d0}
            ebx = var_17c
        
        for (int32_t i_1 = 0; i_1 s< 4; i_1 += 1)
            result = sub_410310(ebx, i_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &i_9)
    return result
}

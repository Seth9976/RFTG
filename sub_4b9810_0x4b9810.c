// 函数名称: sub_4b9810
// 虚拟地址: 0x4b9810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b9810(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6971f4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1c0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(*(arg1 + 4))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    void* result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t* ebx_1 = data_307c74c
        void var_f0
        int32_t eax_3
        int80_t st0_1
        st0_1, eax_3 = sub_40a930(&var_f0)
        void var_58
        __builtin_memcpy(&var_58, eax_3, 0x40)
        int32_t ecx_1
        int80_t st0_2
        st0_2, ecx_1 = sub_4f5f30(ebx_1, &var_58, 0, fconvert.s(fconvert.t(*(arg1 + 4))))
        
        if ((data_316639c & 1) == 0)
            data_316639c.d |= 1
            int32_t var_8_1 = 0
            data_3166398 = sub_4f5220(ebx_1, "txtName")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_316639c & 2) == 0)
            data_316639c.d |= 2
            int32_t var_8_3 = 1
            data_3166394 = sub_4f5220(ebx_1, "txtDescription")
            int32_t var_8_4 = 0xffffffff
        
        if ((data_316639c & 4) == 0)
            data_316639c.d |= 4
            int32_t var_8_5 = 2
            data_3166390 = sub_4f5220(ebx_1, "txtPrice")
            int32_t var_8_6 = 0xffffffff
        
        if ((data_316639c & 8) == 0)
            data_316639c.d |= 8
            int32_t var_8_7 = 3
            data_316638c = sub_4f5220(ebx_1, "txtReq")
            int32_t var_8_8 = 0xffffffff
        
        if ((data_316639c & 0x10) == 0)
            data_316639c.d |= 0x10
            int32_t var_8_9 = 4
            data_3166388 = sub_4f5220(ebx_1, "imgBox")
            int32_t var_8_10 = 0xffffffff
        
        if ((data_316639c & 0x20) == 0)
            data_316639c.d |= 0x20
            int32_t var_8_11 = 5
            data_3166384 = sub_4f5220(ebx_1, "txtTitle")
            int32_t var_8_12 = 0xffffffff
        
        void* eax_10 = sub_4b9560(ecx_1, *(arg1 + 0x40))
        void var_170
        int32_t* ebx_2
        int16_t top_1
        
        if (*(arg1 + 0x40) != 1)
            int32_t eax_16
            int32_t edx_3
            int80_t st0_4
            st0_4, eax_16, edx_3 = sub_40a930(&var_170)
            int32_t eax_18 = data_3166384
            long double x87_r4_4 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 4))))
            __builtin_memcpy(&var_58, eax_16, 0x40)
            void* var_1c4_6 = &var_58
            void* var_1c8_9 = &var_58
            top_1 = 0xfffd
            __builtin_memcpy(&var_58, sub_4f62d0(eax_18, fconvert.s(x87_r4_4), edx_3), 0x40)
            sub_4f5010(&var_58, eax_18 * 0x118 + *sub_4f4890(ebx_1), "EXPANSION", 0)
            ebx_2 = ebx_1
        else
            int32_t eax_11
            int32_t edx_2
            int80_t st0_3
            st0_3, eax_11, edx_2 = sub_40a930(&var_f0)
            int32_t eax_13 = data_3166384
            long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 4))))
            __builtin_memcpy(&var_58, eax_11, 0x40)
            void* var_1c4_4 = &var_58
            void* var_1c8_7 = &var_58
            top_1 = 0xfffd
            ebx_2 = ebx_1
            __builtin_memcpy(&var_58, sub_4f62d0(eax_13, fconvert.s(x87_r4_2), edx_2), 0x40)
            sub_4f5010(&var_58, eax_13 * 0x118 + *sub_4f4890(ebx_2), "PROMO PACK", 0)
        
        int32_t eax_22 = *(arg1 + 0x40) - 1
        void var_b0
        
        if (eax_22 u<= 3)
            int32_t var_1d0_2
            int32_t* var_1cc_2
            float var_1c8_12
            int32_t eax_23
            int32_t* edx_5
            
            switch (eax_22)
                case 0
                    int80_t st0_5
                    st0_5, eax_23 = sub_40a930(&var_170)
                    edx_5 = data_307c05c
                label_4b9b51:
                    int32_t eax_28 = data_3166388
                    int32_t var_1c4_13 = 0
                    int32_t var_1c8_14 = __builtin_memcpy(&var_58, eax_23, 0x40)
                    var_1c8_12 = fconvert.s(fconvert.t(*(arg1 + 4)))
                    top_1 = 0xfffc
                    var_1cc_2 = edx_5
                    var_1d0_2 = eax_28
                case 1
                    int32_t eax_24
                    int80_t st0_6
                    st0_6, eax_24 = sub_40a930(&var_f0)
                    long double x87_r3_1 = fconvert.t(*(arg1 + 4))
                    int32_t* eax_25 = data_307c058
                    int32_t var_1c4_9 = 0
                    int32_t var_1c8_11 = __builtin_memcpy(&var_58, eax_24, 0x40)
                    var_1c8_12 = fconvert.s(x87_r3_1)
                    top_1 = 0xfffc
                    var_1cc_2 = eax_25
                    var_1d0_2 = data_3166388
                case 2
                    void var_130
                    int32_t eax_26
                    int80_t st0_7
                    st0_7, eax_26 = sub_40a930(&var_130)
                    int32_t edx_7 = data_3166388
                    long double x87_r3_2 = fconvert.t(*(arg1 + 4))
                    int32_t var_1c4_11 = 0
                    int32_t var_1c8_13 = __builtin_memcpy(&var_58, eax_26, 0x40)
                    var_1c8_12 = fconvert.s(x87_r3_2)
                    top_1 = 0xfffc
                    var_1cc_2 = data_307c060
                    var_1d0_2 = edx_7
                case 3
                    int80_t st0_8
                    st0_8, eax_23 = sub_40a930(&var_b0)
                    edx_5 = data_307c054
                    goto label_4b9b51
            
            sub_4f6cb0(ebx_2, var_1d0_2, var_1cc_2, var_1c8_12, nullptr)
        
        int32_t eax_29
        int32_t edx_8
        eax_29, edx_8 = sub_40a930(&var_b0)
        unimplemented  {call 0x40a930}
        unimplemented  {fld st0, dword [edx+0x4]}
        float var_64_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x60], st0})
        unimplemented  {fstp dword [ebp-0x60], st0}
        unimplemented  {fld st0, dword [ebp-0x60]}
        __builtin_memcpy(&var_58, eax_29, 0x40)
        int32_t* ecx_10 = *(eax_10 + 0x1c)
        int32_t eax_31 = data_3166398
        void* var_1c4_15 = &var_58
        int32_t* var_1c8_15 = ecx_10
        float var_1c8_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        __builtin_memcpy(&var_58, sub_4f62d0(eax_31, var_1c8_16, edx_8), 0x40)
        sub_4f5010(&var_58, eax_31 * 0x118 + *sub_4f4890(ebx_1), ecx_10, 0)
        int32_t eax_35
        int32_t edx_9
        eax_35, edx_9 = sub_40a930(&var_b0)
        unimplemented  {call 0x40a930}
        unimplemented  {fld st0, dword [edx+0x4]}
        float var_6c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
        unimplemented  {fstp dword [ebp-0x68], st0}
        unimplemented  {fld st0, dword [ebp-0x68]}
        __builtin_memcpy(&var_58, eax_35, 0x40)
        int32_t* ecx_12 = *(eax_10 + 0x24)
        int32_t eax_37 = data_3166394
        void* var_1c4_16 = &var_58
        int32_t* var_1c8_17 = ecx_12
        float var_1c8_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int16_t top_11 = top_1 - 2
        __builtin_memcpy(&var_58, sub_4f62d0(eax_37, var_1c8_18, edx_9), 0x40)
        void* esi_21 = arg1
        
        if (sub_4b95c0(sub_4f5010(&var_58, eax_37 * 0x118 + *sub_4f4890(ebx_1), ecx_12, 0), 
                *(esi_21 + 0x40)) == 0)
            void* ecx_15 = eax_10
            
            if (*ecx_15 == 3)
                char eax_42
                eax_42, ecx_15 = sub_4b95c0(ecx_15, *(esi_21 + 0x40))
                
                if (eax_42 == 0)
                    int32_t eax_43 = sub_40a930(&var_b0)
                    unimplemented  {call 0x40a930}
                    unimplemented  {fld st0, dword [eax+0x4]}
                    int32_t var_1c8_19 = __builtin_memcpy(&var_58, eax_43, 0x40)
                    float var_1c8_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top_11 -= 1
                    ecx_15 = sub_4f50c0(ebx_1, data_316638c, "Requires Gathering Storm", var_1c8_20, 0)
                    esi_21 = arg1
            
            if (*eax_10 == 4 && sub_4b95c0(ecx_15, *(esi_21 + 0x40)) == 0)
                int32_t eax_45 = sub_40a930(&var_b0)
                unimplemented  {call 0x40a930}
                int32_t edx_14 = data_316638c
                int32_t var_1c8_21 = __builtin_memcpy(&var_58, eax_45, 0x40)
                unimplemented  {fld st0, dword [ecx+0x4]}
                float var_1c8_22 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_11 -= 1
                sub_4f50c0(ebx_1, edx_14, "Requires Rebel vs Imperium", var_1c8_22, 0)
            
            int32_t eax_46 = sub_40a930(&var_b0)
            unimplemented  {call 0x40a930}
            int32_t* eax_47 = *(eax_10 + 0x20)
            __builtin_memcpy(&var_58, eax_46, 0x40)
            unimplemented  {fld st0, dword [ecx+0x4]}
            int32_t eax_48 = data_3166390
            float var_6c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
            unimplemented  {fstp dword [ebp-0x68], st0}
            unimplemented  {fld st0, dword [ebp-0x68]}
            void* var_1c4_20 = &var_58
            void* var_1c8_23 = &var_58
            float var_1c8_24 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            top_11 -= 1
            __builtin_memcpy(&var_58, sub_4f62d0(eax_48, var_1c8_24, eax_10), 0x40)
            sub_4f5010(&var_58, eax_48 * 0x118 + *sub_4f4890(ebx_1), eax_47, 0)
            esi_21 = arg1
        
        void* ebx_5 = esi_21 + 0x13
        int32_t i_1 = 2
        int32_t i
        
        do
            void var_1b0
            result = sub_40a930(&var_1b0)
            unimplemented  {call 0x40a930}
            int32_t* edx_17 = *(ebx_5 - 0xb)
            __builtin_memcpy(&var_58, result, 0x40)
            unimplemented  {fld st0, dword [ecx+0x4]}
            int32_t ecx_20 = *(ebx_5 - 7)
            float var_6c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
            unimplemented  {fstp dword [ebp-0x68], st0}
            top_11 -= 1
            
            if (*(ebx_5 - 2) == 0)
                float eax_51
                
                if (*ebx_5 != 0 || *(ebx_5 + 1) != 0)
                    eax_51 = 4.20389539e-45f
                else
                    result.b = *(ebx_5 + 6)
                    
                    if (result.b == 0)
                        eax_51 = 0f
                    else if (*(ebx_5 + 8) != 0 && *(ebx_5 + 9) != 0)
                        eax_51 = 2.80259693e-45f
                    else if (result.b == 0 || *(ebx_5 + 8) != 0)
                        eax_51 = 0f
                    else
                        eax_51 = 1.40129846e-45f
                
                unimplemented  {fld st0, dword [ebp-0x68]}
                int32_t var_1c4_22 = 0
                int32_t var_1c8_25 = ecx_20
                int32_t* var_1c8_26 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                result = sub_4f6100(edx_17, ecx_20, eax_51, var_1c8_26)
                top_11 -= 1
                unimplemented  {call 0x4f6100}
            
            ebx_5 += 0x1c
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_4bd9a0
// 虚拟地址: 0x4bd9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4bd9a0(struct _EXCEPTION_REGISTRATION_RECORD** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6979cc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_140 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t* ebx_1 = data_307c620
        void var_b0
        int32_t eax_3
        int80_t st0_1
        st0_1, eax_3 = sub_40a930(&var_b0)
        void var_58
        __builtin_memcpy(&var_58, eax_3, 0x40)
        sub_4f5f30(ebx_1, &var_58, 0, fconvert.s(fconvert.t(arg1[1])))
        void* edx_1 = data_27e7a54
        int32_t* eax_5 = sub_4ba260(*(edx_1 + 0x18))
        int32_t eax_6
        
        if ((data_31664d4 & 1) != 0)
            eax_6 = data_31664d0
        else
            data_31664d4.d |= 1
            int32_t var_8_1 = 0
            eax_6, edx_1 = sub_4f5220(ebx_1, "AvatarImage")
            data_31664d0 = eax_6
            int32_t var_8_2 = 0xffffffff
        
        void* var_144_3 = &var_58
        void* var_148_2 = &var_58
        __builtin_memcpy(&var_b0, 
            sub_4f62d0(eax_6, fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[1])))), edx_1), 0x40)
        int32_t eax_8 = sub_4f4890(ebx_1)
        int32_t edx_2
        int80_t st0_3
        st0_3, edx_2 = sub_4f67d0(eax_8, nullptr, eax_5, eax_6 * 0x118 + *eax_8, &data_be1ae0, &var_b0, 
            nullptr, nullptr)
        
        if ((data_31664d4 & 2) == 0)
            data_31664d4.d |= 2
            int32_t var_8_3 = 1
            int32_t eax_9
            eax_9, edx_2 = sub_4f5220(ebx_1, "imgOnlineIndicator")
            data_31664cc = eax_9
            int32_t var_8_4 = 0xffffffff
        
        int32_t* eax_11 = sub_4bbdc0(sub_4bbe10())
        int32_t eax_13 = data_31664cc
        void* var_144_4 = &var_58
        void* var_148_5 = &var_58
        int16_t top_1 = 0xfffe
        __builtin_memcpy(&var_b0, 
            sub_4f62d0(eax_13, fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[1])))), edx_2), 0x40)
        int32_t eax_15 = sub_4f4890(ebx_1)
        sub_4f67d0(eax_15, nullptr, eax_11, eax_13 * 0x118 + *eax_15, &data_be1ae0, &var_b0, nullptr, 
            nullptr)
        
        for (int32_t i = 0; i s< 9; i += 1)
            char const* const ebx_2 = nullptr
            
            if (i == 7)
                if (*(data_27e7a54 + 0x50) != 0)
                    ebx_2 = "Go Online"
                else if (data_27e7a40 == 0)
                    sub_4075c0()
                    sub_407670()
            
            unimplemented  {fld st0, dword [eax+0x4]}
            int32_t ecx_12 = i * 7
            float var_5c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x58], st0})
            unimplemented  {fstp dword [ebp-0x58], st0}
            int32_t edx_3 = arg1[ecx_12 + 0x66]
            int32_t* edi_1 = arg1[ecx_12 + 0x65]
            result = &arg1[ecx_12 + 0x65]
            
            if (*(&arg1[ecx_12] + 0x19d) == 0)
                float eax_18
                
                if (*(result + 0xb) != 0 || result[3].b != 0)
                    eax_18 = 4.20389539e-45f
                else
                    ecx_12.b = *(result + 0x11)
                    
                    if (ecx_12.b == 0)
                        eax_18 = 0f
                    else if (*(result + 0x13) != 0 && result[5].b != 0)
                        eax_18 = 2.80259693e-45f
                    else if (ecx_12.b == 0 || *(result + 0x13) != 0)
                        eax_18 = 0f
                    else
                        eax_18 = 1.40129846e-45f
                
                unimplemented  {fld st0, dword [ebp-0x58]}
                char const* const var_144_5 = ebx_2
                int32_t var_148_7 = ecx_12
                int32_t* var_148_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4f6100(edi_1, edx_3, eax_18, var_148_8)
                top_1 -= 1
                unimplemented  {call 0x4f6100}
        
        unimplemented  {fld st0, dword [ecx+0x4]}
        unimplemented  {fld1 }
        unimplemented  {fucompp } f- unimplemented  {fucompp }
        bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
        bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
        bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
        unimplemented  {fucompp }
        unimplemented  {fucompp }
        result.w =
            (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            result = sub_506a30(&arg1[0xa4])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

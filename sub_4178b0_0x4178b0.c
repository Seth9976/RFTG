// 函数名称: sub_4178b0
// 虚拟地址: 0x4178b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4178b0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69774e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_4 = arg2
    int32_t* var_64 = eax_4
    int32_t ecx
    int32_t var_68 = ecx
    int32_t var_60 = 0
    void* ebx = eax_4 + 0x1b
    int32_t result
    
    while (true)
        unimplemented  {fld st0, dword [edx+0x4]}
        int32_t var_70 = var_60
        float var_58_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x54], st0})
        unimplemented  {fstp dword [ebp-0x54], st0}
        unimplemented  {fld st0, dword [ebp-0x54]}
        int32_t var_d0_1 = 0
        float var_d0_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t var_6c_1 = 0
        void var_b4
        result = sub_4f66d0(&var_b4, *eax_4, eax_4[1], &var_70, var_d0_2, nullptr, nullptr)
        unimplemented  {call 0x4f66d0}
        void var_54
        __builtin_memcpy(&var_54, result, 0x40)
        int32_t* var_d8_2
        int32_t var_d4_2
        float var_d0_3
        float var_cc_3
        int16_t top
        int16_t top_8
        
        if (var_60 s< *var_64[0x43])
            result = arg1
            unimplemented  {fld st0, dword [eax+0x4]}
            int32_t ecx_5 = *(ebx - 7)
            float var_58_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x54], st0})
            unimplemented  {fstp dword [ebp-0x54], st0}
            top -= 1
            
            if (*(ebx - 2) == 0)
                float eax_8
                
                if (*ebx != 0 || *(ebx + 1) != 0)
                    eax_8 = 4.20389539e-45f
                else
                    result.b = *(ebx + 6)
                    
                    if (result.b == 0)
                        eax_8 = 0f
                    else if (*(ebx + 8) != 0 && *(ebx + 9) != 0)
                        eax_8 = 2.80259693e-45f
                    else if (result.b == 0 || *(ebx + 8) != 0)
                        eax_8 = 0f
                    else
                        eax_8 = 1.40129846e-45f
                
                unimplemented  {fld st0, dword [ebp-0x54]}
                int32_t var_c8_2 = 0
                int32_t var_cc_4 = ecx_5
                var_cc_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_8 = top
                var_d0_3 = eax_8
                var_d4_2 = ecx_5
                var_d8_2 = *(ebx - 0xb)
            label_417a5d:
                result = sub_4f6100(var_d8_2, var_d4_2, var_d0_3, var_cc_3)
                top = top_8 - 1
                unimplemented  {call 0x4f6100}
        else
            if ((data_316647c & 1) == 0)
                data_316647c.d |= 1
                int32_t var_8_1 = 0
                result = sub_4f5220(*(ebx - 0xb), "btnEmpty")
                data_3166478 = result
                int32_t var_8_2 = 0xffffffff
            
            unimplemented  {fld st0, dword [ecx+0x4]}
            int32_t* ecx_4 = *(ebx - 0xb)
            float var_58_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x54], st0})
            unimplemented  {fstp dword [ebp-0x54], st0}
            top -= 1
            
            if (*(ebx - 2) == 0)
                float eax_7
                
                if (*ebx != 0 || *(ebx + 1) != 0)
                    eax_7 = 4.20389539e-45f
                else
                    result.b = *(ebx + 6)
                    
                    if (result.b == 0)
                        eax_7 = 0f
                    else if (*(ebx + 8) != 0 && *(ebx + 9) != 0)
                        eax_7 = 2.80259693e-45f
                    else if (result.b == 0 || *(ebx + 8) != 0)
                        eax_7 = 0f
                    else
                        eax_7 = 1.40129846e-45f
                
                unimplemented  {fld st0, dword [ebp-0x54]}
                int32_t var_c8_1 = 0
                int32_t* var_cc_2 = ecx_4
                var_cc_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_8 = top
                var_d0_3 = eax_7
                var_d4_2 = data_3166478
                var_d8_2 = ecx_4
                goto label_417a5d
        int32_t esi_3 = var_60 + 1
        ebx += 0x1c
        var_60 = esi_3
        
        if (esi_3 s>= 9)
            break
        
        eax_4 = var_64
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

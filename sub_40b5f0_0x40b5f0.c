// 函数名称: sub_40b5f0
// 虚拟地址: 0x40b5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_40b5f0(void* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697879
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** var_f4
    int32_t eax_2 = __security_cookie ^ &var_f4
    int32_t __saved_edi
    int32_t var_104 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(*(arg1 + 0xc8))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        void var_a0
        int32_t eax_5
        int80_t st0_1
        st0_1, eax_5 = sub_40a930(&var_a0)
        int32_t* edx_1 = data_307c5a0
        float var_108_2 = fconvert.s(fconvert.t(*(arg1 + 0xc8)))
        void var_60
        __builtin_memcpy(&var_60, eax_5, 0x40)
        sub_4f5f30(edx_1, &var_60, 0, var_108_2)
        int16_t top_1 = 0xfffe
        void* esi_2 = arg1 + 0xb
        var_f4 = 7
        struct _EXCEPTION_REGISTRATION_RECORD** i
        
        do
            unimplemented  {fld st0, dword [edi+0xc8]}
            int32_t ecx = *(esi_2 - 7)
            float var_f0_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
            unimplemented  {fstp dword [esp+0x14], st0}
            
            if (*(esi_2 - 2) == 0)
                float eax_7
                
                if (*esi_2 != 0 || *(esi_2 + 1) != 0)
                    eax_7 = 4.20389539e-45f
                else
                    char eax_6 = *(esi_2 + 6)
                    
                    if (eax_6 == 0)
                        eax_7 = 0f
                    else if (*(esi_2 + 8) != 0 && *(esi_2 + 9) != 0)
                        eax_7 = 2.80259693e-45f
                    else if (eax_6 == 0 || *(esi_2 + 8) != 0)
                        eax_7 = 0f
                    else
                        eax_7 = 1.40129846e-45f
                
                unimplemented  {fld st0, dword [esp+0x14]}
                int32_t var_108_3 = 0
                int32_t var_10c_1 = ecx
                float var_10c_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4f6100(*(esi_2 - 0xb), ecx, eax_7, var_10c_2)
                top_1 -= 1
                unimplemented  {call 0x4f6100}
            
            esi_2 += 0x1c
            i = var_f4
            var_f4 -= 1
        while (i != 1)
        int32_t edx_3 = sub_40b440(&var_f4)
        int32_t var_c_1 = 0
        int32_t eax_8
        
        if ((data_31664a8 & 1) != 0)
            eax_8 = data_31664a4
        else
            data_31664a8.d |= 1
            var_c_1.b = 1
            eax_8, edx_3 = sub_4f5220(data_307c5a0, "txtTimeRemaining")
            data_31664a4 = eax_8
            var_c_1.b = 0
        
        struct _EXCEPTION_REGISTRATION_RECORD** ecx_2 = var_f4
        struct _EXCEPTION_REGISTRATION_RECORD** var_f0_2 = &data_83f3d3
        
        if (ecx_2 != 0)
            var_f0_2 = ecx_2
        
        unimplemented  {fld st0, dword [edi+0xc8]}
        int32_t* ecx_3 = data_307c5a0
        float var_e4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
        unimplemented  {fstp dword [esp+0x20], st0}
        unimplemented  {fld st0, dword [esp+0x20]}
        void* var_108_5 = &var_60
        int32_t* var_10c_4 = ecx_3
        float var_10c_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_9
        char edx_4
        eax_9, edx_4 = sub_4f62d0(eax_8, var_10c_5, edx_3)
        __builtin_memcpy(&var_60, eax_9, 0x40)
        
        if (ecx_3[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*ecx_3 == 0)
            sub_520800(eax_9, edx_4, ecx_3, 0)
            
            if (*ecx_3 == 0)
                sub_509540(ecx_3)
        
        sub_4f5010(&var_60, eax_8 * 0x118 + ***ecx_3, var_f0_2, 0)
        int32_t var_c_2 = 0xffffffff
        result = var_f4
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&var_f4)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                int32_t esi_7 = &result[3][2]
                result = sub_4f4430(result, sub_4f4380(esi_7), esi_7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_f4)
    return result
}

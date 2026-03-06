// 函数名称: sub_417d10
// 虚拟地址: 0x417d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_417d10(void* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6982a4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    float var_134
    int32_t eax_2 = __security_cookie ^ &var_134
    int32_t __saved_edi
    int32_t var_144 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(*(arg1 + 4))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t* eax_5 = data_307c588
        void var_120
        int32_t eax_6
        int80_t st0_1
        st0_1, eax_6 = sub_40a930(&var_120)
        float var_148_2 = fconvert.s(fconvert.t(*(arg1 + 4)))
        int32_t var_14c_1 = 2
        void var_60
        void* var_150_1 = &var_60
        __builtin_memcpy(&var_60, eax_6, 0x40)
        int32_t ecx
        int80_t st0_2
        st0_2, ecx = sub_4f5f30(eax_5, var_150_1, var_14c_1, var_148_2)
        int16_t top_1 = 0xfffe
        int32_t edx_1
        
        for (int32_t i = 0; i s< 8; i += 1)
            if (i != 1)
                int32_t* var_154_3
                void* var_150_3
                float var_14c_5
                char const* const var_148_4
                void* eax_14
                void* ecx_2
                int32_t edx_3
                
                if (i == 0)
                    int32_t eax_10 = *(arg1 + 0x320)
                    char const* const eax_13
                    
                    if (eax_10 == i)
                        eax_13 = "HIGH"
                    else
                        if (eax_10 - i != 1)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\OptionsDlg.cpp", 0x282, 
                                "GetGraphicsQualityText")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        eax_13 = "NORMAL"
                    
                    unimplemented  {fld st0, dword [ebx+0x4]}
                    var_148_4 = eax_13
                    var_134 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    int32_t var_14c_4 = ecx
                    unimplemented  {fld st0, dword [esp+0x18]}
                    var_14c_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    var_150_3 = &var_60
                    var_154_3 = *(arg1 + 0x234)
                    edx_3 = *(arg1 + 0x238)
                    eax_14 = arg1 + 0x23c
                    ecx_2 = arg1 + 0x244
                else if (i != 3)
                    unimplemented  {fld st0, dword [ebx+0x4]}
                    var_148_4 = nullptr
                    var_134 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    int32_t var_14c_7 = ecx
                    unimplemented  {fld st0, dword [esp+0x18]}
                    var_14c_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    var_150_3 = &var_60
                    eax_14 = arg1 + i * 0x1c + 0x23c
                    ecx_2 = arg1 + i * 0x1c + 0x244
                    edx_3 = *(arg1 + i * 0x1c + 0x238)
                    var_154_3 = *(arg1 + i * 0x1c + 0x234)
                else
                    char* eax_16
                    int32_t ecx_4
                    eax_16, ecx_4 = sub_417b20(*(data_27e7a50 + 0x18))
                    unimplemented  {fld st0, dword [ebx+0x4]}
                    var_134 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                    unimplemented  {fstp dword [esp+0x10], st0}
                    unimplemented  {fld st0, dword [esp+0x10]}
                    var_148_4 = eax_16
                    int32_t var_14c_6 = ecx_4
                    var_14c_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    var_150_3 = &var_60
                    var_154_3 = *(arg1 + 0x288)
                    edx_3 = *(arg1 + 0x28c)
                    eax_14 = arg1 + 0x290
                    ecx_2 = arg1 + 0x298
                
                ecx, edx_1 =
                    sub_5055d0(eax_14, edx_3, ecx_2, var_154_3, var_150_3, var_14c_5, var_148_4)
            else
                char* eax_9 = sub_417aa0(*(arg1 + 0x31c))
                unimplemented  {fld st0, dword [ebx+0x4]}
                bool cond:0_1 = *(arg1 + 0x259) != 0
                var_134 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                unimplemented  {fstp dword [esp+0x10], st0}
                edx_1 = *(arg1 + 0x254)
                
                if (not(cond:0_1))
                    float ecx_1
                    
                    if (*(arg1 + 0x25b) != 0 || *(arg1 + 0x25c) != 0)
                        ecx_1 = 4.20389539e-45f
                    else
                        ecx.b = *(arg1 + 0x261)
                        
                        if (ecx.b == 0)
                            ecx_1 = 0f
                        else if (*(arg1 + 0x263) != 0 && *(arg1 + 0x264) != 0)
                            ecx_1 = i + 1
                        else if (ecx.b == 0 || *(arg1 + 0x263) != 0)
                            ecx_1 = 0f
                        else
                            ecx_1 = 1.40129846e-45f
                    
                    unimplemented  {fld st0, dword [esp+0x10]}
                    char* var_148_3 = eax_9
                    float var_14c_2 = ecx_1
                    float var_14c_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    ecx, edx_1 = sub_4f6100(*(arg1 + 0x250), edx_1, ecx_1, var_14c_3)
                    top_1 -= 1
                    unimplemented  {call 0x4f6100}
        
        int32_t* esi_2
        
        if ((data_3166668 & 1) != 0)
            esi_2 = eax_5
        else
            data_3166668.d |= 1
            esi_2 = eax_5
            int32_t var_c_1 = 0
            int32_t eax_19
            eax_19, edx_1 = sub_4f5220(esi_2, "img_lang")
            data_3166664 = eax_19
            int32_t var_c_2 = 0xffffffff
        
        int32_t eax_21
        
        if ((data_3166668 & 2) != 0)
            eax_21 = data_3166660
        else
            data_3166668.d |= 2
            int32_t var_c_3 = 1
            eax_21, edx_1 = sub_4f5220(esi_2, "img_langShadow")
            data_3166660 = eax_21
            int32_t var_c_4 = 0xffffffff
        
        unimplemented  {fld st0, dword [ebx+0x4]}
        void* var_148_9 = &var_60
        var_134 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
        unimplemented  {fstp dword [esp+0x14], st0}
        unimplemented  {fld st0, dword [esp+0x14]}
        void* var_14c_11 = &var_60
        float var_14c_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_22
        char edx_6
        eax_22, edx_6 = sub_4f62d0(eax_21, var_14c_12, edx_1)
        __builtin_memcpy(&var_120, eax_22, 0x40)
        
        if (eax_5[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*eax_5 == 0)
            sub_520800(eax_22, edx_6, eax_5, 0)
            
            if (*eax_5 == 0)
                sub_509540(eax_5)
        
        void* eax_27 = eax_21 * 0x118 + ***eax_5
        float edx_8 = sub_4f67d0(eax_27, nullptr, *(eax_27 + 0x68), eax_27, &data_be1ae0, &var_120, 
            nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        
        switch (*(data_27e7a50 + 0x18))
            case 1
                edx_8 = data_307c4a8
                var_134 = edx_8
            case 2
                var_134 = data_307c4b8
            case 3
                var_134 = data_307c4b0
            case 4
                edx_8 = data_307c4d0
                var_134 = edx_8
            case 5
                var_134 = data_307c4d4
            case 6
                var_134 = data_307c4cc
            case 7
                edx_8 = data_307c4c0
                var_134 = edx_8
            case 8
                var_134 = data_307c4c4
            case 9
                var_134 = data_307c4bc
            case 0xa
                edx_8 = data_307c4c8
                var_134 = edx_8
            case 0xb
                var_134 = data_307c4b4
            default
                var_134 = data_307c4ac
        
        unimplemented  {fld st0, dword [edx+0x4]}
        int32_t eax_34 = data_3166664
        float var_12c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
        unimplemented  {fstp dword [esp+0x18], st0}
        unimplemented  {fld st0, dword [esp+0x18]}
        void* var_148_13 = &var_60
        void* var_14c_15 = &var_60
        float var_14c_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_35
        char edx_9
        eax_35, edx_9 = sub_4f62d0(eax_34, var_14c_16, edx_8)
        __builtin_memcpy(&var_120, eax_35, 0x40)
        
        if (eax_5[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*eax_5 == 0)
            sub_520800(eax_35, edx_9, eax_5, 0)
            
            if (*eax_5 == 0)
                sub_509540(eax_5)
        
        void* eax_40 = eax_34 * 0x118 + ***eax_5
        sub_4f67d0(eax_40, nullptr, var_134, eax_40, &data_be1ae0, &var_120, nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        sub_4178b0(arg1, arg1 + 0x14)
        int32_t edx_12 = sub_4178b0(arg1, arg1 + 0x124)
        
        if ((data_3166668 & 4) == 0)
            data_3166668.d |= 4
            int32_t var_c_5 = 2
            int32_t eax_42
            eax_42, edx_12 = sub_4f5220(eax_5, "chkWidescreen")
            data_316665c = eax_42
            int32_t var_c_6 = 0xffffffff
        
        if ((data_3166668 & 8) == 0)
            data_3166668.d |= 8
            int32_t var_c_7 = 3
            int32_t eax_43
            eax_43, edx_12 = sub_4f5220(eax_5, "chkFullscreen")
            data_3166658 = eax_43
            int32_t var_c_8 = 0xffffffff
        
        if ((data_3166668 & 0x10) == 0)
            data_3166668.d |= 0x10
            int32_t var_c_9 = 4
            int32_t eax_44
            eax_44, edx_12 = sub_4f5220(eax_5, "chkGoogle")
            data_3166654 = eax_44
            int32_t var_c_10 = 0xffffffff
        
        result = 0x20
        
        if ((data_3166668 & 0x20) == 0)
            data_3166668.d |= 0x20
            int32_t var_c_11 = 5
            result, edx_12 = sub_4f5220(eax_5, "txtBeta")
            data_3166650 = result
            int32_t var_c_12 = 0xffffffff
        
        void* ecx_14 = data_27e7a50
        void* var_160
        
        if (*(ecx_14 + 0x1d) != 0)
            unimplemented  {fld st0, dword [edi+0x4]}
            int32_t eax_45 = data_316665c
            float var_128_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            unimplemented  {fld st0, dword [esp+0x1c]}
            void* var_148_22 = &var_60
            void* var_14c_24 = ecx_14
            float var_14c_25 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            __builtin_memcpy(&var_120, sub_4f62d0(eax_45, var_14c_25, edx_12), 0x40)
            void* ecx_18 = eax_45 * 0x118 + *sub_4f4890(eax_5)
            void* var_150_10 = nullptr
            int32_t* var_154_10 = nullptr
            float var_158_7 = &var_120
            int32_t* var_15c_1 = &data_be1ae0
            var_160 = ecx_18
            result, edx_12 = sub_4f67d0(&var_120, nullptr, *(ecx_18 + 0x68), var_160, var_15c_1, 
                var_158_7, var_154_10, var_150_10)
            unimplemented  {call 0x4f67d0}
        
        void* ecx_20 = data_27e7a50
        
        if (*(ecx_20 + 0x1e) != 0)
            unimplemented  {fld st0, dword [edi+0x4]}
            int32_t eax_49 = data_3166658
            float var_128_3 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            unimplemented  {fld st0, dword [esp+0x1c]}
            void* var_148_23 = &var_60
            void* var_14c_26 = ecx_20
            float var_14c_27 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            __builtin_memcpy(&var_120, sub_4f62d0(eax_49, var_14c_27, edx_12), 0x40)
            void* ecx_24 = eax_49 * 0x118 + *sub_4f4890(eax_5)
            void* var_150_11 = nullptr
            int32_t* var_154_11 = nullptr
            float var_158_8 = &var_120
            int32_t* var_15c_2 = &data_be1ae0
            var_160 = ecx_24
            result, edx_12 = sub_4f67d0(&var_120, nullptr, *(ecx_24 + 0x68), var_160, var_15c_2, 
                var_158_8, var_154_11, var_150_11)
            unimplemented  {call 0x4f67d0}
        
        void* ecx_26 = data_27e7a50
        
        if (*(ecx_26 + 0x18) != 0)
            unimplemented  {fld st0, dword [edi+0x4]}
            int32_t eax_53 = data_3166650
            float var_128_4 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            unimplemented  {fld st0, dword [esp+0x1c]}
            void* var_148_24 = &var_60
            void* var_14c_28 = ecx_26
            float var_14c_29 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            __builtin_memcpy(&var_120, sub_4f62d0(eax_53, var_14c_29, edx_12), 0x40)
            result = sub_4f5010(&var_120, eax_53 * 0x118 + *sub_4f4890(eax_5), "BETA", 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_134)
    return result
}

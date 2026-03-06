// 函数名称: sub_437da0
// 虚拟地址: 0x437da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_437da0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696e5e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t entry_ebx
    int32_t var_3fc = entry_ebx
    int32_t var_408 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_2
    float var_a8
    float var_24
    
    if (*(data_27e7fd0 + 0x27) == 0)
        int32_t eax_12
        int32_t edx_3
        eax_12, edx_3 = sub_426870(arg2, 0)
        arg2[0x29] = eax_12
        int32_t eax_13 = arg3[1]
        int32_t ebx_1
        
        if (eax_13 != 0xffffffff)
            int32_t eax_14
            eax_14, edx_3 = sub_46b360(eax_13)
            ebx_1 = eax_14
        else
            ebx_1 = entry_ebx | eax_13
        
        int32_t eax_15 = *arg3
        
        if (eax_15 u> 0x26)
        label_4382cf:
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2edd, "GetStartTransform")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_16 = zx.d(lookup_table_43836c[eax_15])
        float* var_414_2
        void* var_410_4
        char var_40c_8
        int32_t var_7c_2
        void var_78
        void var_38
        float var_28
        void* eax_31
        
        switch (eax_16)
            case 0
                *(data_27e7a40 + 0x74)
                __builtin_memcpy(&var_38, &arg2[3], 0x20)
                esi_2 = &var_38
            case 1
                if (ebx_1 == *(data_27e7a40 + 0x74))
                    goto label_43829c
                
                int32_t eax_28 = sub_424cd0(3, edx_3, ebx_1)
                var_7c_2 = eax_28
                void var_3b8
                __builtin_memcpy(&var_78, sub_45fb20(eax_28, &var_3b8, ebx_1, &var_3b8), 0x40)
                eax_31 = zx.d(sub_431320(ebx_1))
                var_40c_8 = eax_31.b
                var_410_4 = &var_78
                void var_d8
                var_414_2 = &var_d8
                goto label_4380e5
            case 2
                void* edx_14 = data_27e7a40
                
                if (ebx_1 == *(edx_14 + 0x74))
                    goto label_43829c
                
                int32_t eax_40
                int32_t edx_15
                eax_40, edx_15 = sub_424cd0(3, edx_14, ebx_1)
                var_7c_2 = eax_40
                void var_378
                __builtin_memcpy(&var_78, sub_45fb20(&var_378, edx_15, ebx_1, &var_378), 0x40)
                var_40c_8 = sub_431320(ebx_1)
                var_410_4 = &var_78
                void var_118
                eax_31 = &var_118
                var_414_2 = &var_118
            label_4380e5:
                void* eax_32
                int80_t st0_4
                st0_4, eax_32 = sub_4300f0(eax_31, eax_12, var_7c_2, var_414_2, var_410_4, var_40c_8)
                __builtin_memcpy(&var_38, eax_32, 0x20)
                esi_2 = &var_38
            case 3
                void* edx_17 = data_27e7a40
                
                if (ebx_1 == *(edx_17 + 0x74))
                    goto label_43829c
                
                void var_3f8
                __builtin_memcpy(&var_78, sub_45fb20(&var_3f8, edx_17, ebx_1, &var_3f8), 0x40)
                void var_1d8
                void* eax_49
                int80_t st0_10
                st0_10, eax_49 = sub_430720(&var_1d8)
                __builtin_memcpy(&var_38, eax_49, 0x20)
                esi_2 = &var_38
            case 4
                if (ebx_1 != *(data_27e7a40 + 0x74))
                    float var_198[0x8]
                    void* eax_46
                    int80_t st0_9
                    st0_9, eax_46 = sub_42ff60(&var_198)
                    __builtin_memcpy(&var_38, eax_46, 0x20)
                    esi_2 = &var_38
                else
                    if (sub_437d20() != 0)
                        goto label_43829c
                    
                    float var_158[0x8]
                    void* eax_45
                    int80_t st0_8
                    st0_8, eax_45 = sub_42ff60(&var_158)
                    __builtin_memcpy(&var_38, eax_45, 0x20)
                    esi_2 = &var_38
            case 5
                int32_t* ebx_2 = data_307c72c
                void var_2f8
                int32_t eax_20
                int32_t edx_4
                int80_t st0_2
                st0_2, eax_20, edx_4 = sub_40a930(&var_2f8)
                __builtin_memcpy(&var_78, eax_20, 0x40)
                
                if ((data_316635c & 1) == 0)
                    data_316635c.d |= 1
                    int32_t var_8_1 = 0
                    int32_t eax_21
                    eax_21, edx_4 = sub_4f5220(ebx_2, "bg")
                    data_3166358 = eax_21
                    int32_t var_8_2 = 0xffffffff
                
                int32_t* eax_23 = sub_4f5350(data_3166358, edx_4, ebx_2, &var_78)
                float edx_5 = eax_23[1]
                var_28 = *eax_23
                int32_t ecx_8 = eax_23[2]
                var_24 = edx_5
                int32_t var_20_2 = ecx_8
                int32_t var_1c_2 = eax_23[3]
                float eax_25
                float edx_7
                eax_25, edx_7 = sub_405eb0(&var_28)
                var_28 = fconvert.s(fconvert.t(eax_25))
                float eax_26 = var_28
                var_24 = fconvert.s(fconvert.t(edx_7))
                long double x87_r6_3 = float.t(0)
                float var_20_3 = fconvert.s(x87_r6_3)
                __builtin_memcpy(&var_a8, &data_be4c5c, 0x20)
                var_a8 = fconvert.s(x87_r6_3)
                float var_94_1 = eax_26
                float var_90_1 = var_24
                float var_8c_1 = var_20_3
                __builtin_memcpy(&var_38, &var_a8, 0x20)
                esi_2 = &var_38
            case 6
                if (ebx_1 == *(data_27e7a40 + 0x74))
                    goto label_43829c
                
                void var_338
                __builtin_memcpy(&var_78, sub_45fb20(eax_16, &var_338, ebx_1, &var_338), 0x40)
                void var_278
                void* eax_35
                int80_t st0_6
                st0_6, eax_35 = sub_430720(&var_278)
                __builtin_memcpy(&var_38, eax_35, 0x20)
                esi_2 = &var_38
            case 7
                float var_1f8[0x8]
                void* eax_33
                int80_t st0_5
                st0_5, eax_33 = sub_42ff60(&var_1f8)
                __builtin_memcpy(&var_38, eax_33, 0x20)
                esi_2 = &var_38
            case 8
            label_43829c:
                __builtin_memcpy(&var_38, &arg2[3], 0x20)
                esi_2 = &var_38
            case 9
                __builtin_memcpy(&var_38, sub_418870(arg3[5]) + 0xc, 0x20)
                esi_2 = &var_38
            case 0xa
                float var_1b8[0x8]
                void* eax_27
                int80_t st0_3
                st0_3, eax_27 = sub_42ff60(&var_1b8)
                __builtin_memcpy(&var_38, eax_27, 0x20)
                esi_2 = &var_38
            case 0xb
                __builtin_memcpy(&var_38, sub_418870(arg3[8]) + 0xc, 0x20)
                esi_2 = &var_38
            case 0xc
                void var_98
                int32_t* eax_36
                int80_t st0_7
                st0_7, eax_36 = sub_467bf0(&var_98)
                float ecx_16 = eax_36[1]
                var_28 = *eax_36
                int32_t edx_13 = eax_36[2]
                int32_t eax_37 = eax_36[3]
                var_24 = ecx_16
                int32_t var_1c_3 = eax_37
                int32_t var_20_4 = edx_13
                __builtin_memcpy(&var_38, sub_430000(&var_28, 1), 0x20)
                esi_2 = &var_38
            case 0xd
                void var_218
                __builtin_memcpy(&var_38, sub_436780(eax_16, &var_218, ebx_1, &var_218), 0x20)
                esi_2 = &var_38
            case 0xe
                if (arg2[0x17] != 0)
                    goto label_43829c
                
                float var_298[0x8]
                void* eax_19
                int80_t st0_1
                st0_1, eax_19 = sub_42ff60(&var_298)
                __builtin_memcpy(&var_38, eax_19, 0x20)
                esi_2 = &var_38
            case 0xf
                goto label_4382cf
    else
        int32_t* esi_1
        
        if (arg3[0xe] == 0)
            int32_t eax_5 = *arg3 - 4
            char var_238[0x20]
            
            if (eax_5 u> 0x22)
            label_437edb:
                long double x87_r7_1 = float.t(0)
                esi_1 = &arg2[3]
                long double temp0_1 = fconvert.t(*esi_1)
                x87_r7_1 - temp0_1
                eax_5.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    sub_4c5870("currentCard.transform.s > 0", &data_83f3d3, "..\code\RFTGClient.cpp", 
                        0x2e2a, "GetStartTransformVR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            else
                switch (jump_table_4382e8[zx.d(lookup_table_438308[eax_5])])
                    case 0x437e55
                        esi_1 = sub_4343b0()
                    case 0x437e62
                        esi_1 = sub_435cd0(eax_5, &var_238, arg3[1], &var_238)
                    case 0x437e76
                        esi_1 = sub_4349a0()
                    case 0x437e7e
                        if (arg3[1] != 0)
                            esi_1 = sub_4349a0()
                        else
                            esi_1 = &arg2[3]
                    case 0x437e91
                        esi_1 = sub_418870(arg3[5]) + 0xc
                    case 0x437ea1
                        float edi_2 = arg3[1]
                        
                        if (edi_2 == 0)
                            esi_1 = &arg2[3]
                        else
                            int32_t ecx_5 = *(data_27e7a40 + 0x74)
                            int32_t var_20_1 = 2
                            var_24 = edi_2
                            int32_t var_1c_1 = 0
                            void var_58
                            esi_1 = sub_435fb0(&var_24, arg2, ecx_5, &var_58, &var_24, 0)
                    case 0x437edb
                        goto label_437edb
        else
            esi_1 = &data_be4c5c
        
        __builtin_memcpy(&var_a8, esi_1, 0x20)
        esi_2 = &var_a8
    __builtin_memcpy(arg4, esi_2, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return arg4
}

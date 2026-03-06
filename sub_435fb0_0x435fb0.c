// 函数名称: sub_435fb0
// 虚拟地址: 0x435fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_435fb0(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6969fc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_448 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg2
    int32_t* var_5c = edi
    
    if (arg3 != 0xffffffff && *sub_46b2b0(arg3) == 0)
        int32_t eax_6 = *arg5
        int32_t ebx_1
        
        if (eax_6 != 0xffffffff)
            edi = var_5c
            ebx_1 = sub_46b360(eax_6)
        else
            ebx_1 = arg5 | eax_6
        
        int32_t eax_8
        char* edx
        eax_8, edx = sub_426870(edi, 0)
        edi[0x29] = eax_8
        int32_t edi_2 = eax_8
        
        if (arg6 != 0)
            edi_2 = 0
        
        int32_t eax_9 = arg5[1]
        int32_t* var_70
        int32_t var_68
        int32_t var_60
        float var_38
        float* eax_12
        float* esi_2
        
        switch (eax_9)
            case 0
                eax_12 = sub_4349a0()
            label_4360d9:
                esi_2 = eax_12
            label_4360e5:
                __builtin_memcpy(arg4, esi_2, 0x20)
                fsbase->NtTib.ExceptionList = ExceptionList
                sub_5a6aba(eax_2 ^ &__saved_ebp)
                return arg4
            case 1, 0x11
                data_3092a04
                
                if ((data_3166280 & 1) == 0)
                    data_3166280.d |= 1
                    int32_t var_8_1 = 0
                    char const* const var_44c_18 = "players"
                    int32_t eax_49
                    eax_49, edx = sub_510710(data_307ca3c, edx)
                    data_316627c = eax_49
                    int32_t var_8_2 = 0xffffffff
                
                if ((data_3166280 & 2) == 0)
                    data_3166280.d |= 2
                    int32_t var_8_3 = 1
                    char const* const var_44c_19 = "discard"
                    data_3166278 = sub_510710(data_307ca78, edx)
                    int32_t var_8_4 = 0xffffffff
                
                int32_t eax_52 = sub_50eb00(data_316627c, 0)
                void var_278
                __builtin_memcpy(&var_38, sub_50faa0(eax_52, eax_52, data_3166278, &var_278), 0x20)
                var_38 = fconvert.s(fconvert.t(var_38) * fconvert.t(0.0010000000474974513))
                void var_88
                int32_t* eax_54 = sub_406230(&var_88, &data_8409cc, fconvert.s(fconvert.t(3.14159274f)))
                int32_t ecx_19 = eax_54[1]
                float var_78 = *eax_54
                int32_t eax_55 = eax_54[3]
                int32_t var_74_1 = ecx_19
                var_70 = eax_54[2]
                int32_t var_6c_1 = eax_55
                float var_b8
                float var_34
                sub_405ee0(&var_b8, &var_78, &var_34)
                long double x87_r7_9 = fconvert.t(data_be1ac0)
                var_34 = var_b8
                int32_t var_b4
                int32_t var_30_1 = var_b4
                int32_t var_b0
                int32_t var_44c_22 = var_b0
                int32_t var_2c_1 = var_b0
                int32_t var_ac
                int32_t var_28_1 = var_ac
                void var_a8
                int32_t* eax_57 = sub_406230(&var_a8, &data_8409b4, fconvert.s(x87_r7_9))
                int32_t edx_21 = eax_57[1]
                var_78 = *eax_57
                int32_t var_74_2 = edx_21
                int32_t edx_22 = eax_57[3]
                var_70 = eax_57[2]
                int32_t var_6c_2 = edx_22
                float var_98
                sub_405ee0(&var_98, &var_78, &var_34)
                var_34 = var_98
                float var_1c
                float var_1c_1 = fconvert.s(fconvert.t(var_1c) + fconvert.t(0.02500000037252903))
                int32_t var_94
                int32_t var_30_2 = var_94
                int32_t var_90
                int32_t var_2c_2 = var_90
                int32_t var_8c
                int32_t var_28_2 = var_8c
                esi_2 = &var_38
                goto label_4360e5
            case 2
                if (*arg5 != 0)
                    int32_t eax_15 = sub_424ca0(ebx_1)
                    float var_3b8[0x8]
                    
                    if (ebx_1 != 0xffffffff)
                        eax_12 = sub_432af0(&var_3b8, edi_2, eax_15, &var_3b8, *sub_46b2b0(ebx_1))
                    else
                        eax_12 = sub_432af0(&var_3b8, edi_2, eax_15, &var_3b8, eax_15 | ebx_1)
                else
                    int32_t eax_11 = sub_424cd0(2, edx, ebx_1)
                    
                    if (arg6 != 0)
                        eax_11 = 1
                    
                    float var_3f8[0x8]
                    eax_12 = sub_432a50(eax_11, edi_2, eax_11, &var_3f8, *arg5)
                
                goto label_4360d9
            case 3
                if (*arg5 != 0)
                    int32_t eax_22 = sub_424cd0(3, edx, ebx_1)
                    char* esi_4 = 6
                    
                    if (sub_431320(ebx_1) == 1)
                        esi_4 = 7
                    
                    int32_t var_5c_1 = 2
                    var_60 = esi_4
                    char* ecx_9 = esi_4
                    
                    if (eax_22 s> esi_4 * 2)
                        ecx_9 = eax_22 - esi_4
                    
                    int32_t eax_26
                    
                    if (edi_2 s>= esi_4)
                        edi_2 -= esi_4
                        eax_26 = 1
                    else
                        eax_26 = 0
                    
                    int32_t var_64_3 = eax_26
                    int32_t* var_44c_6 = &var_60
                    var_68 = edi_2
                    int80_t st0_2
                    st0_2, eax_12 = sub_4338c0(&var_60, ebx_1, ecx_9, &var_68, ecx_9)
                else
                    char* eax_21
                    int32_t edx_4
                    eax_21, edx_4 = sub_424cd0(3, edx, ebx_1)
                    void var_138
                    int80_t st0_1
                    st0_1, eax_12 = sub_432540(eax_21, edx_4, 0, &var_138, eax_21)
                
                goto label_4360d9
            case 4
                if (*arg5 != 0)
                    int32_t eax_29 = sub_424cd0(3, edx, ebx_1)
                    char* esi_5 = 6
                    
                    if (sub_431320(ebx_1) == 1)
                        esi_5 = 7
                    
                    int32_t var_5c_2 = 2
                    var_60 = esi_5
                    char* ecx_11 = esi_5
                    
                    if (eax_29 s> esi_5 * 2)
                        ecx_11 = eax_29 - esi_5
                    
                    int32_t eax_33
                    
                    if (edi_2 s>= esi_5)
                        edi_2 -= esi_5
                        eax_33 = 1
                    else
                        eax_33 = 0
                    
                    int32_t var_64_5 = eax_33
                    int32_t* var_44c_9 = &var_60
                    var_68 = edi_2
                    int80_t st0_4
                    st0_4, eax_12 = sub_433930(&var_60, ebx_1, ecx_11, &var_68, ecx_11)
                else
                    char* eax_28
                    int32_t edx_7
                    eax_28, edx_7 = sub_424cd0(3, edx, ebx_1)
                    int80_t st0_3
                    st0_3, eax_12 = sub_4327c0(eax_28, edx_7, 0, edi_2, eax_28)
                
                goto label_4360d9
            case 5, 0x10
                int32_t eax_39
                int32_t edx_10
                eax_39, edx_10 = sub_426ad0(sub_436b30())
                int32_t var_5c_3 = eax_39
                
                if (arg6 != 0)
                    var_5c_3 = 0
                
                int32_t eax_43
                
                if (*arg5 != 0)
                    int32_t eax_44 = sub_424cd0(3, edx_10, ebx_1)
                    void var_438
                    void var_58
                    __builtin_memcpy(&var_58, sub_45fb20(eax_44, &var_438, ebx_1, &var_438), 0x40)
                    uint32_t eax_47 = zx.d(sub_431320(ebx_1))
                    float var_338[0x8]
                    int80_t st0_9
                    st0_9, eax_43 = sub_4300f0(eax_47, var_5c_3, eax_44, &var_338, &var_58, eax_47.b)
                else
                    int32_t eax_41 = sub_424cd0(2, edx_10, ebx_1)
                    int32_t var_44c_14 = var_5c_3
                    int80_t st0_8
                    st0_8, eax_43 = sub_42fcd0(sub_431320(ebx_1), eax_41)
                
                __builtin_memcpy(&var_38, eax_43, 0x20)
                var_38 = fconvert.s(float.t(0))
                esi_2 = &var_38
                goto label_4360e5
            case 8, 9
                eax_12 = sub_433c40(ebx_1)
                goto label_4360d9
            case 0xa, 0xf
                eax_12 = sub_433d60()
                goto label_4360d9
            case 0xb
                char var_158[0x20]
                eax_12 = sub_435a40(eax_9, &var_158, *arg5, &var_158)
                goto label_4360d9
            case 0xc
                void var_198
                eax_12 = sub_435cd0(&var_198, edx, *arg5, &var_198)
                goto label_4360d9
            case 0xd
                eax_12 = sub_4343b0()
                goto label_4360d9
            case 0xe
                int32_t eax_35 = *var_5c
                void var_2f8
                int80_t st0_5
                
                if (eax_35 == 0)
                    st0_5, eax_12 = sub_4347b0(&var_2f8)
                else
                    void var_1f8
                    int80_t st0_6
                    
                    if (eax_35 != 4)
                        if (eax_35 != 6)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x28ff, 
                                "CalcDestTransformVR")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void var_d8
                        int80_t st0_7
                        st0_7, eax_12 = sub_433e40(&var_d8)
                    else
                        st0_6, eax_12 = sub_4344c0(&var_1f8, var_5c[0x21])
                goto label_4360d9
            case 0x12, 0x13, 0x19, 0x1a
                void var_358
                int80_t st0_13
                void var_318
                int80_t st0_12
                
                if (eax_9 == 0x12 || eax_9 == 0x19)
                    st0_13, eax_12 = sub_433fc0(&var_358)
                else
                    st0_12, eax_12 = sub_434130(&var_318)
                goto label_4360d9
            case 0x14
                void var_f8
                int80_t st0_10
                st0_10, eax_12 = public: struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo * __thiscall std::vector<struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo, class std::allocator<struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo>>::_Emplace_reallocate<struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo>(struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo *const, struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo &&)(
                    &var_f8, edi_2)
                goto label_4360d9
            case 0x15
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x28be, 
                    "CalcDestTransformVR")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case 0x16
                eax_12 = sub_435f20(var_5c[0x21], edx, *arg5)
                goto label_4360d9
            case 0x17, 0x18
                int32_t eax_63
                void var_398
                int80_t st0_14
                
                if (*arg5 != 0)
                    int32_t eax_64 = sub_424cd0(3, edx, ebx_1)
                    int32_t* esi_14 = 6
                    
                    if (sub_431320(ebx_1) == 1)
                        esi_14 = 7
                    
                    int32_t var_6c_3 = 2
                    var_70 = esi_14
                    int32_t* ecx_34 = esi_14
                    
                    if (eax_64 s> esi_14 * 2)
                        ecx_34 = eax_64 - esi_14
                    
                    int32_t eax_68
                    
                    if (edi_2 s>= esi_14)
                        edi_2 -= esi_14
                        eax_68 = 1
                    else
                        eax_68 = 0
                    
                    int32_t var_5c_5 = eax_68
                    int32_t** var_44c_33 = &var_70
                    var_60 = edi_2
                    int80_t st0_15
                    st0_15, eax_63 = sub_433850(&var_70, ebx_1, ecx_34, &var_60, ecx_34)
                else
                    st0_14, eax_63 = sub_4322c0(&var_398, ebx_1, edi_2, sub_424cd0(3, edx, ebx_1))
                bool cond:7_1 = arg5[1] != 0x18
                __builtin_memcpy(&var_38, eax_63, 0x20)
                
                if (not(cond:7_1))
                    unimplemented  {fldz }
                    var_38 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
                    unimplemented  {fstp dword [ebp-0x34], st0}
                
                esi_2 = &var_38
                goto label_4360e5
            case 0x1b
                void var_298
                int80_t st0_11
                st0_11, eax_12 = sub_4339a0(&var_298, edi_2, *(*(data_27e7a40 + 0x548) + 0x43888))
                goto label_4360d9
            case 0x1c
                eax_12 = sub_4342a0()
                goto label_4360d9
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2978, "CalcDestTransformVR")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_4c5870("localSeat == SEAT_LOCAL", &data_83f3d3, "..\code\RFTGClient.cpp", 0x28b5, 
        "CalcDestTransformVR")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

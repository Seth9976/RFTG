// 函数名称: sub_454bf0
// 虚拟地址: 0x454bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_454bf0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69764c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_19c
    int32_t eax_2 = __security_cookie ^ &var_19c
    int32_t __saved_edi
    int32_t var_1ac = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = data_31663cc
    void var_88
    int32_t edx
    sub_44fae0(&var_88, edx, ecx, &var_88)
    int32_t var_c_1 = 0
    void* eax_7 = sub_418870(ecx)
    void* var_18c = eax_7
    float var_184
    void var_c8
    __builtin_memcpy(&var_c8, sub_454940(eax_7, &var_184), 0x40)
    void* edx_2 = *(sub_418a10() + *(var_18c + 0x7c) * 0x14 + 0x46c)
    char* var_194
    sub_4c42b0(&var_194, "{help}")
    var_c_1.b = 1
    char* var_198 = nullptr
    void* var_190
    void var_108
    int32_t var_28
    
    if (var_28 s> 0)
        void* eax_145
        
        do
            int32_t ebx_2 = var_198 * 2
            int32_t var_84[0x17]
            int32_t eax_10
            int32_t ecx_3
            eax_10, ecx_3 = sub_450470(var_84[ebx_2 * 2])
            unimplemented  {fld st0, dword [esp+0x28]}
            int32_t var_1b8_1 = ecx_3
            float var_1b8_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_148
            int32_t eax_12 =
                sub_4f66d0(&var_148, data_307c110, eax_10, &data_84074c, var_1b8_2, nullptr, nullptr)
            unimplemented  {call 0x4f66d0}
            int32_t eax_13 = (&var_1ac)[ebx_2 * 2 + 0x49]
            int32_t ecx_4 = __builtin_memcpy(&var_108, eax_12, 0x40)
            
            if (eax_13 u> 8)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5b7a, "DrawZoomCard")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void** ecx_8
            int16_t top
            
            switch (eax_13)
                case 0
                    int32_t* esi_5 = data_307c114
                    
                    if ((data_316645c & 1) == 0)
                        data_316645c.d |= 1
                        var_c_1.b = 2
                        data_3166458 = sub_4f5220(esi_5, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c & 2) == 0)
                        data_316645c.d |= 2
                        var_c_1.b = 3
                        data_3166454 = sub_4f5220(esi_5, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_2 = ecx_4
                    float var_1b0_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_5 = sub_4f5f30(esi_5, &var_108, 0, var_1b0_3)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_3 = ecx_5
                    float var_1b4_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_17 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_3 = sub_4f50c0(esi_5, data_3166454, eax_17, var_1b4_4, 0)
                    char* eax_19 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_19 == 0)
                        eax_19 = &data_83f3d3
                    
                    int32_t* eax_21
                    int32_t ecx_7
                    eax_21, ecx_7 =
                        sub_44be60(&var_18c, &var_194, sub_4fd8f0(eax_19, edx_3, eax_19, nullptr))
                    var_c_1.b = 4
                    int32_t* eax_22 = *eax_21
                    
                    if (eax_22 == 0)
                        eax_22 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_6 = ecx_7
                    float var_1b4_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_5, data_3166458, eax_22, var_1b4_7, 0)
                    ecx_8 = &var_18c
                case 1
                    int32_t* esi_6 = data_307c134
                    
                    if ((data_316645c & 4) == 0)
                        data_316645c.d |= 4
                        var_c_1.b = 5
                        data_3166450 = sub_4f5220(esi_6, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c & 8) == 0)
                        data_316645c.d |= 8
                        var_c_1.b = 6
                        data_316644c = sub_4f5220(esi_6, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_5 = ecx_4
                    float var_1b0_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_9 = sub_4f5f30(esi_6, &var_108, 0, var_1b0_6)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_10 = ecx_9
                    float var_1b4_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_27 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_5 = sub_4f50c0(esi_6, data_316644c, eax_27, var_1b4_11, 0)
                    char* eax_28 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_28 == 0)
                        eax_28 = &data_83f3d3
                    
                    int32_t* eax_30
                    int32_t ecx_11
                    eax_30, ecx_11 =
                        sub_44be60(&var_190, &var_194, sub_4fd8f0(eax_28, edx_5, eax_28, nullptr))
                    var_c_1.b = 7
                    int32_t* eax_31 = *eax_30
                    
                    if (eax_31 == 0)
                        eax_31 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_13 = ecx_11
                    float var_1b4_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_6, data_3166450, eax_31, var_1b4_14, 0)
                    ecx_8 = &var_190
                case 2
                    int32_t* esi_7 = data_307c118
                    
                    if ((data_316645c & 0x10) == 0)
                        data_316645c.d |= 0x10
                        var_c_1.b = 8
                        data_3166448 = sub_4f5220(esi_7, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c & 0x20) == 0)
                        data_316645c.d |= 0x20
                        var_c_1.b = 9
                        data_3166444 = sub_4f5220(esi_7, "PowerText2")
                        var_c_1.b = 1
                    
                    if ((data_316645c & 0x40) == 0)
                        data_316645c.d |= 0x40
                        var_c_1.b = 0xa
                        data_3166440 = sub_4f5220(esi_7, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    if ((data_316645c & 0x80) == 0)
                        data_316645c.d |= 0x80
                        var_c_1.b = 0xb
                        data_316643c = sub_4f5220(esi_7, "PowerPhaseText2")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_8 = ecx_4
                    float var_1b0_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_12 = sub_4f5f30(esi_7, &var_108, 0, var_1b0_9)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_19 = ecx_12
                    float var_1b4_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_37 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t ecx_14 = sub_4f50c0(esi_7, data_3166440, eax_37, var_1b4_20, 0)
                    unimplemented  {fld1 }
                    int32_t var_1b4_21 = ecx_14
                    float var_1b4_22 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_39 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_8 = sub_4f50c0(esi_7, data_316643c, eax_39, var_1b4_22, 0)
                    char* eax_40 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_40 == 0)
                        eax_40 = &data_83f3d3
                    
                    void var_168
                    int32_t* eax_42
                    int32_t ecx_16
                    eax_42, ecx_16 =
                        sub_44be60(&var_168, &var_194, sub_4fd8f0(eax_40, edx_8, eax_40, nullptr))
                    var_c_1.b = 0xc
                    int32_t* eax_43 = *eax_42
                    
                    if (eax_43 == 0)
                        eax_43 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_24 = ecx_16
                    float var_1b4_25 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f50c0(esi_7, data_3166448, eax_43, var_1b4_25, 0)
                    var_c_1.b = 1
                    int32_t edx_10 = sub_4c43d0(&var_168)
                    char* eax_44 = (&var_1ac)[ebx_2 * 2 + 0x4c]
                    
                    if (eax_44 == 0)
                        eax_44 = &data_83f3d3
                    
                    void var_15c
                    int32_t* eax_46
                    int32_t ecx_19
                    eax_46, ecx_19 =
                        sub_44be60(&var_15c, &var_194, sub_4fd8f0(eax_44, edx_10, eax_44, nullptr))
                    var_c_1.b = 0xd
                    int32_t* eax_47 = *eax_46
                    
                    if (eax_47 == 0)
                        eax_47 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_27 = ecx_19
                    float var_1b4_28 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_7, data_3166444, eax_47, var_1b4_28, 0)
                    ecx_8 = &var_15c
                case 3
                    int32_t* esi_8 = data_307c11c
                    
                    if ((data_316645c.d & 0x100) == 0)
                        data_316645c.d |= 0x100
                        var_c_1.b = 0xe
                        data_3166438 = sub_4f5220(esi_8, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x200) == 0)
                        data_316645c.d |= 0x200
                        var_c_1.b = 0xf
                        data_3166434 = sub_4f5220(esi_8, "PowerText2")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x400) == 0)
                        data_316645c.d |= 0x400
                        var_c_1.b = 0x10
                        data_3166430 = sub_4f5220(esi_8, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x800) == 0)
                        data_316645c.d |= 0x800
                        var_c_1.b = 0x11
                        data_316642c = sub_4f5220(esi_8, "PowerPhaseText2")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_12 = ecx_4
                    float var_1b0_13 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_20 = sub_4f5f30(esi_8, &var_108, 0, var_1b0_13)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_33 = ecx_20
                    float var_1b4_34 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_53 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t ecx_22 = sub_4f50c0(esi_8, data_3166430, eax_53, var_1b4_34, 0)
                    unimplemented  {fld1 }
                    int32_t var_1b4_35 = ecx_22
                    float var_1b4_36 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_55 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_13 = sub_4f50c0(esi_8, data_316642c, eax_55, var_1b4_36, 0)
                    char* eax_56 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_56 == 0)
                        eax_56 = &data_83f3d3
                    
                    void var_178
                    int32_t* eax_58
                    int32_t ecx_24
                    eax_58, ecx_24 =
                        sub_44be60(&var_178, &var_194, sub_4fd8f0(eax_56, edx_13, eax_56, nullptr))
                    var_c_1.b = 0x12
                    int32_t* eax_59 = *eax_58
                    
                    if (eax_59 == 0)
                        eax_59 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_38 = ecx_24
                    float var_1b4_39 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f50c0(esi_8, data_3166438, eax_59, var_1b4_39, 0)
                    var_c_1.b = 1
                    int32_t edx_15 = sub_4c43d0(&var_178)
                    char* eax_60 = (&var_1ac)[ebx_2 * 2 + 0x4c]
                    
                    if (eax_60 == 0)
                        eax_60 = &data_83f3d3
                    
                    void var_158
                    int32_t* eax_62
                    int32_t ecx_27
                    eax_62, ecx_27 =
                        sub_44be60(&var_158, &var_194, sub_4fd8f0(eax_60, edx_15, eax_60, nullptr))
                    var_c_1.b = 0x13
                    int32_t* eax_63 = *eax_62
                    
                    if (eax_63 == 0)
                        eax_63 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_41 = ecx_27
                    float var_1b4_42 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_8, data_3166434, eax_63, var_1b4_42, 0)
                    ecx_8 = &var_158
                case 4
                    int32_t* esi_9 = data_307c120
                    
                    if ((data_316645c.d & 0x1000) == 0)
                        data_316645c.d |= 0x1000
                        var_c_1.b = 0x14
                        data_3166428 = sub_4f5220(esi_9, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x2000) == 0)
                        data_316645c.d |= 0x2000
                        var_c_1.b = 0x15
                        data_3166424 = sub_4f5220(esi_9, "PowerText2")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x4000) == 0)
                        data_316645c.d |= 0x4000
                        var_c_1.b = 0x16
                        data_3166420 = sub_4f5220(esi_9, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x8000) == 0)
                        data_316645c.d |= 0x8000
                        var_c_1.b = 0x17
                        data_316641c = sub_4f5220(esi_9, "PowerPhaseText2")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_16 = ecx_4
                    float var_1b0_17 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_28 = sub_4f5f30(esi_9, &var_108, 0, var_1b0_17)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_47 = ecx_28
                    float var_1b4_48 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_69 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t ecx_30 = sub_4f50c0(esi_9, data_3166420, eax_69, var_1b4_48, 0)
                    unimplemented  {fld1 }
                    int32_t var_1b4_49 = ecx_30
                    float var_1b4_50 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_71 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_18 = sub_4f50c0(esi_9, data_316641c, eax_71, var_1b4_50, 0)
                    char* eax_72 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_72 == 0)
                        eax_72 = &data_83f3d3
                    
                    void var_170
                    int32_t* eax_74
                    int32_t ecx_32
                    eax_74, ecx_32 =
                        sub_44be60(&var_170, &var_194, sub_4fd8f0(eax_72, edx_18, eax_72, nullptr))
                    var_c_1.b = 0x18
                    int32_t* eax_75 = *eax_74
                    
                    if (eax_75 == 0)
                        eax_75 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_52 = ecx_32
                    float var_1b4_53 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f50c0(esi_9, data_3166428, eax_75, var_1b4_53, 0)
                    var_c_1.b = 1
                    int32_t edx_20 = sub_4c43d0(&var_170)
                    char* eax_76 = (&var_1ac)[ebx_2 * 2 + 0x4c]
                    
                    if (eax_76 == 0)
                        eax_76 = &data_83f3d3
                    
                    void var_150
                    int32_t* eax_78
                    int32_t ecx_35
                    eax_78, ecx_35 =
                        sub_44be60(&var_150, &var_194, sub_4fd8f0(eax_76, edx_20, eax_76, nullptr))
                    var_c_1.b = 0x19
                    int32_t* eax_79 = *eax_78
                    
                    if (eax_79 == 0)
                        eax_79 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_55 = ecx_35
                    float var_1b4_56 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_9, data_3166424, eax_79, var_1b4_56, 0)
                    ecx_8 = &var_150
                case 5
                    int32_t* esi_10 = data_307c124
                    
                    if ((data_316645c.d & 0x10000) == 0)
                        data_316645c.d |= 0x10000
                        var_c_1.b = 0x1a
                        data_3166418 = sub_4f5220(esi_10, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x20000) == 0)
                        data_316645c.d |= 0x20000
                        var_c_1.b = 0x1b
                        data_3166414 = sub_4f5220(esi_10, "PowerText2")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x40000) == 0)
                        data_316645c.d |= 0x40000
                        var_c_1.b = 0x1c
                        data_3166410 = sub_4f5220(esi_10, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x80000) == 0)
                        data_316645c.d |= 0x80000
                        var_c_1.b = 0x1d
                        data_316640c = sub_4f5220(esi_10, "PowerPhaseText2")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_20 = ecx_4
                    float var_1b0_21 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_36 = sub_4f5f30(esi_10, &var_108, 0, var_1b0_21)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_61 = ecx_36
                    float var_1b4_62 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_85 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t ecx_38 = sub_4f50c0(esi_10, data_3166410, eax_85, var_1b4_62, 0)
                    unimplemented  {fld1 }
                    int32_t var_1b4_63 = ecx_38
                    float var_1b4_64 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_87 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_23 = sub_4f50c0(esi_10, data_316640c, eax_87, var_1b4_64, 0)
                    char* eax_88 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_88 == 0)
                        eax_88 = &data_83f3d3
                    
                    void var_180
                    int32_t* eax_90
                    int32_t ecx_40
                    eax_90, ecx_40 =
                        sub_44be60(&var_180, &var_194, sub_4fd8f0(eax_88, edx_23, eax_88, nullptr))
                    var_c_1.b = 0x1e
                    int32_t* eax_91 = *eax_90
                    
                    if (eax_91 == 0)
                        eax_91 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_66 = ecx_40
                    float var_1b4_67 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f50c0(esi_10, data_3166418, eax_91, var_1b4_67, 0)
                    var_c_1.b = 1
                    int32_t edx_25 = sub_4c43d0(&var_180)
                    char* eax_92 = (&var_1ac)[ebx_2 * 2 + 0x4c]
                    
                    if (eax_92 == 0)
                        eax_92 = &data_83f3d3
                    
                    void var_14c
                    int32_t* eax_94
                    int32_t ecx_43
                    eax_94, ecx_43 =
                        sub_44be60(&var_14c, &var_194, sub_4fd8f0(eax_92, edx_25, eax_92, nullptr))
                    var_c_1.b = 0x1f
                    int32_t* eax_95 = *eax_94
                    
                    if (eax_95 == 0)
                        eax_95 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_69 = ecx_43
                    float var_1b4_70 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_10, data_3166414, eax_95, var_1b4_70, 0)
                    ecx_8 = &var_14c
                case 6
                    int32_t* esi_11 = data_307c128
                    
                    if ((data_316645c.d & 0x100000) == 0)
                        data_316645c.d |= 0x100000
                        var_c_1.b = 0x20
                        data_3166408 = sub_4f5220(esi_11, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x200000) == 0)
                        data_316645c.d |= 0x200000
                        var_c_1.b = 0x21
                        data_3166404 = sub_4f5220(esi_11, "PowerText2")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & &__dos_header) == 0)
                        data_316645c.d |= &__dos_header
                        var_c_1.b = 0x22
                        data_3166400 = sub_4f5220(esi_11, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & &data_800000) == 0)
                        data_316645c.d |= &data_800000
                        var_c_1.b = 0x23
                        data_31663fc = sub_4f5220(esi_11, "PowerPhaseText2")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_24 = ecx_4
                    float var_1b0_25 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_44 = sub_4f5f30(esi_11, &var_108, 0, var_1b0_25)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_75 = ecx_44
                    float var_1b4_76 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_101 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t ecx_46 = sub_4f50c0(esi_11, data_3166400, eax_101, var_1b4_76, 0)
                    unimplemented  {fld1 }
                    int32_t var_1b4_77 = ecx_46
                    float var_1b4_78 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_103 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_28 = sub_4f50c0(esi_11, data_31663fc, eax_103, var_1b4_78, 0)
                    char* eax_104 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_104 == 0)
                        eax_104 = &data_83f3d3
                    
                    void var_160
                    int32_t* eax_106
                    int32_t ecx_48
                    eax_106, ecx_48 =
                        sub_44be60(&var_160, &var_194, sub_4fd8f0(eax_104, edx_28, eax_104, nullptr))
                    var_c_1.b = 0x24
                    int32_t* eax_107 = *eax_106
                    
                    if (eax_107 == 0)
                        eax_107 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_80 = ecx_48
                    float var_1b4_81 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f50c0(esi_11, data_3166408, eax_107, var_1b4_81, 0)
                    var_c_1.b = 1
                    int32_t edx_30 = sub_4c43d0(&var_160)
                    char* eax_108 = (&var_1ac)[ebx_2 * 2 + 0x4c]
                    
                    if (eax_108 == 0)
                        eax_108 = &data_83f3d3
                    
                    void var_154
                    int32_t* eax_110
                    int32_t ecx_51
                    eax_110, ecx_51 =
                        sub_44be60(&var_154, &var_194, sub_4fd8f0(eax_108, edx_30, eax_108, nullptr))
                    var_c_1.b = 0x25
                    int32_t* eax_111 = *eax_110
                    
                    if (eax_111 == 0)
                        eax_111 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_83 = ecx_51
                    float var_1b4_84 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_11, data_3166404, eax_111, var_1b4_84, 0)
                    ecx_8 = &var_154
                case 7
                    int32_t* esi_13 = data_307c12c
                    
                    if ((data_316645c.d & 0x10000000) == 0)
                        data_316645c.d |= 0x10000000
                        var_c_1.b = 0x2c
                        data_31663e8 = sub_4f5220(esi_13, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x20000000) == 0)
                        data_316645c.d |= 0x20000000
                        var_c_1.b = 0x2d
                        data_31663e4 = sub_4f5220(esi_13, "PowerText2")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x40000000) == 0)
                        data_316645c.d |= 0x40000000
                        var_c_1.b = 0x2e
                        data_31663e0 = sub_4f5220(esi_13, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x80000000) == 0)
                        data_316645c.d |= 0x80000000
                        var_c_1.b = 0x2f
                        data_31663dc = sub_4f5220(esi_13, "PowerPhaseText2")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_32 = ecx_4
                    float var_1b0_33 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_60 = sub_4f5f30(esi_13, &var_108, 0, var_1b0_33)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_103 = ecx_60
                    float var_1b4_104 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_133 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t ecx_62 = sub_4f50c0(esi_13, data_31663e0, eax_133, var_1b4_104, 0)
                    unimplemented  {fld1 }
                    int32_t var_1b4_105 = ecx_62
                    float var_1b4_106 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_135 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_38 = sub_4f50c0(esi_13, data_31663dc, eax_135, var_1b4_106, 0)
                    char* const eax_136 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_136 == 0)
                        eax_136 = &data_83f3d3
                    
                    void var_16c
                    int32_t** eax_138
                    int32_t ecx_64
                    eax_138, ecx_64 =
                        sub_44be60(&var_16c, &var_194, sub_4fd8f0(eax_136, edx_38, eax_136, nullptr))
                    var_c_1.b = 0x30
                    int32_t* eax_139 = *eax_138
                    
                    if (eax_139 == 0)
                        eax_139 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_108 = ecx_64
                    float var_1b4_109 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f50c0(esi_13, data_31663e8, eax_139, var_1b4_109, 0)
                    var_c_1.b = 1
                    int32_t edx_40 = sub_4c43d0(&var_16c)
                    char* eax_140 = (&var_1ac)[ebx_2 * 2 + 0x4c]
                    
                    if (eax_140 == 0)
                        eax_140 = &data_83f3d3
                    
                    void var_164
                    int32_t** eax_142
                    int32_t ecx_67
                    eax_142, ecx_67 =
                        sub_44be60(&var_164, &var_194, sub_4fd8f0(eax_140, edx_40, eax_140, nullptr))
                    var_c_1.b = 0x31
                    int32_t* eax_143 = *eax_142
                    
                    if (eax_143 == 0)
                        eax_143 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_111 = ecx_67
                    float var_1b4_112 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_13, data_31663e4, eax_143, var_1b4_112, 0)
                    ecx_8 = &var_164
                case 8
                    int32_t* esi_12 = data_307c130
                    
                    if ((data_316645c.d & 0x1000000) == 0)
                        data_316645c.d |= 0x1000000
                        var_c_1.b = 0x26
                        data_31663f8 = sub_4f5220(esi_12, "PowerText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x2000000) == 0)
                        data_316645c.d |= 0x2000000
                        var_c_1.b = 0x27
                        data_31663f4 = sub_4f5220(esi_12, "PowerText2")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x4000000) == 0)
                        data_316645c.d |= 0x4000000
                        var_c_1.b = 0x28
                        data_31663f0 = sub_4f5220(esi_12, "PowerPhaseText")
                        var_c_1.b = 1
                    
                    if ((data_316645c.d & 0x8000000) == 0)
                        data_316645c.d |= 0x8000000
                        var_c_1.b = 0x29
                        data_31663ec = sub_4f5220(esi_12, "PowerPhaseText2")
                        var_c_1.b = 1
                    
                    unimplemented  {fld1 }
                    int32_t var_1b0_28 = ecx_4
                    float var_1b0_29 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_52 = sub_4f5f30(esi_12, &var_108, 0, var_1b0_29)
                    unimplemented  {call 0x4f5f30}
                    unimplemented  {fld1 }
                    int32_t var_1b4_89 = ecx_52
                    float var_1b4_90 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_117 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t ecx_54 = sub_4f50c0(esi_12, data_31663f0, eax_117, var_1b4_90, 0)
                    unimplemented  {fld1 }
                    int32_t var_1b4_91 = ecx_54
                    float var_1b4_92 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t* eax_119 = sub_426510((&var_1ac)[ebx_2 * 2 + 0x4a])
                    int32_t edx_33 = sub_4f50c0(esi_12, data_31663ec, eax_119, var_1b4_92, 0)
                    char* eax_120 = (&var_1ac)[ebx_2 * 2 + 0x4b]
                    
                    if (eax_120 == 0)
                        eax_120 = &data_83f3d3
                    
                    void var_17c
                    int32_t* eax_122
                    int32_t ecx_56
                    eax_122, ecx_56 =
                        sub_44be60(&var_17c, &var_194, sub_4fd8f0(eax_120, edx_33, eax_120, nullptr))
                    var_c_1.b = 0x2a
                    int32_t* eax_123 = *eax_122
                    
                    if (eax_123 == 0)
                        eax_123 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_94 = ecx_56
                    float var_1b4_95 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f50c0(esi_12, data_31663f8, eax_123, var_1b4_95, 0)
                    var_c_1.b = 1
                    int32_t edx_35 = sub_4c43d0(&var_17c)
                    char* eax_124 = (&var_1ac)[ebx_2 * 2 + 0x4c]
                    
                    if (eax_124 == 0)
                        eax_124 = &data_83f3d3
                    
                    void var_174
                    int32_t* eax_126
                    int32_t ecx_59
                    eax_126, ecx_59 =
                        sub_44be60(&var_174, &var_194, sub_4fd8f0(eax_124, edx_35, eax_124, nullptr))
                    var_c_1.b = 0x2b
                    int32_t* eax_127 = *eax_126
                    
                    if (eax_127 == 0)
                        eax_127 = &data_83f3d3
                    
                    unimplemented  {fld1 }
                    int32_t var_1b4_97 = ecx_59
                    float var_1b4_98 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 2
                    sub_4f50c0(esi_12, data_31663f4, eax_127, var_1b4_98, 0)
                    ecx_8 = &var_174
            
            var_c_1.b = 1
            sub_4c43d0(ecx_8)
            eax_145 = &var_198[1]
            var_198 = eax_145
        while (eax_145 s< var_28)
    
    void* ebx_4 = sub_44bf90(sx.d(*(edx_2 + 4)))
    var_190 = ebx_4
    
    if (ebx_4 != 0)
        void* eax_149
        char* edx_42
        eax_149, edx_42 = sub_4c42b0(&var_198, "{vp}")
        var_c_1.b = 0x32
        char* i = *ebx_4
        
        while (i != 0)
            char* eax_150
            void* edx_43
            eax_150, edx_43 = sub_4fd8f0(eax_149, edx_42, i, nullptr)
            char* edi_1
            
            if (*eax_150 == 0)
                edi_1 = var_198
            else
                char* eax_151 = var_198
                char j
                
                if (eax_151 == 0 || *eax_151 == 0)
                    char* eax_152 = eax_150
                    void* edx_44 = &eax_152[1]
                    
                    do
                        j = *eax_152
                        eax_152 = &eax_152[1]
                    while (j != 0)
                    
                    int32_t* var_1b0_36 = &var_198
                    sub_4c40c0(eax_152 - edx_44, edx_44)
                    edi_1 = var_198
                    char* eax_154 = eax_150
                    edx_43 = edi_1 - eax_150
                    char j_1
                    
                    do
                        j_1 = *eax_154
                        *(edx_43 + eax_154) = j_1
                        eax_154 = &eax_154[1]
                    while (j_1 != 0)
                else
                    if (*(eax_151 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t ebx_5 = *(eax_151 - 8)
                    void* eax_156 = eax_150
                    void** edx_46 = eax_156 + 1
                    
                    do
                        j = *eax_156
                        eax_156 += 1
                    while (j != 0)
                    
                    void* eax_157 = eax_156 - edx_46
                    void** eax_158 = eax_157 + ebx_5
                    sub_4c4160(eax_158, edx_46, &var_198, eax_158, 1)
                    edx_43 = sub_5ab990(&var_198[ebx_5], eax_150, eax_157 + 1)
                    ebx_4 = var_190
                    edi_1 = var_198
            
            if (edi_1 == 0 || *edi_1 == 0)
                int32_t* var_1b0_37 = &var_198
                sub_4c40c0(1, edx_43)
                eax_149 = &data_86232c
                edx_42 = var_198 - &data_86232c
                char j_2
                
                do
                    j_2 = *eax_149
                    *(edx_42 + eax_149) = j_2
                    eax_149 += 1
                while (j_2 != 0)
            else
                if (*(edi_1 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int16_t* edi_4 = *(edi_1 - 8)
                eax_149 = sub_4c4160(edi_4 + 1, edx_43, &var_198, edi_4 + 1, 1)
                edx_42 = var_198
                *(edi_4 + edx_42) = 0xd
            
            i = *(ebx_4 + 4)
            ebx_4 += 4
            var_190 = ebx_4
        
        bool cond:1_1 = (data_31663d8 & 1) != 0
        void* esi_16 = data_307c110
        var_190 = esi_16
        
        if (not(cond:1_1))
            data_31663d8.d |= 1
            var_c_1.b = 0x33
            int32_t eax_160
            eax_160, edx_42 = sub_4f5220(esi_16, "vpBg")
            data_31663d4 = eax_160
            var_c_1.b = 0x32
        
        if ((data_31663d8 & 2) == 0)
            data_31663d8.d |= 2
            var_c_1.b = 0x34
            int32_t eax_161
            eax_161, edx_42 = sub_4f5220(esi_16, "txtVP")
            data_31663d0 = eax_161
            var_c_1.b = 0x32
        
        int32_t eax_162 = data_31663d4
        unimplemented  {fld st0, dword [esp+0x28]}
        void* var_1b0_38 = &var_c8
        void* var_1b4_117 = &var_c8
        float var_1b4_118 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        __builtin_memcpy(&var_108, sub_4f62d0(eax_162, var_1b4_118, edx_42), 0x40)
        void* ecx_73 = eax_162 * 0x118 + *sub_4f4890(var_190)
        int32_t edx_48 = sub_4f67d0(ecx_73, nullptr, *(ecx_73 + 0x68), ecx_73, &data_be1ae0, &var_108, 
            nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        char* eax_166 = var_198
        var_18c = &data_83f3d3
        
        if (eax_166 != 0)
            var_18c = eax_166
        
        int32_t eax_167 = data_31663d0
        unimplemented  {fld st0, dword [esp+0x28]}
        void* var_1b0_39 = &var_c8
        void* var_1b4_119 = &var_c8
        float var_1b4_120 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        __builtin_memcpy(&var_c8, sub_4f62d0(eax_167, var_1b4_120, edx_48), 0x40)
        sub_4f5010(&var_c8, eax_167 * 0x118 + *sub_4f4890(var_190), var_18c, 0)
        var_c_1.b = 1
        char* eax_170 = var_198
        
        if (eax_170 != 0 && *eax_170 != 0)
            void* eax_172 = sub_4c4060(&var_198)
            int32_t temp1_1 = *(eax_172 + 4)
            *(eax_172 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_23 = *(eax_172 + 0xc) + 0x10
                sub_4f4430(eax_172, sub_4f4380(esi_23), esi_23)
    
    var_c_1.b = 0
    char* eax_175 = var_194
    
    if (eax_175 != 0 && *eax_175 != 0)
        void* eax_177 = sub_4c4060(&var_194)
        int32_t temp0_1 = *(eax_177 + 4)
        *(eax_177 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_25 = *(eax_177 + 0xc) + 0x10
            sub_4f4430(eax_177, sub_4f4380(esi_25), esi_25)
    
    int32_t var_c_2 = 0xffffffff
    int32_t result = sub_5a71d9(&var_88, 0x10, 6, sub_450450)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_19c)
    return result
}

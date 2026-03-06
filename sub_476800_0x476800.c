// 函数名称: sub_476800
// 虚拟地址: 0x476800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_476800()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_698b4a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_fc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7fd0
    data_307ccd4 = fconvert.s(float.t(*(eax_3 + 0x18)) / float.t(*(eax_3 + 0x14)))
    int32_t var_100 = sub_4ddf40(&data_307ccd0)
    sub_4dda80(fconvert.s(float.t(1)))
    long double x87_r7_3 = fconvert.t(-0f)
    float var_7c = fconvert.s(x87_r7_3)
    float var_78 = fconvert.s(x87_r7_3)
    float var_74 = fconvert.s(fconvert.t(-1f))
    float var_20 = var_7c
    int32_t* const var_100_2 = &data_840b64
    float var_1c = var_78
    float var_18 = var_74
    sub_4ddb00(0, var_74)
    long double x87_r7_5 = float.t(1)
    float var_24 = fconvert.s(x87_r7_5)
    var_20 = fconvert.s(x87_r7_5)
    float ecx_2 = var_20
    float var_1c_1 = fconvert.s(x87_r7_5)
    var_7c = var_24
    float var_78_1 = ecx_2
    float var_70 = fconvert.s(float.t(0))
    float var_74_1 = var_1c_1
    sub_4dd9d0(&var_7c)
    void var_8c
    void* var_100_3 = &var_8c
    data_27e8020 = 0xff000000
    int32_t eax_8
    int32_t edx_2
    eax_8, edx_2 = sub_4db020(var_100_3)
    float var_34[0x4]
    __builtin_memcpy(&var_34, eax_8, 0x20)
    void var_ec
    sub_406370(&var_ec, edx_2, &var_34)
    void* eax_10 = data_27e7fe4
    void var_ac
    __builtin_memcpy(&var_ac, &var_ec, 0x40)
    *(eax_10 + 0xdc) = 1
    __builtin_memcpy(eax_10 + 0x9c, &var_ac, 0x40)
    sub_4e2000(&var_20)
    
    if (data_3078599 == 0)
        sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x326, 
            "Draw3DLayer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    bool cond:0 = (data_31667f0 & 1) != 0
    int32_t* esi_1 = data_307c76c
    data_27e853c = 0x7d1
    
    if (not(cond:0))
        data_31667f0.d |= 1
        int32_t var_8_1 = 0
        data_31667ec = sub_4f5220(esi_1, "AvatarImage")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31667f0 & 2) == 0)
        data_31667f0.d |= 2
        int32_t var_8_3 = 1
        data_31667e8 = sub_4f5220(esi_1, "PlayerName")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31667f0 & 4) == 0)
        data_31667f0.d |= 4
        int32_t var_8_5 = 2
        data_31667e4 = sub_4f5220(esi_1, "PlayerNameNew")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_31667f0 & 8) == 0)
        data_31667f0.d |= 8
        int32_t var_8_7 = 3
        data_31667e0 = sub_4f5220(esi_1, "txt_serverStatus")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_31667f0 & 0x10) == 0)
        data_31667f0.d |= 0x10
        int32_t var_8_9 = 4
        data_31667dc = sub_4f5220(esi_1, "txt_messageOfTheDay")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_31667f0 & 0x20) == 0)
        data_31667f0.d |= 0x20
        int32_t var_8_11 = 5
        data_31667d8 = sub_4f5220(esi_1, "img_lang")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_31667f0 & 0x40) == 0)
        data_31667f0.d |= 0x40
        int32_t var_8_13 = 6
        data_31667d4 = sub_4f5220(esi_1, "img_StoreNew")
        int32_t var_8_14 = 0xffffffff
    
    if ((data_31667f0 & 0x80) == 0)
        data_31667f0.d |= 0x80
        int32_t var_8_15 = 7
        data_31667d0 = sub_4f5220(esi_1, "img_OnlineStatus")
        int32_t var_8_16 = 0xffffffff
    
    char* edi_1 = data_27e7a54
    int32_t eax_22 = sub_4ba260(*(edi_1 + 0x18))
    char* var_5c
    sub_4c42b0(&var_5c, edi_1)
    int32_t var_8_17 = 8
    char* const var_64 = &data_83f3d3
    char* const var_60 = &data_83f3d3
    var_8_17.b = 0xa
    sub_475ff0(&var_64)
    char* const eax_23 = var_64
    char* const var_58 = &data_83f3d3
    
    if (eax_23 != 0)
        var_58 = eax_23
    
    int128_t* eax_25 = sub_4f6e90(data_31667e0, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
    *(eax_25 + 0x64) = *eax_25 + 1
    sub_4c4590(var_58)
    char* const eax_27 = var_60
    *(eax_25 + 0x151) = 1
    char* const var_58_1 = &data_83f3d3
    
    if (eax_27 != 0)
        var_58_1 = eax_27
    
    int128_t* eax_29 = sub_4f6e90(data_31667dc, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
    char* const eax_30 = var_58_1
    *(eax_29 + 0x64) = *eax_29 + 1
    sub_4c4590(eax_30)
    int32_t ebx_3 = data_31667ec
    *(eax_29 + 0x151) = 1
    int128_t* eax_32 = sub_4f6e90(ebx_3, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
    *(eax_32 + 0x94) = *eax_32 + 1
    *(eax_32 + 0x98) = eax_22
    int32_t eax_34
    
    if (*(data_27e7a54 + 0x50) == 0)
        void* eax_35 = data_27e7a40
        
        if (eax_35 == 0)
            sub_4075c0()
            void* eax_36 = data_27e7a40
            int32_t edi_6 = *(eax_36 + 0x20)
            int32_t esi_11 = *(eax_36 + 0x24)
            sub_407670()
            
            if (esi_11 != 8 || edi_6 != 2)
                eax_34 = 2
            else
                eax_34 = 0
        else if (*(eax_35 + 0x24) != 8 || *(eax_35 + 0x20) != 2)
            eax_34 = 2
        else
            eax_34 = 0
    else
        eax_34 = 1
    
    int32_t ebx_4
    
    if (eax_34 == 0)
        ebx_4 = data_307c558
    else if (eax_34 == 1)
        ebx_4 = data_307c55c
    else
        if (eax_34 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x34f, 
                "OnlineStatusIndicator")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ebx_4 = data_307c554
    
    int128_t* eax_42 = sub_4f6e90(data_31667d0, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
    *(eax_42 + 0x94) = *eax_42 + 1
    *(eax_42 + 0x98) = ebx_4
    char* eax_43 = var_5c
    char* const eax_54
    int128_t* esi_23
    
    if (eax_43 == 0 || *eax_43 == 0)
        var_58_1.b = 0xff
        var_58_1:1.w = 0xffff
        var_58_1:3.b = 0x4b
        int32_t* eax_45 = sub_4f6e90(data_31667e4, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
        int32_t edx_7 = *eax_45 + 1
        eax_45[0x1c] = var_58_1
        eax_45[0x1b] = edx_7
        int32_t esi_16 = data_307cccc
        __builtin_strncpy(&var_58_1, "KKKK", 4)
        int32_t* eax_47 = sub_4f6e90(data_31667e4, sub_4fc3d0(&data_be1cb8, esi_16), &data_83f3d3)
        int32_t ebx_6 = data_31667e4
        int32_t edx_9 = *eax_47 + 1
        eax_47[0x1e] = var_58_1
        eax_47[0x1d] = edx_9
        int128_t* eax_49 = sub_4f6e90(ebx_6, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
        *(eax_49 + 0x64) = *eax_49 + 1
        sub_4c4590("New Profile")
        int32_t ebx_8 = data_31667e8
        *(eax_49 + 0x151) = 1
        esi_23 = sub_4f6e90(ebx_8, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
        *(esi_23 + 0x64) = *esi_23 + 1
        eax_54 = &data_83f3d3
    else
        int128_t* eax_56 =
            sub_4f6e90(data_31667e4, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
        *(eax_56 + 0x64) = *eax_56 + 1
        sub_4c4590(&data_83f3d3)
        int32_t ebx_11 = data_31667e8
        *(eax_56 + 0x151) = 1
        esi_23 = sub_4f6e90(ebx_11, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
        eax_54 = var_5c
        *(esi_23 + 0x64) = *esi_23 + 1
    
    sub_4c4590(eax_54)
    void* eax_59 = data_27e7a50
    *(esi_23 + 0x151) = 1
    int32_t eax_61 = sub_476760(*(eax_59 + 0x18))
    int128_t* eax_63 = sub_4f6e90(data_31667d8, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3)
    int32_t ecx_16 = *eax_63 + 1
    *(eax_63 + 0x94) = ecx_16
    *(eax_63 + 0x98) = eax_61
    bool eax_64 = sub_4b95c0(ecx_16, 4)
    
    if (eax_64 != 0 || *(data_27e7a54 + 0x210) != eax_64)
        eax_64 = false
    else
        eax_64 = true
    
    float edx_15 = data_31667d4
    uint32_t var_100_26 = zx.d(eax_64 == 0)
    sub_4fa4e0(data_307cccc, edx_15, edx_15.b)
    int32_t eax_66
    int80_t st0
    st0, eax_66 = sub_40a930(&var_ec)
    void* edx_16 = data_307cccc
    float var_100_27 = fconvert.s(float.t(1))
    void var_54
    __builtin_memcpy(&var_54, eax_66, 0x40)
    sub_4f9fe0(edx_16, &var_54)
    var_8_17.b = 9
    char* const eax_67 = var_60
    
    if (eax_67 != 0 && *eax_67 != 0)
        void* eax_69 = sub_4c4060(&var_60)
        int32_t temp3_1 = *(eax_69 + 4)
        *(eax_69 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_33 = *(eax_69 + 0xc) + 0x10
            sub_4f4430(eax_69, sub_4f4380(esi_33), esi_33)
    
    var_8_17.b = 8
    char* const eax_72 = var_64
    
    if (eax_72 != 0 && *eax_72 != 0)
        void* eax_74 = sub_4c4060(&var_64)
        int32_t temp4_1 = *(eax_74 + 4)
        *(eax_74 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_35 = *(eax_74 + 0xc) + 0x10
            sub_4f4430(eax_74, sub_4f4380(esi_35), esi_35)
    
    int32_t var_8_18 = 0xffffffff
    void* eax_77 = var_5c
    
    if (eax_77 != 0 && *eax_77 != 0)
        eax_77 = sub_4c4060(&var_5c)
        int32_t temp5_1 = *(eax_77 + 4)
        *(eax_77 + 4) -= 1
        
        if (temp5_1 == 1)
            int32_t esi_37 = *(eax_77 + 0xc) + 0x10
            sub_4f4430(eax_77, sub_4f4380(esi_37), esi_37)
    
    long double x87_r6_1 = fconvert.t(data_307d9c4)
    long double x87_r5 = float.t(0)
    x87_r5 - x87_r6_1
    int16_t top = 0xffff
    eax_77.w = (x87_r5 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t eax_81
        int80_t st0_1
        st0_1, eax_81 = sub_40a930(&var_ec)
        void* edx_17 = data_307d9c8
        float var_100_32 = fconvert.s(fconvert.t(data_307d9c4))
        top = 0xfffe
        __builtin_memcpy(&var_54, eax_81, 0x40)
        sub_4f9fe0(edx_17, &var_54)
    
    sub_4bd760()
    sub_4bd870()
    sub_4bd9a0(&data_307d094)
    sub_4c31f0()
    sub_411f50()
    sub_417d10(&data_307d594)
    unimplemented  {fld st0, dword [0x307d5a0]}
    unimplemented  {fldz }
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    int16_t top_3 = top
    struct _EXCEPTION_REGISTRATION_RECORD** eax_82
    eax_82.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top_3 & 7) << 0xb
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int32_t eax_83 = sub_40a930(&var_ec)
        unimplemented  {call 0x40a930}
        unimplemented  {fld1 }
        void* edx_18 = data_307d5a4
        float var_100_35 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        top_3 -= 1
        __builtin_memcpy(&var_54, eax_83, 0x40)
        sub_4f9fe0(edx_18, &var_54)
    
    sub_4071f0(&data_307d8b8)
    sub_4b6220()
    unimplemented  {fld st0, dword [0x307d970]}
    unimplemented  {fldz }
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    int16_t top_8 = top_3
    int32_t* eax_84
    eax_84.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top_8 & 7) << 0xb
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        int32_t eax_85 = sub_40a930(&var_ec)
        unimplemented  {call 0x40a930}
        unimplemented  {fld st0, dword [0x307d970]}
        void* edx_19 = data_307d974
        float var_100_38 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        top_8 -= 1
        __builtin_memcpy(&var_54, eax_85, 0x40)
        sub_4f9fe0(edx_19, &var_54)
    
    sub_4b9810(&data_307d978)
    unimplemented  {fld st0, dword [0x307db20]}
    unimplemented  {fldz }
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_3 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    int16_t top_13 = top_8
    int32_t* eax_86
    eax_86.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe | (top_13 & 7) << 0xb
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        int32_t eax_87 = sub_40a930(&var_ec)
        unimplemented  {call 0x40a930}
        unimplemented  {fld st0, dword [0x307db20]}
        void* edx_20 = data_307db24
        float var_100_41 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        top_13 -= 1
        __builtin_memcpy(&var_54, eax_87, 0x40)
        sub_4f9fe0(edx_20, &var_54)
    
    unimplemented  {fldz }
    long double temp6 = fconvert.t(data_307daf8)
    unimplemented  {fcomp st0, dword [0x307daf8]} f- temp6
    bool c0_4 = unimplemented  {fcomp st0, dword [0x307daf8]} f< temp6
    bool c2_4 = is_unordered.t(unimplemented  {fcomp st0, dword [0x307daf8]}, temp6)
    bool c3_4 = unimplemented  {fcomp st0, dword [0x307daf8]} f== temp6
    unimplemented  {fcomp st0, dword [0x307daf8]}
    int16_t top_17 = top_13
    eax_86.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe | (top_17 & 7) << 0xb
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        sub_4075c0()
        unimplemented  {fld st0, dword [0x307daf8]}
        unimplemented  {fldz }
        unimplemented  {fucompp } f- unimplemented  {fucompp }
        bool c0_5 = unimplemented  {fucompp } f< unimplemented  {fucompp }
        bool c2_5 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
        bool c3_5 = unimplemented  {fucompp } f== unimplemented  {fucompp }
        unimplemented  {fucompp }
        unimplemented  {fucompp }
        eax_86.w =
            (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top_17 & 7) << 0xb
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            char* var_100_42 = &data_307daf4
            sub_415f90(data_307dafc)
            int32_t eax_89 = sub_40a930(&var_ec)
            unimplemented  {call 0x40a930}
            unimplemented  {fld st0, dword [0x307daf8]}
            float var_100_43 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            top_17 -= 1
            void* eax_90 = data_307dafc
            void* var_104_18 = &var_54
            __builtin_memcpy(&var_54, eax_89, 0x40)
            sub_4f9fe0(eax_90, var_104_18)
        
        sub_407670()
    
    unimplemented  {fldz }
    long double temp7 = fconvert.t(data_307db0c)
    unimplemented  {fcomp st0, dword [0x307db0c]} f- temp7
    bool c0_6 = unimplemented  {fcomp st0, dword [0x307db0c]} f< temp7
    bool c2_6 = is_unordered.t(unimplemented  {fcomp st0, dword [0x307db0c]}, temp7)
    bool c3_6 = unimplemented  {fcomp st0, dword [0x307db0c]} f== temp7
    unimplemented  {fcomp st0, dword [0x307db0c]}
    eax_86.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | (top_17 & 7) << 0xb
    bool p_6 = unimplemented  {test ah, 0x5}
    
    if (not(p_6))
        sub_4075c0()
        sub_40bb90(&data_307db08)
        sub_407670()
    
    void* eax_91 = data_27e7fe4
    __builtin_memcpy(eax_91 + 0x9c, 0x83faf8, 0x40)
    *(eax_91 + 0xdc) = 0
    sub_4e2080()
    sub_4db310()
    unimplemented  {fldz }
    int32_t* var_100_45 = &data_840bc4
    float var_24_1 = fconvert.s(unimplemented  {fst dword [ebp-0x20], st0})
    var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
    unimplemented  {fstp dword [ebp-0x1c], st0}
    unimplemented  {fld1 }
    float edx_21 = var_20
    float var_1c_2 = fconvert.s(unimplemented  {fst dword [ebp-0x18], st0})
    var_7c = var_24_1
    float var_18_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
    unimplemented  {fstp dword [ebp-0x14], st0}
    float var_78_2 = edx_21
    float var_70_1 = var_18_2
    float var_74_2 = var_1c_2
    sub_4da140(var_1c_2, edx_21, &var_7c, var_100_45)
    unimplemented  {call 0x4da140}
    void* eax_93 = data_27e7fe4
    *(eax_93 + 0x254) = 0
    __builtin_memcpy(eax_93 + 0x9c, 0x83faf8, 0x40)
    *(eax_93 + 0xdc) = 0
    int32_t result = sub_4e2080()
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

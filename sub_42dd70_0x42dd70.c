// 函数名称: sub_42dd70
// 虚拟地址: 0x42dd70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_42dd70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, char arg5, char arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* i_3)(void* arg1) = sub_698ca0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_18 = arg3
    __chkstk(0x13a64)
    int32_t eax_2 = __security_cookie ^ &var_18
    int32_t __saved_edi
    int32_t var_28 = __security_cookie ^ &__saved_edi
    int32_t arg_13a50
    fsbase->NtTib.ExceptionList = &arg_13a50
    void* esi = data_27e7a40
    sub_463d80(*(esi + 0x548) + 0x43960)
    int32_t (* i)(void* arg1) = 0x2c268
    int32_t (* i_2)(void* arg1) = 0x2c268
    
    do
        int32_t j_1 = 0
        i_3 = i
        int32_t j
        
        do
            void* ecx_1 = *(esi + 0x548) + i_3
            char* eax_8 = *ecx_1
            
            if (eax_8 != 0 && eax_8 != &data_83f3d3)
                if (*eax_8 != 0)
                    if (*(eax_8 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp0_1 = *(eax_8 - 0xc)
                    *(eax_8 - 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        void* esi_1 = data_26a44e4
                        int32_t edi_2 = *(eax_8 - 4) + 0x10
                        
                        if (esi_1 == 0)
                            sub_4f4250()
                            esi_1 = data_26a44e4
                        
                        int32_t edx = 0
                        int32_t* ecx_3
                        
                        while (true)
                            if (edi_2 s<= 1 << (edx.b + 4))
                                ecx_3 = esi_1 + edx * 0x14
                                break
                            
                            edx += 1
                            
                            if (edx s>= 7)
                                ecx_3 = esi_1 + 0x8c
                                break
                        
                        sub_4f4430(&eax_8[0xfffffff0], ecx_3, edi_2)
                        esi = data_27e7a40
                
                *ecx_1 = &data_83f3d3
            
            i_3 += 4
            j = j_1 + 1
            j_1 = j
        while (j s< 6)
        i = i_2 + 0x1c0
        i_2 = i
    while (i s< 0x42068)
    
    sub_5abfc0(*(esi + 0x548) + 0x184, 0, 0x437dc)
    void* edi_4 = *(esi + 0x548)
    *(esi + 0x2c495c) = *arg4
    int32_t edx_3 = arg4[1]
    *(esi + 0x2c4960) = edx_3
    
    if (*(edi_4 + 0x2c078) == 1 && *(edi_4 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        int32_t __saved_ebp
        edx_3 = sub_4d66f0(&__saved_ebp)
        esi = data_27e7a40
    
    int32_t ecx_7 = data_27e7fd0
    *(edi_4 + 0x210) = 6
    *(edi_4 + 0x2c078) = 0
    *(edi_4 + 0x214) = 0
    int32_t* edi_5 = *(esi + 0x548)
    int32_t esi_2 = edi_5[1]
    int32_t ebx_2 = edi_5[2]
    int32_t arg_13a58
    
    if (*(ecx_7 + 0x27) == 0)
        bool cond:2_1 = (data_3165fac & 4) != 0
        *(edi_5 + 0x2c079) = 0
        
        if (not(cond:2_1))
            data_3165fac.d |= 4
            arg_13a58 = 2
            int32_t eax_15
            eax_15, edx_3 = sub_4f5220(data_307c794, "animDlg")
            data_3165fa0 = eax_15
            arg_13a58 = 0xffffffff
        
        int32_t var_2c_3 = 1
        sub_4fa4e0(esi_2, data_3165fa0, edx_3.b)
        int80_t st0_1
        st0_1, ecx_7, edx_3 = sub_4fa8a0(ebx_2, 1, fconvert.s(float.t(0)))
    else
        data_30d6f38 = 0
    
    edx_3.b = 0
    sub_463040(ecx_7, edx_3.b)
    unimplemented  {call 0x463040}
    
    if (*(data_27e7a40 + 0x2c4960) != 1 || data_27c0720 != 1)
        i_3.b = 0
    else
        i_3.b = data_27c076c s< *(*(data_27e7a54 + 0x204) * 0x18 + &data_8c77ec) - 1
    
    unimplemented  {fldz }
    int32_t var_2c_5 = 1
    float var_2c_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    sub_4fa8a0(*edi_5, i_3, var_2c_6)
    unimplemented  {call 0x4fa8a0}
    int32_t ebx_3 = 0
    void* esi_3 = &edi_5[5]
    
    while (true)
        int32_t edx_9 = *esi_3
        
        if (edx_9 == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_23 = zx.d(edx_9.w)
        
        if (eax_23 u< data_be1cbc && *(eax_23 * 0x438 + data_be1cb8 + 0x434) == edx_9)
            ebx_3 += 1
            esi_3 += 4
            *(eax_23 * 0x438 + data_be1cb8 + 8) = 1
            
            if (ebx_3 s>= 0xc)
                break
            
            continue
        
        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
            "DataArray<struct UIState>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    edi_5[0xb02b] = 0xffffffff
    edi_5[0x2fec] = 0xffffffff
    void* eax_26 = sub_41efc0(&i_3)
    int32_t eax_27 = arg4[1]
    
    if (eax_27 == 0)
        sub_4c5870("gameHandle.gameType != GAME_NONE", &data_83f3d3, "..\code\RFTGClient.cpp", 0x200c, 
            "RFTGClientGameStart")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx_6
    
    if (eax_27 != 4)
        if (eax_27 != 1)
            void* eax_61 = sub_404690(arg4)
            int32_t ecx_28 = *(eax_61 + 0x140)
            int32_t edi_6
            
            if (*(data_27e7a40 + 0x38) == 0)
                edi_6 = *(data_27e7a54 + 0x10)
            else
                edi_6 = *(data_27e7a54 + 0x14)
            
            int32_t eax_63 = sub_404890(eax_61, edi_6)
            void* ecx_30 = data_27e7a40
            void* edx_22 = *(ecx_30 + 0x548)
            *(ecx_30 + 0x74) = eax_63
            sub_472430(*(edx_22 + 0x45844), eax_61)
            sub_420ff0(eax_26, i_3)
            ebx_6 = edi_5
            ebx_6[0x10e53] = 3
            ebx_6[0x10e52] = ecx_28 - 2
            ebx_6[0x10e54] = *(eax_61 + 0x190)
            ebx_6[0x10e55] = 0
            ebx_6[0x10e57] = *(eax_61 + 0x1d4)
            void* edx_26 = *(data_27e7a40 + 0x548)
            *(*(data_27e7a40 + 0x548) + 0x45848) =
                sub_472910(eax_61 + 0x144, edx_26.b, *(edx_26 + 0x45844), *(eax_61 + 0x140))
        else
            int32_t eax_43 = sub_472600(*(*(data_27e7a40 + 0x548) + 0x45844))
            int32_t (* i_4)(void* arg1) = i_3
            *(data_27e7a40 + 0x74) = eax_43
            sub_420ff0(eax_26, i_4)
            
            if (arg5 != 0)
                data_27c076c = 0
                data_27c0770 = 0
            else if (data_27c0720 == 1)
                sub_408650()
                int32_t i_1 = 0
                data_27c076c = arg7
                
                if (arg7 s>= 0)
                    do
                        int32_t eax_53 = *(data_27e7a54 + 0x204) * 3
                        
                        if (i_1 s>= *((eax_53 << 3) + &data_8c77ec))
                            sub_4c5870("i < activeTutorial.size", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0x205c, "RFTGClientGameStart")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        sub_41ad10((&data_8c77e8)[eax_53 * 2] + (i_1 << 3), 1)
                        i_1 += 1
                    while (i_1 s<= data_27c076c)
            
            int32_t eax_44 = sub_42dba0(0x27c0614)
            void* ecx_22 = data_27e7a54
            edi_5[0x10e53] = eax_44
            edi_5[0x10e52] = data_27c06d4 - 2
            edi_5[0x10e54] = data_27c0728
            edi_5[0x10e57] = *(ecx_22 + 0x20c)
            
            if (data_27c0720 == 1)
                edi_5[0x10e54] = 0xffffffff
            
            void* ecx_23 = data_27e7a40
            edi_5[0x10e55] = 0
            void* edx_18 = *(ecx_23 + 0x548)
            int32_t* eax_47 = sub_472910(0x27c06dc, edx_18.b, *(edx_18 + 0x45844), data_27c06d4)
            void* ecx_25 = data_27e7a40
            *(*(ecx_25 + 0x548) + 0x45848) = eax_47
            int32_t esi_8 = *(ecx_25 + 0x74)
            void* eax_48
            
            if (esi_8 != 0xffffffff)
                eax_48 = sub_46b2b0(esi_8)
            
            if (esi_8 == 0xffffffff || *eax_48 != 0)
                sub_4c5870("localSeat == SEAT_LOCAL", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2073, 
                    "RFTGClientGameStart")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (sub_46b360(0) != *(data_27e7a40 + 0x74))
                sub_4c5870("locWho == gCClient->localPlayerWho", &data_83f3d3, 
                    "..\code\RFTGClient.cpp", 0x2075, "RFTGClientGameStart")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* edx_20 = data_27e7a54
            data_27c06d8 = 2
            ebx_6 = edi_5
            data_27c060c = sub_4082e0(0x27c0610, *(edx_20 + 0x20c))
        
        if (arg5 != 0)
            int32_t eax_69 = ebx_6[0x10e54]
            
            if (eax_69 != 0xffffffff)
                int32_t edx_28 = ebx_6[0x10e53]
                int32_t eax_70 = ebx_6[0x10e52]
                void* eax_71 =
                    sub_473150(eax_70, edx_28, 1, data_27e7a5c, eax_70, edx_28, eax_69, ebx_6[0x10e55])
                *(eax_71 + 4) += 1
                *(eax_71 + 0xc) += 1
                
                if (*(eax_71 + 8) s< 1)
                    *(eax_71 + 8) = 1
                    *(eax_71 + 0x10) = ebx_6[0x10e57]
            
            sub_409830()
        
        goto label_42e6bc
    
    sub_4084a0(*arg4, 0x27d401c)
    sub_420ff0(eax_26, i_3)
    int32_t esi_5 = data_27d40e0
    int32_t result = sub_472600(*(*(data_27e7a40 + 0x548) + 0x45844))
    *(data_27e7a40 + 0x74) = result
    
    if (result != 0xffffffff && data_27d412c != 1)
        if (arg5 != 0)
            sub_4c5870("gameStart == false", &data_83f3d3, "..\code\RFTGClient.cpp", 0x201f, 
                "RFTGClientGameStart")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg6 == 0)
            edi_5[0x10e54] = 0xfffffffe
        else
            if (*arg4 s<= 0)
                edi_5[0x10e53] = sub_42dba0(0x27d4020)
            else
                edi_5[0x10e53] = 3
            
            edi_5[0x10e52] = esi_5 - 2
            edi_5[0x10e54] = data_27d4134
            edi_5[0x10e55] = 0
            edi_5[0x10e57] = *arg4
        
        void* edx_12 = data_27e7a40
        int32_t* eax_36 = sub_472910(0x27d40e8, edx_12.b, *(*(edx_12 + 0x548) + 0x45844), data_27d40e0)
        void* ecx_19 = data_27e7a40
        *(*(ecx_19 + 0x548) + 0x45848) = eax_36
        int32_t esi_7 = *(ecx_19 + 0x74)
        void* eax_37
        
        if (esi_7 != 0xffffffff)
            eax_37 = sub_46b2b0(esi_7)
        
        if (esi_7 == 0xffffffff || *eax_37 != 0)
            sub_4c5870("localSeat == SEAT_LOCAL", &data_83f3d3, "..\code\RFTGClient.cpp", 0x203d, 
                "RFTGClientGameStart")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (sub_46b360(0) != *(data_27e7a40 + 0x74))
            sub_4c5870("locWho == gCClient->localPlayerWho", &data_83f3d3, "..\code\RFTGClient.cpp", 
                0x203f, "RFTGClientGameStart")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ebx_6 = edi_5
        data_27d40e4 = 2
    label_42e6bc:
        unimplemented  {fild st0, dword [eax+0x14]}
        void* arg_13a3c = fconvert.s(unimplemented  {fstp dword [esp+0x13a64], st0})
        unimplemented  {fstp dword [esp+0x13a64], st0}
        unimplemented  {fild st0, dword [eax+0x18]}
        float arg_13a40 = fconvert.s(unimplemented  {fstp dword [esp+0x13a68], st0})
        unimplemented  {fstp dword [esp+0x13a68], st0}
        long double st0_2 = sub_466520(arg_13a3c, arg_13a40)
        unimplemented  {call 0x466520}
        sub_4207a0()
        void* eax_73
        void* edx_30
        eax_73, edx_30 = sub_46b2b0(*(data_27e7a40 + 0x74))
        int32_t eax_74 = *(eax_73 + 0x1c)
        
        if (eax_74 == 2 || eax_74 == 3 || eax_74 == 1)
            edx_30 = data_27e7a40
            *(*(edx_30 + 0x548) + 0x2c0a4) = 0
        else if (eax_74 != 4)
            edx_30 = sub_422300()
        
        float eax_77
        
        if ((data_3166830 & 1) != 0)
            eax_77 = data_316682c
        else
            data_3166830.d |= 1
            arg_13a58 = 3
            eax_77, edx_30 = sub_4f5220(data_307c72c, "animBg")
            data_316682c = eax_77
            arg_13a58 = 0xffffffff
        
        int32_t esi_11 = ebx_6[0x15]
        int32_t var_2c_16 = 1
        sub_4fa4e0(esi_11, eax_77, edx_30.b)
        int32_t eax_79
        int32_t ecx_39
        eax_79, ecx_39 = sub_4fc3d0(&data_be1cb8, esi_11)
        
        if (eax_77 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_31 = *(eax_79 + (eax_77 << 2) + 0x30)
        int128_t* eax_81
        
        if (edx_31 != 0)
            eax_81 = sub_4fc1e0(ecx_39, edx_31)
        else
            eax_81 = sub_4fc0d0()
            *(eax_81 + 4) = &data_83f3d3
            *(eax_79 + (eax_77 << 2) + 0x30) = *(eax_81 + 0x1bc)
        
        unimplemented  {fldz }
        void* edx_32 = data_27e7a50
        *(eax_81 + 0x14) = fconvert.s(unimplemented  {fst dword [eax+0x14], st0})
        eax_81[1].d = fconvert.s(unimplemented  {fst dword [eax+0x10], st0})
        unimplemented  {fld st0, dword [0x873c74]}
        *(edx_32 + 0xc)
        arg_13a3c = fconvert.s(unimplemented  {fstp dword [esp+0x13a64], st0})
        unimplemented  {fstp dword [esp+0x13a64], st0}
        unimplemented  {fld st0, dword [0x8a5744]}
        arg_13a40 = fconvert.s(unimplemented  {fstp dword [esp+0x13a68], st0})
        unimplemented  {fstp dword [esp+0x13a68], st0}
        unimplemented  {fld st0, dword [0x8a53c4]}
        float arg_13a44 = fconvert.s(unimplemented  {fstp dword [esp+0x13a6c], st0})
        unimplemented  {fstp dword [esp+0x13a6c], st0}
        unimplemented  {fld st0, dword [esp+eax*4+0x13a64]}
        unimplemented  {fld1 }
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fmul st0, qword [0x8a54c8]}
        arg_13a3c = fconvert.s(unimplemented  {fstp dword [esp+0x13a64], st0})
        unimplemented  {fstp dword [esp+0x13a64], st0}
        unimplemented  {fld st0, dword [esp+0x13a64]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int32_t eax_82
        int16_t top
        eax_82.w =
            (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | ((top - 6) & 7) << 0xb
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            unimplemented  {fadd qword [0x8a5368]}
        else
            unimplemented  {fsub st0, qword [0x8a5368]}
        
        int32_t eax_83 = sub_685f40(st0_2)
        int32_t edi_10 = data_316682c
        int32_t eax_84
        int32_t ecx_41
        eax_84, ecx_41 = sub_4fc3d0(&data_be1cb8, ebx_6[0x15])
        
        if (edi_10 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_33 = *(eax_84 + (edi_10 << 2) + 0x30)
        int32_t* eax_86
        
        if (edx_33 != 0)
            eax_86 = sub_4fc1e0(ecx_41, edx_33)
        else
            eax_86 = sub_4fc0d0()
            eax_86[1] = &data_83f3d3
            *(eax_84 + (edi_10 << 2) + 0x30) = eax_86[0x6f]
        
        int32_t edx_35 = *eax_86 + 1
        bool cond:6_1 = (data_3166830 & 2) != 0
        eax_86[0x4d] = edx_35
        eax_86[0x4e] = eax_83
        float eax_87
        
        if (cond:6_1)
            eax_87 = data_3166828
        else
            data_3166830.d |= 2
            arg_13a58 = 4
            eax_87, edx_35 = sub_4f5220(data_307c6f4, "animScavange")
            data_3166828 = eax_87
            arg_13a58 = 0xffffffff
        
        int32_t esi_15 = ebx_6[0x16]
        int32_t var_2c_17 = 1
        sub_4fa4e0(esi_15, eax_87, edx_35.b)
        int32_t eax_89
        int32_t ecx_44
        eax_89, ecx_44 = sub_4fc3d0(&data_be1cb8, esi_15)
        
        if (eax_87 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_37 = *(eax_89 + (eax_87 << 2) + 0x30)
        int128_t* eax_91
        
        if (edx_37 != 0)
            eax_91 = sub_4fc1e0(ecx_44, edx_37)
        else
            eax_91 = sub_4fc0d0()
            *(eax_91 + 4) = &data_83f3d3
            *(eax_89 + (eax_87 << 2) + 0x30) = *(eax_91 + 0x1bc)
        
        unimplemented  {fldz }
        void* edx_38 = data_27e7a50
        *(eax_91 + 0x14) = fconvert.s(unimplemented  {fst dword [eax+0x14], st0})
        eax_91[1].d = fconvert.s(unimplemented  {fst dword [eax+0x10], st0})
        unimplemented  {fld st0, dword [0x873c74]}
        *(edx_38 + 0xc)
        arg_13a3c = fconvert.s(unimplemented  {fstp dword [esp+0x13a64], st0})
        unimplemented  {fstp dword [esp+0x13a64], st0}
        unimplemented  {fld st0, dword [0x8a5744]}
        arg_13a40 = fconvert.s(unimplemented  {fstp dword [esp+0x13a68], st0})
        unimplemented  {fstp dword [esp+0x13a68], st0}
        unimplemented  {fld st0, dword [0x8a53c4]}
        arg_13a44 = fconvert.s(unimplemented  {fstp dword [esp+0x13a6c], st0})
        unimplemented  {fstp dword [esp+0x13a6c], st0}
        unimplemented  {fld st0, dword [esp+eax*4+0x13a64]}
        unimplemented  {fld1 }
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fmul st0, qword [0x8a54c8]}
        arg_13a3c = fconvert.s(unimplemented  {fstp dword [esp+0x13a64], st0})
        unimplemented  {fstp dword [esp+0x13a64], st0}
        unimplemented  {fld st0, dword [esp+0x13a64]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_2 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_2 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_2 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int32_t eax_92
        int16_t top_16
        eax_92.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | ((top_16 - 1) & 7) << 0xb
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            unimplemented  {fadd qword [0x8a5368]}
        else
            unimplemented  {fsub st0, qword [0x8a5368]}
        
        int32_t eax_93 = sub_685f40(st0_2)
        int32_t edi_12 = data_3166828
        int32_t eax_94
        int32_t ecx_46
        eax_94, ecx_46 = sub_4fc3d0(&data_be1cb8, ebx_6[0x16])
        
        if (edi_12 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_39 = *(eax_94 + (edi_12 << 2) + 0x30)
        int32_t* eax_96
        
        if (edx_39 != 0)
            eax_96 = sub_4fc1e0(ecx_46, edx_39)
        else
            eax_96 = sub_4fc0d0()
            eax_96[1] = &data_83f3d3
            *(eax_94 + (edi_12 << 2) + 0x30) = eax_96[0x6f]
        
        int32_t edx_41 = *eax_96 + 1
        bool cond:7_1 = (data_3166830 & 4) != 0
        eax_96[0x4d] = edx_41
        eax_96[0x4e] = eax_93
        float eax_97
        
        if (cond:7_1)
            eax_97 = data_3166824
        else
            data_3166830.d |= 4
            arg_13a58 = 5
            eax_97, edx_41 = sub_4f5220(data_307c1c8, "animBg")
            data_3166824 = eax_97
            arg_13a58 = 0xffffffff
        
        int32_t esi_19 = ebx_6[0x16]
        int32_t var_2c_18 = 1
        sub_4fa4e0(esi_19, eax_97, edx_41.b)
        int32_t eax_99
        int32_t ecx_49
        eax_99, ecx_49 = sub_4fc3d0(&data_be1cb8, esi_19)
        
        if (eax_97 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_43 = *(eax_99 + (eax_97 << 2) + 0x30)
        int128_t* eax_101
        
        if (edx_43 != 0)
            eax_101 = sub_4fc1e0(ecx_49, edx_43)
        else
            eax_101 = sub_4fc0d0()
            *(eax_101 + 4) = &data_83f3d3
            *(eax_99 + (eax_97 << 2) + 0x30) = *(eax_101 + 0x1bc)
        
        unimplemented  {fldz }
        void* edx_44 = data_27e7a50
        *(eax_101 + 0x14) = fconvert.s(unimplemented  {fst dword [eax+0x14], st0})
        eax_101[1].d = fconvert.s(unimplemented  {fst dword [eax+0x10], st0})
        unimplemented  {fld st0, dword [0x873c74]}
        *(edx_44 + 0xc)
        arg_13a3c = fconvert.s(unimplemented  {fstp dword [esp+0x13a64], st0})
        unimplemented  {fstp dword [esp+0x13a64], st0}
        unimplemented  {fld st0, dword [0x8a5744]}
        arg_13a40 = fconvert.s(unimplemented  {fstp dword [esp+0x13a68], st0})
        unimplemented  {fstp dword [esp+0x13a68], st0}
        unimplemented  {fld st0, dword [0x8a53c4]}
        arg_13a44 = fconvert.s(unimplemented  {fstp dword [esp+0x13a6c], st0})
        unimplemented  {fstp dword [esp+0x13a6c], st0}
        unimplemented  {fld st0, dword [esp+eax*4+0x13a64]}
        unimplemented  {fld1 }
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fmul st0, qword [0x8a54c8]}
        arg_13a3c = fconvert.s(unimplemented  {fstp dword [esp+0x13a64], st0})
        unimplemented  {fstp dword [esp+0x13a64], st0}
        unimplemented  {fld st0, dword [esp+0x13a64]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_3 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_3 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_3 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int32_t eax_102
        eax_102.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | ((top_16 - 1) & 7) << 0xb
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            unimplemented  {fadd qword [0x8a5368]}
        else
            unimplemented  {fsub st0, qword [0x8a5368]}
        
        int32_t eax_103 = sub_685f40(st0_2)
        int32_t edi_14 = data_3166824
        int32_t eax_104
        int32_t ecx_51
        eax_104, ecx_51 = sub_4fc3d0(&data_be1cb8, ebx_6[0x16])
        
        if (edi_14 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_45 = *(eax_104 + (edi_14 << 2) + 0x30)
        int32_t* eax_106
        
        if (edx_45 != 0)
            eax_106 = sub_4fc1e0(ecx_51, edx_45)
        else
            eax_106 = sub_4fc0d0()
            eax_106[1] = &data_83f3d3
            *(eax_104 + (edi_14 << 2) + 0x30) = eax_106[0x6f]
        
        int32_t edx_47 = *eax_106 + 1
        bool cond:8_1 = (data_3166830 & 8) != 0
        eax_106[0x4d] = edx_47
        eax_106[0x4e] = eax_103
        
        if (not(cond:8_1))
            data_3166830.d |= 8
            arg_13a58 = 6
            int32_t eax_107
            eax_107, edx_47 = sub_4f5220(data_307c72c, "card1")
            data_3166820 = eax_107
            arg_13a58 = 0xffffffff
        
        if ((data_3166830 & 0x10) == 0)
            data_3166830.d |= 0x10
            arg_13a58 = 7
            int32_t eax_109
            eax_109, edx_47 = sub_4f5220(data_307c72c, "card2")
            data_316681c = eax_109
            arg_13a58 = 0xffffffff
        
        int32_t var_2c_19 = 1
        sub_4fa4e0(ebx_6[0x15], data_3166820, edx_47.b)
        float edx_49 = data_316681c
        int32_t var_34_5 = 1
        sub_4fa4e0(ebx_6[0x15], edx_49, edx_49.b)
        
        if ((data_3166830 & 0x20) == 0)
            data_3166830.d |= 0x20
            arg_13a58 = 8
            data_3166818 = sub_4f5220(data_307c75c, "tbl_OffenseCard")
            arg_13a58 = 0xffffffff
        
        if ((data_3166830 & 0x40) == 0)
            data_3166830.d |= 0x40
            arg_13a58 = 9
            data_3166814 = sub_4f5220(data_307c75c, "tbl_DefenseCard")
            arg_13a58 = 0xffffffff
        
        float edx_50 = data_3166818
        int32_t var_2c_20 = 1
        char edx_51 = sub_4fa4e0(ebx_6[0x17], edx_50, edx_50.b)
        int32_t var_34_6 = 1
        sub_4fa4e0(ebx_6[0x17], data_3166814, edx_51)
        result.b = 1
    else
        result.b = 0
    
    fsbase->NtTib.ExceptionList = arg_13a50
    sub_5a6aba(eax_2 ^ &var_18)
    return result
}

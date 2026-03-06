// 函数名称: sub_4420f0
// 虚拟地址: 0x4420f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4420f0(float* arg1 @ edi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_695b42
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int128_t* var_a8
    int32_t eax_2 = __security_cookie ^ &var_a8
    int32_t __saved_esi
    int32_t var_b4 = __security_cookie ^ &__saved_esi
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_9c = fconvert.s(fconvert.t(data_8c4d34))
    
    if ((data_3165fec & 1) == 0)
        data_3165fec.d |= 1
        int32_t var_c_1 = 0
        data_3165fe8 = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_2 = 0xffffffff
    
    int32_t* ecx
    
    if ((data_3165fec & 2) == 0)
        data_3165fec.d |= 2
        int32_t var_c_3 = 1
        ecx = data_307c798
        data_3165fe4 = sub_4f5220(ecx, "btnAddFriend")
        int32_t var_c_4 = 0xffffffff
    
    void* edx = data_27e7a40
    void* i = *(edx + 0x548)
    int32_t var_a0 = 0
    
    for (; i != 0; i = *(data_27e7a40 + 0x548))
        int32_t* var_94
        
        if (var_a0 s>= sx.d(*(*(i + 0x45844) + 0x458)))
            if ((data_3165fec & 4) == 0)
                data_3165fec.d |= 4
                int32_t var_c_5 = 2
                ecx = data_307c790
                int32_t eax_23
                eax_23, edx = sub_4f5220(ecx, "animDelay")
                data_3165fe0 = eax_23
                int32_t var_c_6 = 0xffffffff
            
            int32_t* var_b8 = ecx
            char result = sub_4faeb0(data_3165fe0, edx, arg2, fconvert.s(float.t(1)))
            
            if (result != 0 || arg1[2].b != result)
                if ((data_3165fec & 8) == 0)
                    data_3165fec.d |= 8
                    int32_t var_c_7 = 3
                    data_3165fdc = sub_4f5220(data_307c798, "animCardPoints")
                    int32_t var_c_8 = 0xffffffff
                
                if ((data_3165fec & 0x10) == 0)
                    data_3165fec.d |= 0x10
                    int32_t var_c_9 = 4
                    data_3165fd8 = sub_4f5220(data_307c798, "animChits")
                    int32_t var_c_10 = 0xffffffff
                
                if ((data_3165fec & 0x20) == 0)
                    data_3165fec.d |= 0x20
                    int32_t var_c_11 = 5
                    data_3165fd4 = sub_4f5220(data_307c798, "animGoals")
                    int32_t var_c_12 = 0xffffffff
                
                if ((data_3165fec & 0x40) == 0)
                    data_3165fec.d |= 0x40
                    int32_t var_c_13 = 6
                    data_3165fd0 = sub_4f5220(data_307c798, "animPrestige")
                    int32_t var_c_14 = 0xffffffff
                
                if ((data_3165fec & 0x80) == 0)
                    data_3165fec.d |= 0x80
                    int32_t var_c_15 = 7
                    data_3165fcc = sub_4f5220(data_307c798, "animCards")
                    int32_t var_c_16 = 0xffffffff
                
                if ((data_3165fec.d & 0x100) == 0)
                    data_3165fec.d |= 0x100
                    int32_t var_c_17 = 8
                    data_3165fc8 = sub_4f5220(data_307c798, "animWinner")
                    int32_t var_c_18 = 0xffffffff
                
                if ((data_3165fec.d & 0x200) == 0)
                    data_3165fec.d |= 0x200
                    int32_t var_c_19 = 9
                    data_3165fc4 = sub_4f5220(data_307c798, "TxtPointsTableau")
                    int32_t var_c_20 = 0xffffffff
                
                if ((data_3165fec.d & 0x400) == 0)
                    data_3165fec.d |= 0x400
                    int32_t var_c_21 = 0xa
                    data_3165fc0 = sub_4f5220(data_307c798, "TxtPointsChits")
                    int32_t var_c_22 = 0xffffffff
                
                if ((data_3165fec.d & 0x800) == 0)
                    data_3165fec.d |= 0x800
                    int32_t var_c_23 = 0xb
                    data_3165fbc = sub_4f5220(data_307c798, "TxtPointsGoals")
                    int32_t var_c_24 = 0xffffffff
                
                if ((data_3165fec.d & 0x1000) == 0)
                    data_3165fec.d |= 0x1000
                    int32_t var_c_25 = 0xc
                    data_3165fb8 = sub_4f5220(data_307c798, "TxtPointsPrestige")
                    int32_t var_c_26 = 0xffffffff
                
                if ((data_3165fec.d & 0x2000) == 0)
                    data_3165fec.d |= 0x2000
                    int32_t var_c_27 = 0xd
                    data_3165fb4 = sub_4f5220(data_307c798, "txtCardCount")
                    int32_t var_c_28 = 0xffffffff
                
                if ((data_3165fec.d & 0x4000) == 0)
                    data_3165fec.d |= 0x4000
                    int32_t var_c_29 = 0xe
                    data_3165cdc = sub_4f5220(data_307c798, "TxtTotal")
                    int32_t var_c_30 = 0xffffffff
                
                if ((data_3165fec.d & 0x8000) == 0)
                    data_3165fec.d |= 0x8000
                    int32_t var_c_31 = 0xf
                    data_3165fb0 = sub_4f5220(data_307c794, "animDlg")
                    int32_t var_c_32 = 0xffffffff
                
                int32_t* eax_42 = data_307bef4
                int32_t* ecx_12 = data_307bf0c
                var_94 = data_307bf74
                sub_441d30(arg3, arg1)
                void* eax_44 = *(data_27e7a40 + 0x548)
                int32_t j_1 = 0
                int32_t j = 0
                
                if (eax_44 == 0)
                    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                        0xcc, "GetGame")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_45 = *(eax_44 + 0x45844)
                void* eax_46 = eax_45 + 0xac
                
                while (j s< sx.d(*(eax_45 + 0x458)))
                    if (*eax_46 != 0)
                        j_1 = j
                        break
                    
                    j += 1
                    eax_46 += 0xb4
                
                int32_t ebx_6 = data_3165fe8
                int32_t var_84 = 0
                int32_t j_2 = j_1
                
                if (arg3 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t esi_7 = arg3 & 0xffff
                
                if (esi_7 u>= data_be1cbc || *(esi_7 * 0x438 + data_be1cb8 + 0x434) != arg3)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t eax_54 = esi_7 * 0x438
                int128_t* eax_55 = eax_54 + data_be1cb8
                var_a8 = eax_55
                
                if (ebx_6 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_9 = *(eax_55 + (ebx_6 << 2) + 0x30)
                int32_t* eax_59
                
                if (edx_9 != 0)
                    eax_59 = sub_4fc1e0(ebx_6 + 0xc, edx_9)
                else
                    int32_t* eax_57 = sub_4fc0d0()
                    int128_t* ecx_15 = var_a8
                    edx_9 = ebx_6 + 0xc
                    eax_57[1] = &data_83f3d3
                    *(ecx_15 + (edx_9 << 2)) = eax_57[0x6f]
                    eax_59 = eax_57
                
                int128_t* eax_60 = *(var_a8 + 4)
                bool cond:1_1 = *(eax_60 + 4) == 0x1e
                var_a8 = eax_60
                
                if (not(cond:1_1))
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*eax_60 == 0)
                    sub_520800(eax_60, edx_9.b, eax_60, 0)
                    int128_t* edx_10 = var_a8
                    
                    if (*edx_10 == 0)
                        sub_509540(edx_10)
                
                void* eax_65
                int32_t ecx_20
                int32_t edx_13
                eax_65, ecx_20, edx_13 = sub_4f7720(&var_84, ebx_6 * 0x118 + ***var_a8, eax_59)
                bool cond:2_1 = arg1[2].b != 0
                var_a8 = *(eax_65 + 0x434)
                
                if (not(cond:2_1))
                    float ebx_9 = data_3165fb0
                    int32_t var_b8_3 = 0
                    arg1[2].b = 1
                    sub_4fa4e0(arg3, ebx_9, edx_13.b)
                    int32_t eax_68
                    
                    if (esi_7 u< data_be1cbc)
                        eax_68 = data_be1cb8
                    
                    if (esi_7 u>= data_be1cbc || *(esi_7 * 0x438 + eax_68 + 0x434) != arg3)
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_10 = eax_54 + eax_68
                    
                    if (ebx_9 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    edx_13 = *(esi_10 + (ebx_9 << 2) + 0x30)
                    int128_t* eax_71
                    
                    if (edx_13 != 0)
                        eax_71, ecx_20 = sub_4fc1e0(arg3, edx_13)
                    else
                        eax_71, edx_13 = sub_4fc0d0()
                        *(eax_71 + 4) = &data_83f3d3
                        ecx_20 = *(eax_71 + 0x1bc)
                        *(esi_10 + (ebx_9 << 2) + 0x30) = ecx_20
                    
                    long double x87_r7_2 = float.t(0)
                    *(eax_71 + 0x14) = fconvert.s(x87_r7_2)
                    eax_71[1].d = fconvert.s(x87_r7_2)
                
                int32_t var_b8_4 = ecx_20
                int32_t ecx_23
                int32_t edx_14
                result, ecx_23, edx_14 = sub_4faeb0(data_3165fb0, edx_13, arg3, fconvert.s(float.t(1)))
                
                if (result != 0)
                    void var_7c
                    
                    if (*(arg1 + 9) == 0)
                        float edx_15 = data_3165fdc
                        int32_t var_b8_6 = ecx_23
                        *(arg1 + 9) = 1
                        sub_441050(arg3, edx_15, fconvert.s(float.t(0)))
                        sub_4d6480(eax_42)
                        ecx_23, edx_14 = sub_4d66f0(&var_7c)
                        *arg1 = fconvert.s(float.t(0))
                        arg1[1] = fconvert.s(fconvert.t(0.100000001f))
                    
                    unimplemented  {fld1 }
                    int32_t var_b8_9 = ecx_23
                    float var_b8_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t edx_16
                    result, edx_16 = sub_4faeb0(data_3165fdc, edx_14, var_a8, var_b8_10)
                    
                    if (result != 0)
                        int32_t ecx_26 = arg1[3]
                        
                        if (ecx_26 s>= arg1[4])
                            if (arg1[5].b == 0)
                                unimplemented  {fldz }
                                int32_t var_b8_13 = ecx_26
                                float var_b8_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                arg1[5].b = 1
                                sub_441050(arg3, data_3165fd8, var_b8_14)
                                unimplemented  {call 0x441050}
                                unimplemented  {fldz }
                                *arg1 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                                unimplemented  {fstp dword [edi], st0}
                                unimplemented  {fld st0, dword [0x8a5664]}
                                arg1[1] = fconvert.s(unimplemented  {fstp dword [edi+0x4], st0})
                                unimplemented  {fstp dword [edi+0x4], st0}
                                sub_4d6480(eax_42)
                                ecx_26, edx_16 = sub_4d66f0(&var_7c)
                            
                            unimplemented  {fld1 }
                            int32_t var_b8_16 = ecx_26
                            float var_b8_17 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t edx_18
                            result, edx_18 = sub_4faeb0(data_3165fd8, edx_16, var_a8, var_b8_17)
                            
                            if (result != 0)
                                int32_t ecx_33 = arg1[6]
                                
                                if (ecx_33 s< arg1[7])
                                    unimplemented  {fld st0, dword [edi]}
                                    unimplemented  {fadd dword [esp+0x18]}
                                    float var_a4_3 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                                    unimplemented  {fstp dword [esp+0x10], st0}
                                    unimplemented  {fld st0, dword [esp+0x10]}
                                    *arg1 = fconvert.s(unimplemented  {fst dword [edi], st0})
                                    unimplemented  {fld st0, dword [edi+0x4]}
                                    unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                                    unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                                    is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                        unimplemented  {fcomp st0, st1})
                                    unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                                    unimplemented  {fcomp st0, st1}
                                    bool p_2 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_2)
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fstp st0, st0}
                                    else
                                        unimplemented  {fsub st0, dword [edi+0x4]}
                                        arg1[6] = ecx_33 + 1
                                        *arg1 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                                        unimplemented  {fstp dword [edi], st0}
                                        unimplemented  {fld st0, dword [edi+0x4]}
                                        unimplemented  {fmul st0, qword [0x8a5970]}
                                        arg1[1] = fconvert.s(unimplemented  {fstp dword [edi+0x4], st0})
                                        unimplemented  {fstp dword [edi+0x4], st0}
                                        sub_4d6480(ecx_12)
                                        sub_4d66f0(&var_7c)
                                    
                                    result = sub_4419b0(arg3, data_3165fc0, sub_440360, arg1[6])
                                else if (arg1[8].b == 0)
                                label_442d0a:
                                    
                                    if (arg1[0xb].b == 0)
                                    label_442dd8:
                                        
                                        if (arg1[0xe].b == 0)
                                        label_442eac:
                                            
                                            if (arg1[0x11].b == 0)
                                                unimplemented  {fldz }
                                                int32_t var_b8_39 = ecx_33
                                                float var_b8_40 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                arg1[0x11].b = 1
                                                sub_441700(arg3, data_3165fc8, var_b8_40)
                                                unimplemented  {call 0x441700}
                                                sub_4d6480(var_94)
                                                void var_4c
                                                result = sub_4d66f0(&var_4c)
                                        else
                                            if (*(arg1 + 0x39) == 0)
                                                unimplemented  {fldz }
                                                float edx_24 = data_3165fcc
                                                int32_t var_b8_33 = ecx_33
                                                float var_b8_34 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                *(arg1 + 0x39) = 1
                                                sub_4412f0(arg3, edx_24, var_b8_34)
                                                unimplemented  {call 0x4412f0}
                                                unimplemented  {fldz }
                                                *arg1 =
                                                    fconvert.s(unimplemented  {fstp dword [edi], st0})
                                                unimplemented  {fstp dword [edi], st0}
                                                unimplemented  {fld st0, dword [0x8a5664]}
                                                arg1[1] = fconvert.s(unimplemented  {fstp dword [edi
                                                    +0x4], st0})
                                                unimplemented  {fstp dword [edi+0x4], st0}
                                                sub_4d6480(eax_42)
                                                ecx_33, edx_18 = sub_4d66f0(&var_7c)
                                            
                                            unimplemented  {fld1 }
                                            int32_t var_b8_36 = ecx_33
                                            float var_b8_37 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            result = sub_4faeb0(data_3165fcc, edx_18, var_a8, var_b8_37)
                                            
                                            if (result != 0)
                                                ecx_33 = arg1[0xf]
                                                
                                                if (ecx_33 s>= arg1[0x10])
                                                    goto label_442eac
                                                
                                                unimplemented  {fld st0, dword [edi]}
                                                unimplemented  {fadd dword [esp+0x18]}
                                                float var_a4_6 = fconvert.s(unimplemented  {fstp dword [
                                                    esp+0x10], st0})
                                                unimplemented  {fstp dword [esp+0x10], st0}
                                                unimplemented  {fld st0, dword [esp+0x10]}
                                                *arg1 =
                                                    fconvert.s(unimplemented  {fst dword [edi], st0})
                                                unimplemented  {fld st0, dword [edi+0x4]}
                                                unimplemented  {fcomp st0, st1}
                                                    f- unimplemented  {fcomp st0, st1}
                                                unimplemented  {fcomp st0, st1}
                                                    f< unimplemented  {fcomp st0, st1}
                                                is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                                    unimplemented  {fcomp st0, st1})
                                                unimplemented  {fcomp st0, st1}
                                                    f== unimplemented  {fcomp st0, st1}
                                                unimplemented  {fcomp st0, st1}
                                                bool p_5 = unimplemented  {test ah, 0x5}
                                                
                                                if (p_5)
                                                    unimplemented  {fstp st0, st0}
                                                    unimplemented  {fstp st0, st0}
                                                else
                                                    unimplemented  {fsub st0, dword [edi+0x4]}
                                                    arg1[0xf] = ecx_33 + 1
                                                    *arg1 = fconvert.s(unimplemented  {fstp dword [edi]
                                                        , st0})
                                                    unimplemented  {fstp dword [edi], st0}
                                                    unimplemented  {fld st0, dword [edi+0x4]}
                                                    unimplemented  {fmul st0, qword [0x8a5970]}
                                                    arg1[1] = fconvert.s(unimplemented  {fstp dword [edi
                                                        +0x4], st0})
                                                    unimplemented  {fstp dword [edi+0x4], st0}
                                                    sub_4d6980()
                                                
                                                result = sub_4419b0(arg3, data_3165fb4, sub_440390, 
                                                    arg1[0xf])
                                    else
                                        if (*(arg1 + 0x2d) == 0)
                                            unimplemented  {fldz }
                                            float edx_22 = data_3165fd0
                                            int32_t var_b8_27 = ecx_33
                                            float var_b8_28 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            *(arg1 + 0x2d) = 1
                                            sub_441050(arg3, edx_22, var_b8_28)
                                            unimplemented  {call 0x441050}
                                            unimplemented  {fldz }
                                            *arg1 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                                            unimplemented  {fstp dword [edi], st0}
                                            sub_4d6480(eax_42)
                                            ecx_33, edx_18 = sub_4d66f0(&var_7c)
                                        
                                        unimplemented  {fld1 }
                                        int32_t var_b8_30 = ecx_33
                                        float var_b8_31 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        result, edx_18 =
                                            sub_4faeb0(data_3165fd0, edx_18, var_a8, var_b8_31)
                                        
                                        if (result != 0)
                                            ecx_33 = arg1[0xc]
                                            
                                            if (ecx_33 s>= arg1[0xd])
                                                goto label_442dd8
                                            
                                            unimplemented  {fld st0, dword [edi]}
                                            unimplemented  {fadd dword [esp+0x18]}
                                            float var_a4_5 =
                                                fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                                            unimplemented  {fstp dword [esp+0x10], st0}
                                            unimplemented  {fld st0, dword [esp+0x10]}
                                            *arg1 = fconvert.s(unimplemented  {fst dword [edi], st0})
                                            unimplemented  {fld st0, dword [edi+0x4]}
                                            unimplemented  {fcomp st0, st1}
                                                f- unimplemented  {fcomp st0, st1}
                                            unimplemented  {fcomp st0, st1}
                                                f< unimplemented  {fcomp st0, st1}
                                            is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                                unimplemented  {fcomp st0, st1})
                                            unimplemented  {fcomp st0, st1}
                                                f== unimplemented  {fcomp st0, st1}
                                            unimplemented  {fcomp st0, st1}
                                            bool p_4 = unimplemented  {test ah, 0x5}
                                            
                                            if (p_4)
                                                unimplemented  {fstp st0, st0}
                                                unimplemented  {fstp st0, st0}
                                            else
                                                unimplemented  {fsub st0, dword [edi+0x4]}
                                                arg1[0xc] = ecx_33 + 1
                                                *arg1 =
                                                    fconvert.s(unimplemented  {fstp dword [edi], st0})
                                                unimplemented  {fstp dword [edi], st0}
                                                unimplemented  {fld st0, dword [edi+0x4]}
                                                unimplemented  {fmul st0, qword [0x8a5970]}
                                                arg1[1] = fconvert.s(unimplemented  {fstp dword [edi
                                                    +0x4], st0})
                                                unimplemented  {fstp dword [edi+0x4], st0}
                                                sub_4d6980()
                                            
                                            result =
                                                sub_4419b0(arg3, data_3165fb8, sub_440380, arg1[0xc])
                                else
                                    if (*(arg1 + 0x21) == 0)
                                        unimplemented  {fldz }
                                        int32_t var_b8_20 = ecx_33
                                        float var_b8_21 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        float ecx_37 = data_3165fd4
                                        *(arg1 + 0x21) = 1
                                        sub_441050(arg3, ecx_37, var_b8_21)
                                        unimplemented  {call 0x441050}
                                        unimplemented  {fldz }
                                        *arg1 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                                        unimplemented  {fstp dword [edi], st0}
                                        sub_4d6480(eax_42)
                                        ecx_33, edx_18 = sub_4d66f0(&var_7c)
                                    
                                    unimplemented  {fld1 }
                                    int32_t var_b8_23 = ecx_33
                                    float var_b8_24 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    result, edx_18 = sub_4faeb0(data_3165fd4, edx_18, var_a8, var_b8_24)
                                    
                                    if (result != 0)
                                        ecx_33 = arg1[9]
                                        
                                        if (ecx_33 s>= arg1[0xa])
                                            goto label_442d0a
                                        
                                        unimplemented  {fld st0, dword [edi]}
                                        unimplemented  {fadd dword [esp+0x18]}
                                        float var_a4_4 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                                        unimplemented  {fstp dword [esp+0x10], st0}
                                        unimplemented  {fld st0, dword [esp+0x10]}
                                        *arg1 = fconvert.s(unimplemented  {fst dword [edi], st0})
                                        unimplemented  {fld st0, dword [edi+0x4]}
                                        unimplemented  {fcomp st0, st1}
                                            f- unimplemented  {fcomp st0, st1}
                                        unimplemented  {fcomp st0, st1}
                                            f< unimplemented  {fcomp st0, st1}
                                        is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                            unimplemented  {fcomp st0, st1})
                                        unimplemented  {fcomp st0, st1}
                                            f== unimplemented  {fcomp st0, st1}
                                        unimplemented  {fcomp st0, st1}
                                        bool p_3 = unimplemented  {test ah, 0x5}
                                        
                                        if (p_3)
                                            unimplemented  {fstp st0, st0}
                                            unimplemented  {fstp st0, st0}
                                        else
                                            unimplemented  {fsub st0, dword [edi+0x4]}
                                            arg1[9] = ecx_33 + 1
                                            *arg1 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                                            unimplemented  {fstp dword [edi], st0}
                                            unimplemented  {fld st0, dword [edi+0x4]}
                                            unimplemented  {fmul st0, qword [0x8a5970]}
                                            arg1[1] =
                                                fconvert.s(unimplemented  {fstp dword [edi+0x4], st0})
                                            unimplemented  {fstp dword [edi+0x4], st0}
                                            sub_4d6480(ecx_12)
                                            sub_4d66f0(&var_7c)
                                        
                                        result = sub_4419b0(arg3, data_3165fbc, sub_440370, arg1[9])
                        else
                            unimplemented  {fld st0, dword [edi]}
                            unimplemented  {fadd dword [esp+0x18]}
                            float var_a4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                            unimplemented  {fstp dword [esp+0x10], st0}
                            unimplemented  {fld st0, dword [esp+0x10]}
                            *arg1 = fconvert.s(unimplemented  {fst dword [edi], st0})
                            unimplemented  {fld st0, dword [edi+0x4]}
                            unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                            is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                unimplemented  {fcomp st0, st1})
                            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                            unimplemented  {fcomp st0, st1}
                            bool p_1 = unimplemented  {test ah, 0x5}
                            
                            if (p_1)
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                            else
                                unimplemented  {fsub st0, dword [edi+0x4]}
                                arg1[3] = ecx_26 + 1
                                *arg1 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                                unimplemented  {fstp dword [edi], st0}
                                unimplemented  {fld st0, dword [edi+0x4]}
                                unimplemented  {fmul st0, qword [0x8a5970]}
                                arg1[1] = fconvert.s(unimplemented  {fstp dword [edi+0x4], st0})
                                unimplemented  {fstp dword [edi+0x4], st0}
                                sub_4d6480(ecx_12)
                                sub_4d66f0(&var_7c)
                            
                            result = sub_4419b0(arg3, data_3165fc4, sub_440330, arg1[3])
            
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_5a6aba(eax_2 ^ &var_a8)
            return result
        
        int32_t ebx_1 = data_3165fe8
        int32_t var_90_1 = var_a0
        var_94 = nullptr
        void* eax_10
        int32_t ecx_2
        eax_10, ecx_2 = sub_4fc3d0(&data_be1cb8, arg3)
        
        if (ebx_1 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_1 = *(eax_10 + (ebx_1 << 2) + 0x30)
        int128_t* eax_11
        
        if (edx_1 != 0)
            eax_11 = sub_4fc1e0(ecx_2, edx_1)
        else
            eax_11 = sub_4fc0d0()
            *(eax_11 + 4) = &data_83f3d3
            edx_1 = *(eax_11 + 0x1bc)
            *(eax_10 + (ebx_1 << 2) + 0x30) = edx_1
        
        char* esi_3 = *(eax_10 + 4)
        bool cond:0_1 = *(esi_3 + 4) != 0x1e
        var_a8 = eax_11
        
        if (cond:0_1)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_3 == 0)
            sub_520800(eax_11, edx_1.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        int32_t esi_4 = *(sub_4f7720(&var_94, ebx_1 * 0x118 + ***esi_3, var_a8) + 0x434)
        int32_t ebx_4 = data_3165fe4
        int32_t eax_16
        int32_t ecx_6
        eax_16, ecx_6 = sub_4fc3d0(&data_be1cb8, esi_4)
        
        if (ebx_4 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edx = *(eax_16 + (ebx_4 << 2) + 0x30)
        int128_t* eax_17
        
        if (edx != 0)
            eax_17, ecx = sub_4fc1e0(ecx_6, edx)
        else
            eax_17, ecx = sub_4fc0d0()
            *(eax_17 + 4) = &data_83f3d3
            edx = *(eax_17 + 0x1bc)
            *(eax_16 + (ebx_4 << 2) + 0x30) = edx
        
        var_a0 += 1
        *(eax_17 + 0x21) = 1
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

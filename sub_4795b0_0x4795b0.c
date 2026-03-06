// 函数名称: sub_4795b0
// 虚拟地址: 0x4795b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4795b0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, int32_t arg5, int32_t* arg6, float arg7, void* arg8, char arg9, char arg10)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69287b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_e0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = arg5
    void* i_1 = arg4
    int32_t* edi = arg3
    void* i_4 = i_1
    int32_t* var_7c = edi
    
    if (edi[7] != 0 || arg9 != 0)
        int32_t* ecx = arg6
        
        if (ecx s< 0xc || ecx s> 0xe)
            arg6 = 0xc
            ecx = 0xc
        
        float edx = arg7
        edi[1] = edx
        *edi = ecx
        float var_ec
        int16_t top
        
        if (edx == 1)
            void var_a0
            sub_4794c0(ecx, &var_a0)
            int32_t ebx_1 = 0
            
            while (true)
                bool cond:1_1
                
                if (ebx_1 != 0)
                    if (ebx_1 == 1)
                        cond:1_1 = *(esi + 0x64) == 0
                        goto label_47964b
                    
                label_479651:
                    int32_t* esi_1 = edi[ebx_1 + 8]
                    
                    if (esi_1 != 0 && esi_1[1] != *(&var_a0 + (ebx_1 << 2)))
                        sub_4d4a50(esi_1)
                        edi[ebx_1 + 8] = 0
                    
                    if (edi[ebx_1 + 8] == 0)
                        int32_t* eax_3 = *(&var_a0 + (ebx_1 << 2))
                        
                        if (eax_3 == 0)
                            char const* const var_e4_6 = "PlayerModelInit"
                            int32_t var_e8_3 = 0x5f9
                            var_ec = "..\code\RftGVR.cpp"
                            sub_4c5870("assetHands[i] != NULL", &data_83f3d3, var_ec, var_e8_3, 
                                var_e4_6)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        char** eax_4 = sub_4d4870(eax_3)
                        edi[ebx_1 + 8] = eax_4
                        char const* const var_90_1 = "handL_open"
                        
                        if (ebx_1 != 0)
                            var_90_1 = "handR_open"
                        
                        int32_t* eax_5 = eax_4[1]
                        char const* const var_e4_2 = var_90_1
                        int32_t eax_6
                        float ecx_1
                        eax_6, ecx_1 = sub_516fb0(eax_5, var_90_1)
                        
                        if (eax_6 != 0xffffffff)
                            unimplemented  {fld st0, dword [0x873c70]}
                            float var_e4_4 = ecx_1
                            float var_e4_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_e8_2 = 0
                            unimplemented  {fldz }
                            var_ec = ecx_1
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            sub_516bc0(eax_4, eax_5, eax_6, 0, var_ec, var_e8_2, var_e4_5)
                            top -= 1
                            unimplemented  {call 0x516bc0}
                        else
                            char const* const var_e4_3 = var_90_1
                            sub_4c5680("can't find anim clip: %s")
                else
                    cond:1_1 = *(esi + 0x44) == ebx_1
                label_47964b:
                    
                    if (not(cond:1_1))
                        goto label_479651
                ebx_1 += 1
                
                if (ebx_1 s>= 2)
                    break
                
                esi = arg5
            
            edx = arg7
        
        char var_7d_1
        
        if (edi[8] != 0 || edi[9] != 0)
            var_7d_1 = 1
            ecx.b = 1
        else
            ecx.b = 0
            var_7d_1 = 0
        
        int32_t eax_9 = *edi
        int32_t* ebx_2
        
        if (eax_9 == 0xc)
            ebx_2 = data_307c7d0
            
            if (ecx.b == 0)
                edi[3] = data_307c7d4
            else
                edi[3] = data_307c7d8
        else if (eax_9 == 0xd)
            ebx_2 = data_307c7a8
            
            if (ecx.b == 0)
                edi[3] = data_307c7ac
            else
                edi[3] = data_307c7b0
        else
            ebx_2 = data_307c7bc
            
            if (ecx.b == 0)
                edi[3] = data_307c7c0
            else
                edi[3] = data_307c7c4
        
        int32_t* var_84_1 = ebx_2
        
        if (edx == 1)
            int32_t* edx_3 = edi[3]
            var_84_1 = edx_3
            ebx_2 = edx_3
        
        int32_t* esi_3 = edi[7]
        float var_cc
        int32_t var_b8
        int32_t var_b4
        int32_t var_b0
        char* edx_4
        int32_t* edx_5
        
        if (esi_3 != 0)
            if (arg7 == 1 && esi_3[1] != ebx_2)
                sub_4d4a50(esi_3)
                
                if (edi[0xa] != 0)
                    sub_4e7bb0()
                    ebx_2 = var_84_1
                    edi[0xa] = 0
                
                if (ebx_2 != 0)
                    char** eax_21
                    eax_21, edx_4 = sub_4d4870(ebx_2)
                    edi[7] = eax_21
                    edi[6] = 1
                    edi[4] = 0
                    goto label_4798f5
                
                char const* const var_e4_11 = "PlayerModelInit"
                int32_t var_e8_6 = 0x62d
                var_ec = "..\code\RftGVR.cpp"
                sub_4c5870("asset != NULL", &data_83f3d3, var_ec, var_e8_6, var_e4_11)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edx_5 = edi[5]
            int32_t eax_28
            
            if (edx_5 == arg8 && (ebx_2 != esi_3[1] || arg9 == 0))
                eax_28 = edi[4]
            
            if (edx_5 != arg8 ||
                    ((ebx_2 != esi_3[1] || arg9 == 0) && (eax_28 == 1 || eax_28 == 4 || eax_28 == 5)))
                if (arg7 == 1 && arg9 != 0)
                    if (arg10 != 0)
                        char const* const var_e4_21 = "PlayerModelInit"
                        int32_t var_e8_11 = 0x655
                        var_ec = "..\code\RftGVR.cpp"
                        sub_4c5870("ai == false", &data_83f3d3, var_ec, var_e8_11, var_e4_21)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    unimplemented  {fld st0, dword [0x873c70]}
                    float var_e4_22 = arg7
                    float var_e4_23 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_e8_12 = 0
                    unimplemented  {fld st0, dword [0x8a5664]}
                    var_ec = arg7
                    var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    edi[4] = 1
                    int32_t eax_30
                    eax_30, edx_5 = sub_517050(esi_3[1], esi_3, 1, var_ec, var_e8_12, var_e4_23)
                    var_7c[0x19] = eax_30
                    edi = var_7c
                    goto label_479bbb
                
                if (edi[4] == 3)
                    goto label_479bbe
                
                edi[4] = 3
                char* edx_8 = sub_517120(esi_3)
                void* edi_3 = edi[7]
                int32_t* esi_8 = *(edi_3 + 4)
                char const* const var_e4_25 = "despawn"
                int32_t eax_32
                float ecx_12
                eax_32, ecx_12 = sub_516fb0(esi_8, edx_8)
                
                if (eax_32 != 0xffffffff)
                    unimplemented  {fld st0, dword [0x873c70]}
                    float var_e4_27 = ecx_12
                    float var_e4_28 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_e8_14 = 1
                    unimplemented  {fldz }
                    var_ec = ecx_12
                    var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_516bc0(edi_3, esi_8, eax_32, 0, var_ec, var_e8_14, var_e4_28)
                    top -= 1
                    unimplemented  {call 0x516bc0}
                else
                    char const* const var_e4_26 = "despawn"
                    sub_4c5680("can't find anim clip: %s")
                
                int32_t* eax_33 = data_307c890
                __builtin_memcpy(&var_cc, i_4, 0x20)
                unimplemented  {fld st0, dword [ebp-0xc8]}
                unimplemented  {fmul st0, qword [0x8a5518]}
                var_cc = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                unimplemented  {fstp dword [ebp-0xc8], st0}
                var_7c[0x27] = *(sub_4eb180(eax_33, &var_cc) + 0x78)
                sub_4d6480(data_307ca94)
                int32_t var_30_1 = var_b8
                char var_32_1 = 1
                int32_t var_2c_1 = var_b4
                int32_t var_28_1 = var_b0
                void var_48
                var_ec = &var_48
            label_479bb0:
                edx_5 = sub_4d66f0(var_ec)
                edi = var_7c
            label_479bbb:
                ebx_2 = var_84_1
                goto label_479bbe
            
            i_1 = edi[4]
            
            if (i_1 != 1 && i_1 != 4)
                goto label_479bbe
        else
            if (ebx_2 == 0)
                char const* const var_e4_7 = "PlayerModelInit"
                int32_t var_e8_4 = 0x617
                var_ec = "..\code\RftGVR.cpp"
                sub_4c5870("asset != NULL", &data_83f3d3, var_ec, var_e8_4, var_e4_7)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char** eax_16
            eax_16, edx_4 = sub_4d4870(ebx_2)
            edi[7] = eax_16
            edi[6] = 1
            edi[4] = 0
            
            if (arg7 == 0)
                edi[4] = 2
                int32_t* edi_1 = eax_16[1]
                char const* const var_e4_9 = "spawn"
                int32_t eax_18
                float ecx_4
                eax_18, ecx_4 = sub_516fb0(edi_1, edx_4)
                
                if (eax_18 != 0xffffffff)
                    unimplemented  {fld st0, dword [0x873c70]}
                    float var_e4_14 = ecx_4
                    float var_e4_15 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_e8_7 = 1
                    unimplemented  {fldz }
                    var_ec = ecx_4
                    var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_516bc0(eax_16, edi_1, eax_18, 0, var_ec, var_e8_7, var_e4_15)
                    top -= 1
                    unimplemented  {call 0x516bc0}
                else
                    char const* const var_e4_10 = "spawn"
                    sub_4c5680("can't find anim clip: %s")
                
                __builtin_memcpy(&var_cc, i_4, 0x20)
                unimplemented  {fld st0, dword [ebp-0xc8]}
                unimplemented  {fmul st0, qword [0x8a5518]}
                var_cc = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                unimplemented  {fstp dword [ebp-0xc8], st0}
                int32_t eax_23 = *(sub_4eb180(data_307c8b4, &var_cc) + 0x78)
                int32_t* ecx_7 = data_307ca90
                var_7c[0x26] = eax_23
                sub_4d6480(ecx_7)
                int32_t var_60_1 = var_b8
                char var_62_1 = 1
                int32_t var_5c_1 = var_b4
                int32_t var_58_1 = var_b0
                void var_78
                var_ec = &var_78
                goto label_479bb0
            
        label_4798f5:
            
            if (arg10 == 0)
                void* esi_6 = edi[7]
                edi[4] = 1
                int32_t* eax_25 = *(esi_6 + 4)
                char const* const var_e4_17 = "idle1"
                int32_t eax_26
                float ecx_9
                eax_26, ecx_9 = sub_516fb0(eax_25, edx_4)
                
                if (eax_26 != 0xffffffff)
                    unimplemented  {fld st0, dword [0x873c70]}
                    float var_e4_19 = ecx_9
                    float var_e4_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_e8_10 = 0
                    unimplemented  {fld st0, dword [0x8a5664]}
                    var_ec = ecx_9
                    var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t eax_27
                    eax_27, edx_5 = sub_516bc0(esi_6, eax_25, eax_26, 1, var_ec, var_e8_10, var_e4_20)
                    top -= 1
                    unimplemented  {call 0x516bc0}
                    edi[0x19] = eax_27
                else
                    char const* const var_e4_18 = "idle1"
                    edx_5 = sub_4c5680("can't find anim clip: %s")
                    edi[0x19] = 0
                
                goto label_479bbe
            
            edx_5 = sub_478430(edi)
        label_479bbe:
            bool cond:3_1 = edi[4] != 3
            i_1 = arg8
            int32_t* ecx_16 = arg6
            edi[5] = i_1
            *edi = ecx_16
            
            if (cond:3_1)
            label_479d15:
                
                if (edi[4] != 2)
                    goto label_479d4a
                
                i_1, edx_5 = sub_516ab0(edi[7])
                unimplemented  {call 0x516ab0}
                
                if (i_1 == 0 || *(i_1 + 0x1c) != 1)
                    goto label_479d4a
                
                unimplemented  {fld st0, dword [eax+0x4]}
                unimplemented  {fld1 }
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                i_1.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_479d4a
                
                if (arg10 == 0)
                    unimplemented  {fld st0, dword [0x873c70]}
                    void* eax_46 = edi[7]
                    int32_t* var_e4_37 = ecx_16
                    float var_e4_38 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_e8_20 = 0
                    unimplemented  {fldz }
                    var_ec = ecx_16
                    var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    edi[4] = 1
                    i_1 = sub_517050(*(eax_46 + 4), eax_46, 0, var_ec, var_e8_20, var_e4_38)
                    edx_5 = var_7c
                    ebx_2 = var_84_1
                    edx_5[0x19] = i_1
                    edi = edx_5
                else
                    i_1, edx_5 = sub_478430(edi)
                label_479d4a:
                    
                    if (arg10 != 0 && edi[4] == 1)
                        i_1, edx_5 = sub_516ab0(edi[7])
                        unimplemented  {call 0x516ab0}
                        
                        if (i_1 != 0 && *(i_1 + 0x1c) == 1)
                            unimplemented  {fld st0, dword [eax+0x4]}
                            unimplemented  {fld1 }
                            unimplemented  {fucompp } f- unimplemented  {fucompp }
                            bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                            bool c2_3 =
                                is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                            bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            i_1.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                                | (top & 7) << 0xb
                            bool p_3 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_3))
                                i_1, edx_5 = sub_478430(edi)
                
                if (edi[4] == 1 && arg10 == 0)
                    if (ebx_2 == data_307c7a8)
                        if (edi[0xa] != 0)
                            char const* const var_e4_36 = "PlayerModelInit"
                            int32_t var_e8_19 = 0x6b8
                            var_ec = "..\code\RftGVR.cpp"
                            sub_4c5870("model.avatarTalkFlanim == NULL", &data_83f3d3, var_ec, 
                                var_e8_19, var_e4_36)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t* eax_48 = sub_4e7ab0(data_307c800)
                        unimplemented  {fld st0, dword [0x841328]}
                        float var_e4_40 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t var_e8_21 = 0
                        edi[0xa] = eax_48
                        i_1, edx_5 = sub_4e8720(eax_48, var_e8_21, var_e4_40)
                        unimplemented  {call 0x4e8720}
                        ebx_2 = var_84_1
                    
                    if (edi[6] == 1)
                        edi[6] = 2
                        void* var_9c
                        
                        if (data_315fee8 == 0)
                            int32_t var_8c = 0
                            int32_t var_90_2 = 0
                            int32_t i_2 = 0x315fda0
                            int32_t i
                            
                            do
                                edx_5.b = var_7d_1
                                void**** eax_51 = sub_477bb0(var_8c + 0xc, edx_5.b, &var_9c)
                                void**** var_a4_1 = eax_51
                                int32_t ebx_7 = 0
                                char const (** var_98_1)[0x9] = &data_bebf30
                                
                                while (true)
                                    char const (* edx_10)[0x9] = *var_98_1
                                    char* var_88_3 = edx_10
                                    char** esi_15
                                    
                                    if (eax_51 != 0)
                                        if (eax_51[1] != 2)
                                            char const* const var_e4_49 = "DefAutoLock::DefAutoLock"
                                            int32_t var_e8_25 = 0x19
                                            var_ec = "C:\ax2010\Engine\DefLoad.h"
                                            sub_4c5870("assetPtr && assetPtr->assetType == assetType", 
                                                &data_83f3d3, var_ec, var_e8_25, var_e4_49)
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        esi_15 = var_a4_1
                                    else
                                        char** eax_52
                                        eax_52, edx_10 = sub_50a390(eax_51 + 2)
                                        esi_15 = eax_52
                                    
                                    if (*esi_15 == 0)
                                        char var_e4_41 = 1
                                        int32_t var_e8_22 = 0
                                        var_ec = esi_15
                                        edx_10 = sub_5094d0(var_ec, var_e8_22, var_e4_41)
                                    
                                    esi_15[7] = &esi_15[7][1]
                                    void** eax_54 = **esi_15
                                    int32_t eax_55 = sub_4d5560(eax_54, edx_10, *eax_54, var_88_3)
                                    esi_15[7] -= 1
                                    var_98_1 = &var_98_1[1]
                                    int32_t edx_12 = var_90_2 + ebx_7
                                    ebx_7 += 1
                                    *((edx_12 << 2) + &data_315fd68) = eax_55
                                    
                                    if (ebx_7 s>= 0xe)
                                        break
                                    
                                    eax_51 = var_a4_1
                                
                                (&data_315fee8)[var_8c] = i_2 - 0x38
                                *((var_8c << 2) + &data_315fef4) = i_2
                                *((var_8c << 2) + &data_315ff00) = 0xe
                                *((var_8c << 2) + &data_315ff0c) = 0xe
                                *((var_8c << 2) + &data_315ff18) = 0x1c
                                char const (** j_1)[0x9] = &data_bebf68
                                void* var_88_4 = ((var_90_2 + ebx_7) << 2) + &data_315fd68
                                void* j
                                
                                do
                                    var_9c = *j_1
                                    void**** esi_18
                                    
                                    if (var_a4_1 != 0)
                                        if (var_a4_1[1] != 2)
                                            char const* const var_e4_51 = "DefAutoLock::DefAutoLock"
                                            int32_t var_e8_27 = 0x19
                                            var_ec = "C:\ax2010\Engine\DefLoad.h"
                                            sub_4c5870("assetPtr && assetPtr->assetType == assetType", 
                                                &data_83f3d3, var_ec, var_e8_27, var_e4_51)
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        esi_18 = var_a4_1
                                    else
                                        char* var_ac
                                        sub_509d90(var_a4_1, "!Null\Null", var_a4_1 + 2, &var_ac)
                                        int32_t var_8_1 = 0
                                        char* edx_15 = var_ac
                                        
                                        if (edx_15 == 0)
                                            edx_15 = &data_83f3d3
                                        
                                        void**** eax_61 = sub_509140(2, edx_15)
                                        int32_t var_8_2 = 0xffffffff
                                        char* eax_62 = var_ac
                                        
                                        if (eax_62 != 0 && *eax_62 != 0)
                                            if (*(eax_62 - 0x10) != 0xfafafafa)
                                                char const* const var_e4_50 =
                                                    "XStringMagicDataStructFromCharPtr"
                                                int32_t var_e8_26 = 0x20
                                                var_ec = "xString.cpp"
                                                sub_4c5870(
                                                    "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                                    &data_83f3d3, var_ec, var_e8_26, var_e4_50)
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            int32_t temp2_1 = *(eax_62 - 0xc)
                                            *(eax_62 - 0xc) -= 1
                                            
                                            if (temp2_1 == 1)
                                                int32_t esi_17 = *(eax_62 - 4) + 0x10
                                                sub_4f4430(&eax_62[0xfffffff0], sub_4f4380(esi_17), 
                                                    esi_17)
                                                edi = var_7c
                                        
                                        esi_18 = eax_61
                                    
                                    if (*esi_18 == 0)
                                        char var_e4_45 = 1
                                        int32_t var_e8_23 = 0
                                        var_ec = esi_18
                                        sub_5094d0(var_ec, var_e8_23, var_e4_45)
                                    
                                    esi_18[7] += 1
                                    void*** edx_16 = *esi_18
                                    void** eax_65 = *edx_16
                                    int32_t eax_66
                                    eax_66, edx_5 = sub_4d5560(eax_65, edx_16, *eax_65, var_9c)
                                    esi_18[7] -= 1
                                    *var_88_4 = eax_66
                                    j = &j_1[1]
                                    var_88_4 += 4
                                    j_1 = j
                                while (j s< &data_bebfa0)
                                var_8c += 1
                                var_90_2 += 0x20
                                i = i_2 + 0x80
                                i_2 = i
                            while (i s< 0x315ff20)
                            ebx_2 = var_84_1
                        
                        void* esi_19 = edi[7]
                        char const* const var_e4_47 = "head_rotZ"
                        int32_t eax_70
                        float ecx_30
                        eax_70, ecx_30 = sub_516fb0(ebx_2, edx_5)
                        int32_t eax_71
                        char* edx_17
                        
                        if (eax_70 != 0xffffffff)
                            unimplemented  {fld st0, dword [0x873c70]}
                            float var_e4_52 = ecx_30
                            float var_e4_53 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_e8_28 = 2
                            unimplemented  {fldz }
                            var_ec = ecx_30
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            eax_71, edx_17 =
                                sub_516bc0(esi_19, ebx_2, eax_70, 2, var_ec, var_e8_28, var_e4_53)
                            top -= 1
                            unimplemented  {call 0x516bc0}
                        else
                            char const* const var_e4_48 = "head_rotZ"
                            edx_17 = sub_4c5680("can't find anim clip: %s")
                            eax_71 = 0
                        
                        void* esi_20 = edi[7]
                        edi[0x12] = eax_71
                        char const* const var_e4_54 = "head_rotX"
                        int32_t eax_76
                        float ecx_31
                        eax_76, ecx_31 = sub_516fb0(ebx_2, edx_17)
                        int32_t eax_77
                        char* edx_18
                        
                        if (eax_76 != 0xffffffff)
                            unimplemented  {fld st0, dword [0x873c70]}
                            float var_e4_56 = ecx_31
                            float var_e4_57 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_e8_30 = 2
                            unimplemented  {fldz }
                            var_ec = ecx_31
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            eax_77, edx_18 =
                                sub_516bc0(esi_20, ebx_2, eax_76, 2, var_ec, var_e8_30, var_e4_57)
                            top -= 1
                            unimplemented  {call 0x516bc0}
                        else
                            char const* const var_e4_55 = "head_rotX"
                            edx_18 = sub_4c5680("can't find anim clip: %s")
                            eax_77 = 0
                        
                        void* esi_21 = edi[7]
                        edi[0x13] = eax_77
                        char const* const var_e4_58 = "head_rotY"
                        int32_t eax_79
                        float ecx_32
                        eax_79, ecx_32 = sub_516fb0(ebx_2, edx_18)
                        int32_t eax_80
                        char* edx_19
                        
                        if (eax_79 != 0xffffffff)
                            unimplemented  {fld st0, dword [0x873c70]}
                            float var_e4_60 = ecx_32
                            float var_e4_61 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_e8_32 = 2
                            unimplemented  {fldz }
                            var_ec = ecx_32
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            eax_80, edx_19 =
                                sub_516bc0(esi_21, ebx_2, eax_79, 2, var_ec, var_e8_32, var_e4_61)
                            top -= 1
                            unimplemented  {call 0x516bc0}
                        else
                            char const* const var_e4_59 = "head_rotY"
                            edx_19 = sub_4c5680("can't find anim clip: %s")
                            eax_80 = 0
                        
                        void* esi_22 = edi[7]
                        edi[0x14] = eax_80
                        char const* const var_e4_62 = "head_transX"
                        int32_t eax_82
                        float ecx_33
                        eax_82, ecx_33 = sub_516fb0(ebx_2, edx_19)
                        int32_t eax_83
                        char* edx_20
                        
                        if (eax_82 != 0xffffffff)
                            unimplemented  {fld st0, dword [0x873c70]}
                            float var_e4_64 = ecx_33
                            float var_e4_65 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_e8_34 = 2
                            unimplemented  {fldz }
                            var_ec = ecx_33
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            eax_83, edx_20 =
                                sub_516bc0(esi_22, ebx_2, eax_82, 2, var_ec, var_e8_34, var_e4_65)
                            top -= 1
                            unimplemented  {call 0x516bc0}
                        else
                            char const* const var_e4_63 = "head_transX"
                            edx_20 = sub_4c5680("can't find anim clip: %s")
                            eax_83 = 0
                        
                        void* esi_23 = edi[7]
                        edi[0x15] = eax_83
                        char const* const var_e4_66 = "head_transY"
                        int32_t eax_85
                        float ecx_34
                        eax_85, ecx_34 = sub_516fb0(ebx_2, edx_20)
                        int32_t eax_86
                        float ecx_35
                        
                        if (eax_85 != 0xffffffff)
                            unimplemented  {fld st0, dword [0x873c70]}
                            float var_e4_68 = ecx_34
                            float var_e4_69 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_e8_36 = 2
                            unimplemented  {fldz }
                            var_ec = ecx_34
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            eax_86, ecx_35 =
                                sub_516bc0(esi_23, ebx_2, eax_85, 2, var_ec, var_e8_36, var_e4_69)
                            top -= 1
                            unimplemented  {call 0x516bc0}
                        else
                            char const* const var_e4_67 = "head_transY"
                            ecx_35 = sub_4c5680("can't find anim clip: %s")
                            eax_86 = 0
                        
                        edi[0x16] = eax_86
                        
                        if (arg6 == 0xd)
                            if (arg7 != 0)
                                goto label_47a346
                            
                            goto label_47a2f8
                        
                        if (arg6 != 0xe || arg7 != 0)
                        label_47a346:
                            i_1 = nullptr
                            edi[0x17] = 0
                            edi[0x18] = 0
                            
                            if (arg7 == 0)
                                goto label_47a357
                        else
                        label_47a2f8:
                            unimplemented  {fldz }
                            void* edx_21 = edi[7]
                            int32_t* esi_24 = var_84_1
                            float var_e4_70 = ecx_35
                            float var_e4_71 = fconvert.s(unimplemented  {fst dword [esp], st0})
                            int32_t var_e8_37 = 2
                            var_ec = ecx_35
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_88 = sub_517050(esi_24, edx_21, 2, var_ec, var_e8_37, var_e4_71)
                            unimplemented  {fldz }
                            float var_e4_72 = fconvert.s(unimplemented  {fst dword [esp+0x10], st0})
                            int32_t var_e8_38 = 2
                            var_ec = ecx_35
                            var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            var_7c[0x17] = eax_88
                            var_7c[0x18] =
                                sub_517050(esi_24, var_7c[7], 2, var_ec, var_e8_38, var_e4_72)
                            edi = var_7c
                        label_47a357:
                            int32_t eax_91 = *edi
                            edi[0x1e] = ((eax_91 - 0xc) << 7) + &data_315fd68
                            edi[0x1f] = (&data_315fee8)[eax_91]
                            edi[0x20] = *((eax_91 << 2) + &data_315feb8)
                            edi[0x21] = *((eax_91 << 2) + &data_315fec4)
                            int32_t edx_25 = *((eax_91 << 2) + &data_315fed0)
                            void* esi_25 = &edi[0x22]
                            *esi_25 = edx_25
                            edi[0x23] = *((eax_91 << 2) + &data_315fedc)
                            int32_t eax_93 = edi[0x1f]
                            var_9c = esi_25
                            
                            if (eax_93 != 0)
                                edx_25 = sub_516af0(var_7c[0x19], eax_93, 
                                    ((eax_91 - 0xc) << 7) + &data_315fd68)
                                esi_25 = var_9c
                                edi = var_7c
                            
                            char const (** var_e4_74)[0xb] = &data_bebfac
                            int32_t eax_95
                            int32_t edx_26
                            eax_95, edx_26 = sub_517f20(edi[7], edx_25)
                            edi[0x1c] = eax_95
                            char const (** var_e4_75)[0xb] = &data_bebfa0
                            edi[0x1d] = sub_517f20(edi[7], edx_26)
                            void* i_3 = &data_8c6ae0
                            void* var_88_5 = esi_25
                            
                            do
                                void* ecx_40 = *i_3
                                void* ebx_10 = edi[7]
                                int32_t* eax_98 = *(ebx_10 + 4)
                                void* var_e4_76 = ecx_40
                                var_9c = ecx_40
                                int32_t eax_99
                                float ecx_41
                                eax_99, ecx_41 = sub_516fb0(eax_98, i_3)
                                void* eax_101
                                
                                if (eax_99 != 0xffffffff)
                                    unimplemented  {fld st0, dword [0x873c70]}
                                    float var_e4_78 = ecx_41
                                    float var_e4_79 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t var_e8_40 = 1
                                    unimplemented  {fld st0, dword [0x8a5680]}
                                    var_ec = ecx_41
                                    var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    eax_101 = sub_516bc0(ebx_10, eax_98, eax_99, 4, var_ec, var_e8_40, 
                                        var_e4_79)
                                    top -= 1
                                    unimplemented  {call 0x516bc0}
                                else
                                    void* var_e4_77 = var_9c
                                    sub_4c5680("can't find anim clip: %s")
                                    eax_101 = nullptr
                                
                                *(esi_25 - 0x20) = eax_101
                                
                                if (eax_101 != 0)
                                    sub_516af0(eax_101, *esi_25, *(esi_25 - 8))
                                    esi_25 = var_88_5
                                    edi = var_7c
                                
                                i_1 = i_3 + 4
                                *(esi_25 + 8) = 0
                                esi_25 += 4
                                i_3 = i_1
                                var_88_5 = esi_25
                            while (i_1 s< &data_8c6ae8)
            else
                i_1, edx_5 = sub_516ab0(edi[7])
                unimplemented  {call 0x516ab0}
                
                if (i_1 == 0 || *(i_1 + 0x1c) != 1)
                    goto label_479d15
                
                unimplemented  {fld st0, dword [eax+0x4]}
                unimplemented  {fld1 }
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                i_1.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    goto label_479d15
                
                int32_t* esi_10 = edi[7]
                
                if (arg9 != 0)
                    edi[4] = 2
                    sub_4d4a50(esi_10)
                    
                    if (edi[0xa] != 0)
                        sub_4e7bb0()
                        ebx_2 = var_84_1
                        edi[0xa] = 0
                    
                    if (ebx_2 == 0)
                        char const* const var_e4_30 = "PlayerModelInit"
                        int32_t var_e8_16 = 0x68a
                        var_ec = "..\code\RftGVR.cpp"
                        sub_4c5870("asset != NULL", &data_83f3d3, var_ec, var_e8_16, var_e4_30)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    char** eax_40
                    float ecx_17
                    eax_40, ecx_17 = sub_4d4870(ebx_2)
                    unimplemented  {fld st0, dword [0x873c70]}
                    float var_e4_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_e8_17 = 1
                    unimplemented  {fldz }
                    var_ec = ecx_17
                    var_ec = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    edi[7] = eax_40
                    edi[6] = 1
                    sub_517050(eax_40[1], eax_40, 0, var_ec, var_e8_17, var_e4_32)
                    int32_t* eax_41 = data_307c8b4
                    __builtin_memcpy(&var_cc, i_4, 0x20)
                    unimplemented  {fld st0, dword [ebp-0xc8]}
                    unimplemented  {fmul st0, qword [0x8a5518]}
                    var_cc = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                    unimplemented  {fstp dword [ebp-0xc8], st0}
                    int128_t* eax_42
                    eax_42, edx_5 = sub_4eb180(eax_41, &var_cc)
                    ecx_16 = var_7c
                    i_1 = *(eax_42 + 0x78)
                    ebx_2 = var_84_1
                    ecx_16[0x26] = i_1
                    edi = ecx_16
                    goto label_479d15
                
                sub_4d4a50(esi_10)
                
                if (edi[0xa] != 0)
                    sub_4e7bb0()
                    edi[0xa] = 0
                
                i_1 = nullptr
                
                if (edi[0x28] != 0)
                    edi[0x28] = 0
                
                edi[7] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return i_1
}

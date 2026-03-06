// 函数名称: sub_56cdf0
// 虚拟地址: 0x56cdf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**sub_56cdf0()
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t var_44 = 0xffffffff
    int32_t (* var_48)(void* arg1) = sub_696362
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_134
    int32_t eax_2 = __security_cookie ^ &var_134
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_2
    int32_t __saved_edi_1 = __saved_edi_2
    int32_t __saved_edi
    int32_t var_144 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* ecx
    
    if ((data_316616c & 1) == 0)
        data_316616c.d |= 1
        int32_t var_44_1 = 0
        char** eax_5
        eax_5, ecx = sub_509140(0x12, "sys/DebugFont.font")
        data_3166168 = eax_5
        int32_t var_44_2 = 0xffffffff
    
    void* eax_6 = sub_4eb5a0(ecx, data_307927c)
    float result_3
    float result_6
    
    if (eax_6 != 0)
        if (data_3079214 != 1)
            result_3 = fconvert.s(fconvert.t(*(eax_6 + 0x40)))
            float var_10c_2 = fconvert.s(fconvert.t(*(eax_6 + 0x44)))
            long double x87_r7_4 = fconvert.t(result_3)
            long double x87_r5_1 = fconvert.t(3.0)
            result_6 = fconvert.s(x87_r7_4 - x87_r5_1)
            long double x87_r5_3 = fconvert.t(var_10c_2)
            result_3 = result_6
            float var_ac_3 = fconvert.s(x87_r5_3 - x87_r5_1)
            float var_148_2 = var_ac_3
            float var_10c_3 = var_ac_3
            float var_108_2 = fconvert.s(x87_r7_4 + x87_r5_1)
            float var_104_1 = fconvert.s(x87_r5_3 + x87_r5_1)
            float var_148_3 = fconvert.s(float.t(1))
            eax_6, ecx = sub_4da250(&result_3, &data_840bcc)
        else
            long double x87_r7_1 = fconvert.t(0.100000001f)
            result_3 = fconvert.s(x87_r7_1)
            float var_10c_1 = fconvert.s(x87_r7_1)
            float var_108_1 = fconvert.s(x87_r7_1)
            result_6 = result_3
            float var_ac_1 = var_10c_1
            float var_a8_1 = var_108_1
            float* var_148_1 = &result_3
            int32_t* eax_9 = sub_4d84a0(&result_3, &result_6, &data_8409a8)
            int32_t edx_3 = eax_9[1]
            result_6 = *eax_9
            int32_t var_ac_2 = edx_3
            int32_t var_a8_2 = eax_9[2]
            int32_t var_a4_1 = eax_9[3]
            int32_t var_a0_1 = eax_9[4]
            int32_t var_9c_1 = eax_9[5]
            eax_6, ecx = sub_4dc9a0(&result_6, eax_6 + 0x2c)
    
    if (data_3079214 == 1)
        eax_6, ecx = sub_4db310()
    
    long double x87_r7_8 = fconvert.t(data_30792ac)
    long double x87_r5_6 = fconvert.t(data_8c4d34)
    x87_r5_6 - x87_r7_8
    eax_6.w = (x87_r5_6 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_6, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r5_6 == x87_r7_8 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x44}
    int32_t var_14c
    char* var_124
    float var_d4[0x9]
    
    if (p)
        var_14c = (fconvert.d(x87_r5_6 / x87_r7_8)).d
        char const* const var_150_1 = "Time dilation %g"
        sub_4c4a50(&var_124, "Time dilation %g")
        int32_t var_44_3 = 1
        char* const esi_2 = var_124
        
        if (esi_2 == 0)
            esi_2 = &data_83f3d3
        
        long double x87_r7_11 = float.t(1)
        result_6 = fconvert.s(x87_r7_11)
        long double x87_r6_5 = float.t(0)
        float var_a4_3 = fconvert.s(x87_r6_5)
        float var_98_1 = fconvert.s(x87_r6_5)
        float var_ac_4 = fconvert.s(x87_r6_5)
        float var_94_1 = fconvert.s(x87_r6_5)
        float var_a0_2 = fconvert.s(x87_r7_11)
        float var_a8_4 = fconvert.s(fconvert.t(500f))
        float var_9c_2 = fconvert.s(fconvert.t(3f))
        float var_90_1 = fconvert.s(x87_r7_11)
        sub_413350(&result_6, &var_d4, 0x840974)
        long double x87_r7_12 = float.t(1)
        result_6 = fconvert.s(x87_r7_12)
        long double x87_r6_8 = float.t(0)
        result_3 = 0f
        float var_a4_4 = fconvert.s(x87_r6_8)
        int32_t var_10c_4 = 0
        float var_98_2 = fconvert.s(x87_r6_8)
        float var_ac_5 = fconvert.s(x87_r6_8)
        float var_94_2 = fconvert.s(x87_r6_8)
        float var_a0_3 = fconvert.s(x87_r7_12)
        float var_a8_5 = fconvert.s(fconvert.t(result_3))
        float var_9c_3 = fconvert.s(fconvert.t(0f))
        float var_90_2 = fconvert.s(x87_r7_12)
        sub_413350(&result_6, &result_3, &var_d4)
        int32_t var_148_4 = 0xffffffff
        var_14c = 0xffffffff
        int80_t st0_1
        st0_1, ecx = sub_4ca330(0xffffffff, data_3166168, esi_2, &result_3, 0xffffffff, 0xffffffff)
        int32_t var_44_4 = 0xffffffff
        char* eax_15 = var_124
        
        if (eax_15 != 0 && *eax_15 != 0)
            void* eax_17 = sub_4c4060(&var_124)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_4 = *(eax_17 + 0xc) + 0x10
                int32_t var_148_5 = esi_4
                ecx = sub_4f4430(eax_17, sub_4f4380(esi_4))
    
    int32_t eax_41 = data_3079270
    char* var_120
    char* var_11c
    char* var_118
    char* var_114
    
    if (eax_41 != 0)
        if (*(eax_41 + 4) == 2)
            int32_t var_148_6 = eax_41
            sub_4e6b50(eax_41, &var_120, ecx, &var_120, eax_41)
            int32_t var_44_5 = 2
            char* eax_20 = var_120
            
            if (eax_20 == 0)
                eax_20 = &data_83f3d3
            
            char* var_148_7 = eax_20
            var_14c = &data_87d824
            sub_4c4a50(&var_11c, "%s")
            var_44_5.b = 3
            char* const eax_21 = var_11c
            
            if (eax_21 == 0)
                eax_21 = &data_83f3d3
            
            unimplemented  {fld st0, dword [0x8a57e0]}
            data_3166168
            int32_t var_148_8 = 0xffffffff
            var_14c = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            unimplemented  {fld st0, dword [0x8a53c0]}
            float var_150_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_4cad60(eax_21, var_150_5, &data_87d824, 0xffffffff)
            unimplemented  {call 0x4cad60}
            char** eax_22 = sub_4e7410(data_3079270)
            ecx = *eax_22
            
            if (ecx != 0)
                int32_t edx_12 = *(ecx + 0x40)
                
                if (edx_12 s> 0)
                    var_124 = &data_83f3d3
                    var_44_5.b = 4
                    int32_t eax_23 = data_307929c
                    char** ecx_12
                    
                    if (eax_23 == 0xffffffff)
                        char const* const var_148_11 = "not playing animation"
                        char** var_148_12 = sub_4c4a50(&var_114, "not playing animation")
                        var_44_5.b = 6
                        sub_4c4510()
                        ecx_12 = &var_114
                    else
                        if (eax_23 s>= edx_12)
                            char const* const var_148_9 = "ControlsHolodeckDrawOverlay"
                            var_14c = 0x2d5
                            char const* const var_150_6 = "Editor\EditorControls.cpp"
                            char* const var_154_3 = &data_83f3d3
                            char const* const var_158_1 = "gControlsData.structureAnimClipIndex < "
                            "defStructure->pStructureImportData->numAnimClips"
                            sub_4c5870(
                                "gControlsData.structureAnimClipIndex < "
                            "defStructure->pStructureImportData->numAnimClips", 
                                &data_83f3d3, "Editor\EditorControls.cpp", 0x2d5, 
                                "ControlsHolodeckDrawOverlay")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* esi_6 = *(ecx + 0x44) + eax_23 * 0xc
                        sub_56cd40()
                        unimplemented  {call 0x56cd40}
                        var_118 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
                        unimplemented  {fstp dword [esp+0x2c], st0}
                        unimplemented  {fld st0, dword [esp+0x2c]}
                        var_14c = (fconvert.d(unimplemented  {fstp qword [esp], st0})).d
                        unimplemented  {fstp qword [esp], st0}
                        int32_t var_150_7 = *(*eax_22 + 0x40)
                        int32_t var_154_4 = data_307929c + 1
                        int32_t var_158_2 = *(esi_6 + 4)
                        char const* const var_15c_1 = "clip %s (%d of %d) frame %f"
                        char** var_148_10 = sub_4c4a50(&var_118, "clip %s (%d of %d) frame %f")
                        var_44_5.b = 5
                        sub_4c4510()
                        ecx_12 = &var_118
                    
                    var_44_5.b = 4
                    sub_4c43d0(ecx_12)
                    char* eax_30 = var_124
                    
                    if (eax_30 == 0)
                        eax_30 = &data_83f3d3
                    
                    unimplemented  {fld st0, dword [0x8a55c8]}
                    data_3166168
                    int32_t var_148_13 = 0xffffffff
                    var_14c = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                    unimplemented  {fstp dword [esp+0x4], st0}
                    unimplemented  {fld st0, dword [0x8a53c0]}
                    float var_150_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4cad60(eax_30, var_150_8, var_14c, 0xffffffff)
                    unimplemented  {call 0x4cad60}
                    var_44_5.b = 3
                    ecx = sub_4c43d0(&var_124)
            
            var_44_5.b = 2
            char* eax_31 = var_11c
            
            if (eax_31 != 0 && *eax_31 != 0)
                void* eax_33 = sub_4c4060(&var_11c)
                int32_t temp2_1 = *(eax_33 + 4)
                *(eax_33 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_8 = *(eax_33 + 0xc) + 0x10
                    int32_t var_148_14 = esi_8
                    ecx = sub_4f4430(eax_33, sub_4f4380(esi_8))
            
            int32_t var_44_6 = 0xffffffff
            char* eax_36 = var_120
            
            if (eax_36 != 0 && *eax_36 != 0)
                void* eax_38 = sub_4c4060(&var_120)
                int32_t temp4_1 = *(eax_38 + 4)
                *(eax_38 + 4) -= 1
                
                if (temp4_1 == 1)
                    int32_t esi_10 = *(eax_38 + 0xc) + 0x10
                    int32_t var_148_15 = esi_10
                    ecx = sub_4f4430(eax_38, sub_4f4380(esi_10))
            
            eax_41 = data_3079270
        
        if (eax_41 != 0 && *(eax_41 + 4) == 0x19)
            int32_t var_148_16 = eax_41
            sub_4e6b50(eax_41, &var_11c, ecx, &var_11c, eax_41)
            int32_t var_44_7 = 7
            char* eax_42 = var_11c
            
            if (eax_42 == 0)
                eax_42 = &data_83f3d3
            
            char* var_148_17 = eax_42
            var_14c = &data_87d824
            sub_4c4a50(&var_120, "%s")
            var_44_7.b = 8
            char* eax_43 = var_120
            
            if (eax_43 == 0)
                eax_43 = &data_83f3d3
            
            unimplemented  {fld st0, dword [0x8a57e0]}
            data_3166168
            int32_t var_148_18 = 0xffffffff
            var_14c = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            unimplemented  {fld st0, dword [0x8a53c0]}
            float var_150_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            ecx = sub_4cad60(eax_43, var_150_11, &data_87d824, 0xffffffff)
            unimplemented  {call 0x4cad60}
            var_44_7.b = 7
            char* eax_44 = var_120
            
            if (eax_44 != 0 && *eax_44 != 0)
                void* eax_46 = sub_4c4060(&var_120)
                int32_t temp3_1 = *(eax_46 + 4)
                *(eax_46 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_12 = *(eax_46 + 0xc) + 0x10
                    int32_t var_148_19 = esi_12
                    ecx = sub_4f4430(eax_46, sub_4f4380(esi_12))
            
            int32_t var_44_8 = 0xffffffff
            char* eax_49 = var_11c
            
            if (eax_49 != 0 && *eax_49 != 0)
                void* eax_51 = sub_4c4060(&var_11c)
                int32_t temp5_1 = *(eax_51 + 4)
                *(eax_51 + 4) -= 1
                
                if (temp5_1 == 1)
                    int32_t esi_14 = *(eax_51 + 0xc) + 0x10
                    int32_t var_148_20 = esi_14
                    ecx = sub_4f4430(eax_51, sub_4f4380(esi_14))
    
    int32_t** result = sub_4e7b40(ecx, data_3079274)
    int32_t** result_2 = result
    result_3 = result_2
    
    if (result_2 != 0)
        char* eax_54
        char* edx_17
        eax_54, edx_17 = sub_4e7210(*result_2)
        var_124 = eax_54
        int32_t** result_1 = &data_83f3d3
        char* ecx_14 = nullptr
        int32_t var_44_9 = 9
        char* var_e0_1 = 0xffffffff
        var_11c = nullptr
        
        if (*(eax_54 + 4) s> 0)
            var_120 = nullptr
            char* eax_61
            
            do
                edx_17 = var_124
                void* esi_17 = &var_120[*edx_17]
                int32_t* edi_9 = *result_2
                int32_t eax_55 = *esi_17
                
                if (edi_9[1] != 0x18)
                    char const* const var_148_23 = "FlanimGetDef"
                    var_14c = 0x2e6
                    char const* const var_150_12 = "AssetUtils.cpp"
                    char* const var_154_7 = &data_83f3d3
                    char const* const var_158_3 = "assetPtr->assetType == ASSET_TYPE_FLANIM"
                    sub_4c5870("assetPtr->assetType == ASSET_TYPE_FLANIM", &data_83f3d3, 
                        "AssetUtils.cpp", 0x2e6, "FlanimGetDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*edi_9 == 0)
                    int32_t var_148_21 = 0
                    edx_17 = sub_520800(eax_55, edx_17, edi_9)
                    
                    if (*edi_9 == 0)
                        edx_17 = sub_509540(edi_9)
                
                void* edi_10 = **edi_9
                void* eax_57
                
                if (eax_55 != 0)
                    int32_t var_148_22 = eax_55
                    void* eax_58
                    eax_58, edx_17 = sub_4e8680(edi_10)
                    
                    if (eax_58 != 0)
                        ecx_14 = *(eax_58 + 4)
                        eax_57 = *(eax_58 + 8) - ecx_14 + 1
                        goto label_56d561
                else
                    eax_57 = *(edi_10 + 0x2c)
                    ecx_14 = nullptr
                label_56d561:
                    
                    if (result_2[3] == ecx_14 && result_2[4] == eax_57)
                        sub_4c4590(*esi_17)
                        edx_17 = var_11c
                        result_2 = result_3
                        var_e0_1 = edx_17
                        break
                eax_61 = var_11c
                ecx_14 = var_124
                var_120 = &var_120[0x10]
                var_11c = &eax_61[1]
            while (&eax_61[1] s< *(ecx_14 + 4))
        
        int32_t* eax_65 = *result_2
        int32_t* var_148_24 = eax_65
        sub_4e6b50(&var_118, edx_17, ecx_14, &var_118, eax_65)
        var_44_9.b = 0xa
        int32_t** result_4 = result_1
        
        if (result_4 == 0)
            result_4 = &data_83f3d3
        
        char* eax_67 = var_118
        
        if (eax_67 == 0)
            eax_67 = &data_83f3d3
        
        int32_t var_148_25 = *(var_124 + 4)
        var_14c = &var_e0_1[1]
        int32_t** result_5 = result_4
        char* var_154_8 = eax_67
        char const* const var_158_4 = "%s -- action %s (%d of %d)"
        sub_4c4a50(&var_114, "%s -- action %s (%d of %d)")
        var_44_9.b = 0xb
        char* esi_18 = var_114
        
        if (esi_18 == 0)
            esi_18 = &data_83f3d3
        
        unimplemented  {fld1 }
        result_6 = fconvert.s(unimplemented  {fst dword [esp+0x94], st0})
        unimplemented  {fldz }
        float var_a4_5 = fconvert.s(unimplemented  {fst dword [esp+0xa0], st0})
        float var_98_3 = fconvert.s(unimplemented  {fst dword [esp+0xac], st0})
        float var_ac_6 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
        float var_94_3 = fconvert.s(unimplemented  {fstp dword [esp+0xb0], st0})
        unimplemented  {fstp dword [esp+0xb0], st0}
        float var_a0_4 = fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
        unimplemented  {fld st0, dword [0x8a53c0]}
        float var_a8_6 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
        unimplemented  {fstp dword [esp+0x9c], st0}
        unimplemented  {fld st0, dword [0x8a57e0]}
        float var_9c_4 = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
        unimplemented  {fstp dword [esp+0xa8], st0}
        float var_90_3 = fconvert.s(unimplemented  {fstp dword [esp+0xb4], st0})
        unimplemented  {fstp dword [esp+0xb4], st0}
        sub_413350(&result_6, &var_d4, 0x840974)
        unimplemented  {fld1 }
        result_6 = fconvert.s(unimplemented  {fst dword [esp+0x94], st0})
        unimplemented  {fldz }
        result_3 = 0f
        float var_a4_6 = fconvert.s(unimplemented  {fst dword [esp+0xa0], st0})
        int32_t var_10c_5 = 0
        float var_98_4 = fconvert.s(unimplemented  {fst dword [esp+0xac], st0})
        float var_ac_7 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
        float var_94_4 = fconvert.s(unimplemented  {fstp dword [esp+0xb0], st0})
        unimplemented  {fstp dword [esp+0xb0], st0}
        float var_a0_5 = fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
        unimplemented  {fld st0, dword [esp+0x34]}
        float var_a8_7 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
        unimplemented  {fstp dword [esp+0x9c], st0}
        unimplemented  {fld st0, dword [esp+0x38]}
        float var_9c_5 = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
        unimplemented  {fstp dword [esp+0xa8], st0}
        float var_90_4 = fconvert.s(unimplemented  {fstp dword [esp+0xb4], st0})
        unimplemented  {fstp dword [esp+0xb4], st0}
        sub_413350(&result_6, &result_3, &var_d4)
        int32_t var_148_26 = 0xffffffff
        var_14c = 0xffffffff
        sub_4ca330(&result_3, data_3166168, esi_18, &result_3, 0xffffffff, 0xffffffff)
        unimplemented  {call 0x4ca330}
        unimplemented  {fld st0, dword [ebx+0x4]}
        float var_148_27 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
        unimplemented  {fstp dword [esp+0x8], st0}
        var_14c = result_2[3]
        sub_4e88f0(&result_6, result_2[4], 0xffffffff, var_148_27)
        unimplemented  {call 0x4e88f0}
        
        if (*(result_2 + 0x8d) != 0)
            unimplemented  {fldz }
            float var_a8_8 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
            unimplemented  {fstp dword [esp+0x9c], st0}
        
        result_3 = result_2[4] - 1
        unimplemented  {fild st0, dword [esp+0x34]}
        float result_7 = result_6
        unimplemented  {fmul st0, dword [ebx+0x14]}
        unimplemented  {fdiv st0, dword [0x8c4d34]}
        result_3 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
        unimplemented  {fstp dword [esp+0x44], st0}
        unimplemented  {fld st0, dword [esp+0x44]}
        double var_14c_1 = fconvert.d(unimplemented  {fstp qword [esp+0x8], st0})
        unimplemented  {fstp qword [esp+0x8], st0}
        unimplemented  {fld st0, dword [esp+0xac]}
        var_154_8.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
        unimplemented  {fstp qword [esp], st0}
        float result_8 = result_7
        char const* const var_15c_3 = "Frame %d %0.3f FPS %0.1f"
        char* var_d8
        sub_4c4a50(&var_d8, "Frame %d %0.3f FPS %0.1f")
        var_44_9.b = 0xc
        char* esi_20 = var_d8
        
        if (esi_20 == 0)
            esi_20 = &data_83f3d3
        
        unimplemented  {fld1 }
        result_6 = fconvert.s(unimplemented  {fst dword [esp+0x94], st0})
        unimplemented  {fldz }
        float var_a4_7 = fconvert.s(unimplemented  {fst dword [esp+0xa0], st0})
        float var_98_5 = fconvert.s(unimplemented  {fst dword [esp+0xac], st0})
        float var_ac_8 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
        float var_94_5 = fconvert.s(unimplemented  {fstp dword [esp+0xb0], st0})
        unimplemented  {fstp dword [esp+0xb0], st0}
        float var_a0_6 = fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
        unimplemented  {fld st0, dword [0x8a53c0]}
        float var_a8_9 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
        unimplemented  {fstp dword [esp+0x9c], st0}
        unimplemented  {fld st0, dword [0x8a55c8]}
        float var_9c_6 = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
        unimplemented  {fstp dword [esp+0xa8], st0}
        float var_90_5 = fconvert.s(unimplemented  {fstp dword [esp+0xb4], st0})
        unimplemented  {fstp dword [esp+0xb4], st0}
        sub_413350(&result_6, &var_d4, 0x840974)
        unimplemented  {fld1 }
        result_6 = fconvert.s(unimplemented  {fst dword [esp+0x94], st0})
        unimplemented  {fldz }
        result_3 = 0f
        float var_a4_8 = fconvert.s(unimplemented  {fst dword [esp+0xa0], st0})
        int32_t var_10c_6 = 0
        float var_98_6 = fconvert.s(unimplemented  {fst dword [esp+0xac], st0})
        float var_ac_9 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
        float var_94_6 = fconvert.s(unimplemented  {fstp dword [esp+0xb0], st0})
        unimplemented  {fstp dword [esp+0xb0], st0}
        float var_a0_7 = fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
        unimplemented  {fld st0, dword [esp+0x34]}
        float var_a8_10 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
        unimplemented  {fstp dword [esp+0x9c], st0}
        unimplemented  {fld st0, dword [esp+0x38]}
        float var_9c_7 = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
        unimplemented  {fstp dword [esp+0xa8], st0}
        float var_90_6 = fconvert.s(unimplemented  {fstp dword [esp+0xb4], st0})
        unimplemented  {fstp dword [esp+0xb4], st0}
        sub_413350(&result_6, &result_3, &var_d4)
        int32_t var_148_28 = 0xffffffff
        var_14c_1.d = 0xffffffff
        sub_4ca330(0xffffffff, data_3166168, esi_20, &result_3, 0xffffffff, 0xffffffff)
        unimplemented  {call 0x4ca330}
        var_44_9.b = 0xb
        char* eax_73 = var_d8
        
        if (eax_73 != 0 && *eax_73 != 0)
            if (*(eax_73 - 0x10) != 0xfafafafa)
                char const* const var_148_29 = "XStringMagicDataStructFromCharPtr"
                var_14c_1.d = 0x20
                char const* const var_150_16 = "xString.cpp"
                char* const var_154_9 = &data_83f3d3
                char const* const var_158_5 = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp6_1 = *(eax_73 - 0xc)
            *(eax_73 - 0xc) -= 1
            
            if (temp6_1 == 1)
                int32_t esi_22 = *(eax_73 - 4) + 0x10
                int32_t var_148_30 = esi_22
                sub_4f4430(&eax_73[0xfffffff0], sub_4f4380(esi_22))
        
        var_44_9.b = 0xa
        char* eax_77 = var_114
        
        if (eax_77 != 0 && *eax_77 != 0)
            if (*(eax_77 - 0x10) != 0xfafafafa)
                char const* const var_148_31 = "XStringMagicDataStructFromCharPtr"
                var_14c_1.d = 0x20
                char const* const var_150_17 = "xString.cpp"
                char* const var_154_10 = &data_83f3d3
                char const* const var_158_6 = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp7_1 = *(eax_77 - 0xc)
            *(eax_77 - 0xc) -= 1
            
            if (temp7_1 == 1)
                int32_t esi_24 = *(eax_77 - 4) + 0x10
                int32_t var_148_32 = esi_24
                sub_4f4430(&eax_77[0xfffffff0], sub_4f4380(esi_24))
        
        var_44_9.b = 9
        char* eax_81 = var_118
        
        if (eax_81 != 0 && *eax_81 != 0)
            if (*(eax_81 - 0x10) != 0xfafafafa)
                char const* const var_148_33 = "XStringMagicDataStructFromCharPtr"
                var_14c_1.d = 0x20
                char const* const var_150_18 = "xString.cpp"
                char* const var_154_11 = &data_83f3d3
                char const* const var_158_7 = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp8_1 = *(eax_81 - 0xc)
            *(eax_81 - 0xc) -= 1
            
            if (temp8_1 == 1)
                int32_t esi_26 = *(eax_81 - 4) + 0x10
                int32_t var_148_34 = esi_26
                sub_4f4430(&eax_81[0xfffffff0], sub_4f4380(esi_26))
        
        int32_t var_44_10 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            if (result[-4] != 0xfafafafa)
                char const* const var_148_35 = "XStringMagicDataStructFromCharPtr"
                var_14c_1.d = 0x20
                char const* const var_150_19 = "xString.cpp"
                char* const var_154_12 = &data_83f3d3
                char const* const var_158_8 = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp9_1 = result[-3]
            result[-3] -= 1
            
            if (temp9_1 == 1)
                int32_t esi_28 = &result[-1][4]
                int32_t var_148_36 = esi_28
                result = sub_4f4430(&result[-4], sub_4f4380(esi_28))
    
    if (data_3079214 == 1)
        void* eax_88 = data_27e7fe4
        *(eax_88 + 0x254) = 0
        __builtin_memcpy(eax_88 + 0x9c, 0x83faf8, 0x40)
        *(eax_88 + 0xdc) = 0
        result = sub_4e2080()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_134)
    return result
}

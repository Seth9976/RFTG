// 函数名称: sub_4ca330
// 虚拟地址: 0x4ca330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4ca330(int32_t arg1, char** arg2, char* arg3, float* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693228
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_138 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4ca250(arg2)
    char** var_70
    char** ebx
    
    if (arg2 != 0)
        if (arg2[1] != 0x12)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_70 = arg2
        ebx = arg2
    else
        ebx = sub_50a390(arg2 + 0x12)
        var_70 = ebx
    
    if (*ebx == 0)
        sub_5094d0(ebx, 0, 1)
    
    char* eax_6 = *ebx
    ebx[7] = &ebx[7][1]
    void* edi = *eax_6
    void* var_64 = edi
    int32_t esi_1 = 0
    int32_t var_8_1 = 0
    void* eax_7 = data_27e7fe0
    float edx = *(eax_7 + 0x20)
    float eax_8 = *(eax_7 + 0x24)
    int32_t var_90 = 0
    
    if (*(edi + 0x14) s> 0)
        while (true)
            int32_t edx_1 = *(edi + 0x18)
            float var_7c_1 = fconvert.s(float.t(0))
            int32_t ecx_2 = esi_1 * 7
            int32_t* eax_9 = *(edx_1 + (ecx_2 << 2) + 4)
            int32_t* ebx_1 = edx_1 + (ecx_2 << 2)
            int32_t* ecx_3 = *ebx_1
            int32_t* var_e0_1 = ebx_1
            int32_t* var_6c_1 = ecx_3
            
            if (eax_9 != 0)
                var_6c_1 = eax_9
                ecx_3 = eax_9
            
            if (ecx_3[1] != 3)
                sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                    "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* eax_11 = *sub_466320(ecx_3)
            
            if (eax_11 == 0)
                var_70[7] -= 1
                goto label_4ca966
            
            *eax_11
            *eax_11
            long double x87_r6_1 = float.t(1)
            float var_e4_1 = fconvert.s(x87_r6_1 / x87_r6_1)
            long double x87_r6_3 = float.t(eax_11[1])
            
            if (eax_11[1] s< 0)
                x87_r6_3 = x87_r6_3 + fconvert.t(4.2949673e+09f)
            
            int32_t eax_12 = arg5
            float var_f4_1 = fconvert.s(x87_r6_1 / x87_r6_3)
            
            if (*(edi + 0x14) == 2 && esi_1 == 0)
                eax_12 = arg6
            
            bool cond:1_1 = ebx_1[6].b != 0
            int32_t* edx_3 = data_be4ab0
            char* var_98 = data_be4aac
            int32_t* var_94_1 = edx_3
            
            if (not(cond:1_1))
                uint8_t var_72_1 = (eax_12 u>> 0x10).b
                char var_73_1 = (eax_12 u>> 8).b
                uint8_t var_71_1 = (eax_12 u>> 0x18).b
                int16_t var_67_1 = 0
                char var_65_1 = 0
                var_98 = eax_12.b.d
                char* var_94_2 = 0.d
            
            char* eax_15 = arg3
            char* var_60_1 = eax_15
            
            if (*eax_15 != 0)
                while (true)
                    ebx_1.b = *eax_15
                    
                    if (ebx_1.b u>= 0x80)
                        char* ecx_5
                        ecx_5.b = ebx_1.b
                        ecx_5.b &= 0xe0
                        
                        if (ecx_5.b != 0xc0)
                            edx_3.b = ebx_1.b
                            edx_3.b &= 0xf0
                            
                            if (edx_3.b != 0xe0)
                                ecx_5.b = ebx_1.b
                                ecx_5.b &= 0xf8
                                
                                if (ecx_5.b != 0xf0)
                                    sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                        "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                    
                    int32_t var_5c = eax_15
                    uint32_t i
                    void* edx_5
                    i, edx_5 = sub_4ba310(&var_5c)
                    int32_t* eax_16
                    
                    if (i s< 0x80)
                        eax_16 = *(edi + (i << 2) + 0x30)
                        
                        if (eax_16 == 0xffffffff)
                            goto label_4ca581
                        
                        goto label_4ca554
                    
                    eax_16 = *(*(edi + 0x24) + (((i s>> 4 | i) & *(edi + 0x28)) << 2))
                    
                    if (eax_16 == 0)
                        goto label_4ca581
                    
                    while (i != *eax_16)
                        eax_16 = eax_16[2]
                        
                        if (eax_16 == 0)
                            goto label_4ca581
                    
                    if (eax_16 == 0xfffffffc)
                        goto label_4ca581
                    
                    eax_16 = eax_16[1]
                label_4ca554:
                    
                    if (eax_16 s< 0 || eax_16 s>= var_e0_1[4])
                        sub_4c5870("glyphIndex >= 0 && glyphIndex < pLayer->glyphCount", &data_83f3d3, 
                            "Font.cpp", 0xc7, "FontUnicodeToGlyph")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edi_1 = &var_e0_1[5][eax_16 * 9]
                    var_5c = edi_1
                    
                    if (edi_1 != 0)
                        long double x87_r6_4 = fconvert.t(var_e4_1)
                        float var_b8 = fconvert.s(fconvert.t(*(edi_1 + 4)) * x87_r6_4)
                        long double x87_r5_3 = fconvert.t(var_f4_1)
                        float var_b4_1 = fconvert.s(fconvert.t(*(edi_1 + 8)) * x87_r5_3)
                        float var_b0_1 = fconvert.s(x87_r6_4 * fconvert.t(*(edi_1 + 0xc)))
                        float var_ac_1 = fconvert.s(x87_r5_3 * fconvert.t(*(edi_1 + 0x10)))
                        long double x87_r7_13 = fconvert.t(var_b8)
                        float var_58 = fconvert.s(x87_r7_13)
                        long double x87_r6_10 = fconvert.t(var_b4_1)
                        float var_54_1 = fconvert.s(x87_r6_10)
                        long double x87_r5_6 = fconvert.t(var_b0_1)
                        float var_50_1 = fconvert.s(x87_r5_6)
                        float var_4c_1 = fconvert.s(x87_r6_10)
                        float var_48_1 = fconvert.s(x87_r7_13)
                        long double x87_r6_13 = fconvert.t(var_ac_1)
                        float var_44_1 = fconvert.s(x87_r6_13)
                        float var_3c_1 = fconvert.s(x87_r6_13)
                        float var_40_1 = fconvert.s(x87_r5_6)
                        long double x87_r6_14 = fconvert.t(edx)
                        long double x87_r5_9 = fconvert.t(eax_8)
                        long double x87_r4_3 = fconvert.t(fconvert.s(fconvert.t(*(edi_1 + 0x14))
                            + fconvert.t(var_7c_1) + x87_r6_14))
                        long double x87_r4_5 =
                            fconvert.t(fconvert.s(fconvert.t(*(edi_1 + 0x18)) + x87_r5_9))
                        float var_bc_1 = fconvert.s(x87_r5_9 + fconvert.t(*(edi_1 + 0x10))
                            - fconvert.t(*(edi_1 + 8)) + x87_r4_5)
                        long double x87_r5_22 = fconvert.t(arg4[1]) * x87_r4_5
                        long double x87_r4_8 = fconvert.t(*arg4) * x87_r4_3
                        float var_84_1 = fconvert.s(x87_r4_8 + x87_r5_22 + fconvert.t(arg4[2]))
                        long double x87_r6_21 = x87_r4_5 * fconvert.t(arg4[4])
                        long double x87_r7_21 = x87_r4_3 * fconvert.t(arg4[3])
                        float var_80_1 = fconvert.s(x87_r7_21 + x87_r6_21 + fconvert.t(arg4[5]))
                        long double x87_r3_11 = fconvert.t(*arg4)
                        long double x87_r2_1 = fconvert.t(fconvert.s(x87_r6_14
                            + fconvert.t(*(edi_1 + 0xc)) - fconvert.t(*(edi_1 + 4)) + x87_r4_3))
                        float var_34_1 = var_80_1
                        float var_38 = var_84_1
                        long double x87_r3_12 = x87_r3_11 * x87_r2_1
                        float var_8c_1 = fconvert.s(x87_r5_22 + x87_r3_12 + fconvert.t(arg4[2]))
                        float var_30_1 = var_8c_1
                        long double x87_r5_26 = x87_r2_1 * fconvert.t(arg4[3])
                        float var_88_1 = fconvert.s(x87_r6_21 + x87_r5_26 + fconvert.t(arg4[5]))
                        float var_2c_1 = var_88_1
                        long double x87_r2_6 = fconvert.t(var_bc_1)
                        long double x87_r3_15 = fconvert.t(arg4[1]) * x87_r2_6
                        float var_a8_1 = fconvert.s(x87_r4_8 + x87_r3_15 + fconvert.t(arg4[2]))
                        float var_28_1 = var_a8_1
                        long double x87_r4_12 = x87_r2_6 * fconvert.t(arg4[4])
                        float var_24_1 = fconvert.s(x87_r7_21 + x87_r4_12 + fconvert.t(arg4[5]))
                        void* ecx_15 = data_27e7fe0
                        float var_20_1 = fconvert.s(x87_r3_12 + x87_r3_15 + fconvert.t(arg4[2]))
                        float var_9c_1 = fconvert.s(x87_r4_12 + x87_r5_26 + fconvert.t(arg4[5]))
                        float var_1c_1 = var_9c_1
                        float* edx_15
                        
                        if (*(ecx_15 + 0x38) == 0)
                            sub_4d8cf0(&var_58, &var_38, var_6c_1, &var_58, &var_98, nullptr)
                        else
                            long double x87_r7_28 = fconvert.t(var_80_1)
                            long double x87_r5_28 = fconvert.t(var_88_1)
                            x87_r5_28 - x87_r7_28
                            float eax_19
                            eax_19.w = (x87_r5_28 < x87_r7_28 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r5_28, x87_r7_28) ? 1 : 0) << 0xa
                                | (x87_r5_28 == x87_r7_28 ? 1 : 0) << 0xe | 0x3800
                            bool p_1 = unimplemented  {test ah, 0x44}
                            
                            if (p_1)
                                sub_4d8cf0(&var_58, &var_38, var_6c_1, &var_58, &var_98, nullptr)
                            else
                                long double x87_r6_29 = fconvert.t(var_84_1)
                                long double x87_r4_15 = fconvert.t(var_a8_1)
                                x87_r4_15 - x87_r6_29
                                eax_19.w = (x87_r4_15 < x87_r6_29 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r4_15, x87_r6_29) ? 1 : 0) << 0xa
                                    | (x87_r4_15 == x87_r6_29 ? 1 : 0) << 0xe | 0x3000
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (p_2)
                                    sub_4d8cf0(&var_58, &var_38, var_6c_1, &var_58, &var_98, nullptr)
                                else
                                    float var_104 = fconvert.s(x87_r6_29)
                                    float var_100_1 = fconvert.s(x87_r7_28)
                                    float var_fc_1 = fconvert.s(fconvert.t(var_8c_1))
                                    float var_cc_1 = fconvert.s(fconvert.t(var_9c_1))
                                    float var_f8_1 = var_cc_1
                                    void var_114
                                    float eax_22 =
                                        sub_4d9650(var_cc_1, ecx_15 + 0x28, &var_b8, &var_114, &var_104)
                                    float var_124[0x4]
                                    long double st0_1
                                    
                                    if (eax_22.b != 0)
                                        st0_1, edx_15 = sub_4d9830(eax_22, &var_98, var_6c_1, &var_114, 
                                            &var_124, nullptr)
                                    edi_1 = var_5c
                        
                        var_5c = var_60_1
                        char* eax_23
                        eax_23.b = *var_60_1
                        
                        if (eax_23.b u>= 0x80 && (eax_23.b & 0xe0) != 0xc0)
                            edx_15.b = eax_23.b
                            edx_15.b &= 0xf0
                            
                            if (edx_15.b != 0xe0)
                                eax_23.b &= 0xf8
                                
                                if (eax_23.b != 0xf0)
                                    sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                        "c:\ax2010\engine\Xutf8.cpp", 0x20f, "Xutf8_next")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                        
                        sub_4ba310(&var_5c)
                        char* ecx_18 = var_5c
                        char eax_24 = *ecx_18
                        var_60_1 = ecx_18
                        
                        if (eax_24 u>= 0x80 && (eax_24 & 0xe0) != 0xc0 && (eax_24 & 0xf0) != 0xe0
                                && (eax_24 & 0xf8) != 0xf0)
                            sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        var_5c = ecx_18
                        uint32_t eax_25
                        eax_25, edx_3 = sub_4ba310(&var_5c)
                        var_5c = *(edi_1 + 0x1c)
                        int32_t ecx_20
                        
                        if (eax_25 != 0)
                            ecx_20 = *(edi_1 + 0x20)
                        
                        void* edi_4
                        
                        if (eax_25 == 0 || ecx_20 == 0xffffffff)
                            edi_4 = var_64
                        else
                            edi_4 = var_64
                            int32_t esi_8 = *(edi_4 + 0x1c)
                            
                            if (ecx_20 s< esi_8)
                                edx_3 = *(edi_4 + 0x20) + ecx_20 * 0xc
                                
                                while (*edx_3 == i)
                                    if (edx_3[1] == eax_25)
                                        var_5c += edx_3[2]
                                        break
                                    
                                    ecx_20 += 1
                                    edx_3 = &edx_3[3]
                                    
                                    if (ecx_20 s>= esi_8)
                                        break
                        
                        edi = var_64
                        var_7c_1 = fconvert.s(fconvert.t(*(edi_4 + 0x10)) + float.t(var_5c)
                            + fconvert.t(var_7c_1))
                    else
                        edi = var_64
                    label_4ca581:
                        var_5c = var_60_1
                        
                        if (ebx_1.b u>= 0x80)
                            edx_5.b = ebx_1.b
                            edx_5.b &= 0xe0
                            
                            if (edx_5.b != 0xc0)
                                eax_16.b = ebx_1.b
                                eax_16.b &= 0xf0
                                
                                if (eax_16.b != 0xe0)
                                    ebx_1.b &= 0xf8
                                    
                                    if (ebx_1.b != 0xf0)
                                        sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                            "c:\ax2010\engine\Xutf8.cpp", 0x20f, "Xutf8_next")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                        
                        sub_4ba310(&var_5c)
                        var_60_1 = var_5c
                    
                    if (*var_60_1 == 0)
                        esi_1 = var_90
                        break
                    
                    eax_15 = var_60_1
            
            esi_1 += 1
            var_90 = esi_1
            
            if (esi_1 s>= *(edi + 0x14))
                ebx = var_70
                break
    
    ebx[7] -= 1
    label_4ca966:
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}

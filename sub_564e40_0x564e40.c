// 函数名称: sub_564e40
// 虚拟地址: 0x564e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_564e40(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6918a5
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_138 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx = 0
    int32_t var_70
    __builtin_memset(&var_70, 0, 0x24)
    int32_t var_8_1 = 0
    sub_564d50(arg4, &var_70)
    int32_t* esi = nullptr
    int32_t* var_a4 = nullptr
    int32_t var_a0 = 0
    int32_t var_9c = 0
    var_8_1.b = 1
    
    if (arg3[1] != 0x12)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_FONT", &data_83f3d3, "AssetUtils.cpp", 0x2e0, 
            "FontGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi_1 = sub_466320(arg3)
    void* var_98 = edi_1
    int32_t i_2 = 0
    int32_t var_b8
    int32_t var_64
    int32_t var_58
    
    if (*(edi_1 + 0x14) s> 0)
        int32_t var_8c_1 = 0
        int32_t i
        
        do
            int32_t* ebx_2 = *(edi_1 + 0x18) + var_8c_1
            int32_t* var_74_1 = ebx_2
            sub_564a40(&var_b8, *ebx_2, &var_70)
            int32_t j_1 = 0
            
            if (ebx_2[4] s> 0)
                int32_t var_88_1 = 0
                int32_t var_b0
                float var_90_1 = fconvert.s(float.t(var_b0))
                int32_t j
                
                do
                    void* esi_3 = ebx_2[5] + var_88_1
                    long double x87_r7_2 = fconvert.t(*(esi_3 + 0x10))
                    long double x87_r6_1 = fconvert.t(var_90_1)
                    x87_r6_1 - x87_r7_2
                    j.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                    
                    if ((j:1.b & 1) != 0)
                        sub_4c5870("pGlyph->rectGlyph.y1 <= fontImageSpec.height", &data_83f3d3, 
                            "Editor\AtlasMaker.cpp", 0x2eb, "AtlasMakerPlaceAssetFont")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t i_3
                    sub_5abfc0(&i_3, 0, 0x3c)
                    long double x87_r7_4 = float.t(0)
                    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(esi_3 + 0x10))))
                    int32_t* var_f8 = ebx_2
                    x87_r6_2 - x87_r7_4
                    i_3 = i_2
                    void* var_f0_1 = esi_3
                    int128_t* eax_7
                    eax_7.w = (x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
                    long double x87_r5_1 = fconvert.t(0.5)
                    bool p_1 = unimplemented  {test ah, 0x5}
                    long double x87_r6_3
                    
                    if (p_1)
                        x87_r6_3 = x87_r6_2 + x87_r5_1
                    else
                        x87_r6_3 = x87_r6_2 - x87_r5_1
                    
                    int32_t var_7c_2 = sub_685f40(x87_r6_3)
                    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(*(esi_3 + 0xc))))
                    x87_r5_4 - x87_r7_4
                    int32_t eax_8
                    eax_8.w = (x87_r5_4 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_4, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r5_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
                    bool p_2 = unimplemented  {test ah, 0x5}
                    long double x87_r5_5
                    
                    if (p_2)
                        x87_r5_5 = x87_r5_4 + x87_r5_1
                    else
                        x87_r5_5 = x87_r5_4 - x87_r5_1
                    
                    int32_t var_84_2 = sub_685f40(x87_r5_5)
                    long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(*(esi_3 + 8))))
                    x87_r5_7 - x87_r7_4
                    int32_t eax_9
                    eax_9.w = (x87_r5_7 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_7, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r5_7 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
                    bool p_3 = unimplemented  {test ah, 0x5}
                    long double x87_r5_8
                    
                    if (p_3)
                        x87_r5_8 = x87_r5_7 + x87_r5_1
                    else
                        x87_r5_8 = x87_r5_7 - x87_r5_1
                    
                    int32_t edi_2 = sub_685f40(x87_r5_8)
                    long double x87_r5_10 = fconvert.t(fconvert.s(fconvert.t(*(esi_3 + 4))))
                    x87_r5_10 - x87_r7_4
                    int32_t eax_10
                    eax_10.w = (x87_r5_10 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_10, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r5_10 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
                    bool p_4 = unimplemented  {test ah, 0x5}
                    long double x87_r5_11
                    
                    if (p_4)
                        x87_r5_11 = x87_r5_10 + x87_r5_1
                    else
                        x87_r5_11 = x87_r5_10 - x87_r5_1
                    
                    int32_t eax_11 = sub_685f40(x87_r5_11)
                    long double x87_r5_13 = fconvert.t(fconvert.s(fconvert.t(*(esi_3 + 0x14))))
                    x87_r5_13 - x87_r7_4
                    int32_t eax_12
                    eax_12.w = (x87_r5_13 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_13, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r5_13 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
                    bool p_5 = unimplemented  {test ah, 0x5}
                    long double x87_r5_14
                    
                    if (p_5)
                        x87_r5_14 = x87_r5_13 + x87_r5_1
                    else
                        x87_r5_14 = x87_r5_13 - x87_r5_1
                    
                    int32_t var_dc_1 = sub_685f40(x87_r5_14)
                    long double x87_r5_16 = fconvert.t(fconvert.s(fconvert.t(*(esi_3 + 0x18))))
                    x87_r5_16 - x87_r7_4
                    int32_t eax_13
                    eax_13.w = (x87_r5_16 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_16, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r5_16 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
                    bool p_6 = unimplemented  {test ah, 0x5}
                    long double x87_r7_5
                    
                    if (p_6)
                        x87_r7_5 = x87_r7_4 + x87_r5_1
                    else
                        x87_r7_5 = x87_r7_4 - x87_r5_1
                    
                    int32_t var_d8_1 = sub_685f40(x87_r7_5)
                    sub_564c50(&var_b8, &var_f8)
                    
                    if (var_84_2 == eax_11 || var_7c_2 - edi_2 == 0)
                        int32_t var_ec_2 = 0
                        int32_t var_e8_2 = 0
                        int32_t var_e4_2 = 0
                        int32_t var_e0_2 = 0
                    else
                        void* var_cc
                        int32_t* var_13c_4 = &var_cc
                        int32_t var_c0
                        int32_t var_bc
                        
                        if (sub_564770(&var_70, sub_564b20(&var_f8, &var_b8, &var_70)) != 0)
                            int32_t var_c4
                            
                            if (var_c4 != 0)
                                _aligned_free_base(var_c4)
                            
                            var_c4 = 0
                            int32_t var_d4_2 = var_c0
                            int32_t var_d0_2 = var_bc
                        else
                            void* var_c8
                            
                            if (sub_564340(&var_70, var_cc, var_c8, &var_c0) == 0)
                                var_8_1.b = 0
                                sub_5686d0(&var_a4)
                                int32_t var_8_2 = 3
                                sub_568260(&var_58)
                                var_8_2.b = 2
                                sub_567fd0(&var_64)
                                int32_t var_8_3 = 0xffffffff
                                sub_567d40(&var_70)
                                goto label_5654ea
                            
                            sub_5680e0(&var_58)
                            ebx_2 = var_74_1
                            int32_t var_d4_1 = var_c0
                            int32_t var_d0_1 = var_bc
                    
                    sub_568380(&var_a4, &var_f8)
                    var_88_1 += 0x24
                    j = j_1 + 1
                    j_1 = j
                while (j s< ebx_2[4])
                edi_1 = var_98
            
            int32_t eax_25 = var_b8
            
            if (eax_25 != 0)
                _aligned_free_base(eax_25)
            
            var_8c_1 += 0x1c
            i = i_2 + 1
            i_2 = i
        while (i s< *(edi_1 + 0x14))
        esi = var_a4
        ebx = 0
    
    if (esi != 0)
        while (true)
            int32_t* edx_3 = esi[0x10]
            int32_t ebx_3 = esi[0xa]
            int32_t edx_4 = esi[9]
            void* eax_30 = esi[2]
            float var_7c_3 = fconvert.s(float.t(esi[5] - esi[3] + edx_4))
            float var_74_6 = fconvert.s(float.t(esi[6] - esi[4] + ebx_3))
            *(eax_30 + 4) = fconvert.s(fconvert.t(fconvert.s(float.t(edx_4))))
            *(eax_30 + 8) = fconvert.s(fconvert.t(fconvert.s(float.t(ebx_3))))
            *(eax_30 + 0xc) = fconvert.s(fconvert.t(var_7c_3))
            *(eax_30 + 0x10) = fconvert.s(fconvert.t(var_74_6))
            *(esi[2] + 0x14) = fconvert.s(float.t(esi[7]))
            *(esi[2] + 0x18) = fconvert.s(float.t(esi[8]))
            
            if (esi[5] != 0 && esi[0xd] != 0)
                int32_t ebx_4 = esi[0xb]
                int32_t var_b4_1 = ebx_4
                int32_t var_b0_1 = esi[0xc]
                int32_t var_40
                int32_t var_a8_1 = var_40
                
                if (var_40 s>= 0xd && (var_40 s<= 0x12 || var_40 == 0x15))
                    sub_4c5870("!TextureFormatIsCompressed(format)", &data_83f3d3, "ImageUtils.cpp", 
                        0x82, "TextureFormatPitch")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t eax_35
                
                if (sub_553f70(var_40) * ebx_4 s>= 4)
                    eax_35 = sub_553f70(var_40) * ebx_4
                else
                    eax_35 = 4
                
                int32_t var_ac_1 = eax_35
                var_b8 = esi[0xd]
                int32_t eax_42 = sub_553f70(var_40)
                int32_t var_124_1 = esi[0xb]
                int32_t var_38
                int32_t var_11c_1 = var_38
                int32_t var_120_1 = esi[0xc]
                int32_t var_118_1 = var_40
                int32_t var_34
                int32_t var_128 = var_34 + esi[0xf] * var_38 + esi[0xe] * eax_42
                sub_554750(&var_128)
            
            if (edx_3 == 0)
                break
            
            esi = edx_3
        
        edi_1 = var_98
        ebx = 0
    
    int32_t i_1 = 0
    
    if (*(edi_1 + 0x14) s> 0)
        do
            void* eax_46 = *(edi_1 + 0x18)
            void* eax_47 = eax_46 + ebx
            
            if (eax_46 != neg.d(ebx))
                int32_t var_2c
                *(eax_47 + 4) = var_2c
                int32_t var_28
                *(eax_47 + 8) = var_28
            
            i_1 += 1
            ebx += 0x1c
        while (i_1 s< *(edi_1 + 0x14))
    
    sub_564d50(&var_70, arg4)
    int32_t* var_144_4 = arg3
    sub_4cf840()
    var_8_1.b = 0
    sub_5686d0(&var_a4)
    int32_t var_8_4 = 5
    sub_568260(&var_58)
    var_8_4.b = 4
    sub_567fd0(&var_64)
    int32_t var_8_5 = 0xffffffff
    sub_567d40(&var_70)
    label_5654ea:
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}

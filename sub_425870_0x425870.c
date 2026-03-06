// 函数名称: sub_425870
// 虚拟地址: 0x425870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_425870(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6981dd
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_16c
    int32_t eax_2 = __security_cookie ^ &var_16c
    int32_t __saved_edi
    int32_t var_17c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = arg5
    char* edi = arg3
    int32_t* ebx = data_307c5cc
    char* var_15c = edi
    int32_t ecx
    int32_t var_134 = ecx
    int32_t var_158 = esi
    int32_t var_144 = 4
    int32_t* var_168 = ebx
    int32_t eax_6
    
    if (esi != 0xffffffff)
        eax_6 = *sub_46b2b0(esi)
    else
        eax_6 = arg4 | esi
    
    int32_t eax_16 = *((eax_6 << 2) + &data_c020f8)
    int32_t var_164 = eax_16
    int32_t var_154
    void var_130
    void var_70
    
    if (eax_16 s> 0)
        if ((data_3166644 & 1) == 0)
            data_3166644.d |= 1
            int32_t var_c_1 = 0
            data_3166640 = sub_4f5220(ebx, "ico_prestige")
            int32_t var_c_2 = 0xffffffff
        
        if ((data_3166644 & 2) == 0)
            data_3166644.d |= 2
            int32_t var_c_3 = 1
            data_316663c = sub_4f5220(ebx, "txt_prestigePoints")
            int32_t var_c_4 = 0xffffffff
        
        var_144 = 4
        var_154 = 5
        int32_t var_140_1 = 0
        int32_t var_188_1 = 1
        int32_t var_150_1 = 1
        int32_t eax_11
        int32_t edx_1
        int80_t st0_1
        st0_1, eax_11, edx_1 =
            sub_4f66d0(&var_130, edi, arg4, &var_144, fconvert.s(float.t(1)), &var_154, nullptr)
        int32_t eax_12 = data_3166640
        __builtin_memcpy(&var_70, eax_11, 0x40)
        void* var_180_1 = &var_70
        void* var_184_4 = &var_70
        var_144 = 3
        var_154 = eax_12
        __builtin_memcpy(&var_130, sub_4f62d0(eax_12, fconvert.s(float.t(1)), edx_1), 0x40)
        int32_t eax_14 = sub_4f4890(var_168)
        void* ecx_4 = var_154 * 0x118 + *eax_14
        sub_4f67d0(eax_14, nullptr, *(ecx_4 + 0x68), ecx_4, &data_be1ae0, &var_130, nullptr, nullptr)
        eax_16 = sub_4f5120(var_168, data_316663c, &var_70, var_164)
        edi = var_15c
        ebx = var_168
        esi = var_158
    
    int32_t eax_17
    
    if (esi != 0xffffffff)
        eax_17 = *sub_46b2b0(esi)
    else
        eax_17 = eax_16 | esi
    
    int32_t eax_19 = *((eax_17 << 2) + &data_c020e8)
    var_154 = eax_19
    int32_t var_14c
    void var_f0
    
    if (eax_19 s> 0)
        if ((data_3166644 & 4) == 0)
            data_3166644.d |= 4
            int32_t var_c_5 = 2
            data_3166638 = sub_4f5220(ebx, "ico_vpChit")
            int32_t var_c_6 = 0xffffffff
        
        if ((data_3166644 & 8) == 0)
            data_3166644.d |= 8
            int32_t var_c_7 = 3
            data_3166634 = sub_4f5220(ebx, "txt_chitCount")
            int32_t var_c_8 = 0xffffffff
        
        unimplemented  {fld1 }
        int32_t var_148_1 = 0
        var_14c = var_144
        int32_t var_188_4 = 1
        float var_188_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_164 = 5
        int32_t var_160_1 = 1
        int32_t eax_23
        int32_t edx_3
        eax_23, edx_3 = sub_4f66d0(&var_f0, edi, arg4, &var_14c, var_188_5, &var_164, nullptr)
        unimplemented  {call 0x4f66d0}
        unimplemented  {fld1 }
        var_144 -= 1
        int32_t eax_24 = data_3166638
        __builtin_memcpy(&var_70, eax_23, 0x40)
        void* var_180_3 = &var_70
        void* var_184_10 = &var_70
        float var_184_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_164 = eax_24
        __builtin_memcpy(&var_130, sub_4f62d0(eax_24, var_184_11, edx_3), 0x40)
        int32_t eax_26 = sub_4f4890(var_168)
        void* ecx_11 = var_164 * 0x118 + *eax_26
        sub_4f67d0(eax_26, nullptr, *(ecx_11 + 0x68), ecx_11, &data_be1ae0, &var_130, nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        sub_4f5120(var_168, data_3166634, &var_70, var_154)
        edi = var_15c
        ebx = var_168
        esi = var_158
    
    int32_t eax_29 = sub_4244c0(esi)
    var_154 = eax_29
    
    if (eax_29 s> 0)
        if ((data_3166644 & 0x10) == 0)
            data_3166644.d |= 0x10
            int32_t var_c_9 = 4
            data_3166630 = sub_4f5220(ebx, "ico_goalBack")
            int32_t var_c_10 = 0xffffffff
        
        if ((data_3166644 & 0x20) == 0)
            data_3166644.d |= 0x20
            int32_t var_c_11 = 5
            data_316662c = sub_4f5220(ebx, "ico_goalHex")
            int32_t var_c_12 = 0xffffffff
        
        if ((data_3166644 & 0x40) == 0)
            data_3166644.d |= 0x40
            int32_t var_c_13 = 6
            data_3166628 = sub_4f5220(ebx, "txt_goalPoints")
            int32_t var_c_14 = 0xffffffff
        
        unimplemented  {fld1 }
        int32_t var_160_2 = 0
        var_164 = var_144
        int32_t var_188_7 = 1
        float var_188_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_14c = 5
        int32_t var_148_2 = 1
        int32_t eax_34
        int32_t edx_5
        eax_34, edx_5 = sub_4f66d0(&var_f0, edi, arg4, &var_164, var_188_8, &var_14c, nullptr)
        unimplemented  {call 0x4f66d0}
        unimplemented  {fld1 }
        int32_t eax_35 = data_3166630
        __builtin_memcpy(&var_70, eax_34, 0x40)
        void* var_180_5 = &var_70
        void* var_184_17 = &var_70
        float var_184_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_164 = eax_35
        __builtin_memcpy(&var_130, sub_4f62d0(eax_35, var_184_18, edx_5), 0x40)
        int32_t eax_37 = sub_4f4890(var_168)
        void* ecx_18 = var_164 * 0x118 + *eax_37
        int32_t edx_6 = sub_4f67d0(eax_37, nullptr, *(ecx_18 + 0x68), ecx_18, &data_be1ae0, &var_130, 
            nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        int32_t eax_38 = data_316662c
        unimplemented  {fld1 }
        void* var_180_6 = &var_70
        void* var_184_19 = &var_70
        float var_184_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_164 = eax_38
        __builtin_memcpy(&var_130, sub_4f62d0(eax_38, var_184_20, edx_6), 0x40)
        int32_t eax_40 = sub_4f4890(var_168)
        void* ecx_23 = var_164 * 0x118 + *eax_40
        sub_4f67d0(eax_40, nullptr, *(ecx_23 + 0x68), ecx_23, &data_be1ae0, &var_130, nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        sub_4f5120(var_168, data_3166628, &var_70, var_154)
        edi = var_15c
        ebx = var_168
        esi = var_158
    
    if ((data_3166644 & 0x80) == 0)
        data_3166644.d |= 0x80
        int32_t var_c_15 = 7
        data_3166624 = sub_4f5220(ebx, "ico_handSize")
        int32_t var_c_16 = 0xffffffff
    
    int32_t eax_43 = 0x100
    
    if ((data_3166644.d & 0x100) == 0)
        data_3166644.d |= 0x100
        int32_t var_c_17 = 8
        eax_43 = sub_4f5220(ebx, "txt_handSize")
        data_3166620 = eax_43
        int32_t var_c_18 = 0xffffffff
    
    int32_t eax_44
    
    if (esi != 0xffffffff)
        eax_44 = *sub_46b2b0(esi)
    else
        eax_44 = eax_43 | esi
    
    unimplemented  {fld1 }
    int32_t var_160_3 = 0
    var_154 = *((eax_44 << 2) + &data_c020d8)
    int32_t var_148_3 = 1
    int32_t* var_188_10 = &var_14c
    var_164 = 0
    float var_188_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    var_14c = 5
    int32_t eax_49
    int32_t edx_8
    eax_49, edx_8 = sub_4f66d0(&var_f0, edi, arg4, &var_164, var_188_11, &var_14c, nullptr)
    unimplemented  {call 0x4f66d0}
    unimplemented  {fld1 }
    int32_t eax_50 = data_3166624
    void* var_180_8 = &var_70
    int32_t var_184_25 = __builtin_memcpy(&var_70, eax_49, 0x40)
    float var_184_26 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    var_164 = eax_50
    __builtin_memcpy(&var_130, sub_4f62d0(eax_50, var_184_26, edx_8), 0x40)
    int32_t eax_52 = sub_4f4890(var_168)
    void* ecx_29 = var_164 * 0x118 + *eax_52
    sub_4f67d0(ecx_29, nullptr, *(ecx_29 + 0x68), ecx_29, &data_be1ae0, &var_130, nullptr, nullptr)
    unimplemented  {call 0x4f67d0}
    int32_t edx_10 = sub_4f5120(var_168, data_3166620, &var_70, var_154)
    int32_t var_30
    __builtin_memset(&var_30, 0, 0x14)
    var_144 = sub_4b1530(var_158, edx_10, arg2, var_158)
    unimplemented  {fld1 }
    int32_t var_160_4 = 0
    int32_t var_148_4 = 1
    int32_t* var_188_13 = &var_14c
    char* ecx_32 = var_15c
    float var_188_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    var_164 = 1
    var_14c = 5
    int32_t eax_59 = sub_4f66d0(&var_f0, ecx_32, arg4, &var_164, var_188_14, &var_14c, nullptr)
    unimplemented  {call 0x4f66d0}
    void* eax_60 = data_27e7a40
    __builtin_memcpy(&var_70, eax_59, 0x40)
    var_164 = *(eax_60 + 0x548)
    int32_t edi_1 = 0
    int32_t edx_12 = sub_4b1650(arg2, var_158)
    int32_t* esi_16
    
    if ((data_3166644.d & 0x200) != 0)
        esi_16 = var_168
    else
        data_3166644.d |= 0x200
        esi_16 = var_168
        int32_t var_c_19 = 9
        data_315fb58 = sub_4f5220(esi_16, "img_militaryBonusAlien")
        data_315fb5c = sub_4f5220(esi_16, "img_militaryBonusGenes")
        data_315fb60 = sub_4f5220(esi_16, "img_militaryBonusRare")
        data_315fb64 = sub_4f5220(esi_16, "img_militaryBonusNovelty")
        int32_t eax_65
        eax_65, edx_12 = sub_4f5220(esi_16, "img_militaryBonusRebel")
        data_315fb68 = eax_65
        int32_t var_c_20 = 0xffffffff
    
    char* i = nullptr
    var_15c = nullptr
    
    do
        if (*(&var_30 + i) != 0)
            int32_t ecx_34 = var_164
            
            if (*(ecx_34 + 0x2c0b0) == 0)
                int32_t eax_66 = *(i + &data_315fb58)
                unimplemented  {fld1 }
                void* var_180_11 = &var_70
                int32_t var_184_31 = ecx_34
                float var_184_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                var_154 = eax_66
                __builtin_memcpy(&var_130, sub_4f62d0(eax_66, var_184_32, edx_12), 0x40)
                esi_16 = var_168
                int32_t eax_68 = sub_4f4890(esi_16)
                void* ecx_38 = var_154 * 0x118 + *eax_68
                edx_12 = sub_4f67d0(ecx_38, nullptr, *(ecx_38 + 0x68), ecx_38, &data_be1ae0, &var_130, 
                    nullptr, nullptr)
                unimplemented  {call 0x4f67d0}
                i = var_15c
            
            edi_1 = 1
        
        i = &i[4]
        var_15c = i
    while (i s< 0x14)
    
    char* result = var_158 * 0xb4
    
    if (result[arg2 + 0x62] != 0)
        int32_t eax_71
        
        if ((data_3166644.d & 0x400) != 0)
            eax_71 = data_316661c
        else
            data_3166644.d |= 0x400
            int32_t var_c_21 = 0xa
            eax_71, edx_12 = sub_4f5220(esi_16, "img_militaryBonusTemp")
            data_316661c = eax_71
            int32_t var_c_22 = 0xffffffff
        
        unimplemented  {fld1 }
        void* var_180_12 = &var_70
        int32_t var_184_34 = arg2
        float var_184_35 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_164 = eax_71
        int32_t eax_72
        char edx_13
        eax_72, edx_13 = sub_4f62d0(eax_71, var_184_35, edx_12)
        __builtin_memcpy(&var_130, eax_72, 0x40)
        esi_16 = var_168
        
        if (esi_16[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_16 == 0)
            sub_520800(eax_72, edx_13, esi_16, 0)
            
            if (*esi_16 == 0)
                sub_509540(esi_16)
        
        void* eax_78 = var_164 * 0x118 + ***esi_16
        result, edx_12 = sub_4f67d0(eax_78, nullptr, *(eax_78 + 0x68), eax_78, &data_be1ae0, &var_130, 
            nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        edi_1 = 1
    
    if (var_144 != 0 || edi_1 != 0)
        if ((data_3166644.d & 0x800) == 0)
            data_3166644.d |= 0x800
            int32_t var_c_23 = 0xb
            int32_t eax_79
            eax_79, edx_12 = sub_4f5220(esi_16, "ico_military")
            data_3166618 = eax_79
            int32_t var_c_24 = 0xffffffff
        
        if ((data_3166644.d & 0x1000) == 0)
            data_3166644.d |= 0x1000
            int32_t var_c_25 = 0xc
            int32_t eax_80
            eax_80, edx_12 = sub_4f5220(esi_16, "txt_military")
            data_3166614 = eax_80
            int32_t var_c_26 = 0xffffffff
        
        int32_t eax_81 = data_3166618
        unimplemented  {fld1 }
        void* var_180_13 = &var_70
        void* var_184_38 = &var_70
        float var_184_39 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_164 = eax_81
        int32_t eax_82
        char edx_14
        eax_82, edx_14 = sub_4f62d0(eax_81, var_184_39, edx_12)
        __builtin_memcpy(&var_130, eax_82, 0x40)
        
        if (var_168[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*var_168 == 0)
            sub_520800(eax_82, edx_14, var_168, 0)
            
            if (*var_168 == 0)
                sub_509540(var_168)
        
        void* eax_87 = var_164 * 0x118 + ***var_168
        int32_t edx_16 = sub_4f67d0(eax_87, nullptr, *(eax_87 + 0x68), eax_87, &data_be1ae0, &var_130, 
            nullptr, nullptr)
        unimplemented  {call 0x4f67d0}
        char** eax_89
        int32_t edx_17
        eax_89, edx_17 = sub_46e4d0(var_144, edx_16, &var_15c)
        int32_t var_c_27 = 0xd
        char* eax_90 = *eax_89
        char* var_13c_1 = &data_83f3d3
        
        if (eax_90 != 0)
            var_13c_1 = eax_90
        
        int32_t eax_91 = data_3166614
        unimplemented  {fld1 }
        void* var_180_14 = &var_70
        void* var_184_40 = &var_70
        float var_184_41 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_164 = eax_91
        int32_t eax_92
        char edx_18
        eax_92, edx_18 = sub_4f62d0(eax_91, var_184_41, edx_17)
        __builtin_memcpy(&var_130, eax_92, 0x40)
        
        if (var_168[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*var_168 == 0)
            sub_520800(eax_92, edx_18, var_168, 0)
            
            if (*var_168 == 0)
                sub_509540(var_168)
        
        sub_4f5010(&var_130, var_164 * 0x118 + ***var_168, var_13c_1, 0)
        int32_t var_c_28 = 0xffffffff
        result = var_15c
        
        if (result != 0 && *result != 0)
            if (*(result - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp0_1 = *(result - 0xc)
            *(result - 0xc) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_25 = *(result - 4) + 0x10
                result = sub_4f4430(&result[0xfffffff0], sub_4f4380(esi_25), esi_25)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_16c)
    return result
}

// 函数名称: sub_47ce70
// 虚拟地址: 0x47ce70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47ce70(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6942a2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_4c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = data_307c588
    void* eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_3165b40 & 1) != 0
    *(eax_3 + 0x2c) = sub_47cb70
    
    if (not(cond:0))
        data_3165b40.d |= 1
        int32_t var_c_1 = 0
        data_3165b3c = sub_4f5220(edi, "rgnMusicVol")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165b40 & 2) == 0)
        data_3165b40.d |= 2
        int32_t var_c_3 = 1
        data_3165b38 = sub_4f5220(edi, "rgnSoundVol")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_7 = sub_4f6e90(data_3165b3c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_3 = data_3165b38
    *(eax_7 + 0x11c) = sub_47cd90
    int128_t* eax_9 = sub_4f6e90(edi_3, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    bool cond:1 = (data_3165b40 & 4) != 0
    *(eax_9 + 0x11c) = sub_47ce00
    
    if (not(cond:1))
        data_3165b40.d |= 4
        int32_t var_c_5 = 2
        data_3165b34 = sub_4f5220(edi, "img_lang")
        int32_t var_c_6 = 0xffffffff
    
    int32_t eax_13 = sub_476760(*(data_27e7a50 + 0x18))
    int128_t* eax_15 = sub_4f6e90(data_3165b34, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_15 + 0x94) = *eax_15 + 1
    *(eax_15 + 0x98) = eax_13
    sub_4fa770(arg1, 2, 1)
    sub_4fa770(arg1, 1, 1)
    int32_t* esi_7
    
    if ((data_3165b40 & 8) != 0)
        esi_7 = edi
    else
        data_3165b40.d |= 8
        esi_7 = edi
        int32_t var_c_7 = 3
        data_3165b30 = sub_4f5220(esi_7, "chkGoogle")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165b40 & 0x10) == 0)
        data_3165b40.d |= 0x10
        int32_t var_c_9 = 4
        data_3165b2c = sub_4f5220(esi_7, "txtBeta")
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165b40 & 0x20) == 0)
        data_3165b40.d |= 0x20
        int32_t var_c_11 = 5
        data_3165b28 = sub_4f5220(esi_7, "btnTranslations")
        int32_t var_c_12 = 0xffffffff
    
    if ((data_3165b40 & 0x40) == 0)
        data_3165b40.d |= 0x40
        int32_t var_c_13 = 6
        data_3165b24 = sub_4f5220(esi_7, "btnGraphics")
        int32_t var_c_14 = 0xffffffff
    
    if ((data_3165b40 & 0x80) == 0)
        data_3165b40.d |= 0x80
        int32_t var_c_15 = 7
        data_3165b20 = sub_4f5220(esi_7, "btnGameSpeed")
        int32_t var_c_16 = 0xffffffff
    
    if ((data_3165b40.d & 0x100) == 0)
        data_3165b40.d |= 0x100
        int32_t var_c_17 = 8
        data_3165b1c = sub_4f5220(esi_7, "btnLanguage")
        int32_t var_c_18 = 0xffffffff
    
    void* eax_22 = data_27e7a50
    
    if (*(eax_22 + 0x1c) == 0 || *(eax_22 + 0x18) == 0)
        eax_22.b = 0
    else
        eax_22.b = 1
    
    float edx_2 = data_3165b30
    void* var_50 = eax_22
    sub_4fa4e0(arg1, edx_2, edx_2.b)
    uint32_t edx_3 = *(data_27e7a50 + 0x18) == 0
    uint32_t var_58_2 = edx_3
    sub_4fa4e0(arg1, data_3165b2c, edx_3.b)
    int128_t* eax_28 = sub_4f6e90(data_3165b28, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    void* ecx_3 = data_27e7a50
    *(eax_28 + 0x21) = 1
    int32_t eax_29 = *(ecx_3 + 0x10)
    char const* const var_38_1
    
    if (eax_29 == 0)
        var_38_1 = "HIGH"
    else
        if (eax_29 != 1)
            sub_4c5870("Halt", &data_83f3d3, "..\code\OptionsDlg.cpp", 0x282, "GetGraphicsQualityText")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_38_1 = "NORMAL"
    
    int128_t* eax_34 = sub_4f6e90(data_3165b24, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_34 + 0x64) = *eax_34 + 1
    sub_4c4590(var_38_1)
    void* eax_36 = data_27e7a50
    *(eax_34 + 0x151) = 1
    char* eax_38 = sub_417aa0(*(eax_36 + 0xc))
    int128_t* eax_40 = sub_4f6e90(data_3165b20, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_40 + 0x64) = *eax_40 + 1
    sub_4c4590(eax_38)
    void* edx_6 = data_27e7a50
    *(eax_40 + 0x151) = 1
    char* eax_43 = sub_417b20(*(edx_6 + 0x18))
    int128_t* eax_45 = sub_4f6e90(data_3165b1c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_45 + 0x64) = *eax_45 + 1
    sub_4c4590(eax_43)
    *(eax_45 + 0x151) = 1
    int32_t ebx_6 = 0
    
    while (true)
        int32_t edi_13 = data_3165b38
        int32_t var_28 = ebx_6
        int32_t var_24_1 = 0
        void* eax_47
        int32_t ecx_8
        eax_47, ecx_8 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (edi_13 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_7 = *(eax_47 + (edi_13 << 2) + 0x30)
        int128_t* eax_48
        
        if (edx_7 != 0)
            eax_48 = sub_4fc1e0(ecx_8, edx_7)
        else
            eax_48 = sub_4fc0d0()
            *(eax_48 + 4) = &data_83f3d3
            edx_7 = *(eax_48 + 0x1bc)
            *(eax_47 + (edi_13 << 2) + 0x30) = edx_7
        
        char* esi_21 = *(eax_47 + 4)
        
        if (*(esi_21 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_21 == 0)
            sub_520800(eax_48, edx_7.b, esi_21, 0)
            
            if (*esi_21 == 0)
                sub_509540(esi_21)
        
        int32_t ecx_11 = *(sub_4f7720(&var_28, edi_13 * 0x118 + ***esi_21, eax_48) + 0x434)
        int32_t edi_16 = data_3165b3c
        int32_t var_20 = ebx_6
        int32_t var_1c_1 = 0
        void* eax_54
        int32_t ecx_12
        eax_54, ecx_12 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (edi_16 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_9 = *(eax_54 + (edi_16 << 2) + 0x30)
        int128_t* eax_55
        
        if (edx_9 != 0)
            eax_55 = sub_4fc1e0(ecx_12, edx_9)
        else
            eax_55 = sub_4fc0d0()
            *(eax_55 + 4) = &data_83f3d3
            edx_9 = *(eax_55 + 0x1bc)
            *(eax_54 + (edi_16 << 2) + 0x30) = edx_9
        
        char* esi_24 = *(eax_54 + 4)
        
        if (*(esi_24 + 4) != 0x1e)
            break
        
        if (*esi_24 == 0)
            sub_520800(eax_55, edx_9.b, esi_24, 0)
            
            if (*esi_24 == 0)
                sub_509540(esi_24)
        
        int32_t esi_25 = *(sub_4f7720(&var_20, edi_16 * 0x118 + ***esi_24, eax_55) + 0x434)
        
        if ((data_3165b40.d & 0x200) == 0)
            data_3165b40.d |= 0x200
            int32_t var_c_19 = 9
            data_3165b18 = sub_4f5220(data_307c58c, "btnEmpty")
            int32_t var_c_20 = 0xffffffff
        
        if ((data_3165b40.d & 0x400) == 0)
            data_3165b40.d |= 0x400
            int32_t var_c_21 = 0xa
            data_3165b14 = sub_4f5220(data_307c58c, "btnFull")
            int32_t var_c_22 = 0xffffffff
        
        long double x87_r6_1 = fconvert.t(9.0)
        long double x87_r6_3 = float.t(0)
        long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*data_27e7a50) * x87_r6_1))
        x87_r5_1 - x87_r6_3
        float* eax_63
        eax_63.w = (x87_r5_1 < x87_r6_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_3) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
        long double x87_r4_1 = fconvert.t(0.5)
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r5_2
        
        if (p_1)
            x87_r5_2 = x87_r5_1 + x87_r4_1
        else
            x87_r5_2 = x87_r5_1 - x87_r4_1
        
        int32_t edi_19 = sub_685f40(x87_r5_2)
        long double x87_r5_5 = fconvert.t(fconvert.s(x87_r6_1 * fconvert.t(*(data_27e7a50 + 4))))
        x87_r5_5 - x87_r6_3
        int32_t eax_64
        eax_64.w = (x87_r5_5 < x87_r6_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_5, x87_r6_3) ? 1 : 0) << 0xa
            | (x87_r5_5 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
        bool p_2 = unimplemented  {test ah, 0x5}
        long double x87_r7_7
        
        if (p_2)
            x87_r7_7 = x87_r5_5 + x87_r6_3
        else
            x87_r7_7 = x87_r6_3 - x87_r5_5
        
        int32_t eax_65
        eax_65.b = ebx_6 s>= sub_685f40(x87_r7_7)
        char* var_34_2
        var_34_2.b = ebx_6 s>= edi_19
        bool cond:6_1 = eax_65.b == 0
        uint32_t var_50_2 = zx.d(cond:6_1)
        sub_4fa4e0(ecx_11, data_3165b18, cond:6_1)
        int32_t edx_13 = eax_65.b.d
        int32_t var_58_3 = edx_13
        sub_4fa4e0(ecx_11, data_3165b14, edx_13.b)
        float ecx_17
        ecx_17.b = var_34_2.b == 0
        uint32_t edx_14 = zx.d(ecx_17.b)
        uint32_t var_60_1 = edx_14
        sub_4fa4e0(esi_25, data_3165b18, edx_14.b)
        float edx_15 = data_3165b14
        char* var_68_1 = var_34_2
        int32_t result = sub_4fa4e0(esi_25, edx_15, edx_15.b)
        ebx_6 += 1
        
        if (ebx_6 s>= 9)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

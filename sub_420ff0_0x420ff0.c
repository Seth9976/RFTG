// 函数名称: sub_420ff0
// 虚拟地址: 0x420ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_420ff0(int32_t arg1, float arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_695ff4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = *(data_27e7a40 + 0x548)
    char edx
    
    if ((data_31660f8 & 1) == 0)
        data_31660f8.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_4
        eax_4, edx = sub_4f5220(data_307c5a4, "animPhaseVisibity")
        data_31660f4 = eax_4
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31660f8 & 2) == 0)
        data_31660f8.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_5
        eax_5, edx = sub_4f5220(data_307c5a4, "btn_phaseButtonSelected")
        data_31660f0 = eax_5
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31660f8 & 4) == 0)
        data_31660f8.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_7
        eax_7, edx = sub_4f5220(data_307c5a4, "btn_phaseButton")
        data_31660ec = eax_7
        int32_t var_c_6 = 0xffffffff
    
    if ((data_31660f8 & 8) == 0)
        data_31660f8.d |= 8
        int32_t var_c_7 = 3
        int32_t eax_8
        eax_8, edx = sub_4f5220(data_307c5a4, "img_phaseNotButton")
        data_31660e8 = eax_8
        int32_t var_c_8 = 0xffffffff
    
    if ((data_31660f8 & 0x10) == 0)
        data_31660f8.d |= 0x10
        int32_t var_c_9 = 4
        int32_t eax_9
        eax_9, edx = sub_4f5220(data_307c5a4, "img_phaseNotButtonHighlight")
        data_31660e4 = eax_9
        int32_t var_c_10 = 0xffffffff
    
    if ((data_31660f8 & 0x20) == 0)
        data_31660f8.d |= 0x20
        int32_t var_c_11 = 5
        int32_t eax_11
        eax_11, edx = sub_4f5220(data_307c5a4, "animCompleteVisibity")
        data_31660e0 = eax_11
        int32_t var_c_12 = 0xffffffff
    
    int32_t var_40 = 0
    sub_4fa4e0(arg1, arg2, edx)
    *(ebx + 0x2c0a8) = fconvert.s(float.t(0))
    *(ebx + 0x2c0a4) = 0
    sub_4207a0()
    void* ecx_3
    ecx_3.b = 1
    sub_41ed10(ecx_3)
    sub_420960(arg1, arg2, 1)
    int128_t* eax_14 = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    eax_14[0x12].d = *eax_14 + 1
    *(eax_14 + 0x124) = 1
    *(eax_14 + 0x128) = 0xa
    *(eax_14 + 0x12c) = 1
    eax_14[0x13].d = 0xa
    int32_t var_2c = 0
    int32_t var_20 = 0
    
    while (true)
        int32_t var_28 = var_20
        int32_t var_24_1 = var_2c
        void* eax_16
        int32_t ecx_6
        eax_16, ecx_6 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (arg2 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_4 = *(eax_16 + (arg2 << 2) + 0x30)
        int128_t* eax_17
        
        if (edx_4 != 0)
            eax_17 = sub_4fc1e0(ecx_6, edx_4)
        else
            eax_17, edx_4 = sub_4fc0d0()
            *(eax_17 + 4) = &data_83f3d3
            *(eax_16 + (arg2 << 2) + 0x30) = *(eax_17 + 0x1bc)
        
        char* esi_4 = *(eax_16 + 4)
        
        if (*(esi_4 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_4 == 0)
            sub_520800(eax_17, edx_4.b, esi_4, 0)
            
            if (*esi_4 == 0)
                sub_509540(esi_4)
        
        int32_t esi_5 = *(sub_4f7720(&var_28, arg2 i* 0x118 + ***esi_4, eax_17) + 0x434)
        int32_t edi_4 = data_31660f0
        int32_t eax_22
        int32_t ecx_11
        eax_22, ecx_11 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_4 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_8 = *(eax_22 + (edi_4 << 2) + 0x30)
        int128_t* eax_23
        
        if (edx_8 != 0)
            eax_23 = sub_4fc1e0(ecx_11, edx_8)
        else
            eax_23 = sub_4fc0d0()
            *(eax_23 + 4) = &data_83f3d3
            *(eax_22 + (edi_4 << 2) + 0x30) = *(eax_23 + 0x1bc)
        
        *eax_23 += 1
        int32_t edi_5 = data_31660e0
        int32_t eax_24
        int32_t ecx_12
        eax_24, ecx_12 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_5 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_10 = *(eax_24 + (edi_5 << 2) + 0x30)
        int128_t* eax_25
        
        if (edx_10 != 0)
            eax_25 = sub_4fc1e0(ecx_12, edx_10)
        else
            eax_25 = sub_4fc0d0()
            *(eax_25 + 4) = &data_83f3d3
            *(eax_24 + (edi_5 << 2) + 0x30) = *(eax_25 + 0x1bc)
        
        *eax_25 += 1
        int32_t edi_6 = data_31660f4
        int32_t eax_26
        int32_t ecx_14
        eax_26, ecx_14 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_6 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_11 = *(eax_26 + (edi_6 << 2) + 0x30)
        int128_t* eax_27
        
        if (edx_11 != 0)
            eax_27 = sub_4fc1e0(ecx_14, edx_11)
        else
            eax_27 = sub_4fc0d0()
            *(eax_27 + 4) = &data_83f3d3
            *(eax_26 + (edi_6 << 2) + 0x30) = *(eax_27 + 0x1bc)
        
        *eax_27 += 1
        int32_t edi_7 = data_31660ec
        int32_t eax_28
        int32_t ecx_15
        eax_28, ecx_15 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_7 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_13 = *(eax_28 + (edi_7 << 2) + 0x30)
        int128_t* eax_29
        
        if (edx_13 != 0)
            eax_29 = sub_4fc1e0(ecx_15, edx_13)
        else
            eax_29 = sub_4fc0d0()
            *(eax_29 + 4) = &data_83f3d3
            *(eax_28 + (edi_7 << 2) + 0x30) = *(eax_29 + 0x1bc)
        
        *eax_29 += 1
        int32_t edi_8 = data_31660e8
        int32_t eax_30
        int32_t ecx_17
        eax_30, ecx_17 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_8 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_14 = *(eax_30 + (edi_8 << 2) + 0x30)
        int128_t* eax_31
        
        if (edx_14 != 0)
            eax_31 = sub_4fc1e0(ecx_17, edx_14)
        else
            eax_31 = sub_4fc0d0()
            *(eax_31 + 4) = &data_83f3d3
            *(eax_30 + (edi_8 << 2) + 0x30) = *(eax_31 + 0x1bc)
        
        *eax_31 += 1
        int32_t edi_9 = data_31660e4
        int32_t eax_32
        int32_t ecx_18
        eax_32, ecx_18 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_9 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_16 = *(eax_32 + (edi_9 << 2) + 0x30)
        int128_t* eax_33
        
        if (edx_16 != 0)
            eax_33 = sub_4fc1e0(ecx_18, edx_16)
        else
            eax_33, edx_16 = sub_4fc0d0()
            *(eax_33 + 4) = &data_83f3d3
            *(eax_32 + (edi_9 << 2) + 0x30) = *(eax_33 + 0x1bc)
        
        float edi_10 = data_31660f4
        *eax_33 += 1
        int32_t var_40_1 = 1
        sub_4fa4e0(esi_5, edi_10, edx_16.b)
        int32_t eax_35
        int32_t ecx_20
        eax_35, ecx_20 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_10 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_17 = *(eax_35 + (edi_10 << 2) + 0x30)
        int128_t* eax_36
        
        if (edx_17 != 0)
            eax_36 = sub_4fc1e0(ecx_20, edx_17)
        else
            eax_36 = sub_4fc0d0()
            *(eax_36 + 4) = &data_83f3d3
            edx_17 = *(eax_36 + 0x1bc)
            *(eax_35 + (edi_10 << 2) + 0x30) = edx_17
        
        long double x87_r7_1 = float.t(0)
        int32_t var_40_2 = 1
        *(eax_36 + 0x14) = fconvert.s(x87_r7_1)
        eax_36[1].d = fconvert.s(x87_r7_1)
        char edx_18 = sub_4fa4e0(esi_5, data_31660f0, edx_17.b)
        int32_t var_48_1 = 1
        sub_4fa4e0(esi_5, data_31660ec, edx_18)
        float edx_19 = data_31660e4
        int32_t var_50_1 = 1
        char edx_20 = sub_4fa4e0(esi_5, edx_19, edx_19.b)
        int32_t var_58_1 = 1
        sub_4fa4e0(esi_5, data_31660e8, edx_20)
        int32_t edi_11 = data_31660f0
        int32_t eax_43
        int32_t ecx_22
        eax_43, ecx_22 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_11 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_21 = *(eax_43 + (edi_11 << 2) + 0x30)
        int128_t* eax_44
        
        if (edx_21 != 0)
            eax_44 = sub_4fc1e0(ecx_22, edx_21)
        else
            eax_44 = sub_4fc0d0()
            *(eax_44 + 4) = &data_83f3d3
            *(eax_43 + (edi_11 << 2) + 0x30) = *(eax_44 + 0x1bc)
        
        int32_t edi_12 = data_31660ec
        *(eax_44 + 0x22) = 1
        int32_t eax_45
        int32_t ecx_24
        eax_45, ecx_24 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_12 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_22 = *(eax_45 + (edi_12 << 2) + 0x30)
        int128_t* eax_46
        
        if (edx_22 != 0)
            eax_46 = sub_4fc1e0(ecx_24, edx_22)
        else
            eax_46 = sub_4fc0d0()
            *(eax_46 + 4) = &data_83f3d3
            *(eax_45 + (edi_12 << 2) + 0x30) = *(eax_46 + 0x1bc)
        
        int32_t edi_13 = data_31660e8
        *(eax_46 + 0x22) = 1
        int32_t eax_47
        int32_t ecx_25
        eax_47, ecx_25 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_13 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_24 = *(eax_47 + (edi_13 << 2) + 0x30)
        int128_t* eax_48
        
        if (edx_24 != 0)
            eax_48 = sub_4fc1e0(ecx_25, edx_24)
        else
            eax_48 = sub_4fc0d0()
            *(eax_48 + 4) = &data_83f3d3
            *(eax_47 + (edi_13 << 2) + 0x30) = *(eax_48 + 0x1bc)
        
        int32_t edi_14 = data_31660e4
        *(eax_48 + 0x22) = 1
        int32_t eax_49
        int32_t ecx_27
        eax_49, ecx_27 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (edi_14 s>= 0x100)
            break
        
        int32_t edx_25 = *(eax_49 + (edi_14 << 2) + 0x30)
        int128_t* eax_50
        
        if (edx_25 != 0)
            eax_50 = sub_4fc1e0(ecx_27, edx_25)
        else
            eax_50 = sub_4fc0d0()
            *(eax_50 + 4) = &data_83f3d3
            *(eax_49 + (edi_14 << 2) + 0x30) = *(eax_50 + 0x1bc)
        
        *(eax_50 + 0x22) = 1
        int32_t eax_52 = var_2c + 1
        var_2c = eax_52
        
        if (eax_52 s>= 0xa)
            int32_t ecx_28
            ecx_28.b = 1
            int128_t* result = sub_41f920(arg1, arg2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

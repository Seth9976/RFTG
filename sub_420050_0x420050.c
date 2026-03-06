// 函数名称: sub_420050
// 虚拟地址: 0x420050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_420050(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_696056
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_44 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = *(data_27e7a40 + 0x548)
    
    if ((data_3166110 & 1) == 0)
        data_3166110.d |= 1
        int32_t var_c_1 = 0
        data_316610c = sub_4f5220(data_307c5a4, "animPhaseVisibity")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3166110 & 2) == 0)
        data_3166110.d |= 2
        int32_t var_c_3 = 1
        data_3166108 = sub_4f5220(data_307c5a4, "btn_phaseButtonSelected")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3166110 & 4) == 0)
        data_3166110.d |= 4
        int32_t var_c_5 = 2
        data_3166104 = sub_4f5220(data_307c5a4, "btn_phaseButton")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3166110 & 8) == 0)
        data_3166110.d |= 8
        int32_t var_c_7 = 3
        data_3166100 = sub_4f5220(data_307c5a4, "img_phaseNotButton")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3166110 & 0x10) == 0)
        data_3166110.d |= 0x10
        int32_t var_c_9 = 4
        data_31660fc = sub_4f5220(data_307c5a4, "img_phaseNotButtonHighlight")
        int32_t var_c_10 = 0xffffffff
    
    int32_t var_28 = 0
    int32_t i_1 = 0
    int32_t i
    
    do
        int32_t i_2 = i_1
        int32_t var_20 = 0
        void* eax_11
        int32_t ecx_3
        eax_11, ecx_3 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (arg2 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_11 + (arg2 << 2) + 0x30)
        int128_t* eax_12
        
        if (edx_3 != 0)
            eax_12 = sub_4fc1e0(ecx_3, edx_3)
        else
            eax_12 = sub_4fc0d0()
            *(eax_12 + 4) = &data_83f3d3
            edx_3 = *(eax_12 + 0x1bc)
            *(eax_11 + (arg2 << 2) + 0x30) = edx_3
        
        char* esi_3 = *(eax_11 + 4)
        
        if (*(esi_3 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_3 == 0)
            sub_520800(eax_12, edx_3.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        int32_t esi_4 = *(sub_4f7720(&var_20, arg2 * 0x118 + ***esi_3, eax_12) + 0x434)
        float edx_7 = data_3166108
        int32_t var_48_1 = 0
        char edx_8 = sub_4fa4e0(esi_4, edx_7, edx_7.b)
        int32_t var_50_1 = 0
        char edx_9 = sub_4fa4e0(esi_4, data_3166104, edx_8)
        int32_t var_58_1 = 1
        sub_4fa4e0(esi_4, data_3166100, edx_9)
        float edx_10 = data_31660fc
        int32_t var_60_1 = 1
        sub_4fa4e0(esi_4, edx_10, edx_10.b)
        
        if (i_1 u> 9)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb46, "PhaseButtonToRole")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t j
        
        switch (i_1)
            case 0
                j = 0
            case 1
                j = 1
            case 2
                j = 2
            case 3
                j = 3
            case 4
                j = 4
            case 5
                j = 5
            case 6
                j = 6
            case 7
                j = 7
            case 8
                j = 8
            case 9
                j = 9
        
        void* ecx_8 = *(data_27e7a40 + 0x548)
        int32_t edi_2 = *(ecx_8 + 0x1c8)
        int32_t eax_24 = 0
        char var_2d_1
        
        if (edi_2 s<= 0)
        label_4202fe:
            var_2d_1 = 0
        else
            ecx_8 += 0x188
            
            while (*ecx_8 != j)
                eax_24 += 1
                ecx_8 += 4
                
                if (eax_24 s>= edi_2)
                    goto label_4202fe
            
            var_2d_1 = 1
        
        float edi_3 = data_316610c
        ecx_8.b = var_2d_1 == 0
        uint32_t edx_11 = zx.d(ecx_8.b)
        uint32_t var_48_2 = edx_11
        sub_4fa4e0(esi_4, edi_3, edx_11.b)
        int32_t eax_26
        int32_t ecx_9
        eax_26, ecx_9 = sub_4fc3d0(&data_be1cb8, esi_4)
        
        if (edi_3 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_12 = *(eax_26 + (edi_3 << 2) + 0x30)
        int128_t* eax_27
        
        if (edx_12 != 0)
            eax_27 = sub_4fc1e0(ecx_9, edx_12)
        else
            eax_27 = sub_4fc0d0()
            *(eax_27 + 4) = &data_83f3d3
            *(eax_26 + (edi_3 << 2) + 0x30) = *(eax_27 + 0x1bc)
        
        long double x87_r7_1 = float.t(0)
        *(eax_27 + 0x14) = fconvert.s(x87_r7_1)
        eax_27[1].d = fconvert.s(x87_r7_1)
        sub_41f430(i_1, 0)
        
        if (var_2d_1 == 0)
            int32_t edi_6 = data_3166108
            int32_t eax_34
            int32_t ecx_16
            eax_34, ecx_16 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_6 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_17 = *(eax_34 + (edi_6 << 2) + 0x30)
            int128_t* eax_35
            
            if (edx_17 != 0)
                eax_35 = sub_4fc1e0(ecx_16, edx_17)
            else
                eax_35 = sub_4fc0d0()
                *(eax_35 + 4) = &data_83f3d3
                *(eax_34 + (edi_6 << 2) + 0x30) = *(eax_35 + 0x1bc)
            
            int32_t edi_7 = data_3166104
            *(eax_35 + 0x22) = 1
            int32_t eax_36
            int32_t ecx_17
            eax_36, ecx_17 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_7 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_19 = *(eax_36 + (edi_7 << 2) + 0x30)
            int128_t* eax_37
            
            if (edx_19 != 0)
                eax_37 = sub_4fc1e0(ecx_17, edx_19)
            else
                eax_37 = sub_4fc0d0()
                *(eax_37 + 4) = &data_83f3d3
                *(eax_36 + (edi_7 << 2) + 0x30) = *(eax_37 + 0x1bc)
            
            *(eax_37 + 0x22) = 1
        else
            int32_t ebx_3 = var_28
            var_28 += 1
            void* eax_28 = sub_4fc3d0(&data_be1cb8, esi_4)
            *(eax_28 + 0x20) = *(eax_28 + 0x18) + 1
            *(eax_28 + 0x24) = 0
            int32_t edi_4 = data_3166108
            *(eax_28 + 0x28) = ebx_3
            int32_t eax_29
            int32_t ecx_13
            eax_29, ecx_13 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_4 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_14 = *(eax_29 + (edi_4 << 2) + 0x30)
            int128_t* eax_30
            
            if (edx_14 != 0)
                eax_30 = sub_4fc1e0(ecx_13, edx_14)
            else
                eax_30 = sub_4fc0d0()
                *(eax_30 + 4) = &data_83f3d3
                *(eax_29 + (edi_4 << 2) + 0x30) = *(eax_30 + 0x1bc)
            
            int32_t edi_5 = data_3166104
            *(eax_30 + 0x22) = 0
            int32_t eax_31
            int32_t ecx_14
            eax_31, ecx_14 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_5 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_16 = *(eax_31 + (edi_5 << 2) + 0x30)
            
            if (edx_16 != 0)
                *(sub_4fc1e0(ecx_14, edx_16) + 0x22) = 0
            else
                int128_t* eax_32 = sub_4fc0d0()
                *(eax_32 + 4) = &data_83f3d3
                *(eax_31 + (edi_5 << 2) + 0x30) = *(eax_32 + 0x1bc)
                *(eax_32 + 0x22) = 0
        
        i = i_1 + 1
        i_1 = i
    while (i s< 0xa)
    int32_t eax_39 = *(ecx + 0x1c8)
    int32_t eax_40 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t edx_21 = *(eax_40 + (arg2 << 2) + 0x30)
    int128_t* result
    
    if (edx_21 != 0)
        result = sub_4fc1e0(arg2, edx_21)
    else
        result = sub_4fc0d0()
        *(result + 4) = &data_83f3d3
        *(eax_40 + (arg2 << 2) + 0x30) = *(result + 0x1bc)
    
    int32_t edx_23 = *result
    *(result + 0x124) = 1
    result[0x12].d = edx_23 + 1
    *(result + 0x128) = eax_39
    *(result + 0x12c) = 1
    result[0x13].d = 0xa
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

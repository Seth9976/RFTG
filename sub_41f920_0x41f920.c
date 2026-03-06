// 函数名称: sub_41f920
// 虚拟地址: 0x41f920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_41f920(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6953f4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_4c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_4 = *(data_27e7a40 + 0x548)
    *(eax_4 + 0x20c) = 0
    void* ecx
    sub_41ed10(ecx)
    
    if ((data_3165e84 & 1) == 0)
        data_3165e84.d |= 1
        int32_t var_c_1 = 0
        data_3165e80 = sub_4f5220(data_307c5a4, "animPhaseVisibity")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165e84 & 2) == 0)
        data_3165e84.d |= 2
        int32_t var_c_3 = 1
        data_3165e7c = sub_4f5220(data_307c5a4, "btn_phaseButtonSelected")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165e84 & 4) == 0)
        data_3165e84.d |= 4
        int32_t var_c_5 = 2
        data_3165e78 = sub_4f5220(data_307c5a4, "btn_phaseButton")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165e84 & 8) == 0)
        data_3165e84.d |= 8
        int32_t var_c_7 = 3
        data_3165e74 = sub_4f5220(data_307c5a4, "img_phaseNotButton")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165e84 & 0x10) == 0)
        data_3165e84.d |= 0x10
        int32_t var_c_9 = 4
        data_3165e70 = sub_4f5220(data_307c5a4, "img_phaseNotButtonHighlight")
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165e84 & 0x20) == 0)
        data_3165e84.d |= 0x20
        int32_t var_c_11 = 5
        data_3165e6c = sub_4f5220(data_307c5a4, "animPrestige")
        int32_t var_c_12 = 0xffffffff
    
    int32_t var_30 = 0
    int32_t i_1 = 0
    int32_t i
    
    do
        int32_t i_2 = i_1
        int32_t var_28 = 0
        void* eax_13
        int32_t ecx_4
        eax_13, ecx_4 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (arg2 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_13 + (arg2 << 2) + 0x30)
        int128_t* eax_14
        
        if (edx_3 != 0)
            eax_14 = sub_4fc1e0(ecx_4, edx_3)
        else
            eax_14 = sub_4fc0d0()
            *(eax_14 + 4) = &data_83f3d3
            edx_3 = *(eax_14 + 0x1bc)
            *(eax_13 + (arg2 << 2) + 0x30) = edx_3
        
        char* esi_3 = *(eax_13 + 4)
        
        if (*(esi_3 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_3 == 0)
            sub_520800(eax_14, edx_3.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        int32_t ebx_2 = *(sub_4f7720(&var_28, arg2 * 0x118 + ***esi_3, eax_14) + 0x434)
        float edx_7 = data_3165e7c
        int32_t var_50_1 = 1
        char edx_8 = sub_4fa4e0(ebx_2, edx_7, edx_7.b)
        int32_t var_58_1 = 1
        char edx_9 = sub_4fa4e0(ebx_2, data_3165e78, edx_8)
        int32_t var_60_1 = 0
        sub_4fa4e0(ebx_2, data_3165e74, edx_9)
        float edx_10 = data_3165e70
        int32_t var_68_1 = 0
        char edx_11 = sub_4fa4e0(ebx_2, edx_10, edx_10.b)
        int32_t var_70_1 = 1
        char edx_12 = sub_4fa4e0(ebx_2, data_3165e6c, edx_11)
        
        if (i_1 u> 9)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb33, "PhaseButtonToPhase")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t j
        
        switch (i_1)
            case 0
                j = 0xa
            label_41fbc3:
                bool eax_27 = sub_41eb70(j)
                float edi_2 = data_3165e80
                uint32_t var_50_3 = zx.d(eax_27 == 0)
                sub_4fa4e0(ebx_2, edi_2, j.b)
                int32_t eax_29
                int32_t ecx_10
                eax_29, ecx_10 = sub_4fc3d0(&data_be1cb8, ebx_2)
                
                if (edi_2 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_14 = *(eax_29 + (edi_2 << 2) + 0x30)
                int128_t* eax_30
                
                if (edx_14 != 0)
                    eax_30 = sub_4fc1e0(ecx_10, edx_14)
                else
                    eax_30 = sub_4fc0d0()
                    *(eax_30 + 4) = &data_83f3d3
                    *(eax_29 + (edi_2 << 2) + 0x30) = *(eax_30 + 0x1bc)
                
                long double x87_r7_2 = float.t(0)
                *(eax_30 + 0x14) = fconvert.s(x87_r7_2)
                eax_30[1].d = fconvert.s(x87_r7_2)
                void* edx_18 = *(data_27e7a40 + 0x548)
                int32_t ecx_15 = *(edx_18 + 0x20c)
                int32_t eax_37 = 0
                
                if (ecx_15 s<= 0)
                label_41fcd5:
                    int32_t edi_4 = data_3165e74
                    int32_t eax_34
                    int32_t ecx_13
                    eax_34, ecx_13 = sub_4fc3d0(&data_be1cb8, ebx_2)
                    
                    if (edi_4 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_17 = *(eax_34 + (edi_4 << 2) + 0x30)
                    int128_t* eax_35
                    
                    if (edx_17 != 0)
                        eax_35 = sub_4fc1e0(ecx_13, edx_17)
                    else
                        eax_35 = sub_4fc0d0()
                        *(eax_35 + 4) = &data_83f3d3
                        *(eax_34 + (edi_4 << 2) + 0x30) = *(eax_35 + 0x1bc)
                    
                    int32_t edi_9 = data_3165e70
                    *(eax_35 + 0x22) = 1
                    int32_t eax_45
                    int32_t ecx_18
                    eax_45, ecx_18 = sub_4fc3d0(&data_be1cb8, ebx_2)
                    
                    if (edi_9 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_21 = *(eax_45 + (edi_9 << 2) + 0x30)
                    int128_t* eax_46
                    
                    if (edx_21 != 0)
                        eax_46 = sub_4fc1e0(ecx_18, edx_21)
                    else
                        eax_46 = sub_4fc0d0()
                        *(eax_46 + 4) = &data_83f3d3
                        *(eax_45 + (edi_9 << 2) + 0x30) = *(eax_46 + 0x1bc)
                    
                    *(eax_46 + 0x22) = 1
                else
                    void* edx_19 = edx_18 + 0x1cc
                    
                    while (*edx_19 != j)
                        eax_37 += 1
                        edx_19 += 4
                        
                        if (eax_37 s>= ecx_15)
                            goto label_41fcd5
                    
                    int32_t var_1c_1 = var_30
                    var_30 += 1
                    void* eax_40 = sub_4fc3d0(&data_be1cb8, ebx_2)
                    *(eax_40 + 0x20) = *(eax_40 + 0x18) + 1
                    *(eax_40 + 0x24) = 0
                    int32_t edi_5 = data_3165e74
                    *(eax_40 + 0x28) = var_1c_1
                    int128_t* eax_42 = sub_4f6e90(edi_5, sub_4fc3d0(&data_be1cb8, ebx_2), &data_83f3d3)
                    int32_t edi_7 = data_3165e70
                    *(eax_42 + 0x22) = 0
                    *(sub_4f6e90(edi_7, sub_4fc3d0(&data_be1cb8, ebx_2), &data_83f3d3) + 0x22) = 0
            case 1, 7
                float edi_3 = data_3165e80
                int32_t var_50_4 = 1
                sub_4fa4e0(ebx_2, edi_3, edx_12)
                int32_t eax_32
                int32_t ecx_11
                eax_32, ecx_11 = sub_4fc3d0(&data_be1cb8, ebx_2)
                
                if (edi_3 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_16 = *(eax_32 + (edi_3 << 2) + 0x30)
                int128_t* eax_33
                
                if (edx_16 != 0)
                    eax_33 = sub_4fc1e0(ecx_11, edx_16)
                else
                    eax_33 = sub_4fc0d0()
                    *(eax_33 + 4) = &data_83f3d3
                    *(eax_32 + (edi_3 << 2) + 0x30) = *(eax_33 + 0x1bc)
                
                long double x87_r7_1 = float.t(0)
                *(eax_33 + 0x14) = fconvert.s(x87_r7_1)
                eax_33[1].d = fconvert.s(x87_r7_1)
                goto label_41fcd5
            case 2
                j = 1
                goto label_41fbc3
            case 3
                j = 2
                goto label_41fbc3
            case 4
                j = 8
                goto label_41fbc3
            case 5
                j = 3
                goto label_41fbc3
            case 6
                j = 9
                goto label_41fbc3
            case 8
                j = 4
                goto label_41fbc3
            case 9
                j = 5
                goto label_41fbc3
        
        i = i_1 + 1
        i_1 = i
    while (i s< 0xa)
    int32_t ecx_19 = *(eax_4 + 0x20c)
    int32_t eax_49
    int32_t ecx_20
    eax_49, ecx_20 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t edx_24 = *(eax_49 + (arg2 << 2) + 0x30)
    int128_t* result
    
    if (edx_24 != 0)
        result = sub_4fc1e0(ecx_20, edx_24)
    else
        result = sub_4fc0d0()
        *(result + 4) = &data_83f3d3
        *(eax_49 + (arg2 << 2) + 0x30) = *(result + 0x1bc)
    
    result[0x12].d = *result + 1
    *(result + 0x124) = 1
    *(result + 0x128) = ecx_19
    *(result + 0x12c) = 1
    result[0x13].d = 0xa
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

// 函数名称: sub_424f90
// 虚拟地址: 0x424f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_424f90(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6951a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_54
    int32_t eax_2 = __security_cookie ^ &var_54
    int32_t __saved_edi
    int32_t var_64 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edx = data_27e7a40
    void* eax_5 = *(edx + 0x548)
    
    if (eax_5 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = *(edx + 0x74)
    int32_t ecx = *(eax_5 + 0x45844)
    int32_t var_30
    __builtin_memset(&var_30, 0, 0x14)
    sub_4b1650(ecx, edx_1)
    
    if ((data_3165e08 & 1) == 0)
        data_3165e08.d |= 1
        int32_t var_c_1 = 0
        data_3165e04 = sub_4f5220(data_307c548, "txtWorldType")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165e08 & 2) == 0)
        data_3165e08.d |= 2
        int32_t var_c_3 = 1
        data_3165e00 = sub_4f5220(data_307c548, "txtBonusVal")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165e08 & 4) == 0)
        data_3165e08.d |= 4
        int32_t var_c_5 = 2
        data_3165dfc = sub_4f5220(data_307c548, "imgWorldType")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165e08 & 8) == 0)
        data_3165e08.d |= 8
        int32_t var_c_7 = 3
        data_3165df8 = sub_4f5220(data_307c544, "tblSpecMilitary")
        int32_t var_c_8 = 0xffffffff
    
    int32_t edi = 0
    void* i = nullptr
    int32_t var_50 = 0
    void* i_1 = nullptr
    char* var_4c
    int32_t var_3c
    
    do
        if (*(&var_30 + i) s> 0)
            var_54 = sub_424eb0(*(i + 0x84183c))
            int32_t eax_16 = sub_424f20(*(i + 0x84183c))
            int32_t ebx_1 = data_3165df8
            var_3c = 0
            int32_t var_38_1 = edi
            void* eax_17
            int32_t ecx_2
            eax_17, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (ebx_1 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_3 = *(eax_17 + (ebx_1 << 2) + 0x30)
            int128_t* eax_18
            
            if (edx_3 != 0)
                eax_18 = sub_4fc1e0(ecx_2, edx_3)
            else
                eax_18, edx_3 = sub_4fc0d0()
                *(eax_18 + 4) = &data_83f3d3
                *(eax_17 + (ebx_1 << 2) + 0x30) = *(eax_18 + 0x1bc)
            
            char* esi_2 = *(eax_17 + 4)
            
            if (*(esi_2 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_2 == 0)
                sub_520800(eax_18, edx_3.b, esi_2, 0)
                
                if (*esi_2 == 0)
                    sub_509540(esi_2)
            
            int32_t edi_2 = *(sub_4f7720(&var_3c, ebx_1 * 0x118 + ***esi_2, eax_18) + 0x434)
            int32_t ebx_4 = data_3165e04
            int32_t eax_23
            int32_t ecx_6
            eax_23, ecx_6 = sub_4fc3d0(&data_be1cb8, edi_2)
            
            if (ebx_4 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_6 = *(eax_23 + (ebx_4 << 2) + 0x30)
            int128_t* eax_24
            
            if (edx_6 != 0)
                eax_24 = sub_4fc1e0(ecx_6, edx_6)
            else
                eax_24 = sub_4fc0d0()
                *(eax_24 + 4) = &data_83f3d3
                *(eax_23 + (ebx_4 << 2) + 0x30) = *(eax_24 + 0x1bc)
            
            char* eax_25 = var_54
            *(eax_24 + 0x64) = *eax_24 + 1
            sub_4c4590(eax_25)
            int32_t ebx_6 = data_3165dfc
            *(eax_24 + 0x151) = 1
            int32_t eax_26
            int32_t ecx_8
            eax_26, ecx_8 = sub_4fc3d0(&data_be1cb8, edi_2)
            
            if (ebx_6 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_9 = *(eax_26 + (ebx_6 << 2) + 0x30)
            int128_t* eax_27
            
            if (edx_9 != 0)
                eax_27 = sub_4fc1e0(ecx_8, edx_9)
            else
                eax_27 = sub_4fc0d0()
                *(eax_27 + 4) = &data_83f3d3
                *(eax_26 + (ebx_6 << 2) + 0x30) = *(eax_27 + 0x1bc)
            
            *(eax_27 + 0x94) = *eax_27 + 1
            *(eax_27 + 0x98) = eax_16
            int32_t var_c_9 = 4
            char* eax_30 = *sub_46e4d0(*(&var_30 + i_1), i_1, &var_4c)
            var_54 = &data_83f3d3
            
            if (eax_30 != 0)
                var_54 = eax_30
            
            int32_t ebx_7 = data_3165e00
            int32_t eax_31
            int32_t ecx_12
            eax_31, ecx_12 = sub_4fc3d0(&data_be1cb8, edi_2)
            
            if (ebx_7 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_13 = *(eax_31 + (ebx_7 << 2) + 0x30)
            int128_t* eax_32
            
            if (edx_13 != 0)
                eax_32 = sub_4fc1e0(ecx_12, edx_13)
            else
                eax_32 = sub_4fc0d0()
                *(eax_32 + 4) = &data_83f3d3
                *(eax_31 + (ebx_7 << 2) + 0x30) = *(eax_32 + 0x1bc)
            
            char* eax_33 = var_54
            *(eax_32 + 0x64) = *eax_32 + 1
            sub_4c4590(eax_33)
            *(eax_32 + 0x151) = 1
            int32_t var_c_10 = 0xffffffff
            char* eax_34 = var_4c
            
            if (eax_34 != 0 && *eax_34 != 0)
                void* eax_36 = sub_4c4060(&var_4c)
                int32_t temp0_1 = *(eax_36 + 4)
                *(eax_36 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_12 = *(eax_36 + 0xc) + 0x10
                    sub_4f4430(eax_36, sub_4f4380(esi_12), esi_12)
            
            var_50 += 1
            i = i_1
            edi = var_50
        
        i += 4
        i_1 = i
    while (i s< 0x14)
    
    int32_t eax_40 = edx_1 * 0xb4
    
    if (*(eax_40 + ecx + 0x62) s> 0)
        int32_t ebx_10 = data_3165df8
        var_3c = 0
        int32_t var_38_2 = edi
        void* eax_42
        int32_t ecx_15
        eax_42, ecx_15 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (ebx_10 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_16 = *(eax_42 + (ebx_10 << 2) + 0x30)
        int128_t* eax_49
        
        if (edx_16 != 0)
            eax_49 = sub_4fc1e0(ecx_15, edx_16)
        else
            eax_49 = sub_4fc0d0()
            *(eax_49 + 4) = &data_83f3d3
            edx_16 = *(eax_49 + 0x1bc)
            *(eax_42 + (ebx_10 << 2) + 0x30) = edx_16
        
        char* esi_15 = *(eax_42 + 4)
        
        if (*(esi_15 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_15 == 0)
            sub_520800(eax_49, edx_16.b, esi_15, 0)
            
            if (*esi_15 == 0)
                sub_509540(esi_15)
        
        int32_t edi_5 = *(sub_4f7720(&var_3c, ebx_10 * 0x118 + ***esi_15, eax_49) + 0x434)
        int32_t ebx_13 = data_3165e04
        int32_t eax_56
        int32_t ecx_18
        eax_56, ecx_18 = sub_4fc3d0(&data_be1cb8, edi_5)
        
        if (ebx_13 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_18 = *(eax_56 + (ebx_13 << 2) + 0x30)
        int128_t* eax_58
        
        if (edx_18 != 0)
            eax_58 = sub_4fc1e0(ecx_18, edx_18)
        else
            eax_58 = sub_4fc0d0()
            *(eax_58 + 4) = &data_83f3d3
            *(eax_56 + (ebx_13 << 2) + 0x30) = *(eax_58 + 0x1bc)
        
        *(eax_58 + 0x64) = *eax_58 + 1
        sub_4c4590("Temporary")
        int32_t eax_59 = data_307c3fc
        int32_t ebx_15 = data_3165dfc
        *(eax_58 + 0x151) = 1
        int32_t eax_60
        int32_t ecx_20
        eax_60, ecx_20 = sub_4fc3d0(&data_be1cb8, edi_5)
        
        if (ebx_15 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_21 = *(eax_60 + (ebx_15 << 2) + 0x30)
        int128_t* eax_62
        
        if (edx_21 != 0)
            eax_62 = sub_4fc1e0(ecx_20, edx_21)
        else
            eax_62 = sub_4fc0d0()
            *(eax_62 + 4) = &data_83f3d3
            *(eax_60 + (ebx_15 << 2) + 0x30) = *(eax_62 + 0x1bc)
        
        *(eax_62 + 0x94) = *eax_62 + 1
        *(eax_62 + 0x98) = eax_59
        int32_t var_c_11 = 5
        char* eax_65 = *sub_46e4d0(sx.d(*(eax_40 + ecx + 0x62)), eax_40 + ecx + 0x62, &var_54)
        var_4c = &data_83f3d3
        
        if (eax_65 != 0)
            var_4c = eax_65
        
        int32_t ebx_16 = data_3165e00
        int32_t eax_66
        int32_t ecx_24
        eax_66, ecx_24 = sub_4fc3d0(&data_be1cb8, edi_5)
        
        if (ebx_16 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_25 = *(eax_66 + (ebx_16 << 2) + 0x30)
        int128_t* eax_68
        
        if (edx_25 != 0)
            eax_68 = sub_4fc1e0(ecx_24, edx_25)
        else
            eax_68 = sub_4fc0d0()
            *(eax_68 + 4) = &data_83f3d3
            *(eax_66 + (ebx_16 << 2) + 0x30) = *(eax_68 + 0x1bc)
        
        char* eax_69 = var_4c
        *(eax_68 + 0x64) = *eax_68 + 1
        sub_4c4590(eax_69)
        *(eax_68 + 0x151) = 1
        int32_t var_c_12 = 0xffffffff
        char* eax_70 = var_54
        
        if (eax_70 != 0 && *eax_70 != 0)
            void* eax_72 = sub_4c4060(&var_54)
            int32_t temp1_1 = *(eax_72 + 4)
            *(eax_72 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_25 = *(eax_72 + 0xc) + 0x10
                sub_4f4430(eax_72, sub_4f4380(esi_25), esi_25)
        
        edi = var_50 + 1
    
    int32_t ebx_19 = data_3165df8
    int32_t eax_75
    int32_t ecx_26
    eax_75, ecx_26 = sub_4fc3d0(&data_be1cb8, arg1)
    
    if (ebx_19 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_28 = *(eax_75 + (ebx_19 << 2) + 0x30)
    int128_t* result
    
    if (edx_28 != 0)
        result = sub_4fc1e0(ecx_26, edx_28)
    else
        result = sub_4fc0d0()
        *(result + 4) = &data_83f3d3
        *(eax_75 + (ebx_19 << 2) + 0x30) = *(result + 0x1bc)
    
    result[0x12].d = *result + 1
    *(result + 0x124) = 1
    *(result + 0x128) = edi
    *(result + 0x12c) = 1
    result[0x13].d = edi
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_54)
    return result
}

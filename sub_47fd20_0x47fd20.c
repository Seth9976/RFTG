// 函数名称: sub_47fd20
// 虚拟地址: 0x47fd20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47fd20(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6940d6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_4c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_3165adc & 1) != 0
    *(eax_3 + 0x2c) = sub_47fba0
    
    if (not(cond:0))
        data_3165adc.d |= 1
        int32_t var_c_1 = 0
        data_3165ad8 = sub_4f5220(data_307c62c, "tblProfiles")
        int32_t var_c_2 = 0xffffffff
    
    int128_t* eax_7 = sub_4f6e90(data_3165ad8, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    bool cond:1 = (data_3165adc & 2) != 0
    *(eax_7 + 0x11c) = sub_47fbe0
    
    if (not(cond:1))
        data_3165adc.d |= 2
        int32_t var_c_3 = 1
        data_3165ad4 = sub_4f5220(data_307c630, "Avatar")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165adc & 4) == 0)
        data_3165adc.d |= 4
        int32_t var_c_5 = 2
        data_3165ad0 = sub_4f5220(data_307c630, "MyName")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165adc & 8) == 0)
        data_3165adc.d |= 8
        int32_t var_c_7 = 3
        data_3165acc = sub_4f5220(data_307c630, "txtNewProfile")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165adc & 0x10) == 0)
        data_3165adc.d |= 0x10
        int32_t var_c_9 = 4
        data_3165ac8 = sub_4f5220(data_307c630, "btnTrash")
        int32_t var_c_10 = 0xffffffff
    
    int32_t ebx = *(data_27e7a58 + 4)
    int32_t var_28 = ebx
    
    if (ebx s< 4)
        ebx += 1
        var_28 = ebx
    
    int128_t* eax_14 = sub_4f6e90(data_3165ad8, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    eax_14[0x12].d = *eax_14 + 1
    *(eax_14 + 0x124) = 1
    *(eax_14 + 0x128) = ebx
    *(eax_14 + 0x12c) = 1
    eax_14[0x13].d = ebx
    int32_t result = 0
    int32_t result_1 = 0
    
    if (ebx s> 0)
        int32_t var_2c_1 = 0
        
        do
            int32_t ebx_1 = data_3165ad8
            int32_t var_20 = 0
            int32_t result_2 = result_1
            void* eax_15
            int32_t ecx_5
            eax_15, ecx_5 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (ebx_1 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_4 = *(eax_15 + (ebx_1 << 2) + 0x30)
            int128_t* eax_16
            
            if (edx_4 != 0)
                eax_16 = sub_4fc1e0(ecx_5, edx_4)
            else
                eax_16, edx_4 = sub_4fc0d0()
                *(eax_16 + 4) = &data_83f3d3
                *(eax_15 + (ebx_1 << 2) + 0x30) = *(eax_16 + 0x1bc)
            
            char* esi_6 = *(eax_15 + 4)
            
            if (*(esi_6 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_6 == 0)
                sub_520800(eax_16, edx_4.b, esi_6, 0)
                
                if (*esi_6 == 0)
                    sub_509540(esi_6)
            
            int32_t edi_5 = *(sub_4f7720(&var_20, ebx_1 * 0x118 + ***esi_6, eax_16) + 0x434)
            int32_t* eax_21 = data_27e7a58
            char var_35_1 = 0
            
            if (result_1 != eax_21[1])
                char* eax_29 = *eax_21 + var_2c_1
                int32_t edi_6
                
                switch (*(eax_29 + 0x18))
                    case 5
                        edi_6 = data_307c02c
                    case 6, 0xd
                        edi_6 = data_307c030
                    case 7
                        edi_6 = data_307c034
                    case 8
                        edi_6 = data_307c000
                    case 9
                        edi_6 = data_307bff8
                    case 0xa
                        edi_6 = data_307bffc
                    case 0xb
                        edi_6 = data_307c004
                    case 0xc
                        edi_6 = data_307c038
                    case 0xe
                        edi_6 = data_307c014
                    case 0xf
                        edi_6 = data_307c008
                    case 0x10
                        edi_6 = data_307c010
                    case 0x11
                        edi_6 = data_307c00c
                    default
                        edi_6 = data_307c018
                
                int32_t ebx_8 = data_3165ad4
                int32_t eax_31
                int32_t ecx_13
                eax_31, ecx_13 = sub_4fc3d0(&data_be1cb8, edi_5)
                
                if (ebx_8 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_12 = *(eax_31 + (ebx_8 << 2) + 0x30)
                int128_t* eax_32
                
                if (edx_12 != 0)
                    eax_32 = sub_4fc1e0(ecx_13, edx_12)
                else
                    eax_32 = sub_4fc0d0()
                    *(eax_32 + 4) = &data_83f3d3
                    *(eax_31 + (ebx_8 << 2) + 0x30) = *(eax_32 + 0x1bc)
                
                int32_t edx_13 = *eax_32
                int32_t ebx_9 = data_3165ad0
                *(eax_32 + 0x98) = edi_6
                *(eax_32 + 0x94) = edx_13 + 1
                int32_t eax_33
                int32_t ecx_15
                eax_33, ecx_15 = sub_4fc3d0(&data_be1cb8, edi_5)
                
                if (ebx_9 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_15 = *(eax_33 + (ebx_9 << 2) + 0x30)
                int128_t* eax_34
                
                if (edx_15 != 0)
                    eax_34 = sub_4fc1e0(ecx_15, edx_15)
                else
                    eax_34 = sub_4fc0d0()
                    *(eax_34 + 4) = &data_83f3d3
                    *(eax_33 + (ebx_9 << 2) + 0x30) = *(eax_34 + 0x1bc)
                
                *(eax_34 + 0x64) = *eax_34 + 1
                sub_4c4590(eax_29)
                int32_t ebx_11 = data_3165acc
                *(eax_34 + 0x151) = 1
                int32_t eax_36
                int32_t ecx_17
                eax_36, ecx_17 = sub_4fc3d0(&data_be1cb8, edi_5)
                
                if (ebx_11 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_18 = *(eax_36 + (ebx_11 << 2) + 0x30)
                int128_t* eax_37
                
                if (edx_18 != 0)
                    eax_37 = sub_4fc1e0(ecx_17, edx_18)
                else
                    eax_37 = sub_4fc0d0()
                    *(eax_37 + 4) = &data_83f3d3
                    *(eax_36 + (ebx_11 << 2) + 0x30) = *(eax_37 + 0x1bc)
                
                *(eax_37 + 0x64) = *eax_37 + 1
                sub_4c4590(&data_83f3d3)
                void* ecx_19 = data_27e7a58
                *(eax_37 + 0x151) = 1
                
                if (result_1 != *(ecx_19 + 8))
                    var_35_1 = 1
                
                sub_4fa770(edi_5, 1, 0)
            else
                int32_t ebx_4 = data_3165acc
                int32_t eax_22
                int32_t ecx_10
                eax_22, ecx_10 = sub_4fc3d0(&data_be1cb8, edi_5)
                
                if (ebx_4 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_7 = *(eax_22 + (ebx_4 << 2) + 0x30)
                int128_t* eax_23
                
                if (edx_7 != 0)
                    eax_23 = sub_4fc1e0(ecx_10, edx_7)
                else
                    eax_23 = sub_4fc0d0()
                    *(eax_23 + 4) = &data_83f3d3
                    *(eax_22 + (ebx_4 << 2) + 0x30) = *(eax_23 + 0x1bc)
                
                *(eax_23 + 0x64) = *eax_23 + 1
                sub_4c4590("New Profile")
                int32_t ebx_6 = data_3165ad0
                *(eax_23 + 0x151) = 1
                int32_t eax_26
                int32_t ecx_11
                eax_26, ecx_11 = sub_4fc3d0(&data_be1cb8, edi_5)
                
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
                    eax_27 = sub_4fc1e0(ecx_11, edx_9)
                else
                    eax_27 = sub_4fc0d0()
                    *(eax_27 + 4) = &data_83f3d3
                    *(eax_26 + (ebx_6 << 2) + 0x30) = *(eax_27 + 0x1bc)
                
                *(eax_27 + 0x64) = *eax_27 + 1
                sub_4c4590(&data_83f3d3)
                *(eax_27 + 0x151) = 1
                sub_4fa770(edi_5, 1, 1)
            
            int32_t ebx_13 = data_3165ac8
            int32_t eax_38
            int32_t ecx_20
            eax_38, ecx_20 = sub_4fc3d0(&data_be1cb8, edi_5)
            
            if (ebx_13 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_22 = *(eax_38 + (ebx_13 << 2) + 0x30)
            int128_t* eax_39
            
            if (edx_22 != 0)
                eax_39 = sub_4fc1e0(ecx_20, edx_22)
            else
                eax_39, edx_22 = sub_4fc0d0()
                *(eax_39 + 4) = &data_83f3d3
                *(eax_38 + (ebx_13 << 2) + 0x30) = *(eax_39 + 0x1bc)
            
            edx_22.b = var_35_1 == 0
            var_2c_1 += 0x214
            *(eax_39 + 0x21) = edx_22.b
            result = result_1 + 1
            result_1 = result
        while (result s< var_28)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

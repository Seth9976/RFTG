// 函数名称: sub_4b5ad0
// 虚拟地址: 0x4b5ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b5ad0(int32_t arg1, char* arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6958f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_fc
    int32_t eax_2 = __security_cookie ^ &var_fc
    int32_t __saved_edi
    int32_t var_10c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_6 = data_3165f70
    
    if ((eax_6.b & 1) == 0)
        int32_t edx = data_307c69c
        eax_6 |= 1
        data_3165f70 = eax_6
        data_3165f6c = edx
    
    if ((eax_6.b & 2) == 0)
        data_3165f70 = eax_6 | 2
        int32_t var_c_1 = 0
        data_3165f68 = sub_4f5220(data_3165f6c, "btnBack")
        int32_t var_c_2 = 0xffffffff
    
    if (sub_4f65a0(&arg2[0xc], arg2[8]) != 0)
        if ((data_3165f70.b & 4) == 0)
            data_3165f70 |= 4
            int32_t var_c_3 = 1
            data_3165f64 = sub_4f5220(data_307c69c, "tblRulesItem")
            int32_t var_c_4 = 0xffffffff
        
        if ((data_3165f70.b & 8) == 0)
            data_3165f70 |= 8
            int32_t var_c_5 = 2
            data_3165f60 = sub_4f5220(data_307c6e8, "expIcon")
            int32_t var_c_6 = 0xffffffff
        
        if ((data_3165f70.b & 0x10) == 0)
            data_3165f70 |= 0x10
            int32_t var_c_7 = 3
            data_3165f5c = sub_4f5220(data_307c6e8, "expName")
            int32_t var_c_8 = 0xffffffff
        
        int32_t edx_2 = *(arg2 + 0x94)
        int128_t* eax_16 =
            sub_4f6e90(data_3165f64, sub_4fc3d0(&data_be1cb8, *(arg2 + 0x50)), &data_83f3d3)
        eax_16[0x12].d = *eax_16 + 1
        *(eax_16 + 0x124) = 1
        *(eax_16 + 0x128) = edx_2
        *(eax_16 + 0x12c) = 1
        eax_16[0x13].d = edx_2
        int32_t i_1 = 0
        
        if (*(arg2 + 0x94) s> 0)
            int32_t var_d4_1 = 0
            void* var_f8_1 = &arg2[0x54]
            int32_t i
            
            do
                int32_t esi_3 = *(arg2 + 0x50)
                int32_t ebx_2 = data_3165f64
                int32_t var_ec = var_d4_1
                int32_t i_2 = i_1
                void* eax_18
                int32_t ecx_5
                eax_18, ecx_5 = sub_4fc3d0(&data_be1cb8, esi_3)
                
                if (ebx_2 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_5 = *(eax_18 + (ebx_2 << 2) + 0x30)
                int128_t* eax_19
                
                if (edx_5 != 0)
                    eax_19 = sub_4fc1e0(ecx_5, edx_5)
                else
                    eax_19 = sub_4fc0d0()
                    *(eax_19 + 4) = &data_83f3d3
                    edx_5 = *(eax_19 + 0x1bc)
                    *(eax_18 + (ebx_2 << 2) + 0x30) = edx_5
                
                char* esi_5 = *(eax_18 + 4)
                
                if (*(esi_5 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*esi_5 == 0)
                    sub_520800(eax_19, edx_5.b, esi_5, 0)
                    
                    if (*esi_5 == 0)
                        sub_509540(esi_5)
                
                void* eax_23
                int32_t ecx_9
                eax_23, ecx_9 = sub_4f7720(&var_ec, ebx_2 * 0x118 + ***esi_5, eax_19)
                int32_t esi_6 = *(eax_23 + 0x434)
                void* eax_24 = sub_4b9560(ecx_9, *var_f8_1)
                int32_t ebx_5 = data_3165f60
                int32_t ecx_10 = **(eax_24 + 0x18)
                int32_t eax_26
                int32_t ecx_11
                eax_26, ecx_11 = sub_4fc3d0(&data_be1cb8, esi_6)
                
                if (ebx_5 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t eax_27 = *(eax_26 + (ebx_5 << 2) + 0x30)
                int128_t* eax_28
                
                if (eax_27 != 0)
                    eax_28 = sub_4fc1e0(ecx_11, eax_27)
                else
                    eax_28 = sub_4fc0d0()
                    *(eax_28 + 4) = &data_83f3d3
                    *(eax_26 + (ebx_5 << 2) + 0x30) = *(eax_28 + 0x1bc)
                
                int32_t ebx_6 = data_3165f5c
                int32_t edx_12 = *eax_28 + 1
                *(eax_28 + 0x98) = ecx_10
                *(eax_28 + 0x94) = edx_12
                char* edi_5 = *(eax_24 + 0x1c)
                int32_t eax_29
                int32_t ecx_14
                eax_29, ecx_14 = sub_4fc3d0(&data_be1cb8, esi_6)
                
                if (ebx_6 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_13 = *(eax_29 + (ebx_6 << 2) + 0x30)
                int128_t* eax_30
                
                if (edx_13 != 0)
                    eax_30 = sub_4fc1e0(ecx_14, edx_13)
                else
                    eax_30 = sub_4fc0d0()
                    *(eax_30 + 4) = &data_83f3d3
                    *(eax_29 + (ebx_6 << 2) + 0x30) = *(eax_30 + 0x1bc)
                
                *(eax_30 + 0x64) = *eax_30 + 1
                sub_4c4590(edi_5)
                var_f8_1 += 4
                i = i_1 + 1
                *(eax_30 + 0x151) = 1
                i_1 = i
            while (i s< *(arg2 + 0x94))
        
        void var_a0
        int32_t eax_35
        int80_t st0_1
        st0_1, eax_35 = sub_40a930(&var_a0)
        long double x87_r6_1 = fconvert.t(data_8c4d34)
        int32_t eax_36 = *(arg2 + 0x50)
        void var_60
        int32_t ecx_16
        int32_t esi_10
        esi_10, ecx_16 = __builtin_memcpy(&var_60, eax_35, 0x40)
        int32_t var_11c_1 = ecx_16
        void var_b8
        int32_t* eax_37 = sub_4f8710(esi_10, &var_b8, eax_36, &var_60, arg4, arg3, 
            fconvert.s(x87_r6_1), nullptr, nullptr, nullptr)
        int32_t var_c8_1 = eax_37[1]
        int32_t var_c4_1 = eax_37[2]
        
        if (*eax_37 == 2)
            if (eax_37[4] != data_3165f68)
                int32_t edx_19 = *(arg2 + (eax_37[3] << 2) + 0x54)
                *(arg2 + 0x98) = edx_19
                
                switch (edx_19)
                    case 0
                        *(arg2 + 0x9c) = 0
                        *arg2 = 1
                    case 2
                        *(arg2 + 0x9c) = 0xb
                        *arg2 = 1
                    case 3
                        *(arg2 + 0x9c) = 0xc
                        *arg2 = 1
                    case 4
                        *(arg2 + 0x9c) = 0xe
                        *arg2 = 1
                    default
                        sub_4c5870("Halt", &data_83f3d3, "..\code\RulesDlg.cpp", 0x64, 
                            "GetExpansionRulesPages")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
            
            arg2[8] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_fc)
    return 0
}

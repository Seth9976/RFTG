// 函数名称: sub_4c0370
// 虚拟地址: 0x4c0370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4c0370(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6957fc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_7c
    int32_t eax_2 = __security_cookie ^ &var_7c
    int32_t __saved_edi
    int32_t var_8c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_3165f44 & 1) != 0
    char const* const var_50 = "Explore"
    char const* const var_4c = "Develop"
    char const* const var_48 = "Settle"
    char const* const var_44 = "Trade"
    char const* const var_40 = "Consume"
    char const* const var_3c = "Produce"
    char const* const var_38 = "Takeovers"
    
    if (not(cond:0))
        data_3165f44.d |= 1
        int32_t var_c_1 = 0
        data_3165f40 = sub_4f5220(data_307c740, "tblPages")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165f44 & 2) == 0)
        data_3165f44.d |= 2
        int32_t var_c_3 = 1
        data_3165f3c = sub_4f5220(data_307c738, "btn")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_9 = sub_4f6e90(data_3165f40, sub_4fc3d0(&data_be1cb8, *(arg3 + 0x18)), &data_83f3d3)
    eax_9[0x12].d = *eax_9 + 1
    *(eax_9 + 0x124) = 1
    *(eax_9 + 0x128) = 7
    *(eax_9 + 0x12c) = 1
    eax_9[0x13].d = 7
    int32_t i_1 = 0
    int32_t var_70 = 0
    int32_t var_30
    int32_t i
    
    do
        int32_t esi_3 = *(arg3 + 0x18)
        int32_t ebx_1 = data_3165f40
        int32_t i_2 = i_1
        var_30 = var_70
        void* eax_11
        int32_t ecx_2
        eax_11, ecx_2 = sub_4fc3d0(&data_be1cb8, esi_3)
        
        if (ebx_1 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_11 + (ebx_1 << 2) + 0x30)
        int128_t* eax_12
        
        if (edx_3 != 0)
            eax_12 = sub_4fc1e0(ecx_2, edx_3)
        else
            eax_12, edx_3 = sub_4fc0d0()
            *(eax_12 + 4) = &data_83f3d3
            *(eax_11 + (ebx_1 << 2) + 0x30) = *(eax_12 + 0x1bc)
        
        char* esi_5 = *(eax_11 + 4)
        
        if (*(esi_5 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_5 == 0)
            sub_520800(eax_12, edx_3.b, esi_5, 0)
            
            if (*esi_5 == 0)
                sub_509540(esi_5)
        
        int32_t edi_3 = *(sub_4f7720(&var_30, ebx_1 * 0x118 + ***esi_5, eax_12) + 0x434)
        int32_t ebx_4 = data_3165f3c
        int32_t eax_17
        int32_t ecx_6
        eax_17, ecx_6 = sub_4fc3d0(&data_be1cb8, edi_3)
        
        if (ebx_4 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_6 = *(eax_17 + (ebx_4 << 2) + 0x30)
        int128_t* eax_18
        
        if (edx_6 != 0)
            eax_18 = sub_4fc1e0(ecx_6, edx_6)
        else
            eax_18 = sub_4fc0d0()
            *(eax_18 + 4) = &data_83f3d3
            *(eax_17 + (ebx_4 << 2) + 0x30) = *(eax_18 + 0x1bc)
        
        char* eax_20 = (&var_50)[i_1]
        *(eax_18 + 0x64) = *eax_18 + 1
        sub_4c4590(eax_20)
        int32_t ebx_6 = data_3165f3c
        *(eax_18 + 0x151) = 1
        int32_t eax_21
        int32_t ecx_8
        eax_21, ecx_8 = sub_4fc3d0(&data_be1cb8, edi_3)
        
        if (ebx_6 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_9 = *(eax_21 + (ebx_6 << 2) + 0x30)
        int128_t* eax_22
        
        if (edx_9 != 0)
            eax_22 = sub_4fc1e0(ecx_8, edx_9)
        else
            eax_22 = sub_4fc0d0()
            *(eax_22 + 4) = &data_83f3d3
            *(eax_21 + (ebx_6 << 2) + 0x30) = *(eax_22 + 0x1bc)
        
        *(eax_22 + 0x14c) = *eax_22 + 1
        int32_t edx_11
        edx_11.b = i_1 == arg4
        i = i_1 + 1
        eax_22[0x15].b = edx_11.b
        i_1 = i
    while (i s< 7)
    
    if (arg4 u> 6)
        sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x83d, "DlgStatsDrawActions")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_ac
    int32_t var_a8_1
    int32_t* var_a4
    char const* const* var_a0
    int32_t* var_9c_1
    int32_t var_90
    void* edi_4
    
    switch (arg4)
        case 0
            edi_4 = arg3
            sub_4bf460(edi_4, "Max", "Total", &data_83f3d3)
            var_70 = sub_473290(edi_4 + 0x4ec, 0x12d, 2)
            int32_t var_6c = sub_473290(edi_4 + 0x4ec, 0x12e, 2)
            int32_t var_68 = sub_473290(edi_4 + 0x4ec, 0x12f, 2)
            int32_t var_64 = sub_473290(edi_4 + 0x4ec, 0x130, 2)
            int32_t var_60_1 = sub_473290(edi_4 + 0x4ec, 0x385, 2)
            var_30 = 0xffffffff
            int32_t var_2c_1 = 0xffffffff
            int32_t var_28_1 = sub_473290(edi_4 + 0x4ec, 0x12f, 1)
            int32_t var_24_1 = sub_473290(edi_4 + 0x4ec, 0x130, 1)
            var_90 = 0
            int32_t var_94_3 = 0
            int32_t var_98_7 = 1
            var_9c_1 = nullptr
            int32_t var_20_1 = sub_473290(edi_4 + 0x4ec, 0x385, 1)
            var_a0 = &var_70
            var_a4 = &var_30
            var_a8_1 = 0x879964
            var_ac = 5
        case 1
            edi_4 = arg3
            sub_4bf460(edi_4, "Max", "Total", &data_83f3d3)
            var_70 = sub_473290(edi_4 + 0x4ec, 0x191, 2)
            int32_t var_6c_1 = sub_473290(edi_4 + 0x4ec, 0x192, 2)
            int32_t var_68_1 = sub_473290(edi_4 + 0x4ec, 0x193, 2)
            int32_t var_64_1 = sub_473290(edi_4 + 0x4ec, 0x200, 2)
            var_30 = 0xffffffff
            int32_t var_2c_2 = sub_473290(edi_4 + 0x4ec, 0x192, 1)
            int32_t var_28_2 = sub_473290(edi_4 + 0x4ec, 0x193, 1)
            var_90 = 0
            int32_t var_94_4 = 0
            int32_t var_98_14 = 1
            var_9c_1 = nullptr
            var_a0 = &var_70
            int32_t var_24_2 = sub_473290(edi_4 + 0x4ec, 0x200, 1)
            var_a4 = &var_30
            var_a8_1 = 0x87998c
            var_ac = 4
        case 2
            edi_4 = arg3
            sub_4bf460(edi_4, "Max", "Total", &data_83f3d3)
            var_50 = sub_473290(edi_4 + 0x4ec, 0x1f5, 2)
            int32_t var_4c_1 = sub_473290(edi_4 + 0x4ec, 0x1f7, 2)
            int32_t var_48_1 = sub_473290(edi_4 + 0x4ec, 0x1f8, 2)
            int32_t var_44_1 = sub_473290(edi_4 + 0x4ec, 0x1f9, 2)
            int32_t var_40_1 = sub_473290(edi_4 + 0x4ec, 0x1fa, 2)
            int32_t var_3c_1 = sub_473290(edi_4 + 0x4ec, 0x1fb, 2)
            int32_t var_38_1 = sub_473290(edi_4 + 0x4ec, 0x1fc, 2)
            int32_t var_34_1 = sub_473290(edi_4 + 0x4ec, 0x1fd, 2)
            var_70 = 0xffffffff
            int32_t var_6c_2 = sub_473290(edi_4 + 0x4ec, 0x1f7, 1)
            int32_t var_68_2 = sub_473290(edi_4 + 0x4ec, 0x1f8, 1)
            int32_t var_64_2 = sub_473290(edi_4 + 0x4ec, 0x1f9, 1)
            int32_t var_60_2 = sub_473290(edi_4 + 0x4ec, 0x1fa, 1)
            int32_t var_5c_1 = sub_473290(edi_4 + 0x4ec, 0x1fb, 1)
            int32_t var_58_1 = sub_473290(edi_4 + 0x4ec, 0x1fc, 1)
            var_90 = 0
            int32_t var_94_5 = 0
            int32_t var_98_29 = 1
            var_9c_1 = nullptr
            var_a0 = &var_50
            var_a4 = &var_70
            var_a8_1 = 0x8799b0
            int32_t var_54_1 = sub_473290(edi_4 + 0x4ec, 0x1fd, 1)
            var_ac = 8
        case 3
            edi_4 = arg3
            sub_4bf460(edi_4, "Max Cards", "Avg", "Count")
            var_70 = sub_473290(edi_4 + 0x4ec, 0x259, 0)
            int32_t var_6c_3 = sub_473290(edi_4 + 0x4ec, 0x25a, 0)
            int32_t var_68_3 = sub_473290(edi_4 + 0x4ec, 0x25b, 0)
            int32_t var_64_3 = sub_473290(edi_4 + 0x4ec, 0x25c, 0)
            int32_t var_60_3 = sub_473290(edi_4 + 0x4ec, 0x25d, 0)
            var_30 = 0xffffffff
            int32_t var_2c_3 = sub_473290(edi_4 + 0x4ec, 0x25a, 4)
            int32_t var_28_3 = sub_473290(edi_4 + 0x4ec, 0x25b, 4)
            int32_t var_24_3 = sub_473290(edi_4 + 0x4ec, 0x25c, 4)
            int32_t var_20_2 = sub_473290(edi_4 + 0x4ec, 0x25d, 4)
            var_50 = 0xffffffff
            int32_t var_4c_2 = sub_473290(edi_4 + 0x4ec, 0x25a, 1)
            int32_t var_48_2 = sub_473290(edi_4 + 0x4ec, 0x25b, 1)
            int32_t var_44_2 = sub_473290(edi_4 + 0x4ec, 0x25c, 1)
            var_90 = 1
            int32_t var_94_6 = 0
            int32_t var_98_42 = 1
            int32_t var_40_2 = sub_473290(edi_4 + 0x4ec, 0x25d, 1)
            var_9c_1 = &var_70
            var_a0 = &var_30
            var_a4 = &var_50
            var_a8_1 = 0x879a04
            var_ac = 5
        case 4
            edi_4 = arg3
            sub_4bf460(edi_4, "Max", "Total", &data_83f3d3)
            var_50 = sub_473290(edi_4 + 0x4ec, 0x2bd, 2)
            int32_t var_4c_3 = sub_473290(edi_4 + 0x4ec, 0x2be, 2)
            int32_t var_48_3 = sub_473290(edi_4 + 0x4ec, 0x2bf, 2)
            int32_t var_44_3 = sub_473290(edi_4 + 0x4ec, 0x2c0, 2)
            int32_t var_40_3 = sub_473290(edi_4 + 0x4ec, 0x2c1, 2)
            int32_t var_3c_2 = sub_473290(edi_4 + 0x4ec, 0x2c2, 2)
            var_70 = 0xffffffff
            int32_t var_6c_4 = sub_473290(edi_4 + 0x4ec, 0x2be, 1)
            int32_t var_68_4 = sub_473290(edi_4 + 0x4ec, 0x2bf, 1)
            int32_t var_64_4 = sub_473290(edi_4 + 0x4ec, 0x2c0, 1)
            int32_t var_60_4 = sub_473290(edi_4 + 0x4ec, 0x2c1, 1)
            var_90 = 0
            int32_t var_94_7 = 0
            int32_t var_98_53 = 1
            int32_t var_5c_2 = sub_473290(edi_4 + 0x4ec, 0x2c2, 1)
            var_9c_1 = nullptr
            var_a0 = &var_50
            var_a4 = &var_70
            var_a8_1 = 0x879a2c
            var_ac = 6
        case 5
            edi_4 = arg3
            sub_4bf460(edi_4, "Max", "Total", &data_83f3d3)
            var_50 = sub_473290(edi_4 + 0x4ec, 0x321, 2)
            int32_t var_4c_4 = sub_473290(edi_4 + 0x4ec, 0x322, 2)
            int32_t var_48_4 = sub_473290(edi_4 + 0x4ec, 0x323, 2)
            int32_t var_44_4 = sub_473290(edi_4 + 0x4ec, 0x324, 2)
            int32_t var_40_4 = sub_473290(edi_4 + 0x4ec, 0x325, 2)
            var_70 = 0xffffffff
            int32_t var_6c_5 = sub_473290(edi_4 + 0x4ec, 0x322, 1)
            int32_t var_68_5 = sub_473290(edi_4 + 0x4ec, 0x323, 1)
            int32_t var_64_5 = sub_473290(edi_4 + 0x4ec, 0x324, 1)
            var_90 = 0
            int32_t var_94_8 = 0
            int32_t var_98_62 = 1
            var_9c_1 = nullptr
            int32_t var_60_5 = sub_473290(edi_4 + 0x4ec, 0x325, 1)
            var_a0 = &var_50
            var_a4 = &var_70
            var_a8_1 = 0x879a5c
            var_ac = 5
        case 6
            edi_4 = arg3
            sub_4bf460(edi_4, "Max", "Total", &data_83f3d3)
            var_70 = sub_473290(edi_4 + 0x4ec, 0x3e9, 1)
            int32_t var_6c_6 = sub_473290(edi_4 + 0x4ec, 0x3ea, 1)
            int32_t var_68_6 = sub_473290(edi_4 + 0x4ec, 0x3eb, 1)
            int32_t var_64_6 = sub_473290(edi_4 + 0x4ec, 0x3ec, 1)
            int32_t var_60_6 = sub_473290(edi_4 + 0x4ec, 0x3ed, 1)
            int32_t var_5c_3 = sub_473290(edi_4 + 0x4ec, 0x3f0, 1)
            var_50 = sub_473290(edi_4 + 0x4ec, 0x3e9, 2)
            int32_t var_4c_5 = sub_473290(edi_4 + 0x4ec, 0x3ea, 2)
            int32_t var_48_5 = sub_473290(edi_4 + 0x4ec, 0x3eb, 2)
            int32_t var_44_5 = sub_473290(edi_4 + 0x4ec, 0x3ec, 2)
            int32_t var_40_5 = sub_473290(edi_4 + 0x4ec, 0x3ed, 2)
            var_90 = 0
            int32_t var_3c_3 = sub_473290(edi_4 + 0x4ec, 0x3f0, 2)
            int32_t var_94_9 = 0
            int32_t var_98_74 = 1
            var_9c_1 = nullptr
            var_a0 = &var_50
            var_a4 = &var_70
            var_a8_1 = 0x879a84
            var_ac = 6
    
    int128_t* result = sub_4bdd00(edi_4, var_ac, var_a8_1, var_a4, var_a0, var_9c_1, 1, 0, var_90)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_7c)
    return result
}

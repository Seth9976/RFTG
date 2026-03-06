// 函数名称: sub_4bfda0
// 虚拟地址: 0x4bfda0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4bfda0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69584c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_64
    int32_t eax_2 = __security_cookie ^ &var_64
    int32_t __saved_edi
    int32_t var_74 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_3165f50 & 1) != 0
    var_64 = arg3
    
    if (not(cond:0))
        data_3165f50.d |= 1
        int32_t var_c_1 = 0
        data_3165f4c = sub_4f5220(data_307c740, "tblPages")
        int32_t var_c_2 = 0xffffffff
    
    int32_t var_58 = 0
    int128_t* eax_8 = sub_4f6e90(data_3165f4c, sub_4fc3d0(&data_be1cb8, *(arg3 + 0x18)), &data_83f3d3)
    eax_8[0x12].d = *eax_8 + 1
    *(eax_8 + 0x124) = 1
    *(eax_8 + 0x128) = var_58
    *(eax_8 + 0x12c) = 1
    eax_8[0x13].d = var_58
    char const* const var_4c = "Game Stats"
    char const* const var_48 = "Game Scores"
    char const* const var_44 = "Histogram"
    
    if ((data_3165f50 & 2) == 0)
        data_3165f50.d |= 2
        int32_t var_c_3 = 1
        data_3165f48 = sub_4f5220(data_307c738, "btn")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_12 =
        sub_4f6e90(data_3165f4c, sub_4fc3d0(&data_be1cb8, *(var_64 + 0x18)), &data_83f3d3)
    eax_12[0x12].d = *eax_12 + 1
    *(eax_12 + 0x124) = 1
    *(eax_12 + 0x128) = 3
    *(eax_12 + 0x12c) = 1
    eax_12[0x13].d = 3
    int32_t i_1 = 0
    int32_t var_54 = 0
    int32_t i
    
    do
        int32_t esi_5 = *(var_64 + 0x18)
        int32_t ebx_1 = data_3165f4c
        int32_t var_5c = var_54
        int32_t i_2 = i_1
        void* eax_14
        int32_t ecx_6
        eax_14, ecx_6 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (ebx_1 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_2 = *(eax_14 + (ebx_1 << 2) + 0x30)
        int128_t* eax_15
        
        if (edx_2 != 0)
            eax_15 = sub_4fc1e0(ecx_6, edx_2)
        else
            eax_15 = sub_4fc0d0()
            *(eax_15 + 4) = &data_83f3d3
            edx_2 = *(eax_15 + 0x1bc)
            *(eax_14 + (ebx_1 << 2) + 0x30) = edx_2
        
        char* esi_7 = *(eax_14 + 4)
        
        if (*(esi_7 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_7 == 0)
            sub_520800(eax_15, edx_2.b, esi_7, 0)
            
            if (*esi_7 == 0)
                sub_509540(esi_7)
        
        int32_t edi_5 = *(sub_4f7720(&var_5c, ebx_1 * 0x118 + ***esi_7, eax_15) + 0x434)
        int32_t ebx_4 = data_3165f48
        int32_t eax_20
        int32_t ecx_10
        eax_20, ecx_10 = sub_4fc3d0(&data_be1cb8, edi_5)
        
        if (ebx_4 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_4 = *(eax_20 + (ebx_4 << 2) + 0x30)
        int128_t* eax_21
        
        if (edx_4 != 0)
            eax_21 = sub_4fc1e0(ecx_10, edx_4)
        else
            eax_21 = sub_4fc0d0()
            *(eax_21 + 4) = &data_83f3d3
            *(eax_20 + (ebx_4 << 2) + 0x30) = *(eax_21 + 0x1bc)
        
        *(eax_21 + 0x64) = *eax_21 + 1
        sub_4c4590((&var_4c)[i_1])
        int32_t ebx_6 = data_3165f48
        *(eax_21 + 0x151) = 1
        int32_t eax_25
        int32_t ecx_12
        eax_25, ecx_12 = sub_4fc3d0(&data_be1cb8, edi_5)
        
        if (ebx_6 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_6 = *(eax_25 + (ebx_6 << 2) + 0x30)
        int128_t* eax_26
        
        if (edx_6 != 0)
            eax_26 = sub_4fc1e0(ecx_12, edx_6)
        else
            eax_26 = sub_4fc0d0()
            *(eax_26 + 4) = &data_83f3d3
            *(eax_25 + (ebx_6 << 2) + 0x30) = *(eax_26 + 0x1bc)
        
        *(eax_26 + 0x14c) = *eax_26 + 1
        edx_6.b = i_1 == arg4
        i = i_1 + 1
        eax_26[0x15].b = edx_6.b
        i_1 = i
    while (i s< 3)
    int128_t* result
    void* edi_6
    
    if (arg4 == 0)
        edi_6 = var_64
        sub_4bf460(edi_6, &data_83f3d3, &data_83f3d3, &data_83f3d3)
        var_4c = sub_473290(edi_6 + 0x4ec, 2, 0)
        int32_t var_48_2 = sub_473290(edi_6 + 0x4ec, 3, 0)
        int32_t var_44_2 = sub_473290(edi_6 + 0x4ec, 4, 0)
        int32_t var_78_2 = 0
        int32_t var_80_14 = 0
        int32_t var_84_4 = 0
        int32_t var_40_2 = sub_473290(edi_6 + 0x4ec, 5, 0)
        result = sub_4bdd00(edi_6, 4, &data_8798d0, &var_4c, nullptr, 0, 0, 0, 0)
    else if (arg4 == 1)
        edi_6 = var_64
        sub_4bf460(edi_6, "Avg", "Max Score", &data_83f3d3)
        char* var_34 = 0xffffffff
        int32_t var_30_1 = 0xffffffff
        int32_t var_2c_1 = sub_473290(edi_6 + 0x4ec, 0x68, 3)
        int32_t var_28_1 = sub_473290(edi_6 + 0x4ec, 0x69, 3)
        int32_t var_24_1 = sub_473290(edi_6 + 0x4ec, 0x6a, 3)
        int32_t var_20_1 = sub_473290(edi_6 + 0x4ec, 0x6b, 3)
        var_4c = sub_473290(edi_6 + 0x4ec, 0x65, 1)
        int32_t var_48_1 = sub_473290(edi_6 + 0x4ec, 0x66, 1)
        int32_t var_44_1 = sub_473290(edi_6 + 0x4ec, 0x68, 1)
        int32_t var_40_1 = sub_473290(edi_6 + 0x4ec, 0x69, 1)
        int32_t var_3c_1 = sub_473290(edi_6 + 0x4ec, 0x6a, 1)
        int32_t var_78_1 = 0
        int32_t var_80_10 = 0
        int32_t var_84_2 = 0
        int32_t var_38_1 = sub_473290(edi_6 + 0x4ec, 0x6b, 1)
        result = sub_4bdd00(edi_6, 6, &data_879900, &var_34, &var_4c, 0, 0, 1, 0)
    else
        if (arg4 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x73a, "DlgStatsDrawGames")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* esi_13 = var_64
        sub_4bf460(esi_13, &data_83f3d3, &data_83f3d3, &data_83f3d3)
        result = sub_4bdd00(esi_13, 0, 0, 0, 0, 0, 0, 0, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_64)
    return result
}

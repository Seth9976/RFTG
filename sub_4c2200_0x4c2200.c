// 函数名称: sub_4c2200
// 虚拟地址: 0x4c2200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4c2200(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69570c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_5c
    int32_t eax_2 = __security_cookie ^ &var_5c
    int32_t __saved_edi
    int32_t var_6c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_3165f20 & 1) != 0
    void* const var_44 = &data_879acc
    void* const var_40 = &data_879ad0
    void* const var_3c = &data_879ad4
    
    if (not(cond:0))
        data_3165f20.d |= 1
        int32_t var_c_1 = 0
        data_3165f1c = sub_4f5220(data_307c740, "tblPages")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165f20 & 2) == 0)
        data_3165f20.d |= 2
        int32_t var_c_3 = 1
        data_3165f18 = sub_4f5220(data_307c738, "btn")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_9 = sub_4f6e90(data_3165f1c, sub_4fc3d0(&data_be1cb8, *(arg3 + 0x18)), &data_83f3d3)
    eax_9[0x12].d = *eax_9 + 1
    *(eax_9 + 0x124) = 1
    *(eax_9 + 0x128) = 3
    *(eax_9 + 0x12c) = 1
    eax_9[0x13].d = 3
    var_5c = 0
    int32_t var_4c = 0
    int32_t ecx_10
    
    do
        int32_t esi_3 = *(arg3 + 0x18)
        int32_t ebx_1 = data_3165f1c
        int32_t var_50_1 = var_5c
        int32_t var_54 = var_4c
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
        
        int32_t edi_3 = *(sub_4f7720(&var_54, ebx_1 * 0x118 + ***esi_5, eax_12) + 0x434)
        int32_t ebx_4 = data_3165f18
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
        
        char* eax_20 = (&var_44)[var_5c]
        *(eax_18 + 0x64) = *eax_18 + 1
        sub_4c4590(eax_20)
        int32_t ebx_6 = data_3165f18
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
        
        ecx_10 = var_5c
        *(eax_22 + 0x14c) = *eax_22 + 1
        int32_t edx_11
        edx_11.b = ecx_10 == arg4
        eax_22[0x15].b = edx_11.b
        var_5c = ecx_10 + 1
    while (ecx_10 + 1 s< 3)
    sub_4bf460(arg3, "Total", &data_83f3d3, &data_83f3d3)
    int32_t var_8c
    int32_t var_88
    void* const* var_84
    
    if (arg4 == 0)
        var_44 = sub_473290(arg3 + 0x4ec, 0x5dd, 0)
        int32_t var_40_3 = sub_473290(arg3 + 0x4ec, 0x5de, 0)
        int32_t var_3c_3 = sub_473290(arg3 + 0x4ec, 0x5df, 0)
        int32_t var_38_2 = sub_473290(arg3 + 0x4ec, 0x5e0, 0)
        int32_t var_34_2 = sub_473290(arg3 + 0x4ec, 0x5e1, 0)
        int32_t var_30_1 = sub_473290(arg3 + 0x4ec, 0x5e2, 0)
        int32_t var_2c_1 = sub_473290(arg3 + 0x4ec, 0x5e3, 0)
        int32_t var_28_1 = sub_473290(arg3 + 0x4ec, 0x5e4, 0)
        int32_t var_24_1 = sub_473290(arg3 + 0x4ec, 0x5e5, 0)
        int32_t eax_51 = sub_473290(arg3 + 0x4ec, 0x5e6, 0)
        int32_t var_80_2
        __builtin_memset(&var_80_2, 0, 0x14)
        var_84 = &var_44
        var_88 = 0x879ca8
        int32_t var_20_1 = eax_51
        var_8c = 0xa
    else if (arg4 == 1)
        var_44 = sub_473290(arg3 + 0x4ec, 0x5e9, 0)
        int32_t var_40_2 = sub_473290(arg3 + 0x4ec, 0x5e8, 0)
        int32_t var_3c_2 = sub_473290(arg3 + 0x4ec, 0x5e7, 0)
        int32_t var_38_1 = sub_473290(arg3 + 0x4ec, 0x5eb, 0)
        int32_t eax_41 = sub_473290(arg3 + 0x4ec, 0x5ea, 0)
        int32_t var_80_1
        __builtin_memset(&var_80_1, 0, 0x14)
        var_84 = &var_44
        var_88 = 0x879cf8
        int32_t var_34_1 = eax_41
        var_8c = 5
    else
        if (arg4 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0xa35, "DlgStatsDrawGoals")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_44 = sub_473290(arg3 + 0x4ec, 0x5ec, 0)
        int32_t var_40_1 = sub_473290(arg3 + 0x4ec, 0x5ed, 0)
        int32_t var_3c_1 = sub_473290(arg3 + 0x4ec, 0x5ee, 0)
        int32_t var_38 = sub_473290(arg3 + 0x4ec, 0x5ef, 0)
        int32_t eax_36 = sub_473290(arg3 + 0x4ec, 0x5f0, 0)
        int32_t var_80
        __builtin_memset(&var_80, 0, 0x14)
        int32_t var_34 = eax_36
        var_84 = &var_44
        var_88 = 0x879d20
        var_8c = 5
    
    int128_t* result = sub_4bdd00(arg3, var_8c, var_88, var_84, 0, 0, 0, 0, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_5c)
    return result
}

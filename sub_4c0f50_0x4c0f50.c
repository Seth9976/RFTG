// 函数名称: sub_4c0f50
// 虚拟地址: 0x4c0f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4c0f50(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6957ac
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_6c
    int32_t eax_2 = __security_cookie ^ &var_6c
    int32_t __saved_edi
    int32_t var_7c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_3165f38 & 1) != 0
    char const* const var_64 = "Base Game"
    void* const var_60 = &data_879ac8
    void* const var_5c = &data_879acc
    void* const var_58 = &data_879ad0
    void* const var_54 = &data_879ad4
    
    if (not(cond:0))
        data_3165f38.d |= 1
        int32_t var_c_1 = 0
        data_3165f34 = sub_4f5220(data_307c740, "tblPages")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165f38 & 2) == 0)
        data_3165f38.d |= 2
        int32_t var_c_3 = 1
        data_3165f30 = sub_4f5220(data_307c738, "btn")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_9 = sub_4f6e90(data_3165f34, sub_4fc3d0(&data_be1cb8, *(arg3 + 0x18)), &data_83f3d3)
    eax_9[0x12].d = *eax_9 + 1
    *(eax_9 + 0x124) = 1
    *(eax_9 + 0x128) = 5
    *(eax_9 + 0x12c) = 1
    eax_9[0x13].d = 5
    var_6c = 0
    int32_t var_34 = 0
    int32_t var_4c
    int32_t ecx_10
    
    do
        int32_t esi_3 = *(arg3 + 0x18)
        int32_t ebx_1 = data_3165f34
        int32_t var_48_1 = var_6c
        var_4c = var_34
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
        
        int32_t edi_3 = *(sub_4f7720(&var_4c, ebx_1 * 0x118 + ***esi_5, eax_12) + 0x434)
        int32_t ebx_4 = data_3165f30
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
        
        char* eax_20 = (&var_64)[var_6c]
        *(eax_18 + 0x64) = *eax_18 + 1
        sub_4c4590(eax_20)
        int32_t ebx_6 = data_3165f30
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
        
        ecx_10 = var_6c
        *(eax_22 + 0x14c) = *eax_22 + 1
        int32_t edx_11
        edx_11.b = ecx_10 == arg4
        eax_22[0x15].b = edx_11.b
        var_6c = ecx_10 + 1
    while (ecx_10 + 1 s< 5)
    sub_4bf460(arg3, "Max Score", " Avg", "Plays")
    
    if (arg4 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x948, 
            "DlgStatsDrawStartingWorlds")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_9c
    int32_t var_98
    int32_t* var_94
    int32_t* var_90
    char const* const* var_8c_1
    
    switch (arg4)
        case 0
            var_64 = sub_473290(arg3 + 0x4ec, 0x515, 0)
            int32_t var_60_1 = sub_473290(arg3 + 0x4ec, 0x516, 0)
            int32_t var_5c_1 = sub_473290(arg3 + 0x4ec, 0x517, 0)
            int32_t var_58_1 = sub_473290(arg3 + 0x4ec, 0x518, 0)
            int32_t var_54_1 = sub_473290(arg3 + 0x4ec, 0x519, 0)
            var_4c = sub_473290(arg3 + 0x4ec, 0x515, 1)
            int32_t var_48_2 = sub_473290(arg3 + 0x4ec, 0x516, 1)
            int32_t var_44 = sub_473290(arg3 + 0x4ec, 0x517, 1)
            int32_t var_40_1 = sub_473290(arg3 + 0x4ec, 0x518, 1)
            int32_t var_3c_1 = sub_473290(arg3 + 0x4ec, 0x519, 1)
            var_34 = sub_473290(arg3 + 0x4ec, 0x515, 3)
            int32_t var_30 = sub_473290(arg3 + 0x4ec, 0x516, 3)
            int32_t var_2c = sub_473290(arg3 + 0x4ec, 0x517, 3)
            int32_t var_28_1 = sub_473290(arg3 + 0x4ec, 0x518, 3)
            int32_t var_80 = 0
            int32_t var_84_3 = 0
            int32_t var_88_15 = 1
            int32_t var_24_1 = sub_473290(arg3 + 0x4ec, 0x519, 3)
            var_8c_1 = &var_64
            var_90 = &var_34
            var_94 = &var_4c
            var_98 = 0x879ae8
            var_9c = 5
        case 1
            var_64 = sub_473290(arg3 + 0x4ec, 0x51a, 0)
            int32_t var_60_2 = sub_473290(arg3 + 0x4ec, 0x51b, 0)
            int32_t var_5c_2 = sub_473290(arg3 + 0x4ec, 0x51c, 0)
            int32_t var_58_2 = sub_473290(arg3 + 0x4ec, 0x51d, 0)
            int32_t var_54_2 = sub_473290(arg3 + 0x4ec, 0x51e, 0)
            int32_t var_50_1 = sub_473290(arg3 + 0x4ec, 0x51f, 0)
            var_4c = sub_473290(arg3 + 0x4ec, 0x51a, 1)
            int32_t var_48_3 = sub_473290(arg3 + 0x4ec, 0x51b, 1)
            int32_t var_44_1 = sub_473290(arg3 + 0x4ec, 0x51c, 1)
            int32_t var_40_2 = sub_473290(arg3 + 0x4ec, 0x51d, 1)
            int32_t var_3c_2 = sub_473290(arg3 + 0x4ec, 0x51e, 1)
            int32_t var_38_1 = sub_473290(arg3 + 0x4ec, 0x51f, 1)
            var_34 = sub_473290(arg3 + 0x4ec, 0x51a, 3)
            int32_t var_30_1 = sub_473290(arg3 + 0x4ec, 0x51b, 3)
            int32_t var_2c_1 = sub_473290(arg3 + 0x4ec, 0x51c, 3)
            int32_t var_28_2 = sub_473290(arg3 + 0x4ec, 0x51d, 3)
            int32_t var_24_2 = sub_473290(arg3 + 0x4ec, 0x51e, 3)
            int32_t var_80_1 = 0
            int32_t var_84_4 = 0
            int32_t var_88_34 = 1
            int32_t var_20_1 = sub_473290(arg3 + 0x4ec, 0x51f, 3)
            var_8c_1 = &var_64
            var_90 = &var_34
            var_94 = &var_4c
            var_98 = 0x879b10
            var_9c = 6
        case 2
            var_64 = sub_473290(arg3 + 0x4ec, 0x520, 0)
            int32_t var_60_3 = sub_473290(arg3 + 0x4ec, 0x521, 0)
            int32_t var_5c_3 = sub_473290(arg3 + 0x4ec, 0x522, 0)
            int32_t var_58_3 = sub_473290(arg3 + 0x4ec, 0x523, 0)
            var_4c = sub_473290(arg3 + 0x4ec, 0x520, 1)
            int32_t var_48_4 = sub_473290(arg3 + 0x4ec, 0x521, 1)
            int32_t var_44_2 = sub_473290(arg3 + 0x4ec, 0x522, 1)
            int32_t var_40_3 = sub_473290(arg3 + 0x4ec, 0x523, 1)
            var_34 = sub_473290(arg3 + 0x4ec, 0x520, 3)
            int32_t var_30_2 = sub_473290(arg3 + 0x4ec, 0x521, 3)
            int32_t var_2c_2 = sub_473290(arg3 + 0x4ec, 0x522, 3)
            int32_t var_80_2 = 0
            int32_t var_84_5 = 0
            int32_t var_28_3 = sub_473290(arg3 + 0x4ec, 0x523, 3)
            int32_t var_88_47 = 1
            var_8c_1 = &var_64
            var_90 = &var_34
            var_94 = &var_4c
            var_98 = 0x879b40
            var_9c = 4
        case 3
            var_34 = sub_473290(arg3 + 0x4ec, 0x524, 0)
            int32_t var_30_3 = sub_473290(arg3 + 0x4ec, 0x525, 0)
            int32_t var_2c_3 = sub_473290(arg3 + 0x4ec, 0x526, 0)
            var_64 = sub_473290(arg3 + 0x4ec, 0x524, 1)
            int32_t var_60_4 = sub_473290(arg3 + 0x4ec, 0x525, 1)
            int32_t var_5c_4 = sub_473290(arg3 + 0x4ec, 0x526, 1)
            var_4c = sub_473290(arg3 + 0x4ec, 0x524, 3)
            int32_t var_48_5 = sub_473290(arg3 + 0x4ec, 0x525, 3)
            int32_t var_80_3 = 0
            int32_t var_84_6 = 0
            int32_t var_88_57 = 1
            int32_t var_44_3 = sub_473290(arg3 + 0x4ec, 0x526, 3)
            var_8c_1 = &var_34
            var_90 = &var_4c
            var_94 = &var_64
            var_98 = 0x879b60
            var_9c = 3
        case 4
            var_64 = sub_473290(arg3 + 0x4ec, 0x527, 0)
            int32_t var_60_5 = sub_473290(arg3 + 0x4ec, 0x528, 0)
            int32_t var_5c_5 = sub_473290(arg3 + 0x4ec, 0x529, 0)
            int32_t var_58_4 = sub_473290(arg3 + 0x4ec, 0x52a, 0)
            var_4c = sub_473290(arg3 + 0x4ec, 0x527, 1)
            int32_t var_48_6 = sub_473290(arg3 + 0x4ec, 0x528, 1)
            int32_t var_44_4 = sub_473290(arg3 + 0x4ec, 0x529, 1)
            int32_t var_40_4 = sub_473290(arg3 + 0x4ec, 0x52a, 1)
            var_34 = sub_473290(arg3 + 0x4ec, 0x527, 3)
            int32_t var_30_4 = sub_473290(arg3 + 0x4ec, 0x528, 3)
            int32_t var_2c_4 = sub_473290(arg3 + 0x4ec, 0x529, 3)
            int32_t var_80_4 = 0
            int32_t var_84_7 = 0
            int32_t var_28_4 = sub_473290(arg3 + 0x4ec, 0x52a, 3)
            int32_t var_88_70 = 1
            var_8c_1 = &var_64
            var_90 = &var_34
            var_94 = &var_4c
            var_98 = 0x879b78
            var_9c = 4
    
    int128_t* result = sub_4bdd00(arg3, var_9c, var_98, var_94, var_90, var_8c_1, 1, 0, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_6c)
    return result
}

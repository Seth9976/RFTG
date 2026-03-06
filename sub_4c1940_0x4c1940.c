// 函数名称: sub_4c1940
// 虚拟地址: 0x4c1940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4c1940(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69575c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_94
    int32_t eax_2 = __security_cookie ^ &var_94
    int32_t __saved_edi
    int32_t var_a4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_3165f2c & 1) != 0
    char const* const var_58 = "Base"
    void* const var_54 = &data_879acc
    void* const var_50 = &data_879ad0
    void* const var_4c = &data_879ad4
    
    if (not(cond:0))
        data_3165f2c.d |= 1
        int32_t var_c_1 = 0
        data_3165f28 = sub_4f5220(data_307c740, "tblPages")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165f2c & 2) == 0)
        data_3165f2c.d |= 2
        int32_t var_c_3 = 1
        data_3165f24 = sub_4f5220(data_307c738, "btn")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_9 = sub_4f6e90(data_3165f28, sub_4fc3d0(&data_be1cb8, *(arg3 + 0x18)), &data_83f3d3)
    eax_9[0x12].d = *eax_9 + 1
    *(eax_9 + 0x124) = 1
    *(eax_9 + 0x128) = 4
    *(eax_9 + 0x12c) = 1
    eax_9[0x13].d = 4
    int32_t i_1 = 0
    int32_t var_88 = 0
    int32_t var_28
    int32_t i
    
    do
        int32_t esi_3 = *(arg3 + 0x18)
        int32_t ebx_1 = data_3165f28
        int32_t i_2 = i_1
        var_28 = var_88
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
        int32_t* eax_12
        
        if (edx_3 != 0)
            eax_12 = sub_4fc1e0(ecx_2, edx_3)
        else
            eax_12, edx_3 = sub_4fc0d0()
            eax_12[1] = &data_83f3d3
            *(eax_11 + (ebx_1 << 2) + 0x30) = eax_12[0x6f]
        
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
        
        int32_t edi_3 = *(sub_4f7720(&var_28, ebx_1 * 0x118 + ***esi_5, eax_12) + 0x434)
        int32_t ebx_4 = data_3165f24
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
        
        char* eax_20 = (&var_58)[i_1]
        *(eax_18 + 0x64) = *eax_18 + 1
        sub_4c4590(eax_20)
        int32_t ebx_6 = data_3165f24
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
    while (i s< 4)
    sub_4bf460(arg3, "Max Score", "Plays", &data_83f3d3)
    
    if (arg4 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x9d9, "DlgStatsDraw6pts")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_c4
    int32_t var_c0
    int32_t* var_bc
    char const* const* var_b8
    
    switch (arg4)
        case 0
            var_58 = sub_473290(arg3 + 0x4ec, 0x579, 0)
            int32_t var_54_1 = sub_473290(arg3 + 0x4ec, 0x57a, 0)
            int32_t var_50_1 = sub_473290(arg3 + 0x4ec, 0x57b, 0)
            int32_t var_4c_1 = sub_473290(arg3 + 0x4ec, 0x57c, 0)
            int32_t var_48_1 = sub_473290(arg3 + 0x4ec, 0x57d, 0)
            int32_t var_44_1 = sub_473290(arg3 + 0x4ec, 0x57e, 0)
            int32_t var_40_1 = sub_473290(arg3 + 0x4ec, 0x57f, 0)
            int32_t var_3c_1 = sub_473290(arg3 + 0x4ec, 0x580, 0)
            int32_t var_38_1 = sub_473290(arg3 + 0x4ec, 0x581, 0)
            int32_t var_34_1 = sub_473290(arg3 + 0x4ec, 0x582, 0)
            int32_t var_30_1 = sub_473290(arg3 + 0x4ec, 0x583, 0)
            int32_t var_2c_1 = sub_473290(arg3 + 0x4ec, 0x584, 0)
            var_88 = sub_473290(arg3 + 0x4ec, 0x579, 1)
            int32_t var_84 = sub_473290(arg3 + 0x4ec, 0x57a, 1)
            int32_t var_80 = sub_473290(arg3 + 0x4ec, 0x57b, 1)
            int32_t var_7c_1 = sub_473290(arg3 + 0x4ec, 0x57c, 1)
            int32_t var_78_1 = sub_473290(arg3 + 0x4ec, 0x57d, 1)
            int32_t var_74_1 = sub_473290(arg3 + 0x4ec, 0x57e, 1)
            int32_t var_70_1 = sub_473290(arg3 + 0x4ec, 0x57f, 1)
            int32_t var_6c_1 = sub_473290(arg3 + 0x4ec, 0x580, 1)
            int32_t var_68_1 = sub_473290(arg3 + 0x4ec, 0x581, 1)
            int32_t var_64_1 = sub_473290(arg3 + 0x4ec, 0x582, 1)
            int32_t var_60_1 = sub_473290(arg3 + 0x4ec, 0x583, 1)
            int32_t var_a8 = 0
            int32_t var_ac_3 = 0
            int32_t var_b0_24 = 1
            int32_t var_b4_1 = 0
            int32_t var_5c_1 = sub_473290(arg3 + 0x4ec, 0x584, 1)
            var_b8 = &var_58
            var_bc = &var_88
            var_c0 = 0x879bc0
            var_c4 = 0xc
        case 1
            var_88 = sub_473290(arg3 + 0x4ec, 0x585, 0)
            int32_t var_84_1 = sub_473290(arg3 + 0x4ec, 0x586, 0)
            int32_t var_80_1 = sub_473290(arg3 + 0x4ec, 0x587, 0)
            var_28 = sub_473290(arg3 + 0x4ec, 0x585, 1)
            int32_t var_24_1 = sub_473290(arg3 + 0x4ec, 0x586, 1)
            int32_t var_a8_1 = 0
            int32_t var_ac_4 = 0
            int32_t var_b0_31 = 1
            int32_t var_b4_2 = 0
            var_b8 = &var_88
            int32_t var_20_1 = sub_473290(arg3 + 0x4ec, 0x587, 1)
            var_bc = &var_28
            var_c0 = 0x879c20
            var_c4 = 3
        case 2
            var_58 = sub_473290(arg3 + 0x4ec, 0x588, 0)
            int32_t var_54_2 = sub_473290(arg3 + 0x4ec, 0x589, 0)
            int32_t var_50_2 = sub_473290(arg3 + 0x4ec, 0x58a, 0)
            int32_t var_4c_2 = sub_473290(arg3 + 0x4ec, 0x58b, 0)
            int32_t var_48_2 = sub_473290(arg3 + 0x4ec, 0x58c, 0)
            int32_t var_44_2 = sub_473290(arg3 + 0x4ec, 0x58d, 0)
            var_88 = sub_473290(arg3 + 0x4ec, 0x588, 1)
            int32_t var_84_2 = sub_473290(arg3 + 0x4ec, 0x589, 1)
            int32_t var_80_2 = sub_473290(arg3 + 0x4ec, 0x58a, 1)
            int32_t var_7c_2 = sub_473290(arg3 + 0x4ec, 0x58b, 1)
            int32_t var_78_2 = sub_473290(arg3 + 0x4ec, 0x58c, 1)
            int32_t var_a8_2 = 0
            int32_t var_ac_5 = 0
            int32_t var_b0_44 = 1
            int32_t var_b4_3 = 0
            var_b8 = &var_58
            int32_t var_74_2 = sub_473290(arg3 + 0x4ec, 0x58d, 1)
            var_bc = &var_88
            var_c0 = 0x879c38
            var_c4 = 6
        case 3
            var_58 = sub_473290(arg3 + 0x4ec, 0x58e, 0)
            int32_t var_54_3 = sub_473290(arg3 + 0x4ec, 0x58f, 0)
            int32_t var_50_3 = sub_473290(arg3 + 0x4ec, 0x590, 0)
            int32_t var_4c_3 = sub_473290(arg3 + 0x4ec, 0x591, 0)
            int32_t var_48_3 = sub_473290(arg3 + 0x4ec, 0x592, 0)
            var_88 = sub_473290(arg3 + 0x4ec, 0x58e, 1)
            int32_t var_84_3 = sub_473290(arg3 + 0x4ec, 0x58f, 1)
            int32_t var_80_3 = sub_473290(arg3 + 0x4ec, 0x590, 1)
            int32_t var_7c_3 = sub_473290(arg3 + 0x4ec, 0x591, 1)
            int32_t var_a8_3 = 0
            int32_t var_ac_6 = 0
            int32_t var_b0_55 = 1
            int32_t var_b4_4 = 0
            int32_t var_78_3 = sub_473290(arg3 + 0x4ec, 0x592, 1)
            var_b8 = &var_58
            var_bc = &var_88
            var_c0 = 0x879c68
            var_c4 = 5
    
    int128_t* result = sub_4bdd00(arg3, var_c4, var_c0, var_bc, var_b8, 0, 1, 0, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_94)
    return result
}

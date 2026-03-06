// 函数名称: sub_4c27e0
// 虚拟地址: 0x4c27e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4c27e0(void* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6964f2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_ac = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    
    if ((data_31661a4 & 1) == 0)
        data_31661a4.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_4
        eax_4, edx = sub_4f5220(data_307c740, "animDlg")
        data_31661a0 = eax_4
        int32_t var_c_2 = 0xffffffff
    
    int32_t ecx
    int32_t var_b0 = ecx
    int32_t* i = sub_4faeb0(data_31661a0, edx, *(arg1 + 0x18), fconvert.s(float.t(0)))
    
    if (i.b == 0)
        if ((data_31661a4 & 2) == 0)
            data_31661a4.d |= 2
            int32_t var_c_3 = 1
            data_316619c = sub_4f5220(data_307c740, "txtTitle")
            int32_t var_c_4 = 0xffffffff
        
        if ((data_31661a4 & 4) == 0)
            data_31661a4.d |= 4
            int32_t var_c_5 = 2
            data_3166198 = sub_4f5220(data_307c740, "tblFilters")
            int32_t var_c_6 = 0xffffffff
        
        if ((data_31661a4 & 8) == 0)
            data_31661a4.d |= 8
            int32_t var_c_7 = 3
            data_3166194 = sub_4f5220(data_307c73c, "btn")
            int32_t var_c_8 = 0xffffffff
        
        if ((data_31661a4 & 0x10) == 0)
            data_31661a4.d |= 0x10
            int32_t var_c_9 = 4
            data_3166190 = sub_4f5220(data_307c73c, "txtLabel")
            int32_t var_c_10 = 0xffffffff
        
        if ((data_31661a4 & 0x20) == 0)
            data_31661a4.d |= 0x20
            int32_t var_c_11 = 5
            data_316618c = sub_4f5220(data_307c740, "btnPrev")
            int32_t var_c_12 = 0xffffffff
        
        if ((data_31661a4 & 0x40) == 0)
            data_31661a4.d |= 0x40
            int32_t var_c_13 = 6
            data_3166188 = sub_4f5220(data_307c740, "imgPrev")
            int32_t var_c_14 = 0xffffffff
        
        if ((data_31661a4 & 0x80) == 0)
            data_31661a4.d |= 0x80
            int32_t var_c_15 = 7
            data_3166184 = sub_4f5220(data_307c740, "btnNext")
            int32_t var_c_16 = 0xffffffff
        
        if ((data_31661a4.d & 0x100) == 0)
            data_31661a4.d |= 0x100
            int32_t var_c_17 = 8
            data_3166180 = sub_4f5220(data_307c740, "imgNext")
            int32_t var_c_18 = 0xffffffff
        
        int32_t eax_16 = *(arg1 + 0x1c)
        bool var_98_1 = eax_16 == 0
        bool cond:0_1 = eax_16 == 4
        int32_t edx_4 = var_98_1.d
        *(sub_4f6e90(data_316618c, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3) + 0x21) =
            var_98_1
        int32_t var_b0_2 = edx_4
        sub_4fa4e0(*(arg1 + 0x18), data_3166188, edx_4.b)
        int32_t edx_5 = cond:0_1.d
        *(sub_4f6e90(data_3166184, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3) + 0x21) =
            cond:0_1
        int32_t var_b0_3 = edx_5
        sub_4fa4e0(*(arg1 + 0x18), data_3166180, edx_5.b)
        int32_t eax_25 = *(arg1 + 0x1c)
        var_98_1.d = eax_25
        
        if (eax_25 u> 4)
            sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x60, "StatCategoryTitle")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        bool var_9c_1
        
        switch (eax_25)
            case 0
                var_9c_1.d = "Overview"
            case 1
                var_9c_1.d = "Actions"
            case 2
                var_9c_1.d = "Start Worlds"
            case 3
                var_9c_1.d = "6 Cost Developments"
            case 4
                var_9c_1.d = "Goals"
        
        int128_t* eax_27 =
            sub_4f6e90(data_316619c, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
        *(eax_27 + 0x64) = *eax_27 + 1
        int32_t* eax_29 = sub_4c4590(var_9c_1.d)
        int32_t edx_6 = var_98_1.d
        *(eax_27 + 0x151) = 1
        
        switch (edx_6)
            case 0
                int32_t eax_30 = *(arg1 + 0x20)
                sub_4bfda0(eax_30, edx_6, arg1, eax_30)
            case 1
                int32_t edx_7 = *(arg1 + 0x20)
                sub_4c0370(eax_29, edx_7, arg1, edx_7)
            case 2
                int32_t eax_31 = *(arg1 + 0x20)
                sub_4c0f50(eax_31, edx_6, arg1, eax_31)
            case 3
                int32_t edx_8 = *(arg1 + 0x20)
                sub_4c1940(eax_29, edx_8, arg1, edx_8)
            case 4
                int32_t eax_32 = *(arg1 + 0x20)
                sub_4c2200(eax_32, edx_6, arg1, eax_32)
        
        int32_t edi_7 = data_3166198
        void* const var_5c
        int32_t* var_7c = &var_5c
        void* const var_48
        int32_t* var_78_1 = &var_48
        int32_t esi_8 = *(arg1 + 0x18)
        var_5c = &data_875068
        var_48 = &data_875068
        void* const var_34 = &data_875068
        void* const var_84 = &data_875068
        void* const* var_70_1 = &var_84
        char const* const var_6c = "Players"
        char const* const var_68_1 = "Difficulty"
        char const* const var_64_1 = "Expansions"
        char const* const var_60_1 = "Ending"
        void* const var_58_1 = &data_879d90
        void* const var_54_1 = &data_862284
        void* const var_50_1 = &data_879d94
        void* const var_4c_1 = &data_85f7c4
        char const* const var_44_1 = "Easy+"
        char const* const var_40_1 = "Medium+"
        char const* const var_3c_1 = "Hard"
        char const* const var_38_1 = "Online"
        char const* const var_30_1 = "Base"
        void* const var_2c_1 = &data_879acc
        void* const var_28_1 = &data_879ad0
        void* const var_24_1 = &data_879ad4
        char const* const var_80_1 = "Victory"
        void* const* var_74_1 = &var_34
        int128_t* eax_34 = sub_4f6e90(edi_7, sub_4fc3d0(&data_be1cb8, esi_8), &data_83f3d3)
        eax_34[0x12].d = *eax_34 + 1
        *(eax_34 + 0x124) = 4
        *(eax_34 + 0x128) = 1
        *(eax_34 + 0x12c) = 4
        eax_34[0x13].d = 1
        var_9c_1.d = 0
        int32_t var_1c_1 = 0
        var_98_1.d = arg1 + 0x4ec
        
        do
            int32_t esi_10 = *(arg1 + 0x18)
            int32_t ebx_2 = data_3166198
            int32_t var_88_1 = var_1c_1
            int32_t var_8c = var_9c_1.d
            void* eax_36 = sub_4fc3d0(&data_be1cb8, esi_10)
            int128_t* eax_37 = sub_4f6e90(ebx_2, eax_36, &data_83f3d3)
            int32_t esi_13 =
                *(sub_4f7720(&var_8c, ebx_2 * 0x118 + *sub_4f4890(*(eax_36 + 4)), eax_37) + 0x434)
            int128_t* eax_42 = sub_4f6e90(data_3166190, sub_4fc3d0(&data_be1cb8, esi_13), &data_83f3d3)
            int32_t edi_11 = var_9c_1.d
            *(eax_42 + 0x64) = *eax_42 + 1
            sub_4c4590((&var_6c)[edi_11])
            int32_t eax_46 = (&var_7c)[edi_11]
            int32_t ebx_7 = data_3166194
            *(eax_42 + 0x151) = 1
            char* ecx_19 = *(eax_46 + (*var_98_1.d << 2))
            int128_t* eax_48 = sub_4f6e90(ebx_7, sub_4fc3d0(&data_be1cb8, esi_13), &data_83f3d3)
            *(eax_48 + 0x64) = *eax_48 + 1
            sub_4c4590(ecx_19)
            var_98_1.d += 4
            i = var_9c_1.d + 1
            *(eax_48 + 0x151) = 1
            var_9c_1.d = i
        while (i s< 4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}

// 函数名称: sub_436c20
// 虚拟地址: 0x436c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_436c20(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696c42
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t entry_ebx
    int32_t var_974 = entry_ebx
    int32_t var_980 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_b0
    float* eax_6
    float* esi_3
    
    if (*(data_27e7fd0 + 0x27) != 0)
        eax_6 = sub_435fb0(&var_b0, arg2, arg3, &var_b0, arg5, arg6)
    label_436d67:
        esi_3 = eax_6
    label_436d73:
        __builtin_memcpy(arg4, esi_3, 0x20)
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_5a6aba(eax_2 ^ &__saved_ebp)
        return arg4
    
    void* eax_7
    
    if (arg3 != 0xffffffff)
        eax_7 = sub_46b2b0(arg3)
    
    if (arg3 == 0xffffffff || *eax_7 != 0)
        sub_4c5870("localSeat == SEAT_LOCAL", &data_83f3d3, "..\code\RFTGClient.cpp", 0x29d0, 
            "CalcDestTransform")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi_1 = *arg5
    int32_t ebx
    
    if (edi_1 != 0xffffffff)
        ebx = sub_46b360(edi_1)
    else
        ebx = entry_ebx | edi_1
    
    float eax_10
    int32_t edx
    eax_10, edx = sub_426870(arg2, 0)
    arg2[0x29] = eax_10
    float var_6c = eax_10
    
    if (arg6 != 0)
        var_6c = 0f
    
    int32_t eax_11 = arg5[1]
    void var_3d0
    float var_d0
    float var_80
    float var_68
    float var_64
    float var_5c
    float var_28
    int32_t eax_33
    int80_t st0_14
    
    switch (eax_11)
        case 0
            float var_350[0x8]
            int80_t st0_19
            st0_19, eax_6 = sub_42ff60(&var_350)
            goto label_436d67
        case 1
            void var_450
            int80_t st0_18
            st0_18, eax_6 = sub_42b500(&var_450)
            goto label_436d67
        case 2
            if (*arg5 != 0)
                void var_4f0
                __builtin_memcpy(&var_68, sub_45fb20(eax_11, &var_4f0, ebx, &var_4f0), 0x40)
                void var_250
                int80_t st0_1
                st0_1, eax_6 = sub_430720(&var_250)
            else
                int32_t eax_13 = sub_424cd0(2, edx, ebx)
                void var_410
                void* var_984_1 = &var_410
                eax_6 = sub_42f700(eax_13, var_6c, eax_13)
            
            goto label_436d67
        case 3
            if (*arg5 != 0)
                int32_t eax_27 = sub_424cd0(3, edx, ebx)
                void var_5b0
                __builtin_memcpy(&var_68, sub_45fb20(eax_27, &var_5b0, ebx, &var_5b0), 0x40)
                uint32_t eax_30 = zx.d(sub_431320(ebx))
                float var_430[0x8]
                int80_t st0_5
                st0_5, eax_6 = sub_4300f0(eax_30, var_6c, eax_27, &var_430, &var_68, eax_30.b)
            else
                int32_t eax_25 = sub_424cd0(3, edx, ebx)
                int32_t eax_26 = sub_431320(ebx)
                float var_984_10 = var_6c
                int80_t st0_4
                st0_4, eax_6 = sub_42fd70(eax_26, eax_25)
            
            goto label_436d67
        case 4
            if (*arg5 != 0)
                int32_t eax_46 = sub_424cd0(3, edx, ebx)
                void var_8b0
                __builtin_memcpy(&var_68, sub_45fb20(eax_46, &var_8b0, ebx, &var_8b0), 0x40)
                uint32_t eax_49 = zx.d(sub_431320(ebx))
                float var_2d0[0x8]
                int80_t st0_11
                st0_11, eax_6 = sub_430510(eax_49, var_6c, eax_46, &var_2d0, &var_68, eax_49.b)
            else
                int32_t eax_44 = sub_424cd0(3, edx, ebx)
                char eax_45 = sub_431320(ebx)
                float var_984_25 = var_6c
                int80_t st0_10
                st0_10, eax_6 = sub_42fec0(eax_45, eax_44)
            
            goto label_436d67
        case 5, 0x10
            float eax_17
            int32_t edx_3
            eax_17, edx_3 = sub_426ad0(sub_436b30())
            var_6c = eax_17
            
            if (arg6 != 0)
                var_6c = 0f
            
            int32_t eax_20
            
            if (*arg5 != 0)
                int32_t eax_21 = sub_424cd0(3, edx_3, ebx)
                void var_930
                __builtin_memcpy(&var_68, sub_45fb20(eax_21, &var_930, ebx, &var_930), 0x40)
                uint32_t eax_24 = zx.d(sub_431320(ebx))
                float var_3f0[0x8]
                int80_t st0_3
                st0_3, eax_20 = sub_4300f0(eax_24, var_6c, eax_21, &var_3f0, &var_68, eax_24.b)
            else
                int32_t eax_18 = sub_424cd0(2, edx_3, ebx)
                int32_t eax_19 = sub_431320(ebx)
                float var_984_5 = var_6c
                int80_t st0_2
                st0_2, eax_20 = sub_42fcd0(eax_19, eax_18)
            
            __builtin_memcpy(&var_b0, eax_20, 0x20)
            var_b0 = fconvert.s(float.t(0))
            esi_3 = &var_b0
            goto label_436d73
        case 8
            void var_290
            eax_6 = sub_431010(eax_11, edx, ebx, &var_290)
            goto label_436d67
        case 9
            void var_2b0
            eax_6 = sub_4310f0(eax_11, &var_2b0, ebx, &var_2b0)
            goto label_436d67
        case 0xa
            void var_2f0
            int80_t st0_23
            st0_23, eax_6 = sub_4311d0(&var_2f0)
            goto label_436d67
        case 0xb
            void* edx_61 = data_27e7a40
            
            if (ebx != *(edx_61 + 0x74))
                void var_970
                __builtin_memcpy(&var_68, sub_45fb20(eax_11, edx_61, ebx, &var_970), 0x40)
                void var_210
                int80_t st0_33
                st0_33, eax_6 = sub_430880(&var_210, ebx, &var_68)
            else
                int32_t* eax_106 = data_307c530
                void var_870
                int32_t eax_107
                int80_t st0_31
                st0_31, eax_107 = sub_40a930(&var_870)
                __builtin_memcpy(&var_68, eax_107, 0x40)
                
                if ((data_31662f0.d & 0x100) == 0)
                    data_31662f0.d |= 0x100
                    int32_t var_8_17 = 8
                    data_31662cc = sub_4f5220(eax_106, "tbl_myIcons")
                    int32_t var_8_18 = 0xffffffff
                
                int32_t* eax_109 = data_307c5cc
                
                if ((data_31662f0.d & 0x200) == 0)
                    data_31662f0.d |= 0x200
                    int32_t var_8_19 = 9
                    data_31662c8 = sub_4f5220(eax_109, "ico_goalBack")
                    int32_t var_8_20 = 0xffffffff
                
                int32_t esi_28 = 4
                
                if (*(sub_418a10() + 0x45a) == 3 && sub_424870(ebx) != 0)
                    esi_28 = 3
                
                sub_418a10()
                int32_t eax_115
                int32_t edx_64
                int80_t st0_32
                st0_32, eax_115, edx_64 =
                    sub_4240c0(&var_68, eax_106, esi_28, eax_106, data_31662cc, &var_68, 4)
                __builtin_memcpy(&var_68, eax_115, 0x40)
                int32_t* eax_117 = sub_4f5350(data_31662c8, edx_64, eax_109, &var_68)
                int32_t edx_65 = eax_117[1]
                var_28 = *eax_117
                int32_t var_24_6 = edx_65
                int32_t var_20_5 = eax_117[2]
                int32_t var_1c_6 = eax_117[3]
                eax_6 = sub_430000(&var_28, 1)
            
            goto label_436d67
        case 0xc
            void var_3b0
            eax_6 = sub_436780(&var_3b0, edx, ebx, &var_3b0)
            goto label_436d67
        case 0xd
            void var_f0
            int32_t* eax_103
            int80_t st0_30
            st0_30, eax_103 = sub_467bf0(&var_f0)
            int32_t ecx_61 = eax_103[1]
            var_28 = *eax_103
            int32_t var_24_5 = ecx_61
            int32_t var_1c_5 = eax_103[3]
            int32_t var_20_4 = eax_103[2]
            eax_6 = sub_430000(&var_28, 1)
            goto label_436d67
        case 0xe
            int32_t esi_21 = *arg2
            
            if (esi_21 == 0)
                float var_170[0x8]
                int80_t st0_20
                st0_20, eax_6 = sub_468120(&var_170)
                goto label_436d67
            
            if (esi_21 == 4)
                float var_390[0x8]
                int80_t st0_21
                st0_21, eax_6 = sub_468260(eax_11, arg2, arg2[0x21], &var_390)
                goto label_436d67
            
            if (esi_21 != 6)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2aaa, "CalcDestTransform")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* ebx_4 = data_307c760
            void var_530
            int32_t eax_79
            int32_t edx_45
            int80_t st0_22
            st0_22, eax_79, edx_45 = sub_40a930(&var_530)
            __builtin_memcpy(&var_68, eax_79, 0x40)
            
            if ((data_31662f0 & 8) == 0)
                data_31662f0.d |= 8
                int32_t var_8_7 = 3
                int32_t eax_80
                eax_80, edx_45 = sub_4f5220(ebx_4, "img_Takeover")
                data_31662e0 = eax_80
                int32_t var_8_8 = 0xffffffff
            
            int32_t* eax_82 = sub_4f5350(data_31662e0, edx_45, data_307c760, &var_68)
            float ecx_49 = eax_82[1]
            var_28 = *eax_82
            float eax_83 = eax_82[3]
            int32_t var_20_3 = eax_82[2]
            __builtin_memcpy(&var_b0, &data_be4c5c, 0x20)
            float eax_85
            float edx_48
            eax_85, edx_48 = sub_405eb0(&var_28)
            float var_9c_1 = fconvert.s(fconvert.t(eax_85))
            float var_98_1 = fconvert.s(fconvert.t(edx_48))
            float var_94_1 = fconvert.s(float.t(0))
            float eax_88
            float edx_50
            eax_88, edx_50 = sub_418560(data_307c3a0)
            float var_8c_5 = eax_88
            esi_3 = &var_b0
            var_b0 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_83) - fconvert.t(ecx_49)))
                / fconvert.t(edx_50))
            goto label_436d73
        case 0xf
            int32_t* ebx_3 = data_307c6f4
            void var_830
            int32_t eax_61
            int80_t st0_13
            st0_13, eax_61 = sub_40a930(&var_830)
            bool cond:8_1 = (data_31662f0 & 4) != 0
            int32_t ecx_32 = __builtin_memcpy(&var_68, eax_61, 0x40)
            
            if (not(cond:8_1))
                data_31662f0.d |= 4
                int32_t var_8_5 = 2
                data_31662e4 = sub_4f5220(ebx_3, "rgn_cardScavange")
                int32_t var_8_6 = 0xffffffff
            
            int32_t var_984_35 = ecx_32
            void var_130
            int32_t* eax_64 =
                sub_4f5dc0(&var_130, &var_68, ebx_3, &var_130, data_31662e4, fconvert.s(float.t(1)))
            int32_t edx_30 = eax_64[1]
            var_28 = *eax_64
            float ecx_35 = eax_64[2]
            int32_t var_24_3 = edx_30
            int32_t var_1c_3 = eax_64[3]
            float eax_66
            float edx_32
            eax_66, edx_32 = sub_405eb0(&var_28)
            float var_90_2 = fconvert.s(fconvert.t(eax_66))
            float var_8c_2 = fconvert.s(fconvert.t(edx_32))
            float var_88_2 = fconvert.s(float.t(0))
            long double x87_r6_22 = fconvert.t(ecx_35) - fconvert.t(var_28)
            __builtin_memcpy(&var_d0, &data_be4c5c, 0x20)
            float var_bc_2 = var_90_2
            float var_b8_2 = var_8c_2
            float var_b4_2 = var_88_2
            esi_3 = &var_d0
            var_d0 = fconvert.s(fconvert.t(fconvert.s(x87_r6_22)) / fconvert.t(data_307cc8c))
            goto label_436d73
        case 0x11
            st0_14, eax_33 = sub_42b500(&var_3d0)
        case 0x12, 0x13
            int32_t* ebx_2 = data_307c75c
            void var_6b0
            int32_t eax_50
            int80_t st0_12
            st0_12, eax_50 = sub_40a930(&var_6b0)
            __builtin_memcpy(&var_68, eax_50, 0x40)
            float var_20_1
            
            if (arg5[1] != 0x12)
                if ((data_31662f0 & 2) == 0)
                    data_31662f0.d |= 2
                    int32_t var_8_3 = 1
                    data_31662e8 = sub_4f5220(ebx_2, "tbl_DefenseCard")
                    int32_t var_8_4 = 0xffffffff
                
                int32_t eax_55 = data_31662e8
                int32_t* var_984_32 = arg5
                void var_110
                int32_t* eax_56 =
                    sub_4f5dc0(eax_55, &var_68, ebx_2, &var_110, eax_55, fconvert.s(float.t(1)))
                int32_t ecx_30 = eax_56[1]
                var_28 = *eax_56
                int32_t var_24_2 = ecx_30
                var_20_1 = eax_56[2]
                int32_t var_1c_2 = eax_56[3]
            else
                if ((data_31662f0 & 1) == 0)
                    data_31662f0.d |= 1
                    int32_t var_8_1 = 0
                    data_31662ec = sub_4f5220(ebx_2, "tbl_OffenseCard")
                    int32_t var_8_2 = 0xffffffff
                
                int32_t* var_984_30 = arg5
                void var_150
                int32_t* eax_53 =
                    sub_4f5dc0(&var_150, &var_68, ebx_2, &var_150, data_31662ec, fconvert.s(float.t(1)))
                int32_t edx_21 = eax_53[1]
                var_28 = *eax_53
                int32_t var_24_1 = edx_21
                var_20_1 = eax_53[2]
                int32_t var_1c_1 = eax_53[3]
            
            float eax_59
            float edx_26
            eax_59, edx_26 = sub_405eb0(&var_28)
            float var_90_1 = fconvert.s(fconvert.t(eax_59))
            float var_8c_1 = fconvert.s(fconvert.t(edx_26))
            float var_88_1 = fconvert.s(float.t(0))
            long double x87_r6_14 = fconvert.t(var_20_1) - fconvert.t(var_28)
            __builtin_memcpy(&var_d0, &data_be4c5c, 0x20)
            float var_bc_1 = var_90_1
            float var_b8_1 = var_8c_1
            float var_b4_1 = var_88_1
            esi_3 = &var_d0
            var_d0 = fconvert.s(fconvert.t(fconvert.s(x87_r6_14)) / fconvert.t(data_307cc8c))
            goto label_436d73
        case 0x14
            int32_t* ebx_6 = data_307c72c
            void var_6f0
            int32_t eax_97
            int80_t st0_28
            st0_28, eax_97 = sub_40a930(&var_6f0)
            bool cond:10_1 = var_6c == 0
            int32_t ecx_57 = __builtin_memcpy(&var_68, eax_97, 0x40)
            void* var_99c_2
            int32_t* var_998_2
            int32_t var_994_2
            float var_98c_17
            
            if (cond:10_1)
                if ((data_31662f0 & 0x80) == 0)
                    data_31662f0.d |= 0x80
                    int32_t var_8_15 = 7
                    data_31662d0 = sub_4f5220(ebx_6, "card2")
                    int32_t var_8_16 = 0xffffffff
                
                int32_t var_984_59 = 0
                int32_t var_988_26 = 0
                int32_t var_98c_18 = ecx_57
                var_98c_17 = fconvert.s(float.t(1))
                int32_t* const var_990_6 = &data_84074c
                var_994_2 = data_31662d0
                var_998_2 = ebx_6
                void var_7f0
                var_99c_2 = &var_7f0
            else
                if ((data_31662f0 & 0x40) == 0)
                    data_31662f0.d |= 0x40
                    int32_t var_8_13 = 6
                    data_31662d4 = sub_4f5220(ebx_6, "card1")
                    int32_t var_8_14 = 0xffffffff
                
                int32_t var_984_58 = 0
                int32_t var_988_24 = 0
                int32_t var_98c_16 = ecx_57
                var_98c_17 = fconvert.s(float.t(1))
                int32_t* const var_990_5 = &data_84074c
                var_994_2 = data_31662d4
                var_998_2 = ebx_6
                void var_770
                var_99c_2 = &var_770
            
            int32_t eax_100
            int80_t st0_29
            st0_29, eax_100 =
                sub_4f66d0(var_99c_2, var_998_2, var_994_2, &data_84074c, var_98c_17, nullptr, nullptr)
            __builtin_memcpy(&var_68, eax_100, 0x40)
            long double x87_r5_4 = fconvert.t(var_5c)
            float var_74_17 = fconvert.s(fconvert.t(data_307cc90) * x87_r5_4)
            long double x87_r4_17 =
                fconvert.t(var_68) + fconvert.t(fconvert.s(x87_r5_4 * fconvert.t(data_307cc8c)))
            __builtin_memcpy(&var_b0, &data_be4c5c, 0x20)
            float var_88_7 = fconvert.s(fconvert.t(var_64) + fconvert.t(var_74_17))
            var_80 = fconvert.s(fconvert.t(fconvert.s(x87_r4_17)))
            float var_7c_5 = fconvert.s(fconvert.t(var_88_7))
            float var_78_11 = fconvert.s(float.t(0))
            float var_9c_3 = var_80
            var_b0 = fconvert.s(x87_r5_4 + x87_r5_4)
            float var_98_3 = var_7c_5
            float var_94_3 = var_78_11
            esi_3 = &var_b0
            goto label_436d73
        case 0x15
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x29da, "CalcDestTransform")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 0x16
            int32_t edi_4 = *arg5
            
            if (edi_4 == 0xffffffff)
                void var_e0
                int32_t* eax_68
                int80_t st0_15
                st0_15, eax_68 = sub_4313a0(&var_e0, arg2[0x21], &var_6c)
                int32_t edx_35 = eax_68[1]
                var_80 = *eax_68
                int32_t var_7c_1 = edx_35
                int32_t var_78_3 = eax_68[2]
                int32_t var_74_10 = eax_68[3]
            else if (edi_4 != 0)
                void* eax_70 = data_27e7a40
                
                if (ebx != *(*(eax_70 + 0x548) + 0xbfb0))
                    void var_730
                    __builtin_memcpy(&var_68, sub_45fb20(eax_70, edx, ebx, &var_730), 0x40)
                    void var_310
                    int80_t st0_17
                    st0_17, eax_6 = sub_430c00(&var_310, &var_68, ebx, &var_310, &var_68)
                    goto label_436d67
                
                float var_140[0x4]
                float* eax_72 = sub_4314f0(&var_140, edi_4, arg2[0x21], &var_6c)
                int32_t ecx_43 = eax_72[1]
                var_80 = *eax_72
                int32_t var_7c_3 = ecx_43
                int32_t var_78_5 = eax_72[2]
                int32_t var_74_12 = eax_72[3]
            else
                void var_100
                int32_t* eax_69
                int80_t st0_16
                st0_16, eax_69 = sub_431610(&var_100, edi_4, arg2[0x21], &var_6c)
                int32_t edx_37 = eax_69[1]
                var_80 = *eax_69
                int32_t var_7c_2 = edx_37
                int32_t var_78_4 = eax_69[2]
                int32_t var_74_11 = eax_69[3]
            
            __builtin_memcpy(&var_d0, &data_be4c5c, 0x20)
            float eax_75
            int32_t edx_41
            eax_75, edx_41 = sub_405eb0(&var_80)
            float var_78_6 = eax_75
            unimplemented  {fld st0, dword [ebp-0x74]}
            int32_t var_74_13 = edx_41
            float var_90_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x8c], st0})
            unimplemented  {fstp dword [ebp-0x8c], st0}
            unimplemented  {fld st0, dword [ebp-0x70]}
            float var_bc_3 = var_90_3
            float var_8c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x88], st0})
            unimplemented  {fstp dword [ebp-0x88], st0}
            unimplemented  {fldz }
            float var_b8_3 = var_8c_3
            float var_88_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
            unimplemented  {fstp dword [ebp-0x84], st0}
            unimplemented  {fld st0, dword [ebp-0x68]}
            float var_b4_3 = var_88_3
            var_d0 = fconvert.s(unimplemented  {fstp dword [ebp-0xcc], st0})
            unimplemented  {fstp dword [ebp-0xcc], st0}
            esi_3 = &var_d0
            goto label_436d73
        case 0x17
            if (*arg5 != 0)
                int32_t eax_40 = sub_424cd0(3, edx, ebx)
                void var_630
                __builtin_memcpy(&var_68, sub_45fb20(eax_40, &var_630, ebx, &var_630), 0x40)
                uint32_t eax_43 = zx.d(sub_431320(ebx))
                float var_4b0[0x8]
                int80_t st0_9
                st0_9, eax_6 = sub_430300(eax_43, var_6c, eax_40, &var_4b0, &var_68, eax_43.b)
            else
                int32_t eax_38 = sub_424cd0(3, edx, ebx)
                char eax_39 = sub_431320(ebx)
                float var_984_20 = var_6c
                int80_t st0_8
                st0_8, eax_6 = sub_42fe10(eax_39, eax_38)
            
            goto label_436d67
        case 0x18
            if (*arg5 != 0)
                int32_t eax_34 = sub_424cd0(3, edx, ebx)
                void var_7b0
                __builtin_memcpy(&var_68, sub_45fb20(eax_34, &var_7b0, ebx, &var_7b0), 0x40)
                uint32_t eax_37 = zx.d(sub_431320(ebx))
                float var_470[0x8]
                int80_t st0_7
                st0_7, eax_33 = sub_430300(eax_37, var_6c, eax_34, &var_470, &var_68, eax_37.b)
            else
                int32_t eax_31 = sub_424cd0(3, edx, ebx)
                char eax_32 = sub_431320(ebx)
                float var_984_15 = var_6c
                int80_t st0_6
                st0_6, eax_33 = sub_42fe10(eax_32, eax_31)
        case 0x19, 0x1a
            int32_t* ebx_5 = data_307c760
            void var_570
            int32_t eax_91
            int80_t st0_26
            st0_26, eax_91 = sub_40a930(&var_570)
            bool cond:9_1 = arg5[1] != 0x19
            int32_t ecx_55 = __builtin_memcpy(&var_68, eax_91, 0x40)
            void* var_99c_1
            int32_t* var_998_1
            int32_t var_994_1
            float var_98c_14
            
            if (cond:9_1)
                if ((data_31662f0 & 0x20) == 0)
                    data_31662f0.d |= 0x20
                    int32_t var_8_11 = 5
                    data_31662d8 = sub_4f5220(ebx_5, "tbl_DefenseCard")
                    int32_t var_8_12 = 0xffffffff
                
                int32_t var_984_56 = 0
                int32_t var_988_22 = 0
                int32_t var_98c_15 = ecx_55
                var_98c_14 = fconvert.s(float.t(1))
                int32_t* const var_990_4 = &data_84074c
                var_994_1 = data_31662d8
                var_998_1 = ebx_5
                void var_670
                var_99c_1 = &var_670
            else
                if ((data_31662f0 & 0x10) == 0)
                    data_31662f0.d |= 0x10
                    int32_t var_8_9 = 4
                    data_31662dc = sub_4f5220(ebx_5, "tbl_OffenseCard")
                    int32_t var_8_10 = 0xffffffff
                
                int32_t var_984_55 = 0
                int32_t var_988_20 = 0
                int32_t var_98c_13 = ecx_55
                var_98c_14 = fconvert.s(float.t(1))
                int32_t* const var_990_3 = &data_84074c
                var_994_1 = data_31662dc
                var_998_1 = ebx_5
                void var_5f0
                var_99c_1 = &var_5f0
            
            int32_t eax_95
            int80_t st0_27
            st0_27, eax_95 =
                sub_4f66d0(var_99c_1, var_998_1, var_994_1, &data_84074c, var_98c_14, nullptr, nullptr)
            __builtin_memcpy(&var_68, eax_95, 0x40)
            long double x87_r5_2 = fconvert.t(var_5c)
            float var_74_16 = fconvert.s(fconvert.t(data_307cc90) * x87_r5_2)
            long double x87_r4_6 =
                fconvert.t(var_68) + fconvert.t(fconvert.s(x87_r5_2 * fconvert.t(data_307cc8c)))
            __builtin_memcpy(&var_b0, &data_be4c5c, 0x20)
            float var_88_6 = fconvert.s(fconvert.t(var_64) + fconvert.t(var_74_16))
            var_80 = fconvert.s(fconvert.t(fconvert.s(x87_r4_6)))
            float var_7c_4 = fconvert.s(fconvert.t(var_88_6))
            float var_78_9 = fconvert.s(float.t(0))
            float var_9c_2 = var_80
            var_b0 = fconvert.s(x87_r5_2 + x87_r5_2)
            float var_98_2 = var_7c_4
            float var_94_2 = var_78_9
            esi_3 = &var_b0
            goto label_436d73
        case 0x1b
            float eax_90 = var_6c
            float var_330[0x8]
            int80_t st0_24
            st0_24, eax_6 =
                sub_42f8c0(eax_90, &var_330, *(*(data_27e7a40 + 0x548) + 0x43888), &var_330, eax_90)
            goto label_436d67
        case 0x1c
            float var_370[0x8]
            int80_t st0_25
            st0_25, eax_6 = sub_42f780(&var_370)
            goto label_436d67
        default
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2b11, "CalcDestTransform")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    unimplemented  {fldz }
    __builtin_memcpy(&var_b0, eax_33, 0x20)
    var_b0 = fconvert.s(unimplemented  {fstp dword [ebp-0xac], st0})
    unimplemented  {fstp dword [ebp-0xac], st0}
    esi_3 = &var_b0
    goto label_436d73
}

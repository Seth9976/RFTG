// 函数名称: sub_43da20
// 虚拟地址: 0x43da20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_43da20(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694e56
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_5c
    int32_t eax_2 = __security_cookie ^ &var_5c
    int32_t __saved_edi
    int32_t var_6c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_6
    
    if ((data_3165d78 & 1) != 0)
        eax_6 = data_3165d74
    else
        data_3165d78.d |= 1
        int32_t var_c_1 = 0
        char const* const var_70_1 = "ui_console"
        char* edx
        eax_6 = sub_510710(data_307ca78, edx)
        data_3165d74 = eax_6
        int32_t var_c_2 = 0xffffffff
    
    int32_t ecx = data_27e7a40
    int128_t* result
    
    if (*(ecx + 0x2c4960) != 0)
        int128_t* eax_11 = sub_50c830(eax_6, arg1, sub_510b30(ecx, arg1))
        void* edx_4 = data_27e7a40
        *(eax_11 + 0x64) = *(eax_11 + 0x5c) + 1
        *(eax_11 + 0x68) = 0
        int32_t eax_12 = *(edx_4 + 0x74)
        int32_t eax_14
        int32_t edx_6
        eax_14, edx_6 = sub_510860(data_3165d74)
        void* eax_15 = sub_418a10()
        int32_t* esi_1 = data_307ca40
        int32_t eax_16 = data_3165d78.d
        
        if ((eax_16.b & 2) == 0)
            data_3165d78.d = eax_16 | 2
            int32_t var_c_3 = 1
            int32_t eax_18
            eax_18, edx_6 = sub_4f5220(esi_1, "img_my_phase")
            data_3165d70 = eax_18
            int32_t var_c_4 = 0xffffffff
            eax_16 = data_3165d78.d
        
        if ((eax_16.b & 4) == 0)
            data_3165d78.d = eax_16 | 4
            int32_t var_c_5 = 2
            int32_t eax_20
            eax_20, edx_6 = sub_4f5220(esi_1, "img_my_phase_2")
            data_3165d6c = eax_20
            int32_t var_c_6 = 0xffffffff
            eax_16 = data_3165d78.d
        
        if ((eax_16.b & 8) == 0)
            data_3165d78.d = eax_16 | 8
            int32_t var_c_7 = 3
            int32_t eax_22
            eax_22, edx_6 = sub_4f5220(esi_1, "img_my_phase_prestige")
            data_3165d68 = eax_22
            int32_t var_c_8 = 0xffffffff
            eax_16 = data_3165d78.d
        
        if ((eax_16.b & 0x10) == 0)
            data_3165d78.d = eax_16 | 0x10
            int32_t var_c_9 = 4
            int32_t eax_24
            eax_24, edx_6 = sub_4f5220(esi_1, "img_my_phase_2_prestige")
            data_3165d64 = eax_24
            int32_t var_c_10 = 0xffffffff
            eax_16 = data_3165d78.d
        
        if ((eax_16.b & 0x20) == 0)
            int32_t ecx_5 = data_3165d70
            eax_16 |= 0x20
            data_3165d78.d = eax_16
            data_3165d60 = ecx_5
        
        if ((eax_16.b & 0x40) == 0)
            edx_6 = data_3165d68
            data_3165d78.d = eax_16 | 0x40
            data_3165d5c = edx_6
        
        int32_t var_70_2 = 1
        char edx_7 = sub_4fa4e0(eax_14, data_3165d70, edx_6.b)
        int32_t var_78_1 = 1
        sub_4fa4e0(eax_14, data_3165d6c, edx_7)
        float edx_8 = data_3165d60
        int32_t var_80_1 = 1
        int32_t edx_9 = sub_4fa4e0(eax_14, edx_8, edx_8.b)
        char var_55
        char* ecx_7 = &var_55
        char* var_54
        void* var_38_1
        
        if (sub_41e630() == 0)
            void* eax_47 = eax_12 * 0xb4 + eax_15
            var_38_1 = eax_47
            char* eax_49 = sub_41eac0(*(eax_47 + 0x2c), edx_9, ecx_7)
            float eax_50 = data_3165d5c
            ecx_7.b = var_55 == 0
            uint32_t edx_16 = zx.d(ecx_7.b)
            uint32_t var_70_7 = edx_16
            var_54 = eax_49
            char edx_17 = sub_4fa4e0(eax_14, eax_50, edx_16.b)
            
            if (eax_49 != 0)
                int32_t var_70_8 = 0
                sub_4fa4e0(eax_14, data_3165d60, edx_17)
                int32_t* eax_54 =
                    sub_4f6e90(data_3165d60, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
                char* ecx_15 = var_54
                eax_54[0x25] = *eax_54 + 1
                eax_54[0x26] = ecx_15
        else
            void* esi_3 = eax_12 * 0xb4
            void* esi_4 = esi_3 + eax_15
            var_38_1 = esi_4
            char* eax_32 = sub_41eac0(*(esi_3 + eax_15 + 0x2c), edx_9, ecx_7)
            float eax_33 = data_3165d68
            ecx_7.b = var_55 == 0
            uint32_t edx_10 = zx.d(ecx_7.b)
            uint32_t var_70_3 = edx_10
            var_54 = eax_32
            int32_t edx_11 = sub_4fa4e0(eax_14, eax_33, edx_10.b)
            
            if (eax_32 != 0)
                int32_t var_70_4 = 0
                sub_4fa4e0(eax_14, data_3165d70, edx_11.b)
                int128_t* eax_37 =
                    sub_4f6e90(data_3165d70, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
                char* ecx_9 = var_54
                esi_4 = var_38_1
                edx_11 = *eax_37 + 1
                *(eax_37 + 0x94) = edx_11
                *(eax_37 + 0x98) = ecx_9
            
            char* eax_39 = sub_41eac0(*(esi_4 + 0x30), edx_11, &var_55)
            bool cond:4_1 = var_55 == 0
            float ecx_11 = data_3165d64
            uint32_t var_70_5 = zx.d(cond:4_1)
            var_54 = eax_39
            sub_4fa4e0(eax_14, ecx_11, cond:4_1)
            
            if (eax_39 != 0)
                float edx_14 = data_3165d6c
                int32_t var_70_6 = 0
                sub_4fa4e0(eax_14, edx_14, edx_14.b)
                int128_t* eax_44 =
                    sub_4f6e90(data_3165d6c, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
                char* edx_15 = var_54
                *(eax_44 + 0x94) = *eax_44 + 1
                *(eax_44 + 0x98) = edx_15
        
        void* eax_55 = sub_4fc3d0(&data_be1cb8, eax_14)
        int32_t* esi_14 = data_307ca40
        *(eax_55 + 0x2c) = sub_43b730
        eax_55.b = data_27c05f2 == 0
        sub_4fa770(eax_14, 0x20, eax_55)
        
        if ((data_3165d78 & 0x80) == 0)
            data_3165d78.d |= 0x80
            int32_t var_c_11 = 5
            data_3165d58 = sub_4f5220(esi_14, "tbl_goals_lrg")
            int32_t var_c_12 = 0xffffffff
        
        if ((data_3165d78.d & 0x100) == 0)
            data_3165d78.d |= 0x100
            int32_t var_c_13 = 6
            data_3165d54 = sub_4f5220(esi_14, "tbl_goals_sml")
            int32_t var_c_14 = 0xffffffff
        
        float edx_20 = data_3165d58
        int32_t var_70_10 = 1
        char edx_21 = sub_4fa4e0(eax_14, edx_20, edx_20.b)
        int32_t var_78_3 = 1
        sub_4fa4e0(eax_14, data_3165d54, edx_21)
        sub_42c680(eax_12)
        
        if ((data_3165d78.d & 0x200) == 0)
            data_3165d78.d |= 0x200
            int32_t var_c_15 = 7
            data_3165d50 = sub_4f5220(esi_14, "txt_vp_total")
            int32_t var_c_16 = 0xffffffff
        
        int32_t var_c_17 = 8
        char* eax_66 = *sub_4c4ab0(&var_54)
        char* var_50 = &data_83f3d3
        
        if (eax_66 != 0)
            var_50 = eax_66
        
        int128_t* eax_68 = sub_4f6e90(data_3165d50, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
        char* eax_69 = var_50
        *(eax_68 + 0x64) = *eax_68 + 1
        char edx_22 = sub_4c4590(eax_69)
        *(eax_68 + 0x151) = 1
        int32_t var_c_18 = 0xffffffff
        char* eax_70 = var_54
        
        if (eax_70 != 0 && *eax_70 != 0)
            void* eax_72 = sub_4c4060(&var_54)
            int32_t temp0_1 = *(eax_72 + 4)
            *(eax_72 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_20 = *(eax_72 + 0xc) + 0x10
                edx_22 = sub_4f4430(eax_72, sub_4f4380(esi_20), esi_20)
        
        if ((data_3165d78.d & 0x400) == 0)
            data_3165d78.d |= 0x400
            int32_t var_c_19 = 9
            int32_t eax_75
            eax_75, edx_22 = sub_4f5220(esi_14, "img_vp_prestige")
            data_3165d4c = eax_75
            int32_t var_c_20 = 0xffffffff
        
        if ((data_3165d78.d & 0x800) == 0)
            data_3165d78.d |= 0x800
            int32_t var_c_21 = 0xa
            int32_t eax_77
            eax_77, edx_22 = sub_4f5220(esi_14, "txt_vp_prestige")
            data_3165d48 = eax_77
            int32_t var_c_22 = 0xffffffff
        
        if (*(eax_15 + 0x45a) == 3)
            int32_t eax_83
            
            if (eax_12 != 0xffffffff)
                void* eax_84
                eax_84, edx_22 = sub_46b2b0(eax_12)
                eax_83 = *eax_84
            else
                eax_83 = 0xffffffff
            
            *((eax_83 << 2) + &data_c020f8)
            int32_t var_70_13 = 0
            sub_4fa4e0(eax_14, data_3165d4c, edx_22)
            int32_t var_c_23 = 0xb
            char* eax_88 = *sub_4c4ab0(&var_50)
            var_54 = &data_83f3d3
            
            if (eax_88 != 0)
                var_54 = eax_88
            
            int128_t* eax_90 = sub_4f6e90(data_3165d48, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
            char* eax_91 = var_54
            *(eax_90 + 0x64) = *eax_90 + 1
            sub_4c4590(eax_91)
            *(eax_90 + 0x151) = 1
            int32_t var_c_24 = 0xffffffff
            char* eax_92 = var_50
            
            if (eax_92 != 0 && *eax_92 != 0)
                void* eax_94 = sub_4c4060(&var_50)
                int32_t temp1_1 = *(eax_94 + 4)
                *(eax_94 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_31 = *(eax_94 + 0xc) + 0x10
                    sub_4f4430(eax_94, sub_4f4380(esi_31), esi_31)
        else
            float edx_24 = data_3165d4c
            int32_t var_70_12 = 1
            sub_4fa4e0(eax_14, edx_24, edx_24.b)
            int128_t* eax_80 = sub_4f6e90(data_3165d48, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
            *(eax_80 + 0x64) = *eax_80 + 1
            sub_4c4590(&data_83f3d3)
            *(eax_80 + 0x151) = 1
        
        int32_t eax_97
        
        if (eax_12 != 0xffffffff)
            eax_97 = *sub_46b2b0(eax_12)
        else
            eax_97 = 0xffffffff
        
        *((eax_97 << 2) + &data_c020e8)
        
        if ((data_3165d78.d & 0x1000) == 0)
            data_3165d78.d |= 0x1000
            int32_t var_c_25 = 0xc
            data_3165d44 = sub_4f5220(esi_14, "txt_vp_chits")
            int32_t var_c_26 = 0xffffffff
        
        int32_t var_c_27 = 0xd
        char* eax_103 = *sub_4c4ab0(&var_50)
        var_54 = &data_83f3d3
        
        if (eax_103 != 0)
            var_54 = eax_103
        
        int128_t* eax_105 = sub_4f6e90(data_3165d44, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
        char* eax_106 = var_54
        *(eax_105 + 0x64) = *eax_105 + 1
        sub_4c4590(eax_106)
        *(eax_105 + 0x151) = 1
        int32_t var_c_28 = 0xffffffff
        char* eax_107 = var_50
        
        if (eax_107 != 0 && *eax_107 != 0)
            void* eax_109 = sub_4c4060(&var_50)
            int32_t temp2_1 = *(eax_109 + 4)
            *(eax_109 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_39 = *(eax_109 + 0xc) + 0x10
                sub_4f4430(eax_109, sub_4f4380(esi_39), esi_39)
        
        sub_4244c0(eax_12)
        
        if ((data_3165d78.d & 0x2000) == 0)
            data_3165d78.d |= 0x2000
            int32_t var_c_29 = 0xe
            data_3165d40 = sub_4f5220(esi_14, "txt_vp_goals")
            int32_t var_c_30 = 0xffffffff
        
        int32_t var_c_31 = 0xf
        char* eax_117 = *sub_4c4ab0(&var_50)
        var_54 = &data_83f3d3
        
        if (eax_117 != 0)
            var_54 = eax_117
        
        int128_t* eax_119 = sub_4f6e90(data_3165d40, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
        *(eax_119 + 0x64) = *eax_119 + 1
        sub_4c4590(var_54)
        *(eax_119 + 0x151) = 1
        int32_t var_c_32 = 0xffffffff
        char* eax_123 = var_50
        
        if (eax_123 != 0 && *eax_123 != 0)
            void* eax_125 = sub_4c4060(&var_50)
            int32_t temp3_1 = *(eax_125 + 4)
            *(eax_125 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_46 = *(eax_125 + 0xc) + 0x10
                sub_4f4430(eax_125, sub_4f4380(esi_46), esi_46)
        
        if ((data_3165d78.d & 0x4000) == 0)
            data_3165d78.d |= 0x4000
            int32_t var_c_33 = 0x10
            data_3165d3c = sub_4f5220(esi_14, "txt_hand_count")
            int32_t var_c_34 = 0xffffffff
        
        int32_t eax_129
        
        if (eax_12 != 0xffffffff)
            eax_129 = *sub_46b2b0(eax_12)
        else
            eax_129 = 0xffffffff
        
        *((eax_129 << 2) + &data_c020d8)
        int32_t var_c_35 = 0x11
        char* eax_133 = *sub_4c4ab0(&var_50)
        var_54 = &data_83f3d3
        
        if (eax_133 != 0)
            var_54 = eax_133
        
        int128_t* eax_135 = sub_4f6e90(data_3165d3c, sub_4fc3d0(&data_be1cb8, eax_14), &data_83f3d3)
        char* eax_136 = var_54
        *(eax_135 + 0x64) = *eax_135 + 1
        int32_t edx_30 = sub_4c4590(eax_136)
        *(eax_135 + 0x151) = 1
        int32_t var_c_36 = 0xffffffff
        void* eax_137 = var_50
        
        if (eax_137 != 0 && *eax_137 != 0)
            eax_137 = sub_4c4060(&var_50)
            int32_t temp4_1 = *(eax_137 + 4)
            *(eax_137 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_53 = *(eax_137 + 0xc) + 0x10
                eax_137, edx_30 = sub_4f4430(eax_137, sub_4f4380(esi_53), esi_53)
        
        char* var_40 = sub_4b1530(eax_137, edx_30, eax_15, eax_12)
        int32_t var_30
        __builtin_memset(&var_30, 0, 0x14)
        void* edi_27 = *(data_27e7a40 + 0x548)
        var_50 = nullptr
        char edx_31 = sub_4b1650(eax_15, eax_12)
        int32_t* ebx_11
        
        if ((data_3165d78.d & 0x8000) != 0)
            ebx_11 = esi_14
        else
            data_3165d78.d |= 0x8000
            ebx_11 = esi_14
            int32_t var_c_37 = 0x12
            data_315fbbc = sub_4f5220(ebx_11, "img_militaryBonusAlien")
            data_315fbc0 = sub_4f5220(ebx_11, "img_militaryBonusGenes")
            data_315fbc4 = sub_4f5220(ebx_11, "img_militaryBonusRare")
            data_315fbc8 = sub_4f5220(ebx_11, "img_militaryBonusNovelty")
            int32_t eax_147
            eax_147, edx_31 = sub_4f5220(ebx_11, "img_militaryBonusRebel")
            data_315fbcc = eax_147
            int32_t var_c_38 = 0xffffffff
        
        for (int32_t i = 0; i s< 0x14; i += 4)
            if (*(&var_30 + i) != 0)
                if (*(edi_27 + 0x2c0b0) == 0)
                    int32_t var_70_20 = 0
                    edx_31 = sub_4fa4e0(eax_14, *(i + &data_315fbbc), edx_31)
                
                var_50 = 1
        
        void* edx_32 = var_38_1
        
        if (*(edx_32 + 0x62) != 0)
            if ((data_3165d78.d & 0x10000) == 0)
                data_3165d78.d |= 0x10000
                int32_t var_c_39 = 0x13
                int32_t eax_149
                eax_149, edx_32 = sub_4f5220(ebx_11, "img_militaryBonusTemp")
                data_3165d38 = eax_149
                int32_t var_c_40 = 0xffffffff
            
            int32_t var_70_21 = 0
            edx_32 = sub_4fa4e0(eax_14, data_3165d38, edx_32.b)
            var_50 = 1
        
        if ((data_3165d78.d & 0x20000) == 0)
            data_3165d78.d |= 0x20000
            int32_t var_c_41 = 0x14
            int32_t eax_152
            eax_152, edx_32 = sub_4f5220(ebx_11, "txt_military")
            data_3165d34 = eax_152
            int32_t var_c_42 = 0xffffffff
        
        int32_t var_c_43 = 0x15
        char* eax_155 = *sub_46e4d0(var_40, edx_32, &var_40)
        char* edi_28 = &data_83f3d3
        
        if (eax_155 != 0)
            edi_28 = eax_155
        
        int32_t ebx_12 = data_3165d34
        int32_t eax_156
        int32_t ecx_30
        eax_156, ecx_30 = sub_4fc3d0(&data_be1cb8, eax_14)
        
        if (ebx_12 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_33 = *(eax_156 + (ebx_12 << 2) + 0x30)
        int128_t* eax_158
        
        if (edx_33 != 0)
            eax_158 = sub_4fc1e0(ecx_30, edx_33)
        else
            eax_158 = sub_4fc0d0()
            *(eax_158 + 4) = &data_83f3d3
            *(eax_156 + (ebx_12 << 2) + 0x30) = *(eax_158 + 0x1bc)
        
        *(eax_158 + 0x64) = *eax_158 + 1
        sub_4c4590(edi_28)
        *(eax_158 + 0x151) = 1
        int32_t var_c_44 = 0xffffffff
        char* eax_160 = var_40
        
        if (eax_160 != 0 && *eax_160 != 0)
            void* eax_162 = sub_4c4060(&var_40)
            int32_t temp5_1 = *(eax_162 + 4)
            *(eax_162 + 4) -= 1
            
            if (temp5_1 == 1)
                int32_t esi_59 = *(eax_162 + 0xc) + 0x10
                sub_4f4430(eax_162, sub_4f4380(esi_59), esi_59)
        
        if ((data_3165d78.d & 0x40000) == 0)
            data_3165d78.d |= 0x40000
            int32_t var_c_45 = 0x16
            data_3165d30 = sub_4f5220(esi_1, "btnMil")
            int32_t var_c_46 = 0xffffffff
        
        int32_t ebx_15 = data_3165d30
        int32_t eax_167
        int32_t ecx_32
        eax_167, ecx_32 = sub_4fc3d0(&data_be1cb8, eax_14)
        
        if (ebx_15 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_36 = *(eax_167 + (ebx_15 << 2) + 0x30)
        int128_t* eax_169
        
        if (edx_36 != 0)
            eax_169 = sub_4fc1e0(ecx_32, edx_36)
        else
            eax_169, edx_36 = sub_4fc0d0()
            *(eax_169 + 4) = &data_83f3d3
            *(eax_167 + (ebx_15 << 2) + 0x30) = *(eax_169 + 0x1bc)
        
        edx_36.b = var_50 == 0
        *(eax_169 + 0x22) = edx_36.b
        
        if ((data_3165d78.d & 0x80000) == 0)
            data_3165d78.d |= 0x80000
            int32_t var_c_47 = 0x17
            int32_t eax_171
            eax_171, edx_36 = sub_4f5220(esi_1, "imgPrestigeAction")
            data_3165d2c = eax_171
            int32_t var_c_48 = 0xffffffff
        
        edx_36.b = *(eax_15 + 0x45a) != 3
        uint32_t var_70_23 = zx.d(edx_36.b)
        sub_4fa4e0(eax_14, data_3165d2c, edx_36.b)
        
        if ((data_3165d78.d & 0x100000) == 0)
            data_3165d78.d |= 0x100000
            int32_t var_c_49 = 0x18
            data_3165d28 = sub_4f5220(data_307c604, "imgPrestige")
            int32_t var_c_50 = 0xffffffff
        
        int32_t ebx_16 = data_3165d2c
        void* eax_175
        int32_t ecx_36
        eax_175, ecx_36 = sub_4fc3d0(&data_be1cb8, eax_14)
        
        if (ebx_16 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_38 = *(eax_175 + (ebx_16 << 2) + 0x30)
        int128_t* eax_177
        
        if (edx_38 != 0)
            eax_177 = sub_4fc1e0(ecx_36, edx_38)
        else
            eax_177, edx_38 = sub_4fc0d0()
            *(eax_177 + 4) = &data_83f3d3
            *(eax_175 + (ebx_16 << 2) + 0x30) = *(eax_177 + 0x1bc)
        
        char* esi_64 = *(eax_175 + 4)
        
        if (*(esi_64 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_64 == 0)
            sub_520800(eax_177, edx_38.b, esi_64, 0)
            
            if (*esi_64 == 0)
                sub_509540(esi_64)
        
        int32_t esi_65 = *(sub_4f7720(&data_84074c, ebx_16 * 0x118 + ***esi_64, eax_177) + 0x434)
        char eax_183 = sub_41f1f0(eax_12)
        float edx_41 = data_3165d28
        uint32_t var_70_24 = zx.d(eax_183)
        result = sub_4fa4e0(esi_65, edx_41, edx_41.b)
    else
        result = sub_50c830(eax_6, arg1, sub_510b30(ecx, arg1))
        *(result + 0x64) = *(result + 0x5c) + 1
        *(result + 0x68) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_5c)
    return result
}

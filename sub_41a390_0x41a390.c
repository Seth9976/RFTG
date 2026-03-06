// 函数名称: sub_41a390
// 虚拟地址: 0x41a390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_41a390()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693ea7
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_58 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    void* eax_4 = *(data_27e7a40 + 0x548)
    int32_t* esi = (&data_8c77f8)[*(data_27e7a54 + 0x204) * 6] + *(eax_4 + 0x438a8) * 0x14
    int32_t ecx_4 = *esi
    int32_t var_18 = *(eax_4 + (ecx_4 << 2) + 0x14)
    
    if (*(data_27e7fd0 + 0x27) != 0)
        int32_t eax_6
        eax_6, ecx_4 = sub_41a210(ecx_4)
        var_18 = eax_6
    
    char arg_4
    int80_t result
    
    if (arg_4 == 0)
        int32_t var_5c_26 = ecx_4
        result = sub_4fa8a0(var_18, 1, fconvert.s(fconvert.t(-1f)))
    else
        char* edx_4 = esi[1]
        char* var_38
        char* var_34
        char* var_28
        char* var_20
        int32_t* eax_11
        int32_t ebx_1
        
        if (edx_4 == 0)
            sub_4c42b0(&arg_4, &data_83f3d3)
            eax_11 = &arg_4
            int32_t var_8_5 = 4
            ebx_1 = 0x10
        else
            char** eax_7
            int32_t edx_5
            eax_7, edx_5 = sub_419a50(&var_38, edx_4)
            int32_t var_8_1 = 0
            char* eax_8 = *eax_7
            int32_t var_14_1 = 1
            
            if (eax_8 == 0)
                eax_8 = &data_83f3d3
            
            char* eax_9 = sub_4fd8f0(eax_8, edx_5, eax_8, nullptr)
            
            if (eax_9 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4c42b0(&var_28, eax_9)
            int32_t var_8_2 = 1
            int32_t var_14_2 = 3
            sub_4c42b0(&var_20, "{tutorial_title}")
            int32_t var_8_3 = 2
            int32_t var_14_3 = 7
            eax_11 = sub_4c48a0(&var_20, &var_34, &var_28)
            int32_t var_8_4 = 3
            ebx_1 = 0xf
        
        char* eax_12 = *eax_11
        int32_t var_14_4 = ebx_1
        char* var_24 = eax_12
        
        if (eax_12 != 0 && *eax_12 != 0)
            void* eax_14 = sub_4c4060(&var_24)
            *(eax_14 + 4) += 1
        
        int32_t var_8_6 = 6
        
        if ((ebx_1.b & 0x10) != 0)
            char* eax_15 = arg_4.d
            ebx_1 &= 0xffffffef
            int32_t var_14_5 = ebx_1
            
            if (eax_15 != 0 && *eax_15 != 0)
                void* eax_17 = sub_4c4060(&arg_4)
                int32_t temp0_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_5 = *(eax_17 + 0xc) + 0x10
                    sub_4f4430(eax_17, sub_4f4380(esi_5), esi_5)
        
        var_8_6.b = 7
        
        if ((ebx_1.b & 8) != 0)
            char* eax_20 = var_34
            ebx_1 &= 0xfffffff7
            int32_t var_14_6 = ebx_1
            
            if (eax_20 != 0 && *eax_20 != 0)
                void* eax_22 = sub_4c4060(&var_34)
                int32_t temp1_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_7 = *(eax_22 + 0xc) + 0x10
                    sub_4f4430(eax_22, sub_4f4380(esi_7), esi_7)
        
        var_8_6.b = 8
        
        if ((ebx_1.b & 4) != 0)
            char* eax_25 = var_20
            ebx_1 &= 0xfffffffb
            int32_t var_14_7 = ebx_1
            
            if (eax_25 != 0 && *eax_25 != 0)
                void* eax_27 = sub_4c4060(&var_20)
                int32_t temp2_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_9 = *(eax_27 + 0xc) + 0x10
                    sub_4f4430(eax_27, sub_4f4380(esi_9), esi_9)
        
        var_8_6.b = 9
        
        if ((ebx_1.b & 2) != 0)
            char* eax_30 = var_28
            ebx_1 &= 0xfffffffd
            int32_t var_14_8 = ebx_1
            
            if (eax_30 != 0 && *eax_30 != 0)
                void* eax_32 = sub_4c4060(&var_28)
                int32_t temp3_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_11 = *(eax_32 + 0xc) + 0x10
                    sub_4f4430(eax_32, sub_4f4380(esi_11), esi_11)
        
        var_8_6.b = 0xa
        
        if ((ebx_1.b & 1) != 0)
            char* eax_35 = var_38
            ebx_1 &= 0xfffffffe
            int32_t var_14_9 = ebx_1
            
            if (eax_35 != 0 && *eax_35 != 0)
                void* eax_37 = sub_4c4060(&var_38)
                int32_t temp4_1 = *(eax_37 + 4)
                *(eax_37 + 4) -= 1
                
                if (temp4_1 == 1)
                    int32_t esi_13 = *(eax_37 + 0xc) + 0x10
                    sub_4f4430(eax_37, sub_4f4380(esi_13), esi_13)
        
        char* edx_6 = esi[2]
        char* var_40
        char* var_3c
        char* var_2c
        int32_t* eax_45
        int32_t ebx_5
        
        if (edx_6 == 0)
            sub_4c42b0(&arg_4, &data_83f3d3)
            eax_45 = &arg_4
            int32_t var_8_10 = 0xf
            ebx_5 = ebx_1 | 0x200
        else
            char** eax_41
            int32_t edx_7
            eax_41, edx_7 = sub_419a50(&var_40, edx_6)
            var_8_6.b = 0xb
            char* eax_42 = *eax_41
            int32_t ebx_2 = ebx_1 | 0x20
            int32_t var_14_10 = ebx_2
            
            if (eax_42 == 0)
                eax_42 = &data_83f3d3
            
            char* eax_43 = sub_4fd8f0(eax_42, edx_7, eax_42, nullptr)
            
            if (eax_43 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4c42b0(&var_2c, eax_43)
            int32_t var_8_7 = 0xc
            int32_t ebx_3 = ebx_2 | 0x40
            int32_t var_14_11 = ebx_3
            sub_4c42b0(&var_28, "{tutorial}")
            int32_t var_8_8 = 0xd
            int32_t ebx_4 = ebx_3 | 0x80
            int32_t var_14_12 = ebx_4
            eax_45 = sub_4c48a0(&var_28, &var_3c, &var_2c)
            int32_t var_8_9 = 0xe
            ebx_5 = ebx_4 | 0x100
        
        char* eax_46 = *eax_45
        int32_t var_14_13 = ebx_5
        var_20 = eax_46
        
        if (eax_46 != 0 && *eax_46 != 0)
            void* eax_48 = sub_4c4060(&var_20)
            *(eax_48 + 4) += 1
        
        int32_t var_8_11 = 0x11
        
        if ((ebx_5 & 0x200) != 0)
            char* eax_49 = arg_4.d
            ebx_5 &= 0xfffffdff
            int32_t var_14_14 = ebx_5
            
            if (eax_49 != 0 && *eax_49 != 0)
                void* eax_51 = sub_4c4060(&arg_4)
                int32_t temp5_1 = *(eax_51 + 4)
                *(eax_51 + 4) -= 1
                
                if (temp5_1 == 1)
                    int32_t esi_18 = *(eax_51 + 0xc) + 0x10
                    sub_4f4430(eax_51, sub_4f4380(esi_18), esi_18)
        
        var_8_11.b = 0x12
        
        if ((ebx_5 & 0x100) != 0)
            char* eax_54 = var_3c
            ebx_5 &= 0xfffffeff
            int32_t var_14_15 = ebx_5
            
            if (eax_54 != 0 && *eax_54 != 0)
                void* eax_56 = sub_4c4060(&var_3c)
                int32_t temp6_1 = *(eax_56 + 4)
                *(eax_56 + 4) -= 1
                
                if (temp6_1 == 1)
                    int32_t esi_20 = *(eax_56 + 0xc) + 0x10
                    sub_4f4430(eax_56, sub_4f4380(esi_20), esi_20)
        
        var_8_11.b = 0x13
        
        if (ebx_5.b s< 0)
            char* eax_59 = var_28
            ebx_5 &= 0xffffff7f
            int32_t var_14_16 = ebx_5
            
            if (eax_59 != 0 && *eax_59 != 0)
                void* eax_61 = sub_4c4060(&var_28)
                int32_t temp7_1 = *(eax_61 + 4)
                *(eax_61 + 4) -= 1
                
                if (temp7_1 == 1)
                    int32_t esi_22 = *(eax_61 + 0xc) + 0x10
                    sub_4f4430(eax_61, sub_4f4380(esi_22), esi_22)
        
        var_8_11.b = 0x14
        
        if ((ebx_5.b & 0x40) != 0)
            char* eax_64 = var_2c
            ebx_5 &= 0xffffffbf
            int32_t var_14_17 = ebx_5
            
            if (eax_64 != 0 && *eax_64 != 0)
                void* eax_66 = sub_4c4060(&var_2c)
                int32_t temp8_1 = *(eax_66 + 4)
                *(eax_66 + 4) -= 1
                
                if (temp8_1 == 1)
                    int32_t esi_24 = *(eax_66 + 0xc) + 0x10
                    sub_4f4430(eax_66, sub_4f4380(esi_24), esi_24)
        
        var_8_11.b = 0x15
        
        if ((ebx_5.b & 0x20) != 0)
            char* eax_69 = var_40
            ebx_5 &= 0xffffffdf
            int32_t var_14_18 = ebx_5
            
            if (eax_69 != 0 && *eax_69 != 0)
                void* eax_71 = sub_4c4060(&var_40)
                int32_t temp9_1 = *(eax_71 + 4)
                *(eax_71 + 4) -= 1
                
                if (temp9_1 == 1)
                    int32_t esi_26 = *(eax_71 + 0xc) + 0x10
                    sub_4f4430(eax_71, sub_4f4380(esi_26), esi_26)
        
        char* edx_8 = esi[3]
        char* var_48
        char* var_44
        char* var_30
        char** eax_78
        int32_t ebx_9
        
        if (edx_8 == 0)
            sub_4c42b0(&var_2c, &data_83f3d3)
            eax_78 = &var_2c
            int32_t var_8_15 = 0x1a
            ebx_9 = ebx_5 | 0x4000
        else
            char** eax_74
            int32_t edx_9
            eax_74, edx_9 = sub_419a50(&var_48, edx_8)
            var_8_11.b = 0x16
            char* eax_75 = *eax_74
            int32_t ebx_6 = ebx_5 | 0x400
            int32_t var_14_19 = ebx_6
            
            if (eax_75 == 0)
                eax_75 = &data_83f3d3
            
            char* eax_76 = sub_4fd8f0(eax_75, edx_9, eax_75, esi[4])
            
            if (eax_76 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4c42b0(&var_30, eax_76)
            int32_t var_8_12 = 0x17
            int32_t ebx_7 = ebx_6 | 0x800
            int32_t var_14_20 = ebx_7
            sub_4c42b0(&var_28, "{tutorial_action}")
            int32_t var_8_13 = 0x18
            int32_t ebx_8 = ebx_7 | 0x1000
            int32_t var_14_21 = ebx_8
            eax_78 = sub_4c48a0(&var_28, &var_44, &var_30)
            int32_t var_8_14 = 0x19
            ebx_9 = ebx_8 | 0x2000
        
        char* eax_79 = *eax_78
        int32_t var_14_22 = ebx_9
        arg_4.d = eax_79
        
        if (eax_79 != 0 && *eax_79 != 0)
            void* eax_81 = sub_4c4060(&arg_4)
            *(eax_81 + 4) += 1
        
        int32_t var_8_16 = 0x1c
        
        if ((ebx_9 & 0x4000) != 0)
            char* eax_82 = var_2c
            ebx_9 &= 0xffffbfff
            int32_t var_14_23 = ebx_9
            
            if (eax_82 != 0 && *eax_82 != 0)
                void* eax_84 = sub_4c4060(&var_2c)
                int32_t temp10_1 = *(eax_84 + 4)
                *(eax_84 + 4) -= 1
                
                if (temp10_1 == 1)
                    int32_t esi_32 = *(eax_84 + 0xc) + 0x10
                    sub_4f4430(eax_84, sub_4f4380(esi_32), esi_32)
        
        var_8_16.b = 0x1d
        
        if ((ebx_9 & 0x2000) != 0)
            char* eax_87 = var_44
            ebx_9 &= 0xffffdfff
            int32_t var_14_24 = ebx_9
            
            if (eax_87 != 0 && *eax_87 != 0)
                void* eax_89 = sub_4c4060(&var_44)
                int32_t temp11_1 = *(eax_89 + 4)
                *(eax_89 + 4) -= 1
                
                if (temp11_1 == 1)
                    int32_t esi_34 = *(eax_89 + 0xc) + 0x10
                    sub_4f4430(eax_89, sub_4f4380(esi_34), esi_34)
        
        var_8_16.b = 0x1e
        
        if ((ebx_9 & 0x1000) != 0)
            char* eax_92 = var_28
            ebx_9 &= 0xffffefff
            int32_t var_14_25 = ebx_9
            
            if (eax_92 != 0 && *eax_92 != 0)
                void* eax_94 = sub_4c4060(&var_28)
                int32_t temp12_1 = *(eax_94 + 4)
                *(eax_94 + 4) -= 1
                
                if (temp12_1 == 1)
                    int32_t esi_36 = *(eax_94 + 0xc) + 0x10
                    sub_4f4430(eax_94, sub_4f4380(esi_36), esi_36)
        
        var_8_16.b = 0x1f
        
        if ((ebx_9 & 0x800) != 0)
            char* eax_97 = var_30
            ebx_9 &= 0xfffff7ff
            int32_t var_14_26 = ebx_9
            
            if (eax_97 != 0 && *eax_97 != 0)
                void* eax_99 = sub_4c4060(&var_30)
                int32_t temp13_1 = *(eax_99 + 4)
                *(eax_99 + 4) -= 1
                
                if (temp13_1 == 1)
                    int32_t esi_38 = *(eax_99 + 0xc) + 0x10
                    sub_4f4430(eax_99, sub_4f4380(esi_38), esi_38)
        
        var_8_16.b = 0x20
        
        if ((ebx_9 & 0x400) != 0)
            char* eax_102 = var_48
            
            if (eax_102 != 0 && *eax_102 != 0)
                void* eax_104 = sub_4c4060(&var_48)
                int32_t temp14_1 = *(eax_104 + 4)
                *(eax_104 + 4) -= 1
                
                if (temp14_1 == 1)
                    int32_t esi_40 = *(eax_104 + 0xc) + 0x10
                    sub_4f4430(eax_104, sub_4f4380(esi_40), esi_40)
        
        char* eax_107 = var_24
        var_30 = &data_83f3d3
        
        if (eax_107 != 0)
            var_30 = eax_107
        
        int128_t* eax_111 =
            sub_4f6e90(*(*esi * 0x18 + &data_8c6d10), sub_4fc3d0(&data_be1cb8, var_18), &data_83f3d3)
        char* eax_112 = var_30
        *(eax_111 + 0x64) = *eax_111 + 1
        sub_4c4590(eax_112)
        char* eax_113 = var_20
        *(eax_111 + 0x151) = 0
        var_30 = &data_83f3d3
        
        if (eax_113 != 0)
            var_30 = eax_113
        
        int128_t* eax_117 =
            sub_4f6e90(*(*esi * 0x18 + &data_8c6d14), sub_4fc3d0(&data_be1cb8, var_18), &data_83f3d3)
        char* eax_118 = var_30
        *(eax_117 + 0x64) = *eax_117 + 1
        sub_4c4590(eax_118)
        char* eax_119 = arg_4.d
        *(eax_117 + 0x151) = 0
        var_30 = &data_83f3d3
        
        if (eax_119 != 0)
            var_30 = eax_119
        
        int128_t* eax_123 =
            sub_4f6e90(*(*esi * 0x18 + &data_8c6d18), sub_4fc3d0(&data_be1cb8, var_18), &data_83f3d3)
        char* eax_124 = var_30
        *(eax_123 + 0x64) = *eax_123 + 1
        sub_4c4590(eax_124)
        *(eax_123 + 0x151) = 0
        void* eax_125
        int32_t ecx_32
        eax_125, ecx_32 = sub_4fc3d0(&data_be1cb8, var_18)
        int32_t var_5c_21 = ecx_32
        *(eax_125 + 8) = 0
        result = sub_4fa8a0(var_18, 0, fconvert.s(float.t(0)))
        *(sub_4fc3d0(&data_be1cb8, var_18) + 8) = 0
        var_8_16.b = 0x15
        char* eax_127 = arg_4.d
        
        if (eax_127 != 0 && *eax_127 != 0)
            void* eax_129 = sub_4c4060(&arg_4)
            int32_t temp15_1 = *(eax_129 + 4)
            *(eax_129 + 4) -= 1
            
            if (temp15_1 == 1)
                int32_t esi_52 = *(eax_129 + 0xc) + 0x10
                sub_4f4430(eax_129, sub_4f4380(esi_52), esi_52)
        
        var_8_16.b = 0xa
        char* eax_132 = var_20
        
        if (eax_132 != 0 && *eax_132 != 0)
            void* eax_134 = sub_4c4060(&var_20)
            int32_t temp16_1 = *(eax_134 + 4)
            *(eax_134 + 4) -= 1
            
            if (temp16_1 == 1)
                int32_t esi_54 = *(eax_134 + 0xc) + 0x10
                sub_4f4430(eax_134, sub_4f4380(esi_54), esi_54)
        
        int32_t var_8_17 = 0xffffffff
        char* eax_137 = var_24
        
        if (eax_137 != 0 && *eax_137 != 0)
            void* eax_139 = sub_4c4060(&var_24)
            int32_t temp17_1 = *(eax_139 + 4)
            *(eax_139 + 4) -= 1
            
            if (temp17_1 == 1)
                int32_t esi_56 = *(eax_139 + 0xc) + 0x10
                sub_4f4430(eax_139, sub_4f4380(esi_56), esi_56)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

// 函数名称: sub_41bb40
// 虚拟地址: 0x41bb40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_41bb40()
{
    // 第一条实际指令: void* i_9
    void* i_9
    void* i_4 = i_9
    __chkstk(0x13a4c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t i_5
    void* eax_2 = sub_419400(&i_5)
    
    if (eax_2.b == 0)
        int32_t* esi_2 = *(data_27e7a40 + 0x548) + 0x43948
        eax_2 = sub_418a10()
        void* ecx_4 = *(data_27e7a40 + 0x74) * 0xb4 + eax_2 + 0x20
        
        if (*(eax_2 + 0x1ec4) == 0)
            if (*(eax_2 + 0x1ec3) != 0)
                int32_t i_6 = sx.d(*(eax_2 + 0x458))
                int32_t ebx
                ebx.b = *(ecx_4 + 0x8c) != 0
                int32_t edx_2 = 0
                char arg_12 = ebx.b
                
                if (i_6 s> 0)
                    void* eax_3 = eax_2 + 0xac
                    int32_t i
                    
                    do
                        if (*eax_3 != 0)
                            edx_2 += 1
                        
                        eax_3 += 0xb4
                        i = i_6
                        i_6 -= 1
                    while (i != 1)
                
                int32_t ecx_5 = esi_2[2]
                void* edi_1 = data_27e7a5c
                bool arg_13 = edx_2 s>= 2
                int32_t eax_4
                eax_4.b = ebx.b == 0
                esi_2[3] = eax_4 + 1
                
                if (ecx_5 != 0xffffffff)
                    int32_t edx_3 = esi_2[1]
                    int32_t eax_6 = *esi_2
                    void* eax_7 = sub_473150(eax_6, edx_3, 2, edi_1, eax_6, edx_3, ecx_5, eax_4 + 1)
                    *(eax_7 + 4) += 1
                    *(eax_7 + 0xc) += 1
                    
                    if (*(eax_7 + 8) s< 1)
                        *(eax_7 + 8) = 1
                        *(eax_7 + 0x10) = esi_2[5]
                
                if (arg_12 != 0)
                    int32_t eax_8 = esi_2[2]
                    
                    if (eax_8 != 0xffffffff)
                        int32_t edx_4 = esi_2[3]
                        int32_t eax_9 = esi_2[1]
                        void* eax_10 = sub_473150(eax_9, edx_4, 3, edi_1, *esi_2, eax_9, eax_8, edx_4)
                        *(eax_10 + 4) += 1
                        *(eax_10 + 0xc) += 1
                        
                        if (*(eax_10 + 8) s< 1)
                            *(eax_10 + 8) = 1
                            *(eax_10 + 0x10) = esi_2[5]
                
                if (arg_13 != 0)
                    int32_t eax_11 = esi_2[2]
                    
                    if (eax_11 != 0xffffffff)
                        int32_t edx_6 = esi_2[1]
                        int32_t eax_12 = *esi_2
                        void* eax_13 =
                            sub_473150(eax_12, edx_6, 4, edi_1, eax_12, edx_6, eax_11, esi_2[3])
                        *(eax_13 + 4) += 1
                        *(eax_13 + 0xc) += 1
                        
                        if (*(eax_13 + 8) s< 1)
                            *(eax_13 + 8) = 1
                            *(eax_13 + 0x10) = esi_2[5]
                
                int32_t ebx_1 = sx.d(*(ecx_4 + 0x8a))
                int32_t eax_14 = esi_2[2]
                
                if (eax_14 != 0xffffffff && ebx_1 != 0)
                    int32_t edx_8 = esi_2[1]
                    int32_t eax_15 = *esi_2
                    void* eax_16 =
                        sub_473150(eax_15, edx_8, 0x65, edi_1, eax_15, edx_8, eax_14, esi_2[3])
                    *(eax_16 + 4) += 1
                    *(eax_16 + 0xc) += ebx_1
                    
                    if (ebx_1 s> *(eax_16 + 8))
                        *(eax_16 + 8) = ebx_1
                        *(eax_16 + 0x10) = esi_2[5]
                
                int32_t eax_17 = esi_2[2]
                
                if (eax_17 != 0xffffffff && ebx_1 != 0)
                    int32_t edx_9 = esi_2[3]
                    int32_t eax_18 = esi_2[1]
                    void* eax_19 = sub_473150(eax_18, edx_9, 0x66, edi_1, *esi_2, eax_18, eax_17, edx_9)
                    int32_t ecx_13 = *(eax_19 + 8)
                    *(eax_19 + 4) += 1
                    *(eax_19 + 0xc) += ebx_1
                    
                    if (ecx_13 == 0 || ebx_1 s< ecx_13)
                        *(eax_19 + 8) = ebx_1
                        *(eax_19 + 0x10) = esi_2[5]
                
                int32_t i_7 = sx.d(*(ecx_4 + 0x86))
                int32_t eax_21 = esi_2[2]
                i_5 = i_7
                
                if (eax_21 != 0xffffffff && i_7 != 0)
                    int32_t edx_11 = esi_2[1]
                    int32_t eax_22 = *esi_2
                    void* eax_23 =
                        sub_473150(eax_22, edx_11, 0x67, edi_1, eax_22, edx_11, eax_21, esi_2[3])
                    int32_t i_8 = i_5
                    *(eax_23 + 4) += 1
                    *(eax_23 + 0xc) += i_8
                    
                    if (i_8 s> *(eax_23 + 8))
                        *(eax_23 + 8) = i_8
                        *(eax_23 + 0x10) = esi_2[5]
                
                int32_t ecx_16 = sub_473230(esi_2, sub_41b950(ebx_1))
                int32_t arg_13a28
                __builtin_memset(&arg_13a28, 0, 0x18)
                sub_41b900(ecx_16, eax_2, &arg_13a28)
                void arg_13a24
                int32_t esi_4 = *(&arg_13a24 + (sx.d(*(eax_2 + 0x458)) << 2))
                int32_t eax_26 = esi_2[2]
                void* edi_3 = data_27e7a5c
                
                if (eax_26 != 0xffffffff && esi_4 != 0)
                    int32_t edx_14 = esi_2[1]
                    int32_t eax_27 = *esi_2
                    void* eax_28 =
                        sub_473150(eax_27, edx_14, 0x68, edi_3, eax_27, edx_14, eax_26, esi_2[3])
                    *(eax_28 + 4) += 1
                    *(eax_28 + 0xc) += esi_4
                    
                    if (esi_4 s> *(eax_28 + 8))
                        *(eax_28 + 8) = esi_4
                        *(eax_28 + 0x10) = esi_2[5]
                
                void arg_13a20
                int32_t esi_5 = *(&arg_13a20 + (sx.d(*(eax_2 + 0x458)) << 2))
                void* eax_30 = esi_2[2]
                
                if (eax_30 != 0xffffffff && esi_5 != 0)
                    int32_t edx_16 = esi_2[1]
                    int32_t eax_31 = *esi_2
                    eax_30 = sub_473150(eax_31, edx_16, 0x69, edi_3, eax_31, edx_16, eax_30, esi_2[3])
                    *(eax_30 + 4) += 1
                    *(eax_30 + 0xc) += esi_5
                    
                    if (esi_5 s> *(eax_30 + 8))
                        *(eax_30 + 8) = esi_5
                        *(eax_30 + 0x10) = esi_2[5]
                
                eax_30.b = *(eax_2 + 0x458)
                
                if (eax_30.b s>= 3)
                    void arg_13a1c
                    int32_t esi_6 = *(&arg_13a1c + (sx.d(eax_30.b) << 2))
                    eax_30 = esi_2[2]
                    
                    if (eax_30 != 0xffffffff && esi_6 != 0)
                        int32_t edx_18 = esi_2[1]
                        int32_t eax_33 = *esi_2
                        eax_30 =
                            sub_473150(eax_33, edx_18, 0x6a, edi_3, eax_33, edx_18, eax_30, esi_2[3])
                        *(eax_30 + 4) += 1
                        *(eax_30 + 0xc) += esi_6
                        
                        if (esi_6 s> *(eax_30 + 8))
                            *(eax_30 + 8) = esi_6
                            *(eax_30 + 0x10) = esi_2[5]
                
                eax_30.b = *(eax_2 + 0x458)
                
                if (eax_30.b s>= 4)
                    void arg_13a18
                    int32_t esi_7 = *(&arg_13a18 + (sx.d(eax_30.b) << 2))
                    int32_t eax_35 = esi_2[2]
                    
                    if (eax_35 != 0xffffffff && esi_7 != 0)
                        int32_t edx_20 = esi_2[1]
                        int32_t eax_36 = *esi_2
                        void* eax_37 =
                            sub_473150(eax_36, edx_20, 0x6b, edi_3, eax_36, edx_20, eax_35, esi_2[3])
                        *(eax_37 + 4) += 1
                        *(eax_37 + 0xc) += esi_7
                        
                        if (esi_7 s> *(eax_37 + 8))
                            *(eax_37 + 8) = esi_7
                            *(eax_37 + 0x10) = esi_2[5]
                
                int32_t eax_38 = sub_41b500(ecx_4, eax_2, 0x100)
                int32_t eax_39 = esi_2[2]
                
                if (eax_39 != 0xffffffff && eax_38 != 0)
                    int32_t edx_22 = esi_2[3]
                    int32_t eax_40 = esi_2[1]
                    void* eax_41 =
                        sub_473150(eax_40, edx_22, 0x44d, edi_3, *esi_2, eax_40, eax_39, edx_22)
                    *(eax_41 + 4) += 1
                    *(eax_41 + 0xc) += eax_38
                    
                    if (eax_38 s> *(eax_41 + 8))
                        *(eax_41 + 8) = eax_38
                        *(eax_41 + 0x10) = esi_2[5]
                
                int32_t eax_42 = sub_41b500(ecx_4, eax_2, 0x40)
                int32_t eax_43 = esi_2[2]
                
                if (eax_43 != 0xffffffff && eax_42 != 0)
                    int32_t edx_25 = esi_2[1]
                    int32_t eax_44 = *esi_2
                    void* eax_45 =
                        sub_473150(eax_44, edx_25, 0x44e, edi_3, eax_44, edx_25, eax_43, esi_2[3])
                    *(eax_45 + 4) += 1
                    *(eax_45 + 0xc) += eax_42
                    
                    if (eax_42 s> *(eax_45 + 8))
                        *(eax_45 + 8) = eax_42
                        *(eax_45 + 0x10) = esi_2[5]
                
                int32_t eax_46 = sub_41b500(ecx_4, eax_2, 0x80)
                int32_t eax_47 = esi_2[2]
                
                if (eax_47 != 0xffffffff && eax_46 != 0)
                    int32_t edx_27 = esi_2[3]
                    int32_t eax_48 = esi_2[1]
                    void* eax_49 =
                        sub_473150(eax_48, edx_27, 0x44f, edi_3, *esi_2, eax_48, eax_47, edx_27)
                    *(eax_49 + 4) += 1
                    *(eax_49 + 0xc) += eax_46
                    
                    if (eax_46 s> *(eax_49 + 8))
                        *(eax_49 + 8) = eax_46
                        *(eax_49 + 0x10) = esi_2[5]
                
                int32_t eax_50 = sub_41b500(ecx_4, eax_2, 0x200)
                int32_t eax_51 = esi_2[2]
                
                if (eax_51 != 0xffffffff && eax_50 != 0)
                    int32_t edx_30 = esi_2[1]
                    int32_t eax_52 = *esi_2
                    void* eax_53 =
                        sub_473150(eax_52, edx_30, 0x450, edi_3, eax_52, edx_30, eax_51, esi_2[3])
                    *(eax_53 + 4) += 1
                    *(eax_53 + 0xc) += eax_50
                    
                    if (eax_50 s> *(eax_53 + 8))
                        *(eax_53 + 8) = eax_50
                        *(eax_53 + 0x10) = esi_2[5]
                
                void* edx_31 = eax_2
                int32_t eax_54 = sub_41b500(ecx_4, edx_31, 0x400)
                int32_t eax_55 = esi_2[2]
                
                if (eax_55 != 0xffffffff && eax_54 != 0)
                    int32_t edx_32 = esi_2[3]
                    int32_t eax_56 = esi_2[1]
                    void* eax_57
                    eax_57, edx_31 =
                        sub_473150(eax_56, edx_32, 0x451, edi_3, *esi_2, eax_56, eax_55, edx_32)
                    *(eax_57 + 4) += 1
                    *(eax_57 + 0xc) += eax_54
                    
                    if (eax_54 s> *(eax_57 + 8))
                        *(eax_57 + 8) = eax_54
                        edx_31 = esi_2[5]
                        *(eax_57 + 0x10) = edx_31
                
                void* eax_58 = data_27e7a40
                int32_t eax_59 = sub_4b1530(eax_58, edx_31, eax_2, *(eax_58 + 0x74))
                
                if (eax_59 s> 0)
                    int32_t eax_60 = esi_2[2]
                    
                    if (eax_60 != 0xffffffff)
                        int32_t edx_33 = esi_2[3]
                        int32_t eax_61 = esi_2[1]
                        void* eax_62 =
                            sub_473150(eax_61, edx_33, 0x200, edi_3, *esi_2, eax_61, eax_60, edx_33)
                        *(eax_62 + 4) += 1
                        *(eax_62 + 0xc) += eax_59
                        
                        if (eax_59 s> *(eax_62 + 8))
                            *(eax_62 + 8) = eax_59
                            *(eax_62 + 0x10) = esi_2[5]
                else if (eax_59 s< 0)
                    sub_473230(esi_2, 0x201)
                
                int32_t* esi_15 = esi_2
                sub_473230(esi_15, 
                    sub_41b730(sx.d(*(*(eax_2 + sx.d(*(ecx_4 + 0x1e)) * 0x14 + 0x46c) + 4))))
                
                for (int32_t i_1 = sx.d(*(ecx_4 + 0x26)); i_1 != 0xffffffff; 
                        i_1 = sx.d(*(eax_2 + ((i_1 * 5 + 0x11d) << 2))))
                    void* eax_69 = *(eax_2 + i_1 * 0x14 + 0x46c)
                    
                    if (*(eax_69 + 6) == 2 && *(eax_69 + 7) == 6 && *(eax_69 + 4) != 0x86)
                        i_5 = sub_4b1ae0(eax_69, eax_2, *(data_27e7a40 + 0x74), i_1, 0)
                        sub_473230(esi_15, sub_41b540(sx.d(*(*(eax_2 + i_1 * 0x14 + 0x46c) + 4))))
                
                i_4 = nullptr
                void* i_2
                
                do
                    if (*(ecx_4 + i_4 + 0x47) != 0)
                        int32_t eax_75 = sub_41ba30(i_4)
                        int32_t eax_76 = esi_15[2]
                        
                        if (eax_76 != 0xffffffff && ebx_1 != 0)
                            int32_t edx_40 = esi_15[3]
                            int32_t eax_77 = esi_15[1]
                            void* eax_78 = sub_473150(eax_77, edx_40, eax_75, data_27e7a5c, *esi_15, 
                                eax_77, eax_76, edx_40)
                            *(eax_78 + 4) += 1
                            *(eax_78 + 0xc) += ebx_1
                            
                            if (eax_75 == 0x66)
                                int32_t edx_41 = *(eax_78 + 8)
                                
                                if (edx_41 == 0 || ebx_1 s< edx_41)
                                    *(eax_78 + 8) = ebx_1
                                    *(eax_78 + 0x10) = esi_2[5]
                                    esi_15 = esi_2
                                else
                                    esi_15 = esi_2
                            else if (ebx_1 s<= *(eax_78 + 8))
                                esi_15 = esi_2
                            else
                                *(eax_78 + 8) = ebx_1
                                *(eax_78 + 0x10) = esi_2[5]
                                esi_15 = esi_2
                    
                    i_2 = i_4 + 1
                    i_4 = i_2
                while (i_2 s< 0x14)
                sub_4579d0(*(data_27e7a40 + 0x74))
                void* edi_5 = data_27e7a40
                
                if (*(edi_5 + 0x2c4960) != 4)
                    sub_408f10()
                    edi_5 = data_27e7a40
                
                eax_2 = *(edi_5 + 0x2c4960)
                
                if (eax_2 == 1)
                    void* eax_81 = sub_4082e0(0x27c0610, esi_15[5])
                    sub_5a6aba(eax_1 ^ &var_8)
                    return eax_81
                
                if (eax_2 == 2 || eax_2 == 5)
                    struct _EXCEPTION_REGISTRATION_RECORD* arg_14
                    sub_5abfc0(&arg_14, 0, 0x13a0c)
                    void* eax_83 = sub_404690(edi_5 + 0x2c495c)
                    void arg_178
                    sub_5ab990(&arg_178, sub_404620(data_27e7a40 + 0x2c495c), 0x138a8)
                    struct _EXCEPTION_REGISTRATION_RECORD* esi_16 = esi_15[5]
                    arg_14 = esi_16
                    int32_t arg_d8 = *(eax_83 + 0x140)
                    int32_t arg_c = esi_16
                    int32_t arg_dc = *(eax_83 + 0x1dc)
                    void arg_e0
                    __builtin_memcpy(&arg_e0, eax_83 + 0x144, 0x90)
                    bool cond:3 = *(eax_83 + 0x140) s<= 0
                    i_5 = 0
                    
                    if (not(cond:3))
                        void arg_3c
                        void* edx_47 = &arg_3c
                        void* esi_18 = eax_83 + 8
                        int32_t i_3
                        
                        do
                            *(edx_47 - 4) = *(esi_18 + 0x24)
                            *(edx_47 + 8) = *esi_18
                            void* eax_87 = data_27e7a40
                            *(edx_47 + 4) = *(esi_18 - 4)
                            *edx_47 = 0
                            
                            if (*esi_18 == *(eax_87 + 0x74))
                                *edx_47 = 4
                            
                            void* eax_88 = esi_18 + 4
                            void* edi_7 = edx_47 - eax_88
                            int32_t ecx_58
                            
                            do
                                ecx_58.b = *eax_88
                                *(eax_88 + edi_7 - 0x24) = ecx_58.b
                                eax_88 += 1
                            while (ecx_58.b != 0)
                            i_3 = i_5 + 1
                            esi_18 += 0x50
                            edx_47 += 0x30
                            i_5 = i_3
                        while (i_3 s< *(eax_83 + 0x140))
                    
                    void* eax_90 = sub_4082e0(&arg_14, arg_c)
                    sub_5a6aba(eax_1 ^ &var_8)
                    return eax_90
                
                if (eax_2 != 4)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x912, 
                        "AddGameCompleteStats")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            else if (esi_2.b == 0)
                int32_t eax_91 = esi_2[2]
                
                if (eax_91 != 0xffffffff)
                    int32_t edx_49 = esi_2[1]
                    int32_t eax_92 = *esi_2
                    void* eax_93 =
                        sub_473150(eax_92, edx_49, 5, data_27e7a5c, eax_92, edx_49, eax_91, esi_2[3])
                    *(eax_93 + 4) += 1
                    *(eax_93 + 0xc) += 1
                    
                    if (*(eax_93 + 8) s< 1)
                        *(eax_93 + 8) = 1
                        *(eax_93 + 0x10) = esi_2[5]
                
                eax_2 = sub_408f10()
    
    sub_5a6aba(eax_1 ^ &var_8)
    return eax_2
}

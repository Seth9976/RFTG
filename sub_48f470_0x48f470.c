// 函数名称: sub_48f470
// 虚拟地址: 0x48f470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_48f470(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ecx = arg3 * 0xb4
    int32_t i = sx.d(*(ecx + arg2 + 0x46))
    void* edi = ecx + arg2
    void* var_30 = arg2
    int32_t var_2c = 0
    int32_t var_44 = 0
    int32_t var_38 = 0
    int32_t var_40 = 0
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    
    for (; i != 0xffffffff; i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2))))
        void* ecx_3 = *(arg2 + i * 0x14 + 0x46c)
        
        if ((*(ecx_3 + 0x10) & &__dos_header) == 0)
            int32_t edx_2 = *((sx.d(*(ecx_3 + 4)) << 2) + &data_2689cf8) + arg4
            
            if (edx_2 s>= data_2691c48)
                sub_4c5870("n + card_input[c_ptr->d_ptr->index] < eval.num_inputs", &data_83f3d3, 
                    "..\code\rftg\ai.cpp", 0x84d, "eval_game_player")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (edx_2 s< 0)
                sub_4c5870("n + card_input[c_ptr->d_ptr->index] >= 0", &data_83f3d3, 
                    "..\code\rftg\ai.cpp", 0x84e, "eval_game_player")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            *(data_2691c6c + (edx_2 << 3)) = fconvert.d(float.t(1))
            int32_t j_2 = sx.d(*(ecx_3 + 0x15))
            
            if (j_2 s> 0)
                void* ecx_4 = ecx_3 + 0x20
                int32_t j_1 = j_2
                int32_t j
                
                do
                    if (*(ecx_4 - 8) == 1 && (*ecx_4 & 4) != 0)
                        var_2c = 1
                    
                    if (*(ecx_4 - 8) == 3 && *ecx_4 == 0x100 && *(ecx_4 + 4) == 0)
                        if (*(ecx_4 + 8) s<= 0)
                            var_38 = 1
                        else
                            var_44 = 1
                    
                    ecx_4 += 0x18
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            arg2 = var_30
    
    int32_t i_10 = sx.d(*(edi + 0x46))
    int32_t esi_1 = arg4 + data_2689cf0
    int32_t eax_7 = 0
    int32_t i_8 = i_10
    
    if (*(arg2 + 0x1ec3) == 0 && i_10 != 0xffffffff)
        int32_t i_1 = i_10
        
        do
            void* ebx
            ebx.b = *(var_30 + i_1 * 0x14 + 0x472)
            
            if (ebx.b != 0)
                int32_t ecx_6 = sx.d(ebx.b)
                eax_7 += ecx_6
                void* ecx_7 = *(var_30 + i_1 * 0x14 + 0x46c)
                bool cond:2_1 = (*(ecx_7 + 0x10) & &__dos_header) != 0
                int32_t var_20[0x2]
                var_20[sx.d(*(ecx_7 + 0xe))] = 1
                
                if (not(cond:2_1))
                    int32_t ecx_9 = *((sx.d(*(ecx_7 + 4)) << 2) + &data_2689940) + esi_1
                    
                    if (ecx_9 s>= data_2691c48)
                        sub_4c5870("n + good_input[c_ptr->d_ptr->index] < eval.num_inputs", 
                            &data_83f3d3, "..\code\rftg\ai.cpp", 0x892, "eval_game_player")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (ecx_9 s< 0)
                        sub_4c5870("n + good_input[c_ptr->d_ptr->index] >= 0", &data_83f3d3, 
                            "..\code\rftg\ai.cpp", 0x893, "eval_game_player")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    *(data_2691c6c + (ecx_9 << 3)) = fconvert.d(float.t(ecx_6))
                
                i_1 = i_8
            
            arg2 = var_30
            i_1 = sx.d(*(arg2 + ((i_1 * 5 + 0x11d) << 2)))
            i_8 = i_1
        while (i_1 != 0xffffffff)
    
    int32_t esi_2 = esi_1 + data_26031cc
    int32_t ecx_11
    ecx_11.b = eax_7 s> 0
    *(data_2691c6c + (esi_2 << 3)) = fconvert.d(float.t(ecx_11 * 2 - 1))
    int32_t ecx_14
    ecx_14.b = eax_7 s> 1
    *(data_2691c6c + (esi_2 << 3) + 8) = fconvert.d(float.t(ecx_14 * 2 - 1))
    int32_t ecx_17
    ecx_17.b = eax_7 s> 2
    *(data_2691c6c + (esi_2 << 3) + 0x10) = fconvert.d(float.t(ecx_17 * 2 - 1))
    int32_t ecx_20
    ecx_20.b = eax_7 s> 3
    *(data_2691c6c + (esi_2 << 3) + 0x18) = fconvert.d(float.t(ecx_20 * 2 - 1))
    int32_t ecx_23
    ecx_23.b = eax_7 s> 4
    *(data_2691c6c + (esi_2 << 3) + 0x20) = fconvert.d(float.t(ecx_23 * 2 - 1))
    int32_t ecx_26
    ecx_26.b = eax_7 s> 5
    *(data_2691c6c + (esi_2 << 3) + 0x28) = fconvert.d(float.t(ecx_26 * 2 - 1))
    arg5[4] = eax_7
    int32_t eax_8
    eax_8.b = var_18 != 0
    int32_t eax_10
    eax_10.b = var_14 != 0
    *(data_2691c6c + (esi_2 << 3) + 0x30) = fconvert.d(float.t(eax_8 * 2 - 1))
    int32_t eax_12
    eax_12.b = var_10 != 0
    *(data_2691c6c + (esi_2 << 3) + 0x38) = fconvert.d(float.t(eax_10 * 2 - 1))
    int32_t eax_14
    eax_14.b = var_c != 0
    *(data_2691c6c + (esi_2 << 3) + 0x40) = fconvert.d(float.t(eax_12 * 2 - 1))
    *(data_2691c6c + (esi_2 << 3) + 0x48) = fconvert.d(float.t(eax_14 * 2 - 1))
    int32_t esi_3 = esi_2 + 0xa
    
    if (arg3 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i_2 = sx.d(*(edi + 0x44))
    int32_t ecx_34 = 0
    
    if (i_2 s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i_2 != 0xffffffff)
        i_2 = sx.d(*(arg2 + ((i_2 * 5 + 0x11d) << 2)))
        ecx_34 += 1
    
    int32_t eax_23 = sx.d(*(edi + 0xae)) - sx.d(*(edi + 0xb0)) + ecx_34
    
    if (*(arg2 + 0x1ec3) != 0)
        eax_23 = 0
    
    for (int32_t i_3 = 0; i_3 s< 0xc; )
        int32_t edx_7
        edx_7.b = eax_23 s> i_3
        i_3 += 1
        esi_3 += 1
        *(data_2691c6c + (esi_3 << 3) - 8) = fconvert.d(float.t(edx_7 * 2 - 1))
    
    arg5[3] = eax_23
    int32_t eax_24 = 2
    void* var_28_1 = (esi_3 << 3) + 0x18
    
    do
        int32_t ebx_3
        ebx_3.b = sx.d(*(edi + 0xb2)) s> eax_24 - 2
        *(var_28_1 + data_2691c6c - 0x18) = fconvert.d(float.t(ebx_3 * 2 - 1))
        int32_t ebx_5
        ebx_5.b = sx.d(*(edi + 0xb2)) s> eax_24 - 1
        *(var_28_1 + data_2691c6c - 0x10) = fconvert.d(float.t(ebx_5 * 2 - 1))
        int32_t ebx_7
        ebx_7.b = sx.d(*(edi + 0xb2)) s> eax_24
        *(var_28_1 + data_2691c6c - 8) = fconvert.d(float.t(ebx_7 * 2 - 1))
        int32_t ebx_9
        ebx_9.b = sx.d(*(edi + 0xb2)) s> eax_24 + 1
        *(var_28_1 + data_2691c6c) = fconvert.d(float.t(ebx_9 * 2 - 1))
        int32_t ebx_11
        ebx_11.b = sx.d(*(edi + 0xb2)) s> eax_24 + 2
        void* ecx_44 = var_28_1 + 0x28
        eax_24 += 5
        var_28_1 = ecx_44
        *(ecx_44 + data_2691c6c - 0x20) = fconvert.d(float.t(ebx_11 * 2 - 1))
    while (eax_24 - 2 s< 0xf)
    
    int32_t i_4 = sx.d(*(edi + 0x46))
    int32_t eax_25 = 0
    int32_t i_9 = i_4
    int32_t edx_21 = 0
    
    if (i_4 != 0xffffffff)
        do
            void* ecx_48 = *(var_30 + i_4 * 0x14 + 0x46c)
            
            if (*(ecx_48 + 6) == 2)
                eax_25 += 1
                
                if (*(ecx_48 + 7) == 6)
                    edx_21 += 1
            
            i_4 = sx.d(*(var_30 + ((i_9 * 5 + 0x11d) << 2)))
            i_9 = i_4
        while (i_4 != 0xffffffff)
        
        var_40 = edx_21
    
    int32_t ecx_51
    ecx_51.b = eax_25 s> 0
    *(data_2691c6c + (esi_3 << 3) + 0x78) = fconvert.d(float.t(ecx_51 * 2 - 1))
    int32_t ecx_54
    ecx_54.b = eax_25 s> 1
    *(data_2691c6c + (esi_3 << 3) + 0x80) = fconvert.d(float.t(ecx_54 * 2 - 1))
    int32_t ecx_57
    ecx_57.b = eax_25 s> 2
    *(data_2691c6c + (esi_3 << 3) + 0x88) = fconvert.d(float.t(ecx_57 * 2 - 1))
    int32_t ecx_60
    ecx_60.b = eax_25 s> 3
    *(data_2691c6c + (esi_3 << 3) + 0x90) = fconvert.d(float.t(ecx_60 * 2 - 1))
    int32_t ecx_63
    ecx_63.b = eax_25 s> 4
    *(data_2691c6c + (esi_3 << 3) + 0x98) = fconvert.d(float.t(ecx_63 * 2 - 1))
    int32_t ecx_66
    ecx_66.b = eax_25 s> 5
    *(data_2691c6c + (esi_3 << 3) + 0xa0) = fconvert.d(float.t(ecx_66 * 2 - 1))
    int32_t ecx_69
    ecx_69.b = eax_25 s> 6
    *(data_2691c6c + (esi_3 << 3) + 0xa8) = fconvert.d(float.t(ecx_69 * 2 - 1))
    int32_t ecx_72
    ecx_72.b = eax_25 s> 7
    *(data_2691c6c + (esi_3 << 3) + 0xb0) = fconvert.d(float.t(ecx_72 * 2 - 1))
    int32_t ecx_75
    ecx_75.b = eax_25 s> 8
    *(data_2691c6c + (esi_3 << 3) + 0xb8) = fconvert.d(float.t(ecx_75 * 2 - 1))
    int32_t ecx_78
    ecx_78.b = eax_25 s> 9
    *(data_2691c6c + (esi_3 << 3) + 0xc0) = fconvert.d(float.t(ecx_78 * 2 - 1))
    int32_t i_5 = sx.d(*(edi + 0x46))
    int32_t eax_26 = 0
    
    if (i_5 != 0xffffffff)
        do
            if (*(*(var_30 + i_5 * 0x14 + 0x46c) + 6) == 1)
                eax_26 += 1
            
            i_5 = sx.d(*(var_30 + ((i_5 * 5 + 0x11d) << 2)))
        while (i_5 != 0xffffffff)
        
        edx_21 = var_40
    
    int32_t ecx_82
    ecx_82.b = eax_26 s> 0
    *(data_2691c6c + (esi_3 << 3) + 0xc8) = fconvert.d(float.t(ecx_82 * 2 - 1))
    int32_t ecx_85
    ecx_85.b = eax_26 s> 1
    *(data_2691c6c + (esi_3 << 3) + 0xd0) = fconvert.d(float.t(ecx_85 * 2 - 1))
    int32_t ecx_88
    ecx_88.b = eax_26 s> 2
    *(data_2691c6c + (esi_3 << 3) + 0xd8) = fconvert.d(float.t(ecx_88 * 2 - 1))
    int32_t ecx_91
    ecx_91.b = eax_26 s> 3
    *(data_2691c6c + (esi_3 << 3) + 0xe0) = fconvert.d(float.t(ecx_91 * 2 - 1))
    int32_t ecx_94
    ecx_94.b = eax_26 s> 4
    *(data_2691c6c + (esi_3 << 3) + 0xe8) = fconvert.d(float.t(ecx_94 * 2 - 1))
    int32_t ecx_97
    ecx_97.b = eax_26 s> 5
    *(data_2691c6c + (esi_3 << 3) + 0xf0) = fconvert.d(float.t(ecx_97 * 2 - 1))
    int32_t ecx_100
    ecx_100.b = eax_26 s> 6
    *(data_2691c6c + (esi_3 << 3) + 0xf8) = fconvert.d(float.t(ecx_100 * 2 - 1))
    int32_t ecx_103
    ecx_103.b = eax_26 s> 7
    *(data_2691c6c + (esi_3 << 3) + 0x100) = fconvert.d(float.t(ecx_103 * 2 - 1))
    int32_t ecx_106
    ecx_106.b = eax_26 s> 8
    *(data_2691c6c + (esi_3 << 3) + 0x108) = fconvert.d(float.t(ecx_106 * 2 - 1))
    int32_t ecx_109
    ecx_109.b = eax_26 s> 9
    *(data_2691c6c + (esi_3 << 3) + 0x110) = fconvert.d(float.t(ecx_109 * 2 - 1))
    int32_t eax_27
    eax_27.b = edx_21 s> 0
    *(data_2691c6c + (esi_3 << 3) + 0x118) = fconvert.d(float.t(eax_27 * 2 - 1))
    int32_t eax_30
    eax_30.b = edx_21 s> 1
    *(data_2691c6c + (esi_3 << 3) + 0x120) = fconvert.d(float.t(eax_30 * 2 - 1))
    int32_t eax_33
    eax_33.b = edx_21 s> 2
    *(data_2691c6c + (esi_3 << 3) + 0x128) = fconvert.d(float.t(eax_33 * 2 - 1))
    int32_t eax_36
    eax_36.b = edx_21 s> 3
    *(data_2691c6c + (esi_3 << 3) + 0x130) = fconvert.d(float.t(eax_36 * 2 - 1))
    int32_t edx_24 = data_2691c6c
    int32_t eax_39
    eax_39.b = edx_21 s> 4
    *(edx_24 + (esi_3 << 3) + 0x138) = fconvert.d(float.t(eax_39 * 2 - 1))
    arg5[2] = eax_25 + eax_26
    int32_t eax_42 = sub_4b1530(arg5, edx_24, var_30, arg3)
    int32_t edx_25
    edx_25.b = eax_42 s> 0
    int32_t edx_27
    edx_27.b = eax_42 s> 1
    *(data_2691c6c + (esi_3 << 3) + 0x140) = fconvert.d(float.t(edx_25 * 2 - 1))
    int32_t edx_29
    edx_29.b = eax_42 s> 2
    *(data_2691c6c + (esi_3 << 3) + 0x148) = fconvert.d(float.t(edx_27 * 2 - 1))
    int32_t edx_31
    edx_31.b = eax_42 s> 3
    *(data_2691c6c + (esi_3 << 3) + 0x150) = fconvert.d(float.t(edx_29 * 2 - 1))
    *(data_2691c6c + (esi_3 << 3) + 0x158) = fconvert.d(float.t(edx_31 * 2 - 1))
    int32_t edx_33
    edx_33.b = eax_42 s> 4
    int32_t edx_35
    edx_35.b = eax_42 s> 5
    *(data_2691c6c + (esi_3 << 3) + 0x160) = fconvert.d(float.t(edx_33 * 2 - 1))
    int32_t edx_37
    edx_37.b = eax_42 s> 6
    *(data_2691c6c + (esi_3 << 3) + 0x168) = fconvert.d(float.t(edx_35 * 2 - 1))
    int32_t edx_39
    edx_39.b = eax_42 s> 7
    *(data_2691c6c + (esi_3 << 3) + 0x170) = fconvert.d(float.t(edx_37 * 2 - 1))
    int32_t edx_41
    edx_41.b = eax_42 s> 8
    *(data_2691c6c + (esi_3 << 3) + 0x178) = fconvert.d(float.t(edx_39 * 2 - 1))
    int32_t edx_43
    edx_43.b = eax_42 s> 9
    *(data_2691c6c + (esi_3 << 3) + 0x180) = fconvert.d(float.t(edx_41 * 2 - 1))
    *(data_2691c6c + (esi_3 << 3) + 0x188) = fconvert.d(float.t(edx_43 * 2 - 1))
    int32_t var_38_1
    
    if (var_44 != 0)
        var_38_1 = 1
    
    if (var_44 == 0 || var_38 == 0)
        var_38_1 = 0xffffffff
    
    *(data_2691c6c + (esi_3 << 3) + 0x190) = fconvert.d(float.t(var_38_1))
    int32_t edx_45
    edx_45.b = *(edi + 0xb3) != 0
    *(data_2691c6c + (esi_3 << 3) + 0x198) = fconvert.d(float.t(edx_45 * 2 - 1))
    int32_t ecx_126
    ecx_126.b = *(edi + 0xb4) != 0
    int32_t eax_45
    eax_45.b = var_2c != 0
    *(data_2691c6c + (esi_3 << 3) + 0x1a0) = fconvert.d(float.t(ecx_126 * 2 - 1))
    *(data_2691c6c + (esi_3 << 3) + 0x1a8) = fconvert.d(float.t(eax_45 * 2 - 1))
    int32_t eax_47 = sub_48c070(eax_45 * 2 - 1, arg3, var_30, 1)
    int32_t edx_49
    edx_49.b = eax_47 s> 0
    int32_t edx_51
    edx_51.b = eax_47 s> 1
    *(data_2691c6c + (esi_3 << 3) + 0x1b0) = fconvert.d(float.t(edx_49 * 2 - 1))
    int32_t edx_53
    edx_53.b = eax_47 s> 2
    *(data_2691c6c + (esi_3 << 3) + 0x1b8) = fconvert.d(float.t(edx_51 * 2 - 1))
    int32_t edx_55
    edx_55.b = eax_47 s> 3
    *(data_2691c6c + (esi_3 << 3) + 0x1c0) = fconvert.d(float.t(edx_53 * 2 - 1))
    int32_t edx_57
    edx_57.b = eax_47 s> 4
    *(data_2691c6c + (esi_3 << 3) + 0x1c8) = fconvert.d(float.t(edx_55 * 2 - 1))
    int32_t edx_59
    edx_59.b = eax_47 s> 5
    *(data_2691c6c + (esi_3 << 3) + 0x1d0) = fconvert.d(float.t(edx_57 * 2 - 1))
    int32_t eax_48 = data_2691c6c
    *(eax_48 + (esi_3 << 3) + 0x1d8) = fconvert.d(float.t(edx_59 * 2 - 1))
    int32_t eax_49 = sub_48c070(eax_48, arg3, var_30, 0)
    
    if (*(var_30 + 0x1ec3) != 0)
        eax_49 = 0
    
    int32_t ecx_136
    ecx_136.b = eax_49 s> 0
    int32_t ecx_138
    ecx_138.b = eax_49 s> 1
    *(data_2691c6c + (esi_3 << 3) + 0x1e0) = fconvert.d(float.t(ecx_136 * 2 - 1))
    int32_t ecx_140
    ecx_140.b = eax_49 s> 2
    *(data_2691c6c + (esi_3 << 3) + 0x1e8) = fconvert.d(float.t(ecx_138 * 2 - 1))
    int32_t ecx_142
    ecx_142.b = eax_49 s> 3
    *(data_2691c6c + (esi_3 << 3) + 0x1f0) = fconvert.d(float.t(ecx_140 * 2 - 1))
    int32_t ecx_144
    ecx_144.b = eax_49 s> 4
    *(data_2691c6c + (esi_3 << 3) + 0x1f8) = fconvert.d(float.t(ecx_142 * 2 - 1))
    int32_t ecx_146
    ecx_146.b = eax_49 s> 5
    *(data_2691c6c + (esi_3 << 3) + 0x200) = fconvert.d(float.t(ecx_144 * 2 - 1))
    int32_t esi_4 = esi_3 + 0x42
    *(data_2691c6c + (esi_4 << 3) - 8) = fconvert.d(float.t(ecx_146 * 2 - 1))
    eax_49.b = *(var_30 + 0x45a)
    
    if (eax_49.b s> 0 && eax_49.b s< 4)
        void* ecx_148 = (esi_4 << 3) + 0x18
        void* eax_50 = edi + 0x68
        int32_t i_7 = 2
        esi_4 += 0x14
        int32_t i_6
        
        do
            int32_t edx_68
            edx_68.b = *(eax_50 - 1) != 0
            *(ecx_148 + data_2691c6c - 0x18) = fconvert.d(float.t(edx_68 * 2 - 1))
            int32_t edx_71
            edx_71.b = *eax_50 != 0
            *(ecx_148 + data_2691c6c - 0x10) = fconvert.d(float.t(edx_71 * 2 - 1))
            int32_t edx_74
            edx_74.b = *(eax_50 + 1) != 0
            *(ecx_148 + data_2691c6c - 8) = fconvert.d(float.t(edx_74 * 2 - 1))
            int32_t edx_77
            edx_77.b = *(eax_50 + 2) != 0
            *(ecx_148 + data_2691c6c) = fconvert.d(float.t(edx_77 * 2 - 1))
            int32_t edx_80
            edx_80.b = *(eax_50 + 3) != 0
            *(ecx_148 + data_2691c6c + 8) = fconvert.d(float.t(edx_80 * 2 - 1))
            int32_t edx_83
            edx_83.b = *(eax_50 + 4) != 0
            *(ecx_148 + data_2691c6c + 0x10) = fconvert.d(float.t(edx_83 * 2 - 1))
            int32_t edx_86
            edx_86.b = *(eax_50 + 5) != 0
            *(ecx_148 + data_2691c6c + 0x18) = fconvert.d(float.t(edx_86 * 2 - 1))
            int32_t edx_89
            edx_89.b = *(eax_50 + 6) != 0
            *(ecx_148 + data_2691c6c + 0x20) = fconvert.d(float.t(edx_89 * 2 - 1))
            int32_t edx_92
            edx_92.b = *(eax_50 + 7) != 0
            *(ecx_148 + data_2691c6c + 0x28) = fconvert.d(float.t(edx_92 * 2 - 1))
            int32_t edx_95
            edx_95.b = *(eax_50 + 8) != 0
            eax_50 += 0xa
            *(ecx_148 + data_2691c6c + 0x30) = fconvert.d(float.t(edx_95 * 2 - 1))
            ecx_148 += 0x50
            i_6 = i_7
            i_7 -= 1
        while (i_6 != 1)
    
    if (*(var_30 + 0x45a) == 3)
        int32_t var_2c_1
        
        if (*(edi + 0x3c) == 0)
            var_2c_1 = 0xffffffff
        
        if (*(edi + 0x3c) != 0 || *(var_30 + 0x1ec3) != 0)
            var_2c_1 = 1
        
        void* var_28_3 = (esi_4 << 3) + 0x20
        *(data_2691c6c + (esi_4 << 3)) = fconvert.d(float.t(var_2c_1))
        int32_t eax_52 = 2
        esi_4 += 0x10
        
        do
            int32_t ebx_14
            ebx_14.b = sx.d(*(edi + 0xa3)) s> eax_52 - 2
            *(var_28_3 + data_2691c6c - 0x18) = fconvert.d(float.t(ebx_14 * 2 - 1))
            int32_t ebx_16
            ebx_16.b = sx.d(*(edi + 0xa3)) s> eax_52 - 1
            *(var_28_3 + data_2691c6c - 0x10) = fconvert.d(float.t(ebx_16 * 2 - 1))
            int32_t ebx_18
            ebx_18.b = sx.d(*(edi + 0xa3)) s> eax_52
            *(var_28_3 + data_2691c6c - 8) = fconvert.d(float.t(ebx_18 * 2 - 1))
            int32_t ebx_20
            ebx_20.b = sx.d(*(edi + 0xa3)) s> eax_52 + 1
            *(var_28_3 + data_2691c6c) = fconvert.d(float.t(ebx_20 * 2 - 1))
            int32_t ebx_22
            ebx_22.b = sx.d(*(edi + 0xa3)) s> eax_52 + 2
            void* ecx_158 = var_28_3 + 0x28
            eax_52 += 5
            var_28_3 = ecx_158
            *(ecx_158 + data_2691c6c - 0x20) = fconvert.d(float.t(ebx_22 * 2 - 1))
        while (eax_52 - 2 s< 0xf)
        
        arg5[1] = sx.d(*(edi + 0xa3))
    
    *arg5 = sx.d(*(edi + 0xaa))
    int32_t eax_54
    eax_54.b = *(edi + 0xac) != 0
    *(data_2691c6c + (esi_4 << 3)) = fconvert.d(float.t(eax_54 * 2 - 1))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}

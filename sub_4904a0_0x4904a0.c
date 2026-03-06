// 函数名称: sub_4904a0
// 虚拟地址: 0x4904a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4904a0(int32_t arg1, char arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_c021dc += 1
    int32_t var_94 = 0
    int32_t var_a4 = 0
    int32_t var_ac = 0
    long double x87_r7 = fconvert.t(-1.0)
    int32_t* ecx = sub_48f170(arg4, arg2, arg3, arg4.b)
    long double temp2 = fconvert.t(*(ecx + 8))
    x87_r7 - temp2
    int32_t* eax_3
    eax_3.w = (x87_r7 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp2) ? 1 : 0) << 0xa
        | (x87_r7 == temp2 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        data_2691ba8 += 1
        long double x87_r7_1 = fconvert.t(*(ecx + 8))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return x87_r7_1
    
    data_2689cf4 += 1
    data_c021e0 += 1
    sub_4b2040()
    
    if (*(arg3 + 0x1ec3) != 0)
        sub_4b21d0(arg3)
    
    int32_t i = 0
    
    if (data_2691c48 s> 0)
        do
            *(data_2691c6c + (i << 3)) = fconvert.d(fconvert.t(-1.0))
            i += 1
        while (i s< data_2691c48)
    
    int32_t edx
    edx.b = *(arg3 + 0x1ec3) != 0
    int32_t var_9c_1 = 0xd
    *data_2691c6c = fconvert.d(float.t(edx * 2 - 1))
    int32_t eax_5 = 2
    double* ecx_5 = 0x20
    
    do
        int32_t ebx_1
        ebx_1.b = sx.d(*(arg3 + 0x1e04)) s> (eax_5 - 2) * sx.d(*(arg3 + 0x458))
        *(ecx_5 + data_2691c6c - 0x18) = fconvert.d(float.t(ebx_1 * 2 - 1))
        int32_t ebx_3
        ebx_3.b = sx.d(*(arg3 + 0x1e04)) s> (eax_5 - 1) * sx.d(*(arg3 + 0x458))
        *(ecx_5 + data_2691c6c - 0x10) = fconvert.d(float.t(ebx_3 * 2 - 1))
        int32_t ebx_5
        ebx_5.b = sx.d(*(arg3 + 0x1e04)) s> sx.d(*(arg3 + 0x458)) * eax_5
        *(ecx_5 + data_2691c6c - 8) = fconvert.d(float.t(ebx_5 * 2 - 1))
        int32_t ebx_7
        ebx_7.b = sx.d(*(arg3 + 0x1e04)) s> (eax_5 + 1) * sx.d(*(arg3 + 0x458))
        *(ecx_5 + data_2691c6c) = fconvert.d(float.t(ebx_7 * 2 - 1))
        int32_t ebx_9
        ebx_9.b = sx.d(*(arg3 + 0x1e04)) s> (eax_5 + 2) * sx.d(*(arg3 + 0x458))
        *(ecx_5 + data_2691c6c + 8) = fconvert.d(float.t(ebx_9 * 2 - 1))
        int32_t ebx_11
        ebx_11.b = sx.d(*(arg3 + 0x1e04)) s> (eax_5 + 3) * sx.d(*(arg3 + 0x458))
        eax_5 += 6
        ecx_5 = &ecx_5[6]
        *(ecx_5 + data_2691c6c - 0x20) = fconvert.d(float.t(ebx_11 * 2 - 1))
    while (eax_5 - 2 s< 0xc)
    
    int32_t esi_13 = 0
    int32_t edx_21 = 0
    
    if (sx.d(*(arg3 + 0x458)) s> 0)
        void* ebx_13 = arg3 + 0x46
        
        while (true)
            if (esi_13 s>= 0)
                int32_t i_1 = sx.d(*ebx_13)
                int32_t ecx_6 = 0
                
                if (i_1 s>= 0xffffffff)
                    while (i_1 != 0xffffffff)
                        i_1 = sx.d(*(arg3 + ((i_1 * 5 + 0x11d) << 2)))
                        ecx_6 += 1
                    
                    if (ecx_6 s> edx_21)
                        edx_21 = ecx_6
                    
                    esi_13 += 1
                    ebx_13 += 0xb4
                    
                    if (esi_13 s>= sx.d(*(arg3 + 0x458)))
                        break
                    
                    continue
            
            sub_49b2a0()
            noreturn
    
    int32_t ebx_14 = var_9c_1
    
    for (int32_t i_2 = 0; i_2 s< 0xc; )
        int32_t ecx_7
        ecx_7.b = edx_21 s> i_2
        i_2 += 1
        ebx_14 += 1
        *(data_2691c6c + (ebx_14 << 3) - 8) = fconvert.d(float.t(ecx_7 * 2 - 1))
    
    int32_t esi_14 = 0xc - edx_21
    int32_t temp0 = divs.dp.d(sx.q(*(arg3 + 0x1e04)), sx.d(*(arg3 + 0x458)))
    
    if (temp0 s< esi_14)
        esi_14 = temp0
    
    if (*(arg3 + 0x1ec2) s> 0x14)
        esi_14 = 0
    
    int32_t i_3
    
    for (i_3 = 0; i_3 s< 0xc; )
        int32_t edx_24
        edx_24.b = esi_14 s> i_3
        i_3 += 1
        ebx_14 += 1
        *(data_2691c6c + (ebx_14 << 3) - 8) = fconvert.d(float.t(edx_24 * 2 - 1))
    
    i_3.b = *(arg3 + 0x45a)
    void* ecx_12
    
    if (i_3.b s> 0 && i_3.b s< 4)
        void* ecx_11 = (ebx_14 << 3) + 0x18
        void* eax_12 = arg3 + 0x1e08
        int32_t i_13 = 2
        int32_t i_4
        
        do
            int32_t edx_26
            edx_26.b = *(eax_12 - 2) != 0
            *(ecx_11 + data_2691c6c - 0x18) = fconvert.d(float.t(edx_26 * 2 - 1))
            int32_t edx_29
            edx_29.b = *eax_12 != 0
            *(ecx_11 + data_2691c6c - 0x10) = fconvert.d(float.t(edx_29 * 2 - 1))
            int32_t edx_32
            edx_32.b = *(eax_12 + 2) != 0
            *(ecx_11 + data_2691c6c - 8) = fconvert.d(float.t(edx_32 * 2 - 1))
            int32_t edx_35
            edx_35.b = *(eax_12 + 4) != 0
            *(ecx_11 + data_2691c6c) = fconvert.d(float.t(edx_35 * 2 - 1))
            int32_t edx_38
            edx_38.b = *(eax_12 + 6) != 0
            *(ecx_11 + data_2691c6c + 8) = fconvert.d(float.t(edx_38 * 2 - 1))
            int32_t edx_41
            edx_41.b = *(eax_12 + 8) != 0
            *(ecx_11 + data_2691c6c + 0x10) = fconvert.d(float.t(edx_41 * 2 - 1))
            int32_t edx_44
            edx_44.b = *(eax_12 + 0xa) != 0
            *(ecx_11 + data_2691c6c + 0x18) = fconvert.d(float.t(edx_44 * 2 - 1))
            int32_t edx_47
            edx_47.b = *(eax_12 + 0xc) != 0
            *(ecx_11 + data_2691c6c + 0x20) = fconvert.d(float.t(edx_47 * 2 - 1))
            int32_t edx_50
            edx_50.b = *(eax_12 + 0xe) != 0
            *(ecx_11 + data_2691c6c + 0x28) = fconvert.d(float.t(edx_50 * 2 - 1))
            int32_t edx_53
            edx_53.b = *(eax_12 + 0x10) != 0
            eax_12 += 0x14
            *(ecx_11 + data_2691c6c + 0x30) = fconvert.d(float.t(edx_53 * 2 - 1))
            ecx_11 += 0x50
            i_4 = i_13
            i_13 -= 1
        while (i_4 != 1)
        ecx_12 = (ebx_14 << 3) + 0xb8
        void* eax_13 = arg3 + 0x1e30
        int32_t i_14 = 2
        ebx_14 += 0x28
        int32_t i_5
        
        do
            int32_t edx_56
            edx_56.b = *(eax_13 - 2) != 0
            *(ecx_12 + data_2691c6c - 0x18) = fconvert.d(float.t(edx_56 * 2 - 1))
            int32_t edx_59
            edx_59.b = *eax_13 != 0
            *(ecx_12 + data_2691c6c - 0x10) = fconvert.d(float.t(edx_59 * 2 - 1))
            int32_t edx_62
            edx_62.b = *(eax_13 + 2) != 0
            *(data_2691c6c + ecx_12 - 8) = fconvert.d(float.t(edx_62 * 2 - 1))
            int32_t edx_65
            edx_65.b = *(eax_13 + 4) != 0
            *(data_2691c6c + ecx_12) = fconvert.d(float.t(edx_65 * 2 - 1))
            int32_t edx_68
            edx_68.b = *(eax_13 + 6) != 0
            *(data_2691c6c + ecx_12 + 8) = fconvert.d(float.t(edx_68 * 2 - 1))
            int32_t edx_71
            edx_71.b = *(eax_13 + 8) != 0
            *(data_2691c6c + ecx_12 + 0x10) = fconvert.d(float.t(edx_71 * 2 - 1))
            int32_t edx_74
            edx_74.b = *(eax_13 + 0xa) != 0
            *(data_2691c6c + ecx_12 + 0x18) = fconvert.d(float.t(edx_74 * 2 - 1))
            int32_t edx_77
            edx_77.b = *(eax_13 + 0xc) != 0
            *(data_2691c6c + ecx_12 + 0x20) = fconvert.d(float.t(edx_77 * 2 - 1))
            int32_t edx_80
            edx_80.b = *(eax_13 + 0xe) != 0
            *(data_2691c6c + ecx_12 + 0x28) = fconvert.d(float.t(edx_80 * 2 - 1))
            int32_t edx_83
            edx_83.b = *(eax_13 + 0x10) != 0
            eax_13 += 0x14
            *(data_2691c6c + ecx_12 + 0x30) = fconvert.d(float.t(edx_83 * 2 - 1))
            ecx_12 += 0x50
            i_5 = i_14
            i_14 -= 1
        while (i_5 != 1)
    
    void* edx_86 = arg4 * 0xb4 + arg3 + 0x20
    int32_t i_6 = sx.d(*(edx_86 + 0x24))
    void* var_a0 = edx_86
    
    if (*(arg3 + 0x1ec3) == 0 && i_6 != 0xffffffff)
        int32_t edx_87 = var_94
        
        do
            edx_87 += 1
            
            if (*(arg3 + 0x18) == 0 || sx.d(*(arg3 + 0x19)) == arg4)
                ecx_12 = *(arg3 + i_6 * 0x14 + 0x46c)
                
                if ((*(ecx_12 + 0x10) & &__dos_header) == 0)
                    ecx_12 = *((sx.d(*(ecx_12 + 4)) << 2) + &data_2689cf8) + ebx_14
                    
                    if (ecx_12 s>= data_2691c48)
                        sub_4c5870("n + card_input[c_ptr->d_ptr->index] < eval.num_inputs", 
                            &data_83f3d3, "..\code\rftg\ai.cpp", 0xa15, "eval_game")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    *(data_2691c6c + (ecx_12 << 3)) = fconvert.d(float.t(1))
            
            i_6 = sx.d(*(arg3 + ((i_6 * 5 + 0x11d) << 2)))
        while (i_6 != 0xffffffff)
        
        var_94 = edx_87
        edx_86 = var_a0
    
    int32_t i_7 = sx.d(*(edx_86 + 0x2a))
    
    if (*(arg3 + 0x1ec3) != 0)
        i_7 = 0xffffffff
    
    if ((*(arg3 + 0x18) == 0 || sx.d(*(arg3 + 0x19)) == arg4) && i_7 != 0xffffffff)
        do
            ecx_12 = *(arg3 + i_7 * 0x14 + 0x46c)
            
            if ((*(ecx_12 + 0x10) & &__dos_header) == 0)
                ecx_12 = *((sx.d(*(ecx_12 + 4)) << 2) + &data_2689cf8) + ebx_14
                
                if (ecx_12 s>= data_2691c48)
                    sub_4c5870("n + card_input[c_ptr->d_ptr->index] < eval.num_inputs", &data_83f3d3, 
                        "..\code\rftg\ai.cpp", 0xa2a, "eval_game")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (ecx_12 s< 0)
                    sub_4c5870("n + card_input[c_ptr->d_ptr->index] >= 0", &data_83f3d3, 
                        "..\code\rftg\ai.cpp", 0xa2b, "eval_game")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(data_2691c6c + (ecx_12 << 3)) = fconvert.d(fconvert.t(0.5))
            
            i_7 = sx.d(*(arg3 + ((i_7 * 5 + 0x11d) << 2)))
        while (i_7 != 0xffffffff)
    
    ecx_12.b = *(arg3 + 0x1ec3)
    int32_t eax_18
    
    if (ecx_12.b == 0)
        eax_18 = sx.d(*(edx_86 + 0x8e)) - sx.d(*(edx_86 + 0x90))
    else
        eax_18 = 0
    
    int32_t ebx_15 = ebx_14 + data_2689cf0
    int32_t var_94_1 = var_94 + eax_18
    int32_t i_8 = sx.d(*(edx_86 + 0x24))
    
    if (ecx_12.b != 0)
        i_8 = 0xffffffff
    
    if (*(arg3 + 0x18) != 0 && sx.d(*(arg3 + 0x19)) != arg4)
        i_8 = 0xffffffff
    
    int32_t edx_89 = sub_4a0420(arg3, arg4) + var_94_1 - 1
    
    for (; i_8 != 0xffffffff; i_8 = sx.d(*(arg3 + ((i_8 * 5 + 0x11d) << 2))))
        void* eax_26 = *(arg3 + i_8 * 0x14 + 0x46c)
        
        if (*(eax_26 + 6) != 2)
            if (sub_4a1120(arg3, i_8, 0, 0, 0, 0) != 0)
                var_ac += 1
        else if (sx.d(*(eax_26 + 7)) s<= edx_89)
            var_a4 += 1
    
    for (int32_t i_9 = 0; i_9 s< 5; )
        if (ebx_15 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xa5d, "eval_game")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ebx_15 s>= data_2691c48)
            sub_4c5870("n < eval.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xa5e, "eval_game")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_23
        ecx_23.b = var_a4 s> i_9
        i_9 += 1
        ebx_15 += 1
        *(data_2691c6c + (ebx_15 << 3) - 8) = fconvert.d(float.t(ecx_23 * 2 - 1))
    
    int32_t ecx_25
    
    for (int32_t i_10 = 0; i_10 s< 5; )
        if (ebx_15 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xa66, "eval_game")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ebx_15 s>= data_2691c48)
            sub_4c5870("n < eval.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xa67, "eval_game")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ecx_25.b = var_ac s> i_10
        i_10 += 1
        ebx_15 += 1
        *(data_2691c6c + (ebx_15 << 3) - 8) = fconvert.d(float.t(ecx_25 * 2 - 1))
    
    int32_t eax_28 = arg4 * 5
    int32_t eax_29
    int80_t st0
    st0, eax_29 = sub_48f470(eax_28, arg3, arg4, ebx_15, &(&__saved_ebp)[eax_28 - 0x21])
    int32_t ecx_29 = eax_29
    int32_t i_12 = mods.dp.d(sx.q(arg4 + 1), sx.d(*(arg3 + 0x458)))
    
    for (int32_t i_11 = i_12; i_11 != arg4; i_11 = i_12)
        int32_t eax_34
        int80_t st0_1
        st0_1, eax_34 = sub_48f470(&(&__saved_ebp)[i_11 * 5 - 0x21], arg3, i_11, ecx_29, 
            &(&__saved_ebp)[i_11 * 5 - 0x21])
        ecx_29 = eax_34
        i_12 = mods.dp.d(sx.q(i_11 + 1), sx.d(*(arg3 + 0x458)))
    
    int32_t var_c4_4 = 0x14
    int32_t var_c8_2 = 0
    void var_88
    int32_t eax_39
    int32_t ecx_31
    void* edx_98
    eax_39, ecx_31, edx_98 = sub_490340(ecx_29, i_12, ecx_29, arg3, arg4, &var_88)
    
    if (*(arg3 + 0x45a) == 3)
        int32_t var_c4_5 = 5
        int32_t var_c8_3 = 1
        eax_39, ecx_31, edx_98 = sub_490340(eax_39, edx_98, ecx_31, arg3, arg4, &var_88)
    
    int32_t var_c4_6 = 5
    int32_t var_c8_4 = 2
    int32_t eax_40
    int32_t ecx_32
    void* edx_99
    eax_40, ecx_32, edx_99 = sub_490340(eax_39, edx_98, ecx_31, arg3, arg4, &var_88)
    int32_t var_c4_7 = 0xa
    int32_t var_c8_5 = 3
    int32_t eax_41
    int32_t ecx_33
    void* edx_100
    eax_41, ecx_33, edx_100 = sub_490340(eax_40, edx_99, ecx_32, arg3, arg4, &var_88)
    int32_t var_c4_8 = 5
    int32_t var_c8_6 = 4
    int32_t eax_42 = sub_490340(eax_41, edx_100, ecx_33, arg3, arg4, &var_88)
    int32_t ecx_34 = data_2691c48
    
    if (eax_42 != ecx_34)
        int32_t var_c4_9 = ecx_34
        int32_t var_c8_7 = eax_42
        sub_5a7d4b("Incorrect number of eval inputs %d %d\n")
        sub_5a79f4()
        noreturn
    
    sub_4b3d70(&data_2691c30)
    data_2691bbc += 1
    int32_t performanceCount
    
    if (data_315ff60 == 0)
        QueryPerformanceCounter(&performanceCount)
        data_3165180 = performanceCount
        data_3165184 = ecx_25 * 2 - 1
        data_315ff60 = 1
    
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t esi_21 = performanceCount_1 - data_3165180
    int32_t ebx_20 = sbb.d(ecx_25 * 2 - 1, data_3165184, performanceCount_1 u< data_3165180)
    
    if ((data_3160a20 & 1) == 0)
        data_3160a20.d |= 1
        int32_t frequency
        QueryPerformanceFrequency(&frequency)
        data_3160a18 = frequency
        data_3160a1c = var_ac
    
    int32_t eax_44
    uint32_t edx_103
    eax_44, edx_103 = __allmul(esi_21, ebx_20, 0x3e8, 0)
    
    if (__aulldiv(eax_44, edx_103, data_3160a18, data_3160a1c) s> 0x11)
        void* eax_46 = *(data_27e7a40 + 0x548)
        data_27e7a9c += 1
        data_315ff60 = 0
        *(eax_46 + 0x2c0a2) = 1
        sub_406ad0()
        *(*(data_27e7a40 + 0x548) + 0x2c0a2) = 0
    
    long double x87_r7_36 = float.t(0)
    long double x87_r6
    
    if (*(var_a0 + 0x8c) == 0)
        x87_r6 = x87_r7_36
    else
        x87_r6 = fconvert.t(0.20000000000000001)
    
    long double x87_r5_1
    
    if (*(arg3 + 0x1ec3) == 0)
        x87_r5_1 = x87_r7_36
        x87_r7_36 = fconvert.t(0.10000000000000001)
    else
        x87_r5_1 = x87_r7_36
    
    long double x87_r7_38 = x87_r7_36 + x87_r6 + float.t(sx.d(*(var_a0 + 0x8a))) * fconvert.t(0.001)
        + fconvert.t(*data_2691c7c) + float.t(var_94_1) * fconvert.t(0.00020000000000000001) - x87_r5_1
    *(ecx + 8) = fconvert.d(x87_r7_38)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return x87_r7_38
}

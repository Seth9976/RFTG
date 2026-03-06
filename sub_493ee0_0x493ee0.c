// 函数名称: sub_493ee0
// 虚拟地址: 0x493ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_493ee0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int128_t* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x2ba4)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    data_c021e4 += 1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    double var_2b94 = fconvert.d(float.t(1))
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_14 = 0x40000
    int128_t* ebx = ecx
    int32_t* edi = edx
    int32_t var_18 = 0
    void* var_1c = &data_2649940
    int128_t* var_2b7c = ebx
    int32_t* var_2b9c = edi
    int32_t i_7 = 0xffffffff
    char edx_1 = sub_5abfc0()
    int32_t eax_2 = data_27e7a88
    data_27e7a8c = eax_2
    data_27e7a90 = 0
    int32_t eax_3
    int32_t ecx_2
    int32_t edx_2
    int80_t st0
    st0, eax_3, ecx_2, edx_2 = sub_4904a0(eax_2, edx_1, ebx, arg1)
    sub_4b3f00(eax_3, edx_2, ecx_2, &data_2691c30, arg1)
    int32_t var_14_3 = 0x40000
    void* var_18_1 = nullptr
    void* var_1c_1 = &data_2609940
    data_26031d0 = 0
    data_2603c28 = 0
    data_2604680 = 0
    data_26050d8 = 0
    data_2605b30 = 0
    data_2606588 = 0
    data_2606fe0 = 0
    data_2607a38 = 0
    data_2608490 = 0
    data_2608ee8 = 0
    int32_t eax_4 = sub_5abfc0()
    bool cond:0 = *(ebx + 0x459) == 0
    data_27e7a98 = 0
    int32_t entry_ebx
    
    if (not(cond:0))
        int128_t* eax_5 = sub_493160(eax_4, ebx, edi, arg1, arg2)
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return eax_5
    
    int32_t ecx_7 = data_2691be0
    void var_84
    
    if (ecx_7 s> 0)
        edi = __builtin_memset(&var_84, 0, (ecx_7 & 0x1fffffff) * 8)
    
    long double x87_r7_3 = float.t(0)
    int32_t i = 0
    int32_t i_5 = 0
    void var_ef4
    void var_eec
    int32_t eax_6
    
    if (*(ebx + 0x458) s<= 0)
        eax_6 = arg1
    else
        void* var_2b98_1 = &var_eec
        eax_6 = arg1
        int32_t var_2b80_1 = 0
        void* var_2b78_1 = ebx + 0xa3
        
        do
            if (i != eax_6)
                sub_491fd0(ebx, var_2b98_1 - 8, eax_6)
                x87_r7_3 = float.t(0)
                edi = data_2691be0
                int32_t eax_9 = 0
                
                if (edi s> 0)
                    char edx_6 = *(var_2b78_1 - 0x67)
                    ebx.b = *var_2b78_1
                    
                    do
                        if (edx_6 != 0)
                            int32_t ecx_11 = *((eax_9 << 2) + &data_8c6a80)
                            
                            if (ecx_11 == 0 || ecx_11.b s< 0)
                                *(&var_ef4 + ((var_2b80_1 + eax_9) << 3)) = fconvert.d(x87_r7_3)
                        
                        if (ebx.b == 0 && (*((eax_9 << 2) + &data_8c6a80) & 0x80) != 0)
                            *(&var_ef4 + ((var_2b80_1 + eax_9) << 3)) = fconvert.d(x87_r7_3)
                        
                        eax_9 += 1
                    while (eax_9 s< edi)
                    
                    ebx = var_2b7c
                    edi = data_2691be0
                
                int32_t esi_2 = 0
                long double x87_r6_1 = x87_r7_3
                
                if (edi s>= 4)
                    void* ecx_14 = var_2b98_1
                    int32_t j_4 = (&edi[-1] u>> 2) + 1
                    esi_2 = j_4 << 2
                    int32_t j
                    
                    do
                        long double temp1_1 = fconvert.t(*(ecx_14 - 8))
                        x87_r6_1 - temp1_1
                        eax_9.w = (x87_r6_1 < temp1_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp1_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_1))
                            x87_r7_3 = x87_r6_1
                            x87_r6_1 = fconvert.t(*(ecx_14 - 8))
                        
                        long double temp3_1 = fconvert.t(*ecx_14)
                        x87_r6_1 - temp3_1
                        eax_9.w = (x87_r6_1 < temp3_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp3_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_2 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_2))
                            x87_r7_3 = x87_r6_1
                            x87_r6_1 = fconvert.t(*ecx_14)
                        
                        long double temp5_1 = fconvert.t(*(ecx_14 + 8))
                        x87_r6_1 - temp5_1
                        eax_9.w = (x87_r6_1 < temp5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp5_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_3 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_3))
                            x87_r7_3 = x87_r6_1
                            x87_r6_1 = fconvert.t(*(ecx_14 + 8))
                        
                        long double temp6_1 = fconvert.t(*(ecx_14 + 0x10))
                        x87_r6_1 - temp6_1
                        eax_9.w = (x87_r6_1 < temp6_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp6_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_4 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_4))
                            x87_r7_3 = x87_r6_1
                            x87_r6_1 = fconvert.t(*(ecx_14 + 0x10))
                        
                        ecx_14 += 0x20
                        j = j_4
                        j_4 -= 1
                    while (j != 1)
                
                if (esi_2 s< edi)
                    void* edx_11 = &(&__saved_ebp)[(var_2b80_1 + esi_2) * 2 - 0x3bc]
                    void* j_3 = edi - esi_2
                    void* j_1
                    
                    do
                        long double temp2_1 = fconvert.t(*edx_11)
                        x87_r6_1 - temp2_1
                        eax_9.w = (x87_r6_1 < temp2_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_5 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_5))
                            x87_r7_3 = x87_r6_1
                            x87_r6_1 = fconvert.t(*edx_11)
                        
                        edx_11 += 8
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                i = i_5
                eax_6 = arg1
                var_2b94 = fconvert.d(x87_r6_1 * fconvert.t(var_2b94))
            
            var_2b78_1 += 0xb4
            var_2b98_1 += 0x30
            var_2b80_1 += 6
            i += 1
            i_5 = i
        while (i s< sx.d(*(ebx + 0x458)))
    
    int32_t i_1 = sx.d(*(eax_6 * 0xb4 + ebx + 0x56))
    int32_t ecx_16 = 0
    
    if (i_1 != 0xffffffff)
        do
            int32_t eax_11 = i_1 * 5
            
            if ((*(*(ebx + (eax_11 << 2) + 0x46c) + 0x10) & 0x40000) != 0)
                ecx_16 += 1
            
            i_1 = sx.d(*(ebx + (eax_11 << 2) + 0x476))
        while (i_1 != 0xffffffff)
        
        if (ecx_16 != 0)
            i_1 = sx.d(*(ebx + 0x458))
            int32_t edx_13 = 0
            int32_t i_8 = i_1
            
            if (i_1 s> 0)
                void* ebx_2 = &var_ef4
                edi = var_2b7c + 0x2c
                
                do
                    if (edx_13 != arg1)
                        i_1 = 0
                        
                        if (data_2691be0 s> 0)
                            int32_t esi_4 = *edi
                            long double x87_r6_3 = float.t(1)
                            void* ecx_17 = ebx_2
                            
                            while (true)
                                long double x87_r6_5 = x87_r7_3
                                x87_r7_3 = x87_r6_3
                                *ecx_17 = fconvert.d(x87_r6_5)
                                
                                if (*((i_1 << 2) + &data_8c6a80) == esi_4)
                                    *ecx_17 = fconvert.d(x87_r7_3)
                                
                                i_1 += 1
                                ecx_17 += 8
                                
                                if (i_1 s>= data_2691be0)
                                    break
                                
                                x87_r6_3 = x87_r7_3
                                x87_r7_3 = x87_r6_5
                    
                    edx_13 += 1
                    edi = &edi[0x2d]
                    ebx_2 += 0x30
                while (edx_13 s< i_8)
                
                ebx = var_2b7c
            
            var_2b94 = fconvert.d(x87_r7_3)
    
    int32_t i_2 = 0
    int32_t i_6 = 0
    void var_2b74
    
    if (*(ebx + 0x458) s> 0)
        int32_t var_2b80_2 = 0
        edi = &var_2b74
        void* var_2b78_2 = &var_eec
        
        do
            if (i_2 != arg1)
                int32_t j_2 = 0
                
                if (data_2691be0 s>= 4)
                    void* edx_14 = var_2b78_2
                    int32_t esi_6 = data_2691be0 - 3
                    void* ecx_18 = &edi[2]
                    
                    do
                        *(ecx_18 - 8) = fconvert.d(fconvert.t(*(edx_14 - 8)))
                        *(ecx_18 + 0x10) = j_2 + 1
                        *(ecx_18 + 8) = fconvert.d(fconvert.t(*edx_14))
                        *(ecx_18 + 0x20) = j_2 + 2
                        *(ecx_18 + 0x18) = fconvert.d(fconvert.t(*(edx_14 + 8)))
                        *ecx_18 = j_2
                        long double x87_r7_8 = fconvert.t(*(edx_14 + 0x10))
                        *(ecx_18 + 0x30) = j_2 + 3
                        *(ecx_18 + 0x28) = fconvert.d(x87_r7_8)
                        j_2 += 4
                        edx_14 += 0x20
                        ecx_18 += 0x40
                    while (j_2 s< esi_6)
                    
                    i_2 = i_6
                
                if (j_2 s< data_2691be0)
                    int32_t edx_16 = var_2b80_2 + j_2
                    void* ecx_21 = &(&__saved_ebp)[edx_16 * 4 - 0xada]
                    void* edx_17 = &(&__saved_ebp)[edx_16 * 2 - 0x3bc]
                    
                    do
                        long double x87_r7_9 = fconvert.t(*edx_17)
                        *ecx_21 = j_2
                        *(ecx_21 - 8) = fconvert.d(x87_r7_9)
                        j_2 += 1
                        edx_17 += 8
                        ecx_21 += 0x10
                    while (j_2 s< data_2691be0)
                
                sub_5a7ac0(edi, data_2691be0, 0x10, sub_492c10)
                x87_r7_3 = float.t(0)
                ebx = var_2b7c
            
            var_2b78_2 += 0x30
            var_2b80_2 += 6
            i_2 += 1
            edi = &edi[0x18]
            i_6 = i_2
        while (i_2 s< sx.d(*(ebx + 0x458)))
    
    i_1.b = *(ebx + 0x458)
    long double x87_r6_7 = fconvert.t(var_2b94) * fconvert.t(0.125)
    double var_2b94_1 = fconvert.d(x87_r6_7)
    
    if (i_1.b == 2)
        x87_r7_3 = x87_r6_7
        var_2b94_1 = fconvert.d(x87_r7_3)
    
    if (i_1.b == 4)
        x87_r7_3 = x87_r7_3 * fconvert.t(5.0)
        var_2b94_1 = fconvert.d(x87_r7_3)
    
    if (i_1.b s>= 5)
        x87_r7_3 = x87_r7_3 * fconvert.t(7.0)
        var_2b94_1 = fconvert.d(x87_r7_3)
    
    var_18_1.q = fconvert.d(x87_r7_3)
    double var_20_1 = fconvert.d(float.t(1))
    data_c02204 = 0
    void var_9c
    sub_493a90(var_2b7c, arg1, 0, &var_2b74, &var_9c, var_20_1, var_18_1)
    var_20_1.d = data_26031c8
    sub_5a7ac0(var_20_1.d, data_c02204, 0x20, sub_493a60)
    int32_t var_18_3
    var_18_3.q = fconvert.d(float.t(0))
    sub_493e10(edi, var_2b7c, fconvert.d(fconvert.t(var_2b94_1)))
    long double x87_r7_13 = fconvert.t(fconvert.d(fconvert.t(-1.0)))
    int32_t esi_8 = data_2691be0
    int32_t i_3 = 0
    void var_7c
    void var_74
    int64_t var_6c[0x7]
    int32_t eax_14
    
    if (esi_8 s>= 4)
        int32_t edx_20 = *var_2b7c
        int32_t i_10 = 2
        
        do
            if (edx_20 == 0 || *(*((i_3 << 2) + &data_8c6a80) + edx_20 + 0x2474) == 0)
                long double temp8_1 = fconvert.t(*(&var_84 + (i_3 << 3)))
                x87_r7_13 - temp8_1
                eax_14.w = (x87_r7_13 < temp8_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_13, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp8_1 ? 1 : 0) << 0xe | 0x3800
                bool p_6 = unimplemented  {test ah, 0x5}
                
                if (not(p_6))
                    i_7 = i_3
                    x87_r7_13 = fconvert.t(*(&var_84 + (i_3 << 3)))
            
            if (edx_20 == 0 || *(*((i_3 << 2) + &data_8c6a84) + edx_20 + 0x2474) == 0)
                long double temp12_1 = fconvert.t(*(&var_7c + (i_3 << 3)))
                x87_r7_13 - temp12_1
                eax_14.w = (x87_r7_13 < temp12_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_13, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp12_1 ? 1 : 0) << 0xe | 0x3800
                bool p_7 = unimplemented  {test ah, 0x5}
                
                if (not(p_7))
                    x87_r7_13 = fconvert.t(*(&var_7c + (i_3 << 3)))
                    i_7 = i_10 - 1
            
            if (edx_20 == 0 || *(*((i_3 << 2) + &data_8c6a88) + edx_20 + 0x2474) == 0)
                long double temp15_1 = fconvert.t(*(&var_74 + (i_3 << 3)))
                x87_r7_13 - temp15_1
                eax_14.w = (x87_r7_13 < temp15_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_13, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp15_1 ? 1 : 0) << 0xe | 0x3800
                bool p_8 = unimplemented  {test ah, 0x5}
                
                if (not(p_8))
                    i_7 = i_10
                    x87_r7_13 = fconvert.t(*(&var_74 + (i_3 << 3)))
            
            if (edx_20 == 0 || *(*((i_3 << 2) + &data_8c6a8c) + edx_20 + 0x2474) == 0)
                long double temp17_1 = fconvert.t(var_6c[i_3])
                x87_r7_13 - temp17_1
                eax_14.w = (x87_r7_13 < temp17_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_13, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp17_1 ? 1 : 0) << 0xe | 0x3800
                bool p_9 = unimplemented  {test ah, 0x5}
                
                if (not(p_9))
                    x87_r7_13 = fconvert.t(var_6c[i_3])
                    i_7 = i_10 + 1
            
            i_3 += 4
            i_10 += 4
        while (i_3 s< esi_8 - 3)
        
        esi_8 = data_2691be0
    
    if (i_3 s< esi_8)
        int32_t edx_22 = *var_2b7c
        
        do
            if (edx_22 == 0 || *(*((i_3 << 2) + &data_8c6a80) + edx_22 + 0x2474) == 0)
                long double temp9_1 = fconvert.t(*(&var_84 + (i_3 << 3)))
                x87_r7_13 - temp9_1
                eax_14.w = (x87_r7_13 < temp9_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_13, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp9_1 ? 1 : 0) << 0xe | 0x3800
                bool p_10 = unimplemented  {test ah, 0x5}
                
                if (not(p_10))
                    i_7 = i_3
                    x87_r7_13 = fconvert.t(*(&var_84 + (i_3 << 3)))
            
            i_3 += 1
        while (i_3 s< esi_8)
    
    long double x87_r6_8 = float.t(0)
    x87_r6_8 - x87_r7_13
    eax_14.w = (x87_r6_8 < x87_r7_13 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_8, x87_r7_13) ? 1 : 0) << 0xa | (x87_r6_8 == x87_r7_13 ? 1 : 0) << 0xe
    
    if ((eax_14:1.b & 0x41) == 0)
        char const* const var_14_8 = "No action selected!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    *var_2b9c = *((i_7 << 2) + &data_8c6a80)
    void* var_18_5 = &var_84
    var_2b9c[1] = 0xffffffff
    int32_t eax_16
    int80_t st0_2
    st0_2, eax_16 = sub_491fd0(var_2b7c, var_18_5, arg1)
    int32_t edi_6 = data_2691be0
    int32_t i_9 = 0xffffffff
    int32_t i_4 = 0
    data_2691bb0 = fconvert.d(fconvert.t(*(&var_84 + (i_7 << 3))) + fconvert.t(data_2691bb0))
    long double x87_r7_16 = fconvert.t(-1.0)
    
    if (edi_6 s>= 4)
        int32_t i_11 = 2
        
        do
            long double temp11_1 = fconvert.t(*(&var_84 + (i_4 << 3)))
            x87_r7_16 - temp11_1
            eax_16.w = (x87_r7_16 < temp11_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_16, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp11_1 ? 1 : 0) << 0xe | 0x3800
            bool p_11 = unimplemented  {test ah, 0x5}
            
            if (not(p_11))
                i_9 = i_4
                x87_r7_16 = fconvert.t(*(&var_84 + (i_4 << 3)))
            
            long double temp13_1 = fconvert.t(*(&var_7c + (i_4 << 3)))
            x87_r7_16 - temp13_1
            eax_16.w = (x87_r7_16 < temp13_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_16, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp13_1 ? 1 : 0) << 0xe | 0x3800
            bool p_12 = unimplemented  {test ah, 0x5}
            
            if (not(p_12))
                i_9 = i_11 - 1
                x87_r7_16 = fconvert.t(*(&var_7c + (i_4 << 3)))
            
            long double temp14_1 = fconvert.t(*(&var_74 + (i_4 << 3)))
            x87_r7_16 - temp14_1
            eax_16.w = (x87_r7_16 < temp14_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_16, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp14_1 ? 1 : 0) << 0xe | 0x3800
            bool p_13 = unimplemented  {test ah, 0x5}
            
            if (not(p_13))
                i_9 = i_11
                x87_r7_16 = fconvert.t(*(&var_74 + (i_4 << 3)))
            
            long double temp16_1 = fconvert.t(var_6c[i_4])
            x87_r7_16 - temp16_1
            eax_16.w = (x87_r7_16 < temp16_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_16, temp16_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp16_1 ? 1 : 0) << 0xe | 0x3800
            bool p_14 = unimplemented  {test ah, 0x5}
            
            if (not(p_14))
                i_9 = i_11 + 1
                x87_r7_16 = fconvert.t(var_6c[i_4])
            
            i_4 += 4
            i_11 += 4
        while (i_4 s< edi_6 - 3)
    
    for (; i_4 s< edi_6; i_4 += 1)
        long double temp10_1 = fconvert.t(*(&var_84 + (i_4 << 3)))
        x87_r7_16 - temp10_1
        eax_16.w = (x87_r7_16 < temp10_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_16, temp10_1) ? 1 : 0) << 0xa
            | (x87_r7_16 == temp10_1 ? 1 : 0) << 0xe | 0x3800
        bool p_15 = unimplemented  {test ah, 0x5}
        
        if (not(p_15))
            i_9 = i_4
            x87_r7_16 = fconvert.t(*(&var_84 + (i_4 << 3)))
    
    if (i_9 != i_7)
        data_2691bac += 1
    else
        data_2691bb8 += 1
    
    int32_t var_14_10 = 0x40000
    int32_t var_18_6 = 0
    void* var_1c_4 = &data_2609940
    int32_t eax_17 = sub_5abfc0()
    data_27e7a98 = 0
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return eax_17
}

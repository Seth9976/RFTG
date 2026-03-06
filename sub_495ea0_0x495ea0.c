// 函数名称: sub_495ea0
// 虚拟地址: 0x495ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_495ea0(int128_t* arg1 @ esi, int32_t arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    char* edx
    ecx, edx = __chkstk(0x29b6c)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t var_29b34 = 0
    int32_t var_29b64_1
    __builtin_memset(&var_29b64_1, 0, 0x14)
    int32_t var_29b40 = 0
    int32_t var_29b54_1
    int32_t var_29b44
    
    if (arg3 != 2)
        if (arg3 != 3)
            sub_5a79f4()
            noreturn
        
        int32_t eax_5 = edx * 0xb4
        var_29b44 = 1
        
        if (*(eax_5 + arg1 + 0xb4) == 0)
            if ((((*(eax_5 + arg1 + 0x2c)).b & 0x7f) == 7 || ((*(eax_5 + arg1 + 0x30)).b & 0x7f) == 7)
                    && sub_49c8f0(eax_5, arg1, edx, 4) == 0)
                var_29b40 = 1
                var_29b54_1 = 1
            
            goto label_495f93
    else
        void* ecx_3 = edx * 0xb4 + arg1
        var_29b44 = arg3
        
        if (*(ecx_3 + 0xb3) == 0)
        label_495f93:
            
            if (arg1 == 0)
                sub_49b2a0()
                noreturn
            
            if (edx s< 0)
                sub_49b2a0()
                noreturn
            
            void* ebx_1 = edx * 0xb4
            int32_t i = sx.d(*(ebx_1 + arg1 + 0x44))
            void* edx_6 = ebx_1 + arg1
            int32_t ecx_11 = 0
            
            if (i s< 0xffffffff)
                sub_49b2a0()
                noreturn
            
            while (i != 0xffffffff)
                i = sx.d(*(arg1 + ((i * 5 + 0x11d) << 2)))
                ecx_11 += 1
            
            if (sx.d(*(edx_6 + 0xae)) - sx.d(*(edx_6 + 0xb0)) != neg.d(ecx_11))
                if (ecx != 0xffffffff)
                    void* edx_8 = *(arg1 + ecx * 0x14 + 0x46c)
                    int32_t eax_13 = sx.d(*(edx_8 + 0x15))
                    int32_t ebx_2 = 0
                    
                    if (eax_13 s> 0)
                        void* edx_9 = edx_8 + 0x20
                        
                        do
                            if (*(edx_9 - 8) == 3)
                                int32_t ecx_12 = *edx_9
                                int32_t var_29b6c_1 = *(edx_9 + 4)
                                
                                if ((ecx_12 & 0x2000000) != 0)
                                    var_29b64_1 = 1
                                
                                if ((ecx_12 & 0x4000000) != 0)
                                    goto label_495fc1
                            
                            ebx_2 += 1
                            edx_9 += 0x18
                        while (ebx_2 s< eax_13)
                
                int32_t var_29b60_1
                
                if (arg3 == 2)
                    int32_t eax_18 = sub_4a0420(arg1, edx)
                    int32_t ecx_15 = eax_18 + sub_49c8f0(eax_18, arg1, edx, 2)
                    var_29b60_1 = sx.d(*(edx_6 + 0xae)) - sx.d(*(edx_6 + 0xb0)) + ecx_15 - 1
                
                int32_t ebx_4 = sx.d(arg1[0x46].w)
                int32_t eax_22 = 0
                
                if (ebx_4 s> 0)
                    ecx_11.b = *(arg1 + 0x19)
                    int32_t edx_13 = 1 << ecx_11.b
                    void* ecx_16 = arg1 + 0x46c
                    int32_t var_29b4c_2 = edx_13
                    int32_t var_29b58_1
                    int32_t var_530[0x144]
                    
                    while (true)
                        if ((edx_13 & zx.d(*(ecx_16 - 4))) == 0)
                            void* edx_14 = *ecx_16
                            
                            if (sx.d(*(edx_14 + 6)) == var_29b44
                                    && (var_29b40 == 0 || (*(edx_14 + 0x10) & 2) != 0))
                                var_530[var_29b58_1] = eax_22
                                var_29b58_1 += 1
                        
                        eax_22 += 1
                        ecx_16 += 0x14
                        
                        if (eax_22 s>= ebx_4)
                            break
                        
                        edx_13 = var_29b4c_2
                    
                    if (var_29b58_1 != 0)
                        int32_t i_1 = sx.d(*(edx_6 + 0x44))
                        int32_t ecx_17 = 0
                        
                        if (i_1 s< 0xffffffff)
                            sub_49b2a0()
                            noreturn
                        
                        while (i_1 != 0xffffffff)
                            i_1 = sx.d(*(arg1 + ((i_1 * 5 + 0x11d) << 2)))
                            ecx_17 += 1
                        
                        int32_t edx_18 = sx.d(*(edx_6 + 0xb2))
                        int32_t edx_19 = edx_18 + ecx_17
                        int32_t var_29b44_1 = edx_19
                        
                        if (edx_18 != neg.d(ecx_17))
                            int32_t eax_23 = sx.d(arg1[0x1ec].b)
                            
                            if (eax_23 s>= 0)
                                bool cond:5_1
                                
                                if (eax_23.b s< 0)
                                    if (*(edx_6 + 0x2c) == eax_23)
                                        goto label_4961d5
                                    
                                    cond:5_1 = *(edx_6 + 0x30) != eax_23
                                    goto label_4961d3
                                
                                if ((*(edx_6 + 0x2c) & 0x7f) == eax_23)
                                label_4961d5:
                                    edx_19 += 2
                                    var_29b44_1 = edx_19
                                    var_29b54_1 = 1
                                else
                                    cond:5_1 = (*(edx_6 + 0x30) & 0x7f) != eax_23
                                label_4961d3:
                                    
                                    if (not(cond:5_1))
                                        goto label_4961d5
                            
                            if (edx_19 s> 0x14)
                                edx_19 = 0x14
                                var_29b44_1 = 0x14
                            
                            int32_t var_29b4c_3 = 0
                            int32_t var_29b50_1 = 0
                            
                            if (edx_19 s> 0)
                                void var_29b20
                                void var_29b18
                                int32_t eax_47
                                
                                do
                                    int32_t var_29b5c_1
                                    
                                    if (var_29b54_1 != 0 && var_29b34 == 0 && var_29b5c_1 s< 0x14)
                                        var_29b50_1 -= 1
                                        var_29b5c_1 += 1
                                    
                                    int32_t eax_26 = var_29b4c_3 * 0x19660d + 0x3c6ef35f
                                    var_29b4c_3 = eax_26
                                    int32_t temp1_1 =
                                        mods.dp.d(sx.q(eax_26 u>> 0x10 & 0x7fff), var_29b58_1)
                                    int32_t var_29b6c_2 = temp1_1
                                    
                                    if (arg3 == 2)
                                        void* i_2 =
                                            *(arg1 + (&__saved_ebp)[temp1_1 - 0x14b] * 0x14 + 0x46c)
                                        
                                        if (sx.d(*(i_2 + 7)) s<= var_29b60_1)
                                            int32_t eax_35 = sx.d(*(edx_6 + 0x46))
                                            
                                            if (eax_35 == 0xffffffff)
                                                goto label_496311
                                            
                                            while (*(arg1 + eax_35 * 0x14 + 0x46c) != i_2)
                                                eax_35 = sx.d(*(arg1 + ((eax_35 * 5 + 0x11d) << 2)))
                                                
                                                if (eax_35 == 0xffffffff)
                                                    goto label_496311
                                    else if (arg3 != 3)
                                    label_496311:
                                        int32_t ebx_7 = (&__saved_ebp)[temp1_1 - 0x14b]
                                        int32_t* edi_9 =
                                            sub_48f370(ecx, arg1, edx, *(arg1 + 0x19), ebx_7.b, ecx.b)
                                        long double x87_r7_1 = fconvert.t(*(edi_9 + 8))
                                        long double x87_r6_1 = fconvert.t(-1.0)
                                        x87_r6_1 - x87_r7_1
                                        int32_t* eax_40
                                        eax_40.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                                        bool p_1 = unimplemented  {test ah, 0x44}
                                        int32_t ecx_22
                                        
                                        if (not(p_1))
                                            long double st0_1 = sub_495d10(arg1, &var_530, arg3, ecx)
                                            ecx_22 = var_29b34
                                            int32_t eax_45 = ecx_22 * 0xa58
                                            *(&var_29b18 + eax_45) = (&__saved_ebp)[temp1_1 - 0x14b]
                                            *(&var_29b20 + eax_45) = fconvert.d(st0_1)
                                            *(edi_9 + 8) = fconvert.d(st0_1)
                                        else
                                            ecx_22 = var_29b34
                                            int32_t eax_42 = ecx_22 * 0xa58
                                            *(&var_29b18 + eax_42) = ebx_7
                                            *(&var_29b20 + eax_42) =
                                                fconvert.d(fconvert.t(*(edi_9 + 8)))
                                        
                                        var_29b34 = ecx_22 + 1
                                    else if (sub_4a1120(arg1, (&__saved_ebp)[temp1_1 - 0x14b], 0, 
                                            var_29b64_1, 0, 0) != 0)
                                        goto label_496311
                                    
                                    eax_47 = var_29b50_1 + 1
                                    var_29b50_1 = eax_47
                                while (eax_47 s< var_29b44_1)
                                
                                if (var_29b34 != 0)
                                    int32_t* ecx_28 =
                                        sub_48f370(ecx, arg1, edx, *(arg1 + 0x19), -1, ecx.b)
                                    long double x87_r7_4 = fconvert.t(*(ecx_28 + 8))
                                    long double x87_r6_2 = fconvert.t(-1.0)
                                    x87_r6_2 - x87_r7_4
                                    int32_t* eax_49
                                    eax_49.w = (x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                                        | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    long double x87_r7_5
                                    
                                    if (not(p_2))
                                        x87_r7_5 = sub_495db0(arg1, edx, arg1, ecx)
                                        *(ecx_28 + 8) = fconvert.d(x87_r7_5)
                                    else
                                        x87_r7_5 = fconvert.t(*(ecx_28 + 8))
                                    
                                    int32_t edi_11 = var_29b34
                                    
                                    if (var_29b54_1 == 0)
                                        int32_t eax_52 = edi_11 * 0xa58
                                        *(&var_29b18 + eax_52) = 0xffffffff
                                        void var_290c0
                                        *(&var_290c0 + eax_52) = 0xffffffff
                                        *(&var_29b20 + eax_52) = fconvert.d(x87_r7_5)
                                        void var_28668
                                        *(&var_28668 + eax_52) = 0xffffffff
                                        void var_290c8
                                        *(&var_290c8 + eax_52) = fconvert.d(x87_r7_5)
                                        void var_27c10
                                        *(&var_27c10 + eax_52) = 0xffffffff
                                        void var_28670
                                        *(&var_28670 + eax_52) = fconvert.d(x87_r7_5)
                                        void var_271b8
                                        *(&var_271b8 + eax_52) = 0xffffffff
                                        void var_27c18
                                        *(&var_27c18 + eax_52) = fconvert.d(x87_r7_5)
                                        edi_11 += 5
                                        void var_271c0
                                        *(&var_271c0 + eax_52) = fconvert.d(x87_r7_5)
                                    
                                    void var_29b30
                                    int32_t edx_32 = sub_5a7ac0(&var_29b30, edi_11, 0xa58, sub_4928d0)
                                    int32_t eax_53 = sx.d(arg1[0x1ec].b)
                                    int32_t ecx_29 = 3
                                    
                                    if (eax_53 s>= 0)
                                        bool cond:7_1
                                        
                                        if (eax_53.b s>= 0)
                                            edx_32 = *(edx_6 + 0x2c) & 0x7f
                                            
                                            if (edx_32 == eax_53)
                                                ecx_29 = 0
                                            else
                                                edx_32 = *(edx_6 + 0x30) & 0x7f
                                                cond:7_1 = edx_32 != eax_53
                                            label_4964f2:
                                                
                                                if (not(cond:7_1))
                                                    ecx_29 = 0
                                        else
                                            if (*(edx_6 + 0x2c) != eax_53)
                                                cond:7_1 = *(edx_6 + 0x30) != eax_53
                                                goto label_4964f2
                                            
                                            ecx_29 = 0
                                    
                                    if (ecx_29 s> edi_11 - 1)
                                        ecx_29 = edi_11 - 1
                                    
                                    int32_t eax_55 = *(&var_29b18 + ecx_29 * 0xa58)
                                    
                                    if (eax_55 != 0xffffffff)
                                        if (sub_492910(eax_55, edx_32, arg1, edx) != 0)
                                            *(edx_6 + 0xb0) += 1
                                        
                                        int32_t edx_35 = (&__saved_ebp)[ecx_29 * 0x296 - 0xa6c5] * 5
                                        *(arg1 + (edx_35 << 2) + 0x468) |= 0x3f
                                    
                                    (&__saved_ebp)[ecx_29 * 0x296 - 0xa6c5]
                                    sub_5a6aba(arg2 ^ &__saved_ebp)
                                    return 
        else
            int32_t eax_3 = sx.d(arg1[0x1ec].b)
            
            if (eax_3 s>= 0)
                if (eax_3.b s>= 0)
                    if ((*(ecx_3 + 0x2c) & 0x7f) == eax_3 || (*(ecx_3 + 0x30) & 0x7f) == eax_3)
                        goto label_495f93
                else if (*(ecx_3 + 0x2c) == eax_3 || *(ecx_3 + 0x30) == eax_3)
                    goto label_495f93
    label_495fc1:
    sub_5a6aba(arg2 ^ &__saved_ebp)
}

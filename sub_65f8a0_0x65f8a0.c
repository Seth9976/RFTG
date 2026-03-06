// 函数名称: sub_65f8a0
// 虚拟地址: 0x65f8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65f8a0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = arg1[0x16]
    
    if (eax_2 s< 2)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffff7d
    
    if (arg1[1] == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffff76
    
    if (arg3 s>= 0 && (arg3 s> 0 || arg2 u>= 0))
        int32_t temp1_1 = arg1[5]
        
        if (arg3 s<= temp1_1 && (arg3 s< temp1_1 || arg2 u<= arg1[4]))
            if (eax_2 s>= 3)
                int32_t eax_5 = arg1[0x18]
                int32_t ecx_5 = arg1[0xe]
                int32_t temp2_1 = *(ecx_5 + (eax_5 << 3) + 4)
                int32_t* eax_6 = ecx_5 + (eax_5 << 3)
                
                if (arg3 s< temp2_1 || (arg3 s<= temp2_1 && arg2 u< *eax_6))
                    sub_65f310(arg1)
                else
                    int32_t temp3_1 = eax_6[3]
                    
                    if (arg3 s>= temp3_1 && (arg3 s> temp3_1 || arg2 u>= eax_6[2]))
                        sub_65f310(arg1)
            
            int32_t edx = arg1[0x17]
            arg1[0x14] = 0xffffffff
            arg1[0x15] = 0xffffffff
            sub_6462e0(&arg1[0x1e], edx)
            int32_t ecx_6
            int32_t edx_1
            ecx_6, edx_1 = sub_64a430(&arg1[0x78])
            int32_t var_1d8 = arg3
            int32_t var_1dc = arg2
            int32_t var_170[0x5a]
            
            if (sub_65e460(arg1, edx_1, ecx_6) != 0)
                arg1[0x14] = 0xffffffff
                arg1[0x15] = 0xffffffff
                sub_645620(&var_170)
                sub_65f310(arg1)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0xffffff77
            
            int32_t var_180 = 0
            int32_t var_18c = 0
            int32_t var_174 = 0
            int32_t var_188 = 0
            sub_646480(&var_170, arg1[0x17])
            sub_646280(&var_170)
            
            while (true)
                if (arg1[0x16] s< 3)
                    goto label_65fac1
                
                void var_1bc
                
                if (sub_646420(&var_170, &var_1bc) s<= 0)
                    goto label_65fac1
                
                void* eax_15 = (arg1[0x18] << 5) + arg1[0x12]
                int32_t eax_39
                
                if (*(eax_15 + 0x1c) == 0)
                    sub_646420(&arg1[0x1e], nullptr)
                label_65fac1:
                    
                    if (var_180 != 0)
                        eax_39 = 0xffffffff
                        arg1[0x15] = eax_39
                    else
                        void var_19c
                        int32_t eax_23
                        int32_t edx_6
                        eax_23, edx_6 = sub_65e4c0(arg1, &var_19c, 0xffffffff, 0xffffffff)
                        
                        if (edx_6 s>= 0 && (edx_6 s> 0 || eax_23 u>= 0))
                            if (arg1[0x16] s< 3)
                            label_65fb4f:
                                uint32_t i = sub_6455f0(&var_19c)
                                int32_t ecx_9 = arg1[0xd]
                                int32_t edi_3 = 0
                                
                                if (ecx_9 s> 0)
                                    int32_t* eax_26 = arg1[0x10]
                                    
                                    while (*eax_26 != i)
                                        edi_3 += 1
                                        eax_26 = &eax_26[1]
                                        
                                        if (edi_3 s>= ecx_9)
                                            break
                                
                                if (edi_3 == ecx_9)
                                    continue
                                else
                                    arg1[0x18] = edi_3
                                    arg1[0x17] = i
                                    sub_6462e0(&arg1[0x1e], i)
                                    sub_6462e0(&var_170, i)
                                    int32_t eax_28 = arg1[0xf]
                                    arg1[0x16] = 3
                                    int32_t temp7_1 = *(eax_28 + (edi_3 << 3) + 4)
                                    
                                    if (edx_6 s> temp7_1 ||
                                            (edx_6 s>= temp7_1 && eax_23 u> *(eax_28 + (edi_3 << 3))))
                                        var_188 = 0
                                    else
                                        var_188 = 1
                            else
                                uint32_t eax_24 = sub_6455f0(&var_19c)
                                
                                if (arg1[0x17] != eax_24 && sub_645520(&var_19c) != 0)
                                    sub_65f310(arg1)
                                    sub_645620(&var_170)
                                
                                if (arg1[0x16] s< 3)
                                    goto label_65fb4f
                            
                            sub_645f20(&arg1[0x1e], &var_19c)
                            sub_645f20(&var_170, &var_19c)
                            var_174 = sub_645540(&var_19c)
                            continue
                        
                        int32_t edx_18
                        eax_39, edx_18 = sub_65f810(arg1, 0xffffffff)
                        arg1[0x15] = edx_18
                else
                    int32_t ebx_1 = sub_68b570(eax_15, &var_1bc)
                    
                    if (ebx_1 s< 0)
                        sub_646420(&arg1[0x1e], nullptr)
                        ebx_1 = 0
                    else if (var_174 != 0 && var_188 == 0)
                        sub_646420(&arg1[0x1e], nullptr)
                    else if (var_180 != 0)
                        var_18c += (ebx_1 + var_180) s>> 2
                    
                    int32_t var_1ac
                    int32_t var_1a8
                    
                    if ((var_1ac & var_1a8) != 0xffffffff)
                        int32_t ecx_11 = arg1[0x18]
                        void* eax_31 = arg1[0x11]
                        int32_t ecx_12 = ecx_11 * 2
                        int32_t edx_8 = var_1ac - *(eax_31 + (ecx_12 << 3))
                        int32_t ecx_13 = 0
                        int32_t ebx_3 = sbb.d(var_1a8, *(eax_31 + (ecx_12 << 3) + 4), 
                            var_1ac u< *(eax_31 + (ecx_12 << 3)))
                        int32_t var_17c_2 = edx_8
                        int32_t var_178_2 = ebx_3
                        
                        if (ebx_3 s<= 0 && (ebx_3 s< 0 || edx_8 u< 0))
                            ebx_3 = 0
                            var_17c_2 = 0
                            var_178_2 = 0
                        
                        int32_t edi_5 = 0
                        int32_t edx_9 = 0
                        int32_t var_184_1 = 0
                        int32_t var_180_1 = 0
                        
                        if (ecx_11 s>= 2)
                            int32_t i_3 = ((arg1[0x18] - 2) u>> 1) + 1
                            void* eax_32 = eax_31 + 0x18
                            int32_t i_2 = i_3
                            int32_t i_1
                            
                            do
                                int32_t edx_14 = *(eax_32 - 0x10)
                                int32_t temp14_1 = var_184_1
                                var_184_1 += edx_14
                                var_180_1 =
                                    adc.d(var_180_1, *(eax_32 - 0xc), temp14_1 + edx_14 u< temp14_1)
                                int32_t temp15_1 = ecx_13
                                ecx_13 += *eax_32
                                edi_5 = adc.d(edi_5, *(eax_32 + 4), temp15_1 + *eax_32 u< temp15_1)
                                eax_32 += 0x20
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                            ebx_3 = var_178_2
                            edx_9 = i_3 * 2
                        
                        if (edx_9 s< arg1[0x18])
                            int32_t edx_16 = edx_9 << 4
                            int32_t eax_34 = *(edx_16 + arg1[0x11] + 8)
                            int32_t temp13_1 = var_17c_2
                            var_17c_2 += eax_34
                            int32_t var_174_2 = edx_16
                            ebx_3 = adc.d(ebx_3, *(edx_16 + arg1[0x11] + 0xc), 
                                temp13_1 + eax_34 u< temp13_1)
                        
                        int32_t eax_38
                        int32_t edx_17
                        edx_17:eax_38 = sx.q(var_18c)
                        int32_t ecx_14 = ecx_13 - eax_38
                        int32_t ecx_15 = ecx_14 + var_184_1
                        int32_t ecx_16 = ecx_15 + var_17c_2
                        int32_t edi_8 = adc.d(
                            adc.d(sbb.d(edi_5, edx_17, ecx_13 u< eax_38), var_180_1, 
                                ecx_14 + var_184_1 u< ecx_14), 
                            ebx_3, ecx_15 + var_17c_2 u< ecx_15)
                        eax_39 = 0
                        arg1[0x14] = ecx_16
                        arg1[0x15] = edi_8
                        
                        if (edi_8 s> 0)
                            break
                        
                        if (edi_8 s>= 0 && ecx_16 u>= 0)
                            break
                    else
                        var_180 = ebx_1
                        continue
                    
                    arg1[0x15] = eax_39
                
                arg1[0x14] = eax_39
                break
            
            sub_645620(&var_170)
            long double x87_r7 = float.t(0)
            *(arg1 + 0x68) = fconvert.d(x87_r7)
            *(arg1 + 0x70) = fconvert.d(x87_r7)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffff7d
}

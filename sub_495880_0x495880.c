// 函数名称: sub_495880
// 虚拟地址: 0x495880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_495880(int32_t arg1 @ esi, int128_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8, double* arg9, int32_t arg10)
{
    // 第一条实际指令: __chkstk(0x42d0)
    __chkstk(0x42d0)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    
    if (arg6 s<= arg5)
        if (arg5 != 0)
            sub_495880(arg2, arg3, arg4, arg5 - 1, arg6, arg7 * 2, arg8, arg9, arg10)
            
            if (arg6 != 0)
                sub_495880(arg2, arg3, arg4, arg5 - 1, arg6 - 1, arg7 * 2 + 1, arg8, arg9, arg10)
        else
            int32_t ecx_2 = 0
            int32_t var_530[0x13f]
            
            if (arg7 s>= 1)
                int32_t eax_4 = 1
                
                do
                    if ((arg7 & eax_4) != 0)
                        var_530[ebx] = *(arg4 + (ecx_2 << 2))
                        ebx += 1
                    
                    ecx_2 += 1
                    eax_4 = 1 << ecx_2.b
                while (eax_4 s<= arg7)
            
            int32_t var_14_1 = arg3
            void var_42c0
            void* esi_1 = &var_42c0
            sub_48bb40(arg2, esi_1, arg7.b)
            int32_t edi_2 = arg3 * 0xb4
            int32_t var_42d4 = arg10
            sub_4af830(arg3, &var_530, &var_42d4, esi_1, &var_530, ebx, 
                &(&__saved_ebp)[arg3 * 0x2d - 0x10a7])
            sub_4af920(esi_1)
            int32_t ecx_7 = sx.d(*(arg2 + 0x458))
            int32_t eax_8 = 0
            
            if (ecx_7 s> 0)
                void var_4210
                void* edx_4 = &var_4210
                
                do
                    if (eax_8 != arg3)
                        *edx_4 = 2
                    
                    eax_8 += 1
                    edx_4 += 0xb4
                while (eax_8 s< ecx_7)
            
            int32_t i = 0
            
            if (data_2691be0 s> 0)
                do
                    int32_t var_14_3 = arg3
                    void var_23f8
                    sub_48bb40(&var_42c0, &var_23f8, arg3.b)
                    int32_t var_23cc[0x7a5]
                    var_23c8
                    
                    if (*(arg2 + 0x459) != 0)
                        int32_t ecx_8 = *((i << 3) + &data_8c6820)
                        
                        if (ecx_8.b s>= 0)
                            int32_t eax_12 = *((i << 3) + &data_8c6824)
                            
                            if (eax_12.b s>= 0)
                                var_23cc[arg3 * 0x2d] = ecx_8
                                *(&var_23c8 + edi_2) = eax_12
                                goto label_495a14
                    else
                        int32_t eax_11 = *((i << 2) + &data_8c6a80)
                        
                        if (eax_11.b s>= 0)
                            var_23cc[arg3 * 0x2d] = eax_11
                            *(&var_23c8 + edi_2) = 0xffffffff
                        label_495a14:
                            int32_t var_14_4 = 0
                            char var_538_1 = 0xff
                            int32_t eax_15
                            char edx_7
                            eax_15, edx_7 = sub_48bc70(&var_23f8, sub_4b0760(&var_23f8))
                            int32_t eax_16
                            long double st0_1
                            st0_1, eax_16 = sub_4904a0(eax_15, edx_7, &var_23f8, arg3)
                            long double x87_r6_2 =
                                fconvert.t(*arg9) - fconvert.t(9.9999999999999995e-07)
                            x87_r6_2 - st0_1
                            eax_16.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                                | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                            bool p_1 = unimplemented  {test ah, 0x41}
                            
                            if (not(p_1))
                                *arg9 = fconvert.d(st0_1)
                                *arg8 = arg7
                    i += 1
                while (i s< data_2691be0)
                
                sub_5a6aba(arg1 ^ &__saved_ebp)
                return 
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
}

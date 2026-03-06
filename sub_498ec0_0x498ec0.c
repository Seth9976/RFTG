// 函数名称: sub_498ec0
// 虚拟地址: 0x498ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_498ec0(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t* arg9, double* arg10)
{
    // 第一条实际指令: __chkstk(0x23fc)
    __chkstk(0x23fc)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    int32_t entry_ebx
    
    if (arg5 s<= arg4)
        if (arg4 != 0)
            sub_498ec0(arg1, arg2, arg3, arg4 - 1, arg5, arg6 * 2, arg7, arg8, arg9, arg10)
            
            if (arg5 != 0)
                sub_498ec0(arg1, arg2, arg3, arg4 - 1, arg5 - 1, arg6 * 2 + 1, arg7, arg8, arg9, arg10)
                sub_5a6aba(entry_ebx ^ &__saved_ebp)
                return 
        else
            int32_t ecx_1 = 0
            int32_t var_52c[0x13d]
            
            if (arg6 s>= 1)
                int32_t eax_4 = 1
                
                do
                    if ((arg6 & eax_4) != 0)
                        var_52c[edi] = *(arg3 + (ecx_1 << 2))
                        edi += 1
                    
                    ecx_1 += 1
                    eax_4 = 1 << ecx_1.b
                while (eax_4 s<= arg6)
            
            int32_t var_14_1 = arg2
            void var_23f4
            sub_48bb40(arg1, &var_23f4, arg6.b)
            int32_t eax_8
            char edx_4
            eax_8, edx_4 = sub_4a8ae0(&var_23f4, arg2, arg8, &var_23f4, arg7, &var_52c, edi)
            
            if (eax_8 != 0)
                int32_t eax_9
                long double st0_1
                st0_1, eax_9 = sub_4904a0(eax_8, edx_4, &var_23f4, arg2)
                long double x87_r6_2 = fconvert.t(*arg10) - fconvert.t(9.9999999999999995e-07)
                x87_r6_2 - st0_1
                eax_9.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    *arg10 = fconvert.d(st0_1)
                    *arg9 = arg6
                    sub_5a6aba(entry_ebx ^ &__saved_ebp)
                    return 
    
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
}
